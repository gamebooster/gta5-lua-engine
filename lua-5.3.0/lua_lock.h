#ifndef LUA_LOCK_H
#define LUA_LOCK_H

#include "lstate.h"

void lua_lock(lua_State *L);
void lua_unlock(lua_State *L);

void lua_createlock(lua_State *L);
bool lua_haslock(lua_State *L);

#endif // LUA_LOCK_H