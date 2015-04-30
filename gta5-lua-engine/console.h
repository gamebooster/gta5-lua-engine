#pragma once
#include "natives.h"
#include <vector>

#define IM_ARRAYSIZE(_ARR)          ((int)(sizeof(_ARR)/sizeof(*_ARR)))

class TextConsole
{
	char                  InputBuf[256];
	std::vector<std::string>    items;
	bool                  ScrollToBottom;
	std::vector<char*>    History;
	int                   HistoryPos;    // -1: new line, 0..History.size()-1 browsing history.


	std::map<std::string, std::function<void(std::vector<std::string> cmd)>> commands;

	explicit TextConsole(TextConsole const&);
	void operator=(TextConsole const&);

	TextConsole()
	{
		ClearLog();
		HistoryPos = -1;
	}
	~TextConsole()
	{
		ClearLog();
		items.clear();
	}

public:

	static TextConsole& GetInstance();

	void RegisterCommand(const char* name, std::function<void(std::vector<std::string> cmd)> callback) {
		commands[name] = callback;
	}

	void    ClearLog()
	{
		items.clear();
		ScrollToBottom = true;
	}

	static size_t ImFormatStringV(char* buf, size_t buf_size, const char* fmt, va_list args)
	{
		int w = vsnprintf(buf, buf_size, fmt, args);
		buf[buf_size - 1] = 0;
		return (w == -1) ? buf_size : (size_t)w;
	}

	void    AddLog(const char* fmt, ...)
	{
		if (items.size() > 30) ClearLog();

		char buf[1024];
		va_list args;
		va_start(args, fmt);
		ImFormatStringV(buf, IM_ARRAYSIZE(buf), fmt, args);
		va_end(args);
		items.push_back(buf);
		ScrollToBottom = true;
	}

	void    Run(const char* title, bool* opened)
	{
		ImGui::SetNextWindowSize(ImVec2(520, 600), ImGuiSetCond_FirstUseEver);
		if (!ImGui::Begin(title, opened))
		{
			ImGui::End();
			return;
		}

		ImGui::TextWrapped("Enter 'HELP' for help, press TAB to use text completion.");

		if (ImGui::SmallButton("Clear")) ClearLog();

		ImGui::Separator();

		//ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
		static ImGuiTextFilter filter;
		//filter.Draw("Filter (\"incl,-excl\") (\"error\")", 180);
		////if (ImGui::IsItemHovered()) ImGui::SetKeyboardFocusHere(-1); // Auto focus on hover
		//ImGui::PopStyleVar();
		//ImGui::Separator();

		// Display every line as a separate entry so we can change their color or add custom widgets. If you only want raw text you can use ImGui::TextUnformatted(log.begin(), log.end());
		// NB- if you have thousands of entries this approach may be too inefficient. You can seek and display only the lines that are visible - CalcListClipping() is a helper to compute this information.
		// If your items are of variable size you may want to implement code similar to what CalcListClipping() does. Or split your data into fixed height items to allow random-seeking into your list.
		ImGui::BeginChild("ScrollingRegion", ImVec2(0, -ImGui::GetTextLineHeightWithSpacing() * 2));
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1)); // Tighten spacing
		for (size_t i = 0; i < items.size(); i++)
		{
			const char* item = items[i].c_str();
			ImGui::TextWrapped(item);
		}
		if (ScrollToBottom)
			ImGui::SetScrollPosHere();
		ScrollToBottom = false;
		ImGui::PopStyleVar();
		ImGui::EndChild();
		ImGui::Separator();

		// Command-line
		if (ImGui::InputText("Input", InputBuf, IM_ARRAYSIZE(InputBuf), ImGuiInputTextFlags_EnterReturnsTrue | ImGuiInputTextFlags_CallbackHistory, &TextEditCallbackStub, (void*)this))
		{
			char* input_end = InputBuf + strlen(InputBuf);
			while (input_end > InputBuf && input_end[-1] == ' ') input_end--; *input_end = 0;
			if (InputBuf[0])
				ExecCommand(InputBuf);
			strcpy_s(InputBuf, "");
		}

		// Demonstrate keeping auto focus on the input box
		//if (ImGui::IsItemHovered() || (ImGui::IsRootWindowOrAnyChildFocused() && !ImGui::IsAnyItemActive() && !ImGui::IsMouseClicked(0)))
		//	ImGui::SetKeyboardFocusHere(-1); // Auto focus

		ImGui::End();
	}

	void    ExecCommand(const char* command_line)
	{
		AddLog("# %s\n", command_line);

		// Insert into history. First find match and delete it so it can be pushed to the back. This isn't trying to be smart or optimal.
		HistoryPos = -1;
		for (int i = (int)History.size() - 1; i >= 0; i--)
			if (strcmp(History[i], command_line) == 0)
			{
				ImGui::MemFree(History[i]);
				History.erase(History.begin() + i);
				break;
			}
		History.push_back(_strdup(command_line));

		std::vector<std::string> arguments = split(command_line, ' ');

		// Process command
		if (!arguments.empty() && commands.count(arguments[0]) != 0)
		{
			commands[arguments[0]](arguments);
		}
		else
		{
			AddLog("Unknown command: '%s'\n", command_line);
		}
	}

	static int TextEditCallbackStub(ImGuiTextEditCallbackData* data)
	{
		TextConsole* console = (TextConsole*)data->UserData;
		return console->TextEditCallback(data);
	}

	static inline bool  ImCharIsSpace(int c) { return c == ' ' || c == '\t' || c == 0x3000; }

	static int ImStrnicmp(const char* str1, const char* str2, int count)
	{
		int d = 0;
		while (count > 0 && (d = toupper(*str2) - toupper(*str1)) == 0 && *str1) { str1++; str2++; count--; }
		return d;
	}

	static size_t ImFormatString(char* buf, size_t buf_size, const char* fmt, ...)
	{
		va_list args;
		va_start(args, fmt);
		int w = vsnprintf(buf, buf_size, fmt, args);
		va_end(args);
		buf[buf_size - 1] = 0;
		return (w == -1) ? buf_size : (size_t)w;
	}

	int     TextEditCallback(ImGuiTextEditCallbackData* data)
	{
		//AddLog("cursor: %d, selection: %d-%d", data->CursorPos, data->SelectionStart, data->SelectionEnd);
		switch (data->EventFlag)
		{
		case ImGuiInputTextFlags_CallbackCompletion:
		{
			// Example of TEXT COMPLETION

			// Locate beginning of current word
			const char* word_end = data->Buf + data->CursorPos;
			const char* word_start = word_end;
			while (word_start > data->Buf)
			{
				const char c = word_start[-1];
				if (ImCharIsSpace(c) || c == ',' || c == ';')
					break;
				word_start--;
			}

			// Build a list of candidates
			ImVector<const char*> candidates;
			for (auto cmd : commands)
				if (ImStrnicmp(cmd.first.c_str(), word_start, (int)(word_end - word_start)) == 0)
					candidates.push_back(cmd.first.c_str());

			if (candidates.size() == 0)
			{
				// No match
				AddLog("No match for \"%.*s\"!\n", word_end - word_start, word_start);
			}
			else if (candidates.size() == 1)
			{
				// Single match. Delete the beginning of the word and replace it entirely so we've got nice casing
				data->DeleteChars((int)(word_start - data->Buf), (int)(word_end - word_start));
				data->InsertChars(data->CursorPos, candidates[0]);
				data->InsertChars(data->CursorPos, " ");
			}
			else
			{
				// Multiple matches. Complete as much as we can, so inputing "C" will complete to "CL" and display "CLEAR" and "CLASSIFY"
				int match_len = (int)(word_end - word_start);
				for (;;)
				{
					int c = 0;
					bool all_candidates_matches = true;
					for (size_t i = 0; i < candidates.size() && all_candidates_matches; i++)
						if (i == 0)
							c = toupper(candidates[i][match_len]);
						else if (c != toupper(candidates[i][match_len]))
							all_candidates_matches = false;
					if (!all_candidates_matches)
						break;
					match_len++;
				}

				if (match_len > 0)
				{
					data->DeleteChars((int)(word_start - data->Buf), (int)(word_end - word_start));
					data->InsertChars(data->CursorPos, candidates[0], candidates[0] + match_len);
				}

				// List matches
				AddLog("Possible matches:\n");
				for (size_t i = 0; i < candidates.size(); i++)
					AddLog("- %s\n", candidates[i]);
			}

			break;
		}
		case ImGuiInputTextFlags_CallbackHistory:
		{
			// Example of HISTORY
			const int prev_history_pos = HistoryPos;
			if (data->EventKey == ImGuiKey_UpArrow)
			{
				if (HistoryPos == -1)
					HistoryPos = (int)(History.size() - 1);
				else if (HistoryPos > 0)
					HistoryPos--;
			}
			else if (data->EventKey == ImGuiKey_DownArrow)
			{
				if (HistoryPos != -1)
					if (++HistoryPos >= (int)History.size())
						HistoryPos = -1;
			}

			// A better implementation would preserve the data on the current input line along with cursor position.
			if (prev_history_pos != HistoryPos)
			{
				ImFormatString(data->Buf, data->BufSize, "%s", (HistoryPos >= 0) ? History[HistoryPos] : "");
				data->BufDirty = true;
				data->CursorPos = data->SelectionStart = data->SelectionEnd = (int)strlen(data->Buf);
			}
		}
		}
		return 0;
	}
};