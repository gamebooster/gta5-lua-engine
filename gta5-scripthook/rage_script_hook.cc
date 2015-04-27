#include "rage_script_hook.h"
#include "Hooking.Patterns.h"

namespace rage {
	static rage::pgPtrCollection<rage::ScriptThread>* script_thread_array = nullptr;
	static rage::ScriptHandlerManager* g_script_handler_manager = nullptr;

	static uint32_t* g_thread_id;
	static uint32_t* g_thread_count;

	static std::pair<ScriptThread*, int> org_thread;

	void RunPatternScans() {
		if (rage::g_registrationTable != 0) return;

		char* location = hook::pattern("48 8B C8 EB 03 48 8B CB 48 8B 05").count(1).get(0).get<char>(11);
		script_thread_array = reinterpret_cast<decltype(script_thread_array)>(location + *(int32_t*)location + 4);
		utils::Log(L"ScriptHook: script_thread_array %llx", script_thread_array);

		location = hook::pattern("74 17 48 8B C8 E8 ? ? ? ? 48 8D 0D").count(1).get(0).get<char>(13);
		g_script_handler_manager = reinterpret_cast<decltype(g_script_handler_manager)>(location + *(int32_t*)location + 4);
		utils::Log(L"ScriptHook: g_script_handler_manager %llx", g_script_handler_manager);

		location = hook::pattern("FF 40 5C 8B 15 ? ? ? ? 48 8B").count(1).get(0).get<char>(5);
		g_thread_id = reinterpret_cast<decltype(g_thread_id)>(location + *(int32_t*)location + 4);
		utils::Log(L"ScriptHook: g_thread_id %llx", g_thread_id);

		location -= 9;
		g_thread_count = reinterpret_cast<decltype(g_thread_count)>(location + *(int32_t*)location + 4);
		utils::Log(L"ScriptHook: g_thread_count %llx", g_thread_count);
	}

	void rage::ScriptHook::AttachScriptThread(rage::ScriptThread* thread) {
		RunPatternScans();

		// get a free thread slot
		auto collection = rage::script_thread_array;
		int slot = 0;

		for (auto& thread : *collection)
		{
			auto context = thread->GetContext();
			if (context->ThreadId == 0)
			{
				break;
			}

			slot++;
		}

		// did we get a slot?
		if (slot == collection->count())
		{
			return;
		}

		thread->Reset(1, nullptr, 0);

		if (*g_thread_id == 0)
		{
			(*g_thread_id)++;
		}

		thread->SetThreadId(*g_thread_id);
		thread->script_handler_manager = g_script_handler_manager;

		*(g_thread_id)++;
		*(g_thread_count)++;

		org_thread = std::pair<ScriptThread*, int>(collection->at(slot), slot);

		collection->set(slot, thread);

		utils::Log(L"ScriptHook: Attached a new script thread with id: %d at %llx\n", thread->GetThreadId(), thread);

	}

	void rage::ScriptHook::DetachScriptThread(rage::ScriptThread* thread) {
		if (org_thread.first != nullptr) {
			auto collection = rage::script_thread_array;
			collection->set(org_thread.second, org_thread.first);
		}
		
	}

}