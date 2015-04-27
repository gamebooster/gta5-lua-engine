#pragma once
#include "common.h"

#include <map>
#include <string>

namespace lua {
	class ManagedScriptThread : rage::ScriptThread {
		std::function<void()> callback;
		virtual void DoRun() override {
			callback();
		}
		explicit ManagedScriptThread(ManagedScriptThread const&);
		void operator=(ManagedScriptThread const&);
	  public:
		  ManagedScriptThread() {
		  }
		  ~ManagedScriptThread() {
			  rage::ScriptHook::DetachScriptThread(this);
		  }

		  void SetCallback(std::function<void()> cb) {
			  callback = cb;
			  rage::ScriptHook::AttachScriptThread(this);
		  }

	};

	class ScriptManager {
	public:
		void CallOnDrawTick();

		void LoadScript(const std::string& name);
		void UnloadScript(const std::string& name);
		void UnloadScripts();
		void ExecuteScript(const std::string& name);
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

