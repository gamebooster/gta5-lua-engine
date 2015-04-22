#include "natives.h"

static HANDLE thread = nullptr;

enum NativeFunctionHashes : long long
{
	SET_STAT_INT = 0x0B3271D7AB655B441,
	GET_PLAYER_PED = 0x43A66C31C68491C0,
	GIVE_DELAYED_WEAPON = 0x0B282DC6EBD803C75,
	HAS_MODEL_LOADED = 0x98A4EB5D89A0C952,
	REQUEST_MODEL = 0x963d27a58df860ac,
	CREATE_VEHICLE = 0xaf35d0d2583051b0,
	GET_ENTITY_COORDS = 0x3fef770d40960d5a,
	GET_FIRST_BLIP_INFO_ID = 0x1BEDE233E6CD2A1F,
	GET_NEXT_BLIP_INFO_ID = 0x14F96AA50D6FBEA7,
	GET_BLIP_INFO_ID_TYPE = 0xBE9B0959FFD0779B,
	GET_BLIP_COORDS = 0x586AFE3FF72D996E,
	GET_GROUND_Z_FOR_3D_COORD = 0xC906A7DAB05C8D2B,
	SET_ENTITY_COORDS = 0x621873ECE1178967,
	SET_ENTITY_COORDS_NO_OFFSET = 0x239A3351AC1DA385,
	LOAD_SCENE = 0x4448EB75B4904BDB
};

const int BLIP_WAYPOINT = 8;

class CustomThread : public rage::ScriptThread {

public:
	CustomThread()
	{
	}

	void TeleportScript()
	{
		uint32_t playerPedId = rage::NativeInvoke::Invoke<GET_PLAYER_PED, uint32_t>(-1);

		if (playerPedId != -1 && playerPedId != 0)
		{
			rage::scrVector entityCoords = rage::NativeInvoke::Invoke<GET_ENTITY_COORDS, rage::scrVector>(playerPedId);

			// if the particular key we like is pressed...
			static bool wasPressed = true;

			if (GetAsyncKeyState(VK_F11) & 0x8000)
			{
				if (!wasPressed)
				{
					// iterate through blips to find a waypoint
					int infoId = rage::NativeInvoke::Invoke<GET_FIRST_BLIP_INFO_ID, int>(BLIP_WAYPOINT);

					if (infoId > 0)
					{
						rage::scrVector blipCoords = rage::NativeInvoke::Invoke<GET_BLIP_COORDS, rage::scrVector>(infoId);

						rage::NativeInvoke::Invoke<LOAD_SCENE, int>(blipCoords.x, blipCoords.y, blipCoords.z);

						float newZ = 0.0f;
						rage::NativeInvoke::Invoke<GET_GROUND_Z_FOR_3D_COORD, int>(blipCoords.x, blipCoords.y, 1000.0f, &newZ);

						rage::NativeInvoke::Invoke<SET_ENTITY_COORDS, int>(playerPedId, blipCoords.x, blipCoords.y, newZ);
					}

					wasPressed = true;
				}
			}
		}
		
	}

	void VehicleScript()
	{
		if (GetAsyncKeyState(VK_F7) & 0x8000) {

			uint32_t playerPedId = rage::NativeInvoke::Invoke<GET_PLAYER_PED, uint32_t>(-1);
			if (playerPedId < 1) return;

			rage::NativeInvoke::Invoke<REQUEST_MODEL, int>(0x2B6DC64A);

			if (rage::NativeInvoke::Invoke<HAS_MODEL_LOADED, bool>(0x2B6DC64A))
			{
				rage::scrVector entityCoords = rage::NativeInvoke::Invoke<GET_ENTITY_COORDS, rage::scrVector>(playerPedId);

				rage::NativeInvoke::Invoke<CREATE_VEHICLE, int>(0x2B6DC64A, entityCoords.x, entityCoords.y + 2, entityCoords.z, 0.0f, 1, 0);
			}
		}
	}

	void WeaponScript()
	{
		if (GetAsyncKeyState(VK_F10) & 0x8000) {

			uint32_t player_ped_id = rage::NativeInvoke::Invoke<GET_PLAYER_PED, uint32_t>(-1);
			if (player_ped_id < 1) return;

			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x3656C8C1, 9999, 1); // stun gun
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x99B507EA, 9999, 1); // knife
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x678B81B1, 9999, 1); // night stick
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x4E875F73, 9999, 1); // hammer
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x958A4A8F, 9999, 1); // bat
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x440E4788, 9999, 1); // golf club
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x84BD7BFD, 9999, 1); // crowbar
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x1B06D571, 9999, 1); // pistol
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x5EF9FEC4, 9999, 1); // combat pistol
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x22D8FE39, 9999, 1); // ap pistol
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x99AEEB3B, 9999, 1); // pistol 50.
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x13532244, 9999, 1); // micro smg
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x2BE6766B, 9999, 1); // smg
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xEFE7E2DF, 9999, 1); // assault smg
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xBFEFFF6D, 9999, 1); // assault rifle
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x83BF0278, 9999, 1); // carbine rifle
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xAF113F99, 9999, 1); // advanced rifle
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x9D07F764, 9999, 1); // MG
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x7FD62962, 9999, 1); // combat mg
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x1D073A89, 9999, 1); // pump shotgun
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x7846A318, 9999, 1); // sawnoff shotgun
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xE284C527, 9999, 1); // assault shotgun
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x9D61E50F, 9999, 1); // bullpupshotgun
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x05FC3C11, 9999, 1); // sniper
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x0C472FE2, 9999, 1); // heavy sniper
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xA284510B, 9999, 1); // grenade launcher
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xB1CA77B1, 9999, 1); // rpg
			//rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x42BF8A85, 9999, 1); // minigun
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x93E220BD, 9999, 1); // grenades
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x2C3731D9, 9999, 1); // sticky bomb
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0xFDBC8A50, 9999, 1); // smoke grenade
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x34A67B97, 9999, 1); // petrol can
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x060EC506, 9999, 1); // fire extinguisher
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x24B17070, 9999, 1); // moltovs
			rage::NativeInvoke::Invoke<GIVE_DELAYED_WEAPON, int, int, int, int>(player_ped_id, 0x497FACC3, 9999, 1); // flare
		}
	}

	void WantedLevelScript(){
		if (GetAsyncKeyState(VK_F9) & 0x8000) {

			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
		}
	}

	virtual void DoRun() override
	{
		//VehicleScript();
		WeaponScript();
		//TeleportScript();
		WantedLevelScript();
	}
};

static CustomThread custom_thread;

DWORD WINAPI InitializeHook(void* arguments) {
  rage::ScriptHook::AttachScriptThread(&custom_thread);

  return 1;
}

void FinalizeHook() {
	rage::ScriptHook::DetachScriptThread(&custom_thread);
}

int WINAPI DllMain(HINSTANCE instance, DWORD reason, PVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		thread = CreateThread(nullptr, 0, InitializeHook, 0, 0, nullptr);
	}
	else if (reason == DLL_PROCESS_DETACH) {
		WaitForSingleObject(thread, INFINITE);
		CloseHandle(thread);
		FinalizeHook();
	}
	return 1;
}
