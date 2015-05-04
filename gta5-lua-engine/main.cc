#include "common.h"

#include "console.h"
#include "script_manager.h"
#include "..\gta5-scripthook\utils.h"

#ifdef COMPILE_BLADE_SCRIPTHOOK
#pragma comment(lib,"..\\gta5-blade-scripthook\\lib\\ScriptHookV.lib")
#endif

extern LRESULT ImGui_ImplDX11_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static HANDLE thread = nullptr;
static utils::VtableHook* swapchain_hook = nullptr;
static bool draw_menu = false;
static HWND top_window_handle;
static WNDPROC wndProc;
static bool* disable_gta_ui = nullptr;

const uint32_t PRESENT_VTABLE_INDEX = 8;

static std::string GetScriptPath(std::string script_name) {
  std::wstring wdirectory = utils::GetModuleDirectory();
  std::string directory = ws2s(wdirectory);
  directory += "\\scripts\\";
  directory += script_name;
  return directory;
}

static void LoadAllScripts() {
  std::ifstream infile(GetScriptPath("loadall.txt"));

  std::string script_name;
  while (infile >> script_name) {
    lua::ScriptManager::GetInstance().LoadScript(GetScriptPath(script_name));
    TextConsole::GetInstance().AddLog("Loaded " + script_name);
  }
}

static LRESULT WINAPI Hook(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
  if (msg == WM_KEYDOWN && wParam == VK_OEM_3) {
    draw_menu = !draw_menu;
    *disable_gta_ui = draw_menu;
    return true;
  }

  if (msg == WM_KEYDOWN && wParam == VK_INSERT) {
    LoadAllScripts();
  }

  if (msg == WM_KEYDOWN && wParam == VK_DELETE) {
    lua::ScriptManager::GetInstance().ReloadScripts();
    TextConsole::GetInstance().AddLog("Reloaded scripts");
  }

  if (draw_menu && ImGui_ImplDX11_WndProcHandler(hwnd, msg, wParam, lParam)) {
    return true;
  }
  return CallWindowProcW(wndProc, hwnd, msg, wParam, lParam);
}

HRESULT PresentHook(IDXGISwapChain1* SwapChain, UINT SyncInterval, UINT Flags) {
  if (draw_menu) {
    ImGui_ImplDX11_NewFrame();

    ImGui::Begin("gta5-lua-engine by skomski");
    lua::ScriptManager::GetInstance().CallOnDrawTick();
    ImGui::End();

    TextConsole::GetInstance().Run("Console", &draw_menu);

    ImGui::Render();
  }

  typedef HRESULT(*Present1) (IDXGISwapChain1* SwapChain, UINT SyncInterval, UINT Flags);
  return swapchain_hook->GetMethod<Present1>(PRESENT_VTABLE_INDEX)(SwapChain, SyncInterval, Flags);
}

DWORD WINAPI InitializeHook(void* arguments) {
  char* location = hook::pattern("84 C0 74 15 80 3D ? ? ? ? ? 75 0C").count(2).get(0).get<char>(6);
  disable_gta_ui = reinterpret_cast<bool*>(location + *(int32_t*)location + 5);
  TextConsole::GetInstance().AddLog("disable_gta_ui %llx", disable_gta_ui);

  location = hook::pattern("48 8B 0D ? ? ? ? 48 8B 01 33 D2 44 8D 42 01").count(1).get(0).get<char>(3);
  IDXGISwapChain1* swapchain = *reinterpret_cast<IDXGISwapChain1**>(location + *(int32_t*)location + 4);
  TextConsole::GetInstance().AddLog("swapchain %llx", swapchain);

  ID3D11Device* device;
  swapchain->GetDevice(__uuidof(ID3D11Device), (void**)&device);
  ID3D11DeviceContext* device_context;
  device->GetImmediateContext(&device_context);

  swapchain->GetHwnd(&top_window_handle);

  auto gui_result = ImGui_ImplDX11_Init(top_window_handle, device, device_context);
  TextConsole::GetInstance().AddLog("hwnd %d device %llx devicecontext %llx", top_window_handle, device, device_context);

  // Hook input
  wndProc = (WNDPROC)GetWindowLongPtr(top_window_handle, GWLP_WNDPROC);
  SetWindowLongPtr(top_window_handle, GWLP_WNDPROC, (LONG_PTR)Hook);

  swapchain_hook = new utils::VtableHook(swapchain);
  swapchain_hook->HookMethod(PresentHook, PRESENT_VTABLE_INDEX);

  TextConsole::GetInstance().RegisterCommand("load", [](std::vector<std::string> cmd) {
    if (!cmd.empty() && !cmd[1].empty()) {
      if (lua::ScriptManager::GetInstance().LoadScript(GetScriptPath(cmd[1]))) {
        TextConsole::GetInstance().AddLog("Loaded " + cmd[1]);
      }
    }
  });

  TextConsole::GetInstance().RegisterCommand("unload", [](std::vector<std::string> cmd) {
    if (!cmd.empty() && !cmd[1].empty()) {
      lua::ScriptManager::GetInstance().UnloadScript(GetScriptPath(cmd[1]));
      TextConsole::GetInstance().AddLog("Unloaded " + cmd[1]);
    }
  });

  TextConsole::GetInstance().RegisterCommand("loadall", [](std::vector<std::string> cmd) {
    LoadAllScripts();
  });

  TextConsole::GetInstance().RegisterCommand("unloadall", [](std::vector<std::string> cmd) {
    lua::ScriptManager::GetInstance().UnloadScripts();
    TextConsole::GetInstance().AddLog("Unloaded all scripts");
  });

  return 1;
}

void FinalizeHook() {
  if (swapchain_hook) delete swapchain_hook;
  SetWindowLongPtr(top_window_handle, GWLP_WNDPROC, (LONG_PTR)wndProc);
}

int WINAPI DllMain(HINSTANCE instance, DWORD reason, PVOID reserved) {
  if (reason == DLL_PROCESS_ATTACH) {
    thread = CreateThread(nullptr, 0, InitializeHook, 0, 0, nullptr);
  } else if (reason == DLL_PROCESS_DETACH) {
    FinalizeHook();
    WaitForSingleObject(thread, INFINITE);
    CloseHandle(thread);
  }
  return 1;
}
