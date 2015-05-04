#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <d3d11_1.h>

#include "imgui.h"
#include "examples\directx11_example\imgui_impl_dx11.h"
#include "vmthooks.h"
#include "../gta5-scripthook/Hooking.Patterns.h"
#include "natives.h"
#include "LuaIntf.h"
#include "..\gta5-scripthook\rage_script_hook.h"
#include "common_helpers.h"
#include <fstream>

#ifdef COMPILE_BLADE_SCRIPTHOOK
#include "..\gta5-blade-scripthook\include\main.h"
#endif