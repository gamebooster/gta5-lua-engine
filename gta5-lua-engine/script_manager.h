#pragma once
#include "common.h"

#include <map>
#include <string>

namespace lua {
	class ManagedScriptThread : rage::ScriptThread {
		typedef void(*callback_func)();

		callback_func callback;
		virtual void DoRun() override {
			callback();
		}
		explicit ManagedScriptThread(ManagedScriptThread const&);
		void operator=(ManagedScriptThread const&);
	  public:
		  ManagedScriptThread() {
		  }
		  ~ManagedScriptThread() {
#ifdef COMPILE_BLADE_SCRIPTHOOK
			  scriptUnregister(callback);
#else
			  rage::ScriptHook::DetachScriptThread(this);
#endif
		  }

		  void SetCallback(callback_func cb) {
			  callback = cb;
#ifdef COMPILE_BLADE_SCRIPTHOOK
			  scriptRegister(GetModuleHandle(NULL), callback);
#else
			  rage::ScriptHook::AttachScriptThread(this);
#endif
		  }

	};

	class ScriptManager {
	public:
		void CallOnDrawTick();

		void LoadScript(const std::string& name);
		void UnloadScript(const std::string& name);
		void UnloadScripts();
		void ExecuteScript(const std::string& name);
		void ReloadScripts();
		static ScriptManager& GetInstance();

	private:
		void CallOnScriptThread();
		typedef std::map<std::string, LuaIntf::LuaContext> ScriptsMap;
		ScriptsMap scripts_;
		ManagedScriptThread script_thread_;

		ScriptManager();
		explicit ScriptManager(ScriptManager const&);
		void operator=(ScriptManager const&);

		CRITICAL_SECTION lock_;
	};
}  // namespace lua

