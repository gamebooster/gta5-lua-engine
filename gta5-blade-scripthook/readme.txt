; THIS ARCHIVE REDISTRIBUTION IS NOT ALLOWED, USE THE FOLLOWING LINK INSTEAD
; http://www.dev-c.com/gtav/scripthookv/


							SCRIPT HOOK V SDK

v1.0.350.2

1. General concept
The main concept is that your compiled script plugin depends only on ScriptHookV.dll,
so when the game updates the only thing that user must do in order to make your
script working again is to update script hook runtime (i.e. ScriptHookV.dll).

2. Changes
v1.0.350.2
	- added support of the latest patches 1.0.350.1/2
		this patch changes native function hashes, however it doesn't affect SDK
		because script hook performs hash-to-hash translation in runtime, so
		we will be using original PC hashes all the time.
	- added ability to reload scripts in runtime
	- added keyboard hook
	
3. Features
	Runtime asi script reloading:
	In order to use this feature you must create empty file called "ScriptHookV.dev"
	in you game's main dir. While being ingame press CTRL + R, beep sound will tell
	you that all loaded scripts are fully unloaded and you can replace your *.asi,
	press CTRL + R again to load the scripts, triple beep will indicate that
	everything is loaded. You must have the call to scriptUnregister() SDK func in
	your plugin's DllMain in order reloading feature to work correctly,	see
	NativeTrainer\main.cpp for more details.
	Script reloading can be applied only to the *.asi plugins which were loaded
	normally, i.e. using asi loader when the game was started. Script reloading is
	performed by script hook and not by asi loader.
	
	Keyboard hook:
	You must use keyboard hook instead of GetKeyState/GetAsyncKeyState WIN API funcs,
	because it guarantees that all key presses will be handled correctly. Keyboard
	handler must be registered/unregistered in DllMain of your plugin using SDK funcs
	keyboardHandlerRegister/keyboardHandlerUnregister, see NativeTrainer\main.cpp for
	more details. 
	Example of using keyboard hook can be found in NativeTrainer\keyboard.cpp, the
	trainer script is using keyboard.cpp provided functions, your projects should do
	the same.
							
4. Compilation
All samples here are being compiled using MSVC 2013, you may also use MSVC 2010
with the same *.vcxproj files but this will require changing the platfrom toolset
in project settings.

5. Native declarations
You can always get the newest version of natives.h from NATIVEDB:
http://www.dev-c.com/nativedb/

6. Terms of use
-	You are allowed to use this SDK only for writing scripts intended to work offline.
-	You are not allowed to redistribute ScriptHookV.dll with your script plugins, 
	provide the link to the latest runtime instead:
	http://www.dev-c.com/gtav/scripthookv/

7. Samples
The only one sample included is NativeTrainer, 
more detailed description is available in NativeTrainer\script.cpp

						(C) Alexander Blade 2015
								