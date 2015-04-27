#include <windows.h>

#include "lua_lock.h"
#include "lstate.h"

void lua_lock(lua_State *L)
{
	if (L->lock_exists) EnterCriticalSection(&L->lock);
}

void lua_unlock(lua_State *L)
{
	if (L->lock_exists) LeaveCriticalSection(&L->lock);
}

void lua_createlock(lua_State *L)
{
	if (L->lock_exists)
	{
		InitializeCriticalSection(&L->lock);
		L->lock_exists = true;
	}
}

bool lua_haslock(lua_State *L)
{
	if (!L->lock_exists) return false;
	return TryEnterCriticalSection(&L->lock);
}