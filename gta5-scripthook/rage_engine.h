#pragma once
#include <stdint.h>
#include <utility>
#include "utils.h"

namespace rage{
	class ScriptThread;
	class ScriptHandlerManager;
}

namespace rage {

	enum THREAD_STATE : unsigned int
	{
		ThreadStateIdle,
		ThreadStateRunning,
		ThreadStateKilled,
		ThreadState3,
		ThreadState4,			// Sets opsToExecute to 1100000, and state to Idle in CallNative
	};

	inline std::pair<ScriptThread*, bool> GetActiveThread()
	{
		char* tls = *reinterpret_cast<char**>(__readgsqword(0x58));
		return std::pair<ScriptThread*, bool>(*reinterpret_cast<ScriptThread**>(tls + 0x830), *reinterpret_cast<bool*>(tls + 0x838));
	}

	inline void SetActiveThread(ScriptThread* thread, bool active) {

		char* tls = *reinterpret_cast<char**>(__readgsqword(0x58));
		*reinterpret_cast<ScriptThread**>(tls + 0x830) = thread;
		*reinterpret_cast<bool*>(tls + 0x838) = active;
	}

	// size should be 168
	struct scrThreadContext
	{
		uint32_t ThreadId;
		uint32_t ScriptHash; // + 4 (program id)
		THREAD_STATE State; // + 8
		uint32_t IP; // + 12
		uint32_t FrameSP; // 
		uint32_t SP; // + 20, aka + 28
		uint32_t TimerA; // + 24
		uint32_t TimerB; // + 28
		uint32_t TimerC; // + 32, aka + 40
		uint32_t _mUnk1;
		uint32_t _mUnk2;
		uint32_t _f2C;
		uint32_t _f30;
		uint32_t _f34;
		uint32_t _f38;
		uint32_t _f3C;
		uint32_t _f40;
		uint32_t _f44;
		uint32_t _f48;
		uint32_t _f4C;
		uint32_t _f50; // should be +88 aka +80; stack size?

		uint32_t pad1;
		uint32_t pad2;
		uint32_t pad3;

		uint32_t _set1;

		uint32_t pad[68 / 4];
	};

	static_assert(sizeof(scrThreadContext) == 168, "scrThreadContext has wrong size!");

	class
		scrThread
	{
	protected:
		scrThreadContext		m_Context;
		void*					m_pStack; // should be +176 including vtable
		void*					pad;
		void*					pad2;

		// should be +200
		const char*				m_pszExitMessage;

	public:
		virtual ~scrThread()																	{}
		virtual THREAD_STATE	Reset(uint32_t scriptHash, void* pArgs, uint32_t argCount) = 0;
		virtual THREAD_STATE	Run(uint32_t opsToExecute) = 0;
		virtual THREAD_STATE	Tick(uint32_t opsToExecute) = 0;
		virtual void			Kill() = 0;

		scrThreadContext*		GetContext()													{ return &m_Context; }
		int GetThreadId() { return GetContext()->ThreadId; }
		void SetThreadId(int id) { GetContext()->ThreadId = id; }
		void SetThreadState(THREAD_STATE new_state) { GetContext()->State = new_state; }
	};


class
ScriptThread: public rage::scrThread
{
public:
	char gta_pad[64];
	void* m_pMissionCleanup;
	char _0x0118[40];
	BYTE N1A8E7485; //0x0140 
	bool long_running_thread; //0x0141 
	BYTE N1A8EA1D0; //0x0142 
	BYTE N1A8EA9F1; //0x0143 
	char _0x0144[20];
	rage::ScriptHandlerManager* script_handler_manager;

public:
	virtual rage::THREAD_STATE		Reset(uint32_t scriptHash, void* pArgs, uint32_t argCount);
	virtual rage::THREAD_STATE		Run(uint32_t opsToExecute);
	virtual rage::THREAD_STATE		Tick(uint32_t opsToExecute);
	virtual void					Kill();

	virtual void					DoRun() = 0;
};

//static_assert(sizeof(ScriptThread) == 352, "GtaThread has wrong size!");

	class ScriptHandlerManager
	{
	public:
		virtual ~ScriptHandlerManager() = 0;

		virtual void m1() = 0;

		virtual void m2() = 0;

		virtual void m3() = 0;

		virtual void m4() = 0;

		virtual void m5() = 0;

		virtual void m6() = 0;

		virtual void m7() = 0;

		virtual void m8() = 0;

		virtual void m9() = 0;

		virtual void AttachScript(void* thread) = 0;
	};

	class NativeCallContext
	{
	protected:
		void* m_pReturn;
		uint32_t m_nArgCount;
		void* m_pArgs;

		uint32_t m_nDataCount;

	public:
		template<typename T>
		inline T GetArgument(int idx)
		{
			intptr_t* arguments = (intptr_t*)m_pArgs;

			return *(T*)&arguments[idx];
		}

		template<typename T>
		inline void SetResult(int idx, T value)
		{
			intptr_t* returnValues = (intptr_t*)m_pReturn;

			*(T*)&returnValues[idx] = value;
		}

		inline int GetArgumentCount()
		{
			return m_nArgCount;
		}

		template<typename T>
		inline T GetResult(int idx)
		{
			intptr_t* returnValues = (intptr_t*)m_pReturn;

			return *(T*)&returnValues[idx];
		}
	};

	class NativeContext : public  NativeCallContext
	{
	private:
		// Configuration
		enum
		{
			MaxNativeParams = 26,
			ArgSize = 8,
		};

		// Anything temporary that we need
		uint8_t m_TempStack[MaxNativeParams * ArgSize];

	public:
		inline NativeContext()
		{
			m_pArgs = &m_TempStack;
			m_pReturn = &m_TempStack;		// It's okay to point both args and return at 
			// the same pointer. The game should handle this.
			m_nArgCount = 0;
			m_nDataCount = 0;
		}

		template <typename T>
		inline void Push(T value)
		{
			if (sizeof(T) > ArgSize)
			{
				throw "Argument has an invalid size";
			}
			else if (sizeof(T) < ArgSize)
			{
				// Ensure we don't have any stray data
				*reinterpret_cast<uintptr_t*>(m_TempStack + ArgSize * m_nArgCount) = 0;
			}

			*reinterpret_cast<T*>(m_TempStack + ArgSize * m_nArgCount) = value;
			m_nArgCount++;
		}

		inline void Reverse()
		{
			uintptr_t tempValues[MaxNativeParams];
			uintptr_t* args = (uintptr_t*)m_pArgs;

			for (uint32_t i = 0; i < m_nArgCount; i++)
			{
				int target = m_nArgCount - i - 1;

				tempValues[target] = args[i];
			}

			memcpy(m_TempStack, tempValues, sizeof(m_TempStack));
		}

		template <typename T>
		inline T GetResult()
		{
			return *reinterpret_cast<T*>(m_TempStack);
		}
	};

	struct NativeFunctionSort {
		NativeFunctionSort* next; //0x0000 
		uint64_t function_addresses[7]; //0x0008 
		uint64_t num_functions; //0x0040 
		uint64_t hashes[7]; //0x0048 
	};


	static uint64_t g_registrationTable = 0;


	uint64_t GetNativeHandler(uint64_t function_hash);
	struct pass
	{
		template<typename ...T> pass(T...) {}
	};

	class NativeInvoke
	{
	private:
		static inline void Invoke(NativeContext *cxt, uint64_t hash)
		{
			typedef void(__cdecl * NativeHandler)(NativeContext* context);
			NativeHandler fn = reinterpret_cast<NativeHandler>(GetNativeHandler(hash));

			if (fn != 0)
			{
				fn(cxt);
			}
		}

	public:

		template<uint64_t Hash>
		static inline void Invoke()
		{
			NativeContext cxt;
			Invoke(&cxt, Hash);
		}

		template<uint64_t Hash, typename R>
		static inline R Invoke()
		{
			NativeContext cxt;
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}

		template<uint64_t Hash, typename R,
			typename T0>
			static inline R Invoke(
			T0 p0)
		{
			NativeContext cxt;
			cxt.Push(p0);
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1>
			static inline R Invoke(
			T0 p0, T1 p1)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);  cxt.Push(p20);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20, T21 p21)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);  cxt.Push(p20);  cxt.Push(p21);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20, T21 p21, T22 p22)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);  cxt.Push(p20);  cxt.Push(p21);  cxt.Push(p22);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20, T21 p21, T22 p22, T23 p23)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);  cxt.Push(p20);  cxt.Push(p21);  cxt.Push(p22);  cxt.Push(p23);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20, T21 p21, T22 p22, T23 p23, T24 p24)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);  cxt.Push(p20);  cxt.Push(p21);  cxt.Push(p22);  cxt.Push(p23);  cxt.Push(p24);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}
		template<uint64_t Hash, typename R,
			typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
			static inline R Invoke(
			T0 p0, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9, T10 p10, T11 p11, T12 p12, T13 p13, T14 p14, T15 p15, T16 p16, T17 p17, T18 p18, T19 p19, T20 p20, T21 p21, T22 p22, T23 p23, T24 p24, T25 p25)
		{
			NativeContext cxt;
			cxt.Push(p0);  cxt.Push(p1);  cxt.Push(p2);  cxt.Push(p3);  cxt.Push(p4);  cxt.Push(p5);  cxt.Push(p6);  cxt.Push(p7);  cxt.Push(p8);  cxt.Push(p9);  cxt.Push(p10);  cxt.Push(p11);  cxt.Push(p12);  cxt.Push(p13);  cxt.Push(p14);  cxt.Push(p15);  cxt.Push(p16);  cxt.Push(p17);  cxt.Push(p18);  cxt.Push(p19);  cxt.Push(p20);  cxt.Push(p21);  cxt.Push(p22);  cxt.Push(p23);  cxt.Push(p24);  cxt.Push(p25);
			
			Invoke(&cxt, Hash);
			return cxt.GetResult<R>();
		}


		//template<uint64_t Hash, typename R, typename... Args>
		//static inline R Invoke(Args... args)
		//{
		//	NativeContext cxt;

		//	pass{ ([&]()
		//	{
		//		cxt.Push(args);
		//	}(), 1)... };

		//	// reverse the order of the list since the pass method pushes in reverse
		//	

		//	Invoke(&cxt, Hash);

		//	return cxt.GetResult<R>();
		//}
	};

	struct scrVector
	{
    scrVector(float in_x, float in_y, float in_z)
    {
      x = in_x;
      y = in_y;
      z = in_z;
    }

    scrVector() {};

		float x;

	private:
		uint32_t pad;

	public:
		float y;

	private:
		uint32_t pad2;

	public:
		float z;

	private:
		uint32_t pad3;
	};

};