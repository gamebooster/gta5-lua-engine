#pragma once
#include <vector>
#include "common_helpers.h"

#define IM_ARRAYSIZE(_ARR)          ((int)(sizeof(_ARR)/sizeof(*_ARR)))

class TextConsole {
  char                  InputBuf[256];
  std::vector<std::string>    items;
  bool                  ScrollToBottom;
  std::vector<char*>    History;
  int                   HistoryPos;    // -1: new line, 0..History.size()-1 browsing history.


  std::map<std::string, std::function<void(std::vector<std::string> cmd)>> commands;

  explicit TextConsole(TextConsole const&);
  void operator=(TextConsole const&);

  TextConsole() {
    ClearLog();
    HistoryPos = -1;

    RegisterCommand("help", [&](std::vector<std::string> cmd) {
      std::string commands_output = "commands: ";
      for each (auto command in commands) {
        commands_output += command.first + " ";
      }
      TextConsole::GetInstance().AddLog(commands_output);
    });
    RegisterCommand("clear", [](std::vector<std::string> cmd) {
      TextConsole::GetInstance().ClearLog();
    });
  }
  ~TextConsole() {
    ClearLog();
  }

public:

  static TextConsole& GetInstance();

  void RegisterCommand(const char* name, std::function<void(std::vector<std::string> cmd)> callback) {
    commands[name] = callback;
  }

  void    ClearLog() {
    items.clear();
    ScrollToBottom = true;
  }

  static size_t ImFormatStringV(char* buf, size_t buf_size, const char* fmt, va_list args) {
    int w = vsnprintf(buf, buf_size, fmt, args);
    buf[buf_size - 1] = 0;
    return (w == -1) ? buf_size : (size_t)w;
  }

  void AddLog(std::string log) {
    AddLog(log.c_str());
  }

  void    AddLog(const char* fmt, ...) {
    if (items.size() > 60) ClearLog();

    char buf[1024];
    va_list args;
    va_start(args, fmt);
    ImFormatStringV(buf, IM_ARRAYSIZE(buf), fmt, args);
    va_end(args);
    items.push_back(buf);
    ScrollToBottom = true;
  }

  void    Run(const char* title, bool* opened) {
    ImGui::SetNextWindowSize(ImVec2(520, 600), ImGuiSetCond_FirstUseEver);
    if (!ImGui::Begin(title, opened)) {
      ImGui::End();
      return;
    }


    ImGui::BeginChild("ScrollingRegion", ImVec2(0, -ImGui::GetTextLineHeightWithSpacing() * 2));
    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1)); // Tighten spacing

    for (size_t i = 0; i < items.size(); i++) {
      const char* item = items[i].c_str();
      ImGui::TextWrapped(item);
    }

    if (ScrollToBottom) ImGui::SetScrollPosHere();
    ScrollToBottom = false;

    ImGui::PopStyleVar();
    ImGui::EndChild();
    ImGui::Separator();

    // Command-line
    if (ImGui::InputText("Input", InputBuf, IM_ARRAYSIZE(InputBuf), ImGuiInputTextFlags_EnterReturnsTrue | ImGuiInputTextFlags_CallbackHistory, &TextEditCallbackStub, (void*)this)) {
      char* input_end = InputBuf + strlen(InputBuf);
      while (input_end > InputBuf && input_end[-1] == ' ') input_end--; *input_end = 0;
      if (InputBuf[0])
        ExecCommand(InputBuf);
      strcpy_s(InputBuf, "");
    }

    ImGui::End();
  }

  void    ExecCommand(const char* command_line) {
    AddLog("# %s\n", command_line);

    // Insert into history. First find match and delete it so it can be pushed to the back. This isn't trying to be smart or optimal.
    HistoryPos = -1;
    for (int i = (int)History.size() - 1; i >= 0; i--)
      if (strcmp(History[i], command_line) == 0) {
        ImGui::MemFree(History[i]);
        History.erase(History.begin() + i);
        break;
      }
    History.push_back(_strdup(command_line));

    std::vector<std::string> arguments = split(command_line, ' ');

    // Process command
    if (!arguments.empty() && commands.count(arguments[0]) != 0) {
      commands[arguments[0]](arguments);
    } else {
      AddLog("Unknown command: '%s'\n", command_line);
    }
  }

  static int TextEditCallbackStub(ImGuiTextEditCallbackData* data) {
    TextConsole* console = (TextConsole*)data->UserData;
    return console->TextEditCallback(data);
  }

  static size_t ImFormatString(char* buf, size_t buf_size, const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int w = vsnprintf(buf, buf_size, fmt, args);
    va_end(args);
    buf[buf_size - 1] = 0;
    return (w == -1) ? buf_size : (size_t)w;
  }

  int TextEditCallback(ImGuiTextEditCallbackData* data) {
    //AddLog("cursor: %d, selection: %d-%d", data->CursorPos, data->SelectionStart, data->SelectionEnd);
    switch (data->EventFlag) {
    case ImGuiInputTextFlags_CallbackHistory: {
      // Example of HISTORY
      const int prev_history_pos = HistoryPos;
      if (data->EventKey == ImGuiKey_UpArrow) {
        if (HistoryPos == -1)
          HistoryPos = (int)(History.size() - 1);
        else if (HistoryPos > 0)
          HistoryPos--;
      } else if (data->EventKey == ImGuiKey_DownArrow) {
        if (HistoryPos != -1)
          if (++HistoryPos >= (int)History.size())
            HistoryPos = -1;
      }

      // A better implementation would preserve the data on the current input line along with cursor position.
      if (prev_history_pos != HistoryPos) {
        ImFormatString(data->Buf, data->BufSize, "%s", (HistoryPos >= 0) ? History[HistoryPos] : "");
        data->BufDirty = true;
        data->CursorPos = data->SelectionStart = data->SelectionEnd = (int)strlen(data->Buf);
      }
    }
    }
    return 0;
  }
};