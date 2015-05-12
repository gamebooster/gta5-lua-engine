#include "rage_engine.h"
#include "Hooking.h"
#include "Hooking.Patterns.h"


uint64_t rage::GetNativeHandler(uint64_t function_hash) {
  static uint64_t g_registrationTable;

	if (g_registrationTable == 0)
	{
		char* location = hook::pattern("76 61 49 8B 7A 40 48 8D 0D").count(1).get(0).get<char>(9);
    g_registrationTable = reinterpret_cast<decltype(g_registrationTable)>(location + *(int32_t*)location + 4);
		utils::Log(L"ScriptHook: g_registrationTable %llx", g_registrationTable);
	}

	uint8_t sort = function_hash;

	if (reinterpret_cast<uint64_t*>(g_registrationTable + sort * 8) == nullptr) {
		utils::Log(L"ScriptHook: unknown hash %llx \n", function_hash);
		return 0;
	}

	rage::NativeFunctionSort* sort_struct = *reinterpret_cast<rage::NativeFunctionSort**>(g_registrationTable + sort * 8);

	while (sort_struct) {
		for (uint64_t i = 0; i < sort_struct->num_functions; i++) {
			if (sort_struct->hashes[i] == function_hash)
			{
				return sort_struct->function_addresses[i];
			}
		}
		sort_struct = sort_struct->next;
	}

	utils::Log(L"ScriptHook: unknown hash %llx \n", function_hash);
	return 0;
}


rage::THREAD_STATE rage::ScriptThread::Tick(uint32_t opsToExecute) {
	static void* tick_address = 0;
	if (tick_address == 0) {
		tick_address = hook::pattern("80 B9 46 01 00 00 00 8B  FA 48 8B D9 74 05").count(1).get(0).get<void>(-0xF);
	}

	typedef rage::THREAD_STATE(__thiscall *ThreadTick)(void*, uint32_t);
	ThreadTick tick = (ThreadTick)tick_address;

	return tick(this, opsToExecute);
}

void rage::ScriptThread::Kill()
{
	utils::Log(L"ScriptKill");
	static void* kill_address = 0;
	if (kill_address == 0) {
		kill_address = hook::pattern("48 83 EC 20 48 83 B9 10 01 00 00 00 48 8B D9 74 14").count(1).get(0).get<void>(-6);
	}
	typedef void (__thiscall *ThreadKill)(void*);
	ThreadKill kill = (ThreadKill)kill_address;

	kill(this);
}

rage::THREAD_STATE rage::ScriptThread::Run(uint32_t opsToExecute) {
	if (!this->m_pMissionCleanup) {
		script_handler_manager->AttachScript(this);
		this->long_running_thread = true;
	}

	auto pair = GetActiveThread();

	SetActiveThread(this, true);

	if (GetContext()->State != rage::ThreadStateKilled) {
		DoRun();
	}


	SetActiveThread(pair.first, pair.second);

	return GetContext()->State;
}

rage::THREAD_STATE rage::ScriptThread::Reset(uint32_t scriptHash, void* pArgs, uint32_t argCount)
{
	utils::Log(L"ScriptReset");
	memset(&m_Context, 0, sizeof(m_Context));

	m_Context.State = rage::ThreadStateIdle;
	m_Context.ScriptHash = scriptHash;
	m_Context._mUnk1 = -1;
	m_Context._mUnk2 = -1;

	m_Context._set1 = 1;

	static void* init_address = 0;
	if (init_address == 0) {
		init_address = hook::pattern("83 89 38 01 00 00 FF 83 A1 50 01 00 00 F0").count(1).get(0).get<void>();
	}

	typedef void(__thiscall *ThreadKill)(void*);
	ThreadKill kill = (ThreadKill)init_address;
	kill(this);

	m_pszExitMessage = "Normal exit";

	return m_Context.State;
}
