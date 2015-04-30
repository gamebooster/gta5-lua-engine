#pragma once
#include "rage_engine.h"
#include "pgCollection.h"
#include "utils.h"

namespace rage {

	class 
		ScriptHook {
	 public:
			static void AttachScriptThread(rage::ScriptThread* thread);
			static void DetachScriptThread(rage::ScriptThread* thread);
	};
}