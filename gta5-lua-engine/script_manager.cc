#include "common.h"
#include "script_manager.h"
#include "ScriptNativeRegister.h"
#include "console.h"


namespace lua {
  void ManagedScriptThread::DoRun() {
    callback();
  }

  void ManagedScriptThread::Yield(uint32_t time) {
    Sleep(time);
  }


	ScriptManager& ScriptManager::GetInstance() {
		static ScriptManager  instance;
		return instance;
	}
	void ScriptManager::CallOnDrawTick()
	{

		EnterCriticalSection(&lock_);

		for (ScriptsMap::const_iterator it = scripts_.begin(); it != scripts_.end(); it++)
		{
			try {
				LuaIntf::LuaRef func(it->second, "OnDrawTick");
				func();
			}
			catch (LuaIntf::LuaException const& e) {
				TextConsole::GetInstance().AddLog("%s", e.what());
				UnloadScript(it->first);
				break;
			}
		}
		LeaveCriticalSection(&lock_);
	}
	void ScriptManager::CallOnScriptThread()
	{
		EnterCriticalSection(&lock_);

		for (ScriptsMap::const_iterator it = scripts_.begin(); it != scripts_.end(); it++)
		{

			try {
				LuaIntf::LuaRef func(it->second, "OnScriptTick");
				func();
			}
			catch (LuaIntf::LuaException const& e) {
				TextConsole::GetInstance().AddLog("%s", e.what());
				UnloadScript(it->first);
				break;
			}
		}
		LeaveCriticalSection(&lock_);
	}

	bool ScriptManager::LoadScript(const std::string& name) {
		EnterCriticalSection(&lock_);

		UnloadScript(name);

		lua::RegisterNativeFunctions(scripts_[name]);

		try {
			std::wstring wdirectory = utils::GetModuleDirectory();
			std::string directory = ws2s(wdirectory);
			directory += "/scripts/";
			std::replace(directory.begin(), directory.end(), '\\','/');
			scripts_[name].doString(("package.path = \"" + directory + "?.lua;\" .. package.path").c_str());
			scripts_[name].doFile(name.c_str());
			ExecuteScript(name);
		}
		catch (LuaIntf::LuaException ex) {
			TextConsole::GetInstance().AddLog("%s", ex.what());
			UnloadScript(name);

      LeaveCriticalSection(&lock_);
      return false;
		}

		LeaveCriticalSection(&lock_);

    return true;
	}
	void ScriptManager::UnloadScript(const std::string& name) {
		EnterCriticalSection(&lock_);
		ScriptsMap::const_iterator it = scripts_.find(name);
		if (it != scripts_.end()) {
			scripts_.erase(name);
		}
		LeaveCriticalSection(&lock_);
	}
	void ScriptManager::ExecuteScript(const std::string& name) {
		EnterCriticalSection(&lock_);
		ScriptsMap::const_iterator it = scripts_.find(name);
		if (it != scripts_.end()) {
			try {
				LuaIntf::LuaRef func(it->second, "Initialize");
				func();
			}
			catch (LuaIntf::LuaException const& e) {
				TextConsole::GetInstance().AddLog("%s", e.what());
				UnloadScript(it->first);
			}
		}
		LeaveCriticalSection(&lock_);
	}

	void ScriptManager::ReloadScripts()
	{
		EnterCriticalSection(&lock_);

		ScriptsMap::iterator it = scripts_.begin();
		auto end = scripts_.end();
		while (it != end) {
			std::string name = it->first;
			it = scripts_.erase(it);
			LoadScript(name);
		}
		LeaveCriticalSection(&lock_);
	}

	ScriptManager::ScriptManager() {
		InitializeCriticalSection(&lock_);
		script_thread_.SetCallback(static_cast<void(*)()>([]() {
#ifdef COMPILE_BLADE_SCRIPTHOOK
			while (true)
			{
				ScriptManager::GetInstance().CallOnScriptThread();
				scriptWait(0);
			}
#else
			ScriptManager::GetInstance().CallOnScriptThread();
#endif
		}));
	}

	void ScriptManager::UnloadScripts() {
		EnterCriticalSection(&lock_);
		scripts_.clear();
		LeaveCriticalSection(&lock_);
	}
}  // namespace lua