#include <iostream>

#include "BlackBone/Config.h"
#include "BlackBone/Process/RPC/RemoteFunction.hpp"
#include "BlackBone/Patterns/PatternSearch.h"
#include <thread>

// globals

blackbone::Process* global_process;

typedef struct _NativeParams
{
	DWORDLONG return_struct;
	DWORDLONG params_count;
	DWORDLONG params_struct;
} NativeParams, *pNativeParams;

//enum NativeFunctionHashes : long long
//{
//	SET_STAT_INT = 0x0B3271D7AB655B441
//};

enum NativeFunctionAddresses : long long
{
	SET_STAT_INT = 0x140C487E0,
	GET_ENTITY_COORDS = 0x00000001409B4650,
	GET_FORWARD_X = 0x1409B46E8,
	GET_PLAYER_PED = 0x0000000140BF3C88,
	CREATE_AMBIENT_PICKUP = 0x140BF1C10,
	CREATE_MONEY_PICKUP = 0x140BF1C88,
	EARN_MONEY_SELLING_VEH = 0x1409B8D68,
	EARN_MONEY_NPC_KILL = 0x1409B8C38,
	EARN_MONEY_GOOD_SPORT = 0x1409E0DB4,
	EARN_MONEY_ROB = 0x00000001409B8D50,
	EARN_MONEY_HOLDUP = 0x1409B8CD8,
	GIVE_DELAYED_WEAPON = 0x140C43020,
	CREATE_VEHICLE = 0x140C40CD8,
	REQUEST_MODEL = 0x140C4535C,
	HAS_MODEL_LOADED = 0x140C43170,
	GET_PLAYER_WANTED_LEVEL = 0x140BF3E3C
};

const uint64_t native_function_register = 0x142972630;


struct NativeFunctionSort {
	NativeFunctionSort* next; //0x0000 
	uint64_t function_addresses[7]; //0x0008 
	__int64 num_functions; //0x0040 
	uint64_t hashes[7]; //0x0048 
};

//uint64_t FindNativeFunctionAddress(NativeFunctionHashes function_hash) {
//	uint8_t sort = function_hash;
//	std::wcout << sort << std::endl;
//
//	NativeFunctionSort* sort_struct = reinterpret_cast<NativeFunctionSort*>(native_function_register + sort * 8);
//
//	while (sort_struct) {
//		for (int i = sort_struct->num_functions; i++; i < sort_struct->num_functions) {
//			if (sort_struct->hashes[i] == function_hash)
//			{
//				return sort_struct->function_addresses[i];
//			}
//		}
//		sort_struct = sort_struct->next;
//	}
//
//	return 0;
//}

void CallNativeFunctionExplicit(uint64_t remote_address, blackbone::MemBlock& result_block, int paramCount, blackbone::MemBlock& params_block) {
	if (!remote_address) {
		return;
	}

	NativeParams params;

	params.params_count = paramCount;

	typedef uint64_t(__cdecl* default_native_function) (NativeParams*);

	params.return_struct = result_block.ptr<DWORDLONG>();
	params.params_struct = params_block.ptr<DWORDLONG>();

	blackbone::RemoteFunction<default_native_function> pFN(
		*global_process,
		reinterpret_cast<default_native_function>(remote_address),
		&params
		);


	decltype(pFN)::ReturnType result;

	pFN.Call(result, global_process->remote().getWorker());

	params_block.Free();
}

void CallNativeFunction(uint64_t remote_address, blackbone::MemBlock& result_block, DWORD paramCount, ...) {
	if (!remote_address) {
		return;
	}

	NativeParams params;

	params.params_count = paramCount;

	typedef uint64_t(__cdecl* default_native_function) (NativeParams*);

	params.return_struct = result_block.ptr<DWORDLONG>();

	auto params_block = global_process->memory().Allocate(sizeof(NativeParams));
	params.params_struct = params_block.ptr<DWORDLONG>();

	va_list params_list;
	va_start(params_list, paramCount);
	for (int i = 0; i < paramCount; i++)
		params_block.Write(i * 8, va_arg(params_list, DWORDLONG));
	va_end(params_list);

	blackbone::RemoteFunction<default_native_function> pFN(
		*global_process,
		reinterpret_cast<default_native_function>(remote_address),
		&params
		);

	decltype(pFN)::ReturnType result;

	pFN.Call(result, global_process->remote().getWorker());

	params_block.Free();
}

unsigned int get_hash_key(char *key)
{
	size_t len = strlen(key);
	unsigned int hash, i;
	for (hash = i = 0; i < len; ++i)
	{
		hash += tolower(key[i]);
		hash += (hash << 10);
		hash ^= (hash >> 6);
	}
	hash += (hash << 3);
	hash ^= (hash >> 11);
	hash += (hash << 15);
	return hash;
}

int GetPlayerPed(int id) {
	blackbone::MemBlock result_block1 = global_process->memory().Allocate(128);
	CallNativeFunction(NativeFunctionAddresses::GET_PLAYER_PED, result_block1, 1, -1);
	return result_block1.Read<int>(0, 0);
}

void GiveWeaponDelayed(int player_ped, int hash, int ammo = 9999, int toggle = 1) {
	blackbone::MemBlock result_block = global_process->memory().Allocate(128);
	CallNativeFunction(NativeFunctionAddresses::GIVE_DELAYED_WEAPON, result_block, 4, player_ped, hash, ammo, toggle);
}

void SpawnVehicle(int hash) {
	//blackbone::MemBlock result_hash_block = global_process->memory().Allocate(128);
	//CallNativeFunction(NativeFunctionAddresses::REQUEST_MODEL, result_hash_block, 1, hash);

	blackbone::MemBlock model_loaded_block = global_process->memory().Allocate(128);
	CallNativeFunction(NativeFunctionAddresses::HAS_MODEL_LOADED, model_loaded_block, 1, hash);

	std::wcout << "model " <<model_loaded_block.Read(0, 0) << std::endl;

	if (model_loaded_block.Read(0, 0)) {

		blackbone::MemBlock result_block2 = global_process->memory().Allocate(128);
		CallNativeFunction(NativeFunctionAddresses::GET_ENTITY_COORDS, result_block2, 1, GetPlayerPed(-1));

		blackbone::MemBlock result_block3 = global_process->memory().Allocate(128);
		blackbone::MemBlock params_block = global_process->memory().Allocate(256);
		params_block.Write(0, hash);
		params_block.Write(8, result_block2.Read<float>(0, 0));
		params_block.Write(16, result_block2.Read<float>(8, 0));
		params_block.Write(24, result_block2.Read<float>(16, 0));
		params_block.Write(32, 15.0f);
		params_block.Write(40, 1);
		params_block.Write(48, 0);
		CallNativeFunctionExplicit(NativeFunctionAddresses::CREATE_VEHICLE, result_block3, 7, params_block);

		std::wcout << "vehicle " << result_block3.Read(0, static_cast<uint64_t>(0)) << std::endl;
	}
}

void GiveAllWeapons()
{
	int Handle = GetPlayerPed(-1);
	GiveWeaponDelayed(Handle, 0x3656C8C1, 9999, 1); // stun gun
	GiveWeaponDelayed(Handle, 0x99B507EA, 9999, 1); // knife
	GiveWeaponDelayed(Handle, 0x678B81B1, 9999, 1); // night stick
	GiveWeaponDelayed(Handle, 0x4E875F73, 9999, 1); // hammer
	GiveWeaponDelayed(Handle, 0x958A4A8F, 9999, 1); // bat
	GiveWeaponDelayed(Handle, 0x440E4788, 9999, 1); // golf club
	GiveWeaponDelayed(Handle, 0x84BD7BFD, 9999, 1); // crowbar
	GiveWeaponDelayed(Handle, 0x1B06D571, 9999, 1); // pistol
	GiveWeaponDelayed(Handle, 0x5EF9FEC4, 9999, 1); // combat pistol
	GiveWeaponDelayed(Handle, 0x22D8FE39, 9999, 1); // ap pistol
	GiveWeaponDelayed(Handle, 0x99AEEB3B, 9999, 1); // pistol 50.
	GiveWeaponDelayed(Handle, 0x13532244, 9999, 1); // micro smg
	GiveWeaponDelayed(Handle, 0x2BE6766B, 9999, 1); // smg
	GiveWeaponDelayed(Handle, 0xEFE7E2DF, 9999, 1); // assault smg
	GiveWeaponDelayed(Handle, 0xBFEFFF6D, 9999, 1); // assault rifle
	GiveWeaponDelayed(Handle, 0x83BF0278, 9999, 1); // carbine rifle
	GiveWeaponDelayed(Handle, 0xAF113F99, 9999, 1); // advanced rifle
	GiveWeaponDelayed(Handle, 0x9D07F764, 9999, 1); // MG
	GiveWeaponDelayed(Handle, 0x7FD62962, 9999, 1); // combat mg
	GiveWeaponDelayed(Handle, 0x1D073A89, 9999, 1); // pump shotgun
	GiveWeaponDelayed(Handle, 0x7846A318, 9999, 1); // sawnoff shotgun
	GiveWeaponDelayed(Handle, 0xE284C527, 9999, 1); // assault shotgun
	GiveWeaponDelayed(Handle, 0x9D61E50F, 9999, 1); // bullpupshotgun
	GiveWeaponDelayed(Handle, 0x05FC3C11, 9999, 1); // sniper
	GiveWeaponDelayed(Handle, 0x0C472FE2, 9999, 1); // heavy sniper
	GiveWeaponDelayed(Handle, 0xA284510B, 9999, 1); // grenade launcher
	GiveWeaponDelayed(Handle, 0xB1CA77B1, 9999, 1); // rpg
	//GiveWeaponDelayed(Handle, 0x42BF8A85, 9999, 1); // minigun
	GiveWeaponDelayed(Handle, 0x93E220BD, 9999, 1); // grenades
	GiveWeaponDelayed(Handle, 0x2C3731D9, 9999, 1); // sticky bomb
	GiveWeaponDelayed(Handle, 0xFDBC8A50, 9999, 1); // smoke grenade
	GiveWeaponDelayed(Handle, 0x34A67B97, 9999, 1); // petrol can
	GiveWeaponDelayed(Handle, 0x060EC506, 9999, 1); // fire extinguisher
	GiveWeaponDelayed(Handle, 0x24B17070, 9999, 1); // moltovs
	GiveWeaponDelayed(Handle, 0x497FACC3, 9999, 1); // flare
}

void DropMoney()
{
	blackbone::MemBlock result_block2 = global_process->memory().Allocate(128);
	CallNativeFunction(NativeFunctionAddresses::GET_ENTITY_COORDS, result_block2, 1, GetPlayerPed(-1));
	std::wcout << "vector: " << result_block2.Read<float>(0, 0) << " " << result_block2.Read<float>(8, 0) << " " << result_block2.Read<float>(16, 0) << std::endl;

	blackbone::MemBlock result_block3 = global_process->memory().Allocate(128);
	blackbone::MemBlock params_block = global_process->memory().Allocate(128);
	params_block.Write(0, result_block2.Read<float>(0, 0));
	params_block.Write(8, result_block2.Read<float>(8, 0));
	params_block.Write(16, result_block2.Read<float>(16, 0));
	params_block.Write(24, 1500);
	params_block.Write(32, 1);
	params_block.Write(40, 1);
	CallNativeFunctionExplicit(NativeFunctionAddresses::CREATE_MONEY_PICKUP, result_block3, 6, params_block);
}

void SetStatInt(int hash, int value)
{
	blackbone::MemBlock result_block2 = global_process->memory().Allocate(128);
	CallNativeFunction(NativeFunctionAddresses::SET_STAT_INT, result_block2, 2, get_hash_key("MP0_CHAR_XP_FM"), 174000);
}

int main() {
	std::wcout << L"\r\nRemote function call test\n";
	std::wcout << L"Searching for GTA5.exe... ";

	global_process = new blackbone::Process();
	std::vector<DWORD> found;
	blackbone::Process::EnumByName(L"GTA5.exe", found);

	if (found.size() > 0)
	{
		std::wcout << L"Found. Attaching to process " << std::dec << found.front() << std::endl;

		if (global_process->Attach(found.front()) != STATUS_SUCCESS)
		{
			std::wcout << L"Can't attach to process, status code " << LastNtStatus() << " aborting\n\n";
			return 1;
		}

		auto barrier = global_process->core().native()->GetWow64Barrier().type;

		if (barrier != blackbone::wow_32_32 && barrier != blackbone::wow_64_64)
		{
			std::wcout << L"Can't execute call through WOW64 barrier, aborting\n\n";
			return 1;
		}

		global_process->remote().CreateRPCEnvironment();

		auto thread = global_process->remote().getWorker();

		blackbone::_TEB64 main_teb64 = { { 0 } };
		global_process->threads().getMain()->teb(&main_teb64);

		blackbone::_TEB64 new_teb64 = { { 0 } };
		thread->teb(&new_teb64);
		global_process->memory().Write(new_teb64.ThreadLocalStoragePointer, global_process->memory().Read<blackbone::ptr_t>(main_teb64.ThreadLocalStoragePointer));

		std::wcout << L"Searching for FindNativeFunction... " << std::endl;

		std::wcout << L"Give All Weapons! " <<std::endl;
		while (true) {
			std::wcout << "current thread " << std::hex << global_process->memory().Read<blackbone::ptr_t>((global_process->memory().Read<blackbone::ptr_t>(main_teb64.ThreadLocalStoragePointer) + 0x830)) << std::endl;
			Sleep(10);
		}
		//blackbone::MemBlock model_loaded_block = global_process->memory().Allocate(128);
		//CallNativeFunction(NativeFunctionAddresses::GET_PLAYER_WANTED_LEVEL, model_loaded_block, 1, 0);

		//std::wcout << L"PlayerWantedLevel: " << model_loaded_block.Read(0, 0) << std::endl;

       //GiveAllWeapons();

		//SpawnVehicle(0xE9805550);

		std::wcout << L"Done! " << std::endl;


	}
	else {
		std::wcout << L"Not found, aborting\n";
	}

	std::wcout << std::endl;

	return 0;
}