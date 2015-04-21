#include "rage_engine.h"
#include "pgCollection.h"
#include "utils.h"

namespace rage {

	class 
		#ifdef COMPILING_SCRIPTHOOK
		__declspec(dllexport)
		#else
		__declspec(dllimport)
		#endif
		ScriptHook {
	 public:
		static void AttachScriptThread(rage::ScriptThread* thread);
		static void DetachScriptThread(rage::ScriptThread* thread);
	};
}