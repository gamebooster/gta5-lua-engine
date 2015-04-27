#include "rage_script_hook.h"

void Test()
{
	rage::ScriptHook::AttachScriptThread(nullptr);
	rage::ScriptHook::DetachScriptThread(nullptr);
}

