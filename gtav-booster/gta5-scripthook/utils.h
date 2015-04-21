#pragma once

#include <string>
#include <stdint.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

namespace utils {
	const unsigned char* FindPattern(const void* address,
									size_t size,
									const unsigned char* signature,
									const char* mask);
	const unsigned char* FindPattern(const wchar_t* module_name,
									const unsigned char* signature,
									const char* mask);
	const uint32_t* FindPattern(const wchar_t* module_name,
								const unsigned char* signature,
								const char* mask,
								int offset);
	uint32_t GetAbsoluteAddress(uint32_t relative_address);
	size_t GetModuleSize(const wchar_t* module_name);
	std::wstring GetModulePath(HMODULE module);
	HMODULE GetCurrentModule();
	HMODULE GetModuleHandleSafe(const wchar_t* module_name);
	void Log(const wchar_t* format, ...);
	std::wstring GetModuleDirectory();

	inline void**& GetVtable(void* inst, size_t offset = 0) {
	return *reinterpret_cast<void***>( (size_t)inst + offset );
	}
	inline const void** GetVtable(const void* inst, size_t offset = 0) {
	return *reinterpret_cast<const void***>( (size_t)inst + offset );
	}
	template< typename Fn >
	inline Fn GetVtableFunction(const void* inst,
								size_t index,
								size_t offset = 0) {
	return reinterpret_cast<Fn>( GetVtable( inst, offset )[ index ] );
	}

	template<typename T, typename U> bool TryDereference(U pointer, T& result, int offset=0){
		if (!pointer) return false;
		__try {
			auto check = *((int8_t*)((uintptr_t)pointer));
			uintptr_t address = ((uintptr_t)pointer) + offset;
			result = *((T*)(address));
			return true;
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			return false;
		}
	}

	template<typename T, typename P0, typename P1> bool TryCallNoRet(T func, P0 p0, P1 p1){
		if (!func) return false;
		__try {
			func(p0, p1);
			return true;
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			return false;
		}
	}

	template<typename T, typename P0, typename P1, typename P2> bool TryCallNoRet(T func, P0 p0, P1 p1, P2 p2){
		if (!func) return false;
		__try {
			func(p0, p1, p2);
			return true;
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			return false;
		}
	}

	template<typename U, typename T, typename P0> bool TryCall(U& result, T func, P0 p0){
		if (!func) return false;
		__try {
			result = func(p0);
			return true;
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			return false;
		}
	}

	template<typename U, typename T, typename P0, typename P1> bool TryCall(U& result, T func, P0 p0, P1 p1){
		if (!func) return false;
		__try {
			result = func(p0, p1);
			return true;
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			return false;
		}
	}

#define NOEXCEPTION( x ) __try { x } __except (EXCEPTION_EXECUTE_HANDLER) { }

}  // namespace utils
