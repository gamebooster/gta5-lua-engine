#pragma once
#include "common.h"

#include <map>
#include <string>

#pragma comment(lib, "winmm.lib")
#include <mmsystem.h>


namespace lua {

#undef Yield

	class ManagedScriptThread : rage::ScriptThread {
		typedef void(*callback_func)();
    HANDLE m_fiber;
    uint32_t m_wakeAt;

		callback_func callback;
    virtual void DoRun() override;
		explicit ManagedScriptThread(ManagedScriptThread const&);
		void operator=(ManagedScriptThread const&);

	  public:
		  ManagedScriptThread() {
        m_fiber = nullptr;
        m_wakeAt = timeGetTime();
		  }
		  ~ManagedScriptThread() {
#ifdef COMPILE_BLADE_SCRIPTHOOK
			  scriptUnregister(callback);
#else
			  rage::ScriptHook::DetachScriptThread(this);
#endif
		  }

      void Run() {
        callback();
      }

      void Yield(uint32_t time);

		  void SetCallback(callback_func cb) {
			  callback = cb;
#ifdef COMPILE_BLADE_SCRIPTHOOK
			  scriptRegister(nullptr, callback);
#else
			  rage::ScriptHook::AttachScriptThread(this);
#endif
		  }

	};

	class ScriptManager {
	public:
		void CallOnDrawTick();

		bool LoadScript(const std::string& name);
		void UnloadScript(const std::string& name);
		void UnloadScripts();
		void ExecuteScript(const std::string& name);
		void ReloadScripts();
		static ScriptManager& GetInstance();

    void Wait(uint32_t ms) {
      script_thread_.Yield(ms);
    }

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

