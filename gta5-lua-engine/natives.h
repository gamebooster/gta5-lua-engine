#pragma once

#define Vector3 rage::scrVector

#include "../gta5-scripthook/rage_engine.h"

static uint32_t GetHash(const char *key)
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

/*
THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
htto://dev-c.com
(C) Alexander Blade 2015
*/

/// replace pattern for original
/// <(.+)(>\()([a-zA-Z0-9]+)
/// <$3,$1>\(



namespace PLAYER
{
	static uint32_t GET_PLAYER_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x687D51F360787909, uint32_t>(p0); } // 687D51F360787909 6E31E993
	static uint32_t GET_PLAYER_PED_SCRIPT_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0x52B9D9DF3307FA5D, uint32_t>(p0); } // 52B9D9DF3307FA5D 6AC64990
	static void SET_PLAYER_MODEL(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x0046914EC1D30FE279, uint32_t>(p0, p1); } // 0046914EC1D30FE279 774A4C54
	static void CHANGE_PLAYER_PED(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x01EC350773AE8700D, uint32_t>(p0, p1, p2, p3); } // 01EC350773AE8700D BE515485
	static void GET_PLAYER_RGB_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0xD967C3738031F876, uint32_t>(p0, p1, p2, p3); } // D967C3738031F876 6EF43BBB
	static uint32_t GET_NUMBER_OF_PLAYERS() { return rage::NativeInvoke::Invoke<0x5E80FD63F151DA78, uint32_t>(); } // 5E80FD63F151DA78 4C1B8867
	static uint32_t GET_PLAYER_TEAM(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5805EAF13FC54BE6, uint32_t>(p0); } // 5805EAF13FC54BE6 9873E404
	static void SET_PLAYER_TEAM(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x08F758D41AE40CD9D, uint32_t>(p0, p1); } // 08F758D41AE40CD9D 725ADCF2
	static const char* GET_PLAYER_NAME(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE4056CB6BBEC732, const char*>(p0); } // FE4056CB6BBEC732 406B4B20
	static float GET_WANTED_LEVEL_RADIUS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0262A8B3B46EFA590, float>(p0); } // 0262A8B3B46EFA590 1CF7D7DA
	static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x059B9E2AFE8684602, Vector3>(p0); } // 059B9E2AFE8684602 821F2D2C
	static void SET_PLAYER_WANTED_CENTRE_POSITION(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xB728C8416EB7278E, uint32_t>(p0, p1, p2, p3); } // B728C8416EB7278E F261633A
	static uint32_t GET_WANTED_LEVEL_THRESHOLD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBA2F72A1F977F267, uint32_t>(p0); } // BA2F72A1F977F267 D9783F6B
	static void SET_PLAYER_WANTED_LEVEL(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x50E86400BAF39B2, uint32_t>(p0, p1, p2); } // 50E86400BAF39B2 B7A0914B
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x5D68762ED393DB97, uint32_t>(p0, p1, p2); } // 5D68762ED393DB97 ED6F44F5
	static void SET_PLAYER_WANTED_LEVEL_NOW(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4DFE220122919594, uint32_t>(p0, p1); } // 4DFE220122919594 AF3AFD83
	static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2A2D002410196FB5, BOOL>(p0); } // 2A2D002410196FB5 E13A71C7
	static BOOL ARE_PLAYER_STARS_GREYED_OUT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x05F46D07196415342, BOOL>(p0); } // 05F46D07196415342 5E72AB72
	static void SET_DISPATCH_COPS_FOR_PLAYER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC6D71CDDE02AA227, uint32_t>(p0, p1); } // C6D71CDDE02AA227 48A18913
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF0428CCE35084401, BOOL>(p0, p1); } // F0428CCE35084401 589A2661
	static void CLEAR_PLAYER_WANTED_LEVEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x35667994C79745D2, uint32_t>(p0); } // 35667994C79745D2 54EA5BCC
	static BOOL IS_PLAYER_DEAD(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3082186EA3CBA463, BOOL>(p0); } // 3082186EA3CBA463 140CA5A8
	static BOOL IS_PLAYER_PRESSING_HORN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2A48227D4098FFDD, BOOL>(p0); } // 2A48227D4098FFDD ED1D1662
	static void SET_PLAYER_CONTROL(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xFAAA53BBE1EEF174, uint32_t>(p0, p1, p2); } // FAAA53BBE1EEF174 D17AFCD8
	static uint32_t GET_PLAYER_WANTED_LEVEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x89D8D467C3C356CB, uint32_t>(p0); } // 89D8D467C3C356CB BDCDD163
	static void SET_MAX_WANTED_LEVEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x53C0659721DC11EC, uint32_t>(p0); } // 53C0659721DC11EC 665A06F5
	static void SET_POLICE_RADAR_BLIPS(BOOL p0) { rage::NativeInvoke::Invoke<0x8B34D6FC7568C13D, uint32_t>(p0); } // 8B34D6FC7568C13D 8E114B10
	static void SET_POLICE_IGNORE_PLAYER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDD748F877B6C00B7, uint32_t>(p0, p1); } // DD748F877B6C00B7 E6DE71B7
	static BOOL IS_PLAYER_PLAYING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x52A84D9C3A400EA8, BOOL>(p0); } // 52A84D9C3A400EA8 E15D777F
	static void SET_EVERYONE_IGNORE_PLAYER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6BF1DDDFD53FBE63, uint32_t>(p0, p1); } // 6BF1DDDFD53FBE63 C915285E
	static void SET_ALL_RANDOM_PEDS_FLEE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x085561C2D9ACBDF0D, uint32_t>(p0, p1); } // 085561C2D9ACBDF0D 49EAE968
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0x34D399ACBC6AA213, uint32_t>(p0); } // 34D399ACBC6AA213 BF974891
	static void _0x924E17FA35852EAD(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x924E17FA35852EAD, uint32_t>(p0, p1); } // 924E17FA35852EAD 274631FE
	static void _0xC6C656365A451A8F(uint32_t p0) { rage::NativeInvoke::Invoke<0xC6C656365A451A8F, uint32_t>(p0); } // C6C656365A451A8F 02DF7AF4
	static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x896B1B7049CA83BC, uint32_t>(p0, p1); } // 896B1B7049CA83BC A3D675ED
	static void SET_WANTED_LEVEL_MULTIPLIER(float p0) { rage::NativeInvoke::Invoke<0x0A54C914AEB391F49, uint32_t>(p0); } // 0A54C914AEB391F49 1359292F
	static void SET_WANTED_LEVEL_DIFFICULTY(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x4D655E609EE9D982, uint32_t>(p0, p1); } // 4D655E609EE9D982 B552626C
	static void RESET_WANTED_LEVEL_DIFFICULTY(uint32_t p0) { rage::NativeInvoke::Invoke<0xBA9B9D6C060CA3B8, uint32_t>(p0); } // BA9B9D6C060CA3B8 A64C378D
	static void START_FIRING_AMNESTY(uint32_t p0) { rage::NativeInvoke::Invoke<0x22AF53B3D19EC31A, uint32_t>(p0); } // 22AF53B3D19EC31A 5F8A22A6
	static void REPORT_CRIME(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xA81C1CA136F22988, uint32_t>(p0, p1, p2); } // A81C1CA136F22988 D8EB3A44
	static void _0x19372A1A61357555(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x19372A1A61357555, uint32_t>(p0, p1); } // 19372A1A61357555 59B5C2A2
	static void _0x3B5E31F65A4A561B(uint32_t p0) { rage::NativeInvoke::Invoke<0x3B5E31F65A4A561B, uint32_t>(p0); } // 3B5E31F65A4A561B 6B34A160
	static void _0xB5CB06B5C617D346(uint32_t p0) { rage::NativeInvoke::Invoke<0xB5CB06B5C617D346, uint32_t>(p0); } // B5CB06B5C617D346 B9FB142F
	static void _0x2D51603E740B4BE1(uint32_t p0) { rage::NativeInvoke::Invoke<0x2D51603E740B4BE1, uint32_t>(p0); } // 2D51603E740B4BE1 85725848
	static void _0xCFD4301FF0DDCA9(uint32_t p0) { rage::NativeInvoke::Invoke<0xCFD4301FF0DDCA9, uint32_t>(p0); } // CFD4301FF0DDCA9 3A7E5FB6
	static void _0x10C11CE8BB565A4F(uint32_t p0) { rage::NativeInvoke::Invoke<0x10C11CE8BB565A4F, uint32_t>(p0); } // 10C11CE8BB565A4F D15C4B1C
	static void _0x310F8ADFF76EABB8(float p0) { rage::NativeInvoke::Invoke<0x310F8ADFF76EABB8, uint32_t>(p0); } // 310F8ADFF76EABB8 BF6993C7
	static void _0x00235AB27CB3B9490E() { rage::NativeInvoke::Invoke<0x00235AB27CB3B9490E, uint32_t>(); } // 00235AB27CB3B9490E 47CAB814
	static BOOL CAN_PLAYER_START_MISSION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x352008B5469ACC31, BOOL>(p0); } // 352008B5469ACC31 39E3CB3F
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x78E049AAE10556D5, BOOL>(p0); } // 78E049AAE10556D5 BB77E9CD
	static BOOL IS_PLAYER_TARGETTING_ENTITY(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x8DEF14B60C4A9D01, BOOL>(p0, p1); } // 8DEF14B60C4A9D01 F3240B77
	static BOOL GET_PLAYER_TARGET_ENTITY(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xF35BC786336308F5, BOOL>(p0, p1); } // F35BC786336308F5 F6AAA2D7
	static BOOL IS_PLAYER_FREE_AIMING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAD26E3EB5603F99C, BOOL>(p0); } // AD26E3EB5603F99C 1DEC67B7
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xB89DCD342FB7AC95, BOOL>(p0, p1); } // B89DCD342FB7AC95 7D80EEAA
	static BOOL _GET_AIMED_ENTITY(uint32_t p0, uint32_t *entity) { return rage::NativeInvoke::Invoke<0x8FF35E6057D45161, BOOL>(p0, entity); } // 8FF35E6057D45161 8866D9D0
	static void _0xB558094C81091C67(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB558094C81091C67, uint32_t>(p0, p1); } // B558094C81091C67 74D42C03
	static void SET_PLAYER_CAN_DO_DRIVE_BY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x364C7B6EFAC33A0, uint32_t>(p0, p1); } // 364C7B6EFAC33A0 F4D99685
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAA919F0D192F1F06, uint32_t>(p0, p1); } // AA919F0D192F1F06 71B305BB
	static void SET_PLAYER_CAN_USE_COVER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEE994C7E42032A88, uint32_t>(p0, p1); } // EE994C7E42032A88 13CAFAFA
	static uint32_t GET_MAX_WANTED_LEVEL() { return rage::NativeInvoke::Invoke<0xB916C06719AE0212, uint32_t>(); } // B916C06719AE0212 457F1E44
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xED0A2A3FDC3E3728, BOOL>(p0); } // ED0A2A3FDC3E3728 456DB50D
	static void SET_PLAYER_SPRINT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE464B534EE3DDD9B, uint32_t>(p0, p1); } // E464B534EE3DDD9B 7DD7900C
	static void RESET_PLAYER_STAMINA(uint32_t p0) { rage::NativeInvoke::Invoke<0x34320D73366F471A, uint32_t>(p0); } // 34320D73366F471A C0445A9C
	static void RESTORE_PLAYER_STAMINA(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD10E47A64E6B7BA9, uint32_t>(p0, p1); } // D10E47A64E6B7BA9 62A93608
	static float _0xDE93D2E2A139150A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDE93D2E2A139150A, float>(p0); } // DE93D2E2A139150A 47017C90
	static float GET_PLAYER_SPRINT_TIME_REMAINING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3169682A8CEF8DEF, float>(p0); } // 3169682A8CEF8DEF 40E80543
	static float GET_PLAYER_UNDERWATER_TIME_REMAINING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9B0C9AAE48223212, float>(p0); } // 9B0C9AAE48223212 1317125A
	static uint32_t GET_PLAYER_GROUP(uint32_t p0) { return rage::NativeInvoke::Invoke<0x036A590B33049FCAF, uint32_t>(p0); } // 036A590B33049FCAF A5EDCDE8
	static uint32_t GET_PLAYER_MAX_ARMOUR(uint32_t p0) { return rage::NativeInvoke::Invoke<0x566F53D732C5E4A2, uint32_t>(p0); } // 566F53D732C5E4A2 02A50657
	static BOOL IS_PLAYER_CONTROL_ON(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA54B09EB6B49FA94, BOOL>(p0); } // A54B09EB6B49FA94 618857F2
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9CEB43D7FF40BE4A, BOOL>(p0); } // 9CEB43D7FF40BE4A 61B00A84
	static BOOL IS_PLAYER_CLIMBING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3AA78AB1897C2B94, BOOL>(p0); } // 3AA78AB1897C2B94 4A9E9AE0
	static BOOL IS_PLAYER_BEING_ARRESTED(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xAC33D6DDFB2C92EC, BOOL>(p0, p1); } // AC33D6DDFB2C92EC 7F6A60D3
	static void _0x16C74761D06A22F3(uint32_t p0) { rage::NativeInvoke::Invoke<0x16C74761D06A22F3, uint32_t>(p0); } // 16C74761D06A22F3 453C7CAB
	static uint32_t GET_PLAYERS_LAST_VEHICLE() { return rage::NativeInvoke::Invoke<0xF6EA6ED8FFB5B505, uint32_t>(); } // F6EA6ED8FFB5B505 E2757AC1
	static uint32_t GET_PLAYER_INDEX() { return rage::NativeInvoke::Invoke<0x4D82797EF5035A9F, uint32_t>(); } // 4D82797EF5035A9F 309BBDC1
	static uint32_t INT_TO_PLAYERINDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAE744CCC666ACB74, uint32_t>(p0); } // AE744CCC666ACB74 98DD98F1
	static uint32_t _0xC54850646145FF41(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC54850646145FF41, uint32_t>(p0); } // C54850646145FF41 98F3B274
	static uint32_t GET_TIME_SINCE_PLAYER_HIT_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC739875A6A1D454B, uint32_t>(p0); } // C739875A6A1D454B 6E9B8B9E
	static uint32_t GET_TIME_SINCE_PLAYER_HIT_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD53C4B2C0771295D, uint32_t>(p0); } // D53C4B2C0771295D B6209195
	static uint32_t GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x21C65FE2A4DA9912, uint32_t>(p0); } // 21C65FE2A4DA9912 8836E732
	static uint32_t GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDEB4FF3AA365AC5A, uint32_t>(p0); } // DEB4FF3AA365AC5A 9F27D00E
	static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC7F04149CEA63421, BOOL>(p0); } // C7F04149CEA63421 85C7E232
	static uint32_t PLAYER_ID() { return rage::NativeInvoke::Invoke<0xAF65E5A58BE87D95, uint32_t>(); } // AF65E5A58BE87D95 8AEA886C
	static uint32_t PLAYER_PED_ID() { return rage::NativeInvoke::Invoke<0x507DA4994C3D8EBD, uint32_t>(); } // 507DA4994C3D8EBD FA92E226
	static uint32_t _0x49CA6938CD809023() { return rage::NativeInvoke::Invoke<0x49CA6938CD809023, uint32_t>(); } // 49CA6938CD809023 8DD5B838
	static BOOL _0x7547D7CF93115D6D(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7547D7CF93115D6D, BOOL>(p0); } // 7547D7CF93115D6D 4B37333C
	static void FORCE_CLEANUP(uint32_t p0) { rage::NativeInvoke::Invoke<0xA6C786E2F6583AF3, uint32_t>(p0); } // A6C786E2F6583AF3 FDAAEA2B
	static void _0x622285B9570960AE(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x622285B9570960AE, uint32_t>(p0, p1); } // 622285B9570960AE 04256C73
	static void _0xED57D3CB2B5F4C03(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xED57D3CB2B5F4C03, uint32_t>(p0, p1); } // ED57D3CB2B5F4C03 882D3EB3
	static uint32_t _0x26AE414A8D829787() { return rage::NativeInvoke::Invoke<0x26AE414A8D829787, uint32_t>(); } // 26AE414A8D829787 39AA9FC8
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x317F71FAB1B637F6, uint32_t>(p0, p1); } // 317F71FAB1B637F6 A454DD29
	static void _0xC224FCE71F1B69E0(uint32_t p0) { rage::NativeInvoke::Invoke<0xC224FCE71F1B69E0, uint32_t>(p0); } // C224FCE71F1B69E0 AF7AFCC4
	static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB13535CD55ADA8AF, BOOL>(p0); } // B13535CD55ADA8AF 822BC992
	static BOOL _0xC190BD464AD91623(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC190BD464AD91623, BOOL>(p0, p1); } // C190BD464AD91623
	static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC91582A6D1E6CE38, BOOL>(p0); } // C91582A6D1E6CE38 136A5BE9
	static BOOL IS_PLAYER_ONLINE() { return rage::NativeInvoke::Invoke<0x2273C299A3D2906F, BOOL>(); } // 2273C299A3D2906F 9FAB6729
	static uint32_t IS_PLAYER_LOGGING_IN_NP() { return rage::NativeInvoke::Invoke<0x2226D8DDD32D6416, uint32_t>(); } // 2226D8DDD32D6416 8F72FAD0
	static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL p0) { rage::NativeInvoke::Invoke<0x120CADF76A6DEED1, uint32_t>(p0); } // 120CADF76A6DEED1 4264CED2
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return rage::NativeInvoke::Invoke<0x82F85CC376273040, BOOL>(); } // 82F85CC376273040 E495B6DA
	static void SET_PLAYER_INVINCIBLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x60D71C675384BFB1, uint32_t>(p0, p1); } // 60D71C675384BFB1 DFB9A2A2
	static BOOL GET_PLAYER_INVINCIBLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x95C3D05421303CD7, BOOL>(p0); } // 95C3D05421303CD7 680C90EE
	static void _0xD208E6FEE4ED0A33(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD208E6FEE4ED0A33, uint32_t>(p0, p1); } // D208E6FEE4ED0A33 00563E0D
	static void REMOVE_PLAYER_HELMET(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x92929C879D7A5D03, uint32_t>(p0, p1); } // 92929C879D7A5D03 6255F3B4
	static void GIVE_PLAYER_RAGDOLL_CONTROL(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x858D64CC004F1CE9, uint32_t>(p0, p1); } // 858D64CC004F1CE9 C7B4D7AC
	static void SET_PLAYER_LOCKON(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xED8CF4FA6897DA1A, uint32_t>(p0, p1); } // ED8CF4FA6897DA1A 0B270E0F
	static void SET_PLAYER_TARGETING_MODE(uint32_t p0) { rage::NativeInvoke::Invoke<0xD52CB0A6A959DB2E, uint32_t>(p0); } // D52CB0A6A959DB2E 61CAE253
	static BOOL _0xEC83793981EDB5CE() { return rage::NativeInvoke::Invoke<0xEC83793981EDB5CE, BOOL>(); } // EC83793981EDB5CE
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(uint32_t p0) { rage::NativeInvoke::Invoke<0xDFA69A35174944B2, uint32_t>(p0); } // DFA69A35174944B2 1D31CBBD
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA0DC5B4F5EADB551, BOOL>(p0); } // A0DC5B4F5EADB551 14F52453
	static void _0xA6E6CA9E3F5ACCE7(uint32_t p0) { rage::NativeInvoke::Invoke<0xA6E6CA9E3F5ACCE7, uint32_t>(p0); } // A6E6CA9E3F5ACCE7 7E3BFBC5
	static BOOL _0xE77D87B24BECF3E0(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE77D87B24BECF3E0, BOOL>(p0); } // E77D87B24BECF3E0 A3707DFC
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x8DFB8AB8D39B556B, uint32_t>(p0, p1); } // 8DFB8AB8D39B556B F20F72E5
	static void _SET_SWIM_SPEED_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x1E57C47E025777AC, uint32_t>(p0, p1); } // 1E57C47E025777AC B986FF47
	static void _SET_MOVE_SPEED_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x97B16D7AD1680356, uint32_t>(p0, p1); } // 97B16D7AD1680356 825423C2
	static uint32_t GET_TIME_SINCE_LAST_ARREST() { return rage::NativeInvoke::Invoke<0xC97B3280400752FE, uint32_t>(); } // C97B3280400752FE 62824EF4
	static uint32_t GET_TIME_SINCE_LAST_DEATH() { return rage::NativeInvoke::Invoke<0x56D611C338FAC7D6, uint32_t>(); } // 56D611C338FAC7D6 24BC5AC0
	static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { rage::NativeInvoke::Invoke<0x385940EA96075FD7, uint32_t>(); } // 385940EA96075FD7 F23277F3
	static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { rage::NativeInvoke::Invoke<0x325FEDAF82AC922A, uint32_t>(); } // 325FEDAF82AC922A D04568B9
	static void SET_PLAYER_FORCED_AIM(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0E3D2F2FAB4CBA729, uint32_t>(p0, p1); } // 0E3D2F2FAB4CBA729 94E42E2E
	static void SET_PLAYER_FORCED_ZOOM(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFB5349D55B248349, uint32_t>(p0, p1); } // FB5349D55B248349 B0C576CB
	static void _0x23E0115579F0B410(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x23E0115579F0B410, uint32_t>(p0, p1); } // 23E0115579F0B410 374F42F0
	static void DISABLE_PLAYER_FIRING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x1659395830D45200, uint32_t>(p0, p1); } // 1659395830D45200 30CB28CB
	static void _0x5CDC205E0656D419() { rage::NativeInvoke::Invoke<0x5CDC205E0656D419, uint32_t>(); } // 5CDC205E0656D419
	static void _0xC157D77C5EA7E9C1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC157D77C5EA7E9C1, uint32_t>(p0, p1); } // C157D77C5EA7E9C1 CCD937E7
	static void SET_PLAYER_MAX_ARMOUR(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD0F21EDFD4FBBD84, uint32_t>(p0, p1); } // D0F21EDFD4FBBD84 C6C3C53B
	static void SPECIAL_ABILITY_DEACTIVATE(uint32_t p0) { rage::NativeInvoke::Invoke<0x781B097139B80D2A, uint32_t>(p0); } // 781B097139B80D2A 80C2AB09
	static void _0x62F999FAD28AC182(uint32_t p0) { rage::NativeInvoke::Invoke<0x62F999FAD28AC182, uint32_t>(p0); } // 62F999FAD28AC182 0751908A
	static void SPECIAL_ABILITY_RESET(uint32_t p0) { rage::NativeInvoke::Invoke<0x7FD9BE2C185AEC8F, uint32_t>(p0); } // 7FD9BE2C185AEC8F A7D8BCD3
	static void _0xB263FA96BED3FA47(uint32_t p0) { rage::NativeInvoke::Invoke<0xB263FA96BED3FA47, uint32_t>(p0); } // B263FA96BED3FA47 4136829A
	static void _0xAAC1F5332F27BDA0(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xAAC1F5332F27BDA0, uint32_t>(p0, p1, p2); } // AAC1F5332F27BDA0 6F463F56
	static void _0x791768C4C7B9609E(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x791768C4C7B9609E, uint32_t>(p0, p1, p2); } // 791768C4C7B9609E AB55D8F3
	static void _0xFB11454A91E10821(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xFB11454A91E10821, uint32_t>(p0, p1, p2); } // FB11454A91E10821 F440C04D
	static void _0xA93329D18C9611F1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA93329D18C9611F1, uint32_t>(p0, p1); } // A93329D18C9611F1 5FEE98A2
	static void _0xB655B357FD83D0E4(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB655B357FD83D0E4, uint32_t>(p0, p1, p2); } // B655B357FD83D0E4 72429998
	static void RESET_SPECIAL_ABILITY_CONTROLS_CINEMATIC(uint32_t p0, float p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB51054474146B6AA, uint32_t>(p0, p1, p2); } // B51054474146B6AA 8C7E68C1
	static void _RECHARGE_SPECIAL_ABILITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC2AE0675A3BC6FEE, uint32_t>(p0, p1); } // C2AE0675A3BC6FEE B71589DA
	static void _0x5E1135587DA373B8(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5E1135587DA373B8, uint32_t>(p0, p1); } // 5E1135587DA373B8 9F80F6DF
	static void SPECIAL_ABILITY_LOCK(uint32_t p0) { rage::NativeInvoke::Invoke<0x214BB38E946E7F3B, uint32_t>(p0); } // 214BB38E946E7F3B 1B7BB388
	static void SPECIAL_ABILITY_UNLOCK(uint32_t p0) { rage::NativeInvoke::Invoke<0x20BB3D45C067628E, uint32_t>(p0); } // 20BB3D45C067628E 1FDB2919
	static BOOL IS_SPECIAL_ABILITY_UNLOCKED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8D1517ED38D12903, BOOL>(p0); } // 8D1517ED38D12903 C9C75E82
	static BOOL IS_SPECIAL_ABILITY_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5636DF02874259EA, BOOL>(p0); } // 5636DF02874259EA 1B17E334
	static BOOL IS_SPECIAL_ABILITY_METER_FULL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0BB6B8BB621BB2C97, BOOL>(p0); } // 0BB6B8BB621BB2C97 2E19D7F6
	static void ENABLE_SPECIAL_ABILITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x11073CBF39CB7032, uint32_t>(p0, p1); } // 11073CBF39CB7032 C86C1B4E
	static BOOL IS_SPECIAL_ABILITY_ENABLED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBED4C646F6B66E3A, BOOL>(p0); } // BED4C646F6B66E3A C01238CC
	static void SET_SPECIAL_ABILITY_MULTIPLIER(float p0) { rage::NativeInvoke::Invoke<0xD9F52F7EB92A826E, uint32_t>(p0); } // D9F52F7EB92A826E FF1BC556
	static void _0x4E4530ACCC2AAF8B(uint32_t p0) { rage::NativeInvoke::Invoke<0x4E4530ACCC2AAF8B, uint32_t>(p0); } // 4E4530ACCC2AAF8B 5D0FE25B
	static BOOL _0x65138EDA5D74E117(uint32_t p0) { return rage::NativeInvoke::Invoke<0x65138EDA5D74E117, BOOL>(p0); } // 65138EDA5D74E117 46E7E31D
	static BOOL _0xD3A2E4DC46ABD029(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xD3A2E4DC46ABD029, BOOL>(p0, p1); } // D3A2E4DC46ABD029 1E359CC8
	static BOOL _0xA8EFC5524AD91221(uint32_t p0, float p1) { return rage::NativeInvoke::Invoke<0xA8EFC5524AD91221, BOOL>(p0, p1); } // A8EFC5524AD91221 8CB53C9F
	static void START_PLAYER_TELEPORT(uint32_t p0, float p1, float p2, float p3, float p4, BOOL p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x6F8A1D62CF606CEF, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 6F8A1D62CF606CEF C552E06C
	static void STOP_PLAYER_TELEPORT() { rage::NativeInvoke::Invoke<0xA572598AC9C703A1, uint32_t>(); } // A572598AC9C703A1 86AB8DBB
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return rage::NativeInvoke::Invoke<0x09CAFDEAB6242673, BOOL>(); } // 09CAFDEAB6242673 3A11D118
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x727D9AE87D8490D1, float>(p0); } // 727D9AE87D8490D1 C3B02362
	static void _0xE9D44603410B2DBE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xE9D44603410B2DBE, uint32_t>(p0, p1); } // E9D44603410B2DBE 45514731
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB8668A8A57B0785, uint32_t>(p0, p1); } // B8668A8A57B0785 B02C2F39
	static void _0x4525FE997ADE7244(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x4525FE997ADE7244, uint32_t>(p0, p1); } // 4525FE997ADE7244 AE446344
	static void _0x53168525D1CF19A8(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x53168525D1CF19A8, uint32_t>(p0, p1); } // 53168525D1CF19A8 362E69AD
	static void _0xB56AF6C1B3D0A2B0(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB56AF6C1B3D0A2B0, uint32_t>(p0, p1); } // B56AF6C1B3D0A2B0 9F3D577F
	static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x56C8841BB3F3E7FE, uint32_t>(p0, p1); } // 56C8841BB3F3E7FE 823ECA63
	static void _0xD557CE7EE0E091DC(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD557CE7EE0E091DC, uint32_t>(p0, p1); } // D557CE7EE0E091DC A16626C7
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD22020DCD4D6898E, uint32_t>(p0, p1); } // D22020DCD4D6898E 8EA12EDB
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xFB2737CFD0FAA232, uint32_t>(p0, p1); } // FB2737CFD0FAA232 432B0509
	static void _0xF16F48EE312E023A(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF16F48EE312E023A, uint32_t>(p0, p1); } // F16F48EE312E023A 70689638
	static void _0xFEC34AB033BF0FAD(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xFEC34AB033BF0FAD, uint32_t>(p0, p1); } // FEC34AB033BF0FAD 77B8EF01
	static void _0x4E47698A7D339775(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4E47698A7D339775, uint32_t>(p0, p1); } // 4E47698A7D339775 D79D5D1B
	static void _0xCC87B2694189E7CF(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xCC87B2694189E7CF, uint32_t>(p0, p1); } // CC87B2694189E7CF 4E418E13
	static void _0x85E90C7BDBA1B1A9(uint32_t p0) { rage::NativeInvoke::Invoke<0x85E90C7BDBA1B1A9, uint32_t>(p0); } // 85E90C7BDBA1B1A9 A3E4798E
	static BOOL _0x53B0B86EF53FE301(uint32_t p0) { return rage::NativeInvoke::Invoke<0x53B0B86EF53FE301, BOOL>(p0); } // 53B0B86EF53FE301 30DA1DA1
	static void _0xA18857613A6FE4AD(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA18857613A6FE4AD, uint32_t>(p0, p1); } // A18857613A6FE4AD 832DEB7A
	static void _0xA121E1225EDD216E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xA121E1225EDD216E, uint32_t>(p0, p1, p2, p3); } // A121E1225EDD216E 14FE9264
	static void _0x87D4195E32E4AC96(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x87D4195E32E4AC96, uint32_t>(p0, p1, p2, p3); } // 87D4195E32E4AC96 F66E5CDD
	static void _0x5E0712245D353952(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x5E0712245D353952, uint32_t>(p0, p1); } // 5E0712245D353952 725C6174
	static void SET_PLAYER_NOISE_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x8BD370190E66BB94, uint32_t>(p0, p1); } // 8BD370190E66BB94 15786DD1
	static void _0x46E1941063DAC541(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x46E1941063DAC541, uint32_t>(p0, p1); } // 46E1941063DAC541 8D2D89C4
	static BOOL _0xE131581629473E8F(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xE131581629473E8F, BOOL>(p0, p1); } // E131581629473E8F 1C70B2EB
	static void SIMULATE_PLAYER_INPUT_GAIT(uint32_t p0, float p1, uint32_t p2, float p3, BOOL p4, BOOL p5) { rage::NativeInvoke::Invoke<0x2D7FE4B6E3F31F41, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2D7FE4B6E3F31F41 0D77CC34
	static void RESET_PLAYER_INPUT_GAIT(uint32_t p0) { rage::NativeInvoke::Invoke<0xCAF96F3FC7BD5390, uint32_t>(p0); } // CAF96F3FC7BD5390 4A701EE1
	static void _0xDA1AC80F42F720CE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDA1AC80F42F720CE, uint32_t>(p0, p1); } // DA1AC80F42F720CE A97C2059
	static void _0xCF98B71BDC696D37(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCF98B71BDC696D37, uint32_t>(p0, p1); } // CF98B71BDC696D37 A25D767E
	static void _0xB3D9BF898A7A3CF4(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB3D9BF898A7A3CF4, uint32_t>(p0, p1); } // B3D9BF898A7A3CF4 3D26105F
	static BOOL _0x17CDDC2EA5B1DA48(uint32_t p0) { return rage::NativeInvoke::Invoke<0x17CDDC2EA5B1DA48, BOOL>(p0); } // 17CDDC2EA5B1DA48 1D371529
	static void _0xA124B435C75E5F8F(uint32_t p0) { rage::NativeInvoke::Invoke<0xA124B435C75E5F8F, uint32_t>(p0); } // A124B435C75E5F8F E30A64DC
	static void SET_PLAYER_SIMULATE_AIMING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x76CDE4A00CC75AC5, uint32_t>(p0, p1); } // 76CDE4A00CC75AC5 F1E0CAFC
	static void _0x4F0AE7916719B90(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4F0AE7916719B90, uint32_t>(p0, p1); } // 4F0AE7916719B90 F7A0F00F
	static void _0xD2E73E6A6D417836(uint32_t p0) { rage::NativeInvoke::Invoke<0xD2E73E6A6D417836, uint32_t>(p0); } // D2E73E6A6D417836 B8209F16
	static void _0x171AC9F0CFF3012D(BOOL p0) { rage::NativeInvoke::Invoke<0x171AC9F0CFF3012D, uint32_t>(p0); } // 171AC9F0CFF3012D 8D9FD4D1
	static void _0x3BC6A71331269C80(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x3BC6A71331269C80, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 3BC6A71331269C80 ECD12E60
	static void _0x141573CBFA109F8D() { rage::NativeInvoke::Invoke<0x141573CBFA109F8D, uint32_t>(); } // 141573CBFA109F8D 96100EA4
	static BOOL _0x588012548399142(uint32_t p0) { return rage::NativeInvoke::Invoke<0x588012548399142, BOOL>(p0); } // 588012548399142 4A01B76A
	static BOOL _0xE908BABD022876D1(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE908BABD022876D1, BOOL>(p0); } // E908BABD022876D1 013B4F72
	static BOOL _0xD6F2B09BF0387432(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xD6F2B09BF0387432, BOOL>(p0, p1, p2); } // D6F2B09BF0387432 9DF75B2A
	static BOOL IS_PLAYER_RIDING_TRAIN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x53EF5755AE305BF9, BOOL>(p0); } // 53EF5755AE305BF9 9765E71D
	static BOOL _0x9A58EA3A7EEC2FFC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9A58EA3A7EEC2FFC, BOOL>(p0); } // 9A58EA3A7EEC2FFC FEA40B6C
	static void _0xD2A3C73B88069848(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD2A3C73B88069848, uint32_t>(p0, p1); } // D2A3C73B88069848 AD8383FA
	static void _0xC3B804DDC3A3D289(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xC3B804DDC3A3D289, uint32_t>(p0, p1, p2, p3, p4); } // C3B804DDC3A3D289 9254249D
	static void _0x0C63F976C36BCAD48(uint32_t p0) { rage::NativeInvoke::Invoke<0x0C63F976C36BCAD48, uint32_t>(p0); } // 0C63F976C36BCAD48 FD60F5AB
	static void _0xFFE1A0404D101F6C(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFFE1A0404D101F6C, uint32_t>(p0, p1); } // FFE1A0404D101F6C 5D382498
	static void _0xFCF8A06AF0F9EFC6(uint32_t p0) { rage::NativeInvoke::Invoke<0xFCF8A06AF0F9EFC6, uint32_t>(p0); } // FCF8A06AF0F9EFC6 6FF034BB
	static void _0x90948F033AC40F62(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x90948F033AC40F62, uint32_t>(p0, p1); } // 90948F033AC40F62 A877FF5E
	static void _0xC9FA1E3D4C8CC189(uint32_t p0) { rage::NativeInvoke::Invoke<0xC9FA1E3D4C8CC189, uint32_t>(p0); } // C9FA1E3D4C8CC189 BB62AAC5
	static void _0x1C1D54F61CAEF9C4(uint32_t p0) { rage::NativeInvoke::Invoke<0x1C1D54F61CAEF9C4, uint32_t>(p0); } // 1C1D54F61CAEF9C4 8C6E611D
	static void _0xAA0634FFB832752F(BOOL p0) { rage::NativeInvoke::Invoke<0xAA0634FFB832752F, uint32_t>(p0); } // AA0634FFB832752F 2849D4B2
	static void _0x815D910A97424E73(uint32_t p0) { rage::NativeInvoke::Invoke<0x815D910A97424E73, uint32_t>(p0); } // 815D910A97424E73
}

namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFD68187442384158, BOOL>(p0); } // FD68187442384158 3AC90869
	static BOOL _0x51BC2FF711F8CF71(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x51BC2FF711F8CF71, BOOL>(p0, p1); } // 51BC2FF711F8CF71 ACFEB3F9
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0FBE2EB4D474675FC, BOOL>(p0); } // 0FBE2EB4D474675FC A5B33300
	static BOOL DOES_ENTITY_HAVE_PHYSICS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2E0F030186A261D3, BOOL>(p0); } // 2E0F030186A261D3 9BCD2979
	static BOOL HAS_ENTITY_ANIM_FINISHED(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xD58C0ABFAF258340, BOOL>(p0, p1, p2, p3); } // D58C0ABFAF258340 1D9CAB92
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x43827D6447B61FA0, BOOL>(p0); } // 43827D6447B61FA0 6B74582E
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6B91ED8EB0DE484, BOOL>(p0); } // 6B91ED8EB0DE484 53FD4A25
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x87F7B968CB47182, BOOL>(p0); } // 87F7B968CB47182 878C2CE0
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x6255AE2591FE7603, BOOL>(p0, p1, p2); } // 6255AE2591FE7603 07FC77E0
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x15DEAA4402D18301, BOOL>(p0, p1, p2); } // 15DEAA4402D18301 53576FA7
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0B4D3CFD952BEB647, BOOL>(p0, p1); } // 0B4D3CFD952BEB647 210D87C8
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5800F5EE75107519, BOOL>(p0); } // 5800F5EE75107519 662A2F41
	static uint32_t _0xE8F096AC1F064558(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE8F096AC1F064558, uint32_t>(p0); } // E8F096AC1F064558 C0E3AA47
	static Vector3 _0xAA24F621DD65AB7(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAA24F621DD65AB7, Vector3>(p0); } // AA24F621DD65AB7 AB415C07
	static void _0x4A99017CF06B75D9(uint32_t p0) { rage::NativeInvoke::Invoke<0x4A99017CF06B75D9, uint32_t>(p0); } // 4A99017CF06B75D9 58D9775F
	static float GET_ENTITY_ANIM_CURRENT_TIME(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x5132EC78980FBED7, float>(p0, p1, p2); } // 5132EC78980FBED7 83943F41
	static float GET_ENTITY_ANIM_TOTAL_TIME(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x7166BD6F3788D273, float>(p0, p1, p2); } // 7166BD6F3788D273 433A9D18
	static uint32_t _0x96352C4E64C54D4C(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x96352C4E64C54D4C, uint32_t>(p0, p1); } // 96352C4E64C54D4C
	static uint32_t GET_ENTITY_ATTACHED_TO(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAC954CE73C919889, uint32_t>(p0); } // AC954CE73C919889 FE1589F9
	static Vector3 GET_ENTITY_COORDS(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xBF1B13057E5119A4, Vector3>(p0, p1); } // BF1B13057E5119A4 1647F1CB
	static Vector3 GET_ENTITY_FORWARD_VECTOR(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0F260FCBA09D07146, Vector3>(p0); } // 0F260FCBA09D07146 84DCECBF
	static float GET_ENTITY_FORWARD_X(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7BC30F058DCB71F9, float>(p0); } // 7BC30F058DCB71F9 49FAE914
	static float GET_ENTITY_FORWARD_Y(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE3BB5571030E833, float>(p0); } // FE3BB5571030E833 9E2F917C
	static float GET_ENTITY_HEADING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA9D6B28E708753B6, float>(p0); } // A9D6B28E708753B6 972CC383
	static uint32_t GET_ENTITY_HEALTH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5D422B4764FA2ACA, uint32_t>(p0); } // 5D422B4764FA2ACA 8E3222B7
	static uint32_t GET_ENTITY_MAX_HEALTH(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE32A4C9A9C5EB019, uint32_t>(p0); } // E32A4C9A9C5EB019 C7AE6AA1
	static void SET_ENTITY_MAX_HEALTH(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x60D75A750A3CA4F8, uint32_t>(p0, p1); } // 60D75A750A3CA4F8 96F84DF8
	static float GET_ENTITY_HEIGHT(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { return rage::NativeInvoke::Invoke<0xD8D7F1865C03A10A, float>(p0, p1, p2, p3, p4, p5); } // D8D7F1865C03A10A EE443481
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4E45AB7AE0C35CB4, float>(p0); } // 4E45AB7AE0C35CB4 57F56A4D
	static void GET_ENTITY_MATRIX(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x5C1DE83C22B0FDA5, uint32_t>(p0, p1, p2, p3, p4); } // 5C1DE83C22B0FDA5 EB9EB001
	static uint32_t GET_ENTITY_MODEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x26EA758C2A691D06, uint32_t>(p0); } // 26EA758C2A691D06 DAFCB3EC
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uint32_t p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0xC9351EFF34BB33C0, Vector3>(p0, p1, p2, p3); } // C9351EFF34BB33C0 6477EC9E
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uint32_t p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0xCAFB9D38494283D, Vector3>(p0, p1, p2, p3); } // CAFB9D38494283D ABCF043A
	static float GET_ENTITY_PITCH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x14712CD81E458F87, float>(p0); } // 14712CD81E458F87 FCE6ECE5
	static void GET_ENTITY_QUATERNION(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { rage::NativeInvoke::Invoke<0x4A737960F4097B82, uint32_t>(p0, p1, p2, p3, p4); } // 4A737960F4097B82 5154EC90
	static float GET_ENTITY_ROLL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x13D65835892E426D, float>(p0); } // 13D65835892E426D 36610842
	static Vector3 GET_ENTITY_ROTATION(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xAD9A5677421290F3, Vector3>(p0, p1); } // AD9A5677421290F3 8FF45B04
	static Vector3 GET_ENTITY_ROTATION_VELOCITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x801EC3BC611E2B1D, Vector3>(p0); } // 801EC3BC611E2B1D 9BF8A73F
	static uint32_t GET_ENTITY_SCRIPT(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x6438FDFEA7CD1702, uint32_t>(p0, p1); } // 6438FDFEA7CD1702 B7F70784
	static float GET_ENTITY_SPEED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x11F6A4A45943670E, float>(p0); } // 11F6A4A45943670E 9E1E4798
	static Vector3 GET_ENTITY_SPEED_VECTOR(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xA159D8B7175A5386, Vector3>(p0, p1); } // A159D8B7175A5386 3ED2B997
	static float GET_ENTITY_UPRIGHT_VALUE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEE28BD1C8F477A55, float>(p0); } // EE28BD1C8F477A55 F4268190
	static Vector3 GET_ENTITY_VELOCITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x903468970F24CA24, Vector3>(p0); } // 903468970F24CA24 C14C9B6B
	static uint32_t _0xB7E8BD80F6126D63(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB7E8BD80F6126D63, uint32_t>(p0); } // B7E8BD80F6126D63 BC5A9C58
	static uint32_t _0x0274BAC44978F9161(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0274BAC44978F9161, uint32_t>(p0); } // 0274BAC44978F9161 C46F74AC
	static uint32_t _0x379620F9B34A512B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x379620F9B34A512B, uint32_t>(p0); } // 379620F9B34A512B C69CF43D
	static Vector3 _0xF72E61A2DB753A80(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF72E61A2DB753A80, Vector3>(p0, p1); } // F72E61A2DB753A80 7C6339DF
	static uint32_t GET_NEAREST_PLAYER_TO_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4ABABA7F7437B49, uint32_t>(p0); } // 4ABABA7F7437B49 CE17FDEC
	static uint32_t _0xD146E00699ACE766(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xD146E00699ACE766, uint32_t>(p0, p1); } // D146E00699ACE766 B1808F56
	static uint32_t GET_ENTITY_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4EC0314653F6A605, uint32_t>(p0); } // 4EC0314653F6A605 0B1BD08D
	static uint32_t _0x3BFDCA5CFB987907(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3BFDCA5CFB987907, uint32_t>(p0); } // 3BFDCA5CFB987907
	static BOOL IS_AN_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9D168168EFD33C8, BOOL>(p0); } // 9D168168EFD33C8 D4B9715A
	static BOOL IS_ENTITY_A_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x91F594068DF4424F, BOOL>(p0); } // 91F594068DF4424F 55D33EAB
	static BOOL IS_ENTITY_A_MISSION_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x073E2404DC70203CD, BOOL>(p0); } // 073E2404DC70203CD 2632E124
	static BOOL IS_ENTITY_A_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1BA544973A67E699, BOOL>(p0); } // 1BA544973A67E699 BE800B01
	static BOOL IS_ENTITY_AN_OBJECT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBCF2529C09F7A239, BOOL>(p0); } // BCF2529C09F7A239 3F52E561
	static BOOL IS_ENTITY_AT_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x594EB70937EC1486, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 594EB70937EC1486 D749B606
	static BOOL IS_ENTITY_AT_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5, BOOL p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x2F406E91B59DB558, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2F406E91B59DB558 DABDCB52
	static BOOL IS_ENTITY_ATTACHED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDF75DAAACD32E49E, BOOL>(p0); } // DF75DAAACD32E49E EC1479D5
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB150B4C4A9FFA174, BOOL>(p0); } // B150B4C4A9FFA174 0B5DE340
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x42B70344077B22B9, BOOL>(p0); } // 42B70344077B22B9 9D7A609C
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB9D0211AF48761E5, BOOL>(p0); } // B9D0211AF48761E5 DE5C995E
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x21F34311BCDA79B9, BOOL>(p0, p1); } // 21F34311BCDA79B9 B0ABFEA8
	static BOOL IS_ENTITY_DEAD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE5D56342B0FF1D0D, BOOL>(p0); } // E5D56342B0FF1D0D B6F7CBAC
	static BOOL IS_ENTITY_IN_AIR(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF97DDB74A78F6500, BOOL>(p0); } // F97DDB74A78F6500 A4157987
	static BOOL IS_ENTITY_IN_ANGLED_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9, uint32_t p10) { return rage::NativeInvoke::Invoke<0x9EC075F0DABF6298, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 9EC075F0DABF6298 883622FA
	static BOOL IS_ENTITY_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0xE4C60D15202FDAD8, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // E4C60D15202FDAD8 8C2DFA9D
	static BOOL IS_ENTITY_IN_ZONE(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x15E1E68CC8303F09, BOOL>(p0, p1); } // 15E1E68CC8303F09 45C82B21
	static BOOL IS_ENTITY_IN_WATER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x26FE3F0A2045AA7E, BOOL>(p0); } // 26FE3F0A2045AA7E 4C3C2508
	static float _0xC062498DF45BB995(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC062498DF45BB995, float>(p0); } // C062498DF45BB995 0170F68C
	static void _0xF87E30E725AD0C2E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF87E30E725AD0C2E, uint32_t>(p0, p1); } // F87E30E725AD0C2E 40C84A74
	static BOOL IS_ENTITY_ON_SCREEN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9226425D9E480D72, BOOL>(p0); } // 9226425D9E480D72 C1FEC5ED
	static BOOL IS_ENTITY_PLAYING_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x22605DE2E6933CF2, BOOL>(p0, p1, p2, p3); } // 22605DE2E6933CF2 0D130D34
	static BOOL IS_ENTITY_STATIC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x76A777C5C8CD79A7, BOOL>(p0); } // 76A777C5C8CD79A7 928E12E9
	static BOOL IS_ENTITY_TOUCHING_ENTITY(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x5D0DED2275F131C9, BOOL>(p0, p1); } // 5D0DED2275F131C9 6B931477
	static BOOL _0x069CE28F9B6AB5CA0(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x069CE28F9B6AB5CA0, BOOL>(p0, p1); } // 069CE28F9B6AB5CA0 307E7611
	static BOOL IS_ENTITY_UPRIGHT(uint32_t p0, float p1) { return rage::NativeInvoke::Invoke<0x3F9C86DAF30C655, BOOL>(p0, p1); } // 3F9C86DAF30C655 3BCDF4E1
	static BOOL IS_ENTITY_UPSIDEDOWN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x932B30DC68C85A46, BOOL>(p0); } // 932B30DC68C85A46 5ACAA48F
	static BOOL IS_ENTITY_VISIBLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDAB2315B565377E3, BOOL>(p0); } // DAB2315B565377E3 120B4ED5
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1ACC4CD5A7C76F75, BOOL>(p0); } // 1ACC4CD5A7C76F75 5D240E9D
	static BOOL IS_ENTITY_OCCLUDED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x19F2D2C58150C825, BOOL>(p0); } // 19F2D2C58150C825 46BC5B40
	static BOOL _0xF01F32895032B155(uint32_t p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0xF01F32895032B155, BOOL>(p0, p1, p2, p3, p4); } // F01F32895032B155 EA127CBC
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x61DBAE4CD87221B9, BOOL>(p0); } // 61DBAE4CD87221B9 00AB7A4A
	static void _0xCD5BFC4DFAFC3268(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, BOOL p6, BOOL p7, BOOL p8) { rage::NativeInvoke::Invoke<0xCD5BFC4DFAFC3268, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // CD5BFC4DFAFC3268 28924E98
	static void APPLY_FORCE_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, BOOL p9, BOOL p10, BOOL p11, BOOL p12, BOOL p13) { rage::NativeInvoke::Invoke<0x5784591F4D03884C, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 5784591F4D03884C C1C0855A
	static void ATTACH_ENTITY_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10, BOOL p11, BOOL p12, uint32_t p13, BOOL p14) { rage::NativeInvoke::Invoke<0x26030664C7D28388, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 26030664C7D28388 EC024237
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, BOOL p14, BOOL p15, BOOL p16, BOOL p17, uint32_t p18) { rage::NativeInvoke::Invoke<0x4F805549F5B07893, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // 4F805549F5B07893 0547417F
	static void _0x97976FD664FF4A16(uint32_t p0) { rage::NativeInvoke::Invoke<0x97976FD664FF4A16, uint32_t>(p0); } // 97976FD664FF4A16 6909BA59
	static uint32_t _0xD33827A2E07C4BE6(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xD33827A2E07C4BE6, uint32_t>(p0, p1); } // D33827A2E07C4BE6 E4ECAC22
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uint32_t p0) { rage::NativeInvoke::Invoke<0x7CEA616AE5D86DF7, uint32_t>(p0); } // 7CEA616AE5D86DF7 2B83F43B
	static void DELETE_ENTITY(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA65C6361932CEE99, uint32_t>(p0); } // A65C6361932CEE99 FAA3D236
	static void DETACH_ENTITY(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x5B97F41A7BE54877, uint32_t>(p0, p1, p2); } // 5B97F41A7BE54877 C8EFCB41
	static void FREEZE_ENTITY_POSITION(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x479E7EEEBDEE245D, uint32_t>(p0, p1); } // 479E7EEEBDEE245D 65C16D57
	static void _0x5BA593EA32D0187E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5BA593EA32D0187E, uint32_t>(p0, p1); } // 5BA593EA32D0187E D3850671
	static BOOL PLAY_ENTITY_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, BOOL p4, BOOL p5, BOOL p6, float p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x7FFC7B578074E5B8, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 7FFC7B578074E5B8 878753D5
	static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6, float p7) { return rage::NativeInvoke::Invoke<0x763BBCB2253879B8, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // 763BBCB2253879B8 012760AA
	static BOOL _0xCDC98ED98F4741D7(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t *p6, uint32_t *p7, float p8, float p9, uint32_t p10, float p11) { return rage::NativeInvoke::Invoke<0xCDC98ED98F4741D7, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // CDC98ED98F4741D7 EB4CBA74
	static BOOL _0x201BF055A9978BFE(float p0, float p1, float p2, float p3, uint32_t p4, float p5) { return rage::NativeInvoke::Invoke<0x201BF055A9978BFE, BOOL>(p0, p1, p2, p3, p4, p5); } // 201BF055A9978BFE 7253D5B2
	static uint32_t STOP_ENTITY_ANIM(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x6F5A8AEA65939753, uint32_t>(p0, p1, p2, p3); } // 6F5A8AEA65939753 C4769830
	static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(uint32_t p0, float p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x520A583BA5E4F9A7, BOOL>(p0, p1, p2); } // 520A583BA5E4F9A7 E27D2FC1
	static BOOL _0x89D7DDF7D591D231(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x89D7DDF7D591D231, BOOL>(p0, p1); } // 89D7DDF7D591D231 66571CA0
	static BOOL _0x01667EC8951B464F(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0x01667EC8951B464F, BOOL>(p0, p1, p2, p3, p4); } // 01667EC8951B464F C41DDA62
	static void SET_ENTITY_ANIM_CURRENT_TIME(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3) { rage::NativeInvoke::Invoke<0xADF6DEFE940F56B0, uint32_t>(p0, p1, p2, p3); } // ADF6DEFE940F56B0 99D90735
	static void SET_ENTITY_ANIM_SPEED(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3) { rage::NativeInvoke::Invoke<0x823AFE6C22E61E55, uint32_t>(p0, p1, p2, p3); } // 823AFE6C22E61E55 3990C90A
	static void SET_ENTITY_AS_MISSION_ENTITY(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xBAE5DF507EEC53C8, uint32_t>(p0, p1, p2); } // BAE5DF507EEC53C8 5D1F9E0F
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(uint32_t *p0) { rage::NativeInvoke::Invoke<0x9720CE176AF721DF, uint32_t>(p0); } // 9720CE176AF721DF ADF2267C
	static void SET_PED_AS_NO_LONGER_NEEDED(uint32_t *p0) { rage::NativeInvoke::Invoke<0xCA4DD92F1F2931F3, uint32_t>(p0); } // CA4DD92F1F2931F3 9A388380
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(uint32_t *p0) { rage::NativeInvoke::Invoke<0xB67623A401171555, uint32_t>(p0); } // B67623A401171555 9B0E10BE
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(uint32_t *p0) { rage::NativeInvoke::Invoke<0x5DADA1340CBB893, uint32_t>(p0); } // 5DADA1340CBB893 3F6B949F
	static void SET_ENTITY_CAN_BE_DAMAGED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x843E25883D2C32A3, uint32_t>(p0, p1); } // 843E25883D2C32A3 60B6E744
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x482BF74E0AD9F7BC, uint32_t>(p0, p1, p2); } // 482BF74E0AD9F7BC 34165B5D
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x457B5DD3F7C51156, uint32_t>(p0, p1); } // 457B5DD3F7C51156 3B13797C
	static void SET_ENTITY_COLLISION(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xCC8C6873CFB069A4, uint32_t>(p0, p1, p2); } // CC8C6873CFB069A4 139FD37D
	static BOOL _0xCFEC4FDF9B169907(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCFEC4FDF9B169907, BOOL>(p0); } // CFEC4FDF9B169907
	static void SET_ENTITY_COORDS(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x0F85858E5CBF4D9F0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 0F85858E5CBF4D9F0 DF70B41B
	static void _0x5794AC350DFE7892(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x5794AC350DFE7892, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 5794AC350DFE7892
	static void SET_ENTITY_COORDS_NO_OFFSET(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6) { rage::NativeInvoke::Invoke<0x5614D4217C75FFE5, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 5614D4217C75FFE5 4C83DE8D
	static void SET_ENTITY_DYNAMIC(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4B499AD03E78933A, uint32_t>(p0, p1); } // 4B499AD03E78933A 236F525B
	static void SET_ENTITY_HEADING(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x248DC16118AE5035, uint32_t>(p0, p1); } // 248DC16118AE5035 E0FF064D
	static void SET_ENTITY_HEALTH(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3E16CE93BAE616EE, uint32_t>(p0, p1); } // 3E16CE93BAE616EE FBCD1831
	static void SET_ENTITY_INVINCIBLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF732465E1FF70CE4, uint32_t>(p0, p1); } // F732465E1FF70CE4 C1213A21
	static void SET_ENTITY_IS_TARGET_PRIORITY(uint32_t p0, BOOL p1, float p2) { rage::NativeInvoke::Invoke<0x7AB733311E18F96E, uint32_t>(p0, p1, p2); } // 7AB733311E18F96E 9729EE32
	static void SET_ENTITY_LIGHTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC483689F46456E37, uint32_t>(p0, p1); } // C483689F46456E37 E8FC85AF
	static void SET_ENTITY_LOAD_COLLISION_FLAG(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x03C2614E45AB2F499, uint32_t>(p0, p1); } // 03C2614E45AB2F499 C52F295B
	static BOOL _0xDD4FE903268AAF8(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDD4FE903268AAF8, BOOL>(p0); } // DD4FE903268AAF8 851687F9
	static void SET_ENTITY_MAX_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x018D283BE0DD0EDEB, uint32_t>(p0, p1); } // 018D283BE0DD0EDEB 46AFFED3
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCAFAFBAB1F150EFF, uint32_t>(p0, p1); } // CAFAFBAB1F150EFF 4B707F50
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x3AF1287A38E532D6, uint32_t>(p0, p1, p2); } // 3AF1287A38E532D6 202237E2
	static void SET_ENTITY_PROOFS(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { rage::NativeInvoke::Invoke<0x9FD46396C2DAB482, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 9FD46396C2DAB482 7E9EAB66
	static void SET_ENTITY_QUATERNION(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x39E21A7346BD6D1B, uint32_t>(p0, p1, p2, p3, p4); } // 39E21A7346BD6D1B 83B6046F
	static void SET_ENTITY_RECORDS_COLLISIONS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0A50E417B5EB36D47, uint32_t>(p0, p1); } // 0A50E417B5EB36D47 6B189A1A
	static void SET_ENTITY_ROTATION(uint32_t p0, float p1, float p2, float p3, uint32_t p4, BOOL p5) { rage::NativeInvoke::Invoke<0xC1619F9F00BCB470, uint32_t>(p0, p1, p2, p3, p4, p5); } // C1619F9F00BCB470 0A345EFE
	static void SET_ENTITY_VISIBLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7E0AE075425AA06, uint32_t>(p0, p1); } // 7E0AE075425AA06 D043E8E1
	static void SET_ENTITY_VELOCITY(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xB13ED1AA2B45F4BE, uint32_t>(p0, p1, p2, p3); } // B13ED1AA2B45F4BE FF5A1988
	static void SET_ENTITY_HAS_GRAVITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x91E11F10B6C60E7B, uint32_t>(p0, p1); } // 91E11F10B6C60E7B E2F262BF
	static void SET_ENTITY_LOD_DIST(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x94A4D627D865396B, uint32_t>(p0, p1); } // 94A4D627D865396B D7ACC7AD
	static uint32_t _0xD9BC90A41A7D584C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD9BC90A41A7D584C, uint32_t>(p0); } // D9BC90A41A7D584C 4DA3D51F
	static void SET_ENTITY_ALPHA(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x4B7E9C56D2699137, uint32_t>(p0, p1, p2); } // 4B7E9C56D2699137 AE667CB0
	static uint32_t GET_ENTITY_ALPHA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x23D71D352CFE13D8, uint32_t>(p0); } // 23D71D352CFE13D8 1560B017
	static void RESET_ENTITY_ALPHA(uint32_t p0) { rage::NativeInvoke::Invoke<0x55583B2832F3D36E, uint32_t>(p0); } // 55583B2832F3D36E 8A30761C
	static void _0x9EC71C3E441E3F56(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x9EC71C3E441E3F56, uint32_t>(p0, p1); } // 9EC71C3E441E3F56
	static void _0x76C1E719845E0CA2(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x76C1E719845E0CA2, uint32_t>(p0, p1); } // 76C1E719845E0CA2 D8FF798A
	static void SET_ENTITY_RENDER_SCORCHED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x950A8FF87758D4D3, uint32_t>(p0, p1); } // 950A8FF87758D4D3 AAC9317B
	static void _0xCC8692693AC43A3F(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCC8692693AC43A3F, uint32_t>(p0, p1); } // CC8692693AC43A3F C47F5B91
	static void CREATE_MODEL_SWAP(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, BOOL p6) { rage::NativeInvoke::Invoke<0xDCFF52D7A029D648, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // DCFF52D7A029D648 0BC12F9E
	static void REMOVE_MODEL_SWAP(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, BOOL p6) { rage::NativeInvoke::Invoke<0x078EAA9E51EE74647, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 078EAA9E51EE74647 CE0AA8BC
	static void CREATE_MODEL_HIDE(float p0, float p1, float p2, float p3, uint32_t p4, BOOL p5) { rage::NativeInvoke::Invoke<0x259C96726C65FE5C, uint32_t>(p0, p1, p2, p3, p4, p5); } // 259C96726C65FE5C 7BD5CF2F
	static void _0x41FE9C4E02E515C(float p0, float p1, float p2, float p3, uint32_t p4, BOOL p5) { rage::NativeInvoke::Invoke<0x41FE9C4E02E515C, uint32_t>(p0, p1, p2, p3, p4, p5); } // 41FE9C4E02E515C 07AAF22C
	static void REMOVE_MODEL_HIDE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xB59362C1B4E8772E, uint32_t>(p0, p1, p2, p3, p4, p5); } // B59362C1B4E8772E 993DBC10
	static void CREATE_FORCED_OBJECT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xC1D99B19BD327A1B, uint32_t>(p0, p1, p2, p3, p4, p5); } // C1D99B19BD327A1B 335190A2
	static void REMOVE_FORCED_OBJECT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xD1B54E2C95D694E4, uint32_t>(p0, p1, p2, p3, p4); } // D1B54E2C95D694E4 AED73ADD
	static void SET_ENTITY_NO_COLLISION_ENTITY(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x53098C54EF3B4593, uint32_t>(p0, p1, p2); } // 53098C54EF3B4593 1E11BFE9
	static void SET_ENTITY_MOTION_BLUR(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x94B6597E86F6FAF9, uint32_t>(p0, p1); } // 94B6597E86F6FAF9 E90005B8
	static void _0x76527CDA9FF31B20(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x76527CDA9FF31B20, uint32_t>(p0, p1); } // 76527CDA9FF31B20 44767B31
	static void _0xE22810FDCF98C21A(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE22810FDCF98C21A, uint32_t>(p0, p1); } // E22810FDCF98C21A E224A6A5
	static void _0x8457B3004CE3262E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8457B3004CE3262E, uint32_t>(p0, p1); } // 8457B3004CE3262E
	static void _0x36F8F6D4F1ED9877(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x36F8F6D4F1ED9877, uint32_t>(p0, p1); } // 36F8F6D4F1ED9877
}

namespace PED
{
	static uint32_t CREATE_PED(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return rage::NativeInvoke::Invoke<0x7B88529CAE3B7F15, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 7B88529CAE3B7F15 0389EF71
	static void DELETE_PED(uint32_t p0) { rage::NativeInvoke::Invoke<0x8019BB3BA236A900, uint32_t>(p0); } // 8019BB3BA236A900 13EFB9A0
	static uint32_t CLONE_PED(uint32_t p0, BOOL p1, BOOL p2, BOOL p3) { return rage::NativeInvoke::Invoke<0xA4462E0443BF7F13, uint32_t>(p0, p1, p2, p3); } // A4462E0443BF7F13 8C8A8D6E
	static void _0x89A1CAD126A6BDE2(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x89A1CAD126A6BDE2, uint32_t>(p0, p1); } // 89A1CAD126A6BDE2 FC70EEC7
	static BOOL IS_PED_IN_VEHICLE(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x53170344050F2301, BOOL>(p0, p1, p2); } // 53170344050F2301 7DA6BC83
	static BOOL IS_PED_IN_MODEL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x70955799BE2F456F, BOOL>(p0, p1); } // 70955799BE2F456F A6438D4B
	static BOOL IS_PED_IN_ANY_VEHICLE(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x2A24448FF232F834, BOOL>(p0, p1); } // 2A24448FF232F834 3B0171EE
	static BOOL IS_COP_PED_IN_AREA_3D(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x2ECF6DFC75F222F2, BOOL>(p0, p1, p2, p3, p4, p5); } // 2ECF6DFC75F222F2 B98DB96B
	static BOOL IS_PED_INJURED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9F94F2CFDCA78C55, BOOL>(p0); } // 9F94F2CFDCA78C55 2530A087
	static BOOL IS_PED_HURT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD074306FB8714BD2, BOOL>(p0); } // D074306FB8714BD2 69DFA0AF
	static BOOL IS_PED_FATALLY_INJURED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x50CD51844ED01084, BOOL>(p0); } // 50CD51844ED01084 BADA0093
	static BOOL _0x1F214B2198E9D98E(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x1F214B2198E9D98E, BOOL>(p0, p1); } // 1F214B2198E9D98E CBDB7739
	static BOOL IS_CONVERSATION_PED_DEAD(uint32_t p0) { return rage::NativeInvoke::Invoke<0x20F836CFEDC2DEE3, BOOL>(p0); } // 20F836CFEDC2DEE3 1FA39EFE
	static BOOL IS_PED_AIMING_FROM_COVER(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC335288A248B7DA, BOOL>(p0); } // C335288A248B7DA DEBAB2AF
	static BOOL IS_PED_RELOADING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFEE0084CCD1F1D18, BOOL>(p0); } // FEE0084CCD1F1D18 961E1745
	static BOOL IS_PED_A_PLAYER(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBC57175ED22C698D, BOOL>(p0); } // BC57175ED22C698D 404794CA
	static uint32_t CREATE_PED_INSIDE_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, BOOL p4, BOOL p5) { return rage::NativeInvoke::Invoke<0xC68FBD37098CE438, uint32_t>(p0, p1, p2, p3, p4, p5); } // C68FBD37098CE438 3000F092
	static void SET_PED_DESIRED_HEADING(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x3227271A33EDB93D, uint32_t>(p0, p1); } // 3227271A33EDB93D 961458F9
	static void _0x7367A83B3C88034A(uint32_t p0) { rage::NativeInvoke::Invoke<0x7367A83B3C88034A, uint32_t>(p0); } // 7367A83B3C88034A 290421BE
	static BOOL IS_PED_FACING_PED(uint32_t p0, uint32_t p1, float p2) { return rage::NativeInvoke::Invoke<0x849DBD2D635C99D5, BOOL>(p0, p1, p2); } // 849DBD2D635C99D5 0B775838
	static BOOL IS_PED_IN_MELEE_COMBAT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6A5400407F3E1292, BOOL>(p0); } // 6A5400407F3E1292 FD7814A5
	static BOOL IS_PED_STOPPED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3428BABF05B108EE, BOOL>(p0); } // 3428BABF05B108EE A0DC0B87
	static BOOL IS_PED_SHOOTING_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8) { return rage::NativeInvoke::Invoke<0xEE9A290405B6083, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // EE9A290405B6083 741BF04F
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return rage::NativeInvoke::Invoke<0x4FD2063004E8875E, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // 4FD2063004E8875E 91833867
	static BOOL IS_PED_SHOOTING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEB4AE93098956715, BOOL>(p0); } // EB4AE93098956715 E7C3405E
	static void SET_PED_ACCURACY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE7962295F4C99484, uint32_t>(p0, p1); } // E7962295F4C99484 6C17122E
	static uint32_t GET_PED_ACCURACY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x87769EF841855C53, uint32_t>(p0); } // 87769EF841855C53 0A2A0AA0
	static BOOL IS_PED_MODEL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x92A853B99CCAA054, BOOL>(p0, p1); } // 92A853B99CCAA054 5F1DDFCB
	static void EXPLODE_PED_HEAD(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4FAD05F0077C290C, uint32_t>(p0, p1); } // 4FAD05F0077C290C 05CC1380
	static void REMOVE_PED_ELEGANTLY(uint32_t *p0) { rage::NativeInvoke::Invoke<0x38909B3F85749CCE, uint32_t>(p0); } // 38909B3F85749CCE 4FFB8C6C
	static void ADD_ARMOUR_TO_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x97D59B34648267BB, uint32_t>(p0, p1); } // 97D59B34648267BB F686B26E
	static void SET_PED_ARMOUR(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xBB2572E965AF1D41, uint32_t>(p0, p1); } // BB2572E965AF1D41 4E3A0CC4
	static void SET_PED_INTO_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x11460EBE0487B44F, uint32_t>(p0, p1, p2); } // 11460EBE0487B44F 07500C79
	static void _0x840551AFD170C83E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x840551AFD170C83E, uint32_t>(p0, p1); } // 840551AFD170C83E 58A80BD5
	static BOOL CAN_CREATE_RANDOM_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCDE53837DC5E7B49, BOOL>(p0); } // CDE53837DC5E7B49 F9ABE88F
	static uint32_t CREATE_RANDOM_PED(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0xFBA8162159A66DCF, uint32_t>(p0, p1, p2); } // FBA8162159A66DCF 5A949543
	static uint32_t CREATE_RANDOM_PED_AS_DRIVER(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x7B86333DEEC0F470, uint32_t>(p0, p1); } // 7B86333DEEC0F470 B927CE9A
	static BOOL CAN_CREATE_RANDOM_DRIVER() { return rage::NativeInvoke::Invoke<0x9A04A31EBD7CBED5, BOOL>(); } // 9A04A31EBD7CBED5 99861609
	static BOOL _0xC17491A1504D536A() { return rage::NativeInvoke::Invoke<0xC17491A1504D536A, BOOL>(); } // C17491A1504D536A 7018BE31
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(uint32_t p0) { rage::NativeInvoke::Invoke<0xD25CAD1150EE36F6, uint32_t>(p0); } // D25CAD1150EE36F6 20E01957
	static void SET_PED_CAN_BE_DRAGGED_OUT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEA0F21C3BB415566, uint32_t>(p0, p1); } // EA0F21C3BB415566 AA7F1131
	static void _0x1B3C629097FA3B1A(BOOL p0) { rage::NativeInvoke::Invoke<0x1B3C629097FA3B1A, uint32_t>(p0); } // 1B3C629097FA3B1A 6CD58238
	static BOOL IS_PED_MALE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB9DC6B81F29B0CA8, BOOL>(p0); } // B9DC6B81F29B0CA8 90950455
	static BOOL IS_PED_HUMAN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x93AAE5923D671594, BOOL>(p0); } // 93AAE5923D671594 194BB7B0
	static uint32_t GET_VEHICLE_PED_IS_IN(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x78AB10B64129B3D5, uint32_t>(p0, p1); } // 78AB10B64129B3D5 AFE92319
	static void RESET_PED_LAST_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xBC8F72DD87BC210F, uint32_t>(p0); } // BC8F72DD87BC210F 5E3B5942
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { rage::NativeInvoke::Invoke<0xAC84A7D79E8CE169, uint32_t>(p0); } // AC84A7D79E8CE169 039C82BB
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { rage::NativeInvoke::Invoke<0x2EDE2079957BD6D3, uint32_t>(p0, p1); } // 2EDE2079957BD6D3 2909ABF0
	static void _0x71DEC6D1CF24C538() { rage::NativeInvoke::Invoke<0x71DEC6D1CF24C538, uint32_t>(); } // 71DEC6D1CF24C538 B48C0C04
	static void _0xDE204F802975CF64(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xDE204F802975CF64, uint32_t>(p0, p1, p2); } // DE204F802975CF64 25EA2AA5
	static void SET_PED_NON_CREATION_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xE833E73A4C46A088, uint32_t>(p0, p1, p2, p3, p4, p5); } // E833E73A4C46A088 7A97283F
	static void CLEAR_PED_NON_CREATION_AREA() { rage::NativeInvoke::Invoke<0x8956FD662264693F, uint32_t>(); } // 8956FD662264693F 6F7043A3
	static void _0x9611FE1B4A112F5F() { rage::NativeInvoke::Invoke<0x9611FE1B4A112F5F, uint32_t>(); } // 9611FE1B4A112F5F 8C555ADD
	static uint32_t IS_PED_ON_MOUNT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB105D3800E587FE, uint32_t>(p0); } // B105D3800E587FE 43103006
	static uint32_t GET_MOUNT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB26FB9A55AE15726, uint32_t>(p0); } // B26FB9A55AE15726 DD31EC4E
	static BOOL IS_PED_ON_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2E26534B0B94DA84, BOOL>(p0); } // 2E26534B0B94DA84 A1AE7CC7
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xAD117F83E7C4D176, BOOL>(p0, p1); } // AD117F83E7C4D176 63CB4603
	static void SET_PED_MONEY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFBF796BC19E6FC23, uint32_t>(p0, p1); } // FBF796BC19E6FC23 40D90BF2
	static uint32_t GET_PED_MONEY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCC26FE784C3641CC, uint32_t>(p0); } // CC26FE784C3641CC EB3C4C7E
	static void _0x12A7BC4048447EB3(float p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x12A7BC4048447EB3, uint32_t>(p0, p1); } // 12A7BC4048447EB3 D41C9AED
	static void _0xCD96F5BE16E73D4D(BOOL p0) { rage::NativeInvoke::Invoke<0xCD96F5BE16E73D4D, uint32_t>(p0); } // CD96F5BE16E73D4D 30B98369
	static void _0x7C64F1AAE963D0C9(BOOL p0) { rage::NativeInvoke::Invoke<0x7C64F1AAE963D0C9, uint32_t>(p0); } // 7C64F1AAE963D0C9 02A080C8
	static void SET_PED_SUFFERS_CRITICAL_HITS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x24C9F79D6E9E61A8, uint32_t>(p0, p1); } // 24C9F79D6E9E61A8 6F6FC7E6
	static void _0xEA418A40A17769F3(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEA418A40A17769F3, uint32_t>(p0, p1); } // EA418A40A17769F3 1572022A
	static BOOL IS_PED_SITTING_IN_VEHICLE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x764E7360C13E7383, BOOL>(p0, p1); } // 764E7360C13E7383 DDDE26FA
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2E177F2B797A4A34, BOOL>(p0); } // 2E177F2B797A4A34 0EA9CA03
	static BOOL IS_PED_ON_FOOT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x073B082A8BFC119BA, BOOL>(p0); } // 073B082A8BFC119BA C60D0785
	static BOOL IS_PED_ON_ANY_BIKE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9331412F1452086E, BOOL>(p0); } // 9331412F1452086E 4D885B2E
	static BOOL IS_PED_PLANTING_BOMB(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA43F7819FA056045, BOOL>(p0); } // A43F7819FA056045 0EDAC574
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(uint32_t p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x19FA4BF61837E14, Vector3>(p0, p1, p2); } // 19FA4BF61837E14 129F9DC1
	static BOOL IS_PED_IN_ANY_BOAT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x70A314BA86AFCBFA, BOOL>(p0); } // 70A314BA86AFCBFA 1118A947
	static BOOL IS_PED_IN_ANY_SUB(uint32_t p0) { return rage::NativeInvoke::Invoke<0x202FB250328FD056, BOOL>(p0); } // 202FB250328FD056 E65F8059
	static BOOL IS_PED_IN_ANY_HELI(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD7475AE87197B442, BOOL>(p0); } // D7475AE87197B442 7AB5523B
	static BOOL IS_PED_IN_ANY_PLANE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2910F2A2D77BD576, BOOL>(p0); } // 2910F2A2D77BD576 51BBCE7E
	static BOOL IS_PED_IN_FLYING_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7E94D7B1F9207611, BOOL>(p0); } // 7E94D7B1F9207611 CA072485
	static void SET_PED_DIES_IN_WATER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x89A2F145B2FE98D8, uint32_t>(p0, p1); } // 89A2F145B2FE98D8 604C872B
	static void SET_PED_DIES_IN_SINKING_VEHICLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDB5B109FE6F6023F, uint32_t>(p0, p1); } // DB5B109FE6F6023F 8D4D9ABB
	static uint32_t GET_PED_ARMOUR(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCB5E3AD3FD81074F, uint32_t>(p0); } // CB5E3AD3FD81074F 2CE311A7
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xBF75756655C78CFC, uint32_t>(p0, p1); } // BF75756655C78CFC B014A09C
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3F43830115F993C, uint32_t>(p0, p1); } // 3F43830115F993C 5DB7B3A9
	static BOOL GET_PED_LAST_DAMAGE_BONE(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x418F1542AE84B559, BOOL>(p0, p1); } // 418F1542AE84B559 AB933841
	static void CLEAR_PED_LAST_DAMAGE_BONE(uint32_t p0) { rage::NativeInvoke::Invoke<0x32C990BD881FEBFC, uint32_t>(p0); } // 32C990BD881FEBFC 56CB715E
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float p0) { rage::NativeInvoke::Invoke<0xA5359580664CF637, uint32_t>(p0); } // A5359580664CF637 516E30EE
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { rage::NativeInvoke::Invoke<0xE4DAE8FDD9A42830, uint32_t>(); } // E4DAE8FDD9A42830 6E965420
	static void _0xD74763A1167B762F(float p0) { rage::NativeInvoke::Invoke<0xD74763A1167B762F, uint32_t>(p0); } // D74763A1167B762F 0F9A401F
	static void _0xD8634F868A3488A3() { rage::NativeInvoke::Invoke<0xD8634F868A3488A3, uint32_t>(); } // D8634F868A3488A3 97886238
	static void _0xCA66ED82FCBC2235(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCA66ED82FCBC2235, uint32_t>(p0, p1); } // CA66ED82FCBC2235 CC9D7F1A
	static void SET_PED_CAN_BE_TARGETTED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6A750A31D18DA81A, uint32_t>(p0, p1); } // 6A750A31D18DA81A 75C49F74
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x5EE189347C442304, uint32_t>(p0, p1, p2); } // 5EE189347C442304 B103A8E1
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xF9F87CD8FFA68EB5, uint32_t>(p0, p1, p2); } // F9F87CD8FFA68EB5 D050F490
	static void _0x03718A4AEDC5A9465(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x03718A4AEDC5A9465, uint32_t>(p0, p1); } // 03718A4AEDC5A9465 7DA12905
	static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x747D7F0B1E7077E2, uint32_t>(p0, p1); } // 747D7F0B1E7077E2 7F67671D
	static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x098DA9B25A89BC9B9, BOOL>(p0); } // 098DA9B25A89BC9B9 84FA790D
	static void _0x6C511493C5ADBC5C(uint32_t p0) { rage::NativeInvoke::Invoke<0x6C511493C5ADBC5C, uint32_t>(p0); } // 6C511493C5ADBC5C A819680B
	static BOOL _0xB42AA529845BA2A3(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB42AA529845BA2A3, BOOL>(p0); } // B42AA529845BA2A3 CD71F11B
	static BOOL IS_PED_FALLING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC9A89245EC1B2DDF, BOOL>(p0); } // C9A89245EC1B2DDF ABF77334
	static BOOL IS_PED_JUMPING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA38092DB0A690D89, BOOL>(p0); } // A38092DB0A690D89 07E5BC0E
	static BOOL IS_PED_CLIMBING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8BD202CCF931002E, BOOL>(p0); } // 8BD202CCF931002E BCE03D35
	static BOOL _0x6B17AF16D70870DB(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6B17AF16D70870DB, BOOL>(p0); } // 6B17AF16D70870DB C3169BDA
	static BOOL IS_PED_DIVING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFAE339472E7A5B7E, BOOL>(p0); } // FAE339472E7A5B7E 7BC5BF3C
	static BOOL _0x5A0E95A7625C9784(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5A0E95A7625C9784, BOOL>(p0); } // 5A0E95A7625C9784 B19215F6
	static uint32_t GET_PED_PARACHUTE_STATE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5D1F13DB150DEEBE, uint32_t>(p0); } // 5D1F13DB150DEEBE 7D4BC475
	static uint32_t _0x62C221B7C9EF0028(uint32_t p0) { return rage::NativeInvoke::Invoke<0x62C221B7C9EF0028, uint32_t>(p0); } // 62C221B7C9EF0028 01F3B035
	static void SET_PED_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x51C50BBA2E17BCD3, uint32_t>(p0, p1); } // 51C50BBA2E17BCD3 5AEFEC3A
	static void GET_PED_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xB97F64AC4BDAE546, uint32_t>(p0, p1); } // B97F64AC4BDAE546 E9E7FAC5
	static void _0xBF4E3DD8A4D67CE0(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xBF4E3DD8A4D67CE0, uint32_t>(p0, p1); } // BF4E3DD8A4D67CE0 177EFC79
	static void SET_PED_DUCKING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0C23E5B0130192B40, uint32_t>(p0, p1); } // 0C23E5B0130192B40 B90353D7
	static BOOL IS_PED_DUCKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB0680605FE40CDC9, BOOL>(p0); } // B0680605FE40CDC9 9199C77D
	static BOOL IS_PED_IN_ANY_TAXI(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7AA4BD1E05DEDC0E, BOOL>(p0); } // 7AA4BD1E05DEDC0E 16FD386C
	static void SET_PED_ID_RANGE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x6ED0D84DD08E49FE, uint32_t>(p0, p1); } // 6ED0D84DD08E49FE EF3B4ED9
	static void _0x7662811443D31A6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7662811443D31A6, uint32_t>(p0, p1); } // 7662811443D31A6 9A2180FF
	static void _0x991C39C1927E1A8C(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x991C39C1927E1A8C, uint32_t>(p0, p1); } // 991C39C1927E1A8C F30658D2
	static void _0x8FA024C3B9F2D060(uint32_t p0) { rage::NativeInvoke::Invoke<0x8FA024C3B9F2D060, uint32_t>(p0); } // 8FA024C3B9F2D060 43709044
	static void SET_PED_SEEING_RANGE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x2F82BB8951419B6D, uint32_t>(p0, p1); } // 2F82BB8951419B6D 4BD72FE8
	static void SET_PED_HEARING_RANGE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x9A9059D04284280B, uint32_t>(p0, p1); } // 9A9059D04284280B B32087E0
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xA207807C07A63952, uint32_t>(p0, p1); } // A207807C07A63952 72E2E18B
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xF90C94CA25D31B90, uint32_t>(p0, p1); } // F90C94CA25D31B90 0CEA0F9A
	static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xC22938E564A0E072, uint32_t>(p0, p1); } // C22938E564A0E072 5CC2F1B8
	static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x6A42B1A366334C04, uint32_t>(p0, p1); } // 6A42B1A366334C04 39D9102F
	static void _0x5C8F1CDF678A827B(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x5C8F1CDF678A827B, uint32_t>(p0, p1); } // 5C8F1CDF678A827B FDF2F7C2
	static void _0xBCC4F1BC92CC5FEB(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xBCC4F1BC92CC5FEB, uint32_t>(p0, p1); } // BCC4F1BC92CC5FEB E57202A1
	static void SET_PED_STEALTH_MOVEMENT(uint32_t p0, BOOL p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xD14BE9B74CD80551, uint32_t>(p0, p1, p2); } // D14BE9B74CD80551 67E28E1D
	static BOOL GET_PED_STEALTH_MOVEMENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3153580B6C021741, BOOL>(p0); } // 3153580B6C021741 40321B83
	static uint32_t CREATE_GROUP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE0DEFE37EDBF40E4, uint32_t>(p0); } // E0DEFE37EDBF40E4 8DC0368D
	static void SET_PED_AS_GROUP_LEADER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF8B7633482A778B3, uint32_t>(p0, p1); } // F8B7633482A778B3 7265BEA2
	static void SET_PED_AS_GROUP_MEMBER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x2D5B9F52D7E174CF, uint32_t>(p0, p1); } // 2D5B9F52D7E174CF 0EE13F92
	static void _0x3AEFF894289473D3(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x3AEFF894289473D3, uint32_t>(p0, p1, p2); } // 3AEFF894289473D3 D0D8BDBC
	static void REMOVE_GROUP(uint32_t p0) { rage::NativeInvoke::Invoke<0x62D7E49BFC44B2E9, uint32_t>(p0); } // 62D7E49BFC44B2E9 48D72B88
	static void REMOVE_PED_FROM_GROUP(uint32_t p0) { rage::NativeInvoke::Invoke<0xA2A854DDCAB3A06F, uint32_t>(p0); } // A2A854DDCAB3A06F 82697713
	static BOOL IS_PED_GROUP_MEMBER(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF9BC20445D57B42A, BOOL>(p0, p1); } // F9BC20445D57B42A 876D5363
	static BOOL _0x68B3DFCF1710D279(uint32_t p0) { return rage::NativeInvoke::Invoke<0x68B3DFCF1710D279, BOOL>(p0); } // 68B3DFCF1710D279 9678D4FF
	static void SET_GROUP_SEPARATION_RANGE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xA0A946BC184823C5, uint32_t>(p0, p1); } // A0A946BC184823C5 7B820CD5
	static void _0x1A6A526FF70B018(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1A6A526FF70B018, uint32_t>(p0, p1); } // 1A6A526FF70B018 2F0D0973
	static BOOL IS_PED_PRONE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9DB847DFDEB5A491, BOOL>(p0); } // 9DB847DFDEB5A491 02C2A6C3
	static BOOL IS_PED_IN_COMBAT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC20B334EFA64243F, BOOL>(p0, p1); } // C20B334EFA64243F FE027CB5
	static BOOL _0xDA309AC09070BCF2(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xDA309AC09070BCF2, BOOL>(p0, p1); } // DA309AC09070BCF2 CCD525E1
	static BOOL IS_PED_DOING_DRIVEBY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAF28F7E1259EB5F2, BOOL>(p0); } // AF28F7E1259EB5F2 AC3CEB9C
	static BOOL IS_PED_JACKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x865FD939154C0034, BOOL>(p0); } // 865FD939154C0034 3B321816
	static BOOL IS_PED_BEING_JACKED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x88253E28293B8BFD, BOOL>(p0); } // 88253E28293B8BFD D45D605C
	static BOOL IS_PED_BEING_STUNNED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xED64F67EF8D1EFB, BOOL>(p0, p1); } // ED64F67EF8D1EFB 0A66CE30
	static uint32_t GET_PEDS_JACKER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1F2BCCC99110BB36, uint32_t>(p0); } // 1F2BCCC99110BB36 DE1DBB59
	static uint32_t GET_JACK_TARGET(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3BCC2A91D1770E2F, uint32_t>(p0); } // 3BCC2A91D1770E2F 1D196361
	static BOOL IS_PED_FLEEING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1BA961C8CF14F399, BOOL>(p0); } // 1BA961C8CF14F399 85D813C6
	static BOOL IS_PED_IN_COVER(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x537F3CB4EFB8C4C1, BOOL>(p0, p1); } // 537F3CB4EFB8C4C1 972C5A8B
	static BOOL IS_PED_IN_COVER_FACING_LEFT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA352B6224D654D74, BOOL>(p0); } // A352B6224D654D74 B89DBB80
	static BOOL IS_PED_GOING_INTO_COVER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x356D40C350B9D4CE, BOOL>(p0); } // 356D40C350B9D4CE A3589628
	static uint32_t SET_PED_PINNED_DOWN(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x2A21EE33783D249, uint32_t>(p0, p1, p2); } // 2A21EE33783D249 CC78999D
	static uint32_t _0x979447E72A29474F(uint32_t p0) { return rage::NativeInvoke::Invoke<0x979447E72A29474F, uint32_t>(p0); } // 979447E72A29474F ACF162E0
	static uint32_t _0xEBAC754E1AF19AFD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEBAC754E1AF19AFD, uint32_t>(p0); } // EBAC754E1AF19AFD 99968B37
	static uint32_t _0x5F3196CF91FEF27(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5F3196CF91FEF27, uint32_t>(p0); } // 5F3196CF91FEF27 84ADF9EB
	static uint32_t GET_PED_CAUSE_OF_DEATH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9C6ED73266D56543, uint32_t>(p0); } // 9C6ED73266D56543 63458C27
	static uint32_t _0xFFFB31E0814861D0(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFFFB31E0814861D0, uint32_t>(p0); } // FFFB31E0814861D0 EF0B78E6
	static uint32_t _0x6BE6E510FDBF0BBD(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x6BE6E510FDBF0BBD, uint32_t>(p0, p1, p2, p3, p4); } // 6BE6E510FDBF0BBD FB18CB19
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xABF0523672571D46, uint32_t>(p0, p1); } // ABF0523672571D46 423B7BA2
	static void SET_PED_RELATIONSHIP_GROUP_HASH(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE440546F94B26235, uint32_t>(p0, p1); } // E440546F94B26235 79F8C18C
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xCA4EA7D4F6DCCD43, uint32_t>(p0, p1, p2); } // CA4EA7D4F6DCCD43 D4A215BA
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xF4ED2C758D61D1F5, uint32_t>(p0, p1, p2); } // F4ED2C758D61D1F5 994B8C2D
	static uint32_t ADD_RELATIONSHIP_GROUP(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x46B6351EE89452C8, uint32_t>(p0, p1); } // 46B6351EE89452C8 8B635546
	static void REMOVE_RELATIONSHIP_GROUP(uint32_t p0) { rage::NativeInvoke::Invoke<0xAF3EF4477F7346AE, uint32_t>(p0); } // AF3EF4477F7346AE 4A1DC59A
	static uint32_t GET_RELATIONSHIP_BETWEEN_PEDS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC4F49DBA1D250447, uint32_t>(p0, p1); } // C4F49DBA1D250447 E254C39C
	static uint32_t GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3EAAADB3B74271DB, uint32_t>(p0); } // 3EAAADB3B74271DB 714BD6E4
	static uint32_t GET_PED_RELATIONSHIP_GROUP_HASH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2F429CA4FEA3DA65, uint32_t>(p0); } // 2F429CA4FEA3DA65 354F283C
	static uint32_t GET_RELATIONSHIP_BETWEEN_GROUPS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA29A28F9314D99CA, uint32_t>(p0, p1); } // A29A28F9314D99CA 4E372FE2
	static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8109C69A79FE2EE0, uint32_t>(p0, p1); } // 8109C69A79FE2EE0 7FDDC0A6
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(uint32_t p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x491EB5C6E2E1F2DC, uint32_t>(p0, p1, p2); } // 491EB5C6E2E1F2DC D78AC46C
	static BOOL IS_PED_RESPONDING_TO_EVENT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xB7D382FB7B7589C5, BOOL>(p0, p1); } // B7D382FB7B7589C5 7A877554
	static void SET_PED_FIRING_PATTERN(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x17851927364BD706, uint32_t>(p0, p1); } // 17851927364BD706 B4629D66
	static void SET_PED_SHOOT_RATE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x82BD6614CF6D5ED4, uint32_t>(p0, p1); } // 82BD6614CF6D5ED4 FB301746
	static void SET_COMBAT_FLOAT(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0x6C5E5193D2E6CED0, uint32_t>(p0, p1, p2); } // 6C5E5193D2E6CED0 D8B7637C
	static float GET_COMBAT_FLOAT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x4A2AA443A38BFF10, float>(p0, p1); } // 4A2AA443A38BFF10 511D7EF8
	static void GET_GROUP_SIZE(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xB589946D42277470, uint32_t>(p0, p1, p2); } // B589946D42277470 F7E1A691
	static BOOL DOES_GROUP_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFC3D53CDA17426F4, BOOL>(p0); } // FC3D53CDA17426F4 935C978D
	static uint32_t GET_PED_GROUP_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA33F72168DA2B359, uint32_t>(p0); } // A33F72168DA2B359 134E0785
	static BOOL IS_PED_IN_GROUP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBE55B130951EF5CA, BOOL>(p0); } // BE55B130951EF5CA 836D9795
	static uint32_t _0x9CBE137E6D6C3E15(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9CBE137E6D6C3E15, uint32_t>(p0); } // 9CBE137E6D6C3E15 DE7442EE
	static void SET_GROUP_FORMATION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x826D4A244DB3C8C7, uint32_t>(p0, p1); } // 826D4A244DB3C8C7 08FAC739
	static void SET_GROUP_FORMATION_SPACING(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x25542001613BAB1D, uint32_t>(p0, p1, p2, p3); } // 25542001613BAB1D B1E086FF
	static void _0xDFD03783C44906DA(uint32_t p0) { rage::NativeInvoke::Invoke<0xDFD03783C44906DA, uint32_t>(p0); } // DFD03783C44906DA 267FCEAD
	static uint32_t GET_VEHICLE_PED_IS_USING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x527D4CB4E8181391, uint32_t>(p0); } // 527D4CB4E8181391 6DE3AADA
	static uint32_t SET_EXCLUSIVE_PHONE_RELATIONSHIPS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x96FD444E235E7EFB, uint32_t>(p0); } // 96FD444E235E7EFB 56E0C163
	static void SET_PED_GRAVITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2D79AC19922F7D7, uint32_t>(p0, p1); } // 2D79AC19922F7D7 3CA16652
	static void APPLY_DAMAGE_TO_PED(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x638CD54DC5CC8A3F, uint32_t>(p0, p1, p2); } // 638CD54DC5CC8A3F 4DC27FCF
	static void SET_PED_ALLOWED_TO_DUCK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA7818F64CC2D1B4E, uint32_t>(p0, p1); } // A7818F64CC2D1B4E C4D122F8
	static void SET_PED_NEVER_LEAVES_GROUP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8A7FF20217891392, uint32_t>(p0, p1); } // 8A7FF20217891392 0E038813
	static uint32_t GET_PED_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF715A8C79E9233AC, uint32_t>(p0); } // F715A8C79E9233AC B1460D43
	static void SET_PED_AS_COP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3D070287E585BD99, uint32_t>(p0, p1); } // 3D070287E585BD99 84E7DE9F
	static void SET_PED_MAX_HEALTH(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xA1053F9C0358C868, uint32_t>(p0, p1); } // A1053F9C0358C868 5533F60B
	static uint32_t GET_PED_MAX_HEALTH(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD7873D6F1741A9A4, uint32_t>(p0); } // D7873D6F1741A9A4 A45B6C8D
	static void SET_PED_MAX_TIME_IN_WATER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x96D846762E3EC719, uint32_t>(p0, p1); } // 96D846762E3EC719 FE0A106B
	static void SET_PED_MAX_TIME_UNDERWATER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x1CECA14829814CF3, uint32_t>(p0, p1); } // 1CECA14829814CF3 082EF240
	static void _0x24996A0E1678C9EB(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x24996A0E1678C9EB, uint32_t>(p0, p1); } // 24996A0E1678C9EB 373CC405
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xAEC837DFD456FB5E, uint32_t>(p0, p1); } // AEC837DFD456FB5E 8A251612
	static BOOL _0xA2AF2B561D47A72F(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA2AF2B561D47A72F, BOOL>(p0); } // A2AF2B561D47A72F C9D098B3
	static void KNOCK_PED_OFF_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0x3E581FB687769461, uint32_t>(p0); } // 3E581FB687769461 ACDD0674
	static void SET_PED_COORDS_NO_GANG(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xB297794EA6CCEB2B, uint32_t>(p0, p1, p2, p3); } // B297794EA6CCEB2B 9561AD98
	static uint32_t GET_PED_AS_GROUP_MEMBER(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x6B3743907740C84A, uint32_t>(p0, p1); } // 6B3743907740C84A 9AA3CC8C
	static void SET_PED_KEEP_TASK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA1E4BA3B17C6D931, uint32_t>(p0, p1); } // A1E4BA3B17C6D931 A7EC79CE
	static void _0xD9ED5246EF17B30F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD9ED5246EF17B30F, uint32_t>(p0, p1); } // D9ED5246EF17B30F 397F06E3
	static BOOL IS_PED_SWIMMING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x43C1CCFF3C61F7D7, BOOL>(p0); } // 43C1CCFF3C61F7D7 7AB43DB8
	static BOOL IS_PED_SWIMMING_UNDER_WATER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x830367A25D848DC7, BOOL>(p0); } // 830367A25D848DC7 0E8D524F
	static void SET_PED_COORDS_KEEP_VEHICLE(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x70C5B39D4C577287, uint32_t>(p0, p1, p2, p3); } // 70C5B39D4C577287 D66AE1D3
	static void SET_PED_DIES_IN_VEHICLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE5B547F352F698E, uint32_t>(p0, p1); } // E5B547F352F698E 6FE1E440
	static void SET_CREATE_RANDOM_COPS(BOOL p0) { rage::NativeInvoke::Invoke<0xF83CD415BF55C455, uint32_t>(p0); } // F83CD415BF55C455 23441648
	static void _0xC646B6DB90A65BB7(BOOL p0) { rage::NativeInvoke::Invoke<0xC646B6DB90A65BB7, uint32_t>(p0); } // C646B6DB90A65BB7 82E548CC
	static void _0x93F161A8EC8AF6B9(BOOL p0) { rage::NativeInvoke::Invoke<0x93F161A8EC8AF6B9, uint32_t>(p0); } // 93F161A8EC8AF6B9 EDC31475
	static BOOL CAN_CREATE_RANDOM_COPS() { return rage::NativeInvoke::Invoke<0xBB524B1990FB9D50, BOOL>(); } // BB524B1990FB9D50 AA73DAD9
	static void SET_PED_AS_ENEMY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x015DE8332B7C67C99, uint32_t>(p0, p1); } // 015DE8332B7C67C99 AE620A1B
	static void SET_PED_CAN_SMASH_GLASS(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xEE0C58B9B0B4B427, uint32_t>(p0, p1, p2); } // EE0C58B9B0B4B427 149C60A8
	static BOOL IS_PED_IN_ANY_TRAIN(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA94EC3763C55FF12, BOOL>(p0); } // A94EC3763C55FF12 759EF63A
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xADFF42956B1E6E0F, BOOL>(p0); } // ADFF42956B1E6E0F 90E805AC
	static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xED261CE09A6522AE, BOOL>(p0); } // ED261CE09A6522AE 46828B4E
	static void SET_ENABLE_HANDCUFFS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5E3892A28C879327, uint32_t>(p0, p1); } // 5E3892A28C879327 AC9BBA23
	static void SET_ENABLE_BOUND_ANKLES(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x898359B91EB2E0B1, uint32_t>(p0, p1); } // 898359B91EB2E0B1 9208D689
	static void _0x5756B50A1D1D2FCE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5756B50A1D1D2FCE, uint32_t>(p0, p1); } // 5756B50A1D1D2FCE 7BF61471
	static void SET_CAN_ATTACK_FRIENDLY(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x59F63E7B08DC975C, uint32_t>(p0, p1, p2); } // 59F63E7B08DC975C 47C60963
	static uint32_t GET_PED_ALERTNESS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD06ED9C602D58624, uint32_t>(p0); } // D06ED9C602D58624 F83E4DAF
	static void SET_PED_ALERTNESS(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE4A53248B57092F2, uint32_t>(p0, p1); } // E4A53248B57092F2 2C32D9AE
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEC19F55466DE878B, uint32_t>(p0, p1); } // EC19F55466DE878B 89AD49FF
	static void SET_PED_MOVEMENT_CLIPSET(uint32_t p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0xC3171961272B0BF2, uint32_t>(p0, p1, p2); } // C3171961272B0BF2 A817CDEB
	static void RESET_PED_MOVEMENT_CLIPSET(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x708A5EFEB2660CE4, uint32_t>(p0, p1); } // 708A5EFEB2660CE4 B83CEE93
	static void SET_PED_STRAFE_CLIPSET(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x4C174E6F2323E7DC, uint32_t>(p0, p1); } // 4C174E6F2323E7DC 0BACF010
	static void RESET_PED_STRAFE_CLIPSET(uint32_t p0) { rage::NativeInvoke::Invoke<0x514C7D46216AA8DE, uint32_t>(p0); } // 514C7D46216AA8DE F1967A12
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xEF6A678C672AD689, uint32_t>(p0, p1); } // EF6A678C672AD689 F8BE54DC
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(uint32_t p0) { rage::NativeInvoke::Invoke<0x4F7B10CA147AAAA, uint32_t>(p0); } // 4F7B10CA147AAAA C60C9ACD
	static void _0xF295BB2B8DBCE3B8(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xF295BB2B8DBCE3B8, uint32_t>(p0, p1); } // F295BB2B8DBCE3B8 D4C73595
	static void _0x422380C60199A383(uint32_t p0) { rage::NativeInvoke::Invoke<0x422380C60199A383, uint32_t>(p0); } // 422380C60199A383 AEC9163B
	static void SET_PED_IN_VEHICLE_CONTEXT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCEB04649203784E4, uint32_t>(p0, p1); } // CEB04649203784E4 27F25C0E
	static void RESET_PED_IN_VEHICLE_CONTEXT(uint32_t p0) { rage::NativeInvoke::Invoke<0xBFFF161AF85017B0, uint32_t>(p0); } // BFFF161AF85017B0 3C94D88A
	static BOOL _0x5AE455312D8AA1F0(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x5AE455312D8AA1F0, BOOL>(p0, p1, p2); } // 5AE455312D8AA1F0 3C30B447
	static void _0xEC0F336E703AD93E(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, BOOL p4) { rage::NativeInvoke::Invoke<0xEC0F336E703AD93E, uint32_t>(p0, p1, p2, p3, p4); } // EC0F336E703AD93E 895E1D67
	static void _0xB1DBE330E63E93FE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB1DBE330E63E93FE, uint32_t>(p0, p1); } // B1DBE330E63E93FE 5736FB23
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, BOOL p5) { rage::NativeInvoke::Invoke<0x750F44AB2EED1F0B, uint32_t>(p0, p1, p2, p3, p4, p5); } // 750F44AB2EED1F0B BA84FD8C
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0x12F4EB7593FFEE2C, uint32_t>(p0, p1, p2); } // 12F4EB7593FFEE2C 7A7F5BC3
	static void SET_PED_GESTURE_GROUP(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xD25D9D023066E5D7, uint32_t>(p0, p1); } // D25D9D023066E5D7 170DA109
	static Vector3 _0xE07FE144B472B7C8(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0xE07FE144B472B7C8, Vector3>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // E07FE144B472B7C8 C59D4268
	static Vector3 _0x99E69251597182A2(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x99E69251597182A2, Vector3>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 99E69251597182A2 5F7789E6
	static uint32_t GET_PED_DRAWABLE_VARIATION(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xFEAB4D7F75916F7C, uint32_t>(p0, p1); } // FEAB4D7F75916F7C 29850FE2
	static uint32_t GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x8EE8B9C6684645F9, uint32_t>(p0, p1); } // 8EE8B9C6684645F9 9754C27D
	static uint32_t GET_PED_TEXTURE_VARIATION(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0B1803498CF77A15A, uint32_t>(p0, p1); } // 0B1803498CF77A15A C0A8590A
	static uint32_t GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xEECA1EB6A4643BEA, uint32_t>(p0, p1, p2); } // EECA1EB6A4643BEA 83D9FBE7
	static uint32_t _0x71A0AEF383D7C7D9(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x71A0AEF383D7C7D9, uint32_t>(p0, p1); } // 71A0AEF383D7C7D9 C9780B95
	static uint32_t REMOVE_NIGHTVISION_MELEE(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xFB807AF25D055BAB, uint32_t>(p0, p1, p2); } // FB807AF25D055BAB 4892B882
	static BOOL GET_PED_PALETTE_VARIATION(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x1B556A31096DEA5F, BOOL>(p0, p1); } // 1B556A31096DEA5F EF1BC082
	static BOOL IS_PED_COMPONENT_VARIATION_VALID(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x7B4DA46DAF545101, BOOL>(p0, p1, p2, p3); } // 7B4DA46DAF545101 952ABD9A
	static void SET_PED_COMPONENT_VARIATION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xF2685765B7BEBCB0, uint32_t>(p0, p1, p2, p3, p4); } // F2685765B7BEBCB0 D4F7B05C
	static void SET_PED_RANDOM_COMPONENT_VARIATION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x146FCBEC0D4289BF, uint32_t>(p0, p1); } // 146FCBEC0D4289BF 4111BA46
	static void SET_PED_RANDOM_PROPS(uint32_t p0) { rage::NativeInvoke::Invoke<0x4340FFD30238C1BC, uint32_t>(p0); } // 4340FFD30238C1BC E3318E0E
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(uint32_t p0) { rage::NativeInvoke::Invoke<0x4376624421FB329B, uint32_t>(p0); } // 4376624421FB329B C866A984
	static void SET_PED_BLEND_FROM_PARENTS(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4) { rage::NativeInvoke::Invoke<0xE6F28E4D8529DACB, uint32_t>(p0, p1, p2, p3, p4); } // E6F28E4D8529DACB 837BD370
	static void SET_PED_HEAD_BLEND_DATA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, float p7, float p8, float p9, BOOL p10) { rage::NativeInvoke::Invoke<0x9C6AEA1AA18BD606, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 9C6AEA1AA18BD606 60746B88
	static BOOL _0xB8AE06BD6400116C(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xB8AE06BD6400116C, BOOL>(p0, p1); } // B8AE06BD6400116C
	static void UPDATE_PED_HEAD_BLEND_DATA(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x6FA9550BF8D838E6, uint32_t>(p0, p1, p2, p3); } // 6FA9550BF8D838E6 5CB76219
	static void _0xA1AB7CB505B590EC(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xA1AB7CB505B590EC, uint32_t>(p0, p1); } // A1AB7CB505B590EC
	static void SET_PED_HEAD_OVERLAY(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { rage::NativeInvoke::Invoke<0xF116D5E316BE86C3, uint32_t>(p0, p1, p2, p3); } // F116D5E316BE86C3 D28DBA90
	static uint32_t _0x93C3A94D37AB02D6(uint32_t p0) { return rage::NativeInvoke::Invoke<0x93C3A94D37AB02D6, uint32_t>(p0); } // 93C3A94D37AB02D6 FF43C18D
	static void _0xAB7D136BEF6BAB51(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0xAB7D136BEF6BAB51, uint32_t>(p0, p1, p2); } // AB7D136BEF6BAB51
	static BOOL HAS_PED_HEAD_BLEND_FINISHED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC94E1E6AD5DBBAB1, BOOL>(p0); } // C94E1E6AD5DBBAB1 2B1BD9C5
	static void _0x8576187A1C5FF880(uint32_t p0) { rage::NativeInvoke::Invoke<0x8576187A1C5FF880, uint32_t>(p0); } // 8576187A1C5FF880 894314A4
	static void _0x20A6B9C577CF602E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x20A6B9C577CF602E, uint32_t>(p0, p1, p2, p3, p4); } // 20A6B9C577CF602E 57E5B3F9
	static void _0xF4C6533AAC05548C(uint32_t p0) { rage::NativeInvoke::Invoke<0xF4C6533AAC05548C, uint32_t>(p0); } // F4C6533AAC05548C C6F36292
	static uint32_t _0x79003537C113F6C5(uint32_t p0) { return rage::NativeInvoke::Invoke<0x79003537C113F6C5, uint32_t>(p0); } // 79003537C113F6C5 211DEFEC
	static uint32_t _0x2C82D8A3F076307D(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2C82D8A3F076307D, uint32_t>(p0); } // 2C82D8A3F076307D 095D3BD8
	static uint32_t _0x318EE36FAC56D9E3(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x318EE36FAC56D9E3, uint32_t>(p0, p1, p2, p3); } // 318EE36FAC56D9E3 45F3BDFB
	static BOOL _0x1FD88953E125C3A2(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1FD88953E125C3A2, BOOL>(p0); } // 1FD88953E125C3A2 C6517D52
	static void _0x2199312DA9E83EA1(uint32_t p0) { rage::NativeInvoke::Invoke<0x2199312DA9E83EA1, uint32_t>(p0); } // 2199312DA9E83EA1 6435F67F
	static uint32_t _0xC2283888B2F54BE5(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xC2283888B2F54BE5, uint32_t>(p0, p1, p2, p3); } // C2283888B2F54BE5 C0E23671
	static BOOL _0xEA54B1E8D668AEDC(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEA54B1E8D668AEDC, BOOL>(p0); } // EA54B1E8D668AEDC 3B0CA391
	static void _0xE853A2CFFA2E8A27(uint32_t p0) { rage::NativeInvoke::Invoke<0xE853A2CFFA2E8A27, uint32_t>(p0); } // E853A2CFFA2E8A27 FD103BA7
	static uint32_t GET_PED_PROP_INDEX(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x7974CEFA1BFEA57F, uint32_t>(p0, p1); } // 7974CEFA1BFEA57F 746DDAC0
	static void SET_PED_PROP_INDEX(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, BOOL p4) { rage::NativeInvoke::Invoke<0x6543DA07CCCC7F5, uint32_t>(p0, p1, p2, p3, p4); } // 6543DA07CCCC7F5 0829F2E2
	static void KNOCK_OFF_PED_PROP(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0x16635CEA3A5C8EBA, uint32_t>(p0, p1, p2, p3, p4); } // 16635CEA3A5C8EBA 08D8B180
	static void CLEAR_PED_PROP(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x0CBC81ECD741ECE5E, uint32_t>(p0, p1); } // 0CBC81ECD741ECE5E 2D23D743
	static void CLEAR_ALL_PED_PROPS(uint32_t p0) { rage::NativeInvoke::Invoke<0x22D39A6F835A63ED, uint32_t>(p0); } // 22D39A6F835A63ED 81DF8B43
	static uint32_t GET_PED_PROP_TEXTURE_INDEX(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC822E015E8309254, uint32_t>(p0, p1); } // C822E015E8309254 922A6653
	static void _0xF05E2F0816C02541(uint32_t p0) { rage::NativeInvoke::Invoke<0xF05E2F0816C02541, uint32_t>(p0); } // F05E2F0816C02541 7BCD8991
	static void _0x99A73C300AA2BB17(uint32_t p0) { rage::NativeInvoke::Invoke<0x99A73C300AA2BB17, uint32_t>(p0); } // 99A73C300AA2BB17 080275EE
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2DC5B31EBB810396, uint32_t>(p0, p1); } // 2DC5B31EBB810396 DFE34E4A
	static void SET_PED_BOUNDS_ORIENTATION(uint32_t p0, float p1, float p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x81F83277441417FB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 81F83277441417FB CFA20D68
	static void REGISTER_TARGET(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3019783289DEF027, uint32_t>(p0, p1); } // 3019783289DEF027 50A95442
	static void REGISTER_HATED_TARGETS_AROUND_PED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x943597F159F91C4E, uint32_t>(p0, p1); } // 943597F159F91C4E 7F87559E
	static uint32_t GET_RANDOM_PED_AT_COORD(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x53BACC5C821169E0, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 53BACC5C821169E0 DC8239EB
	static BOOL GET_CLOSEST_PED(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, uint32_t *p6, BOOL p7, BOOL p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0xB676D277AA38546, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // B676D277AA38546 8F6C1F55
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL p0) { rage::NativeInvoke::Invoke<0x4BE787B11E265718, uint32_t>(p0); } // 4BE787B11E265718 85615FD0
	static BOOL _0x0F4086D9455FFF58C(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x0F4086D9455FFF58C, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0F4086D9455FFF58C 18DD76A1
	static void _0x2C8D1FC52AC8C668(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x2C8D1FC52AC8C668, uint32_t>(p0, p1); } // 2C8D1FC52AC8C668 6D55B3B3
	static void SET_DRIVER_ABILITY(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x96814E698DED4FE7, uint32_t>(p0, p1); } // 96814E698DED4FE7 AAD4012C
	static void SET_DRIVER_AGGRESSIVENESS(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xDF3F6BC07D4EFDC1, uint32_t>(p0, p1); } // DF3F6BC07D4EFDC1 8B02A8FB
	static BOOL CAN_PED_RAGDOLL(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF5C3CA840B03C074, BOOL>(p0); } // F5C3CA840B03C074 C0EFB7A3
	static BOOL SET_PED_TO_RAGDOLL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, BOOL p4, BOOL p5, BOOL p6) { return rage::NativeInvoke::Invoke<0xFFA7CDD296D07129, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // FFA7CDD296D07129 83CB5052
	static uint32_t SET_PED_TO_RAGDOLL_WITH_FALL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { return rage::NativeInvoke::Invoke<0x44884A42AD0F9AA3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 44884A42AD0F9AA3 FA12E286
	static void SET_PED_RAGDOLL_ON_COLLISION(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC891085FCF0774F0, uint32_t>(p0, p1); } // C891085FCF0774F0 2654A0F4
	static BOOL IS_PED_RAGDOLL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1983DA3C921BB046, BOOL>(p0); } // 1983DA3C921BB046 C833BBE1
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF9241A6D74AF80C7, BOOL>(p0); } // F9241A6D74AF80C7 44A153F2
	static void SET_PED_RAGDOLL_FORCE_FALL(uint32_t p0) { rage::NativeInvoke::Invoke<0x05073B77532ACF316, uint32_t>(p0); } // 05073B77532ACF316 20A5BDE0
	static void RESET_PED_RAGDOLL_TIMER(uint32_t p0) { rage::NativeInvoke::Invoke<0x99B38FD868DCDB8F, uint32_t>(p0); } // 99B38FD868DCDB8F F2865370
	static void SET_PED_CAN_RAGDOLL(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6A8A5F1A990BB700, uint32_t>(p0, p1); } // 6A8A5F1A990BB700 CF1384C4
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCAE88F3FE0FF5690, BOOL>(p0); } // CAE88F3FE0FF5690 FB2AFED1
	static BOOL _0x4ECA212B0D29A486(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4ECA212B0D29A486, BOOL>(p0); } // 4ECA212B0D29A486 97353375
	static void _0xB3AFD1CE4D234677(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB3AFD1CE4D234677, uint32_t>(p0, p1); } // B3AFD1CE4D234677 9C8F830D
	static void _0xB5387C65C820C260(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB5387C65C820C260, uint32_t>(p0, p1); } // B5387C65C820C260 77CBA290
	static void SET_PED_ANGLED_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { rage::NativeInvoke::Invoke<0x857B2B6B54BD2AC3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 857B2B6B54BD2AC3 3EFBDD9B
	static void SET_PED_SPHERE_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4, BOOL p5, BOOL p6) { rage::NativeInvoke::Invoke<0x8A18D33204B561D, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 8A18D33204B561D BD96D8E8
	static void _0x416C9B1337D7A700(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, BOOL p6) { rage::NativeInvoke::Invoke<0x416C9B1337D7A700, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 416C9B1337D7A700 40638BDC
	static void _0xB8EAF2F8AB363E6B(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, BOOL p6) { rage::NativeInvoke::Invoke<0xB8EAF2F8AB363E6B, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // B8EAF2F8AB363E6B 4763B2C6
	static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { rage::NativeInvoke::Invoke<0xA1AAA55EB22BF53B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // A1AAA55EB22BF53B 74BDA7CE
	static void _0xC9BE04F564E51438(uint32_t p0, float p1, float p2, float p3, BOOL p4) { rage::NativeInvoke::Invoke<0xC9BE04F564E51438, uint32_t>(p0, p1, p2, p3, p4); } // C9BE04F564E51438 B66B0C9A
	static void REMOVE_PED_DEFENSIVE_AREA(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC00A761B5BB4E38B, uint32_t>(p0, p1); } // C00A761B5BB4E38B 34AAAFA5
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x4738EB7FC2AEC017, Vector3>(p0, p1); } // 4738EB7FC2AEC017 CB65198D
	static void _0x716E132DDA636AA2(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x716E132DDA636AA2, uint32_t>(p0, p1); } // 716E132DDA636AA2 F3B7EFBF
	static void _0x64AD6D8CC4C8D9F3(uint32_t p0) { rage::NativeInvoke::Invoke<0x64AD6D8CC4C8D9F3, uint32_t>(p0); } // 64AD6D8CC4C8D9F3 A0134498
	static void REVIVE_INJURED_PED(uint32_t p0) { rage::NativeInvoke::Invoke<0xB50E81059EB87236, uint32_t>(p0); } // B50E81059EB87236 14D3E6E3
	static void RESURRECT_PED(uint32_t p0) { rage::NativeInvoke::Invoke<0x636FF869C08C00AC, uint32_t>(p0); } // 636FF869C08C00AC A4B82097
	static void SET_PED_NAME_DEBUG(uint32_t p0, const char* p1) { rage::NativeInvoke::Invoke<0x3F671607BC1804B5, uint32_t>(p0, p1); } // 3F671607BC1804B5 20D6273E
	static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xD29FE5456F5F7171, Vector3>(p0, p1); } // D29FE5456F5F7171 5231F901
	static void SET_PED_DIES_WHEN_INJURED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x78BFEA1E2E65768C, uint32_t>(p0, p1); } // 78BFEA1E2E65768C E94E24D4
	static void SET_PED_ENABLE_WEAPON_BLOCKING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF6784072BE8C52D, uint32_t>(p0, p1); } // F6784072BE8C52D 4CAD1A4A
	static void _0xF1188B0DA70C7D06(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF1188B0DA70C7D06, uint32_t>(p0, p1); } // F1188B0DA70C7D06 141CC936
	static void RESET_PED_VISIBLE_DAMAGE(uint32_t p0) { rage::NativeInvoke::Invoke<0xD28176DC1D779514, uint32_t>(p0); } // D28176DC1D779514 C4BC4841
	static void _0x85E8D195CD442A7F(uint32_t p0, uint32_t p1, float p2, float p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x85E8D195CD442A7F, uint32_t>(p0, p1, p2, p3, p4); } // 85E8D195CD442A7F 1E54DB12
	static void APPLY_PED_BLOOD(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0x41F4A25AABA0D838, uint32_t>(p0, p1, p2, p3, p4, p5); } // 41F4A25AABA0D838 376CE3C0
	static void _0xA356BA354418CD2F(uint32_t p0, uint32_t p1, float p2, float p3, uint32_t *p4) { rage::NativeInvoke::Invoke<0xA356BA354418CD2F, uint32_t>(p0, p1, p2, p3, p4); } // A356BA354418CD2F 8F3F3A9C
	static void _0xC228A449B4DE49C8(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, uint32_t *p8) { rage::NativeInvoke::Invoke<0xC228A449B4DE49C8, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // C228A449B4DE49C8 FC13CE80
	static void APPLY_PED_DAMAGE_DECAL(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, BOOL p8, uint32_t *p9) { rage::NativeInvoke::Invoke<0x2D0DEEF97562324B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 2D0DEEF97562324B 8A13A41F
	static void APPLY_PED_DAMAGE_PACK(uint32_t p0, uint32_t *p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xC98F9602E69A0C17, uint32_t>(p0, p1, p2, p3); } // C98F9602E69A0C17 208D0CB8
	static void CLEAR_PED_BLOOD_DAMAGE(uint32_t p0) { rage::NativeInvoke::Invoke<0x375E13D05B0DF434, uint32_t>(p0); } // 375E13D05B0DF434 F7ADC960
	static void _0x41FBD4190B8E028B(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x41FBD4190B8E028B, uint32_t>(p0, p1); } // 41FBD4190B8E028B F210BE69
	static void _0x3B6BB00383411B50(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x3B6BB00383411B50, uint32_t>(p0, p1, p2); } // 3B6BB00383411B50 0CB6C4ED
	static void _0x6C8995307A95F99A(uint32_t p0, uint32_t p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x6C8995307A95F99A, uint32_t>(p0, p1, p2); } // 6C8995307A95F99A 70AA5B7D
	static uint32_t _0xE628E820C5762D02(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE628E820C5762D02, uint32_t>(p0); } // E628E820C5762D02 47187F7F
	static void _0x51F6354E2C2EFDDA(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x51F6354E2C2EFDDA, uint32_t>(p0, p1); } // 51F6354E2C2EFDDA
	static void CLEAR_PED_WETNESS(uint32_t p0) { rage::NativeInvoke::Invoke<0x309CA1336CB83196, uint32_t>(p0); } // 309CA1336CB83196 629F15BD
	static void SET_PED_WETNESS_HEIGHT(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xEAD5A0AC20C145E7, uint32_t>(p0, p1); } // EAD5A0AC20C145E7 7B33289A
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0xE0072E5087CCF679, uint32_t>(p0); } // E0072E5087CCF679 BDE749F7
	static void _0x13DAAD7AD7366D7D(uint32_t p0) { rage::NativeInvoke::Invoke<0x13DAAD7AD7366D7D, uint32_t>(p0); } // 13DAAD7AD7366D7D A993915F
	static void SET_PED_SWEAT(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xEB142D0007A7329, uint32_t>(p0, p1); } // EB142D0007A7329 76A1DB9F
	static void _0x992DEDFFA9FED32C(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x992DEDFFA9FED32C, uint32_t>(p0, p1, p2); } // 992DEDFFA9FED32C 70559AC7
	static uint32_t _0xC8AC8FE33891F844(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC8AC8FE33891F844, uint32_t>(p0, p1); } // C8AC8FE33891F844 3543019E
	static void CLEAR_PED_DECORATIONS(uint32_t p0) { rage::NativeInvoke::Invoke<0x0485CBA188D4849AB, uint32_t>(p0); } // 0485CBA188D4849AB D4496BF3
	static void _0x96D0175685CDB7DB(uint32_t p0) { rage::NativeInvoke::Invoke<0x96D0175685CDB7DB, uint32_t>(p0); } // 96D0175685CDB7DB EFD58EB9
	static BOOL WAS_PED_SKELETON_UPDATED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7CF9934132FBF3CF, BOOL>(p0); } // 7CF9934132FBF3CF F7E2FBAD
	static Vector3 GET_PED_BONE_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xC5B1818639240D24, Vector3>(p0, p1, p2, p3, p4); } // C5B1818639240D24 4579CAB1
	static void CREATE_NM_MESSAGE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x38021CD2E0B38F76, uint32_t>(p0, p1); } // 38021CD2E0B38F76 1CFBFD4B
	static void GIVE_PED_NM_MESSAGE(uint32_t p0) { rage::NativeInvoke::Invoke<0xD079377CBD056C52, uint32_t>(p0); } // D079377CBD056C52 737C3689
	static uint32_t ADD_SCENARIO_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return rage::NativeInvoke::Invoke<0x92832F671263F8E0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 92832F671263F8E0 A38C0234
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { rage::NativeInvoke::Invoke<0x8473059B7180712A, uint32_t>(); } // 8473059B7180712A 4DDF845F
	static void REMOVE_SCENARIO_BLOCKING_AREA(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x1D6153ECFEB26B2A, uint32_t>(p0, p1); } // 1D6153ECFEB26B2A 4483EF06
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x4F625D364D2B9F19, uint32_t>(p0, p1, p2, p3, p4); } // 4F625D364D2B9F19 80EAD297
	static BOOL IS_PED_USING_SCENARIO(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x9DC0AD9091504FA7, BOOL>(p0, p1); } // 9DC0AD9091504FA7 0F65B0D4
	static BOOL IS_PED_USING_ANY_SCENARIO(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF5FF2C22C19B44, BOOL>(p0); } // F5FF2C22C19B44 195EF5B7
	static uint32_t _0x1833FF6277164617(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x1833FF6277164617, uint32_t>(p0, p1, p2, p3); } // 1833FF6277164617 59DE73AC
	static void _0x7B29EE2823C23A24(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7B29EE2823C23A24, uint32_t>(p0, p1); } // 7B29EE2823C23A24 C08FE5F6
	static uint32_t _0x9B087072254B8A12(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x9B087072254B8A12, uint32_t>(p0, p1, p2, p3); } // 9B087072254B8A12 58C0F6CF
	static uint32_t _0xA2FD8D516B402112(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xA2FD8D516B402112, uint32_t>(p0, p1, p2, p3); } // A2FD8D516B402112 761F8F48
	static void _0xB7058A94644D8E45(uint32_t p0) { rage::NativeInvoke::Invoke<0xB7058A94644D8E45, uint32_t>(p0); } // B7058A94644D8E45 033F43FA
	static void _0xDC06C29AA1C2E756(uint32_t p0) { rage::NativeInvoke::Invoke<0xDC06C29AA1C2E756, uint32_t>(p0); } // DC06C29AA1C2E756 4C684C81
	static uint32_t _0x4F8427034438EDCB(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x4F8427034438EDCB, uint32_t>(p0, p1, p2, p3); } // 4F8427034438EDCB 7B4C3E6F
	static void _0xFBE0E187FFCA2218(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFBE0E187FFCA2218, uint32_t>(p0, p1); } // FBE0E187FFCA2218 5BC276AE
	static void _0xBA249A0F020DF4DA(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xBA249A0F020DF4DA, uint32_t>(p0, p1); } // BA249A0F020DF4DA
	static void _0x14461093EF58EAB0(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x14461093EF58EAB0, uint32_t>(p0, p1); } // 14461093EF58EAB0
	static void PLAY_FACIAL_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x87B85D8B36733983, uint32_t>(p0, p1, p2); } // 87B85D8B36733983 1F6CCDDE
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xB999892D829E5A79, uint32_t>(p0, p1, p2); } // B999892D829E5A79 9BA19C13
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uint32_t p0) { rage::NativeInvoke::Invoke<0xF0092A6A58666782, uint32_t>(p0); } // F0092A6A58666782 5244F4E2
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEEB517332A13895, uint32_t>(p0, p1); } // EEB517332A13895 E131E3B3
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x9D338B9203A5F6E7, uint32_t>(p0, p1, p2); } // 9D338B9203A5F6E7 A2FDAF27
	static void _0x24CA2BC9CE38CF9F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x24CA2BC9CE38CF9F, uint32_t>(p0, p1); } // 24CA2BC9CE38CF9F ADB2511A
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC9CD9F3D2675F791, uint32_t>(p0, p1); } // C9CD9F3D2675F791 F8053081
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0B38B1727AB0E27B6, uint32_t>(p0, p1); } // 0B38B1727AB0E27B6 5720A5DD
	static void _0x1763E1AC972E12DC(uint32_t p0) { rage::NativeInvoke::Invoke<0x1763E1AC972E12DC, uint32_t>(p0); } // 1763E1AC972E12DC B7CD0A49
	static void _0xE420E85FDA3D78E0(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE420E85FDA3D78E0, uint32_t>(p0, p1); } // E420E85FDA3D78E0 343B4DE0
	static void SET_PED_CAN_HEAD_IK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x41CB8191D48B2AB0, uint32_t>(p0, p1); } // 41CB8191D48B2AB0 D3B04476
	static void SET_PED_CAN_LEG_IK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x156892E8BA89A62, uint32_t>(p0, p1); } // 156892E8BA89A62 9955BC6F
	static void _0xAD665BBFE858E3B6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAD665BBFE858E3B6, uint32_t>(p0, p1); } // AD665BBFE858E3B6 8E5D4EAB
	static void _0x25BA464569724601(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x25BA464569724601, uint32_t>(p0, p1); } // 25BA464569724601 7B0040A8
	static void _0x6022FC5BEC6E12CF(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6022FC5BEC6E12CF, uint32_t>(p0, p1); } // 6022FC5BEC6E12CF 0FDA62DE
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xABDE52C59BE3C61A, uint32_t>(p0, p1); } // ABDE52C59BE3C61A 584C5178
	static BOOL IS_PED_HEADTRACKING_PED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x59752F977A640536, BOOL>(p0, p1); } // 59752F977A640536 2A5DF721
	static BOOL IS_PED_HEADTRACKING_ENTITY(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x6E7B0D66F3838319, BOOL>(p0, p1); } // 6E7B0D66F3838319 233C9ACF
	static void SET_PED_PRIMARY_LOOKAT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xBF9E49325B271DA6, uint32_t>(p0, p1); } // BF9E49325B271DA6 6DEF6F1C
	static void _0xBFA4F1C98BBAF857(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xBFA4F1C98BBAF857, uint32_t>(p0, p1); } // BFA4F1C98BBAF857 FC942D7C
	static void _0xE39D1FB72E0EE747(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE39D1FB72E0EE747, uint32_t>(p0, p1); } // E39D1FB72E0EE747 89EEE07B
	static void _0xF7236044FB4D6579(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF7236044FB4D6579, uint32_t>(p0, p1); } // F7236044FB4D6579
	static void SET_PED_CONFIG_FLAG(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x7FEDD088E489CE41, uint32_t>(p0, p1, p2); } // 7FEDD088E489CE41 9CFBE10D
	static void SET_PED_RESET_FLAG(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xE131FC34DA8AD63F, uint32_t>(p0, p1, p2); } // E131FC34DA8AD63F CFF6FF66
	static BOOL GET_PED_CONFIG_FLAG(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xA7C37587D6D77CA4, BOOL>(p0, p1, p2); } // A7C37587D6D77CA4 ABE98267
	static BOOL GET_PED_RESET_FLAG(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF06F46B83EF10D97, BOOL>(p0, p1); } // F06F46B83EF10D97 2FC10D11
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x0A01476C01CE2E552, uint32_t>(p0, p1); } // 0A01476C01CE2E552 2AB3670B
	static void SET_PED_CAN_EVASIVE_DIVE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA0693E7A116283F, uint32_t>(p0, p1); } // A0693E7A116283F 542FEB4D
	static BOOL IS_PED_EVASIVE_DIVING(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xFEAC7116B533A693, BOOL>(p0, p1); } // FEAC7116B533A693 D82829DC
	static void SET_PED_SHOOTS_AT_COORD(uint32_t p0, float p1, float p2, float p3, BOOL p4) { rage::NativeInvoke::Invoke<0x478A9894800A2A4F, uint32_t>(p0, p1, p2, p3, p4); } // 478A9894800A2A4F FD64EAE5
	static void SET_PED_MODEL_IS_SUPPRESSED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF45D0029FDDF5279, uint32_t>(p0, p1); } // F45D0029FDDF5279 7820CA43
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { rage::NativeInvoke::Invoke<0x28EE726AD82D5B4D, uint32_t>(); } // 28EE726AD82D5B4D 5AD7DC55
	static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC45B64BD76E013C6, uint32_t>(p0, p1); } // C45B64BD76E013C6 6FD9A7CD
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x99B5AF64F0734BCA, uint32_t>(p0, p1); } // 99B5AF64F0734BCA E9B97A2B
	static void _0xCEAA0D0206013959(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCEAA0D0206013959, uint32_t>(p0, p1); } // CEAA0D0206013959 FF1F6AEB
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA769A4326FC5BBEA, uint32_t>(p0, p1); } // A769A4326FC5BBEA E9BD733A
	static void GIVE_PED_HELMET(uint32_t p0, BOOL p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x9661336BAB6FB9AA, uint32_t>(p0, p1, p2, p3); } // 9661336BAB6FB9AA 1862A461
	static void REMOVE_PED_HELMET(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x150D92C99E954111, uint32_t>(p0, p1); } // 150D92C99E954111 2086B1F0
	static void SET_PED_HELMET(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x344C5D954883BFBF, uint32_t>(p0, p1); } // 344C5D954883BFBF ED366E53
	static void SET_PED_HELMET_FLAG(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x55EEDFE096B45965, uint32_t>(p0, p1); } // 55EEDFE096B45965 12677780
	static void SET_PED_HELMET_PROP_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC2472E939A526F64, uint32_t>(p0, p1); } // C2472E939A526F64 A316D13F
	static void SET_PED_HELMET_TEXTURE_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x9C7105AA7B5C764E, uint32_t>(p0, p1); } // 9C7105AA7B5C764E 5F6C3328
	static BOOL IS_PED_WEARING_HELMET(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB2AFAFC648C71A2A, BOOL>(p0); } // B2AFAFC648C71A2A 0D680D49
	static void _0x53C8F2FAD3BDC2E6(uint32_t p0) { rage::NativeInvoke::Invoke<0x53C8F2FAD3BDC2E6, uint32_t>(p0); } // 53C8F2FAD3BDC2E6 24A1284E
	static uint32_t _0x8174C54E61FC0EB1(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8174C54E61FC0EB1, uint32_t>(p0); } // 8174C54E61FC0EB1 8A3A3116
	static uint32_t _0x7E9D7621887FA9EE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7E9D7621887FA9EE, uint32_t>(p0); } // 7E9D7621887FA9EE 74EB662D
	static BOOL _0x14AD7EF37FAF68CB(uint32_t p0) { return rage::NativeInvoke::Invoke<0x14AD7EF37FAF68CB, BOOL>(p0); } // 14AD7EF37FAF68CB FFF149FE
	static void SET_PED_TO_LOAD_COVER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x30DE3DE96CA506BC, uint32_t>(p0, p1); } // 30DE3DE96CA506BC CF94BA97
	static void SET_PED_CAN_COWER_IN_COVER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x981E5A79D734B99F, uint32_t>(p0, p1); } // 981E5A79D734B99F 5194658B
	static void SET_PED_CAN_PEEK_IN_COVER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x44C018342041591B, uint32_t>(p0, p1); } // 44C018342041591B C1DAE216
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xBB6C26AC23A39E9E, uint32_t>(p0, p1); } // BB6C26AC23A39E9E 7C563CD2
	static void SET_PED_LEG_IK_MODE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x53B8D6970EF7E585, uint32_t>(p0, p1); } // 53B8D6970EF7E585 FDDB042E
	static void SET_PED_MOTION_BLUR(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x022D66BD7F7E54A4, uint32_t>(p0, p1); } // 022D66BD7F7E54A4 A211A128
	static void SET_PED_CAN_SWITCH_WEAPON(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFEC689D9249C8D61, uint32_t>(p0, p1); } // FEC689D9249C8D61 B5F8BA28
	static void SET_PED_DIES_INSTANTLY_IN_WATER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9559F452E8108F99, uint32_t>(p0, p1); } // 9559F452E8108F99 FE2554FC
	static void _0x1CDC566813C7A5CF(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1CDC566813C7A5CF, uint32_t>(p0, p1); } // 1CDC566813C7A5CF 77BB7CB8
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(uint32_t p0) { rage::NativeInvoke::Invoke<0xAAEE8324D74A907F, uint32_t>(p0); } // AAEE8324D74A907F 4AC3421E
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xBEA801D480C6DB4E, uint32_t>(p0, p1); } // BEA801D480C6DB4E 7CEFFA45
	static void SET_PED_COMBAT_MOVEMENT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x48FFA098B5BE8ED0, uint32_t>(p0, p1); } // 48FFA098B5BE8ED0 12E62F9E
	static uint32_t GET_PED_COMBAT_MOVEMENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x29FB4F1FAB8CCA75, uint32_t>(p0); } // 29FB4F1FAB8CCA75 F3E7730E
	static void SET_PED_COMBAT_ABILITY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE53A759D522CA83, uint32_t>(p0, p1); } // E53A759D522CA83 6C23D329
	static void SET_PED_COMBAT_RANGE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD149F8A3FE6B4956, uint32_t>(p0, p1); } // D149F8A3FE6B4956 8818A959
	static uint32_t GET_PED_COMBAT_RANGE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x85E986CF0B24762A, uint32_t>(p0); } // 85E986CF0B24762A 9B9B7163
	static void SET_PED_COMBAT_ATTRIBUTES(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x3A1E687904400847, uint32_t>(p0, p1, p2); } // 3A1E687904400847 81D64248
	static void SET_PED_TARGET_LOSS_RESPONSE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x09B02246888A617A8, uint32_t>(p0, p1); } // 09B02246888A617A8 CFA613FF
	static BOOL _0xFB97925DF1115C38(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFB97925DF1115C38, BOOL>(p0); } // FB97925DF1115C38 139C0875
	static BOOL IS_PED_PERFORMING_STEALTH_KILL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2F0EF8797B769C86, BOOL>(p0); } // 2F0EF8797B769C86 9ADD7B21
	static BOOL _0x3E75ABD02CAA7AE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3E75ABD02CAA7AE, BOOL>(p0); } // 3E75ABD02CAA7AE 9BE7C860
	static BOOL IS_PED_BEING_STEALTH_KILLED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3165359F7146B860, BOOL>(p0); } // 3165359F7146B860 D044C8AF
	static uint32_t _0x9BB6E0044E0E9BAF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9BB6E0044E0E9BAF, uint32_t>(p0); } // 9BB6E0044E0E9BAF AFEC26A4
	static BOOL WAS_PED_KILLED_BY_STEALTH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x99B3AF1B678B9666, BOOL>(p0); } // 99B3AF1B678B9666 2EA4B54E
	static BOOL WAS_PED_KILLED_BY_TAKEDOWN(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBBFFAF37EC36FA56, BOOL>(p0); } // BBFFAF37EC36FA56 BDD3CE69
	static BOOL _0x45A82D99BB22AE9B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x45A82D99BB22AE9B, BOOL>(p0); } // 45A82D99BB22AE9B 3993092B
	static void SET_PED_FLEE_ATTRIBUTES(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB2B080B88A4144B7, uint32_t>(p0, p1, p2); } // B2B080B88A4144B7 A717A875
	static void SET_PED_COWER_HASH(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x391385F0544B6DAC, uint32_t>(p0, p1); } // 391385F0544B6DAC 16F30DF4
	static void _0xC0470B17F0D88622(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC0470B17F0D88622, uint32_t>(p0, p1); } // C0470B17F0D88622 A6F2C057
	static void SET_PED_STEERS_AROUND_PEDS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF35ADFAA525ADE7B, uint32_t>(p0, p1); } // F35ADFAA525ADE7B 797CAE4F
	static void SET_PED_STEERS_AROUND_OBJECTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAC48E95BA8741956, uint32_t>(p0, p1); } // AC48E95BA8741956 3BD9B0A6
	static void SET_PED_STEERS_AROUND_VEHICLES(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFA3AB51FEB96BD64, uint32_t>(p0, p1); } // FA3AB51FEB96BD64 533C0651
	static void _0x463A4BE5AA0887B6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x463A4BE5AA0887B6, uint32_t>(p0, p1); } // 463A4BE5AA0887B6 2276DE0D
	static void _0xB1A5EE596FA70701(uint32_t p0) { rage::NativeInvoke::Invoke<0xB1A5EE596FA70701, uint32_t>(p0); } // B1A5EE596FA70701 59C52BE6
	static void _0x3800D5410449A653(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3800D5410449A653, uint32_t>(p0, p1); } // 3800D5410449A653 1D87DDC1
	static void _0x3FE396202873263B(uint32_t p0) { rage::NativeInvoke::Invoke<0x3FE396202873263B, uint32_t>(p0); } // 3FE396202873263B B52BA5F5
	static BOOL IS_ANY_PED_NEAR_POINT(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x098DDD45D8A6467D0, BOOL>(p0, p1, p2, p3); } // 098DDD45D8A6467D0 FBD9B050
	static void _0x243553B40CC46CFE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x243553B40CC46CFE, uint32_t>(p0, p1, p2); } // 243553B40CC46CFE 187B9070
	static BOOL _0x6A55FEB8D0A8F5D1(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x6A55FEB8D0A8F5D1, BOOL>(p0, p1, p2, p3, p4); } // 6A55FEB8D0A8F5D1 45037B9B
	static void _0xF4127D3DAB8D011F(uint32_t p0) { rage::NativeInvoke::Invoke<0xF4127D3DAB8D011F, uint32_t>(p0); } // F4127D3DAB8D011F 840D24D3
	static void GET_PED_FLOOD_INVINCIBILITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB215D95552289435, uint32_t>(p0, p1); } // B215D95552289435 31C31DAA
	static void _0xCE7E74428DCEC0A(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCE7E74428DCEC0A, uint32_t>(p0, p1); } // CE7E74428DCEC0A 9194DB71
	static BOOL IS_TRACKED_PED_VISIBLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC76769D28EAFDE03, BOOL>(p0); } // C76769D28EAFDE03 33248CC1
	static uint32_t _0xCBD425CCB7669AD5(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCBD425CCB7669AD5, uint32_t>(p0); } // CBD425CCB7669AD5 5B1B70AA
	static BOOL IS_PED_TRACKED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x53C4582ECB7FC9E4, BOOL>(p0); } // 53C4582ECB7FC9E4 7EB613D9
	static BOOL HAS_PED_RECEIVED_EVENT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x22E454ACC745B58C, BOOL>(p0, p1); } // 22E454ACC745B58C ECD73DB0
	static BOOL _0x2A71687AF0AE817B(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x2A71687AF0AE817B, BOOL>(p0, p1); } // 2A71687AF0AE817B 74A0F291
	static uint32_t GET_PED_BONE_INDEX(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA8918EDB277FC51C, uint32_t>(p0, p1); } // A8918EDB277FC51C 259C6BA2
	static uint32_t GET_PED_RAGDOLL_BONE_INDEX(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xEC6153B3A7DF8F5B, uint32_t>(p0, p1); } // EC6153B3A7DF8F5B 849F0716
	static void SET_PED_ENVEFF_SCALE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x7D8723023881CD95, uint32_t>(p0, p1); } // 7D8723023881CD95 FC1CFC27
	static float GET_PED_ENVEFF_SCALE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBC165599D37CF7FE, float>(p0); } // BC165599D37CF7FE A3421E39
	static void SET_ENABLE_PED_ENVEFF_SCALE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5A2866F66A9B4EBC, uint32_t>(p0, p1); } // 5A2866F66A9B4EBC C70F4A84
	static void _0xAFB0E8DD7A5F1A2C(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xAFB0E8DD7A5F1A2C, uint32_t>(p0, p1); } // AFB0E8DD7A5F1A2C 3B882533
	static void _0x89F8AC733C8EDA5C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x89F8AC733C8EDA5C, uint32_t>(p0, p1, p2, p3); } // 89F8AC733C8EDA5C 87A0C174
	static void _0x86F59F19D512507F(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x86F59F19D512507F, uint32_t>(p0, p1); } // 86F59F19D512507F 7BD26837
	static void _0xE8CDA461A10C8848(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE8CDA461A10C8848, uint32_t>(p0, p1); } // E8CDA461A10C8848 98E29ED0
	static uint32_t CREATE_SYNCHRONIZED_SCENE(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x1BEDF9ACAEAB15F8, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 1BEDF9ACAEAB15F8 FFDDF8FA
	static uint32_t _0x650BCF458DE81EC2(float p0, float p1, float p2, float p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0x650BCF458DE81EC2, uint32_t>(p0, p1, p2, p3, p4); } // 650BCF458DE81EC2 F3876894
	static uint32_t IS_SYNCHRONIZED_SCENE_RUNNING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1955A5B9B65FEEBD, uint32_t>(p0); } // 1955A5B9B65FEEBD 57A282F1
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x37925BB9CC5A36FA, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 37925BB9CC5A36FA 2EC2A0B2
	static void SET_SYNCHRONIZED_SCENE_PHASE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x39ABDEE52B08CBD2, uint32_t>(p0, p1); } // 39ABDEE52B08CBD2 F5AB0D98
	static float GET_SYNCHRONIZED_SCENE_PHASE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6385FE4ECBDF05D2, float>(p0); } // 6385FE4ECBDF05D2 B0B2C852
	static void SET_SYNCHRONIZED_SCENE_RATE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x5F6A1BCECF1CEED6, uint32_t>(p0, p1); } // 5F6A1BCECF1CEED6 F10112FD
	static float GET_SYNCHRONIZED_SCENE_RATE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8EACF10787040544, float>(p0); } // 8EACF10787040544 89365F0D
	static void SET_SYNCHRONIZED_SCENE_LOOPED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x15B365C4645F79B8, uint32_t>(p0, p1); } // 15B365C4645F79B8 32ED9F82
	static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD8DEB279D8DF665F, BOOL>(p0); } // D8DEB279D8DF665F 47D87A84
	static void _0x36069312B76436F6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x36069312B76436F6, uint32_t>(p0, p1); } // 36069312B76436F6 2DE48DA1
	static BOOL _0x606A9207A4D823D3(uint32_t p0) { return rage::NativeInvoke::Invoke<0x606A9207A4D823D3, BOOL>(p0); } // 606A9207A4D823D3 72CF2514
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xBC7DDBE5DB276E21, uint32_t>(p0, p1, p2); } // BC7DDBE5DB276E21 E9BA6189
	static void DETACH_SYNCHRONIZED_SCENE(uint32_t p0) { rage::NativeInvoke::Invoke<0xDA08F511A13A14A2, uint32_t>(p0); } // DA08F511A13A14A2 52A1CAB2
	static void _0xCA8E791F0FF3D9CE(uint32_t p0) { rage::NativeInvoke::Invoke<0xCA8E791F0FF3D9CE, uint32_t>(p0); } // CA8E791F0FF3D9CE BF7F9035
	static BOOL FORCE_PED_MOTION_STATE(uint32_t p0, uint32_t p1, BOOL p2, uint32_t p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x832DBDBEA29906F5, BOOL>(p0, p1, p2, p3, p4); } // 832DBDBEA29906F5 164DDEFF
	static void SET_PED_MAX_MOVE_BLEND_RATIO(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD156A7AA30AC555A, uint32_t>(p0, p1); } // D156A7AA30AC555A EAD0269A
	static void SET_PED_MIN_MOVE_BLEND_RATIO(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x046A9B5764CAA654E, uint32_t>(p0, p1); } // 046A9B5764CAA654E 383EC364
	static void SET_PED_MOVE_RATE_OVERRIDE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x08500A524C6ADFD34, uint32_t>(p0, p1); } // 08500A524C6ADFD34 900008C6
	static BOOL _0x9FD49D841955E633(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x9FD49D841955E633, BOOL>(p0, p1); } // 9FD49D841955E633 79543043
	static uint32_t GET_PED_NEARBY_VEHICLES(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x44110552833E1A96, uint32_t>(p0, p1); } // 44110552833E1A96 CB716F68
	static uint32_t GET_PED_NEARBY_PEDS(uint32_t p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xC92E7719639C64A, uint32_t>(p0, p1, p2); } // C92E7719639C64A 4D3325F4
	static BOOL _0x276AAF646BAB792B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x276AAF646BAB792B, BOOL>(p0); } // 276AAF646BAB792B F9FB4B71
	static BOOL IS_PED_USING_ACTION_MODE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x007758D769A79898D4, BOOL>(p0); } // 007758D769A79898D4 5AE7EDA2
	static void SET_PED_USING_ACTION_MODE(uint32_t p0, BOOL p1, uint32_t p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x6C2B8C9CB6B5CDE4, uint32_t>(p0, p1, p2, p3); } // 6C2B8C9CB6B5CDE4 8802F696
	static void SET_PED_CAPSULE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xE496A9A04A9A0A0E, uint32_t>(p0, p1); } // E496A9A04A9A0A0E B153E1B9
	static uint32_t REGISTER_PEDHEADSHOT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x10C39784940B6317, uint32_t>(p0); } // 10C39784940B6317 FFE2667B
	static uint32_t _0x7B4140130BB1BA55(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7B4140130BB1BA55, uint32_t>(p0); } // 7B4140130BB1BA55 4DD03628
	static void UNREGISTER_PEDHEADSHOT(uint32_t p0) { rage::NativeInvoke::Invoke<0xEE99D3729480B00B, uint32_t>(p0); } // EE99D3729480B00B 0879AE45
	static BOOL IS_PEDHEADSHOT_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1132CE7A24BDADC2, BOOL>(p0); } // 1132CE7A24BDADC2 0B1080C4
	static BOOL IS_PEDHEADSHOT_READY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDCBCBE55C7A8D357, BOOL>(p0); } // DCBCBE55C7A8D357 761CD02E
	static uint32_t GET_PEDHEADSHOT_TXD_STRING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x47A5C6F75ADC0C8A, uint32_t>(p0); } // 47A5C6F75ADC0C8A 76D28E96
	static BOOL _0x52B8D71F9D0DC811(uint32_t p0) { return rage::NativeInvoke::Invoke<0x52B8D71F9D0DC811, BOOL>(p0); } // 52B8D71F9D0DC811 10F2C023
	static void _0x5D770B76D5E85FA0(uint32_t p0) { rage::NativeInvoke::Invoke<0x5D770B76D5E85FA0, uint32_t>(p0); } // 5D770B76D5E85FA0 0DBB2FA7
	static uint32_t _0x1AC18C15711152BA() { return rage::NativeInvoke::Invoke<0x1AC18C15711152BA, uint32_t>(); } // 1AC18C15711152BA 810158F8
	static uint32_t _0x386F22AE2EC830E6() { return rage::NativeInvoke::Invoke<0x386F22AE2EC830E6, uint32_t>(); } // 386F22AE2EC830E6 05023F8F
	static uint32_t _0x415098FED60FB46() { return rage::NativeInvoke::Invoke<0x415098FED60FB46, uint32_t>(); } // 415098FED60FB46 AA39FD6C
	static void _0xED12442D1BEB118A(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xED12442D1BEB118A, uint32_t>(p0, p1); } // ED12442D1BEB118A EF9142DB
	static void _0xF16562EBE23066E5(uint32_t p0) { rage::NativeInvoke::Invoke<0xF16562EBE23066E5, uint32_t>(p0); } // F16562EBE23066E5 0688DE64
	static void _0x6C474EE15021D6F0(float p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x6C474EE15021D6F0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 6C474EE15021D6F0 909A1D76
	static void _0x193E2CDD2E26C6B3(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, float p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x193E2CDD2E26C6B3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 193E2CDD2E26C6B3 4AAD0ECB
	static void _0xEE12B0307228F6E0() { rage::NativeInvoke::Invoke<0xEE12B0307228F6E0, uint32_t>(); } // EE12B0307228F6E0 492C9E46
	static BOOL _0x50F2384162070F3A() { return rage::NativeInvoke::Invoke<0x50F2384162070F3A, BOOL>(); } // 50F2384162070F3A 814A28F4
	static BOOL _0xABFE24513C5D2AF9() { return rage::NativeInvoke::Invoke<0xABFE24513C5D2AF9, BOOL>(); } // ABFE24513C5D2AF9 0B60D2BA
	static BOOL _0x4B9D86C8232D1110() { return rage::NativeInvoke::Invoke<0x4B9D86C8232D1110, BOOL>(); } // 4B9D86C8232D1110 6B83ABDF
	static uint32_t _0x5F4F4254E34C9F57() { return rage::NativeInvoke::Invoke<0x5F4F4254E34C9F57, uint32_t>(); } // 5F4F4254E34C9F57 F46B4DC8
	static void _0xD02DED3660889F08(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0xD02DED3660889F08, uint32_t>(p0, p1, p2, p3); } // D02DED3660889F08 36A4AC65
	static void _0xF4A89B0F7B78383E(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xF4A89B0F7B78383E, uint32_t>(p0, p1); } // F4A89B0F7B78383E BA699DDF
	static void SET_IK_TARGET(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x8D97A58E67A00C0C, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 8D97A58E67A00C0C 6FE5218C
	static void _0x18C6DDCAB6C5608E(uint32_t p0) { rage::NativeInvoke::Invoke<0x18C6DDCAB6C5608E, uint32_t>(p0); } // 18C6DDCAB6C5608E FB4000DC
	static void REQUEST_ACTION_MODE_ASSET(uint32_t *p0) { rage::NativeInvoke::Invoke<0xFD4EA8E24903BE82, uint32_t>(p0); } // FD4EA8E24903BE82 572BA553
	static BOOL HAS_ACTION_MODE_ASSET_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xF3F8EABCC34FE806, BOOL>(p0); } // F3F8EABCC34FE806 F7EB2BF1
	static void REMOVE_ACTION_MODE_ASSET(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC65F92A82E62133A, uint32_t>(p0); } // C65F92A82E62133A 3F480F92
	static void REQUEST_STEALTH_MODE_ASSET(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA4978532792895C2, uint32_t>(p0); } // A4978532792895C2 280A004A
	static BOOL HAS_STEALTH_MODE_ASSET_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xD21D3B976B0BF82, BOOL>(p0); } // D21D3B976B0BF82 39245667
	static void REMOVE_STEALTH_MODE_ASSET(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC61BCDAB7118911F, uint32_t>(p0); } // C61BCDAB7118911F 8C0B243A
	static void SET_PED_LOD_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x75CB839D13ADADEE, uint32_t>(p0, p1); } // 75CB839D13ADADEE 1D2B5C70
	static void _0xBAEDF75CCDA1BEB8(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xBAEDF75CCDA1BEB8, uint32_t>(p0, p1, p2); } // BAEDF75CCDA1BEB8 2F9550C2
	static void _0x5CA3C0D266164A4D(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5CA3C0D266164A4D, uint32_t>(p0, p1); } // 5CA3C0D266164A4D 37DBC2AD
	static void _0x80B1CF93DD91E3E8(uint32_t p0, BOOL p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x80B1CF93DD91E3E8, uint32_t>(p0, p1, p2, p3); } // 80B1CF93DD91E3E8 C0F1BC91
	static BOOL _0x7714F26C0D3E05E5(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x7714F26C0D3E05E5, BOOL>(p0, p1, p2, p3, p4); } // 7714F26C0D3E05E5 1A464167
	static BOOL _0x072A7C1A0E950F304(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x072A7C1A0E950F304, BOOL>(p0, p1, p2, p3, p4, p5); } // 072A7C1A0E950F304 D0567D41
	static void _0xA9A9EC00EAE64B1A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xA9A9EC00EAE64B1A, uint32_t>(p0, p1, p2, p3, p4); } // A9A9EC00EAE64B1A 4BBE5E2C
	static void _0x2760FA247569D426(uint32_t p0) { rage::NativeInvoke::Invoke<0x2760FA247569D426, uint32_t>(p0); } // 2760FA247569D426 A89A53F2
	static void _0x5BA603BCBD63290E(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x5BA603BCBD63290E, uint32_t>(p0, p1); } // 5BA603BCBD63290E
	static void _0x8CC867BE28661C52(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x8CC867BE28661C52, uint32_t>(p0, p1); } // 8CC867BE28661C52
}

namespace VEHICLE
{
	static uint32_t CREATE_VEHICLE(uint32_t p0, float p1, float p2, float p3, float p4, BOOL p5, BOOL p6) { return rage::NativeInvoke::Invoke<0x546974B676313326, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 546974B676313326 DD75460A
	static void DELETE_VEHICLE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x10EA498723DC5A09, uint32_t>(p0); } // 10EA498723DC5A09 9803AF60
	static void _0x89BB944E8FF3CF6C(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x89BB944E8FF3CF6C, uint32_t>(p0, p1); } // 89BB944E8FF3CF6C BB54ECCA
	static void _0xAFFA64558CC670AB(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAFFA64558CC670AB, uint32_t>(p0, p1); } // AFFA64558CC670AB 8BAAC437
	static uint32_t _0xBC382C484070365(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBC382C484070365, uint32_t>(p0); } // BC382C484070365 FBDE9FD8
	static BOOL IS_VEHICLE_MODEL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x40923C25A763E8E8, BOOL>(p0, p1); } // 40923C25A763E8E8 013B10B6
	static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0x629363FE562ED409, BOOL>(p0); } // 629363FE562ED409 F6BDDA30
	static uint32_t CREATE_SCRIPT_VEHICLE_GENERATOR(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, BOOL p11, uint32_t p12, uint32_t p13, BOOL p14, BOOL p15, uint32_t p16) { return rage::NativeInvoke::Invoke<0xE58B057B66800D22, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // E58B057B66800D22 25A9A261
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(uint32_t p0) { rage::NativeInvoke::Invoke<0x1A07CC1CAA76FAA8, uint32_t>(p0); } // 1A07CC1CAA76FAA8 E4328E3F
	static void SET_SCRIPT_VEHICLE_GENERATOR(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x102246777F5F994C, uint32_t>(p0, p1); } // 102246777F5F994C 40D73747
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0xC198E0954F22A27D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // C198E0954F22A27D B4E0E69A
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { rage::NativeInvoke::Invoke<0x56F23AA29DA30DB2, uint32_t>(); } // 56F23AA29DA30DB2 AB1FDD76
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0x6D1F69C2D6F53A63, uint32_t>(p0); } // 6D1F69C2D6F53A63 87F767F2
	static void _0x22961CD4C38166A(float p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x22961CD4C38166A, uint32_t>(p0, p1, p2, p3); } // 22961CD4C38166A 935A95DA
	static void _0x0E50BD25931C53B3F() { rage::NativeInvoke::Invoke<0x0E50BD25931C53B3F, uint32_t>(); } // 0E50BD25931C53B3F 6C73E45A
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD90C30D269B19096, BOOL>(p0); } // D90C30D269B19096 E14FDBA6
	static uint32_t SET_ALL_VEHICLES_SPAWN(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x8BE5B68DB02E00B2, uint32_t>(p0, p1, p2, p3); } // 8BE5B68DB02E00B2 A0909ADB
	static BOOL IS_VEHICLE_STUCK_ON_ROOF(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE5C9C2629E1907A, BOOL>(p0); } // FE5C9C2629E1907A 18D07C6C
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(uint32_t p0) { rage::NativeInvoke::Invoke<0x6C5479F57AAC2554, uint32_t>(p0); } // 6C5479F57AAC2554 3A13D384
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uint32_t p0) { rage::NativeInvoke::Invoke<0xCD79646FD263CD43, uint32_t>(p0); } // CD79646FD263CD43 F390BA1B
	static BOOL IS_VEHICLE_STOPPED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2ACEA6F88B3AFFB0, BOOL>(p0); } // 2ACEA6F88B3AFFB0 655F072C
	static uint32_t GET_VEHICLE_NUMBER_OF_PASSENGERS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFD6DBE4BBF51CA66, uint32_t>(p0); } // FD6DBE4BBF51CA66 1EF20849
	static uint32_t GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF7D9833F1E3C722B, uint32_t>(p0); } // F7D9833F1E3C722B 0A2FC08C
	static uint32_t _0x3D27599863364482(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3D27599863364482, uint32_t>(p0); } // 3D27599863364482 838F7BF7
	static BOOL _0xF45D390F38484A3(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF45D390F38484A3, BOOL>(p0, p1); } // F45D390F38484A3 769E5CF2
	static BOOL _0x459616FAE9B012C2(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x459616FAE9B012C2, BOOL>(p0, p1); } // 459616FAE9B012C2
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { rage::NativeInvoke::Invoke<0x6471EB4B59AE203B, uint32_t>(p0); } // 6471EB4B59AE203B F4187E51
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { rage::NativeInvoke::Invoke<0x12C634752EADE76, uint32_t>(p0); } // 12C634752EADE76 543F712B
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { rage::NativeInvoke::Invoke<0x880A21F1BF566643, uint32_t>(p0); } // 880A21F1BF566643 DD46CEBE
	static void _0x488227EA185D3160(BOOL p0) { rage::NativeInvoke::Invoke<0x488227EA185D3160, uint32_t>(p0); } // 488227EA185D3160 09462665
	static void _0x936E7369FAF0B7ED(float p0) { rage::NativeInvoke::Invoke<0x936E7369FAF0B7ED, uint32_t>(p0); } // 936E7369FAF0B7ED DAE2A2BE
	static void SET_FAR_DRAW_VEHICLES(BOOL p0) { rage::NativeInvoke::Invoke<0x5CC9622A821160DC, uint32_t>(p0); } // 5CC9622A821160DC 9F019C49
	static void SET_NUMBER_OF_PARKED_VEHICLES(uint32_t p0) { rage::NativeInvoke::Invoke<0x8CFF0DBCEF15EE73, uint32_t>(p0); } // 8CFF0DBCEF15EE73 206A58E8
	static void SET_VEHICLE_DOORS_LOCKED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCDC1FD4387DA32EC, uint32_t>(p0, p1); } // CDC1FD4387DA32EC 4CDD35D0
	static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x1B76E3D481FAFA52, uint32_t>(p0, p1, p2); } // 1B76E3D481FAFA52 D61D182D
	static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5286A512BB71BC8D, uint32_t>(p0, p1); } // 5286A512BB71BC8D C54156A9
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x981FC4F2EAC2B7D0, uint32_t>(p0, p1, p2); } // 981FC4F2EAC2B7D0 49829236
	static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x1802268D75357896, BOOL>(p0, p1); } // 1802268D75357896 1DC50247
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB837077D79A8A5F0, uint32_t>(p0, p1); } // B837077D79A8A5F0 891BA8A4
	static void _0x52F60AF2C0E3294F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x52F60AF2C0E3294F, uint32_t>(p0, p1); } // 52F60AF2C0E3294F E4EF6514
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x73BCBE4364E252F6, uint32_t>(p0, p1, p2); } // 73BCBE4364E252F6 4F85E783
	static void EXPLODE_VEHICLE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x9CC0A0DFBB83918C, uint32_t>(p0, p1, p2); } // 9CC0A0DFBB83918C BEDEACEB
	static void SET_VEHICLE_OUT_OF_CONTROL(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x66383760D0528C04, uint32_t>(p0, p1, p2); } // 66383760D0528C04 3764D734
	static void SET_VEHICLE_TIMED_EXPLOSION(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x2DE5EB12E48E340C, uint32_t>(p0, p1, p2); } // 2DE5EB12E48E340C DB8CB8E2
	static void _0x286B6A8C189C0301(uint32_t p0) { rage::NativeInvoke::Invoke<0x286B6A8C189C0301, uint32_t>(p0); } // 286B6A8C189C0301 811373DE
	static BOOL _0x66F794FF7EBD3C84() { return rage::NativeInvoke::Invoke<0x66F794FF7EBD3C84, BOOL>(); } // 66F794FF7EBD3C84 A4E69134
	static void _0xB42D5E1B81AC8C17() { rage::NativeInvoke::Invoke<0xB42D5E1B81AC8C17, uint32_t>(); } // B42D5E1B81AC8C17 65255524
	static BOOL _0x3739CEE6C015ACB5(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3739CEE6C015ACB5, BOOL>(p0); } // 3739CEE6C015ACB5 E39DAF36
	static void SET_TAXI_LIGHTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x51573EF310AEF180, uint32_t>(p0, p1); } // 51573EF310AEF180 68639D85
	static BOOL IS_TAXI_LIGHT_ON(uint32_t p0) { return rage::NativeInvoke::Invoke<0x44924228199BBC23, BOOL>(p0); } // 44924228199BBC23 6FC4924A
	static BOOL IS_VEHICLE_IN_GARAGE_AREA(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA5A6C7F14D300E6C, BOOL>(p0, p1); } // A5A6C7F14D300E6C A90EC257
	static void SET_VEHICLE_COLOURS(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x2972E055244638AD, uint32_t>(p0, p1, p2); } // 2972E055244638AD 57F24253
	static void SET_VEHICLE_FULLBEAM(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4587367331B50718, uint32_t>(p0, p1); } // 4587367331B50718 9C49CC15
	static void STEER_UNLOCK_BIAS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x032614B2EF1227D60, uint32_t>(p0, p1); } // 032614B2EF1227D60 A59E3DCD
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x86140F88A4D4237B, uint32_t>(p0, p1, p2, p3); } // 86140F88A4D4237B 8DF9F9BC
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x36299CCFE91E283, uint32_t>(p0, p1, p2, p3); } // 36299CCFE91E283 1C2B9FEF
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(uint32_t p0) { rage::NativeInvoke::Invoke<0x47486E10E526890E, uint32_t>(p0); } // 47486E10E526890E 51E1E33D
	static BOOL _DOES_VEHICLE_HAVE_SECONDARY_COLOUR(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEC9139D75F13D0D3, BOOL>(p0); } // EC9139D75F13D0D3 D7EC8760
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xF7A065BFB9BF72C6, uint32_t>(p0, p1, p2, p3); } // F7A065BFB9BF72C6 9D77259E
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x5A28251CF7DB43BF, uint32_t>(p0, p1, p2, p3); } // 5A28251CF7DB43BF 3FF247A2
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(uint32_t p0) { rage::NativeInvoke::Invoke<0xCBF5684487475533, uint32_t>(p0); } // CBF5684487475533 7CE00B29
	static BOOL _0x4FD71373746F04E1(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4FD71373746F04E1, BOOL>(p0); } // 4FD71373746F04E1 288AD228
	static void _0xCBB1969A60D77603(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xCBB1969A60D77603, uint32_t>(p0, p1); } // CBB1969A60D77603 8332730C
	static float _0x98F1308BE40F6537(uint32_t p0) { return rage::NativeInvoke::Invoke<0x98F1308BE40F6537, float>(p0); } // 98F1308BE40F6537 D5F1EEE1
	static void SET_CAN_RESPRAY_VEHICLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x66C2903A9B8B3BCE, uint32_t>(p0, p1); } // 66C2903A9B8B3BCE 37677590
	static void _0xE97969830227DD25(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE97969830227DD25, uint32_t>(p0, p1); } // E97969830227DD25 54E9EE75
	static void _0x4A077D4FD31F5ED(uint32_t p0, BOOL p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x4A077D4FD31F5ED, uint32_t>(p0, p1, p2, p3, p4); } // 4A077D4FD31F5ED 4A46E814
	static void SET_BOAT_ANCHOR(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xBDE8781B24AE060, uint32_t>(p0, p1); } // BDE8781B24AE060 A3906284
	static BOOL _0x8BEA7C6B219C6B95(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8BEA7C6B219C6B95, BOOL>(p0); } // 8BEA7C6B219C6B95
	static void _0x2B15B2FCEF2D8E68(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2B15B2FCEF2D8E68, uint32_t>(p0, p1); } // 2B15B2FCEF2D8E68 0ED84792
	static void _0xCCCDE957EF314FDE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCCCDE957EF314FDE, uint32_t>(p0, p1); } // CCCDE957EF314FDE A739012A
	static void _0xAC3B1E7088D6FA43(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xAC3B1E7088D6FA43, uint32_t>(p0, p1); } // AC3B1E7088D6FA43 66FA450C
	static void _0xEA6E1422269A2218(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEA6E1422269A2218, uint32_t>(p0, p1); } // EA6E1422269A2218 35614622
	static void SET_VEHICLE_SIREN(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD625A1F3890F76DC, uint32_t>(p0, p1); } // D625A1F3890F76DC 4AC1EFC7
	static BOOL IS_VEHICLE_SIREN_ON(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3E4CDDFA2D064429, BOOL>(p0); } // 3E4CDDFA2D064429 25EB5873
	static BOOL _0xA7420BE797BFBA72(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA7420BE797BFBA72, BOOL>(p0); } // A7420BE797BFBA72
	static void SET_VEHICLE_STRONG(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA175CED361F78A04, uint32_t>(p0, p1); } // A175CED361F78A04 C758D19F
	static void REMOVE_VEHICLE_STUCK_CHECK(uint32_t p0) { rage::NativeInvoke::Invoke<0x8190B3B1300AE293, uint32_t>(p0); } // 8190B3B1300AE293 81594917
	static void GET_VEHICLE_COLOURS(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x1603516D6065B48F, uint32_t>(p0, p1, p2); } // 1603516D6065B48F 40D82D88
	static BOOL IS_VEHICLE_SEAT_FREE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC51FBEBD87CFD69C, BOOL>(p0, p1); } // C51FBEBD87CFD69C DAF42B02
	static uint32_t GET_PED_IN_VEHICLE_SEAT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xE634CB9EE7094537, uint32_t>(p0, p1); } // E634CB9EE7094537 388FDE9A
	static uint32_t _0xF417BF3AE09AE69A(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF417BF3AE09AE69A, uint32_t>(p0, p1); } // F417BF3AE09AE69A F7C6792D
	static BOOL GET_VEHICLE_LIGHTS_STATE(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x958961ACDD8EF23C, BOOL>(p0, p1, p2); } // 958961ACDD8EF23C 7C278621
	static BOOL IS_VEHICLE_TYRE_BURST(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xEB461363EE450DCA, BOOL>(p0, p1, p2); } // EB461363EE450DCA 48C80210
	static void SET_VEHICLE_FORWARD_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xADE31BE382A60FA4, uint32_t>(p0, p1); } // ADE31BE382A60FA4 69880D14
	static void _0x7674FE6F22323056(uint32_t p0, float p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x7674FE6F22323056, uint32_t>(p0, p1, p2, p3); } // 7674FE6F22323056 CBC7D3C8
	static void _0x86D787D1787528E4(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x86D787D1787528E4, uint32_t>(p0, p1); } // 86D787D1787528E4 943A6CFC
	static BOOL SET_PED_ENABLED_BIKE_RINGTONE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xD93B67903E37DF9A, BOOL>(p0, p1); } // D93B67903E37DF9A 7FB25568
	static BOOL _0x3D84FFE098363B73(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3D84FFE098363B73, BOOL>(p0); } // 3D84FFE098363B73 593143B9
	static uint32_t _0x3C0F98076B6EA8C7(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3C0F98076B6EA8C7, uint32_t>(p0); } // 3C0F98076B6EA8C7 70DD5E25
	static BOOL _0x706E9A09986A93EE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x706E9A09986A93EE, BOOL>(p0, p1); } // 706E9A09986A93EE FBF5536A
	static void _0xE271210F335D049(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE271210F335D049, uint32_t>(p0, p1); } // E271210F335D049 20AB5783
	static void _0x3F72ED3A3E1F435C(uint32_t p0) { rage::NativeInvoke::Invoke<0x3F72ED3A3E1F435C, uint32_t>(p0); } // 3F72ED3A3E1F435C 0F11D01F
	static void _0xD2D9CF38FCB7BA95(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD2D9CF38FCB7BA95, uint32_t>(p0, p1); } // D2D9CF38FCB7BA95 AE040377
	static void _0x07783E403C4EF50FD(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x07783E403C4EF50FD, uint32_t>(p0, p1); } // 07783E403C4EF50FD 4C0E4031
	static BOOL _0x271DC0F49A6DA8A0(uint32_t p0) { return rage::NativeInvoke::Invoke<0x271DC0F49A6DA8A0, BOOL>(p0); } // 271DC0F49A6DA8A0 6346B7CC
	static void _0xD7525ABFEB8CEC46(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD7525ABFEB8CEC46, uint32_t>(p0, p1); } // D7525ABFEB8CEC46 CCB41A55
	static void SET_VEHICLE_TYRE_BURST(uint32_t p0, uint32_t p1, BOOL p2, float p3) { rage::NativeInvoke::Invoke<0x9E55A68D6F41E517, uint32_t>(p0, p1, p2, p3); } // 9E55A68D6F41E517 89D28068
	static void SET_VEHICLE_DOORS_SHUT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6F4AC9499C730CF0, uint32_t>(p0, p1); } // 6F4AC9499C730CF0 BB1FF6E7
	static void SET_VEHICLE_TYRES_CAN_BURST(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x668C5F7E7EE6BF09, uint32_t>(p0, p1); } // 668C5F7E7EE6BF09 A198DB54
	static BOOL GET_VEHICLE_TYRES_CAN_BURST(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4FA9345A8F43BDAC, BOOL>(p0); } // 4FA9345A8F43BDAC 4D76CD2F
	static void SET_VEHICLE_WHEELS_CAN_BREAK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x75E0D55C963CD062, uint32_t>(p0, p1); } // 75E0D55C963CD062 829ED654
	static void SET_VEHICLE_DOOR_OPEN(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0xE25E46198A369207, uint32_t>(p0, p1, p2, p3); } // E25E46198A369207 BB75D38B
	static void REMOVE_VEHICLE_WINDOW(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xA8B02A3D719BC7B0, uint32_t>(p0, p1); } // A8B02A3D719BC7B0 BB8104A3
	static void ROLL_DOWN_WINDOWS(uint32_t p0) { rage::NativeInvoke::Invoke<0x59C6671FED5AE193, uint32_t>(p0); } // 59C6671FED5AE193 51A16DC6
	static void ROLL_DOWN_WINDOW(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1B098CDE9E6BB203, uint32_t>(p0, p1); } // 1B098CDE9E6BB203 F840134C
	static void ROLL_UP_WINDOW(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x32268F14FB2EE675, uint32_t>(p0, p1); } // 32268F14FB2EE675 83B7E06A
	static void SMASH_VEHICLE_WINDOW(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x57F7CA2B6EB04369, uint32_t>(p0, p1); } // 57F7CA2B6EB04369 DDD9A8C2
	static void FIX_VEHICLE_WINDOW(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD11E6D08418600CB, uint32_t>(p0, p1); } // D11E6D08418600CB 6B8E990D
	static void _0xC7B567CBBB3E5267(uint32_t p0) { rage::NativeInvoke::Invoke<0xC7B567CBBB3E5267, uint32_t>(p0); } // C7B567CBBB3E5267 CC95C96B
	static void _0x68D6988357E5CFB0(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x68D6988357E5CFB0, uint32_t>(p0, p1, p2, p3); } // 68D6988357E5CFB0 FDA7B6CA
	static void SET_VEHICLE_LIGHTS(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x82A70865B4EF1184, uint32_t>(p0, p1); } // 82A70865B4EF1184 E8930226
	static void _0x32343F077D675E97(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x32343F077D675E97, uint32_t>(p0, p1); } // 32343F077D675E97 4221E435
	static void SET_VEHICLE_ALARM(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAD78B089450094CB, uint32_t>(p0, p1); } // AD78B089450094CB 24877D84
	static void START_VEHICLE_ALARM(uint32_t p0) { rage::NativeInvoke::Invoke<0xEBEB3C85BCDB344B, uint32_t>(p0); } // EBEB3C85BCDB344B 5B451FF7
	static BOOL IS_VEHICLE_ALARM_ACTIVATED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x75A06D5F83176A1C, BOOL>(p0); } // 75A06D5F83176A1C F2630A4C
	static void SET_VEHICLE_INTERIORLIGHT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x20DE8B7C1E1378DC, uint32_t>(p0, p1); } // 20DE8B7C1E1378DC 9AD1FE1E
	static void SET_VEHICLE_LIGHT_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xE84BDB8B20F2DF98, uint32_t>(p0, p1); } // E84BDB8B20F2DF98 48039D6A
	static void ATTACH_VEHICLE_TO_TRAILER(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0xF2010391989F2D52, uint32_t>(p0, p1, p2); } // F2010391989F2D52 2133977F
	static void _0x889C7ACE5D70B022(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { rage::NativeInvoke::Invoke<0x889C7ACE5D70B022, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 889C7ACE5D70B022 12AC1A16
	static void _0x31C8FE3AD33785E5(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0x31C8FE3AD33785E5, uint32_t>(p0, p1, p2); } // 31C8FE3AD33785E5 40C4763F
	static void DETACH_VEHICLE_FROM_TRAILER(uint32_t p0) { rage::NativeInvoke::Invoke<0x680AEB4DF31DB9A, uint32_t>(p0); } // 680AEB4DF31DB9A B5DBF91D
	static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA04CA7D6710299C3, BOOL>(p0); } // A04CA7D6710299C3 E142BBCC
	static void _0xAFB23EE2444B9873(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xAFB23EE2444B9873, uint32_t>(p0, p1); } // AFB23EE2444B9873 E74E85CE
	static void _0xA0108C9F7C74F07A(uint32_t p0) { rage::NativeInvoke::Invoke<0xA0108C9F7C74F07A, uint32_t>(p0); } // A0108C9F7C74F07A 06C47A6F
	static void SET_VEHICLE_TYRE_FIXED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x43AB3F42820319A6, uint32_t>(p0, p1); } // 43AB3F42820319A6 A42EFA6B
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xBC897C4AD5A4F17, uint32_t>(p0, p1); } // BC897C4AD5A4F17 400F9556
	static uint32_t GET_VEHICLE_NUMBER_PLATE_TEXT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3907ED4361C53248, uint32_t>(p0); } // 3907ED4361C53248 E8522D58
	static uint32_t GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return rage::NativeInvoke::Invoke<0x8063ADDF06EDB6B8, uint32_t>(); } // 8063ADDF06EDB6B8 D24BC1AE
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4181147B4609CD58, uint32_t>(p0, p1); } // 4181147B4609CD58 A1A1890E
	static uint32_t _0x19BB097358BFF0AF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x19BB097358BFF0AF, uint32_t>(p0); } // 19BB097358BFF0AF 499747B6
	static void SET_RANDOM_TRAINS(BOOL p0) { rage::NativeInvoke::Invoke<0xA410A4D8F307E26, uint32_t>(p0); } // A410A4D8F307E26 D461CA7F
	static uint32_t CREATE_MISSION_TRAIN(uint32_t p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x44E34FD47BE39CB9, uint32_t>(p0, p1, p2, p3, p4); } // 44E34FD47BE39CB9 D4C2EAFD
	static void SWITCH_TRAIN_TRACK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2504068D2AC71DE0, uint32_t>(p0, p1); } // 2504068D2AC71DE0 68BFDD61
	static void _0x3D7DC92824C3BBA0(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3D7DC92824C3BBA0, uint32_t>(p0, p1); } // 3D7DC92824C3BBA0 D5774FB7
	static void DELETE_ALL_TRAINS() { rage::NativeInvoke::Invoke<0x65FB157973AC3D3E, uint32_t>(); } // 65FB157973AC3D3E 83DE7ABF
	static void SET_TRAIN_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x3C0127DD23CE5548, uint32_t>(p0, p1); } // 3C0127DD23CE5548 DFC35E4D
	static void SET_TRAIN_CRUISE_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x50BDA076B97B3673, uint32_t>(p0, p1); } // 50BDA076B97B3673 B507F51D
	static void SET_RANDOM_BOATS(BOOL p0) { rage::NativeInvoke::Invoke<0x14D78F83242AE236, uint32_t>(p0); } // 14D78F83242AE236 B505BD89
	static void SET_GARBAGE_TRUCKS(BOOL p0) { rage::NativeInvoke::Invoke<0xD173B40EEAF095B0, uint32_t>(p0); } // D173B40EEAF095B0 D9ABB0FF
	static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7C415C27D612EB5A, BOOL>(p0); } // 7C415C27D612EB5A 5D91D9AC
	static uint32_t GET_VEHICLE_RECORDING_ID(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xEE6ADE60E5ABC4DE, uint32_t>(p0, p1); } // EE6ADE60E5ABC4DE 328D601D
	static void REQUEST_VEHICLE_RECORDING(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x27859D80F345E855, uint32_t>(p0, p1); } // 27859D80F345E855 91AFEFD9
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xD3536FF14115DA03, BOOL>(p0, p1); } // D3536FF14115DA03 F52CD7F5
	static void REMOVE_VEHICLE_RECORDING(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x6F50999A7C4DD6A2, uint32_t>(p0, p1); } // 6F50999A7C4DD6A2 D3C05B00
	static Vector3 _0xBFB3058750DE68FA(uint32_t p0, float p1) { return rage::NativeInvoke::Invoke<0xBFB3058750DE68FA, Vector3>(p0, p1); } // BFB3058750DE68FA F31973BB
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(uint32_t p0, float p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xE4ED200C17FDDB43, Vector3>(p0, p1, p2); } // E4ED200C17FDDB43 7178558D
	static Vector3 _0x85B367BF256E3700(uint32_t p0, float p1) { return rage::NativeInvoke::Invoke<0x85B367BF256E3700, Vector3>(p0, p1); } // 85B367BF256E3700 4D1C15C2
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(uint32_t p0, float p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x50E9138806D09495, Vector3>(p0, p1, p2); } // 50E9138806D09495 D96DEC68
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5795FC1A25E3D756, float>(p0); } // 5795FC1A25E3D756 7116785E
	static uint32_t GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x05EC8472D80EE9A7, uint32_t>(p0, p1); } // 05EC8472D80EE9A7 5B35EEB7
	static float GET_POSITION_IN_RECORDING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAF35F387BDE86320, float>(p0); } // AF35F387BDE86320 7DCD644C
	static float GET_TIME_POSITION_IN_RECORDING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x34CBA24EC004D58A, float>(p0); } // 34CBA24EC004D58A F8C3E4A2
	static void START_PLAYBACK_RECORDED_VEHICLE(uint32_t p0, uint32_t p1, uint32_t *p2, BOOL p3) { rage::NativeInvoke::Invoke<0xFB79A537A7D76B64, uint32_t>(p0, p1, p2, p3); } // FB79A537A7D76B64 CF614CA8
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xC3835F187A1E9DF2, uint32_t>(p0, p1, p2, p3, p4, p5); } // C3835F187A1E9DF2 4E721AD2
	static void _0x230DF9402D44A48C(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x230DF9402D44A48C, uint32_t>(p0, p1); } // 230DF9402D44A48C 01B91CD0
	static void STOP_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xA4DCD8636424FF17, uint32_t>(p0); } // A4DCD8636424FF17 AE99C57C
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xE58AF459A19DBC89, uint32_t>(p0); } // E58AF459A19DBC89 CCF54912
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0x651D6CB9785E1859, uint32_t>(p0); } // 651D6CB9785E1859 59060F75
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8B3A54875054E60A, BOOL>(p0); } // 8B3A54875054E60A 61F7650D
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8905CBC8A6F34181, BOOL>(p0); } // 8905CBC8A6F34181 63022C58
	static uint32_t GET_CURRENT_PLAYBACK_FOR_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x22D3F1E84B527125, uint32_t>(p0); } // 22D3F1E84B527125 A3F44390
	static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xBBA90609C2B3A60A, uint32_t>(p0); } // BBA90609C2B3A60A 8DEA18C8
	static void SET_PLAYBACK_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD5432BD2F44E464F, uint32_t>(p0, p1); } // D5432BD2F44E464F 684E26E4
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uint32_t p0, uint32_t p1, uint32_t *p2, float p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x185733340D6EED4, uint32_t>(p0, p1, p2, p3, p4); } // 185733340D6EED4 8DE8E24E
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB44A0E3915FAA937, uint32_t>(p0, p1); } // B44A0E3915FAA937 CF3EFA4B
	static void SET_PLAYBACK_TO_USE_AI(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x230418AE8DD46C5B, uint32_t>(p0, p1); } // 230418AE8DD46C5B B536CCD7
	static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0xABE60515B3B46807, uint32_t>(p0, p1, p2, p3); } // ABE60515B3B46807 0C8ABAA4
	static void _0xA7E03C7421793651(uint32_t p0, float p1, float p2, float p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xA7E03C7421793651, uint32_t>(p0, p1, p2, p3, p4); } // A7E03C7421793651 943A58EB
	static void _0xF96F0E2B721F875B(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xF96F0E2B721F875B, uint32_t>(p0, p1, p2, p3); } // F96F0E2B721F875B 5C9F477C
	static void _0x7CC418E2FD378CEA(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x7CC418E2FD378CEA, uint32_t>(p0, p1, p2, p3); } // 7CC418E2FD378CEA CD83C393
	static void _0x0514B94F52EED1823(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0514B94F52EED1823, uint32_t>(p0, p1); } // 0514B94F52EED1823 2EF8435C
	static void EXPLODE_VEHICLE_IN_CUTSCENE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x94BEDB926639BE7F, uint32_t>(p0, p1); } // 94BEDB926639BE7F A85207B5
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(uint32_t p0, float p1, uint32_t p2, BOOL p3, BOOL p4, BOOL p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x4D86FCE119E3D0F0, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 4D86FCE119E3D0F0 C8B789AD
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0941F924D5E9C2140, uint32_t>(p0, p1); } // 0941F924D5E9C2140 42A08C9B
	static uint32_t GET_RANDOM_VEHICLE_IN_SPHERE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0xB889FF42D90D99BA, uint32_t>(p0, p1, p2, p3, p4, p5); } // B889FF42D90D99BA 57216D03
	static uint32_t GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0xC4A49B108CA8C47A, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // C4A49B108CA8C47A DCADEB66
	static uint32_t GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0xC69E73E8DD075C95, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // C69E73E8DD075C95 D6343F6B
	static uint32_t GET_CLOSEST_VEHICLE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x9A67DC5FE3A03F32, uint32_t>(p0, p1, p2, p3, p4, p5); } // 9A67DC5FE3A03F32 D7E26B2C
	static uint32_t GET_TRAIN_CARRIAGE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0283A0295F1B379EA, uint32_t>(p0, p1); } // 0283A0295F1B379EA 2544E7A6
	static void DELETE_MISSION_TRAIN(uint32_t *p0) { rage::NativeInvoke::Invoke<0x2082C6F369D5223, uint32_t>(p0); } // 2082C6F369D5223 86C9497D
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x86F7AE7C07CC96E2, uint32_t>(p0, p1); } // 86F7AE7C07CC96E2 19808560
	static void SET_MISSION_TRAIN_COORDS(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xF2879FF4C29EF81E, uint32_t>(p0, p1, p2, p3); } // F2879FF4C29EF81E D6D70803
	static BOOL IS_THIS_MODEL_A_BOAT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9C14CED64BA9A516, BOOL>(p0); } // 9C14CED64BA9A516 10F6085C
	static BOOL _0x3B8F7829EC2D058B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3B8F7829EC2D058B, BOOL>(p0); } // 3B8F7829EC2D058B
	static BOOL IS_THIS_MODEL_A_PLANE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9652AA5F22572EA4, BOOL>(p0); } // 9652AA5F22572EA4 3B3907BB
	static BOOL IS_THIS_MODEL_A_HELI(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6149FC3B1572A5B9, BOOL>(p0); } // 6149FC3B1572A5B9 8AF7F568
	static BOOL IS_THIS_MODEL_A_CAR(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4658BA5921D40213, BOOL>(p0); } // 4658BA5921D40213 60E4C22F
	static BOOL IS_THIS_MODEL_A_TRAIN(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA0852014FD513B3, BOOL>(p0); } // A0852014FD513B3 F87DCFFD
	static BOOL IS_THIS_MODEL_A_BIKE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA34706B20AE53D17, BOOL>(p0); } // A34706B20AE53D17 7E702CDD
	static BOOL IS_THIS_MODEL_A_BICYCLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD70F47541E70FD47, BOOL>(p0); } // D70F47541E70FD47 328E6FF5
	static BOOL IS_THIS_MODEL_A_QUADBIKE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x99F5A208CDBDA518, BOOL>(p0); } // 99F5A208CDBDA518 C1625277
	static void SET_HELI_BLADES_FULL_SPEED(uint32_t p0) { rage::NativeInvoke::Invoke<0x1AFF0858378FA21B, uint32_t>(p0); } // 1AFF0858378FA21B 033A9408
	static void SET_HELI_BLADES_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xE9F234A5BD062118, uint32_t>(p0, p1); } // E9F234A5BD062118 5C7D4EA9
	static void _0x88B16F022564CE30(uint32_t p0, float p1, float p2) { rage::NativeInvoke::Invoke<0x88B16F022564CE30, uint32_t>(p0, p1, p2); } // 88B16F022564CE30 1128A45B
	static void SET_VEHICLE_CAN_BE_TARGETTED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x87EA2A5AFD2719BC, uint32_t>(p0, p1); } // 87EA2A5AFD2719BC 64B70B1D
	static void _0x208D3A373B7F3F36(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x208D3A373B7F3F36, uint32_t>(p0, p1); } // 208D3A373B7F3F36 486C1280
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD8F7B399E76BD1E6, uint32_t>(p0, p1); } // D8F7B399E76BD1E6 C5D94017
	static void _0x1F3D5217EF2F40F3(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x1F3D5217EF2F40F3, uint32_t>(p0, p1); } // 1F3D5217EF2F40F3 009AB49E
	static void _0x60567B551F135997(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x60567B551F135997, uint32_t>(p0, p1); } // 60567B551F135997 758C5E2E
	static uint32_t GET_VEHICLE_DIRT_LEVEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD6725C0AA2828965, uint32_t>(p0); } // D6725C0AA2828965 FD15C065
	static void SET_VEHICLE_DIRT_LEVEL(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xBEFA69C2C9E8754D, uint32_t>(p0, p1); } // BEFA69C2C9E8754D 2B39128B
	static BOOL _0xA37FC49E200C4829(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA37FC49E200C4829, BOOL>(p0); } // A37FC49E200C4829 DAC523BC
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA0D5C9E71EAFB346, BOOL>(p0, p1); } // A0D5C9E71EAFB346 C2385B6F
	static void SET_VEHICLE_ENGINE_ON(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xE0E038A4E5C7727B, uint32_t>(p0, p1, p2); } // E0E038A4E5C7727B 7FBC86F1
	static void SET_VEHICLE_UNDRIVEABLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB96DBAE0EA8F23C7, uint32_t>(p0, p1); } // B96DBAE0EA8F23C7 48D02A4E
	static void SET_VEHICLE_PROVIDES_COVER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDEB25011D82977D7, uint32_t>(p0, p1); } // DEB25011D82977D7 EFC01CA9
	static void SET_VEHICLE_DOOR_CONTROL(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { rage::NativeInvoke::Invoke<0x377AA6DD990C0D26, uint32_t>(p0, p1, p2, p3); } // 377AA6DD990C0D26 572DD360
	static void SET_VEHICLE_DOOR_LATCHED(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0x82CD41B77AA3D46B, uint32_t>(p0, p1, p2, p3, p4); } // 82CD41B77AA3D46B 4EB7BBFC
	static float GET_VEHICLE_DOOR_ANGLE_RATIO(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x790D2A28F6320CC8, float>(p0, p1); } // 790D2A28F6320CC8 0E399C26
	static void SET_VEHICLE_DOOR_SHUT(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x7E40829CCC49E744, uint32_t>(p0, p1, p2); } // 7E40829CCC49E744 142606BD
	static void SET_VEHICLE_DOOR_BROKEN(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xD5EFF2387753D17, uint32_t>(p0, p1, p2); } // D5EFF2387753D17 8147FEA7
	static void SET_VEHICLE_CAN_BREAK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE6C37E5E1782F221, uint32_t>(p0, p1); } // E6C37E5E1782F221 90A810D1
	static BOOL DOES_VEHICLE_HAVE_ROOF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7FA6B8D00E53690B, BOOL>(p0); } // 7FA6B8D00E53690B DB817403
	static BOOL IS_BIG_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9BEA3FC192D22438, BOOL>(p0); } // 9BEA3FC192D22438 9CDBA8DE
	static uint32_t GET_NUMBER_OF_VEHICLE_COLOURS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x134204B049ECC669, uint32_t>(p0); } // 134204B049ECC669 F2442EE2
	static void SET_VEHICLE_COLOUR_COMBINATION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x29CE15040B0080CB, uint32_t>(p0, p1); } // 29CE15040B0080CB A557AEAD
	static uint32_t GET_VEHICLE_COLOUR_COMBINATION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x12C8F81FD7D335FF, uint32_t>(p0); } // 12C8F81FD7D335FF 77AC1B4C
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x43F7F4A62787BC4B, uint32_t>(p0, p1); } // 43F7F4A62787BC4B 14413319
	static void _0xE1A0AADDFA9D4FD8(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE1A0AADDFA9D4FD8, uint32_t>(p0, p1); } // E1A0AADDFA9D4FD8 A6D8D7A5
	static void _0x216DAC5158B70D45(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x216DAC5158B70D45, uint32_t>(p0, p1); } // 216DAC5158B70D45 ACAB8FF3
	static void _0x8217E34A7D5CC293(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8217E34A7D5CC293, uint32_t>(p0, p1); } // 8217E34A7D5CC293 F0E5C41D
	static void _0x1EC586BF9D2588E1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x1EC586BF9D2588E1, uint32_t>(p0, p1); } // 1EC586BF9D2588E1 2F98B4B7
	static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x0E9056F1CC20B228E, uint32_t>(p0, p1, p2); } // 0E9056F1CC20B228E E2C45631
	static uint32_t GET_VEHICLE_DOOR_LOCK_STATUS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x407FC6F2E81C15C7, uint32_t>(p0); } // 407FC6F2E81C15C7 0D72CEF2
	static BOOL IS_VEHICLE_DOOR_DAMAGED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x81A4DE5D88AD9A2C, BOOL>(p0, p1); } // 81A4DE5D88AD9A2C 4999E3C3
	static void _0xC7523792059C60E4(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xC7523792059C60E4, uint32_t>(p0, p1, p2); } // C7523792059C60E4 065B92B3
	static BOOL _0xA079C84217EBAD2F(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xA079C84217EBAD2F, BOOL>(p0, p1); } // A079C84217EBAD2F B3A2CC4F
	static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x4CF67036719A0DD4, BOOL>(p0, p1); } // 4CF67036719A0DD4 AF25C027
	static BOOL IS_COP_VEHICLE_IN_AREA_3D(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x4D30A22147A9AEBA, BOOL>(p0, p1, p2, p3, p4, p5); } // 4D30A22147A9AEBA FB16C6D1
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x525FB3C56A2F33BE, BOOL>(p0); } // 525FB3C56A2F33BE 10089F8E
	static uint32_t GET_VEHICLE_LAYOUT_HASH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x19DA9483264F328E, uint32_t>(p0); } // 19DA9483264F328E E0B35187
	static void SET_RENDER_TRAIN_AS_DERAILED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6A6F577585506D47, uint32_t>(p0, p1); } // 6A6F577585506D47 899D9092
	static void SET_VEHICLE_EXTRA_COLOURS(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xA3A489EE6DDCCD16, uint32_t>(p0, p1, p2); } // A3A489EE6DDCCD16 515DB2A0
	static void GET_VEHICLE_EXTRA_COLOURS(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xA350E44A87923312, uint32_t>(p0, p1, p2); } // A350E44A87923312 80E4659B
	static void STOP_ALL_GARAGE_ACTIVITY() { rage::NativeInvoke::Invoke<0x05916AEC8B9F691A3, uint32_t>(); } // 05916AEC8B9F691A3 17A0BCE5
	static void SET_VEHICLE_FIXED(uint32_t p0) { rage::NativeInvoke::Invoke<0x949A95FF1987531C, uint32_t>(p0); } // 949A95FF1987531C 17469AA1
	static void SET_VEHICLE_DEFORMATION_FIXED(uint32_t p0) { rage::NativeInvoke::Invoke<0x194383AE03B2AF0E, uint32_t>(p0); } // 194383AE03B2AF0E DD2920C8
	static void _0x74032F41B7AB0FBB(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x74032F41B7AB0FBB, uint32_t>(p0, p1); } // 74032F41B7AB0FBB 88F0F7E7
	static void _0x798A38BABF030708(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x798A38BABF030708, uint32_t>(p0, p1); } // 798A38BABF030708 90D6EE57
	static void _0x44ED33478851346F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x44ED33478851346F, uint32_t>(p0, p1); } // 44ED33478851346F C40192B5
	static void _0x3309AC605BC85316(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3309AC605BC85316, uint32_t>(p0, p1); } // 3309AC605BC85316 AD3E05F2
	static void _0x815C1ACCF629D6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x815C1ACCF629D6, uint32_t>(p0, p1); } // 815C1ACCF629D6 1784BA1A
	static void _0xFE5B6DC1831B779C(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFE5B6DC1831B779C, uint32_t>(p0, p1); } // FE5B6DC1831B779C 40C323AE
	static void _0x1BF8CC69AC7AC0C9(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x1BF8CC69AC7AC0C9, uint32_t>(p0, p1); } // 1BF8CC69AC7AC0C9 847F1304
	static void _0x9BE3CF0D916E6F6A(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9BE3CF0D916E6F6A, uint32_t>(p0, p1); } // 9BE3CF0D916E6F6A CBD98BA1
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xFF2066264E0F3BD4, uint32_t>(p0, p1, p2, p3, p4, p5); } // FF2066264E0F3BD4 42CC15E0
	static void SET_VEHICLE_STEER_BIAS(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xAD31B3B3B4A153DE, uint32_t>(p0, p1); } // AD31B3B3B4A153DE 7357C1EB
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x64D04C2170ADD5A9, BOOL>(p0, p1); } // 64D04C2170ADD5A9 042098B5
	static void SET_VEHICLE_EXTRA(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x25A5C91E8079E04E, uint32_t>(p0, p1, p2); } // 25A5C91E8079E04E 642D065C
	static BOOL DOES_EXTRA_EXIST(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA23EFE39C0529E26, BOOL>(p0, p1); } // A23EFE39C0529E26 409411CC
	static void SET_CONVERTIBLE_ROOF(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA00A96276C86D98C, uint32_t>(p0, p1); } // A00A96276C86D98C C87B6A51
	static void LOWER_CONVERTIBLE_ROOF(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB094F261B9D8440F, uint32_t>(p0, p1); } // B094F261B9D8440F C5F72EAE
	static void RAISE_CONVERTIBLE_ROOF(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2575047F91291C9B, uint32_t>(p0, p1); } // 2575047F91291C9B A4E4CBA3
	static uint32_t GET_CONVERTIBLE_ROOF_STATE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x92632E4A1274BB2C, uint32_t>(p0); } // 92632E4A1274BB2C 1B09714D
	static BOOL IS_VEHICLE_A_CONVERTIBLE(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x850813D10502D655, BOOL>(p0, p1); } // 850813D10502D655 6EF54490
	static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1DE314FA5D15EAB5, BOOL>(p0); } // 1DE314FA5D15EAB5 69200FA4
	static void SET_VEHICLE_DAMAGE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { rage::NativeInvoke::Invoke<0x8E5C15A367AD44B0, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 8E5C15A367AD44B0 21B458B2
	static float GET_VEHICLE_ENGINE_HEALTH(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBA2FAB683F225FF0, float>(p0); } // BA2FAB683F225FF0 8880038A
	static void SET_VEHICLE_ENGINE_HEALTH(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x240BBFD908B5DA09, uint32_t>(p0, p1); } // 240BBFD908B5DA09 1B760FB5
	static float GET_VEHICLE_PETROL_TANK_HEALTH(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6E8B0986A202BDDE, float>(p0); } // 6E8B0986A202BDDE E41595CE
	static void SET_VEHICLE_PETROL_TANK_HEALTH(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD9C8A48B8EE646C7, uint32_t>(p0, p1); } // D9C8A48B8EE646C7 660A3692
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xD803509E70F20530, BOOL>(p0, p1, p2); } // D803509E70F20530 2FCF58C1
	static void RESET_VEHICLE_STUCK_TIMER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x99074E6F581D3E84, uint32_t>(p0, p1); } // 99074E6F581D3E84 EF2A6016
	static BOOL IS_VEHICLE_DRIVEABLE(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xCA8794CE207FC6D5, BOOL>(p0, p1); } // CA8794CE207FC6D5 41A7267A
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6CB6EA6826752A6, uint32_t>(p0, p1); } // 6CB6EA6826752A6 B4D3DBFB
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDA90BAFB2AE59996, uint32_t>(p0, p1); } // DA90BAFB2AE59996 D8260751
	static void START_VEHICLE_HORN(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0xEDA66F3323CFFA45, uint32_t>(p0, p1, p2, p3); } // EDA66F3323CFFA45 0DF5ADB3
	static void _0x3938C37578C25DF1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3938C37578C25DF1, uint32_t>(p0, p1); } // 3938C37578C25DF1 968E5770
	static void SET_VEHICLE_HAS_STRONG_AXLES(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC158AF2A8304483D, uint32_t>(p0, p1); } // C158AF2A8304483D 0D1CBC65
	static uint32_t GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9CA400FE84544C65, uint32_t>(p0); } // 9CA400FE84544C65 EC86DF39
	static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xBC1E385D0B7A6032, Vector3>(p0, p1, p2, p3); } // BC1E385D0B7A6032 ABF02075
	static void SET_VEHICLE_LIVERY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x2BACAD26E4CE1EDA, uint32_t>(p0, p1); } // 2BACAD26E4CE1EDA 7AD87059
	static uint32_t GET_VEHICLE_LIVERY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4CA0AD498EF66914, uint32_t>(p0); } // 4CA0AD498EF66914 EC82A51D
	static uint32_t GET_VEHICLE_LIVERY_COUNT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF889AB56F9A8D5E3, uint32_t>(p0); } // F889AB56F9A8D5E3 FB0CA947
	static BOOL IS_VEHICLE_WINDOW_INTACT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x9067781626AA370D, BOOL>(p0, p1); } // 9067781626AA370D AC4EF23D
	static BOOL _0xD2EDB145978EF7B6(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD2EDB145978EF7B6, BOOL>(p0); } // D2EDB145978EF7B6 BB619744
	static BOOL _0x307A19A374EEAB57(uint32_t p0) { return rage::NativeInvoke::Invoke<0x307A19A374EEAB57, BOOL>(p0); } // 307A19A374EEAB57 648E685A
	static void RESET_VEHICLE_WHEELS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3243978F3B735696, uint32_t>(p0, p1); } // 3243978F3B735696 D5FFE779
	static BOOL IS_HELI_PART_BROKEN(uint32_t p0, BOOL p1, BOOL p2, BOOL p3) { return rage::NativeInvoke::Invoke<0x6FD856D296EABBE4, BOOL>(p0, p1, p2, p3); } // 6FD856D296EABBE4 F4E4C439
	static float _0x90228EF18036EE6A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x90228EF18036EE6A, float>(p0); } // 90228EF18036EE6A F01E2AAB
	static float _0xDDC4374B7D84EE5F(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDDC4374B7D84EE5F, float>(p0); } // DDC4374B7D84EE5F A41BC13D
	static float _0xCB7AA89214F578C1(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCB7AA89214F578C1, float>(p0); } // CB7AA89214F578C1 8A68388F
	static uint32_t WAS_COUNTER_ACTIVATED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x71CD47382EE84166, uint32_t>(p0, p1); } // 71CD47382EE84166 2916D69B
	static void SET_VEHICLE_NAME_DEBUG(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE8243C7B1ED62E02, uint32_t>(p0, p1); } // E8243C7B1ED62E02 A712FF5C
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCFAA2B317EA7B259, uint32_t>(p0, p1); } // CFAA2B317EA7B259 38CC692B
	static void _0xFA1F9781C53CC396(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFA1F9781C53CC396, uint32_t>(p0, p1); } // FA1F9781C53CC396 C306A9A3
	static void _0xCB627690F1A36612(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCB627690F1A36612, uint32_t>(p0, p1); } // CB627690F1A36612 95A9ACCB
	static void _0xF14E53754BC84C29(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF14E53754BC84C29, uint32_t>(p0, p1); } // F14E53754BC84C29 24F873FB
	static uint32_t _0x91068745EF3E0ADA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x91068745EF3E0ADA, uint32_t>(p0); } // 91068745EF3E0ADA A6F02670
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x1DB23BF4B2FFF9BA, BOOL>(p0, p1, p2, p3); } // 1DB23BF4B2FFF9BA 2867A834
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x3D9568341F46CF22, uint32_t>(p0); } // 3D9568341F46CF22 9DA21956
	static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x0014087AABE70E6BE4, uint32_t>(p0); } // 0014087AABE70E6BE4 382BE070
	static BOOL IS_VEHICLE_HIGH_DETAIL(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA8F27B4255BFFE1F, BOOL>(p0); } // A8F27B4255BFFE1F 55D41928
	static void REQUEST_VEHICLE_ASSET(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x958003C8F1315BF5, uint32_t>(p0, p1); } // 958003C8F1315BF5 902B4F06
	static BOOL HAS_VEHICLE_ASSET_LOADED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFA32E3333C5BD56A, BOOL>(p0); } // FA32E3333C5BD56A 8DAAC3CB
	static void REMOVE_VEHICLE_ASSET(uint32_t p0) { rage::NativeInvoke::Invoke<0x3F5DB12BA017912F, uint32_t>(p0); } // 3F5DB12BA017912F 9620E9C6
	static void _0xBFA9FE814D364BC5(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xBFA9FE814D364BC5, uint32_t>(p0, p1); } // BFA9FE814D364BC5 88236E22
	static void ATTACH_VEHICLE_TO_TOW_TRUCK(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x1511BF52ECA48F55, uint32_t>(p0, p1, p2, p3, p4, p5); } // 1511BF52ECA48F55 8151571A
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE1B462BF1EEE86A3, uint32_t>(p0, p1); } // E1B462BF1EEE86A3 C666CF33
	static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA1593D2D8A42357B, BOOL>(p0); } // A1593D2D8A42357B 3BF93651
	static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x7FA9B9EC1CAEE692, BOOL>(p0, p1); } // 7FA9B9EC1CAEE692 9699CFDC
	static uint32_t GET_ENTITY_ATTACHED_TO_TOW_TRUCK(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD4674B673D8048B, uint32_t>(p0); } // D4674B673D8048B 11EC7844
	static uint32_t SET_VEHICLE_AUTOMATICALLY_ATTACHES(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xCDED36A388C5C6F3, uint32_t>(p0, p1, p2); } // CDED36A388C5C6F3 4273A8D3
	static void _0x23907B014F837B48(uint32_t p0, float p1, BOOL p2) { rage::NativeInvoke::Invoke<0x23907B014F837B48, uint32_t>(p0, p1, p2); } // 23907B014F837B48 ED23C8A3
	static void _0x9BEF801B0A929312(uint32_t p0, float p1, BOOL p2) { rage::NativeInvoke::Invoke<0x9BEF801B0A929312, uint32_t>(p0, p1, p2); } // 9BEF801B0A929312 B1A52EF7
	static void _0xEAA3C4889C3FA3CE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xEAA3C4889C3FA3CE, uint32_t>(p0, p1); } // EAA3C4889C3FA3CE F30C566F
	static void _0x758D26F289A36B55(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x758D26F289A36B55, uint32_t>(p0, p1); } // 758D26F289A36B55 A7DF64D7
	static void _0x2033787D1F77672C(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x2033787D1F77672C, uint32_t>(p0, p1); } // 2033787D1F77672C DD7936F5
	static uint32_t _0xF2AAB57248BA7736(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0xF2AAB57248BA7736, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // F2AAB57248BA7736 34E02FCD
	static void SET_VEHICLE_BURNOUT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7F4DBF81A64330DB, uint32_t>(p0, p1); } // 7F4DBF81A64330DB 9B6EF0EA
	static BOOL IS_VEHICLE_IN_BURNOUT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x40A898F321DE322A, BOOL>(p0); } // 40A898F321DE322A 6632BC12
	static void SET_VEHICLE_REDUCE_GRIP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5774326B6DEC114A, uint32_t>(p0, p1); } // 5774326B6DEC114A 90D3A0D9
	static void SET_VEHICLE_INDICATOR_LIGHTS(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x1CFFF7994271C44E, uint32_t>(p0, p1, p2); } // 1CFFF7994271C44E A6073B5D
	static void SET_VEHICLE_BRAKE_LIGHTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x229D259AC32C20C7, uint32_t>(p0, p1); } // 229D259AC32C20C7 6D9BA11E
	static void SET_VEHICLE_HANDBRAKE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7812650BCCF0DC2D, uint32_t>(p0, p1); } // 7812650BCCF0DC2D BA729A25
	static void _0x383F49040A255D78() { rage::NativeInvoke::Invoke<0x383F49040A255D78, uint32_t>(); } // 383F49040A255D78 37BC6ACB
	static BOOL _0x66CA9B9689E10C56() { return rage::NativeInvoke::Invoke<0x66CA9B9689E10C56, BOOL>(); } // 66CA9B9689E10C56 71D898EF
	static void _0x12119E96F64463E6(BOOL p0) { rage::NativeInvoke::Invoke<0x12119E96F64463E6, uint32_t>(p0); } // 12119E96F64463E6 0B0523B0
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xF978484FC39FCE8C, BOOL>(p0, p1); } // F978484FC39FCE8C AE84D758
	static void _0x8E04A46A40F8E353(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8E04A46A40F8E353, uint32_t>(p0, p1); } // 8E04A46A40F8E353 0B200CE2
	static void SET_VEHICLE_RUDDER_BROKEN(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0E418777D0676FD3A, uint32_t>(p0, p1); } // 0E418777D0676FD3A 3FAC3CD4
	static void _0xECAC65CC613B494A(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xECAC65CC613B494A, uint32_t>(p0, p1); } // ECAC65CC613B494A 0858678C
	static uint32_t _0xBE83BDE3FD937FB(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBE83BDE3FD937FB, uint32_t>(p0); } // BE83BDE3FD937FB 7D1A0616
	static float GET_VEHICLE_MAX_BRAKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE72C2B4E772BB2DB, float>(p0); } // E72C2B4E772BB2DB 03B926F6
	static float GET_VEHICLE_MAX_TRACTION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3B4E8A0AD25000F7, float>(p0); } // 3B4E8A0AD25000F7 7E5A1587
	static float GET_VEHICLE_ACCELERATION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4E99398467649989, float>(p0); } // 4E99398467649989 00478321
	static float _0xA69367DED5B00EAE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA69367DED5B00EAE, float>(p0); } // A69367DED5B00EAE 8F291C4A
	static float GET_VEHICLE_MODEL_MAX_BRAKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3AEBDA0A4A1A87D8, float>(p0); } // 3AEBDA0A4A1A87D8 7EF02883
	static float _0x9756F1A0186A3C19(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9756F1A0186A3C19, float>(p0); } // 9756F1A0186A3C19 F3A7293F
	static float GET_VEHICLE_MODEL_MAX_TRACTION(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBB4EC8D7C1E61BF7, float>(p0); } // BB4EC8D7C1E61BF7 7F985597
	static float GET_VEHICLE_MODEL_ACCELERATION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x91D3EE889899A137, float>(p0); } // 91D3EE889899A137 29CB3537
	static float _0x3611CA0FB9F1F0BE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3611CA0FB9F1F0BE, float>(p0); } // 3611CA0FB9F1F0BE 37FBA7BC
	static float _0xF4373FA641145995(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF4373FA641145995, float>(p0); } // F4373FA641145995 95BB67EB
	static float _0xB5F8459C2D3D7ACE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB5F8459C2D3D7ACE, float>(p0); } // B5F8459C2D3D7ACE 87C5D271
	static uint32_t _0x00C7399D60599739D(uint32_t p0) { return rage::NativeInvoke::Invoke<0x00C7399D60599739D, uint32_t>(p0); } // 00C7399D60599739D CE67162C
	static float GET_VEHICLE_CLASS_MAX_TRACTION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x269A13871F4F91CC, float>(p0); } // 269A13871F4F91CC 5B4FDC16
	static float GET_VEHICLE_CLASS_MAX_AGILITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x72A06F5F5DF641E7, float>(p0); } // 72A06F5F5DF641E7 45F2BD83
	static float GET_VEHICLE_CLASS_MAX_ACCELERATION(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD682543A2029D706, float>(p0); } // D682543A2029D706 3E220A9B
	static float GET_VEHICLE_CLASS_MAX_BRAKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCC56F70CC1B3C064, float>(p0); } // CC56F70CC1B3C064 D08CC1A5
	static uint32_t _0xA6FA78C13B14EFC2(float p0, float p1, float p2, float p3, float p4, BOOL p5) { return rage::NativeInvoke::Invoke<0xA6FA78C13B14EFC2, uint32_t>(p0, p1, p2, p3, p4, p5); } // A6FA78C13B14EFC2 D6685803
	static BOOL _0xFE6EA8CF0B9F002F(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE6EA8CF0B9F002F, BOOL>(p0); } // FE6EA8CF0B9F002F 0C0332A6
	static void _0xB932809AAF04620B(uint32_t p0) { rage::NativeInvoke::Invoke<0xB932809AAF04620B, uint32_t>(p0); } // B932809AAF04620B 6574041D
	static void _0xAB09A97ECC95CD9A(uint32_t p0) { rage::NativeInvoke::Invoke<0xAB09A97ECC95CD9A, uint32_t>(p0); } // AB09A97ECC95CD9A F8EC5751
	static BOOL IS_VEHICLE_SEARCHLIGHT_ON(uint32_t p0) { return rage::NativeInvoke::Invoke<0x590577929DE9C3BB, BOOL>(p0); } // 590577929DE9C3BB ADAF3513
	static void SET_VEHICLE_SEARCHLIGHT(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xF0B3AB259115809C, uint32_t>(p0, p1, p2); } // F0B3AB259115809C E2C0DD8A
	static BOOL _0xCA8508992C844A64(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3, BOOL p4) { return rage::NativeInvoke::Invoke<0xCA8508992C844A64, BOOL>(p0, p1, p2, p3, p4); } // CA8508992C844A64 AB0E79EB
	static BOOL _0x99398D846F3F81FE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x99398D846F3F81FE, BOOL>(p0, p1); } // 99398D846F3F81FE B3EB01ED
	static uint32_t GET_NUM_MOD_KITS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE85A2A6EE40ADA0, uint32_t>(p0); } // FE85A2A6EE40ADA0 E4903AA0
	static void SET_VEHICLE_MOD_KIT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB7A7C917CF0448E6, uint32_t>(p0, p1); } // B7A7C917CF0448E6 B8132158
	static uint32_t GET_VEHICLE_MOD_KIT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x23DC46514AADEDFC, uint32_t>(p0); } // 23DC46514AADEDFC 9FE60927
	static uint32_t GET_VEHICLE_MOD_KIT_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x346E832A02ADB742, uint32_t>(p0); } // 346E832A02ADB742 E5F76765
	static uint32_t GET_VEHICLE_WHEEL_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7650202B3E229E02, uint32_t>(p0); } // 7650202B3E229E02 DA58D7AE
	static void SET_VEHICLE_WHEEL_TYPE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3B1F287A5A67026D, uint32_t>(p0, p1); } // 3B1F287A5A67026D 64BDAAAD
	static uint32_t _0x536132A42AC9F3DE(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x536132A42AC9F3DE, uint32_t>(p0, p1); } // 536132A42AC9F3DE 73722CD9
	static void SET_VEHICLE_MOD_COLOR_1(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xAB57EBB1ECD365FC, uint32_t>(p0, p1, p2, p3); } // AB57EBB1ECD365FC CBE9A54D
	static void SET_VEHICLE_MOD_COLOR_2(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xBB6D9642821B71A1, uint32_t>(p0, p1, p2); } // BB6D9642821B71A1 C32613C2
	static void GET_VEHICLE_MOD_COLOR_1(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x46F07AD60AAB0637, uint32_t>(p0, p1, p2, p3); } // 46F07AD60AAB0637 E625510A
	static void GET_VEHICLE_MOD_COLOR_2(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x809B5FC0DB3D37C2, uint32_t>(p0, p1, p2); } // 809B5FC0DB3D37C2 9B76BB8E
	static uint32_t _0x664C51CC97C40270(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x664C51CC97C40270, uint32_t>(p0, p1); } // 664C51CC97C40270 9A0840FD
	static uint32_t _0x837A0E7B64B2EC50(uint32_t p0) { return rage::NativeInvoke::Invoke<0x837A0E7B64B2EC50, uint32_t>(p0); } // 837A0E7B64B2EC50 9BDC0B49
	static BOOL _0xDF21CABCD0FD4913(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDF21CABCD0FD4913, BOOL>(p0); } // DF21CABCD0FD4913 112D637A
	static void SET_VEHICLE_MOD(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x5D4B50E2007354F0, uint32_t>(p0, p1, p2, p3); } // 5D4B50E2007354F0 B52E5ED5
	static uint32_t GET_VEHICLE_MOD(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x892B3EDA66236D64, uint32_t>(p0, p1); } // 892B3EDA66236D64 DC520069
	static uint32_t GET_VEHICLE_MOD_VARIATION(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x194DFCDAD36ABECC, uint32_t>(p0, p1); } // 194DFCDAD36ABECC C1B92003
	static uint32_t GET_NUM_VEHICLE_MODS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xDA0BED5AABEFFBCF, uint32_t>(p0, p1); } // DA0BED5AABEFFBCF 8A814FF9
	static void REMOVE_VEHICLE_MOD(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xEB013E50B9C4917A, uint32_t>(p0, p1); } // EB013E50B9C4917A 9CC80A43
	static void TOGGLE_VEHICLE_MOD(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xA157CC58CEE29910, uint32_t>(p0, p1, p2); } // A157CC58CEE29910 D095F811
	static BOOL IS_TOGGLE_MOD_ON(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x44C699E5DC7A51EA, BOOL>(p0, p1); } // 44C699E5DC7A51EA F0E1689F
	static uint32_t GET_MOD_TEXT_LABEL(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xF1BAAAC0BE911525, uint32_t>(p0, p1, p2); } // F1BAAAC0BE911525 0BA39CA7
	static uint32_t GET_MOD_SLOT_NAME(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA9232741BBFA5E2B, uint32_t>(p0, p1); } // A9232741BBFA5E2B 5E113483
	static uint32_t GET_LIVERY_NAME(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xFE0D0A6A60696667, uint32_t>(p0, p1); } // FE0D0A6A60696667 ED80B5BE
	static uint32_t GET_VEHICLE_MOD_MODIFIER_VALUE(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x1658847BBD27C6B1, uint32_t>(p0, p1, p2); } // 1658847BBD27C6B1 73AE5505
	static uint32_t _0xB22275A4F948C356(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xB22275A4F948C356, uint32_t>(p0, p1, p2); } // B22275A4F948C356 94850968
	static void PRELOAD_VEHICLE_MOD(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x8F179C57E8564697, uint32_t>(p0, p1, p2); } // 8F179C57E8564697 6EA5F4A8
	static BOOL HAS_PRELOAD_MODS_FINISHED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x08812127E3B0608, BOOL>(p0); } // 08812127E3B0608 A8A0D246
	static void RELEASE_PRELOAD_MODS(uint32_t p0) { rage::NativeInvoke::Invoke<0x418C34F506EAB4F9, uint32_t>(p0); } // 418C34F506EAB4F9 D442521F
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xBB5E99AAAB5C5476, uint32_t>(p0, p1, p2, p3); } // BB5E99AAAB5C5476 3EDEC0DB
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x8239CD0D53DFB0BC, uint32_t>(p0, p1, p2, p3); } // 8239CD0D53DFB0BC 75280015
	static void SET_VEHICLE_WINDOW_TINT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE181A03438FED412, uint32_t>(p0, p1); } // E181A03438FED412 497C8787
	static uint32_t GET_VEHICLE_WINDOW_TINT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0612606EF85B26EA, uint32_t>(p0); } // 0612606EF85B26EA 13D53892
	static uint32_t _0x935562E00D97FB73() { return rage::NativeInvoke::Invoke<0x935562E00D97FB73, uint32_t>(); } // 935562E00D97FB73 625C7B66
	static void GET_VEHICLE_COLOR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0xFD66225D50193B2F, uint32_t>(p0, p1, p2, p3); } // FD66225D50193B2F 03BC8F1B
	static uint32_t _0x8BDABCCD10099E14(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8BDABCCD10099E14, uint32_t>(p0); } // 8BDABCCD10099E14 749DEEA2
	static uint32_t GET_VEHICLE_CAUSE_OF_DESTRUCTION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x75A0224E92FC3A1A, uint32_t>(p0); } // 75A0224E92FC3A1A 7F8C20DD
	static BOOL _0x9B15BB547A1A5C04(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9B15BB547A1A5C04, BOOL>(p0); } // 9B15BB547A1A5C04 A0777943
	static BOOL _0xAC273612FDC05B55(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAC273612FDC05B55, BOOL>(p0); } // AC273612FDC05B55 F178390B
	static void _0xCB92FE91E2240DB9(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xCB92FE91E2240DB9, uint32_t>(p0, p1); } // CB92FE91E2240DB9 E943B09C
	static void _0x7B3BEF7A36F8E662(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7B3BEF7A36F8E662, uint32_t>(p0, p1); } // 7B3BEF7A36F8E662 DF594D8D
	static void _0x5151070C2E5BF9FC(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5151070C2E5BF9FC, uint32_t>(p0, p1); } // 5151070C2E5BF9FC 4D840FC4
	static uint32_t _0x7493269FB983F6A7(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return rage::NativeInvoke::Invoke<0x7493269FB983F6A7, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 7493269FB983F6A7 5AB26C2B
	static void _0x86EB14ED408A0D53(uint32_t p0) { rage::NativeInvoke::Invoke<0x86EB14ED408A0D53, uint32_t>(p0); } // 86EB14ED408A0D53 EF05F807
	static BOOL _0x8E7C44AC47EC6DBF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8E7C44AC47EC6DBF, BOOL>(p0); } // 8E7C44AC47EC6DBF D656E7E5
	static void _0xA994C47AB8403393(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xA994C47AB8403393, uint32_t>(p0, p1); } // A994C47AB8403393 642DA5AA
	static void _0x0F17C1232FE70C3D1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0F17C1232FE70C3D1, uint32_t>(p0, p1); } // 0F17C1232FE70C3D1 04F5546C
	static void SET_VEHICLE_IS_WANTED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7E6050AB562A74F2, uint32_t>(p0, p1); } // 7E6050AB562A74F2 DAA388E8
	static void _0xEC6326D5743CD803(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xEC6326D5743CD803, uint32_t>(p0, p1); } // EC6326D5743CD803 A25CCB8C
	static void _0xE5791767233A3F63(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE5791767233A3F63, uint32_t>(p0, p1); } // E5791767233A3F63 00966934
	static void _0x03D196D291B7B1716(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x03D196D291B7B1716, uint32_t>(p0, p1); } // 03D196D291B7B1716 113DF5FD
	static float _0xB338D071B6FF5D0C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB338D071B6FF5D0C, float>(p0); } // B338D071B6FF5D0C 7C8D6464
	static void DISABLE_PLANE_AILERON(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x3F1A364DD933FE4C, uint32_t>(p0, p1, p2); } // 3F1A364DD933FE4C 7E84C45C
	static BOOL _0x8069215141D4E926(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8069215141D4E926, BOOL>(p0); } // 8069215141D4E926 7DC6D022
	static void _0xE6BB236B6FE7502D(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE6BB236B6FE7502D, uint32_t>(p0, p1); } // E6BB236B6FE7502D A03E42DF
	static void _0xD3D3EB608150FE2(uint32_t p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xD3D3EB608150FE2, uint32_t>(p0, p1, p2); } // D3D3EB608150FE2 15D40761
	static void _0xBA20637A88AFB259(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xBA20637A88AFB259, uint32_t>(p0, p1); } // BA20637A88AFB259 1984F88D
	static void _0x87720A29837F2E7(uint32_t p0) { rage::NativeInvoke::Invoke<0x87720A29837F2E7, uint32_t>(p0); } // 87720A29837F2E7 3FBE904F
	static void _0x4DCAE2A736FC1726(uint32_t p0) { rage::NativeInvoke::Invoke<0x4DCAE2A736FC1726, uint32_t>(p0); } // 4DCAE2A736FC1726 D1B71A25
	static uint32_t _0xA83D16728734CEAB() { return rage::NativeInvoke::Invoke<0xA83D16728734CEAB, uint32_t>(); } // A83D16728734CEAB FEB0C0C8
	static void _0x0E923ADCA1B4CD031(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0E923ADCA1B4CD031, uint32_t>(p0, p1); } // 0E923ADCA1B4CD031 08CD58F9
	static void _0x7C76B3DBC3FC45F8(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x7C76B3DBC3FC45F8, uint32_t>(p0, p1); } // 7C76B3DBC3FC45F8 8C4B63E2
	static void SET_VEHICLE_LOD_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xDAFFEDA410DDC991, uint32_t>(p0, p1); } // DAFFEDA410DDC991 569E5AE3
	static void _0xB5168D28656DA503(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB5168D28656DA503, uint32_t>(p0, p1); } // B5168D28656DA503 1604C2F5
	static uint32_t _0xC6F86F97D17D6BAA(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC6F86F97D17D6BAA, uint32_t>(p0); } // C6F86F97D17D6BAA 8CDB0C09
	static uint32_t _0x89CF747B07C4FCAE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x89CF747B07C4FCAE, uint32_t>(p0); } // 89CF747B07C4FCAE ABC99E21
	static void _0x41B122A99F870561(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x41B122A99F870561, uint32_t>(p0, p1); } // 41B122A99F870561 900C878C
	static void _0x960956EA6A951627(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x960956EA6A951627, uint32_t>(p0, p1); } // 960956EA6A951627 B3200F72
	static void _0x4CBCC2C2638F6964(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4CBCC2C2638F6964, uint32_t>(p0, p1); } // 4CBCC2C2638F6964 BAE491C7
	static void _0x21D20E951651F9F3() { rage::NativeInvoke::Invoke<0x21D20E951651F9F3, uint32_t>(); } // 21D20E951651F9F3 F0E59BC1
	static void _0xEC39D53B6BA82672(float p0) { rage::NativeInvoke::Invoke<0xEC39D53B6BA82672, uint32_t>(p0); } // EC39D53B6BA82672 929801C6
	static void SET_VEHICLE_SHOOT_AT_TARGET(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0xA2028BFEB72ADDBC, uint32_t>(p0, p1, p2, p3, p4); } // A2028BFEB72ADDBC 2343FFDF
	static BOOL _0x85E1A20D909E2DB1(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x85E1A20D909E2DB1, BOOL>(p0, p1); } // 85E1A20D909E2DB1 4A557117
	static void _0xC81706AA1BDD3E06(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC81706AA1BDD3E06, uint32_t>(p0, p1); } // C81706AA1BDD3E06 E0FC6A32
	static void _0x15AB8AF256F50E6B(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x15AB8AF256F50E6B, uint32_t>(p0, p1); } // 15AB8AF256F50E6B 7D0DE7EA
	static uint32_t GET_VEHICLE_PLATE_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF67883FDEB2C5518, uint32_t>(p0); } // F67883FDEB2C5518 65CA9286
	static void TRACK_VEHICLE_VISIBILITY(uint32_t p0) { rage::NativeInvoke::Invoke<0x54E7B67452327959, uint32_t>(p0); } // 54E7B67452327959 78122DC1
	static BOOL IS_VEHICLE_VISIBLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAEFA676AB984E73A, BOOL>(p0); } // AEFA676AB984E73A 7E0D6056
	static void SET_VEHICLE_GRAVITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6A8CFDEE34426378, uint32_t>(p0, p1); } // 6A8CFDEE34426378 07B2A6DC
	static void _0xDA23DF6D369857A3(BOOL p0) { rage::NativeInvoke::Invoke<0xDA23DF6D369857A3, uint32_t>(p0); } // DA23DF6D369857A3 D2B8ACBD
	static uint32_t _0xEF9F7A80FA543DCC(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEF9F7A80FA543DCC, uint32_t>(p0); } // EF9F7A80FA543DCC A4A75FCF
	static void _0x067DA19CC82FDD598(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x067DA19CC82FDD598, uint32_t>(p0, p1); } // 067DA19CC82FDD598 50F89338
	static void _0xEEB83DBFD640C824(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEEB83DBFD640C824, uint32_t>(p0, p1); } // EEB83DBFD640C824 EB7D7C27
	static BOOL _0x5289273441068327(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5289273441068327, BOOL>(p0); } // 5289273441068327 5EB00A6A
	static void _0x5AAD91AB1306C46D(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5AAD91AB1306C46D, uint32_t>(p0, p1); } // 5AAD91AB1306C46D 081DAC12
	static void _0xBA0C954BE649527A(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xBA0C954BE649527A, uint32_t>(p0, p1, p2); } // BA0C954BE649527A 5BD8D82D
	static void _0xDC238E9FB8387BA9(uint32_t p0) { rage::NativeInvoke::Invoke<0xDC238E9FB8387BA9, uint32_t>(p0); } // DC238E9FB8387BA9 450AD03A
	static BOOL _0xE72A4DAD5B1689BE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE72A4DAD5B1689BE, BOOL>(p0); } // E72A4DAD5B1689BE BD085DCA
	static BOOL _0x1D554EF8AC0C9CD8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1D554EF8AC0C9CD8, BOOL>(p0); } // 1D554EF8AC0C9CD8 ABBDD5C6
	static void _0x095F0524EC2321783(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x095F0524EC2321783, uint32_t>(p0, p1); } // 095F0524EC2321783 9B581DE7
	static BOOL IS_VEHICLE_STOLEN(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE579AAF18C374AC, BOOL>(p0); } // FE579AAF18C374AC 20B61DDE
	static void SET_VEHICLE_IS_STOLEN(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x464A1A49361CDE18, uint32_t>(p0, p1); } // 464A1A49361CDE18 70912E42
	static void _0x3434D4AA7555C54C(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x3434D4AA7555C54C, uint32_t>(p0, p1); } // 3434D4AA7555C54C ED159AE6
	static BOOL _0x8D770EBA5B1B0101(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8D770EBA5B1B0101, BOOL>(p0); } // 8D770EBA5B1B0101 AF8CB3DF
	static void _0x632C6A73C8F25F0C(uint32_t p0) { rage::NativeInvoke::Invoke<0x632C6A73C8F25F0C, uint32_t>(p0); } // 632C6A73C8F25F0C 45F72495
	static void DETACH_VEHICLE_FROM_CARGOBOB(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x02CC89657300D2B64, uint32_t>(p0, p1); } // 02CC89657300D2B64 83D3D331
	static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA253E3933F868783, BOOL>(p0); } // A253E3933F868783 50E0EABE
	static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA89E36906A28895D, BOOL>(p0, p1); } // A89E36906A28895D 5DEEC76C
	static uint32_t GET_VEHICLE_ATTACHED_TO_CARGOBOB(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEDBD27E7EA93FB0F, uint32_t>(p0); } // EDBD27E7EA93FB0F 301A1D24
	static void ATTACH_VEHICLE_TO_CARGOBOB(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x44D3AD547AC63124, uint32_t>(p0, p1, p2, p3, p4, p5); } // 44D3AD547AC63124 607DC9D5
	static Vector3 _0xE00234CC4F002AB8(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE00234CC4F002AB8, Vector3>(p0); } // E00234CC4F002AB8
	static BOOL _0x29753C26F80C767B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x29753C26F80C767B, BOOL>(p0); } // 29753C26F80C767B AF769B81
	static void _0xA6C79F8D4D356396(uint32_t p0) { rage::NativeInvoke::Invoke<0xA6C79F8D4D356396, uint32_t>(p0); } // A6C79F8D4D356396 4D3C9A99
	static void GET_CLOSEST_VEHICLE_TURNING_BLOODSPRAY(uint32_t p0) { rage::NativeInvoke::Invoke<0x77A9AC7B94B5BB2A, uint32_t>(p0); } // 77A9AC7B94B5BB2A A8211EE9
	static void GET_VEHICLE_HAS_BACK_RECURSIVE(uint32_t p0, float p1, float p2, BOOL p3) { rage::NativeInvoke::Invoke<0x67884AB0AACAAB30, uint32_t>(p0, p1, p2, p3); } // 67884AB0AACAAB30 3A8AB081
	static BOOL DOES_VEHICLE_HAVE_WEAPONS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCEE115C93A00DD08, BOOL>(p0); } // CEE115C93A00DD08 B2E1E1FB
	static void _0xEF593E0776DEC46F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEF593E0776DEC46F, uint32_t>(p0, p1); } // EF593E0776DEC46F 2EC19A8B
	static void DISABLE_VEHICLE_WEAPON(BOOL p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xEA3D69B3C799A5A5, uint32_t>(p0, p1, p2, p3); } // EA3D69B3C799A5A5 A688B7D1
	static void _0xB8C724B62CAD8B88(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB8C724B62CAD8B88, uint32_t>(p0, p1); } // B8C724B62CAD8B88 123E5B90
	static void _0xFE1272B9313C38F7(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFE1272B9313C38F7, uint32_t>(p0, p1); } // FE1272B9313C38F7 EBC225C1
	static uint32_t GET_VEHICLE_CLASS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDE9EA0A157B88C9F, uint32_t>(p0); } // DE9EA0A157B88C9F C025338E
	static uint32_t GET_VEHICLE_CLASS_FROM_NAME(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD8F4BF4B195C3E7E, uint32_t>(p0); } // D8F4BF4B195C3E7E EA469980
	static void SET_PLAYERS_LAST_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0x47167CB086F25EEA, uint32_t>(p0); } // 47167CB086F25EEA DE86447D
	static void _0x28560775F6AAFE23(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x28560775F6AAFE23, uint32_t>(p0, p1); } // 28560775F6AAFE23 5130DB1E
	static void _0x87DC225C22879140(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x87DC225C22879140, uint32_t>(p0, p1); } // 87DC225C22879140 B6BE07E0
	static void _0x064D8A8521BE8A093(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x064D8A8521BE8A093, uint32_t>(p0, p1); } // 064D8A8521BE8A093 4BB5605D
	static void _0x4F5059898B3587C(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4F5059898B3587C, uint32_t>(p0, p1); } // 4F5059898B3587C 51E0064F
	static void _0xFB7776FBE674C887(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFB7776FBE674C887, uint32_t>(p0, p1); } // FB7776FBE674C887
	static void _0xFCED9D0DBA285B55(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFCED9D0DBA285B55, uint32_t>(p0, p1); } // FCED9D0DBA285B55 AEF9611C
	static void _0x63DD3B213F2C0B81(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x63DD3B213F2C0B81, uint32_t>(p0, p1); } // 63DD3B213F2C0B81 585E49B6
	static void _0x3925840FDE5A42E0(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x3925840FDE5A42E0, uint32_t>(p0, p1); } // 3925840FDE5A42E0 6E67FD35
	static void SET_VEHICLE_FRICTION_OVERRIDE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xA5812DF7B62DF8E1, uint32_t>(p0, p1); } // A5812DF7B62DF8E1 32AFD42E
	static void SET_VEHICLE_MAX_STR_TRAP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE9D3C37CF76A0473, uint32_t>(p0, p1); } // E9D3C37CF76A0473 670913A4
	static void GET_VEHICLE_DEFORMATION_GET_TREE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x3EAC78A11B59A8B, uint32_t>(p0, p1); } // 3EAC78A11B59A8B 98A10A86
	static void _0xC62E422BAF266781(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC62E422BAF266781, uint32_t>(p0, p1); } // C62E422BAF266781 BC649C49
	static void _0x68B365A0FD9E0B7B(uint32_t p0) { rage::NativeInvoke::Invoke<0x68B365A0FD9E0B7B, uint32_t>(p0); } // 68B365A0FD9E0B7B 8DD9AA0C
	static uint32_t DOES_VEHICLE_EXIST_WITH_DECORATOR(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x86316CADCE37033B, uint32_t>(p0); } // 86316CADCE37033B 39E68EDD
	static void _0x5E5BB71B5F3B933B(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5E5BB71B5F3B933B, uint32_t>(p0, p1); } // 5E5BB71B5F3B933B AA8BD440
	static void _0x2238234EE09F4669(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x2238234EE09F4669, uint32_t>(p0, p1, p2); } // 2238234EE09F4669
	static void _0x890433DA96DA9000(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x890433DA96DA9000, uint32_t>(p0, p1); } // 890433DA96DA9000
	static void _0xA4E0A95191DE44C2(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA4E0A95191DE44C2, uint32_t>(p0, p1); } // A4E0A95191DE44C2
	static void _0x3AC1D8BBACC66332(BOOL p0) { rage::NativeInvoke::Invoke<0x3AC1D8BBACC66332, uint32_t>(p0); } // 3AC1D8BBACC66332 B5CC548B
	static void _0x51A9720CD1E345DB(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x51A9720CD1E345DB, uint32_t>(p0, p1, p2, p3); } // 51A9720CD1E345DB
	static void _0xF5E00BA0DEA3A55A(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0xF5E00BA0DEA3A55A, uint32_t>(p0, p1, p2, p3); } // F5E00BA0DEA3A55A
	static void _0x64FB83DE98A88D4A(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x64FB83DE98A88D4A, uint32_t>(p0, p1, p2); } // 64FB83DE98A88D4A
	static BOOL _0xD9DD35FE09967D1F(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xD9DD35FE09967D1F, BOOL>(p0, p1); } // D9DD35FE09967D1F
	static void _0x25F353877FB46EC6(BOOL p0) { rage::NativeInvoke::Invoke<0x25F353877FB46EC6, uint32_t>(p0); } // 25F353877FB46EC6
	static void _0x6E1F17D714C2BDCD(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6E1F17D714C2BDCD, uint32_t>(p0, p1); } // 6E1F17D714C2BDCD
	static void _0x2EAA7BDDEAA4BBB9(uint32_t p0) { rage::NativeInvoke::Invoke<0x2EAA7BDDEAA4BBB9, uint32_t>(p0); } // 2EAA7BDDEAA4BBB9
	static float _0x43B189EDC141B10F(uint32_t p0) { return rage::NativeInvoke::Invoke<0x43B189EDC141B10F, float>(p0); } // 43B189EDC141B10F 2B2FCC28
	static void _0x50F5E8CCDB56D46F(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x50F5E8CCDB56D46F, uint32_t>(p0, p1); } // 50F5E8CCDB56D46F 920C2517
	static void _0xC12F158FCF93E148(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xC12F158FCF93E148, uint32_t>(p0, p1, p2); } // C12F158FCF93E148
	static float _0x5F4D2CE3D6F7FDB3(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5F4D2CE3D6F7FDB3, float>(p0); } // 5F4D2CE3D6F7FDB3 B73A1486
	static void _0xE847B12B9FE6E806(float p0) { rage::NativeInvoke::Invoke<0xE847B12B9FE6E806, uint32_t>(p0); } // E847B12B9FE6E806
	static void _0x79E406E0D865C5EC(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x79E406E0D865C5EC, uint32_t>(p0, p1); } // 79E406E0D865C5EC
}

namespace OBJECT
{
	static uint32_t CREATE_OBJECT(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6) { return rage::NativeInvoke::Invoke<0xCEC985247737A30E, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // CEC985247737A30E 2F7AA05C
	static uint32_t CREATE_OBJECT_NO_OFFSET(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6) { return rage::NativeInvoke::Invoke<0xD5699E0F473613BB, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // D5699E0F473613BB 58040420
	static void DELETE_OBJECT(uint32_t *p0) { rage::NativeInvoke::Invoke<0x4095FD029041DD48, uint32_t>(p0); } // 4095FD029041DD48 D6EF9DA7
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC780BE928551FBA3, BOOL>(p0); } // C780BE928551FBA3 8F95A20B
	static BOOL SLIDE_OBJECT(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return rage::NativeInvoke::Invoke<0x9E2DCADD0682D80, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // 9E2DCADD0682D80 63BFA7A0
	static void SET_OBJECT_TARGETTABLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x908207D40B588280, uint32_t>(p0, p1); } // 908207D40B588280 3F88CD86
	static void _0xF4B77EB64DBE71C5(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF4B77EB64DBE71C5, uint32_t>(p0, p1); } // F4B77EB64DBE71C5 483C5C88
	static uint32_t GET_CLOSEST_OBJECT_OF_TYPE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x78608A3628DF265E, uint32_t>(p0, p1, p2, p3, p4, p5); } // 78608A3628DF265E 45619B33
	static BOOL HAS_OBJECT_BEEN_BROKEN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x74DEF5421E666A8A, BOOL>(p0); } // 74DEF5421E666A8A FE21F891
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x4BE4F5AA0A8BA74B, BOOL>(p0, p1, p2, p3, p4, p5); } // 4BE4F5AA0A8BA74B 6FC0353D
	static BOOL _0xBB39DF56191578AC(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0xBB39DF56191578AC, BOOL>(p0, p1, p2, p3, p4, p5); } // BB39DF56191578AC 7DB578DD
	static Vector3 _0xDA0070A0FA486D72(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0xDA0070A0FA486D72, Vector3>(p0, p1, p2, p3, p4, p5, p6); } // DA0070A0FA486D72 87A42A12
	static uint32_t _0x74DC7E6FCD7835B4(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x74DC7E6FCD7835B4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 74DC7E6FCD7835B4 65213FC3
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint32_t p0, float p1, float p2, float p3, BOOL p4, float p5, BOOL p6) { rage::NativeInvoke::Invoke<0x460FF6F9E3EECC69, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 460FF6F9E3EECC69 38C951A4
	static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint32_t p0, float p1, float p2, float p3, uint32_t *p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0x97F80A59AB9D636B, uint32_t>(p0, p1, p2, p3, p4, p5); } // 97F80A59AB9D636B 4B44A83D
	static void _0x1CD43CFDD3B0B347(uint32_t p0, float p1, float p2, float p3, BOOL p4, float p5, float p6, float p7) { rage::NativeInvoke::Invoke<0x1CD43CFDD3B0B347, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 1CD43CFDD3B0B347 4E0A260B
	static void _0x47AAC79564A8EB7(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x47AAC79564A8EB7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 47AAC79564A8EB7 9D2D778D
	static void _0xC0693A4E5A09EA40(uint32_t p0) { rage::NativeInvoke::Invoke<0xC0693A4E5A09EA40, uint32_t>(p0); } // C0693A4E5A09EA40 00253286
	static void _0x9D9DF796E80DD27E(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x9D9DF796E80DD27E, uint32_t>(p0, p1, p2, p3); } // 9D9DF796E80DD27E DF83DB47
	static uint32_t _0xE1750C23202FC256(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE1750C23202FC256, uint32_t>(p0); } // E1750C23202FC256 D42A41C2
	static uint32_t _0x242ADC22B164B093(uint32_t p0) { return rage::NativeInvoke::Invoke<0x242ADC22B164B093, uint32_t>(p0); } // 242ADC22B164B093 D649B7E1
	static void _0x07B52121AC6D961DB(uint32_t p0, float p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x07B52121AC6D961DB, uint32_t>(p0, p1, p2, p3); } // 07B52121AC6D961DB 4F44AF21
	static void _0x9CDA01A72E31F0FA(uint32_t p0, float p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x9CDA01A72E31F0FA, uint32_t>(p0, p1, p2, p3); } // 9CDA01A72E31F0FA 47531446
	static void _0xDA14050EE6A337B7(uint32_t p0, float p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0xDA14050EE6A337B7, uint32_t>(p0, p1, p2, p3); } // DA14050EE6A337B7 34883DE3
	static float _0x1F0F9203A3EBA8B9(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1F0F9203A3EBA8B9, float>(p0); } // 1F0F9203A3EBA8B9 B74C3BD7
	static void _0xF5390315F79F4262(uint32_t p0, BOOL p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0xF5390315F79F4262, uint32_t>(p0, p1, p2, p3); } // F5390315F79F4262 B4A9A558
	static void _0x10F572BE0BC32042(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x10F572BE0BC32042, uint32_t>(p0, p1); } // 10F572BE0BC32042 ECE58AE0
	static void _0xD00B1EF6D4694DAC(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD00B1EF6D4694DAC, uint32_t>(p0, p1); } // D00B1EF6D4694DAC F736227C
	static BOOL _0x494E5E4C0E87278(uint32_t p0) { return rage::NativeInvoke::Invoke<0x494E5E4C0E87278, BOOL>(p0); } // 494E5E4C0E87278 5AFCD8A1
	static BOOL IS_DOOR_CLOSED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE02451F946C36866, BOOL>(p0); } // E02451F946C36866 48659CD7
	static void _0x2E4B0FF8AB92C441(BOOL p0) { rage::NativeInvoke::Invoke<0x2E4B0FF8AB92C441, uint32_t>(p0); } // 2E4B0FF8AB92C441 9BF33E41
	static void _0xE92BA274A38A886E() { rage::NativeInvoke::Invoke<0xE92BA274A38A886E, uint32_t>(); } // E92BA274A38A886E F592AD10
	static BOOL _0xC554BC20AA572C65(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC554BC20AA572C65, BOOL>(p0); } // C554BC20AA572C65 17FF9393
	static BOOL _0xAC983D1173C7DDE1(float p0, float p1, float p2, uint32_t p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xAC983D1173C7DDE1, BOOL>(p0, p1, p2, p3, p4); } // AC983D1173C7DDE1 E9AE494F
	static BOOL IS_GARAGE_EMPTY(uint32_t p0, BOOL p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xBC4AF4A3E5D31AB3, BOOL>(p0, p1, p2); } // BC4AF4A3E5D31AB3 A8B37DEA
	static BOOL _0x0E672E0A3F64FFA5(uint32_t p0, uint32_t p1, float p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x0E672E0A3F64FFA5, BOOL>(p0, p1, p2, p3); } // 0E672E0A3F64FFA5 C33ED360
	static BOOL _0x13956EF6168B4D82(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x13956EF6168B4D82, BOOL>(p0, p1, p2); } // 13956EF6168B4D82 41924877
	static BOOL _0x86E4029E8A464607(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0x86E4029E8A464607, BOOL>(p0, p1, p2, p3, p4); } // 86E4029E8A464607 4BD59750
	static BOOL _0x3DF4DF064F265800(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0x3DF4DF064F265800, BOOL>(p0, p1, p2, p3, p4); } // 3DF4DF064F265800 7B44D659
	static BOOL _0x95360860AF57F540(uint32_t p0, uint32_t p1, float p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x95360860AF57F540, BOOL>(p0, p1, p2, p3); } // 95360860AF57F540 142C8F76
	static BOOL _0x693C3E5B5FD2274(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x693C3E5B5FD2274, BOOL>(p0, p1, p2); } // 693C3E5B5FD2274 95A9AB2B
	static void _0x76FA8586F3F5B777(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0x76FA8586F3F5B777, uint32_t>(p0, p1, p2, p3, p4); } // 76FA8586F3F5B777 A565E27E
	static void _0xB5CD732E5D57335F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB5CD732E5D57335F, uint32_t>(p0, p1); } // B5CD732E5D57335F 43BB7E48
	static void _0xD949729FC0AF3248() { rage::NativeInvoke::Invoke<0xD949729FC0AF3248, uint32_t>(); } // D949729FC0AF3248 6158959E
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float p0, float p1, float p2, float p3, uint32_t p4, BOOL p5) { return rage::NativeInvoke::Invoke<0x93EADDF7E52E1671, BOOL>(p0, p1, p2, p3, p4, p5); } // 93EADDF7E52E1671 23FF2BA4
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return rage::NativeInvoke::Invoke<0x65EC44693BF9CB43, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 65EC44693BF9CB43 73BCFFDC
	static void _0x817D46CED971A3C3(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x817D46CED971A3C3, uint32_t>(p0, p1); } // 817D46CED971A3C3 19B17769
	static void SET_OBJECT_PHYSICS_PARAMS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { rage::NativeInvoke::Invoke<0x9547DA0F3BA0C9C4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 9547DA0F3BA0C9C4 E8D11C58
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x3735E22AB80C6902, float>(p0, p1); } // 3735E22AB80C6902 F0B330AD
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC3C2903A62F202C5, uint32_t>(p0, p1); } // C3C2903A62F202C5 3E263AE1
	static BOOL IS_ANY_OBJECT_NEAR_POINT(float p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x3D4E28BCE4C60954, BOOL>(p0, p1, p2, p3, p4); } // 3D4E28BCE4C60954 E9E46941
	static BOOL IS_OBJECT_NEAR_POINT(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x47B746365AD99ED1, BOOL>(p0, p1, p2, p3, p4); } // 47B746365AD99ED1 50A62C43
	static void _0xD652BD009496F421(uint32_t p0) { rage::NativeInvoke::Invoke<0xD652BD009496F421, uint32_t>(p0); } // D652BD009496F421 E3261B35
	static void _0x487D912F69CDACB6(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x487D912F69CDACB6, uint32_t>(p0, p1, p2); } // 487D912F69CDACB6 1E82C2AE
	static void _0xB992A4CA741F9663(uint32_t p0) { rage::NativeInvoke::Invoke<0xB992A4CA741F9663, uint32_t>(p0); } // B992A4CA741F9663
	static void TRACK_OBJECT_VISIBILITY(uint32_t p0) { rage::NativeInvoke::Invoke<0xF30B2A027AD7244C, uint32_t>(p0); } // F30B2A027AD7244C 46D06B9A
	static BOOL IS_OBJECT_VISIBLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5F6DACBDBCB51121, BOOL>(p0); } // 5F6DACBDBCB51121 F4FD8AE4
	static void _0x80F0DC008199B220(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x80F0DC008199B220, uint32_t>(p0, p1); } // 80F0DC008199B220 F4A1A14A
	static void _0xC78A8CB9F2F5EA32(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC78A8CB9F2F5EA32, uint32_t>(p0, p1); } // C78A8CB9F2F5EA32 AF016CC1
	static void _0xB3D88F2B80DD36A1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB3D88F2B80DD36A1, uint32_t>(p0, p1); } // B3D88F2B80DD36A1 3A68AA46
	static uint32_t _0xCF09B28F3F88F4A2(float p0, float p1, float p2, float p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xCF09B28F3F88F4A2, uint32_t>(p0, p1, p2, p3, p4); } // CF09B28F3F88F4A2 A286DE96
	static void _0xCE30B2ED864F51C2(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCE30B2ED864F51C2, uint32_t>(p0, p1); } // CE30B2ED864F51C2 21F51560
	static uint32_t _0x9D3DEC1AC03F824C(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9D3DEC1AC03F824C, uint32_t>(p0); } // 9D3DEC1AC03F824C F1B8817A
	static BOOL _0x2EAEFE87D100B20F(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2EAEFE87D100B20F, BOOL>(p0); } // 2EAEFE87D100B20F E08C834D
	static float _0x19560E452B054D33(uint32_t p0) { return rage::NativeInvoke::Invoke<0x19560E452B054D33, float>(p0); } // 19560E452B054D33 020497DE
	static uint32_t CREATE_PICKUP(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, BOOL p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x134AE1EC4D58EAE4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 134AE1EC4D58EAE4 5E14DF68
	static uint32_t CREATE_PICKUP_ROTATE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9, BOOL p10, uint32_t p11) { return rage::NativeInvoke::Invoke<0xD55FB1F137D220, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // D55FB1F137D220 F015BFE2
	static uint32_t CREATE_AMBIENT_PICKUP(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6, BOOL p7, BOOL p8) { return rage::NativeInvoke::Invoke<0xD5C2A73D33CEF9D5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // D5C2A73D33CEF9D5 17B99CE7
	static uint32_t CREATE_PORTABLE_PICKUP(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0xA25854DB0CE2EB95, uint32_t>(p0, p1, p2, p3, p4, p5); } // A25854DB0CE2EB95 8C886BE5
	static uint32_t _0x56F745470B5C8E6(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x56F745470B5C8E6, uint32_t>(p0, p1, p2, p3, p4, p5); } // 56F745470B5C8E6 56A02502
	static void ATTACH_PORTABLE_PICKUP_TO_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF19CA86BBE9184EB, uint32_t>(p0, p1); } // F19CA86BBE9184EB 184F6AB3
	static void DETACH_PORTABLE_PICKUP_FROM_PED(uint32_t p0) { rage::NativeInvoke::Invoke<0x26F3FA7C467DDD, uint32_t>(p0); } // 26F3FA7C467DDD 1D094562
	static void _0x04D9EEC9EF4E88095(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x04D9EEC9EF4E88095, uint32_t>(p0, p1); } // 04D9EEC9EF4E88095 7EFBA039
	static void _0x98695D9039266A05(BOOL p0) { rage::NativeInvoke::Invoke<0x98695D9039266A05, uint32_t>(p0); } // 98695D9039266A05 A3CDF152
	static Vector3 GET_SAFE_PICKUP_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xFF447C6CF8EB3D23, Vector3>(p0, p1, p2, p3, p4); } // FF447C6CF8EB3D23 618B5F67
	static Vector3 GET_PICKUP_COORDS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC615E5E6E1D987A1, Vector3>(p0); } // C615E5E6E1D987A1 C2E1E2C5
	static void REMOVE_ALL_PICKUPS_OF_TYPE(uint32_t p0) { rage::NativeInvoke::Invoke<0x86030A69928F48B, uint32_t>(p0); } // 86030A69928F48B 40062C53
	static BOOL HAS_PICKUP_BEEN_COLLECTED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x561B9096FB80229, BOOL>(p0); } // 561B9096FB80229 0BE5CCED
	static void REMOVE_PICKUP(uint32_t p0) { rage::NativeInvoke::Invoke<0x226EBEC6CC97441F, uint32_t>(p0); } // 226EBEC6CC97441F 64A7A0E0
	static void CREATE_MONEY_PICKUPS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x0442FAAEC53563313, uint32_t>(p0, p1, p2, p3, p4, p5); } // 0442FAAEC53563313 36C9A5EA
	static BOOL DOES_PICKUP_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBAE26BE2046B39E0, BOOL>(p0); } // BAE26BE2046B39E0 9C6DA0B3
	static BOOL DOES_PICKUP_OBJECT_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6A89ECA8C773F1E8, BOOL>(p0); } // 6A89ECA8C773F1E8 E0B32108
	static uint32_t _0xBAE2051B557AC082(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBAE2051B557AC082, uint32_t>(p0); } // BAE2051B557AC082 6052E62E
	static BOOL _0x24C3831FA3629798(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x24C3831FA3629798, BOOL>(p0, p1, p2, p3, p4); } // 24C3831FA3629798 F139681B
	static void SET_PICKUP_REGENERATION_TIME(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x20D7FF6A3397A28D, uint32_t>(p0, p1); } // 20D7FF6A3397A28D AB11267D
	static void _0xBFF6E297FADC1308(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xBFF6E297FADC1308, uint32_t>(p0, p1, p2); } // BFF6E297FADC1308 7FADB4B9
	static void _0xCDA3BEAC8F170CA1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCDA3BEAC8F170CA1, uint32_t>(p0, p1); } // CDA3BEAC8F170CA1 3A8F1BF7
	static void SET_TEAM_PICKUP_OBJECT(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x281D53F7B25AF6CF, uint32_t>(p0, p1, p2); } // 281D53F7B25AF6CF 77687DC5
	static void _0x878D9EDEB26817BA(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x878D9EDEB26817BA, uint32_t>(p0, p1, p2); } // 878D9EDEB26817BA CBB5F9B6
	static void _0x78B1C7D2A5DD1719(uint32_t p0, float p1, BOOL p2) { rage::NativeInvoke::Invoke<0x78B1C7D2A5DD1719, uint32_t>(p0, p1, p2); } // 78B1C7D2A5DD1719 276A7807
	static uint32_t _0x7F82B2733B0072CF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7F82B2733B0072CF, uint32_t>(p0); } // 7F82B2733B0072CF 000E92DC
	static void _0xD246762F9836A623(float p0) { rage::NativeInvoke::Invoke<0xD246762F9836A623, uint32_t>(p0); } // D246762F9836A623 9879AC51
	static void _0xB050C97C7D94AD29(BOOL p0) { rage::NativeInvoke::Invoke<0xB050C97C7D94AD29, uint32_t>(p0); } // B050C97C7D94AD29 DB18FA01
	static void _0xB37248259CE6903C(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB37248259CE6903C, uint32_t>(p0, p1); } // B37248259CE6903C A7E936FD
	static void _0x1B185625AF5C7D31() { rage::NativeInvoke::Invoke<0x1B185625AF5C7D31, uint32_t>(); } // 1B185625AF5C7D31 B241806C
	static void _0x286F4C53BCD3D10A(uint32_t p0) { rage::NativeInvoke::Invoke<0x286F4C53BCD3D10A, uint32_t>(p0); } // 286F4C53BCD3D10A D1BAAFB7
	static void _0xCB8F37084048526C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xCB8F37084048526C, uint32_t>(p0, p1, p2, p3); } // CB8F37084048526C 63B02FAD
	static void _0x5C9A488167F7C6B0(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5C9A488167F7C6B0, uint32_t>(p0, p1); } // 5C9A488167F7C6B0 132B6D92
	static uint32_t _0x0B2C3511A3929F7CC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0B2C3511A3929F7CC, uint32_t>(p0); } // 0B2C3511A3929F7CC EDD01937
	static void _0x4E7747B0AB0FB44(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4E7747B0AB0FB44, uint32_t>(p0, p1); } // 4E7747B0AB0FB44
	static uint32_t _0x6606779CF30C6031(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6606779CF30C6031, uint32_t>(p0); } // 6606779CF30C6031 6AE36192
	static void SET_FORCE_OBJECT_THIS_FRAME(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x4E950DCC512F2DC9, uint32_t>(p0, p1, p2, p3); } // 4E950DCC512F2DC9 3DA41C1A
	static void _0xD693FF0257B8CE4(uint32_t p0) { rage::NativeInvoke::Invoke<0xD693FF0257B8CE4, uint32_t>(p0); } // D693FF0257B8CE4 2048A7DD
}

namespace AI
{
	static void TASK_PAUSE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x72E8B5193C65ADE0, uint32_t>(p0, p1); } // 72E8B5193C65ADE0 17A64668
	static void TASK_STAND_STILL(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xEA828B9C078AFB05, uint32_t>(p0, p1); } // EA828B9C078AFB05 6F80965D
	static void TASK_JUMP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0BFD761F6368B4459, uint32_t>(p0, p1); } // 0BFD761F6368B4459 0356E3CE
	static void TASK_COWER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x5FD5E7ABD766D498, uint32_t>(p0, p1); } // 5FD5E7ABD766D498 9CF1C19B
	static void TASK_HANDS_UP(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x6A1BC4DBA3899CCB, uint32_t>(p0, p1, p2, p3, p4); } // 6A1BC4DBA3899CCB 8DCC19C5
	static void _0x828BF2C6D0604991(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x828BF2C6D0604991, uint32_t>(p0, p1); } // 828BF2C6D0604991 3AA39BE9
	static void TASK_OPEN_VEHICLE_DOOR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4) { rage::NativeInvoke::Invoke<0x30676857605F837F, uint32_t>(p0, p1, p2, p3, p4); } // 30676857605F837F 8EE06BF4
	static void TASK_ENTER_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, uint32_t *p6) { rage::NativeInvoke::Invoke<0x36B42DB2912118E2, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 36B42DB2912118E2 B8689B4E
	static void TASK_LEAVE_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x9632B185BE7E73E6, uint32_t>(p0, p1, p2); } // 9632B185BE7E73E6 7B1141C6
	static void TASK_SKY_DIVE(uint32_t p0) { rage::NativeInvoke::Invoke<0xAF49353C1FC67EB9, uint32_t>(p0); } // AF49353C1FC67EB9 D3874AFA
	static void TASK_PARACHUTE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE9D9D75BBBE0B9BB, uint32_t>(p0, p1); } // E9D9D75BBBE0B9BB EC3060A2
	static void TASK_PARACHUTE_TO_TARGET(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x7C745FEDC575E3E6, uint32_t>(p0, p1, p2, p3); } // 7C745FEDC575E3E6 E0104D6C
	static void SET_PARACHUTE_TASK_TARGET(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xDFC69F1DA4D94734, uint32_t>(p0, p1, p2, p3); } // DFC69F1DA4D94734 6ED3AD81
	static void SET_PARACHUTE_TASK_THRUST(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x0588351B84B1D2B39, uint32_t>(p0, p1); } // 0588351B84B1D2B39 D07C8AAA
	static void TASK_RAPPEL_FROM_HELI(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x07672007582A95DD0, uint32_t>(p0, p1); } // 07672007582A95DD0 2C7ADB93
	static void TASK_VEHICLE_DRIVE_TO_COORD(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, float p9, float p10) { rage::NativeInvoke::Invoke<0x5E44C1186E137E21, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 5E44C1186E137E21 E4AC0387
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7) { rage::NativeInvoke::Invoke<0x2EB35831F6E79042, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2EB35831F6E79042 1490182A
	static void TASK_VEHICLE_DRIVE_WANDER(uint32_t p0, uint32_t p1, float p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xF40D4EBDC0BA2C26, uint32_t>(p0, p1, p2, p3); } // F40D4EBDC0BA2C26 36EC0EB0
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, BOOL p8) { rage::NativeInvoke::Invoke<0x3F79A7E4F9378558, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 3F79A7E4F9378558 2DF5A6AC
	static void TASK_GO_STRAIGHT_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, float p7) { rage::NativeInvoke::Invoke<0x804E88DCA0C40FF8, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 804E88DCA0C40FF8 80A9E7A7
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6) { rage::NativeInvoke::Invoke<0xD190DDA2853B4257, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // D190DDA2853B4257 D26CAC68
	static void TASK_ACHIEVE_HEADING(uint32_t p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xDA74C6C73AFEC1F3, uint32_t>(p0, p1, p2); } // DA74C6C73AFEC1F3 0A0E9B42
	static void TASK_FLUSH_ROUTE() { rage::NativeInvoke::Invoke<0x6FF338D505091D00, uint32_t>(); } // 6FF338D505091D00 34219154
	static void TASK_EXTEND_ROUTE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xB257683F16A97A43, uint32_t>(p0, p1, p2); } // B257683F16A97A43 43271F69
	static void TASK_FOLLOW_POINT_ROUTE(uint32_t p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x45E132E6BDD57DC4, uint32_t>(p0, p1, p2); } // 45E132E6BDD57DC4 B837C816
	static void TASK_GO_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, uint32_t p6) { rage::NativeInvoke::Invoke<0xA3C87095904A382C, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // A3C87095904A382C 374827C2
	static void TASK_SMART_FLEE_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0xF60985E3F774849A, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // F60985E3F774849A B2E686FC
	static void TASK_SMART_FLEE_PED(uint32_t p0, uint32_t p1, float p2, uint32_t p3, BOOL p4, BOOL p5) { rage::NativeInvoke::Invoke<0xA859D289EEB2D72A, uint32_t>(p0, p1, p2, p3, p4, p5); } // A859D289EEB2D72A E52EB560
	static void TASK_REACT_AND_FLEE_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3A7E33F67D671817, uint32_t>(p0, p1); } // 3A7E33F67D671817 8A632BD8
	static void TASK_SHOCKING_EVENT_REACT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x84323C8E3C904072, uint32_t>(p0, p1); } // 84323C8E3C904072 9BD00ACF
	static void TASK_WANDER_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6) { rage::NativeInvoke::Invoke<0x3FA4EAFA569D808, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 3FA4EAFA569D808 C6981FB9
	static void TASK_WANDER_STANDARD(uint32_t p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xB68382181B4C4177, uint32_t>(p0, p1, p2); } // B68382181B4C4177 AF59151A
	static void TASK_VEHICLE_PARK(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, BOOL p8) { rage::NativeInvoke::Invoke<0x052AC38C099F0E2E2, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 052AC38C099F0E2E2 5C85FF90
	static void TASK_STEALTH_KILL(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x4478749255C50A47, uint32_t>(p0, p1, p2, p3, p4); } // 4478749255C50A47 0D64C2FA
	static void TASK_PLANT_BOMB(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x47F7C734BD2CE357, uint32_t>(p0, p1, p2, p3, p4); } // 47F7C734BD2CE357 33457535
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8) { rage::NativeInvoke::Invoke<0x3F07E364A21EBC20, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 3F07E364A21EBC20 FE4A10D9
	static void _0x76886ABF5A09CC94(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8, float p9, float p10, float p11) { rage::NativeInvoke::Invoke<0x76886ABF5A09CC94, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 76886ABF5A09CC94 6BF6E296
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x22FBA3B6C028D989, uint32_t>(p0, p1); } // 22FBA3B6C028D989 B7B7D442
	static void SET_PED_PATH_CAN_USE_LADDERS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x93FFA00750A79F0D, uint32_t>(p0, p1); } // 93FFA00750A79F0D 53A879EE
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAF5129FECA4F2FB3, uint32_t>(p0, p1); } // AF5129FECA4F2FB3 394B7AC9
	static void _0x39E6B9422C66D88(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x39E6B9422C66D88, uint32_t>(p0, p1); } // 39E6B9422C66D88 55E06443
	static void SET_PED_PATHS_WIDTH_PLANT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5539FA8B525757E, uint32_t>(p0, p1); } // 5539FA8B525757E 9C606EE3
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6BD2E45DDF8E881F, uint32_t>(p0, p1); } // 6BD2E45DDF8E881F 0EA39A29
	static void SET_PED_PATH_AVOID_FIRE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF91025A9DA5DF60A, uint32_t>(p0, p1); } // F91025A9DA5DF60A DCC5B934
	static void _0x9A82C218923EF8B6(float p0) { rage::NativeInvoke::Invoke<0x9A82C218923EF8B6, uint32_t>(p0); } // 9A82C218923EF8B6 2AFB14B8
	static uint32_t GET_NAVMESH_ROUTE_DISTANCE_REMAINING(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x4DF6F5FCDD26D405, uint32_t>(p0, p1, p2); } // 4DF6F5FCDD26D405 D9281778
	static uint32_t GET_NAVMESH_ROUTE_RESULT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5AB2085F8EE3E606, uint32_t>(p0); } // 5AB2085F8EE3E606 96491602
	static void TASK_GO_TO_COORD_ANY_MEANS(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, BOOL p6, uint32_t p7, float p8) { rage::NativeInvoke::Invoke<0x35A120A011FD797, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 35A120A011FD797 F91DF93B
	static void _0x2A6FEBABC0830CA9(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x2A6FEBABC0830CA9, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 2A6FEBABC0830CA9 094B75EF
	static void _0x5AD57569258490A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { rage::NativeInvoke::Invoke<0x5AD57569258490A, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 5AD57569258490A 86DC03F9
	static void TASK_PLAY_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, uint32_t p5, uint32_t p6, float p7, BOOL p8, uint32_t p9, BOOL p10) { rage::NativeInvoke::Invoke<0xEC0A546609840086, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // EC0A546609840086 5AB552C6
	static void _0xCC9E4F7F91DCEEA8(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, uint32_t p11, uint32_t p12, float p13, uint32_t p14, uint32_t p15) { rage::NativeInvoke::Invoke<0xCC9E4F7F91DCEEA8, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // CC9E4F7F91DCEEA8 3DDEB0E6
	static void STOP_ANIM_TASK(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3) { rage::NativeInvoke::Invoke<0xB7672D87B547201C, uint32_t>(p0, p1, p2, p3); } // B7672D87B547201C 2B520A57
	static void TASK_SCRIPTED_ANIMATION(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x768EEA559F67C7FD, uint32_t>(p0, p1, p2, p3, p4, p5); } // 768EEA559F67C7FD FC2DCF47
	static void PLAY_ENTITY_SCRIPTED_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x6E213F3DCF0CC4B5, uint32_t>(p0, p1, p2, p3, p4, p5); } // 6E213F3DCF0CC4B5 02F72AE5
	static void STOP_ANIM_PLAYBACK(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x7292FF90BD27F729, uint32_t>(p0, p1, p2); } // 7292FF90BD27F729 E5F16398
	static void SET_ANIM_WEIGHT(uint32_t p0, float p1, uint32_t p2, uint32_t p3, BOOL p4) { rage::NativeInvoke::Invoke<0x812C9571BF41711C, uint32_t>(p0, p1, p2, p3, p4); } // 812C9571BF41711C 17229D98
	static void SET_ANIM_RATE(uint32_t p0, float p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x021EFFE057FB7832F, uint32_t>(p0, p1, p2, p3); } // 021EFFE057FB7832F 6DB46584
	static void SET_ANIM_LOOPED(uint32_t p0, BOOL p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x1BE0CA5D56BD30B7, uint32_t>(p0, p1, p2, p3); } // 1BE0CA5D56BD30B7 095D61A4
	static void _0x473C1DFC8AF8A9EB(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4, float p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x473C1DFC8AF8A9EB, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 473C1DFC8AF8A9EB 1582162C
	static void _0xB081DB5BC363F5EB(uint32_t p0) { rage::NativeInvoke::Invoke<0xB081DB5BC363F5EB, uint32_t>(p0); } // B081DB5BC363F5EB
	static BOOL _0x8050E0E02CA072A2(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8050E0E02CA072A2, BOOL>(p0); } // 8050E0E02CA072A2 500B6805
	static float _0x3A14E40EB6F91876(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3A14E40EB6F91876, float>(p0); } // 3A14E40EB6F91876 7B72AFD1
	static float _0x79EEB199FF3C3200(uint32_t p0) { return rage::NativeInvoke::Invoke<0x79EEB199FF3C3200, float>(p0); } // 79EEB199FF3C3200 EF8C3959
	static void TASK_VEHICLE_PLAY_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xF1D4D0F36FDE4539, uint32_t>(p0, p1, p2); } // F1D4D0F36FDE4539 2B28F598
	static void TASK_LOOK_AT_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0xE6D93A0484388DB3, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // E6D93A0484388DB3 7B784DD8
	static void TASK_LOOK_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x8E759206778E571F, uint32_t>(p0, p1, p2, p3, p4); } // 8E759206778E571F 991D6619
	static void TASK_CLEAR_LOOK_AT(uint32_t p0) { rage::NativeInvoke::Invoke<0x0CBA47B699F417E4D, uint32_t>(p0); } // 0CBA47B699F417E4D 60EB4054
	static void OPEN_SEQUENCE_TASK(uint32_t *p0) { rage::NativeInvoke::Invoke<0xB5DC017AFD430D1B, uint32_t>(p0); } // B5DC017AFD430D1B ABA6923E
	static void CLOSE_SEQUENCE_TASK(uint32_t p0) { rage::NativeInvoke::Invoke<0x6EE8A5CF9AC75F12, uint32_t>(p0); } // 6EE8A5CF9AC75F12 1A7CEBD0
	static void TASK_PERFORM_SEQUENCE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x8229311A391A4EC6, uint32_t>(p0, p1); } // 8229311A391A4EC6 4D9FBD11
	static void CLEAR_SEQUENCE_TASK(uint32_t *p0) { rage::NativeInvoke::Invoke<0x9F77DFFC61FCB68C, uint32_t>(p0); } // 9F77DFFC61FCB68C 47ED03CE
	static void SET_SEQUENCE_TO_REPEAT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC3DFF4EEE866DBF6, uint32_t>(p0, p1); } // C3DFF4EEE866DBF6 CDDF1508
	static uint32_t GET_SEQUENCE_PROGRESS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x00CE91B0C5B23E0134, uint32_t>(p0); } // 00CE91B0C5B23E0134 A3419909
	static BOOL GET_IS_TASK_ACTIVE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x7ECD7807CAEF4F14, BOOL>(p0, p1); } // 7ECD7807CAEF4F14 86FDDF55
	static uint32_t GET_SCRIPT_TASK_STATUS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xEC043AB2FEE0E94F, uint32_t>(p0, p1); } // EC043AB2FEE0E94F B2477B23
	static uint32_t _0xC6F1531F56379804(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC6F1531F56379804, uint32_t>(p0); } // C6F1531F56379804 AFA914EF
	static void TASK_LEAVE_ANY_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x48367A1F7C9A1041, uint32_t>(p0, p1, p2); } // 48367A1F7C9A1041 DBDD79FA
	static void TASK_AIM_GUN_SCRIPTED(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0xC2AA0AE3AAEE938, uint32_t>(p0, p1, p2, p3); } // C2AA0AE3AAEE938 9D296BCD
	static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x73F7EDC0706A0721, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 73F7EDC0706A0721 FD517CE3
	static void _0x6A07493CAE8D58BA(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5) { rage::NativeInvoke::Invoke<0x6A07493CAE8D58BA, uint32_t>(p0, p1, p2, p3, p4, p5); } // 6A07493CAE8D58BA 67E73525
	static uint32_t _0xBD5F98571DC7E007(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBD5F98571DC7E007, uint32_t>(p0); } // BD5F98571DC7E007 249EB4EB
	static void TASK_AIM_GUN_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0xCDBB862D670BA90E, uint32_t>(p0, p1, p2, p3); } // CDBB862D670BA90E BE32B3B6
	static void TASK_TURN_PED_TO_FACE_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xDE75E9DE5B6221E1, uint32_t>(p0, p1, p2); } // DE75E9DE5B6221E1 3C37C767
	static void TASK_AIM_GUN_AT_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4, BOOL p5, BOOL p6) { rage::NativeInvoke::Invoke<0xC0E67684D7119EC2, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // C0E67684D7119EC2 FBF44AD3
	static void TASK_SHOOT_AT_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xE111AC615DB26914, uint32_t>(p0, p1, p2, p3, p4, p5); } // E111AC615DB26914 601C22E3
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1DE8910EDFD23539, uint32_t>(p0, p1); } // 1DE8910EDFD23539 BEAF8F67
	static void CLEAR_PED_TASKS(uint32_t p0) { rage::NativeInvoke::Invoke<0xAC57FBF981AB03F4, uint32_t>(p0); } // AC57FBF981AB03F4 DE3316AB
	static void CLEAR_PED_SECONDARY_TASK(uint32_t p0) { rage::NativeInvoke::Invoke<0x1E61DAA6A0EEC652, uint32_t>(p0); } // 1E61DAA6A0EEC652 A635F451
	static void TASK_EVERYONE_LEAVE_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0x2703A6A8CAED739, uint32_t>(p0); } // 2703A6A8CAED739 C1971F30
	static void TASK_GOTO_ENTITY_OFFSET(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x896A419A31D7A17A, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 896A419A31D7A17A 1A17A85E
	static void TASK_GOTO_ENTITY_OFFSET_XY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x87FB7F2E50C7D2C7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 87FB7F2E50C7D2C7 BC1E3D0A
	static void TASK_TURN_PED_TO_FACE_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x211FA3DF75B31A84, uint32_t>(p0, p1, p2, p3, p4); } // 211FA3DF75B31A84 30463D73
	static void TASK_VEHICLE_TEMP_ACTION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xDD4FB99FF9DED807, uint32_t>(p0, p1, p2, p3); } // DD4FB99FF9DED807 0679DFB8
	static void TASK_VEHICLE_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, float p6, float p7, BOOL p8) { rage::NativeInvoke::Invoke<0xD09813BDAA102212, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // D09813BDAA102212 20609E56
	static void TASK_VEHICLE_MISSION_PED_TARGET(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, float p6, float p7, BOOL p8) { rage::NativeInvoke::Invoke<0x9C373E78BA27BAA4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 9C373E78BA27BAA4 C81C4677
	static void TASK_VEHICLE_MISSION_COORS_TARGET(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8, float p9, BOOL p10) { rage::NativeInvoke::Invoke<0xFF2E41BCADB4BDD3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // FF2E41BCADB4BDD3 6719C109
	static void TASK_VEHICLE_ESCORT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8) { rage::NativeInvoke::Invoke<0x03CCCE31CB8F3E53E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 03CCCE31CB8F3E53E 9FDCB250
	static void _0x1B26509743D8871A(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x1B26509743D8871A, uint32_t>(p0, p1, p2, p3, p4, p5); } // 1B26509743D8871A
	static void TASK_VEHICLE_CHASE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x7CA63949C26D0A29, uint32_t>(p0, p1); } // 7CA63949C26D0A29 55634798
	static void TASK_VEHICLE_HELI_PROTECT(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4, float p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x4966BCE711064E46, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 4966BCE711064E46 0CB415EE
	static void _0x43E39A7596DB53D2(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x43E39A7596DB53D2, uint32_t>(p0, p1, p2); } // 43E39A7596DB53D2 2A83083F
	static void _0x30C3A9C4DCB8DDD1(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x30C3A9C4DCB8DDD1, uint32_t>(p0, p1); } // 30C3A9C4DCB8DDD1 04FD3EE7
	static void TASK_HELI_CHASE(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x5BA5037866D3D3C8, uint32_t>(p0, p1, p2, p3, p4); } // 5BA5037866D3D3C8 AC290A21
	static void TASK_PLANE_CHASE(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x9FCD548B225A1823, uint32_t>(p0, p1, p2, p3, p4); } // 9FCD548B225A1823 12FA1C28
	static void TASK_PLANE_LAND(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7) { rage::NativeInvoke::Invoke<0xC223F8B730B4A33A, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // C223F8B730B4A33A 5F7E23EA
	static void TASK_HELI_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, float p8, float p9, float p10, uint32_t p11, uint32_t p12, float p13, uint32_t p14) { rage::NativeInvoke::Invoke<0x59DFC08A31F08D05, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 59DFC08A31F08D05 0C143E97
	static void TASK_PLANE_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, float p8, float p9, float p10, uint32_t p11, uint32_t p12) { rage::NativeInvoke::Invoke<0x8276BF488762405A, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 8276BF488762405A 1D007E65
	static void TASK_BOAT_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, float p8, uint32_t p9, float p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x9F50D3F7FDB2D584, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 9F50D3F7FDB2D584 5865B031
	static void TASK_DRIVE_BY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, uint32_t p7, BOOL p8, uint32_t p9) { rage::NativeInvoke::Invoke<0xE9A858D330662DC7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // E9A858D330662DC7 2B84D1C4
	static void SET_DRIVEBY_TASK_TARGET(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x7C965DF0F9C0AAC0, uint32_t>(p0, p1, p2, p3, p4, p5); } // 7C965DF0F9C0AAC0 DA6A6FC1
	static void _0x1700E1858C4E6FB7(uint32_t p0) { rage::NativeInvoke::Invoke<0x1700E1858C4E6FB7, uint32_t>(p0); } // 1700E1858C4E6FB7 9B76F7E6
	static BOOL _0xEE15333D996F6258(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEE15333D996F6258, BOOL>(p0); } // EE15333D996F6258 B23F46E6
	static BOOL _0x1E7451EF0B77B3F1(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1E7451EF0B77B3F1, BOOL>(p0); } // 1E7451EF0B77B3F1 500D9244
	static void _0x762AA1B4BF06CCA8(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x762AA1B4BF06CCA8, uint32_t>(p0, p1, p2, p3, p4, p5); } // 762AA1B4BF06CCA8 98713C68
	static BOOL _0x781DE3BEC4109681(uint32_t p0) { return rage::NativeInvoke::Invoke<0x781DE3BEC4109681, BOOL>(p0); } // 781DE3BEC4109681 291E938C
	static void TASK_USE_MOBILE_PHONE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE2E6B3E5187DD69C, uint32_t>(p0, p1); } // E2E6B3E5187DD69C 225A38C8
	static void TASK_USE_MOBILE_PHONE_TIMED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xEBD837FADD98C7B2, uint32_t>(p0, p1); } // EBD837FADD98C7B2 C99C19F5
	static void TASK_CHAT_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7) { rage::NativeInvoke::Invoke<0xA697975DB03467E3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // A697975DB03467E3 A2BE1821
	static void TASK_WARP_PED_INTO_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xF57092AA9D04B9A5, uint32_t>(p0, p1, p2); } // F57092AA9D04B9A5 65D4A35D
	static void TASK_SHOOT_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x0164444F49EF1FE97, uint32_t>(p0, p1, p2, p3); } // 0164444F49EF1FE97 AC0631C9
	static void TASK_CLIMB(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3B9A2E42F099F70F, uint32_t>(p0, p1); } // 3B9A2E42F099F70F 90847790
	static void TASK_CLIMB_LADDER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD949233C5686F928, uint32_t>(p0, p1); } // D949233C5686F928 35BB4EE0
	static void CLEAR_PED_TASKS_IMMEDIATELY(uint32_t p0) { rage::NativeInvoke::Invoke<0xCEBD1B99CF343672, uint32_t>(p0); } // CEBD1B99CF343672 BC045625
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xBA9D0841C3991AA6, uint32_t>(p0, p1, p2, p3); } // BA9D0841C3991AA6 FA60601B
	static void SET_NEXT_DESIRED_MOVE_STATE(uint32_t p0) { rage::NativeInvoke::Invoke<0x7CB3215EE53F13C3, uint32_t>(p0); } // 7CB3215EE53F13C3 4E937D57
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB317E9B67CA4E777, uint32_t>(p0, p1); } // B317E9B67CA4E777 C65FC712
	static uint32_t GET_PED_DESIRED_MOVE_BLEND_RATIO(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6D643C3F9C6475A0, uint32_t>(p0); } // 6D643C3F9C6475A0 5FEFAB72
	static void TASK_GOTO_ENTITY_AIMING(uint32_t p0, uint32_t p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xF9303F10CD08639C, uint32_t>(p0, p1, p2, p3); } // F9303F10CD08639C F1C493CF
	static void TASK_SET_DECISION_MAKER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF3B83508A8BDCE7, uint32_t>(p0, p1); } // F3B83508A8BDCE7 830AD50C
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0xC300D93560D26B2D, uint32_t>(p0, p1, p2, p3, p4); } // C300D93560D26B2D 9F3C5D6A
	static void TASK_CLEAR_DEFENSIVE_AREA(uint32_t p0) { rage::NativeInvoke::Invoke<0x60729150755250D7, uint32_t>(p0); } // 60729150755250D7 7A05BF0D
	static void TASK_PED_SLIDE_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x3992EA19833D4C7E, uint32_t>(p0, p1, p2, p3, p4, p5); } // 3992EA19833D4C7E 225380EF
	static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6) { rage::NativeInvoke::Invoke<0x42F942232B00FA7B, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 42F942232B00FA7B 38A995C1
	static uint32_t ADD_COVER_POINT(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6, BOOL p7) { return rage::NativeInvoke::Invoke<0xE887BFB496769F95, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // E887BFB496769F95 A0AF0B98
	static void REMOVE_COVER_POINT(uint32_t p0) { rage::NativeInvoke::Invoke<0xC681964D4B63AFB2, uint32_t>(p0); } // C681964D4B63AFB2 0776888B
	static BOOL _0xBDF8888E8D204E71(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0xBDF8888E8D204E71, BOOL>(p0, p1, p2); } // BDF8888E8D204E71 29F97A71
	static Vector3 _0x79F5828F532C5F8B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x79F5828F532C5F8B, Vector3>(p0); } // 79F5828F532C5F8B C6B6CCC1
	static void TASK_COMBAT_PED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x247B2966C6C2A4C1, uint32_t>(p0, p1, p2, p3); } // 247B2966C6C2A4C1 CB0D8932
	static void TASK_COMBAT_PED_TIMED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x39FFBC4483BA1095, uint32_t>(p0, p1, p2, p3); } // 39FFBC4483BA1095 F5CA2A45
	static void TASK_SEEK_COVER_FROM_POS(uint32_t p0, float p1, float p2, float p3, uint32_t p4, BOOL p5) { rage::NativeInvoke::Invoke<0x3CB09372626A726B, uint32_t>(p0, p1, p2, p3, p4, p5); } // 3CB09372626A726B 83F18EE9
	static void TASK_SEEK_COVER_FROM_PED(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x4F2B9803D4E71CDB, uint32_t>(p0, p1, p2, p3); } // 4F2B9803D4E71CDB C1EC907E
	static void TASK_SEEK_COVER_TO_COVER_POINT(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, BOOL p6) { rage::NativeInvoke::Invoke<0x60DA60C3C6F13F3D, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 60DA60C3C6F13F3D 3D026B29
	static void TASK_SEEK_COVER_TO_COORDS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, BOOL p8) { rage::NativeInvoke::Invoke<0x32F3BA3025BBEF0D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 32F3BA3025BBEF0D FFFE754E
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(uint32_t p0, float p1, float p2, float p3, uint32_t p4, BOOL p5, float p6, BOOL p7, BOOL p8, uint32_t p9, BOOL p10) { rage::NativeInvoke::Invoke<0x63B567F3939008D0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 63B567F3939008D0 C9F00E68
	static void TASK_EXIT_COVER(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0xB1D2969E8E180598, uint32_t>(p0, p1, p2, p3, p4); } // B1D2969E8E180598 C829FAC9
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x5BE268EEA70577CE, uint32_t>(p0, p1, p2, p3, p4, p5); } // 5BE268EEA70577CE 79E1D27D
	static void TASK_TOGGLE_DUCK(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x383BD3A413F0EEF, uint32_t>(p0, p1); } // 383BD3A413F0EEF 61CFBCBF
	static void TASK_GUARD_CURRENT_POSITION(uint32_t p0, float p1, float p2, BOOL p3) { rage::NativeInvoke::Invoke<0xADF2D93E45C64741, uint32_t>(p0, p1, p2, p3); } // ADF2D93E45C64741 2FB099E9
	static void _0x26852A07A81C64FA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x26852A07A81C64FA, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 26852A07A81C64FA 7AF0133D
	static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, float p8, float p9, float p10) { rage::NativeInvoke::Invoke<0xC548DB31D2669A9D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // C548DB31D2669A9D 86B76CB7
	static void TASK_STAND_GUARD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0x47C890E6BB15D18, uint32_t>(p0, p1, p2, p3, p4, p5); } // 47C890E6BB15D18 D130F636
	static void SET_DRIVE_TASK_CRUISE_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x4369A55DCA9625D1, uint32_t>(p0, p1); } // 4369A55DCA9625D1 3CEC07B1
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x62E1AC14633FFF9D, uint32_t>(p0, p1); } // 62E1AC14633FFF9D 7FDF6131
	static void _0x98ED5A7433ACC92D(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x98ED5A7433ACC92D, uint32_t>(p0, p1); } // 98ED5A7433ACC92D 59C5FAD7
	static void ADD_COVER_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { rage::NativeInvoke::Invoke<0x1C5CE301ABC068C3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 1C5CE301ABC068C3 3536946F
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { rage::NativeInvoke::Invoke<0xAB52DEC65AB36D92, uint32_t>(); } // AB52DEC65AB36D92 CF9221A7
	static void TASK_START_SCENARIO_IN_PLACE(uint32_t p0, uint32_t *p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x371C90C63129A983, uint32_t>(p0, p1, p2, p3); } // 371C90C63129A983 E50D6DDE
	static void TASK_START_SCENARIO_AT_POSITION(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, uint32_t p6, BOOL p7, BOOL p8) { rage::NativeInvoke::Invoke<0x94BB2E27C219F070, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 94BB2E27C219F070 AA2C4AC2
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x3BE6E1931460594, uint32_t>(p0, p1, p2, p3, p4, p5); } // 3BE6E1931460594 9C50FBF0
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xB9CCB1B9F8BDAE90, uint32_t>(p0, p1, p2, p3, p4, p5); } // B9CCB1B9F8BDAE90 1BE9D65C
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xA6D0F8A56436D220, uint32_t>(p0, p1, p2, p3, p4, p5); } // A6D0F8A56436D220 E32FFB22
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x6B722A1FC6ED3F7C, uint32_t>(p0, p1, p2, p3, p4, p5); } // 6B722A1FC6ED3F7C BAB4C0AE
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0xE08642374BA21D0D, BOOL>(p0, p1, p2, p3, p4); } // E08642374BA21D0D FA7F5047
	static BOOL _0x04E39D17DBE597E54(float p0, float p1, float p2, uint32_t *p3, float p4, BOOL p5) { return rage::NativeInvoke::Invoke<0x04E39D17DBE597E54, BOOL>(p0, p1, p2, p3, p4, p5); } // 04E39D17DBE597E54 0FB138A5
	static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x38EC498516026D7, BOOL>(p0, p1, p2, p3, p4); } // 38EC498516026D7 697FC008
	static BOOL _0x48E978B24D747113(uint32_t p0) { return rage::NativeInvoke::Invoke<0x48E978B24D747113, BOOL>(p0); } // 48E978B24D747113 9BE9C691
	static void _0x7399206A9DF244B6(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x7399206A9DF244B6, uint32_t>(p0, p1, p2); } // 7399206A9DF244B6 1984A5D1
	static BOOL DOES_SCENARIO_GROUP_EXIST(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xD9CD5BC005208DE9, BOOL>(p0); } // D9CD5BC005208DE9 5F072EB9
	static BOOL IS_SCENARIO_GROUP_ENABLED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xD607451E86AE237, BOOL>(p0); } // D607451E86AE237 90991122
	static void SET_SCENARIO_GROUP_ENABLED(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x05430610676C3EDD, uint32_t>(p0, p1); } // 05430610676C3EDD 116997B1
	static void _0xED6215F03FE94AEE() { rage::NativeInvoke::Invoke<0xED6215F03FE94AEE, uint32_t>(); } // ED6215F03FE94AEE BF55025D
	static void SET_EXCLUSIVE_SCENARIO_GROUP(uint32_t *p0) { rage::NativeInvoke::Invoke<0x89D5B8B112E0D7BE, uint32_t>(p0); } // 89D5B8B112E0D7BE 59DB8F26
	static void RESET_EXCLUSIVE_SCENARIO_GROUP() { rage::NativeInvoke::Invoke<0xCBA9F3D66C32D9BE, uint32_t>(); } // CBA9F3D66C32D9BE 17F9DFE8
	static BOOL IS_SCENARIO_TYPE_ENABLED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x5C90A8577C429AA0, BOOL>(p0); } // 5C90A8577C429AA0 AE37E969
	static void SET_SCENARIO_TYPE_ENABLED(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF81DFFDCEDAA4951, uint32_t>(p0, p1); } // F81DFFDCEDAA4951 DB18E5DE
	static void _0x0BA3015D146EFDE5B() { rage::NativeInvoke::Invoke<0x0BA3015D146EFDE5B, uint32_t>(); } // 0BA3015D146EFDE5B F58FDEB4
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(uint32_t p0) { return rage::NativeInvoke::Invoke<0x548BA5F69EA895F7, BOOL>(p0); } // 548BA5F69EA895F7 05038F1A
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x2D31B27E6F350915, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2D31B27E6F350915 DF099E18
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(uint32_t p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xF266F4D5C3D0BAE2, uint32_t>(p0, p1, p2); } // F266F4D5C3D0BAE2 2E7064E4
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(uint32_t p0, float p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x74D67C13D3370C61, uint32_t>(p0, p1, p2, p3); } // 74D67C13D3370C61 F127AD6A
	static void TASK_THROW_PROJECTILE(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x4FF396B0CD5F897C, uint32_t>(p0, p1, p2, p3); } // 4FF396B0CD5F897C F65C20A7
	static void TASK_SWAP_WEAPON(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF51A3E0D7156845, uint32_t>(p0, p1); } // F51A3E0D7156845 DAF4F8FC
	static void TASK_RELOAD_WEAPON(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA59DE0AD3479D83C, uint32_t>(p0, p1); } // A59DE0AD3479D83C CA6E91FD
	static BOOL IS_PED_GETTING_UP(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8D60CA9F677F4AD, BOOL>(p0); } // 8D60CA9F677F4AD 320813E6
	static void TASK_WRITHE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x853518FFC918568F, uint32_t>(p0, p1, p2, p3); } // 853518FFC918568F 0FDC54FC
	static BOOL IS_PED_IN_WRITHE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x43F230A2EC7A2B4C, BOOL>(p0); } // 43F230A2EC7A2B4C 09E61921
	static void OPEN_PATROL_ROUTE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xD322713087350CD6, uint32_t>(p0); } // D322713087350CD6 F33F83CA
	static void CLOSE_PATROL_ROUTE() { rage::NativeInvoke::Invoke<0xB4D96C014CCD17CF, uint32_t>(); } // B4D96C014CCD17CF 67305E59
	static void ADD_PATROL_ROUTE_NODE(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { rage::NativeInvoke::Invoke<0xD14268664591381D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // D14268664591381D 21B48F10
	static void ADD_PATROL_ROUTE_LINK(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x9C1008B9C67EDBE2, uint32_t>(p0, p1); } // 9C1008B9C67EDBE2 D8761BB3
	static void CREATE_PATROL_ROUTE() { rage::NativeInvoke::Invoke<0xDFCC6E6692869DC3, uint32_t>(); } // DFCC6E6692869DC3 0A6C7864
	static void DELETE_PATROL_ROUTE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xDDDC8591239E3516, uint32_t>(p0); } // DDDC8591239E3516 2A4E6706
	static void TASK_PATROL(uint32_t p0, uint32_t *p1, uint32_t p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0xD62B753EF0EFAE9B, uint32_t>(p0, p1, p2, p3, p4); } // D62B753EF0EFAE9B B92E5AF6
	static void TASK_STAY_IN_COVER(uint32_t p0) { rage::NativeInvoke::Invoke<0x8BA4BA057ADEE33B, uint32_t>(p0); } // 8BA4BA057ADEE33B A27A9413
	static void _0xCAE9BA01C471691A(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xCAE9BA01C471691A, uint32_t>(p0, p1, p2, p3); } // CAE9BA01C471691A 50779A2C
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x41D99CB1AF9D233F, uint32_t>(p0, p1); } // 41D99CB1AF9D233F 80461113
	static void TASK_VEHICLE_SHOOT_AT_PED(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0xFBCEC9A3157E3FC4, uint32_t>(p0, p1, p2); } // FBCEC9A3157E3FC4 59677BA0
	static void TASK_VEHICLE_AIM_AT_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x413CCCAD95E34444, uint32_t>(p0, p1); } // 413CCCAD95E34444 920AE6DB
	static void TASK_VEHICLE_SHOOT_AT_COORD(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0xE804D18F80B7282B, uint32_t>(p0, p1, p2, p3, p4); } // E804D18F80B7282B A7AAA4D6
	static void TASK_VEHICLE_AIM_AT_COORD(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x16197725DCDCCA20, uint32_t>(p0, p1, p2, p3); } // 16197725DCDCCA20 010F47CE
	static void TASK_VEHICLE_GOTO_NAVMESH(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7) { rage::NativeInvoke::Invoke<0x2ED12A383DB1302F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2ED12A383DB1302F 55CF3BCD
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, float p9, float p10, BOOL p11, uint32_t p12, BOOL p13, uint32_t p14) { rage::NativeInvoke::Invoke<0xA64E4B0EDBF0F2F9, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // A64E4B0EDBF0F2F9 1552DC91
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(uint32_t p0, float p1, float p2, float p3, uint32_t p4, float p5, BOOL p6, float p7, float p8, BOOL p9, uint32_t p10, BOOL p11, uint32_t p12, uint32_t p13) { rage::NativeInvoke::Invoke<0xCDDB3BCC4A2E6A6C, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // CDDB3BCC4A2E6A6C 9BD52ABD
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, float p9, float p10, BOOL p11, uint32_t p12, uint32_t p13, uint32_t p14) { rage::NativeInvoke::Invoke<0x9E2FA3E3FE44C0EF, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 9E2FA3E3FE44C0EF 3F91358E
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x0759569E7DAB5B303, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0759569E7DAB5B303 D896CD82
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, BOOL p4, float p5, float p6, BOOL p7, BOOL p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x68D196451292305F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 68D196451292305F 68E36B7A
	static void SET_HIGH_FALL_TASK(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xC96A19040CBE557E, uint32_t>(p0, p1, p2, p3); } // C96A19040CBE557E BBB26172
	static void REQUEST_WAYPOINT_RECORDING(uint32_t *p0) { rage::NativeInvoke::Invoke<0x909E9D811F9F1AAE, uint32_t>(p0); } // 909E9D811F9F1AAE AFABFB5D
	static BOOL _0xB16E5DBDEC4BBDEB(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xB16E5DBDEC4BBDEB, BOOL>(p0); } // B16E5DBDEC4BBDEB 87125F5D
	static void REMOVE_WAYPOINT_RECORDING(uint32_t *p0) { rage::NativeInvoke::Invoke<0x932057F38C942D3B, uint32_t>(p0); } // 932057F38C942D3B 624530B0
	static BOOL _0x8D1B4A2AD7F8BEDE(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x8D1B4A2AD7F8BEDE, BOOL>(p0, p1); } // 8D1B4A2AD7F8BEDE F5F9B71E
	static uint32_t _0x2FC9E205CF5C0AA1(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x2FC9E205CF5C0AA1, uint32_t>(p0, p1, p2); } // 2FC9E205CF5C0AA1 19266913
	static float _0x0069F9082C2AE815E1(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0069F9082C2AE815E1, float>(p0, p1); } // 0069F9082C2AE815E1 C765633A
	static BOOL _0xB435026734C33E54(uint32_t *p0, float p1, float p2, float p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xB435026734C33E54, BOOL>(p0, p1, p2, p3, p4); } // B435026734C33E54 C4CD35AF
	static void TASK_FOLLOW_WAYPOINT_RECORDING(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x0D8BA6491440C0DA6, uint32_t>(p0, p1, p2, p3, p4); } // 0D8BA6491440C0DA6 ADF9904D
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5AF4A1178852EEA9, BOOL>(p0); } // 5AF4A1178852EEA9 85B7725F
	static uint32_t GET_PED_WAYPOINT_PROGRESS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xABEA7B5D247ED2E5, uint32_t>(p0); } // ABEA7B5D247ED2E5 3595B104
	static float GET_PED_WAYPOINT_DISTANCE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8789D6DCB645357A, float>(p0); } // 8789D6DCB645357A 084B35B0
	static uint32_t SET_PED_WAYPOINT_ROUTE_OFFSET(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xED3E40275675563C, uint32_t>(p0, p1, p2, p3); } // ED3E40275675563C F867F747
	static float _0xB649C27FF9903353(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xB649C27FF9903353, float>(p0, p1); } // B649C27FF9903353 E8422AC4
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4695D54A91E55FE2, BOOL>(p0); } // 4695D54A91E55FE2 A6BB5717
	static void WAYPOINT_PLAYBACK_PAUSE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x0969EF3C4ABE30A62, uint32_t>(p0, p1, p2); } // 0969EF3C4ABE30A62 FE39ECF8
	static void WAYPOINT_PLAYBACK_RESUME(uint32_t p0, BOOL p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xC7B2F0526F0DF6DC, uint32_t>(p0, p1, p2, p3); } // C7B2F0526F0DF6DC 50F392EF
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uint32_t p0, float p1, BOOL p2) { rage::NativeInvoke::Invoke<0xC9E68931EC906C20, uint32_t>(p0, p1, p2); } // C9E68931EC906C20 23E6BA96
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uint32_t p0) { rage::NativeInvoke::Invoke<0xFCFC3241D0A6E059, uint32_t>(p0); } // FCFC3241D0A6E059 1BBB2CAC
	static void _0x4500B71DC61AE180(uint32_t *p0, BOOL p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x4500B71DC61AE180, uint32_t>(p0, p1, p2, p3); } // 4500B71DC61AE180 4DFD5FEC
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x453B15D823D2CFAE, uint32_t>(p0, p1, p2); } // 453B15D823D2CFAE 75E60CF6
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(uint32_t p0, float p1, float p2, float p3, BOOL p4) { rage::NativeInvoke::Invoke<0x8461035C8473FB4C, uint32_t>(p0, p1, p2, p3, p4); } // 8461035C8473FB4C F120A34E
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x034D65C1B546FC9EB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 034D65C1B546FC9EB CDDB44D5
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(uint32_t p0) { rage::NativeInvoke::Invoke<0x1C46F7A41A590025, uint32_t>(p0); } // 1C46F7A41A590025 6D7CF40C
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x97C897799D58CEBD, uint32_t>(p0); } // 97C897799D58CEBD 48262EDA
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xB69371A672FD9100, uint32_t>(p0); } // B69371A672FD9100 B3CEC06F
	static BOOL _0xAB34ECCF7740AE80(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xAB34ECCF7740AE80, BOOL>(p0); } // AB34ECCF7740AE80 79B067AF
	static void _0x3D9936878BED0580(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3D9936878BED0580, uint32_t>(p0, p1); } // 3D9936878BED0580 01CAAFCC
	static void _0x8A417D6C8C4192CA(float p0) { rage::NativeInvoke::Invoke<0x8A417D6C8C4192CA, uint32_t>(p0); } // 8A417D6C8C4192CA 8FB923EC
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, float p7, BOOL p8, float p9) { rage::NativeInvoke::Invoke<0xDA798D309313469E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // DA798D309313469E 959818B6
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCFC1A4F15B873C8A, BOOL>(p0); } // CFC1A4F15B873C8A 80DD15DB
	static uint32_t GET_VEHICLE_WAYPOINT_PROGRESS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE338C7B84645E1C, uint32_t>(p0); } // FE338C7B84645E1C D3CCF64E
	static uint32_t GET_VEHICLE_WAYPOINT_TARGET_POINT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6EF613202AB1A59E, uint32_t>(p0); } // 6EF613202AB1A59E 81049608
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uint32_t p0) { rage::NativeInvoke::Invoke<0x89FB0EF23B1A43D3, uint32_t>(p0); } // 89FB0EF23B1A43D3 7C00B415
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(uint32_t p0) { rage::NativeInvoke::Invoke<0x31E4F8171165585E, uint32_t>(p0); } // 31E4F8171165585E BEB14C82
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uint32_t p0) { rage::NativeInvoke::Invoke<0x9AF2F9DC66B66373, uint32_t>(p0); } // 9AF2F9DC66B66373 923C3AA4
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x83F30835EF61F3F5, uint32_t>(p0, p1); } // 83F30835EF61F3F5 BE1E7BB4
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9621E1F79C388756, uint32_t>(p0, p1); } // 9621E1F79C388756 1B54FB6B
	static void TASK_FORCE_MOTION_STATE(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xE9448D32D8A6A9AF, uint32_t>(p0, p1, p2); } // E9448D32D8A6A9AF CAD2EF77
	static void _0xB617E3659278EC5(uint32_t p0, uint32_t *p1, float p2, BOOL p3, uint32_t *p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xB617E3659278EC5, uint32_t>(p0, p1, p2, p3, p4, p5); } // B617E3659278EC5 6F5D215F
	static void _0x65199BC5A6EBF388(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, BOOL p10, uint32_t *p11, uint32_t p12) { rage::NativeInvoke::Invoke<0x65199BC5A6EBF388, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 65199BC5A6EBF388 71A5C5DB
	static BOOL _0x986A8632623AA9E8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x986A8632623AA9E8, BOOL>(p0); } // 986A8632623AA9E8 902656EB
	static BOOL _0xDFBE28317178DA1E(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDFBE28317178DA1E, BOOL>(p0); } // DFBE28317178DA1E 92FDBAE6
	static uint32_t _0x971382DF83C506A1(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x971382DF83C506A1, uint32_t>(p0, p1); } // 971382DF83C506A1 885724DE
	static uint32_t _0x7149B74DB6212578(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7149B74DB6212578, uint32_t>(p0); } // 7149B74DB6212578 96C0277B
	static void _0xB0B01341F5A2B7B5(uint32_t p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0xB0B01341F5A2B7B5, uint32_t>(p0, p1, p2); } // B0B01341F5A2B7B5 A79BE783
	static void _0x3FFCB55BE8DADAB6(uint32_t p0, uint32_t *p1, BOOL p2) { rage::NativeInvoke::Invoke<0x3FFCB55BE8DADAB6, uint32_t>(p0, p1, p2); } // 3FFCB55BE8DADAB6 F3538041
	static BOOL _0xFACD778761DCFD2B(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xFACD778761DCFD2B, BOOL>(p0, p1); } // FACD778761DCFD2B 1EBB6F3D
	static BOOL _0xE8DFC0A1508CBEFC(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xE8DFC0A1508CBEFC, BOOL>(p0, p1); } // E8DFC0A1508CBEFC 72FA5EF2
	static uint32_t _0x2EF75D01A729BE93(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2EF75D01A729BE93, uint32_t>(p0); } // 2EF75D01A729BE93 E9DAF877
	static uint32_t _0x1327716C7FF71429(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1327716C7FF71429, uint32_t>(p0); } // 1327716C7FF71429 D21639A8
	static uint32_t _0x1E2B735C728F7469(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1E2B735C728F7469, uint32_t>(p0); } // 1E2B735C728F7469 E76A2353
	static uint32_t _0x98C90939E11FA795(uint32_t p0) { return rage::NativeInvoke::Invoke<0x98C90939E11FA795, uint32_t>(p0); } // 98C90939E11FA795 DD616893
	static BOOL IS_PED_STILL(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE6C76822956F684D, BOOL>(p0); } // E6C76822956F684D 09E3418D
	static BOOL IS_PED_WALKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC40D123602BB8, BOOL>(p0); } // C40D123602BB8 4B865C4A
	static BOOL IS_PED_RUNNING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1048D0AFAF445C32, BOOL>(p0); } // 1048D0AFAF445C32 E9A5578F
	static BOOL IS_PED_SPRINTING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x485BBA43A75711BE, BOOL>(p0); } // 485BBA43A75711BE 4F3E0633
	static BOOL IS_PED_STRAFING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2B12BB6C095B3C83, BOOL>(p0); } // 2B12BB6C095B3C83 EFEED13C
	static void TASK_SYNCHRONIZED_SCENE(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6, uint32_t p7, float p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x206610E40EE4D7D9, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 206610E40EE4D7D9 4F217E7B
	static void _0xF51B7D6313BA80B1(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t p5, uint32_t p6, float p7, float p8) { rage::NativeInvoke::Invoke<0xF51B7D6313BA80B1, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // F51B7D6313BA80B1 4D210467
	static void _0x503B60E56BB31805(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x503B60E56BB31805, uint32_t>(p0, p1); } // 503B60E56BB31805 F65F0F4F
	static void _0xF1B817899727F0E6(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t p5, float p6, float p7, float p8, float p9, float p10) { rage::NativeInvoke::Invoke<0xF1B817899727F0E6, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // F1B817899727F0E6 1683FE66
	static void _0x1FC26631515B5F44(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x1FC26631515B5F44, uint32_t>(p0, p1, p2, p3); } // 1FC26631515B5F44 6345EC80
	static void TASK_ARREST_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x2D3DEA13FFBBDBD3, uint32_t>(p0, p1); } // 2D3DEA13FFBBDBD3 BC0F153D
	static BOOL IS_PED_RUNNING_ARREST_TASK(uint32_t p0) { return rage::NativeInvoke::Invoke<0x153C0CAD8E18FDAE, BOOL>(p0); } // 153C0CAD8E18FDAE 6942DB7A
	static uint32_t IS_PED_BEING_ARRESTED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x87AF94EA533AA9EA, uint32_t>(p0); } // 87AF94EA533AA9EA 5FF6C2ED
	static void UNCUFF_PED(uint32_t p0) { rage::NativeInvoke::Invoke<0xAC635379DFFDE120, uint32_t>(p0); } // AC635379DFFDE120 A23A1D61
	static BOOL IS_PED_CUFFED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7C40FC31170FDB6F, BOOL>(p0); } // 7C40FC31170FDB6F 511CE741
}

namespace GAMEPLAY
{
	static uint32_t _0xF88FF6F7373BE689() { return rage::NativeInvoke::Invoke<0xF88FF6F7373BE689, uint32_t>(); } // F88FF6F7373BE689 4E9CA30A
	static uint32_t _0x261D91FA5B5168CA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x261D91FA5B5168CA, uint32_t>(p0); } // 261D91FA5B5168CA 11A178B8
	static void SET_RANDOM_SEED(uint32_t p0) { rage::NativeInvoke::Invoke<0x616C825EE5EBE8DD, uint32_t>(p0); } // 616C825EE5EBE8DD DB3FEB5C
	static void SET_TIME_SCALE(float p0) { rage::NativeInvoke::Invoke<0x1580B26E8449D082, uint32_t>(p0); } // 1580B26E8449D082 A7F84694
	static void SET_MISSION_FLAG(BOOL p0) { rage::NativeInvoke::Invoke<0xA81035D922E28F10, uint32_t>(p0); } // A81035D922E28F10 57592D52
	static BOOL GET_MISSION_FLAG() { return rage::NativeInvoke::Invoke<0x4E6BA6FF244D94A8, BOOL>(); } // 4E6BA6FF244D94A8 95115F97
	static void SET_RANDOM_EVENT_FLAG(BOOL p0) { rage::NativeInvoke::Invoke<0xD50D943D0D4E5EF1, uint32_t>(p0); } // D50D943D0D4E5EF1 A77F31E8
	static uint32_t GET_RANDOM_EVENT_FLAG() { return rage::NativeInvoke::Invoke<0x7BCE01926E77105A, uint32_t>(); } // 7BCE01926E77105A 794CC92C
	static uint32_t _0x65FA13F9CB4F9C97() { return rage::NativeInvoke::Invoke<0x65FA13F9CB4F9C97, uint32_t>(); } // 65FA13F9CB4F9C97
	static void _0x4A782776F0AECB02(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4A782776F0AECB02, uint32_t>(p0, p1); } // 4A782776F0AECB02
	static void _0xE6030A63125DFFFC(uint32_t p0) { rage::NativeInvoke::Invoke<0xE6030A63125DFFFC, uint32_t>(p0); } // E6030A63125DFFFC
	static void _0x1B3B7B7A61D73FE6(uint32_t p0) { rage::NativeInvoke::Invoke<0x1B3B7B7A61D73FE6, uint32_t>(p0); } // 1B3B7B7A61D73FE6
	static void _0x174E3E28784C7E4(uint32_t p0) { rage::NativeInvoke::Invoke<0x174E3E28784C7E4, uint32_t>(p0); } // 174E3E28784C7E4
	static void _0xD50489FF193C026D(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD50489FF193C026D, uint32_t>(p0, p1); } // D50489FF193C026D
	static void _0x72E8F5328BCDDFFA(uint32_t p0) { rage::NativeInvoke::Invoke<0x72E8F5328BCDDFFA, uint32_t>(p0); } // 72E8F5328BCDDFFA
	static void _0x2DE5B510F25CE31D() { rage::NativeInvoke::Invoke<0x2DE5B510F25CE31D, uint32_t>(); } // 2DE5B510F25CE31D
	static void _0xE32AB35327A7E2E5(uint32_t p0) { rage::NativeInvoke::Invoke<0xE32AB35327A7E2E5, uint32_t>(p0); } // E32AB35327A7E2E5
	static void _0x4F2CE8E787B36129(BOOL p0) { rage::NativeInvoke::Invoke<0x4F2CE8E787B36129, uint32_t>(p0); } // 4F2CE8E787B36129
	static void _0x100D1872BDC04276(BOOL p0) { rage::NativeInvoke::Invoke<0x100D1872BDC04276, uint32_t>(p0); } // 100D1872BDC04276 8B2DE971
	static void _0x6E6414C740A74C4D(uint32_t *p0) { rage::NativeInvoke::Invoke<0x6E6414C740A74C4D, uint32_t>(p0); } // 6E6414C740A74C4D E77199F7
	static uint32_t _0x15E8DE8507C72A78() { return rage::NativeInvoke::Invoke<0x15E8DE8507C72A78, uint32_t>(); } // 15E8DE8507C72A78 A8171E9E
	static uint32_t _0x9416832ECF606DE1() { return rage::NativeInvoke::Invoke<0x9416832ECF606DE1, uint32_t>(); } // 9416832ECF606DE1 353E8056
	static BOOL IS_PREV_WEATHER_TYPE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x97E9CF937B6A7B23, BOOL>(p0); } // 97E9CF937B6A7B23 250ADA61
	static BOOL IS_NEXT_WEATHER_TYPE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xDF94AC3FC45A62F4, BOOL>(p0); } // DF94AC3FC45A62F4 99CB167F
	static void SET_WEATHER_TYPE_PERSIST(uint32_t *p0) { rage::NativeInvoke::Invoke<0x9FA1B3ACA28289, uint32_t>(p0); } // 9FA1B3ACA28289 C6C04C75
	static void SET_WEATHER_TYPE_NOW_PERSIST(const char *p0) { rage::NativeInvoke::Invoke<0x336484E66DCC4360, uint32_t>(p0); } // 336484E66DCC4360 C869FE97
	static void SET_WEATHER_TYPE_NOW(uint32_t *p0) { rage::NativeInvoke::Invoke<0x3DEB4695E01D1114, uint32_t>(p0); } // 3DEB4695E01D1114 361E9EAC
	static void _0xDD37DC2407389271(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xDD37DC2407389271, uint32_t>(p0, p1); } // DD37DC2407389271 386F0D25
	static void SET_RANDOM_WEATHER_TYPE() { rage::NativeInvoke::Invoke<0xAB30A46C353049D9, uint32_t>(); } // AB30A46C353049D9 E7AA1BC9
	static void CLEAR_WEATHER_TYPE_PERSIST() { rage::NativeInvoke::Invoke<0x3B89C082BD00A29F, uint32_t>(); } // 3B89C082BD00A29F 6AB757D8
	static void _0x4E8FE0C85EF3559F(uint32_t *p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x4E8FE0C85EF3559F, uint32_t>(p0, p1, p2); } // 4E8FE0C85EF3559F 9A5C1D56
	static void _0x40C891C10D450E6F(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0x40C891C10D450E6F, uint32_t>(p0, p1, p2); } // 40C891C10D450E6F 5CA74040
	static void SET_OVERRIDE_WEATHER(uint32_t *p0) { rage::NativeInvoke::Invoke<0xFFEFAF075ADD4EF6, uint32_t>(p0); } // FFEFAF075ADD4EF6 D9082BB5
	static void CLEAR_OVERRIDE_WEATHER() { rage::NativeInvoke::Invoke<0x7BECC267192BA449, uint32_t>(); } // 7BECC267192BA449 7740EA4E
	static void _0x475CB470B4BF0B4(float p0) { rage::NativeInvoke::Invoke<0x475CB470B4BF0B4, uint32_t>(p0); } // 475CB470B4BF0B4 625181DC
	static void _0x245B5A16B4E6173C(float p0) { rage::NativeInvoke::Invoke<0x245B5A16B4E6173C, uint32_t>(p0); } // 245B5A16B4E6173C BEBBFDC8
	static void _0xAD5257EB1C7AE39E(float p0) { rage::NativeInvoke::Invoke<0xAD5257EB1C7AE39E, uint32_t>(p0); } // AD5257EB1C7AE39E 6926AB03
	static void _0x89B3F037B4EF7003(float p0) { rage::NativeInvoke::Invoke<0x89B3F037B4EF7003, uint32_t>(p0); } // 89B3F037B4EF7003 D447439D
	static void _0x6915FDAD9F6B2812(float p0) { rage::NativeInvoke::Invoke<0x6915FDAD9F6B2812, uint32_t>(p0); } // 6915FDAD9F6B2812 584E9C59
	static void _0x5ED284EDB79637B3(float p0) { rage::NativeInvoke::Invoke<0x5ED284EDB79637B3, uint32_t>(p0); } // 5ED284EDB79637B3 5656D578
	static void _0xA90D42A2C1FBD96B(float p0) { rage::NativeInvoke::Invoke<0xA90D42A2C1FBD96B, uint32_t>(p0); } // A90D42A2C1FBD96B 0DE40C28
	static void _0x4BDC98449D05E627(float p0) { rage::NativeInvoke::Invoke<0x4BDC98449D05E627, uint32_t>(p0); } // 4BDC98449D05E627 98C9138B
	static void _0xB85F18796358B2D7(float p0) { rage::NativeInvoke::Invoke<0xB85F18796358B2D7, uint32_t>(p0); } // B85F18796358B2D7 FB1A9CDE
	static void _0xBC0CBB0293B27D53(float p0) { rage::NativeInvoke::Invoke<0xBC0CBB0293B27D53, uint32_t>(p0); } // BC0CBB0293B27D53 1C0CAE89
	static void _0x386D039174AA7A5B(float p0) { rage::NativeInvoke::Invoke<0x386D039174AA7A5B, uint32_t>(p0); } // 386D039174AA7A5B 4671AC2E
	static void _0xC608F1406A121628(float p0) { rage::NativeInvoke::Invoke<0xC608F1406A121628, uint32_t>(p0); } // C608F1406A121628 DA02F415
	static void _0xECC6C081457CF47E(float p0) { rage::NativeInvoke::Invoke<0xECC6C081457CF47E, uint32_t>(p0); } // ECC6C081457CF47E 5F3DDEC0
	static void _0xEA14183C36D8FC89(float p0) { rage::NativeInvoke::Invoke<0xEA14183C36D8FC89, uint32_t>(p0); } // EA14183C36D8FC89 63A89684
	static void SET_WIND(float p0) { rage::NativeInvoke::Invoke<0xEDBB28CCF29B4ECF, uint32_t>(p0); } // EDBB28CCF29B4ECF C6294698
	static void SET_WIND_SPEED(float p0) { rage::NativeInvoke::Invoke<0x9F216AE622456E4A, uint32_t>(p0); } // 9F216AE622456E4A 45705F94
	static float GET_WIND_SPEED() { return rage::NativeInvoke::Invoke<0x92886C7E72809BA0, float>(); } // 92886C7E72809BA0 098F0F3C
	static void SET_WIND_DIRECTION(float p0) { rage::NativeInvoke::Invoke<0x7425778D35697636, uint32_t>(p0); } // 7425778D35697636 381AEEE9
	static Vector3 GET_WIND_DIRECTION() { return rage::NativeInvoke::Invoke<0x65B4FBF36880F8D1, Vector3>(); } // 65B4FBF36880F8D1 89499A0D
	static void _0x6DDF2EAD88B11D11(float p0) { rage::NativeInvoke::Invoke<0x6DDF2EAD88B11D11, uint32_t>(p0); } // 6DDF2EAD88B11D11
	static float GET_RAIN_LEVEL() { return rage::NativeInvoke::Invoke<0xCD0D0E179CF41499, float>(); } // CD0D0E179CF41499 C9F67F28
	static float GET_SNOW_LEVEL() { return rage::NativeInvoke::Invoke<0xA9F11163AAF2FDA4, float>(); } // A9F11163AAF2FDA4 1B09184F
	static void _0xE1FCD40D97BAD639() { rage::NativeInvoke::Invoke<0xE1FCD40D97BAD639, uint32_t>(); } // E1FCD40D97BAD639 DF38165E
	static void _0x8E0D22C2778B564F(uint32_t *p0) { rage::NativeInvoke::Invoke<0x8E0D22C2778B564F, uint32_t>(p0); } // 8E0D22C2778B564F 8727A4C5
	static void _0xA065BC0AFD0770EA(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xA065BC0AFD0770EA, uint32_t>(p0, p1); } // A065BC0AFD0770EA ED88FC61
	static void _0x9FC7460787DD3C17(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0x9FC7460787DD3C17, uint32_t>(p0, p1); } // 9FC7460787DD3C17 C9FA6E07
	static void _0x644864EF9B512DC4() { rage::NativeInvoke::Invoke<0x644864EF9B512DC4, uint32_t>(); } // 644864EF9B512DC4 2D7787BC
	static uint32_t GET_GAME_TIMER() { return rage::NativeInvoke::Invoke<0xF976C624234A4AA8, uint32_t>(); } // F976C624234A4AA8 A4EA0691
	static float GET_FRAME_TIME() { return rage::NativeInvoke::Invoke<0x94B2D2AEAA1D886E, float>(); } // 94B2D2AEAA1D886E 96374262
	static uint32_t GET_FRAME_COUNT() { return rage::NativeInvoke::Invoke<0xE3B6F359045B979E, uint32_t>(); } // E3B6F359045B979E B477A015
	static float GET_RANDOM_FLOAT_IN_RANGE(float p0, float p1) { return rage::NativeInvoke::Invoke<0x1E9A2D3AF075537, float>(p0, p1); } // 1E9A2D3AF075537 0562C4D0
	static uint32_t GET_RANDOM_INT_IN_RANGE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x4D3E68F73B727E49, uint32_t>(p0, p1); } // 4D3E68F73B727E49 4051115B
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float p0, float p1, float p2, float *p3) { return rage::NativeInvoke::Invoke<0xBC5E1C3D489E93FD, BOOL>(p0, p1, p2, p3); } // BC5E1C3D489E93FD A1BFD5E0
	static uint32_t _0xF542824EC07F7AF7(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xF542824EC07F7AF7, uint32_t>(p0, p1, p2, p3, p4); } // F542824EC07F7AF7 64D91CED
	static float ASIN(float p0) { return rage::NativeInvoke::Invoke<0x5F68F8D34FA0DED4, float>(p0); } // 5F68F8D34FA0DED4 998E5CAD
	static float ACOS(float p0) { return rage::NativeInvoke::Invoke<0xA545696CB0A4D4F5, float>(p0); } // A545696CB0A4D4F5 F4038776
	static float TAN(float p0) { return rage::NativeInvoke::Invoke<0x7DC0D9AF1600D077, float>(p0); } // 7DC0D9AF1600D077 D320CE5E
	static float ATAN(float p0) { return rage::NativeInvoke::Invoke<0xF2AD27348AC2306, float>(p0); } // F2AD27348AC2306 7A03CC8E
	static float ATAN2(float p0, float p1) { return rage::NativeInvoke::Invoke<0x1E7EBED5BB2C078C, float>(p0, p1); } // 1E7EBED5BB2C078C 2508AC81
	static float GET_DISTANCE_BETWEEN_COORDS(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return rage::NativeInvoke::Invoke<0x8FE221761D524CFE, float>(p0, p1, p2, p3, p4, p5, p6); } // 8FE221761D524CFE F698765E
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x6C63551083F1AB3E, float>(p0, p1, p2, p3); } // 6C63551083F1AB3E DBF75E58
	static float GET_HEADING_FROM_VECTOR_2D(float p0, float p1) { return rage::NativeInvoke::Invoke<0xA75239A5F28CBA62, float>(p0, p1); } // A75239A5F28CBA62 D209D52B
	static float _0xDDCFC98811DA3C2E(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return rage::NativeInvoke::Invoke<0xDDCFC98811DA3C2E, float>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // DDCFC98811DA3C2E 89459F0A
	static Vector3 _0x14E7CD238FB397F8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x14E7CD238FB397F8, Vector3>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 14E7CD238FB397F8 CAECF37E
	static BOOL _0xB5133CADD1DD14B0(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, uint32_t *p12) { return rage::NativeInvoke::Invoke<0xB5133CADD1DD14B0, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // B5133CADD1DD14B0 C6CC812C
	static void SET_BIT(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3DBE2A7AF9E71C82, uint32_t>(p0, p1); } // 3DBE2A7AF9E71C82 4EFE7E6B
	static void CLEAR_BIT(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCD27BF29FB9012E2, uint32_t>(p0, p1); } // CD27BF29FB9012E2 8BC9E618
	static uint32_t GET_HASH_KEY(const char *p0) { return rage::NativeInvoke::Invoke<0x3BA42EA02A10243D, uint32_t>(p0); } // 3BA42EA02A10243D 98EFF6F1
	static void _0xBD49D1444E891DA3(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t *p9, uint32_t *p10, uint32_t *p11, uint32_t *p12) { rage::NativeInvoke::Invoke<0xBD49D1444E891DA3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // BD49D1444E891DA3 87B92190
	static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, uint32_t p11, BOOL p12) { return rage::NativeInvoke::Invoke<0x3765E7D72FF74383, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 3765E7D72FF74383 C013972F
	static BOOL IS_POSITION_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, uint32_t p9, BOOL p10) { return rage::NativeInvoke::Invoke<0x440C528C2E8EE43C, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 440C528C2E8EE43C 452E8D9E
	static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x4C336ED2E0D0C118, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // 4C336ED2E0D0C118 C161558D
	static void CLEAR_AREA(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x4BCBC9058A5CECE1, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 4BCBC9058A5CECE1 854E9AB8
	static void _0x2E23F348DA42E891(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { rage::NativeInvoke::Invoke<0x2E23F348DA42E891, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2E23F348DA42E891 20E4FFD9
	static void CLEAR_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { rage::NativeInvoke::Invoke<0x0407F91A831576A66, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0407F91A831576A66 63320F3C
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { rage::NativeInvoke::Invoke<0xA9F8B7FE33AD0C93, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // A9F8B7FE33AD0C93 F11A3018
	static void CLEAR_AREA_OF_OBJECTS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x2F36A13C15BE17D7, uint32_t>(p0, p1, p2, p3, p4); } // 2F36A13C15BE17D7 BB720FE7
	static void CLEAR_AREA_OF_PEDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xAB97C8EA78D4E7DF, uint32_t>(p0, p1, p2, p3, p4); } // AB97C8EA78D4E7DF 25BE7FA8
	static void CLEAR_AREA_OF_COPS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x0FD19596BB0697987, uint32_t>(p0, p1, p2, p3, p4); } // 0FD19596BB0697987 95C53824
	static void CLEAR_AREA_OF_PROJECTILES(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x013196E39740F8C20, uint32_t>(p0, p1, p2, p3, p4); } // 013196E39740F8C20 18DB5434
	static void SET_SAVE_MENU_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0xB7C6FD37EA7D88D3, uint32_t>(p0); } // B7C6FD37EA7D88D3 F5CCF164
	static uint32_t _0x94911FEF1F198241() { return rage::NativeInvoke::Invoke<0x94911FEF1F198241, uint32_t>(); } // 94911FEF1F198241 39771F21
	static void SET_CREDITS_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0x7253108886369394, uint32_t>(p0); } // 7253108886369394 EC2A0ECF
	static void _0xA82778ED2F1B9B21(BOOL p0) { rage::NativeInvoke::Invoke<0xA82778ED2F1B9B21, uint32_t>(p0); } // A82778ED2F1B9B21 75B06B5A
	static uint32_t _0x03B4AC578D9CD137C() { return rage::NativeInvoke::Invoke<0x03B4AC578D9CD137C, uint32_t>(); } // 03B4AC578D9CD137C 2569C9A7
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(uint32_t *p0) { rage::NativeInvoke::Invoke<0xD530A1AEC901B9D1, uint32_t>(p0); } // D530A1AEC901B9D1 9F861FD4
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { rage::NativeInvoke::Invoke<0x44E747EFAA4C6724, uint32_t>(); } // 44E747EFAA4C6724 878486CE
	static uint32_t ADD_HOSPITAL_RESTART(float p0, float p1, float p2, float p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xD9F9D5E410D3F3D2, uint32_t>(p0, p1, p2, p3, p4); } // D9F9D5E410D3F3D2 4F3E3104
	static void DISABLE_HOSPITAL_RESTART(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCC8D845F6BB3A065, uint32_t>(p0, p1); } // CC8D845F6BB3A065 09F49C72
	static uint32_t ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xC3307C75A0214AF4, uint32_t>(p0, p1, p2, p3, p4); } // C3307C75A0214AF4 E96C29FE
	static void DISABLE_POLICE_RESTART(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8998CC70E162BD8F, uint32_t>(p0, p1); } // 8998CC70E162BD8F 0A280324
	static void _0x3C36C32948C4DBFC(BOOL p0) { rage::NativeInvoke::Invoke<0x3C36C32948C4DBFC, uint32_t>(p0); } // 3C36C32948C4DBFC 296574AE
	static void IGNORE_NEXT_RESTART(BOOL p0) { rage::NativeInvoke::Invoke<0x4797CB606B635C06, uint32_t>(p0); } // 4797CB606B635C06 DA13A4B6
	static void _0x42A126915DFEBF75(BOOL p0) { rage::NativeInvoke::Invoke<0x42A126915DFEBF75, uint32_t>(p0); } // 42A126915DFEBF75 C9F6F0BC
	static void _0x25DD4707BD613079(BOOL p0) { rage::NativeInvoke::Invoke<0x25DD4707BD613079, uint32_t>(p0); } // 25DD4707BD613079 CB074B9D
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL p0) { rage::NativeInvoke::Invoke<0x842A97A1C98339FF, uint32_t>(p0); } // 842A97A1C98339FF ACDE6985
	static void SET_FADE_IN_AFTER_LOAD(BOOL p0) { rage::NativeInvoke::Invoke<0x2D57F6762642A79, uint32_t>(p0); } // 2D57F6762642A79 6E00EB0B
	static uint32_t REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, uint32_t *p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x4ED96CF8D7C3BB7F, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 4ED96CF8D7C3BB7F 39C1849A
	static void SET_SAVE_HOUSE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x5318436D5404C335, uint32_t>(p0, p1, p2); } // 5318436D5404C335 C3240BB4
	static uint32_t OVERRIDE_SAVE_HOUSE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x76F555D0F18C34D2, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 76F555D0F18C34D2 47436C12
	static uint32_t _0xD2E03BAB98C16744(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xD2E03BAB98C16744, uint32_t>(p0, p1, p2, p3); } // D2E03BAB98C16744 C4D71AB4
	static void DO_AUTO_SAVE() { rage::NativeInvoke::Invoke<0xDA15B9DE46315DF1, uint32_t>(); } // DA15B9DE46315DF1 54C44B1A
	static BOOL _0xA37DF7DAA4017CC6() { return rage::NativeInvoke::Invoke<0xA37DF7DAA4017CC6, BOOL>(); } // A37DF7DAA4017CC6 A8546914
	static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return rage::NativeInvoke::Invoke<0x15AE84EA690067BF, BOOL>(); } // 15AE84EA690067BF 36F75399
	static uint32_t _0x50E8BE7396CF4A30() { return rage::NativeInvoke::Invoke<0x50E8BE7396CF4A30, uint32_t>(); } // 50E8BE7396CF4A30 78350773
	static void _0x06DC06E4836AD71AD() { rage::NativeInvoke::Invoke<0x06DC06E4836AD71AD, uint32_t>(); } // 06DC06E4836AD71AD 5A45B11A
	static void BEGIN_REPLAY_STATS(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x6E055A4B0EFC0A03, uint32_t>(p0, p1); } // 6E055A4B0EFC0A03 17F4F44D
	static void _0x7160BCAC681232B2(uint32_t p0) { rage::NativeInvoke::Invoke<0x7160BCAC681232B2, uint32_t>(p0); } // 7160BCAC681232B2 81216EE0
	static void END_REPLAY_STATS() { rage::NativeInvoke::Invoke<0xF68C2FF686BD6204, uint32_t>(); } // F68C2FF686BD6204 CB570185
	static uint32_t _0x17A6DFACDB7D97FF() { return rage::NativeInvoke::Invoke<0x17A6DFACDB7D97FF, uint32_t>(); } // 17A6DFACDB7D97FF C58250F1
	static uint32_t _0xD0448F8C0E2239C6() { return rage::NativeInvoke::Invoke<0xD0448F8C0E2239C6, uint32_t>(); } // D0448F8C0E2239C6 50C39926
	static uint32_t _0xE906ACFF18EEFCCC() { return rage::NativeInvoke::Invoke<0xE906ACFF18EEFCCC, uint32_t>(); } // E906ACFF18EEFCCC 710E5D1E
	static uint32_t _0xFF3845B0D94BFB89() { return rage::NativeInvoke::Invoke<0xFF3845B0D94BFB89, uint32_t>(); } // FF3845B0D94BFB89 C7BD1AF0
	static uint32_t _0x1AA3B3C5D8DD60B7(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1AA3B3C5D8DD60B7, uint32_t>(p0); } // 1AA3B3C5D8DD60B7 22BE2423
	static void CLEAR_REPLAY_STATS() { rage::NativeInvoke::Invoke<0x62C5C94888EF3195, uint32_t>(); } // 62C5C94888EF3195 C47DFF02
	static BOOL _0xB9E146B3A93572F7() { return rage::NativeInvoke::Invoke<0xB9E146B3A93572F7, BOOL>(); } // B9E146B3A93572F7 F62B3C48
	static BOOL _0xE02B82C7A5462F37() { return rage::NativeInvoke::Invoke<0xE02B82C7A5462F37, BOOL>(); } // E02B82C7A5462F37 3589452B
	static uint32_t _0x75994C43D2EB94BB() { return rage::NativeInvoke::Invoke<0x75994C43D2EB94BB, uint32_t>(); } // 75994C43D2EB94BB 144AAF22
	static BOOL IS_MEMORY_CARD_IN_USE() { return rage::NativeInvoke::Invoke<0x96B42C5AFF2F25F9, BOOL>(); } // 96B42C5AFF2F25F9 40CE4DFD
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, BOOL p7, uint32_t p8, uint32_t p9, BOOL p10, BOOL p11, float p12) { rage::NativeInvoke::Invoke<0xEB1CBB6A08981A01, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // EB1CBB6A08981A01 CB7415AC
	static void _0x678013669F4DFF5(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { rage::NativeInvoke::Invoke<0x678013669F4DFF5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 678013669F4DFF5 52ACCB7B
	static void _0x3C700A81FEF45F8E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13, uint32_t p14, uint32_t p15) { rage::NativeInvoke::Invoke<0x3C700A81FEF45F8E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 3C700A81FEF45F8E
	static void GET_MODEL_DIMENSIONS(uint32_t p0, Vector3 *p1, Vector3 *p2) { rage::NativeInvoke::Invoke<0x0B72AA272E2B242A6, uint32_t>(p0, p1, p2); } // 0B72AA272E2B242A6 91ABB8E0
	static void SET_FAKE_WANTED_LEVEL(uint32_t p0) { rage::NativeInvoke::Invoke<0xDD361D9B8B427B1C, uint32_t>(p0); } // DD361D9B8B427B1C 85B1C9FA
	static uint32_t _0x97E826B0580A564A() { return rage::NativeInvoke::Invoke<0x97E826B0580A564A, uint32_t>(); } // 97E826B0580A564A 0022A430
	static uint32_t IS_BIT_SET(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x61D8FEAF64881CDA, uint32_t>(p0, p1); } // 61D8FEAF64881CDA 902E26AC
	static void USING_MISSION_CREATOR(BOOL p0) { rage::NativeInvoke::Invoke<0x8825846BE74B0F57, uint32_t>(p0); } // 8825846BE74B0F57 20AB0B6B
	static void _0xF64F3951AA71FBBF(BOOL p0) { rage::NativeInvoke::Invoke<0xF64F3951AA71FBBF, uint32_t>(p0); } // F64F3951AA71FBBF 082BA6F2
	static void SET_MINIGAME_IN_PROGRESS(BOOL p0) { rage::NativeInvoke::Invoke<0x48840068BEF14F82, uint32_t>(p0); } // 48840068BEF14F82 348B9046
	static uint32_t IS_MINIGAME_IN_PROGRESS() { return rage::NativeInvoke::Invoke<0x6D1105B605F9B478, uint32_t>(); } // 6D1105B605F9B478 53A95E13
	static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return rage::NativeInvoke::Invoke<0x6B9BEBD7B097ABB2, BOOL>(); } // 6B9BEBD7B097ABB2 7605EF6F
	static uint32_t IS_SNIPER_INVERTED() { return rage::NativeInvoke::Invoke<0x5566230901EC73EC, uint32_t>(); } // 5566230901EC73EC 5C3BF51B
	static BOOL _0xE8E4E737136ABCAE() { return rage::NativeInvoke::Invoke<0xE8E4E737136ABCAE, BOOL>(); } // E8E4E737136ABCAE BAF17315
	static uint32_t GET_PROFILE_SETTING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x227FB8F9C772BAFB, uint32_t>(p0); } // 227FB8F9C772BAFB D374BEBC
	static uint32_t ARE_STRINGS_EQUAL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0A858564DC37EED5E, uint32_t>(p0, p1); } // 0A858564DC37EED5E 877C0BC5
	static uint32_t COMPARE_STRINGS(uint32_t *p0, uint32_t *p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x8D4F2EF5200D89CB, uint32_t>(p0, p1, p2, p3); } // 8D4F2EF5200D89CB FE25A58F
	static uint32_t ABSI(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEC8415598F0CAF4B, uint32_t>(p0); } // EC8415598F0CAF4B B44677C5
	static float ABSF(float p0) { return rage::NativeInvoke::Invoke<0x75E01E8585722F89, float>(p0); } // 75E01E8585722F89 AF6F6E0B
	static BOOL IS_SNIPER_BULLET_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0xA6F6064678460049, BOOL>(p0, p1, p2, p3, p4, p5); } // A6F6064678460049 0483715C
	static BOOL IS_PROJECTILE_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return rage::NativeInvoke::Invoke<0xEE93FF4158B54B09, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // EE93FF4158B54B09 78E1A557
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, BOOL p7) { return rage::NativeInvoke::Invoke<0x876E2901E525BE19, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // 876E2901E525BE19 2B73BCF6
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, BOOL p8) { return rage::NativeInvoke::Invoke<0xD6478E72C9640744, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // D6478E72C9640744 D1AE2681
	static BOOL _0x7EA638DAA99BFE28(float p0, float p1, float p2, uint32_t p3, float p4, BOOL p5) { return rage::NativeInvoke::Invoke<0x7EA638DAA99BFE28, BOOL>(p0, p1, p2, p3, p4, p5); } // 7EA638DAA99BFE28 BE81F1E2
	static uint32_t _0x6EEE1DB5C6B17C8C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x6EEE1DB5C6B17C8C, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 6EEE1DB5C6B17C8C 1A40454B
	static uint32_t _0x6A06C2FF2915A3A9(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0x6A06C2FF2915A3A9, uint32_t>(p0, p1, p2, p3, p4); } // 6A06C2FF2915A3A9 6BDE5CE4
	static uint32_t _0x2409FBDFB6F61EB8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x2409FBDFB6F61EB8, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2409FBDFB6F61EB8 507BC6F7
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return rage::NativeInvoke::Invoke<0xD4ED1C6612EABD8B, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // D4ED1C6612EABD8B E2DB58F7
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x982F2F40B035E77, BOOL>(p0, p1, p2, p3, p4); } // 982F2F40B035E77 B54F46CA
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return rage::NativeInvoke::Invoke<0xE929D27A2ED34DF8, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // E929D27A2ED34DF8 AB73ED26
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { return rage::NativeInvoke::Invoke<0x90782A0CBF77A844, BOOL>(p0, p1, p2, p3, p4, p5); } // 90782A0CBF77A844 902BC7D9
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return rage::NativeInvoke::Invoke<0xEBB9572B341B3A2F, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // EBB9572B341B3A2F 2C2618CC
	static uint32_t IS_ORBIS_VERSION() { return rage::NativeInvoke::Invoke<0xA09FDB4B3C001CAB, uint32_t>(); } // A09FDB4B3C001CAB 40282018
	static uint32_t IS_DURANGO_VERSION() { return rage::NativeInvoke::Invoke<0x5D64B4BDB6FCA4F0, uint32_t>(); } // 5D64B4BDB6FCA4F0 46FB06A5
	static uint32_t IS_XBOX360_VERSION() { return rage::NativeInvoke::Invoke<0x2F4E1FF400251C08, uint32_t>(); } // 2F4E1FF400251C08 24005CC8
	static uint32_t IS_PS3_VERSION() { return rage::NativeInvoke::Invoke<0x9763C0E44A644CB2, uint32_t>(); } // 9763C0E44A644CB2 4C0D5303
	static uint32_t IS_PC_VERSION() { return rage::NativeInvoke::Invoke<0x80AD636AD4184F2B, uint32_t>(); } // 80AD636AD4184F2B 4D5D9EE3
	static uint32_t IS_AUSSIE_VERSION() { return rage::NativeInvoke::Invoke<0xBED94C55366FC08, uint32_t>(); } // BED94C55366FC08 944BA1DC
	static BOOL IS_STRING_NULL(BOOL p0) { return rage::NativeInvoke::Invoke<0xD504011E20D63A81, BOOL>(p0); } // D504011E20D63A81 8E71E00F
	static uint32_t IS_STRING_NULL_OR_EMPTY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8FA72E132AAFA62F, uint32_t>(p0); } // 8FA72E132AAFA62F 42E9F2CA
	static BOOL STRING_TO_INT(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xCC7361D116CBD916, BOOL>(p0, p1); } // CC7361D116CBD916 590A8160
	static void SET_BITS_IN_RANGE(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x7CCE15D3BB10A0F7, uint32_t>(p0, p1, p2, p3); } // 7CCE15D3BB10A0F7 32094719
	static uint32_t GET_BITS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x33B60B13F4D7A754, uint32_t>(p0, p1, p2); } // 33B60B13F4D7A754 CA03A1E5
	static uint32_t ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, uint32_t p15, uint32_t p16) { return rage::NativeInvoke::Invoke<0x4A249A9E5CAAF96D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 4A249A9E5CAAF96D B630E5FF
	static uint32_t ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, uint32_t p17, uint32_t p18) { return rage::NativeInvoke::Invoke<0xE8ADEC5282D991EE, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // E8ADEC5282D991EE B9B7E777
	static void DELETE_STUNT_JUMP(uint32_t p0) { rage::NativeInvoke::Invoke<0xB154884BEC8C90C5, uint32_t>(p0); } // B154884BEC8C90C5 840CB5DA
	static void ENABLE_STUNT_JUMP_SET(uint32_t p0) { rage::NativeInvoke::Invoke<0x907ABD9C21183099, uint32_t>(p0); } // 907ABD9C21183099 9D1E7785
	static void DISABLE_STUNT_JUMP_SET(uint32_t p0) { rage::NativeInvoke::Invoke<0xDFE913E05B28F77B, uint32_t>(p0); } // DFE913E05B28F77B 644C9FA4
	static void _0xE83F1004CF3A02E(BOOL p0) { rage::NativeInvoke::Invoke<0xE83F1004CF3A02E, uint32_t>(p0); } // E83F1004CF3A02E 3C806A2D
	static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return rage::NativeInvoke::Invoke<0x46C8195C64F14258, BOOL>(); } // 46C8195C64F14258 F477D0B1
	static BOOL _0x56D6A1F4811E2F9A() { return rage::NativeInvoke::Invoke<0x56D6A1F4811E2F9A, BOOL>(); } // 56D6A1F4811E2F9A 021636EE
	static uint32_t _0xCA7B0D7685599630() { return rage::NativeInvoke::Invoke<0xCA7B0D7685599630, uint32_t>(); } // CA7B0D7685599630 006F9BA2
	static void CANCEL_STUNT_JUMP() { rage::NativeInvoke::Invoke<0xCDA654FAE03C06F9, uint32_t>(); } // CDA654FAE03C06F9 F43D9821
	static void SET_GAME_PAUSED(BOOL p0) { rage::NativeInvoke::Invoke<0x1757405122DE8566, uint32_t>(p0); } // 1757405122DE8566 8230FF6C
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL p0) { rage::NativeInvoke::Invoke<0xB43679BBB30F1391, uint32_t>(p0); } // B43679BBB30F1391 A0C3CE29
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL p0) { rage::NativeInvoke::Invoke<0x952F8F1F0AE0C407, uint32_t>(p0); } // 952F8F1F0AE0C407 D06F1720
	static BOOL _0x0695803D9947A1969(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0695803D9947A1969, BOOL>(p0, p1); } // 0695803D9947A1969 FF6191E1
	static void _0x4DE32C0390C17D15(uint32_t p0) { rage::NativeInvoke::Invoke<0x4DE32C0390C17D15, uint32_t>(p0); } // 4DE32C0390C17D15 721B2492
	static void _0x1CD86B48C55CAB17(uint32_t p0) { rage::NativeInvoke::Invoke<0x1CD86B48C55CAB17, uint32_t>(p0); } // 1CD86B48C55CAB17 E202879D
	static uint32_t IS_FRONTEND_FADING() { return rage::NativeInvoke::Invoke<0x4D82B9EA3B0EA296, uint32_t>(); } // 4D82B9EA3B0EA296 8FF6232C
	static void POPULATE_NOW() { rage::NativeInvoke::Invoke<0xFE4CD40B43ECEDD9, uint32_t>(); } // FE4CD40B43ECEDD9 72C20700
	static uint32_t GET_INDEX_OF_CURRENT_LEVEL() { return rage::NativeInvoke::Invoke<0x85D4D9CD3B4EADCA, uint32_t>(); } // 85D4D9CD3B4EADCA 6F203C6E
	static void SET_GRAVITY_LEVEL(uint32_t p0) { rage::NativeInvoke::Invoke<0xEAF2311B13C121CB, uint32_t>(p0); } // EAF2311B13C121CB 2D833F4A
	static void START_SAVE_DATA(uint32_t *p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x99253BD323A46059, uint32_t>(p0, p1, p2); } // 99253BD323A46059 881A694D
	static void STOP_SAVE_DATA() { rage::NativeInvoke::Invoke<0x53A77ED77DEA40DD, uint32_t>(); } // 53A77ED77DEA40DD 3B1C07C8
	static uint32_t _0xF1EEAFFD5B786A7A(BOOL p0) { return rage::NativeInvoke::Invoke<0xF1EEAFFD5B786A7A, uint32_t>(p0); } // F1EEAFFD5B786A7A 9EF0BC64
	static void REGISTER_INT_TO_SAVE(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x977B2E8A28033DFD, uint32_t>(p0, p1); } // 977B2E8A28033DFD B930956F
	static void _0x5082BF5A5BE1B7B9(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x5082BF5A5BE1B7B9, uint32_t>(p0, p1); } // 5082BF5A5BE1B7B9 9B38374A
	static void REGISTER_FLOAT_TO_SAVE(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xC82D12B00BF6D66C, uint32_t>(p0, p1); } // C82D12B00BF6D66C DB06F7AD
	static void REGISTER_BOOL_TO_SAVE(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x29E79CF64145D110, uint32_t>(p0, p1); } // 29E79CF64145D110 5417E0E0
	static void REGISTER_TEXT_LABEL_TO_SAVE(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xBB7EFF684140010E, uint32_t>(p0, p1); } // BB7EFF684140010E 284352C4
	static void _0x22ADD068A5DB4E6E(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x22ADD068A5DB4E6E, uint32_t>(p0, p1); } // 22ADD068A5DB4E6E E2089749
	static void _0xE5FCC604EDF3BF29(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xE5FCC604EDF3BF29, uint32_t>(p0, p1); } // E5FCC604EDF3BF29 F91B8C33
	static void _0xE6F891FD2C1A8813(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xE6F891FD2C1A8813, uint32_t>(p0, p1); } // E6F891FD2C1A8813 74E8FAD9
	static void _0x3E84FA70388C8A67(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x3E84FA70388C8A67, uint32_t>(p0, p1); } // 3E84FA70388C8A67 6B4335DD
	static void _0xF581D0B98CD00612(uint32_t *p0, uint32_t p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xF581D0B98CD00612, uint32_t>(p0, p1, p2); } // F581D0B98CD00612 FB45728E
	static void STOP_SAVE_STRUCT() { rage::NativeInvoke::Invoke<0x56A9EE8CD73E2317, uint32_t>(); } // 56A9EE8CD73E2317 C2624A28
	static void _0x4B995FFCAEFDA732(uint32_t *p0, uint32_t p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x4B995FFCAEFDA732, uint32_t>(p0, p1, p2); } // 4B995FFCAEFDA732 893A342C
	static void STOP_SAVE_ARRAY() { rage::NativeInvoke::Invoke<0x0BC67DCCE1939FA39, uint32_t>(); } // 0BC67DCCE1939FA39 0CAD8217
	static void _0xB8265112BB26591B(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB8265112BB26591B, uint32_t>(p0, p1); } // B8265112BB26591B 0B710A51
	static void _0xC7993238F8B1178B(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC7993238F8B1178B, uint32_t>(p0, p1); } // C7993238F8B1178B E0F0684F
	static uint32_t _0x45955CC2535A00C8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x45955CC2535A00C8, uint32_t>(p0); } // 45955CC2535A00C8 3CE5BF6B
	static BOOL CREATE_INCIDENT(uint32_t p0, float p1, float p2, float p3, uint32_t p4, float p5, uint32_t *p6) { return rage::NativeInvoke::Invoke<0xCFC0C6BFDE352A2C, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // CFC0C6BFDE352A2C FC5FF7B3
	static BOOL CREATE_INCIDENT_WITH_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0x079BF6C1D53D948FF, BOOL>(p0, p1, p2, p3, p4); } // 079BF6C1D53D948FF BBC35B03
	static void DELETE_INCIDENT(uint32_t p0) { rage::NativeInvoke::Invoke<0x2D6CAA14834DECE1, uint32_t>(p0); } // 2D6CAA14834DECE1 212BD0DC
	static BOOL IS_INCIDENT_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA5C8455272A08BBF, BOOL>(p0); } // A5C8455272A08BBF 31FD0BA4
	static void _0x4645DD2E9053D97E(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x4645DD2E9053D97E, uint32_t>(p0, p1, p2); } // 4645DD2E9053D97E 0242D88E
	static void _0xCB9B128F3C348120(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xCB9B128F3C348120, uint32_t>(p0, p1); } // CB9B128F3C348120 1F38102E
	static uint32_t FIND_SPAWN_POINT_IN_DIRECTION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x11EB5294B4925536, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 11EB5294B4925536 71AEFD77
	static uint32_t _0xAF60799C85D2A340(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0xAF60799C85D2A340, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // AF60799C85D2A340 42BF09B3
	static void _0xED00A57A53A87144(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xED00A57A53A87144, uint32_t>(p0, p1); } // ED00A57A53A87144 FBDBE374
	static void ENABLE_TENNIS_MODE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xCE1E0884D80F4726, uint32_t>(p0, p1, p2); } // CE1E0884D80F4726 0BD3F9EC
	static BOOL IS_TENNIS_MODE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x377EE3F61D8E12B2, BOOL>(p0); } // 377EE3F61D8E12B2 04A947BA
	static void _0xD5853A15AB570B76(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, BOOL p5) { rage::NativeInvoke::Invoke<0xD5853A15AB570B76, uint32_t>(p0, p1, p2, p3, p4, p5); } // D5853A15AB570B76 C20A7D2B
	static BOOL _0x62FA6671DD0BA53E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x62FA6671DD0BA53E, BOOL>(p0); } // 62FA6671DD0BA53E 8501E727
	static BOOL _0x5AEA7198B0FC89AC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5AEA7198B0FC89AC, BOOL>(p0); } // 5AEA7198B0FC89AC 1A332D2D
	static BOOL _0x33749C5D66EE4080(uint32_t p0) { return rage::NativeInvoke::Invoke<0x33749C5D66EE4080, BOOL>(p0); } // 33749C5D66EE4080
	static void _0xE508EBCE35DE5055(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5) { rage::NativeInvoke::Invoke<0xE508EBCE35DE5055, uint32_t>(p0, p1, p2, p3, p4, p5); } // E508EBCE35DE5055 0C8865DF
	static void _0x6F3520F9937648F6(uint32_t p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0x6F3520F9937648F6, uint32_t>(p0, p1, p2); } // 6F3520F9937648F6 49F977A9
	static void _0xF2D917FD145E0BD8(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xF2D917FD145E0BD8, uint32_t>(p0, p1, p2); } // F2D917FD145E0BD8 6F009E33
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { rage::NativeInvoke::Invoke<0x29410FDCB6E9CEE0, uint32_t>(); } // 29410FDCB6E9CEE0 DA65ECAA
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { rage::NativeInvoke::Invoke<0x1D357F813F6CD280, uint32_t>(p0); } // 1D357F813F6CD280 6283BE32
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xF53DECA815E812D3, uint32_t>(p0, p1); } // F53DECA815E812D3 ABADB709
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x41508CCA819003ED, uint32_t>(p0, p1); } // 41508CCA819003ED 1C996BCD
	static uint32_t _0x9D88055DF28AFF2A(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return rage::NativeInvoke::Invoke<0x9D88055DF28AFF2A, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 9D88055DF28AFF2A F557BAF9
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uint32_t p0) { rage::NativeInvoke::Invoke<0x7E9D95E705C0BC54, uint32_t>(p0); } // 7E9D95E705C0BC54 A8D2FB92
	static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { rage::NativeInvoke::Invoke<0xAB8E4C087AFBAF06, uint32_t>(); } // AB8E4C087AFBAF06 9A17F835
	static void _0x3A8E4ED9E47E9468() { rage::NativeInvoke::Invoke<0x3A8E4ED9E47E9468, uint32_t>(); } // 3A8E4ED9E47E9468 E0C9307E
	static void _0x18E530BE5381D832(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x18E530BE5381D832, uint32_t>(p0, p1); } // 18E530BE5381D832 A0D8C749
	static void _0xD3E8DA8836BAE239(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xD3E8DA8836BAE239, uint32_t>(p0, p1, p2); } // D3E8DA8836BAE239 24A4E0B2
	static void _0xA3B698C66AC447B6() { rage::NativeInvoke::Invoke<0xA3B698C66AC447B6, uint32_t>(); } // A3B698C66AC447B6 66C3C59C
	static void _0xBCA5E613960DE570(BOOL p0) { rage::NativeInvoke::Invoke<0xBCA5E613960DE570, uint32_t>(p0); } // BCA5E613960DE570 D9660339
	static void _0x305C306CE618614(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6, uint32_t *p7, uint32_t *p8, uint32_t *p9, uint32_t *p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x305C306CE618614, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 305C306CE618614 D2688412
	static void DISPLAY_ONSCREEN_KEYBOARD(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x00A5310BCC49AEE75B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 00A5310BCC49AEE75B AD99F2CE
	static uint32_t UPDATE_ONSCREEN_KEYBOARD() { return rage::NativeInvoke::Invoke<0x0807035052B6EC8A1, uint32_t>(); } // 0807035052B6EC8A1 23D0A1CE
	static uint32_t GET_ONSCREEN_KEYBOARD_RESULT() { return rage::NativeInvoke::Invoke<0xB5C311A32D6D7A09, uint32_t>(); } // B5C311A32D6D7A09 44828FB3
	static void _0x78D7229F1827FA5E(uint32_t p0) { rage::NativeInvoke::Invoke<0x78D7229F1827FA5E, uint32_t>(p0); } // 78D7229F1827FA5E 3301EA47
	static void _0x4701C156DA1B94B5(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4701C156DA1B94B5, uint32_t>(p0, p1); } // 4701C156DA1B94B5 42B484ED
	static void _0x2C5CC0AC66859B07(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2C5CC0AC66859B07, uint32_t>(p0, p1); } // 2C5CC0AC66859B07 8F60366E
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0x9D3C19440954B0A5, uint32_t>(p0); } // 9D3C19440954B0A5 2EAFA1D1
	static void SET_FIRE_AMMO_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0xC2BBDC5E9309A521, uint32_t>(p0); } // C2BBDC5E9309A521 7C18FC8A
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0x450DD675420E0A85, uint32_t>(p0); } // 450DD675420E0A85 96663D56
	static void SET_SUPER_JUMP_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0x2955DFEB27F45F56, uint32_t>(p0); } // 2955DFEB27F45F56 86745EF3
	static uint32_t _0x8969EF94F09C8981() { return rage::NativeInvoke::Invoke<0x8969EF94F09C8981, uint32_t>(); } // 8969EF94F09C8981 C3C10FCC
	static void _0x314F35CE26024EE0() { rage::NativeInvoke::Invoke<0x314F35CE26024EE0, uint32_t>(); } // 314F35CE26024EE0 054EC103
	static uint32_t _0x85B80D0F84A3F70C() { return rage::NativeInvoke::Invoke<0x85B80D0F84A3F70C, uint32_t>(); } // 85B80D0F84A3F70C 46B5A15C
	static void _0x924D98FC7B72864B() { rage::NativeInvoke::Invoke<0x924D98FC7B72864B, uint32_t>(); } // 924D98FC7B72864B 5D209F25
	static void _0x076E2F28DE64D527F(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x076E2F28DE64D527F, uint32_t>(p0, p1, p2, p3); } // 076E2F28DE64D527F 2D33F15A
	static void _0x6F29EA7281B233B5() { rage::NativeInvoke::Invoke<0x6F29EA7281B233B5, uint32_t>(); } // 6F29EA7281B233B5 DF99925C
	static void _0xC517EF42E38E9632(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xC517EF42E38E9632, uint32_t>(p0, p1, p2, p3); } // C517EF42E38E9632 A27F4472
	static BOOL _0xAE597E6C5BE7707A(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xAE597E6C5BE7707A, BOOL>(p0, p1, p2); } // AE597E6C5BE7707A 07FF553F
	static BOOL _0x12A658EE372CFDC1() { return rage::NativeInvoke::Invoke<0x12A658EE372CFDC1, BOOL>(); } // 12A658EE372CFDC1
	static uint32_t _0x42354FE1A3EC2C6E() { return rage::NativeInvoke::Invoke<0x42354FE1A3EC2C6E, uint32_t>(); } // 42354FE1A3EC2C6E
	static void _0xB823AC4803B00219(BOOL p0) { rage::NativeInvoke::Invoke<0xB823AC4803B00219, uint32_t>(p0); } // B823AC4803B00219
	static uint32_t _0x9A8063600A1AA728() { return rage::NativeInvoke::Invoke<0x9A8063600A1AA728, uint32_t>(); } // 9A8063600A1AA728
	static void _0xAE4453D3A59415AA() { rage::NativeInvoke::Invoke<0xAE4453D3A59415AA, uint32_t>(); } // AE4453D3A59415AA
}

namespace AUDIO
{
	static void PLAY_PED_RINGTONE(uint32_t *p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x667C1EAAF1741A67, uint32_t>(p0, p1, p2); } // 667C1EAAF1741A67 1D530E47
	static BOOL IS_PED_RINGTONE_PLAYING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1D2BB0F375C29D1D, BOOL>(p0); } // 1D2BB0F375C29D1D FE576EE4
	static void STOP_PED_RINGTONE(uint32_t p0) { rage::NativeInvoke::Invoke<0xD4924B65C3BCFBC7, uint32_t>(p0); } // D4924B65C3BCFBC7 FEEA107C
	static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return rage::NativeInvoke::Invoke<0x49BDC46D7CAD9C63, BOOL>(); } // 49BDC46D7CAD9C63 4ED1400A
	static BOOL _0xF42948753083C236() { return rage::NativeInvoke::Invoke<0xF42948753083C236, BOOL>(); } // F42948753083C236 16FB88B5
	static void CREATE_NEW_SCRIPTED_CONVERSATION() { rage::NativeInvoke::Invoke<0xB814CCC0CCC87419, uint32_t>(); } // B814CCC0CCC87419 B2BC25F8
	static void ADD_LINE_TO_CONVERSATION(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3, uint32_t p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, uint32_t p9, BOOL p10, BOOL p11, BOOL p12) { rage::NativeInvoke::Invoke<0xC1D3AA9DE9FCCFD0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // C1D3AA9DE9FCCFD0 96CD0513
	static void ADD_PED_TO_CONVERSATION(uint32_t p0, uint32_t p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x6A8E870139B81348, uint32_t>(p0, p1, p2); } // 6A8E870139B81348 F8D5EB86
	static void _0x8D10FA54F3CDDE0(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x8D10FA54F3CDDE0, uint32_t>(p0, p1, p2, p3); } // 8D10FA54F3CDDE0 73C6F979
	static void _0xD9B4268D0D22D2EE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD9B4268D0D22D2EE, uint32_t>(p0, p1); } // D9B4268D0D22D2EE 88203DDA
	static void SET_MICROPHONE_POSITION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x3782E4067068B9F6, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 3782E4067068B9F6 AD7BB191
	static void _0x04A84EFFEEDAAA6BF(BOOL p0) { rage::NativeInvoke::Invoke<0x04A84EFFEEDAAA6BF, uint32_t>(p0); } // 04A84EFFEEDAAA6BF 1193ED6E
	static void _0x1B53A0040B5942D1(BOOL p0) { rage::NativeInvoke::Invoke<0x1B53A0040B5942D1, uint32_t>(p0); } // 1B53A0040B5942D1
	static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0x36A1202C8C770A36, uint32_t>(p0, p1); } // 36A1202C8C770A36 38E42D07
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0x23AF4496DB87EB2C, uint32_t>(p0, p1); } // 23AF4496DB87EB2C 9ACB213A
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x95ADEEB592B34654, uint32_t>(p0, p1, p2, p3); } // 95ADEEB592B34654 E5DE7D9D
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x7675AEFFF45A2D65, uint32_t>(p0, p1, p2, p3); } // 7675AEFFF45A2D65 DDF5C579
	static void START_PRELOADED_CONVERSATION() { rage::NativeInvoke::Invoke<0x79ECA4CB34D47493, uint32_t>(); } // 79ECA4CB34D47493 A170261B
	static BOOL _0x9CCB2EF32A491B02() { return rage::NativeInvoke::Invoke<0x9CCB2EF32A491B02, BOOL>(); } // 9CCB2EF32A491B02 336F3D35
	static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return rage::NativeInvoke::Invoke<0xF611D1BB58990143, BOOL>(); } // F611D1BB58990143 CB8FD96F
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return rage::NativeInvoke::Invoke<0x36526C5391F2F6CF, BOOL>(); } // 36526C5391F2F6CF E1870EA9
	static uint32_t GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return rage::NativeInvoke::Invoke<0xB578A5EEDCABA08F, uint32_t>(); } // B578A5EEDCABA08F 9620E41F
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { rage::NativeInvoke::Invoke<0x6F0E5D34471BD5CD, uint32_t>(p0); } // 6F0E5D34471BD5CD E2C9C6F8
	static void RESTART_SCRIPTED_CONVERSATION() { rage::NativeInvoke::Invoke<0xA2A4AD85BA2F7ADD, uint32_t>(); } // A2A4AD85BA2F7ADD 6CB24B56
	static uint32_t STOP_SCRIPTED_CONVERSATION(BOOL p0) { return rage::NativeInvoke::Invoke<0xD858EC6FECDB4B3F, uint32_t>(p0); } // D858EC6FECDB4B3F AB77DA7D
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { rage::NativeInvoke::Invoke<0xD2E9649AA1893F13, uint32_t>(); } // D2E9649AA1893F13 85C98304HAS_PTFX_ASSET_LOADED
	static void INTERRUPT_CONVERSATION(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x3B8F9A5D5B590EA7, uint32_t>(p0, p1, p2); } // 3B8F9A5D5B590EA7 F3A67AF3
	static uint32_t _0x4D6D780E6C70D72E(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x4D6D780E6C70D72E, uint32_t>(p0); } // 4D6D780E6C70D72E B58B8FF3
	static void _0x2895339F9D70AFFF(BOOL p0) { rage::NativeInvoke::Invoke<0x2895339F9D70AFFF, uint32_t>(p0); } // 2895339F9D70AFFF 789D8C6C
	static void REGISTER_SCRIPT_WITH_AUDIO(uint32_t p0) { rage::NativeInvoke::Invoke<0xD19A0D6084034A69, uint32_t>(p0); } // D19A0D6084034A69 A6203643
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { rage::NativeInvoke::Invoke<0x21FEE1ED00A9086E, uint32_t>(); } // 21FEE1ED00A9086E 66728EFE
	static BOOL REQUEST_MISSION_AUDIO_BANK(uint32_t *p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x2814C9DD448753C1, BOOL>(p0, p1); } // 2814C9DD448753C1 916E37CA
	static BOOL REQUEST_AMBIENT_AUDIO_BANK(uint32_t *p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x6C900C4DB868DED9, BOOL>(p0, p1); } // 6C900C4DB868DED9 23C88BC7
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(uint32_t *p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xF08CFB68522305B2, BOOL>(p0, p1); } // F08CFB68522305B2 21322887
	static uint32_t HINT_AMBIENT_AUDIO_BANK(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA046EDDEA035A8DE, uint32_t>(p0, p1); } // A046EDDEA035A8DE F1850DDC
	static uint32_t HINT_SCRIPT_AUDIO_BANK(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x3DDFFF1EA0A0D9B3, uint32_t>(p0, p1); } // 3DDFFF1EA0A0D9B3 41FA0E51
	static void RELEASE_MISSION_AUDIO_BANK() { rage::NativeInvoke::Invoke<0x07502EEC72228C5E2, uint32_t>(); } // 07502EEC72228C5E2 8E8824C7
	static void RELEASE_AMBIENT_AUDIO_BANK() { rage::NativeInvoke::Invoke<0x8522425DBC299765, uint32_t>(); } // 8522425DBC299765 8C938784
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(uint32_t *p0) { rage::NativeInvoke::Invoke<0x3C20F43BE034109, uint32_t>(p0); } // 3C20F43BE034109 16707ABC
	static void RELEASE_SCRIPT_AUDIO_BANK() { rage::NativeInvoke::Invoke<0xEE6010D5E324610F, uint32_t>(); } // EE6010D5E324610F 22F865E5
	static void _0x990713D1BE85B2B1() { rage::NativeInvoke::Invoke<0x990713D1BE85B2B1, uint32_t>(); } // 990713D1BE85B2B1 A58BBF4F
	static uint32_t GET_SOUND_ID() { return rage::NativeInvoke::Invoke<0xCA225EEF4090469C, uint32_t>(); } // CA225EEF4090469C 6AE0AD56
	static void RELEASE_SOUND_ID(uint32_t p0) { rage::NativeInvoke::Invoke<0x71EA2F1D0184D8C7, uint32_t>(p0); } // 71EA2F1D0184D8C7 9C080899
	static void PLAY_SOUND(uint32_t p0, uint32_t *p1, uint32_t *p2, BOOL p3, uint32_t p4, BOOL p5) { rage::NativeInvoke::Invoke<0x88DC35B34477782D, uint32_t>(p0, p1, p2, p3, p4, p5); } // 88DC35B34477782D B6E1917F
	static void PLAY_SOUND_FRONTEND(uint32_t p0, const char *p1, const char *p2, BOOL p3) { rage::NativeInvoke::Invoke<0x84795EA8F54230A1, uint32_t>(p0, p1, p2, p3); } // 84795EA8F54230A1 2E458F74
	static void _0xBF3C64DCF9D3C57C(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xBF3C64DCF9D3C57C, uint32_t>(p0, p1); } // BF3C64DCF9D3C57C C70E6CFA
	static void PLAY_SOUND_FROM_ENTITY(uint32_t p0, const char *p1, uint32_t p2, const char *p3, BOOL p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xC4E6094A4C954E29, uint32_t>(p0, p1, p2, p3, p4, p5); } // C4E6094A4C954E29 95AE00F8
	static void PLAY_SOUND_FROM_COORD(uint32_t p0, const char *p1, float p2, float p3, float p4, const char *p5, BOOL p6, uint32_t p7, BOOL p8) { rage::NativeInvoke::Invoke<0xE89B40A4D255370C, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // E89B40A4D255370C CAD3E2D5
	static void STOP_SOUND(uint32_t p0) { rage::NativeInvoke::Invoke<0x5B438162CCD91A71, uint32_t>(p0); } // 5B438162CCD91A71 CD7F4030
	static uint32_t GET_NETWORK_ID_FROM_SOUND_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x11BD7D6459923D36, uint32_t>(p0); } // 11BD7D6459923D36 2576F610
	static uint32_t _0xECFAB34EFB322D47(uint32_t p0) { return rage::NativeInvoke::Invoke<0xECFAB34EFB322D47, uint32_t>(p0); } // ECFAB34EFB322D47 D064D4DC
	static void SET_VARIABLE_ON_SOUND(uint32_t p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0xBEDE361A5937FE10, uint32_t>(p0, p1, p2); } // BEDE361A5937FE10 606EE5FA
	static void SET_VARIABLE_ON_STREAM(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xE78DBAFDD3CAED08, uint32_t>(p0, p1); } // E78DBAFDD3CAED08 F67BB44C
	static void OVERRIDE_UNDERWATER_STREAM(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE8D589E2F1734D77, uint32_t>(p0, p1); } // E8D589E2F1734D77 9A083B7E
	static void _0xA6C06A579A23C158(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xA6C06A579A23C158, uint32_t>(p0, p1); } // A6C06A579A23C158 62D026BE
	static BOOL HAS_SOUND_FINISHED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x75354D2F4439D94B, BOOL>(p0); } // 75354D2F4439D94B E85AEC2E
	static void _0xF3E45A7DABC97254(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xF3E45A7DABC97254, uint32_t>(p0, p1, p2); } // F3E45A7DABC97254 5C57B85D
	static void _0x203F3DF275DC4B46(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x203F3DF275DC4B46, uint32_t>(p0, p1, p2); } // 203F3DF275DC4B46 444180DB
	static void _0xD5197208E9370D3D(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, BOOL p4) { rage::NativeInvoke::Invoke<0xD5197208E9370D3D, uint32_t>(p0, p1, p2, p3, p4); } // D5197208E9370D3D 8386AE28
	static void _0x5A7738470AE681BD(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0x5A7738470AE681BD, uint32_t>(p0, p1, p2, p3, p4, p5); } // 5A7738470AE681BD A1A1402E
	static void OVERRIDE_TREVOR_RAGE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC24471631F5213E9, uint32_t>(p0); } // C24471631F5213E9 05B9B5CF
	static void RESET_TREVOR_RAGE() { rage::NativeInvoke::Invoke<0x63081B71C289B05D, uint32_t>(); } // 63081B71C289B05D E80CF0D4
	static void SET_PLAYER_ANGRY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x166E81403919FB3B, uint32_t>(p0, p1); } // 166E81403919FB3B 782CA58D
	static void PLAY_PAIN(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x6204CDD58E47662C, uint32_t>(p0, p1, p2); } // 6204CDD58E47662C 874BD6CB
	static void _0x2F10B86CB2D11845(uint32_t *p0) { rage::NativeInvoke::Invoke<0x2F10B86CB2D11845, uint32_t>(p0); } // 2F10B86CB2D11845 59A3A17D
	static void _0xA4E4B566C4B0517A(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA4E4B566C4B0517A, uint32_t>(p0); } // A4E4B566C4B0517A 0E387BFE
	static void SET_AMBIENT_VOICE_NAME(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x454E090239AFF6E8, uint32_t>(p0, p1); } // 454E090239AFF6E8 BD2EA1A1
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uint32_t p0) { rage::NativeInvoke::Invoke<0x7416091E97852604, uint32_t>(p0); } // 7416091E97852604 BB8E64BF
	static BOOL IS_AMBIENT_SPEECH_PLAYING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x135ED76D25C24E67, BOOL>(p0); } // 135ED76D25C24E67 1972E8AA
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCE9BBF479F2EC6F1, BOOL>(p0); } // CE9BBF479F2EC6F1 2C653904
	static BOOL IS_ANY_SPEECH_PLAYING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x17E998AB655366FD, BOOL>(p0); } // 17E998AB655366FD 2B74A6D6
	static BOOL _0xB5A57318FFBC236D(uint32_t p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xB5A57318FFBC236D, BOOL>(p0, p1, p2); } // B5A57318FFBC236D 8BD5F11E
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x05117626A8E215F91, BOOL>(p0); } // 05117626A8E215F91 7B2F0743
	static void SET_PED_IS_DRUNK(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5FFD5ABB6E7B7D77, uint32_t>(p0, p1); } // 5FFD5ABB6E7B7D77 D2EA77A3
	static void _0xE5953937DCBCEE8B(uint32_t p0, uint32_t p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xE5953937DCBCEE8B, uint32_t>(p0, p1, p2); } // E5953937DCBCEE8B 498849F3
	static BOOL _0xD2488E49719DF9DB(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD2488E49719DF9DB, BOOL>(p0); } // D2488E49719DF9DB 0CBAF2EF
	static void SET_ANIMAL_MOOD(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC5FD718D5684FE18, uint32_t>(p0, p1); } // C5FD718D5684FE18 3EA7C6CB
	static uint32_t IS_MOBILE_PHONE_RADIO_ACTIVE() { return rage::NativeInvoke::Invoke<0x2E5E69D878ECEF32, uint32_t>(); } // 2E5E69D878ECEF32 6E502A5B
	static void SET_MOBILE_PHONE_RADIO_STATE(BOOL p0) { rage::NativeInvoke::Invoke<0xAC59D39EFAF00536, uint32_t>(p0); } // AC59D39EFAF00536 E1E0ED34
	static uint32_t GET_PLAYER_RADIO_STATION_INDEX() { return rage::NativeInvoke::Invoke<0xDA23B3063FF99093, uint32_t>(); } // DA23B3063FF99093 1C4946AC
	static uint32_t GET_PLAYER_RADIO_STATION_NAME() { return rage::NativeInvoke::Invoke<0x239941A4653E1C66, uint32_t>(); } // 239941A4653E1C66 D909C107
	static uint32_t GET_RADIO_STATION_NAME(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD29594461A8F01D6, uint32_t>(p0); } // D29594461A8F01D6 3DF493BC
	static uint32_t GET_PLAYER_RADIO_STATION_GENRE() { return rage::NativeInvoke::Invoke<0x8A1F558BE9B21030, uint32_t>(); } // 8A1F558BE9B21030 872CF0EA
	static uint32_t IS_RADIO_RETUNING() { return rage::NativeInvoke::Invoke<0xCF6C791C18F498FC, uint32_t>(); } // CF6C791C18F498FC CF29097B
	static void _0x19EEF8CD4811DB7C() { rage::NativeInvoke::Invoke<0x19EEF8CD4811DB7C, uint32_t>(); } // 19EEF8CD4811DB7C 53DB6994
	static void _0x78B28F9BFE0AE2CD() { rage::NativeInvoke::Invoke<0x78B28F9BFE0AE2CD, uint32_t>(); } // 78B28F9BFE0AE2CD D70ECC80
	static void SET_RADIO_TO_STATION_NAME(uint32_t *p0) { rage::NativeInvoke::Invoke<0xE1B4A5D6719B9563, uint32_t>(p0); } // E1B4A5D6719B9563 7B36E35E
	static void SET_VEH_RADIO_STATION(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xAEB769DB49B3E4FC, uint32_t>(p0, p1); } // AEB769DB49B3E4FC E391F55F
	static void _0x1F775627A8A38B0E(uint32_t p0) { rage::NativeInvoke::Invoke<0x1F775627A8A38B0E, uint32_t>(p0); } // 1F775627A8A38B0E 7ABB89D2
	static void SET_EMITTER_RADIO_STATION(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xD7889E76BE75AE9A, uint32_t>(p0, p1); } // D7889E76BE75AE9A 87431585
	static void SET_STATIC_EMITTER_ENABLED(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9692E4714D73176, uint32_t>(p0, p1); } // 9692E4714D73176 91F72E92
	static void SET_RADIO_TO_STATION_INDEX(uint32_t p0) { rage::NativeInvoke::Invoke<0x970C64DA3A16E5A4, uint32_t>(p0); } // 970C64DA3A16E5A4 1D82766D
	static void SET_FRONTEND_RADIO_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0x280C0197875D4BE2, uint32_t>(p0); } // 280C0197875D4BE2 B1172075
	static void UNLOCK_MISSION_NEWS_STORY(uint32_t p0) { rage::NativeInvoke::Invoke<0x4F724E65A4FC9C95, uint32_t>(p0); } // 4F724E65A4FC9C95 CCD9ABE4
	static uint32_t GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7BFB8237CDA34B7E, uint32_t>(p0); } // 7BFB8237CDA34B7E 27305D37
	static uint32_t GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return rage::NativeInvoke::Invoke<0xBFB5EA9DFC42F714, uint32_t>(); } // BFB5EA9DFC42F714 A2B88CA7
	static void PLAY_END_CREDITS_MUSIC(BOOL p0) { rage::NativeInvoke::Invoke<0x3C3CF9585BBC5C62, uint32_t>(p0); } // 3C3CF9585BBC5C62 8E88B3CC
	static void SKIP_RADIO_FORWARD() { rage::NativeInvoke::Invoke<0xAEC745E686B8ADA2, uint32_t>(); } // AEC745E686B8ADA2 10D36630
	static void FREEZE_RADIO_STATION(uint32_t *p0) { rage::NativeInvoke::Invoke<0x6A09643814E7DD76, uint32_t>(p0); } // 6A09643814E7DD76 286BF543
	static void UNFREEZE_RADIO_STATION(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA5E980B551FF6FEA, uint32_t>(p0); } // A5E980B551FF6FEA 4D46202C
	static void SET_RADIO_AUTO_UNFREEZE(BOOL p0) { rage::NativeInvoke::Invoke<0x766F515AB149D510, uint32_t>(p0); } // 766F515AB149D510 A40196BF
	static void SET_INITIAL_PLAYER_STATION(uint32_t *p0) { rage::NativeInvoke::Invoke<0x8BA0066A046AC184, uint32_t>(p0); } // 8BA0066A046AC184 9B069233
	static void SET_USER_RADIO_CONTROL_ENABLED(BOOL p0) { rage::NativeInvoke::Invoke<0xD1D0138E08D59865, uint32_t>(p0); } // D1D0138E08D59865 52E054CE
	static void SET_RADIO_TRACK(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xBDA335A1DA573BDC, uint32_t>(p0, p1); } // BDA335A1DA573BDC 76E96212
	static void SET_VEHICLE_RADIO_LOUD(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE2519ECBDF6A0ECC, uint32_t>(p0, p1); } // E2519ECBDF6A0ECC 8D9EDD99
	static BOOL _0x0DD36C5E94CBBB739(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0DD36C5E94CBBB739, BOOL>(p0); } // 0DD36C5E94CBBB739 CBA99F4A
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL p0) { rage::NativeInvoke::Invoke<0x362E33D1FE9C483E, uint32_t>(p0); } // 362E33D1FE9C483E 990085F0
	static BOOL _0x6F5A26ADB9932A86() { return rage::NativeInvoke::Invoke<0x6F5A26ADB9932A86, BOOL>(); } // 6F5A26ADB9932A86 46B0C696
	static BOOL _0x595679AF074E035() { return rage::NativeInvoke::Invoke<0x595679AF074E035, BOOL>(); } // 595679AF074E035 2A3E5E8B
	static void SET_VEHICLE_RADIO_ENABLED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3F60DDB36F3654A8, uint32_t>(p0, p1); } // 3F60DDB36F3654A8 6F812CAB
	static void _0xAA4A22817808DAD2(uint32_t *p0, uint32_t *p1, BOOL p2) { rage::NativeInvoke::Invoke<0xAA4A22817808DAD2, uint32_t>(p0, p1, p2); } // AA4A22817808DAD2 128C3873
	static void _0x8CDF71FFF4B6D801(uint32_t *p0) { rage::NativeInvoke::Invoke<0x8CDF71FFF4B6D801, uint32_t>(p0); } // 8CDF71FFF4B6D801 1D766976
	static uint32_t _0xF4104DC1D045E11D() { return rage::NativeInvoke::Invoke<0xF4104DC1D045E11D, uint32_t>(); } // F4104DC1D045E11D CC91FCF5
	static uint32_t FIND_RADIO_STATION_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0x21764E19392B5CFE, uint32_t>(p0); } // 21764E19392B5CFE ECA1512F
	static void _0x4771739E66CD5E61(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4771739E66CD5E61, uint32_t>(p0, p1); } // 4771739E66CD5E61 B1FF7137
	static void _0x2D5DCDC0B3DD6C87(float p0) { rage::NativeInvoke::Invoke<0x2D5DCDC0B3DD6C87, uint32_t>(p0); } // 2D5DCDC0B3DD6C87 C8B514E2
	static void _0x0E66682505810019E(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x0E66682505810019E, uint32_t>(p0, p1); } // 0E66682505810019E BE998184
	static void _0xF51471FE2B1E3642(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xF51471FE2B1E3642, uint32_t>(p0, p1); } // F51471FE2B1E3642 8AFC488D
	static void SET_AMBIENT_ZONE_STATE(uint32_t *p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x29DEF50C16608986, uint32_t>(p0, p1, p2); } // 29DEF50C16608986 2849CAC9
	static void CLEAR_AMBIENT_ZONE_STATE(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x26A97F79290DFB3F, uint32_t>(p0, p1); } // 26A97F79290DFB3F CDFF3C82
	static void SET_AMBIENT_ZONE_LIST_STATE(uint32_t *p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x423F9DB6EF5D698E, uint32_t>(p0, p1, p2); } // 423F9DB6EF5D698E BF80B412
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x706F5545ADBAF4D6, uint32_t>(p0, p1); } // 706F5545ADBAF4D6 38B9B8D4
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(uint32_t *p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x5860C94BA023F898, uint32_t>(p0, p1, p2); } // 5860C94BA023F898 C1FFB672
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(uint32_t *p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xBA7E29B25EE2D1D9, uint32_t>(p0, p1, p2); } // BA7E29B25EE2D1D9 5F5A2605
	static BOOL IS_AMBIENT_ZONE_ENABLED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x05E8D1C4D53630349, BOOL>(p0); } // 05E8D1C4D53630349 BFABD872
	static void SET_CUTSCENE_AUDIO_OVERRIDE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x43282CB4349F17FF, uint32_t>(p0); } // 43282CB4349F17FF CE1332B7
	static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0x48AF400AC99F4C55, uint32_t>(p0, p1); } // 48AF400AC99F4C55 D63CF33A
	static uint32_t PLAY_POLICE_REPORT(uint32_t *p0, float p1) { return rage::NativeInvoke::Invoke<0xAF922A0CB6DC60D9, uint32_t>(p0, p1); } // AF922A0CB6DC60D9 3F277B62
	static void BLIP_SIREN(uint32_t p0) { rage::NativeInvoke::Invoke<0xC651F895D732F7C1, uint32_t>(p0); } // C651F895D732F7C1 C0EB6924
	static void OVERRIDE_VEH_HORN(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x9C0DB8E8C69D1045, uint32_t>(p0, p1, p2); } // 9C0DB8E8C69D1045 2ACAB783
	static BOOL IS_HORN_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE581A7568317E7CC, BOOL>(p0); } // E581A7568317E7CC 20E2BDD0
	static void SET_AGGRESSIVE_HORNS(BOOL p0) { rage::NativeInvoke::Invoke<0x6A8D4C93653D78F7, uint32_t>(p0); } // 6A8D4C93653D78F7 01D6EABE
	static void _0x06F980A781A1DE0DF(uint32_t p0) { rage::NativeInvoke::Invoke<0x06F980A781A1DE0DF, uint32_t>(p0); } // 06F980A781A1DE0DF 3C395AEE
	static void _0xFB9D31D4CA78EE75(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFB9D31D4CA78EE75, uint32_t>(p0, p1); } // FB9D31D4CA78EE75 8CE63FA1
	static BOOL IS_STREAM_PLAYING() { return rage::NativeInvoke::Invoke<0x400B74729E9D703A, BOOL>(); } // 400B74729E9D703A F1F51A14
	static uint32_t GET_STREAM_PLAY_TIME() { return rage::NativeInvoke::Invoke<0x34AC882350A579D3, uint32_t>(); } // 34AC882350A579D3 B4F0AD56
	static BOOL LOAD_STREAM(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xDBB45AE299F05694, BOOL>(p0, p1); } // DBB45AE299F05694 0D89599D
	static BOOL LOAD_STREAM_WITH_START_OFFSET(uint32_t *p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x8E0D5F2F4814C0D, BOOL>(p0, p1, p2); } // 8E0D5F2F4814C0D E5B5745C
	static void _0xFB33005C1B324065(uint32_t p0) { rage::NativeInvoke::Invoke<0xFB33005C1B324065, uint32_t>(p0); } // FB33005C1B324065 A1D7FABE
	static void PLAY_STREAM_FROM_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0x967D899F0B1B3209, uint32_t>(p0); } // 967D899F0B1B3209 F8E4BDA2
	static void PLAY_STREAM_FROM_OBJECT(uint32_t p0) { rage::NativeInvoke::Invoke<0x38E6710D4C686EC, uint32_t>(p0); } // 38E6710D4C686EC C5266BF7
	static void PLAY_STREAM_FRONTEND() { rage::NativeInvoke::Invoke<0xEC2AFF7D95998446, uint32_t>(); } // EC2AFF7D95998446 2C2A16BC
	static void SPECIAL_FRONTEND_EQUAL(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x637E22A95F4846EE, uint32_t>(p0, p1, p2); } // 637E22A95F4846EE 6FE5D865
	static void STOP_STREAM() { rage::NativeInvoke::Invoke<0x6B08A54AEE3B5574, uint32_t>(); } // 6B08A54AEE3B5574 D1E364DE
	static void STOP_PED_SPEAKING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5466EB7A3FD9AFF0, uint32_t>(p0, p1); } // 5466EB7A3FD9AFF0 FF92B49D
	static void DISABLE_PED_PAIN_AUDIO(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3F0B2A719AA26306, uint32_t>(p0, p1); } // 3F0B2A719AA26306 3B8E2D5F
	static BOOL IS_AMBIENT_SPEECH_DISABLED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6A55A66588AE4BE7, BOOL>(p0); } // 6A55A66588AE4BE7 109D1F89
	static void SET_SIREN_WITH_NO_DRIVER(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9DC63CEAD84F841E, uint32_t>(p0, p1); } // 9DC63CEAD84F841E 77182D58
	static void _0x5730797ADE792C9D(uint32_t p0) { rage::NativeInvoke::Invoke<0x5730797ADE792C9D, uint32_t>(p0); } // 5730797ADE792C9D DE8BA3CD
	static void SET_HORN_ENABLED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x77C02CC66B7C4FC1, uint32_t>(p0, p1); } // 77C02CC66B7C4FC1 6EB92D05
	static void SET_AUDIO_VEHICLE_PRIORITY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x803E485B9D8C7F03, uint32_t>(p0, p1); } // 803E485B9D8C7F03 271A9766
	static void _0x6875306F1B152679(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x6875306F1B152679, uint32_t>(p0, p1); } // 6875306F1B152679 2F0A16D1
	static void USE_SIREN_AS_HORN(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA005D67CF48BAD39, uint32_t>(p0, p1); } // A005D67CF48BAD39 C6BC16F3
	static void _0xB8EDA65F05A30490(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xB8EDA65F05A30490, uint32_t>(p0, p1); } // B8EDA65F05A30490 33B0B007
	static void _0xD7FBA3E5DBF6E969(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xD7FBA3E5DBF6E969, uint32_t>(p0, p1, p2); } // D7FBA3E5DBF6E969 1C0C5E4C
	static void _0x6065496AA8180B88(uint32_t p0) { rage::NativeInvoke::Invoke<0x6065496AA8180B88, uint32_t>(p0); } // 6065496AA8180B88
	static BOOL _0xAC4AC4D2E7CD7F9C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAC4AC4D2E7CD7F9C, BOOL>(p0); } // AC4AC4D2E7CD7F9C 6E660D3F
	static void _0x8E20ACD2DDD93C53(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x8E20ACD2DDD93C53, uint32_t>(p0, p1); } // 8E20ACD2DDD93C53 23BE6432
	static void _0x05D8602755A7C846D(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x05D8602755A7C846D, uint32_t>(p0, p1); } // 05D8602755A7C846D E81FAC68
	static void _0x9D6C14F8334C4DE6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9D6C14F8334C4DE6, uint32_t>(p0, p1); } // 9D6C14F8334C4DE6 9365E042
	static void _0xE6A84D57CBE18468(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE6A84D57CBE18468, uint32_t>(p0, p1); } // E6A84D57CBE18468 2A60A90E
	static void SET_VEHICLE_BOOST_ACTIVE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x806E2325769059A0, uint32_t>(p0, p1); } // 806E2325769059A0 072F15F2
	static void _0x31043EC3B32E1D25(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x31043EC3B32E1D25, uint32_t>(p0, p1); } // 31043EC3B32E1D25 934BE749
	static void _0x0125BAD28FAAC349C(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0125BAD28FAAC349C, uint32_t>(p0, p1); } // 0125BAD28FAAC349C E61110A2
	static void PLAY_VEHICLE_DOOR_OPEN_SOUND(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3850023B9A7EE6C4, uint32_t>(p0, p1); } // 3850023B9A7EE6C4 84930330
	static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC29CA290B98414AD, uint32_t>(p0, p1); } // C29CA290B98414AD BA2CF407
	static void _0x555900455FEB7BC3(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x555900455FEB7BC3, uint32_t>(p0, p1); } // 555900455FEB7BC3 563B635D
	static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return rage::NativeInvoke::Invoke<0x40EB152F6C9334B4, BOOL>(); } // 40EB152F6C9334B4 7643170D
	static void SET_GPS_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0xF8B709AC39E9307D, uint32_t>(p0); } // F8B709AC39E9307D 0FC3379A
	static void PLAY_MISSION_COMPLETE_AUDIO(uint32_t *p0) { rage::NativeInvoke::Invoke<0xFC652D72B5D199DB, uint32_t>(p0); } // FC652D72B5D199DB 3033EA1D
	static BOOL IS_MISSION_COMPLETE_PLAYING() { return rage::NativeInvoke::Invoke<0x9FFA46B0957AE2F4, BOOL>(); } // 9FFA46B0957AE2F4 939982A1
	static uint32_t _0x46000C1AB19A9335() { return rage::NativeInvoke::Invoke<0x46000C1AB19A9335, uint32_t>(); } // 46000C1AB19A9335 CBE09AEC
	static void _0xD80B51CD79AEBDA3(BOOL p0) { rage::NativeInvoke::Invoke<0xD80B51CD79AEBDA3, uint32_t>(p0); } // D80B51CD79AEBDA3 D2858D8A
	static BOOL START_AUDIO_SCENE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x0D56AC40382654643, BOOL>(p0); } // 0D56AC40382654643 E48D757B
	static void STOP_AUDIO_SCENE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xAB5C0FE0C680BC7F, uint32_t>(p0); } // AB5C0FE0C680BC7F A08D8C58
	static void STOP_AUDIO_SCENES() { rage::NativeInvoke::Invoke<0x19F31E6D3E4C9A05, uint32_t>(); } // 19F31E6D3E4C9A05 F6C7342A
	static BOOL IS_AUDIO_SCENE_ACTIVE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xA2A45E58AC3DF6C5, BOOL>(p0); } // A2A45E58AC3DF6C5 ACBED05C
	static void SET_AUDIO_SCENE_VARIABLE(uint32_t *p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0xA17E2149BA8DF25, uint32_t>(p0, p1, p2); } // A17E2149BA8DF25 19BB3CE8
	static void _0x3EE911D23DA6B908(uint32_t p0) { rage::NativeInvoke::Invoke<0x3EE911D23DA6B908, uint32_t>(p0); } // 3EE911D23DA6B908 E812925D
	static void _0x182B7266FFDC76F3(uint32_t p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0x182B7266FFDC76F3, uint32_t>(p0, p1, p2); } // 182B7266FFDC76F3 2BC93264
	static void _0x66685ABDD5A8BFC3(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x66685ABDD5A8BFC3, uint32_t>(p0, p1); } // 66685ABDD5A8BFC3 308ED0EC
	static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return rage::NativeInvoke::Invoke<0x13FF890394E23178, BOOL>(); } // 13FF890394E23178 86E995D1
	static BOOL PREPARE_MUSIC_EVENT(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x6DBAEBEF2111B0C1, BOOL>(p0); } // 6DBAEBEF2111B0C1 534A5C1C
	static BOOL CANCEL_MUSIC_EVENT(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x12B3DEDD1DB99EFA, BOOL>(p0); } // 12B3DEDD1DB99EFA 89FF942D
	static BOOL TRIGGER_MUSIC_EVENT(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xF74C93D9036BCC1E, BOOL>(p0); } // F74C93D9036BCC1E B6094948
	static BOOL _0xD534AFABDF4AC57D() { return rage::NativeInvoke::Invoke<0xD534AFABDF4AC57D, BOOL>(); } // D534AFABDF4AC57D 2705C4D5
	static uint32_t GET_MUSIC_PLAYTIME() { return rage::NativeInvoke::Invoke<0x33DE4B75D15F2C0B, uint32_t>(); } // 33DE4B75D15F2C0B D633C809
	static void _0x36E33591C92518D8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x36E33591C92518D8, uint32_t>(p0, p1, p2, p3); } // 36E33591C92518D8 53FC3FEC
	static void _0x565CFFC884617084() { rage::NativeInvoke::Invoke<0x565CFFC884617084, uint32_t>(); } // 565CFFC884617084 E6B033BF
	static void _0xF3641112E4F24922(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF3641112E4F24922, uint32_t>(p0, p1); } // F3641112E4F24922 95050CAD
	static void _0xA3ACBDF2A1548B6D(float p0, float p1) { rage::NativeInvoke::Invoke<0xA3ACBDF2A1548B6D, uint32_t>(p0, p1); } // A3ACBDF2A1548B6D E64F97A0
	static void _0x0CD5897B34BE54B8D() { rage::NativeInvoke::Invoke<0x0CD5897B34BE54B8D, uint32_t>(); } // 0CD5897B34BE54B8D D87AF337
	static BOOL PREPARE_ALARM(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x56775AA79E85CAD9, BOOL>(p0); } // 56775AA79E85CAD9 084932E8
	static void START_ALARM(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0B2FB4B4EB898466F, uint32_t>(p0, p1); } // 0B2FB4B4EB898466F 703F524B
	static void STOP_ALARM(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA6765DB2EFC1926A, uint32_t>(p0, p1); } // A6765DB2EFC1926A F987BE8C
	static void STOP_ALL_ALARMS(BOOL p0) { rage::NativeInvoke::Invoke<0xF93C5C74D0546E0C, uint32_t>(p0); } // F93C5C74D0546E0C C3CB9DC6
	static BOOL IS_ALARM_PLAYING(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xFCD3C46AD5E80137, BOOL>(p0); } // FCD3C46AD5E80137 9D8E1D23
	static uint32_t GET_VEHICLE_DEFAULT_HORN(uint32_t p0) { return rage::NativeInvoke::Invoke<0x08E192C1B63F18E0B, uint32_t>(p0); } // 08E192C1B63F18E0B E84ABC19
	static uint32_t _0xAD3EDAE3AE62C61C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAD3EDAE3AE62C61C, uint32_t>(p0); } // AD3EDAE3AE62C61C FD4B5B3B
	static void RESET_PED_AUDIO_FLAGS(uint32_t p0) { rage::NativeInvoke::Invoke<0x2BD0B4BBDE0B9B78, uint32_t>(p0); } // 2BD0B4BBDE0B9B78 DF720C86
	static void _0x405D0EE42A53BA75(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x405D0EE42A53BA75, uint32_t>(p0, p1); } // 405D0EE42A53BA75 C307D531
	static void _0x42DDE3E087AD5FD3(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x42DDE3E087AD5FD3, uint32_t>(p0, p1); } // 42DDE3E087AD5FD3
	static void _0x287F3721C5E57891(BOOL p0) { rage::NativeInvoke::Invoke<0x287F3721C5E57891, uint32_t>(p0); } // 287F3721C5E57891 13EB5861
	static void _0x55078F067C43C5C6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x55078F067C43C5C6, uint32_t>(p0, p1); } // 55078F067C43C5C6 7BED1872
	static void SET_AUDIO_FLAG(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD6A45BF901B17F77, uint32_t>(p0, p1); } // D6A45BF901B17F77 1C09C9E0
	static uint32_t PREPARE_SYNCHRONIZED_AUDIO_EVENT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xB7AAB54842083023, uint32_t>(p0, p1); } // B7AAB54842083023 E1D91FD0
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x039035B2820434406, BOOL>(p0, p1); } // 039035B2820434406 7652DD49
	static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA67A0F09FDA9FA9A, BOOL>(p0); } // A67A0F09FDA9FA9A 507F3241
	static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x34EB122D21F1F393, BOOL>(p0); } // 34EB122D21F1F393 ADEED2B4
	static void _0xCB9AD34915200957(uint32_t *p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xCB9AD34915200957, uint32_t>(p0, p1, p2, p3); } // CB9AD34915200957 55A21772
	static void _0x106072F6E092CB05(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x106072F6E092CB05, uint32_t>(p0, p1); } // 106072F6E092CB05 A17F9AB0
	static void _0x39A3D11A21B19E6(uint32_t p0) { rage::NativeInvoke::Invoke<0x39A3D11A21B19E6, uint32_t>(p0); } // 39A3D11A21B19E6 62B43677
	static void _0x0214E3023C5BD22B9(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x0214E3023C5BD22B9, uint32_t>(p0, p1); } // 0214E3023C5BD22B9 8AD670EC
	static void _0x1FF21428E29781B9(uint32_t *p0) { rage::NativeInvoke::Invoke<0x1FF21428E29781B9, uint32_t>(p0); } // 1FF21428E29781B9 D24B4D0C
	static void _0x8A93349309E7D3B1() { rage::NativeInvoke::Invoke<0x8A93349309E7D3B1, uint32_t>(); } // 8A93349309E7D3B1 7262B5BA
	static uint32_t _0x7BBEB89420B0A8AC() { return rage::NativeInvoke::Invoke<0x7BBEB89420B0A8AC, uint32_t>(); } // 7BBEB89420B0A8AC 93A44A1F
	static void _0x79CEDFFDBE4D40DA(uint32_t p0) { rage::NativeInvoke::Invoke<0x79CEDFFDBE4D40DA, uint32_t>(p0); } // 79CEDFFDBE4D40DA 13777A0B
	static void _0x0FE27BB2473CC260D() { rage::NativeInvoke::Invoke<0x0FE27BB2473CC260D, uint32_t>(); } // 0FE27BB2473CC260D 1134F68B
	static void _0xFBDB191CDEEC29D6(BOOL p0) { rage::NativeInvoke::Invoke<0xFBDB191CDEEC29D6, uint32_t>(p0); } // FBDB191CDEEC29D6 E0047BFD
}

namespace CUTSCENE
{
	static void REQUEST_CUTSCENE(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFF5665416E4C22D1, uint32_t>(p0, p1); } // FF5665416E4C22D1 B5977853
	static void _0xC25755924A02755B(uint32_t *p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xC25755924A02755B, uint32_t>(p0, p1, p2); } // C25755924A02755B D98F656A
	static void REMOVE_CUTSCENE() { rage::NativeInvoke::Invoke<0xCB0201F0BA3841A2, uint32_t>(); } // CB0201F0BA3841A2 8052F533
	static uint32_t HAS_CUTSCENE_LOADED() { return rage::NativeInvoke::Invoke<0x6715FA5BFE2185EB, uint32_t>(); } // 6715FA5BFE2185EB F9998582
	static BOOL HAS_THIS_CUTSCENE_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x9ED959C675F03EA5, BOOL>(p0); } // 9ED959C675F03EA5 3C5619F2
	static void _0x4275D92AAF73C757(uint32_t p0) { rage::NativeInvoke::Invoke<0x4275D92AAF73C757, uint32_t>(p0); } // 4275D92AAF73C757 25A2CABC
	static BOOL _0xFC241F94E52E147B() { return rage::NativeInvoke::Invoke<0xFC241F94E52E147B, BOOL>(); } // FC241F94E52E147B DD8878E9
	static BOOL _0x72EB6AD3BF1D3D73(uint32_t p0) { return rage::NativeInvoke::Invoke<0x72EB6AD3BF1D3D73, BOOL>(p0); } // 72EB6AD3BF1D3D73 7B93CDAA
	static void _0x71B4FB76F2209FB7(uint32_t *p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x71B4FB76F2209FB7, uint32_t>(p0, p1, p2); } // 71B4FB76F2209FB7 47DB08A9
	static void START_CUTSCENE(uint32_t p0) { rage::NativeInvoke::Invoke<0x840BBE26C6CF7321, uint32_t>(p0); } // 840BBE26C6CF7321 210106F6
	static void START_CUTSCENE_AT_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xB9862CE2B2CCD38F, uint32_t>(p0, p1, p2, p3); } // B9862CE2B2CCD38F 58BEA436
	static void STOP_CUTSCENE(BOOL p0) { rage::NativeInvoke::Invoke<0x1C47B5C2A22D6BEA, uint32_t>(p0); } // 1C47B5C2A22D6BEA 5EE84DC7
	static void STOP_CUTSCENE_IMMEDIATELY() { rage::NativeInvoke::Invoke<0x5054C17F460F49B, uint32_t>(); } // 5054C17F460F49B F528A2AD
	static void SET_CUTSCENE_ORIGIN(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xC2EC89E18EE66AAB, uint32_t>(p0, p1, p2, p3, p4); } // C2EC89E18EE66AAB B0AD7792
	static void _0x0C1AF465E382762E2(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x0C1AF465E382762E2, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 0C1AF465E382762E2
	static uint32_t GET_CUTSCENE_TIME() { return rage::NativeInvoke::Invoke<0x1DC0ADACDA6BCF59, uint32_t>(); } // 1DC0ADACDA6BCF59 53F5B5AB
	static uint32_t GET_CUTSCENE_TOTAL_DURATION() { return rage::NativeInvoke::Invoke<0x7D6533E35F3FF3, uint32_t>(); } // 7D6533E35F3FF3 0824EBE8
	static uint32_t WAS_CUTSCENE_SKIPPED() { return rage::NativeInvoke::Invoke<0x1E6F5D7A6EA04E5F, uint32_t>(); } // 1E6F5D7A6EA04E5F C9B6949D
	static BOOL HAS_CUTSCENE_FINISHED() { return rage::NativeInvoke::Invoke<0xE072F36CB31E9FEB, BOOL>(); } // E072F36CB31E9FEB 5DED14B4
	static uint32_t IS_CUTSCENE_ACTIVE() { return rage::NativeInvoke::Invoke<0x22A3749598D2337A, uint32_t>(); } // 22A3749598D2337A CCE2FE9D
	static BOOL IS_CUTSCENE_PLAYING() { return rage::NativeInvoke::Invoke<0x3574DD38C5FAC832, BOOL>(); } // 3574DD38C5FAC832 A3A78392
	static uint32_t GET_CUTSCENE_SECTION_PLAYING() { return rage::NativeInvoke::Invoke<0x62F2CF09430D7CC2, uint32_t>(); } // 62F2CF09430D7CC2 1026F0D6
	static uint32_t GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0F31BB8BDF5CB9BE6, uint32_t>(p0, p1); } // 0F31BB8BDF5CB9BE6 1D09ABC7
	static uint32_t _0xCF90D33387FEC8AE() { return rage::NativeInvoke::Invoke<0xCF90D33387FEC8AE, uint32_t>(); } // CF90D33387FEC8AE 5AE68AE6
	static void REGISTER_ENTITY_FOR_CUTSCENE(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xD8A140AE0ECFC725, uint32_t>(p0, p1, p2, p3, p4); } // D8A140AE0ECFC725 7CBC3EC7
	static uint32_t GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x4F8762C0F3A9A716, uint32_t>(p0, p1); } // 4F8762C0F3A9A716 46D18755
	static void _0xDB62606A9AD036EE(uint32_t p0) { rage::NativeInvoke::Invoke<0xDB62606A9AD036EE, uint32_t>(p0); } // DB62606A9AD036EE
	static void SET_CUTSCENE_TRIGGER_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x391FA3E5DFF9DF17, uint32_t>(p0, p1, p2, p3, p4, p5); } // 391FA3E5DFF9DF17 9D76D9DE
	static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xEBC5C93675CFFEC3, BOOL>(p0, p1); } // EBC5C93675CFFEC3 55C30B26
	static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xE51BB3F5E8E1C156, BOOL>(p0, p1); } // E51BB3F5E8E1C156 8FF5D3C4
	static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return rage::NativeInvoke::Invoke<0xE9C39255A62A3323, BOOL>(p0); } // E9C39255A62A3323 EDAE6C02
	static void _0x8801332725A366AF(BOOL p0) { rage::NativeInvoke::Invoke<0x8801332725A366AF, uint32_t>(p0); } // 8801332725A366AF 35721A08
	static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x156E29031C8EC3E7, uint32_t>(p0, p1, p2, p3); } // 156E29031C8EC3E7 D19EF0DD
	static void _0x388C258BA02628B9(BOOL p0) { rage::NativeInvoke::Invoke<0x388C258BA02628B9, uint32_t>(p0); } // 388C258BA02628B9 8338DA1D
	static void _0x461F068C51CDC4E9(BOOL p0) { rage::NativeInvoke::Invoke<0x461F068C51CDC4E9, uint32_t>(p0); } // 461F068C51CDC4E9 04377C10
	static BOOL _0xC9968F29C059A8CB() { return rage::NativeInvoke::Invoke<0xC9968F29C059A8CB, BOOL>(); } // C9968F29C059A8CB DBD88708
	static void _0xACC5025D8C5F98EF(BOOL p0) { rage::NativeInvoke::Invoke<0xACC5025D8C5F98EF, uint32_t>(p0); } // ACC5025D8C5F98EF 28D54A7F
	static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { rage::NativeInvoke::Invoke<0x24E27580AAD69BBE, uint32_t>(); } // 24E27580AAD69BBE B60CFBB9
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x71D9E46EE013306A, uint32_t>(p0, p1, p2, p3, p4); } // 71D9E46EE013306A 6AF994A1
	static void _0x73BF98B7ABF75689(uint32_t *p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x73BF98B7ABF75689, uint32_t>(p0, p1, p2); } // 73BF98B7ABF75689 1E7DA95E
	static BOOL DOES_CUTSCENE_ENTITY_EXIST(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x1A75325DA413F43E, BOOL>(p0, p1); } // 1A75325DA413F43E 58E67409
	static void _0x022E9DDFB4FFC88B9(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x022E9DDFB4FFC88B9, uint32_t>(p0, p1, p2, p3, p4); } // 022E9DDFB4FFC88B9 22E9A9DE
	static BOOL _0x8D11AFBC57C8B08E() { return rage::NativeInvoke::Invoke<0x8D11AFBC57C8B08E, BOOL>(); } // 8D11AFBC57C8B08E 4315A7C5
}

namespace INTERIOR
{
	static uint32_t GET_INTERIOR_GROUP_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x47747D43BC10F33E, uint32_t>(p0); } // 47747D43BC10F33E 09D6376F
	static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x33FFDAA28CBF43FC, Vector3>(p0, p1, p2, p3); } // 33FFDAA28CBF43FC 7D8F26A1
	static uint32_t IS_INTERIOR_SCENE() { return rage::NativeInvoke::Invoke<0x332341B01881B470, uint32_t>(); } // 332341B01881B470 55226C13
	static uint32_t IS_VALID_INTERIOR(BOOL p0) { return rage::NativeInvoke::Invoke<0x93AF5BB44F9A2E1B, uint32_t>(p0); } // 93AF5BB44F9A2E1B 39C0B635
	static void CLEAR_ROOM_FOR_ENTITY(uint32_t p0) { rage::NativeInvoke::Invoke<0x848295D8262450A4, uint32_t>(p0); } // 848295D8262450A4 7DDADB92
	static void FORCE_ROOM_FOR_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x4FB409E797BB414A, uint32_t>(p0, p1, p2); } // 4FB409E797BB414A 10BD4435
	static uint32_t GET_ROOM_KEY_FROM_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2F6F43E0A4EC1C98, uint32_t>(p0); } // 2F6F43E0A4EC1C98 E4ACF8C3
	static uint32_t GET_KEY_FOR_ENTITY_IN_ROOM(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB3CFD94645403D35, uint32_t>(p0); } // B3CFD94645403D35 91EA80EF
	static uint32_t GET_INTERIOR_FROM_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB9F7014CB27D77C7, uint32_t>(p0); } // B9F7014CB27D77C7 5C644614
	static void _0x1DABDFC179E87118(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1DABDFC179E87118, uint32_t>(p0, p1); } // 1DABDFC179E87118 E645E162
	static void _0x15B4BAF3431688E3(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x15B4BAF3431688E3, uint32_t>(p0, p1); } // 15B4BAF3431688E3 D79803B5
	static void _0x61E61086CE1663DB(uint32_t *p0) { rage::NativeInvoke::Invoke<0x61E61086CE1663DB, uint32_t>(p0); } // 61E61086CE1663DB 1F6B4B13
	static void _0xA6C3E32498BA8BDF(uint32_t p0) { rage::NativeInvoke::Invoke<0xA6C3E32498BA8BDF, uint32_t>(p0); } // A6C3E32498BA8BDF 0E9529CC
	static uint32_t _0x34044DE72CAFF6FA() { return rage::NativeInvoke::Invoke<0x34044DE72CAFF6FA, uint32_t>(); } // 34044DE72CAFF6FA 4FF3D3F5
	static void _0x89011B262105DDA9() { rage::NativeInvoke::Invoke<0x89011B262105DDA9, uint32_t>(); } // 89011B262105DDA9 617DC75D
	static uint32_t GET_INTERIOR_AT_COORDS(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x9C1CBD99573D4312, uint32_t>(p0, p1, p2); } // 9C1CBD99573D4312 A17FBF37
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x21C9E7C18E403D73, uint32_t>(p0, p1); } // 21C9E7C18E403D73 A2A73564
	static void _0x336B61FFB9019E71(uint32_t p0) { rage::NativeInvoke::Invoke<0x336B61FFB9019E71, uint32_t>(p0); } // 336B61FFB9019E71 3ADA414E
	static void UNPIN_INTERIOR(uint32_t p0) { rage::NativeInvoke::Invoke<0x8DCA7E3E525E5911, uint32_t>(p0); } // 8DCA7E3E525E5911 FCFF792A
	static BOOL IS_INTERIOR_READY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB5D4753FD7641AB7, BOOL>(p0); } // B5D4753FD7641AB7 E1EF6450
	static uint32_t _0xB1A39DB1E2929ED1(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB1A39DB1E2929ED1, uint32_t>(p0); } // B1A39DB1E2929ED1
	static uint32_t _0x09C3273B36FEFD46F(float p0, float p1, float p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0x09C3273B36FEFD46F, uint32_t>(p0, p1, p2, p3); } // 09C3273B36FEFD46F 96525B06
	static BOOL _0xCA97BCE0621BFD25(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0xCA97BCE0621BFD25, BOOL>(p0, p1, p2); } // CA97BCE0621BFD25 7762249C
	static uint32_t GET_INTERIOR_FROM_COLLISION(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0xDD8967DDC05E1C1B, uint32_t>(p0, p1, p2); } // DD8967DDC05E1C1B 7ED33DC1
	static void _0x6D43802190E4B6DC(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x6D43802190E4B6DC, uint32_t>(p0, p1); } // 6D43802190E4B6DC C80A5DDF
	static void _0xC42E13CCC0E4D216(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xC42E13CCC0E4D216, uint32_t>(p0, p1); } // C42E13CCC0E4D216 DBA768A1
	static BOOL _0xFF309D90AE93DDE1(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xFF309D90AE93DDE1, BOOL>(p0, p1); } // FF309D90AE93DDE1 39A3CC6F
	static void REFRESH_INTERIOR(uint32_t p0) { rage::NativeInvoke::Invoke<0x37F4E82E5B10AADF, uint32_t>(p0); } // 37F4E82E5B10AADF 9A29ACE6
	static void _0xEA4000C5CA260D6C(uint32_t p0) { rage::NativeInvoke::Invoke<0xEA4000C5CA260D6C, uint32_t>(p0); } // EA4000C5CA260D6C 1F375B4C
	static void DISABLE_INTERIOR(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB43380B6DF46326C, uint32_t>(p0, p1); } // B43380B6DF46326C 093ADEA5
	static BOOL IS_INTERIOR_DISABLED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6F3B287B8AE5AD76, BOOL>(p0); } // 6F3B287B8AE5AD76 81F34C71
	static void CAP_INTERIOR(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8168B60B6214872B, uint32_t>(p0, p1); } // 8168B60B6214872B 34E735A6
	static BOOL IS_INTERIOR_CAPPED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7344CEFAB219FF96, BOOL>(p0); } // 7344CEFAB219FF96 18B17C80
	static void _0x9CED2B9288BE2AB8(BOOL p0) { rage::NativeInvoke::Invoke<0x9CED2B9288BE2AB8, uint32_t>(p0); } // 9CED2B9288BE2AB8 5EF9C5C2
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x092931D2249E68921, uint32_t>(p0, p1, p2, p3, p4); } // 092931D2249E68921 74337969
	static void _0x28D21A983751927B(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x28D21A983751927B, uint32_t>(p0, p1, p2); } // 28D21A983751927B D3C08183
	static uint32_t CREATE_CAM(const char *p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x7A7435490ED9AAB, uint32_t>(p0, p1); } // 7A7435490ED9AAB E9BF2A7D
	static uint32_t CREATE_CAM_WITH_PARAMS(uint32_t *p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x690E3D6DDF30CA95, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 690E3D6DDF30CA95 23B02F15
	static uint32_t CREATE_CAMERA(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x2EA8060B4AF80E86, uint32_t>(p0, p1); } // 2EA8060B4AF80E86 5D6739AE
	static uint32_t CREATE_CAMERA_WITH_PARAMS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x75089805E99EDC28, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 75089805E99EDC28 0688BE9A
	static void DESTROY_CAM(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x44151B6071157DDD, uint32_t>(p0, p1); } // 44151B6071157DDD C39302BD
	static void DESTROY_ALL_CAMS(BOOL p0) { rage::NativeInvoke::Invoke<0x11AC2A4AC27BC796, uint32_t>(p0); } // 11AC2A4AC27BC796 10C151CE
	static BOOL DOES_CAM_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0x17D71902CA06091B, BOOL>(p0); } // 17D71902CA06091B 1EF89DC0
	static void SET_CAM_ACTIVE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x06F430D0F1783A56E, uint32_t>(p0, p1); } // 06F430D0F1783A56E 064659C2
	static BOOL IS_CAM_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB44AF0EB1FA3729D, BOOL>(p0); } // B44AF0EB1FA3729D 4B58F177
	static BOOL IS_CAM_RENDERING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0A9AF865CDD15DFF4, BOOL>(p0); } // 0A9AF865CDD15DFF4 6EC6B5B2
	static uint32_t GET_RENDERING_CAM() { return rage::NativeInvoke::Invoke<0xF273B3D1FB46A918, uint32_t>(); } // F273B3D1FB46A918 0FCF4DF1
	static Vector3 GET_CAM_COORD(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2F56B555AF6CFAB5, Vector3>(p0); } // 2F56B555AF6CFAB5 7C40F09C
	static Vector3 GET_CAM_ROT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x67BE89D490EA2935, Vector3>(p0, p1); } // 67BE89D490EA2935 DAC84C9F
	static float GET_CAM_FOV(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC4B19FC1E15DB1C2, float>(p0); } // C4B19FC1E15DB1C2 D6E9FCF5
	static float GET_CAM_NEAR_CLIP(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5E4F38C3CDBD0E21, float>(p0); } // 5E4F38C3CDBD0E21 CFCD35EE
	static float GET_CAM_FAR_CLIP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD0620C0419DB3984, float>(p0); } // D0620C0419DB3984 09F119B8
	static float GET_CAM_FAR_DOF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4F46F4EB58AF6ACD, float>(p0); } // 4F46F4EB58AF6ACD 98C5CCE9
	static void SET_CAM_PARAMS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x6F713DCD73DFF545, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 6F713DCD73DFF545 2167CEBF
	static void SET_CAM_COORD(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xEEA9AFA5E9078090, uint32_t>(p0, p1, p2, p3); } // EEA9AFA5E9078090 7A8053AF
	static void SET_CAM_ROT(uint32_t p0, float p1, float p2, float p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x46AA97C6CB72D170, uint32_t>(p0, p1, p2, p3, p4); } // 46AA97C6CB72D170 EE38B3C1
	static void SET_CAM_FOV(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x435B97ECA622D5B0, uint32_t>(p0, p1); } // 435B97ECA622D5B0 D3D5D74F
	static void SET_CAM_NEAR_CLIP(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x80EA879A2C86EFE7, uint32_t>(p0, p1); } // 80EA879A2C86EFE7 46DB13B1
	static void SET_CAM_FAR_CLIP(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x8342C17436A136FB, uint32_t>(p0, p1); } // 8342C17436A136FB 0D23E381
	static void SET_CAM_MOTION_BLUR_STRENGTH(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x7A33B37C9FF5E596, uint32_t>(p0, p1); } // 7A33B37C9FF5E596 FD6E0D67
	static void SET_CAM_NEAR_DOF(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xF14BCFACF533B69C, uint32_t>(p0, p1); } // F14BCFACF533B69C F28254DF
	static void SET_CAM_FAR_DOF(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x646E27A5B70ACF92, uint32_t>(p0, p1); } // 646E27A5B70ACF92 58515E8E
	static void SET_CAM_DOF_STRENGTH(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xAE34D14E1FD1B0D8, uint32_t>(p0, p1); } // AE34D14E1FD1B0D8 3CC4EB3F
	static void SET_CAM_DOF_PLANES(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x1CA1C0300912FC86, uint32_t>(p0, p1, p2, p3, p4); } // 1CA1C0300912FC86 AD6C2B8F
	static void _0x5381DDC3D8280E2E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5381DDC3D8280E2E, uint32_t>(p0, p1); } // 5381DDC3D8280E2E 8306C256
	static void _0xCE45D35E11FA87AD() { rage::NativeInvoke::Invoke<0xCE45D35E11FA87AD, uint32_t>(); } // CE45D35E11FA87AD 8BBF2950
	static void _0x165FDB7058656561(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x165FDB7058656561, uint32_t>(p0, p1); } // 165FDB7058656561
	static void _0x2EEAA774A6164A98(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x2EEAA774A6164A98, uint32_t>(p0, p1); } // 2EEAA774A6164A98
	static void _0xFB316F4E5748D313(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xFB316F4E5748D313, uint32_t>(p0, p1); } // FB316F4E5748D313
	static void _0x1CEDC693A9629701(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x1CEDC693A9629701, uint32_t>(p0, p1); } // 1CEDC693A9629701
	static void _0xA9D6DAE1D17D0723(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xA9D6DAE1D17D0723, uint32_t>(p0, p1); } // A9D6DAE1D17D0723
	static void ATTACH_CAM_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5) { rage::NativeInvoke::Invoke<0x4BEA87701970868, uint32_t>(p0, p1, p2, p3, p4, p5); } // 4BEA87701970868 AD7C45F6
	static void ATTACH_CAM_TO_PED_BONE(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, BOOL p6) { rage::NativeInvoke::Invoke<0x58F32532D161F8D0, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 58F32532D161F8D0 506BB35C
	static void DETACH_CAM(uint32_t p0) { rage::NativeInvoke::Invoke<0x622BD70540C4C213, uint32_t>(p0); } // 622BD70540C4C213 F4FBF14A
	static void SET_CAM_INHERIT_ROLL_VEHICLE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x8AFA6856BA760400, uint32_t>(p0, p1); } // 8AFA6856BA760400 E4BD5342
	static void POINT_CAM_AT_COORD(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xE63012B76B7664C3, uint32_t>(p0, p1, p2, p3); } // E63012B76B7664C3 914BC21A
	static void POINT_CAM_AT_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5) { rage::NativeInvoke::Invoke<0x93C2314254F245A2, uint32_t>(p0, p1, p2, p3, p4, p5); } // 93C2314254F245A2 7597A0F7
	static void POINT_CAM_AT_PED_BONE(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, BOOL p6) { rage::NativeInvoke::Invoke<0x69988B5C3D08A33C, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 69988B5C3D08A33C 09F47049
	static void STOP_CAM_POINTING(uint32_t p0) { rage::NativeInvoke::Invoke<0xF6C122F2314BFF27, uint32_t>(p0); } // F6C122F2314BFF27 5435F6A5
	static void _0xDE016C411BFC750B(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDE016C411BFC750B, uint32_t>(p0, p1); } // DE016C411BFC750B 0C74F9AF
	static void _0xD05AADAD809CEFD6(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD05AADAD809CEFD6, uint32_t>(p0, p1); } // D05AADAD809CEFD6 E1A0B2F1
	static void _0x8CB99388437C694E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8CB99388437C694E, uint32_t>(p0, p1); } // 8CB99388437C694E
	static void _0xD790AEF806B0F225(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD790AEF806B0F225, uint32_t>(p0, p1); } // D790AEF806B0F225 43220969
	static void SET_CAM_DEBUG_NAME(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD4750A8677850B13, uint32_t>(p0, p1); } // D4750A8677850B13 9B00DF3F
	static void ADD_CAM_SPLINE_NODE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x1EC72C0BB06772BC, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 1EC72C0BB06772BC AD3C7EAA
	static void _0x0BE827E16FCCA4B4E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x0BE827E16FCCA4B4E, uint32_t>(p0, p1, p2, p3); } // 0BE827E16FCCA4B4E 30510511
	static void _0x0EEE12718D946EB54(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x0EEE12718D946EB54, uint32_t>(p0, p1, p2, p3); } // 0EEE12718D946EB54 BA6C085B
	static void _0xDF77C37858D54623(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xDF77C37858D54623, uint32_t>(p0, p1, p2); } // DF77C37858D54623 B4737F03
	static void SET_CAM_SPLINE_PHASE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x64FD08DFA2AC8CBD, uint32_t>(p0, p1); } // 64FD08DFA2AC8CBD F0AED233
	static float GET_CAM_SPLINE_PHASE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x55A8B07B40EAC42E, float>(p0); } // 55A8B07B40EAC42E 39784DD9
	static float GET_CAM_SPLINE_NODE_PHASE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x10196C8A24DD9D64, float>(p0); } // 10196C8A24DD9D64 7B9522F6
	static void SET_CAM_SPLINE_DURATION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD6C9677D422277F9, uint32_t>(p0, p1); } // D6C9677D422277F9 3E91FC8A
	static void _0x869DEED457FDB98D(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x869DEED457FDB98D, uint32_t>(p0, p1); } // 869DEED457FDB98D 15E141CE
	static uint32_t GET_CAM_SPLINE_NODE_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC5931ECA01CDE2D4, uint32_t>(p0); } // C5931ECA01CDE2D4 F8AEB6BD
	static void _0x7227E150A51E3A64(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { rage::NativeInvoke::Invoke<0x7227E150A51E3A64, uint32_t>(p0, p1, p2, p3); } // 7227E150A51E3A64 21D275DA
	static void _0x9F6B55E2BFAF15C8(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0x9F6B55E2BFAF15C8, uint32_t>(p0, p1, p2); } // 9F6B55E2BFAF15C8 A3BD9E94
	static void OVERRIDE_CAM_SPLINE_VELOCITY(uint32_t p0, uint32_t p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x4684C4CB1FEB48D9, uint32_t>(p0, p1, p2, p3); } // 4684C4CB1FEB48D9 326A17E2
	static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(uint32_t p0, uint32_t p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x228497A92AE29FBB, uint32_t>(p0, p1, p2, p3); } // 228497A92AE29FBB 633179E6
	static void _0x7ADFB22184236121(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x7ADFB22184236121, uint32_t>(p0, p1, p2); } // 7ADFB22184236121 C90B2DDC
	static BOOL IS_CAM_SPLINE_PAUSED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x07FFE0087864AF30F, BOOL>(p0); } // 07FFE0087864AF30F 60B34FF5
	static void SET_CAM_ACTIVE_WITH_INTERP(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xB09853C2B8C94A37, uint32_t>(p0, p1, p2, p3, p4); } // B09853C2B8C94A37 7983E7F0
	static BOOL IS_CAM_INTERPOLATING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0CDDB35288EE2C72C, BOOL>(p0); } // 0CDDB35288EE2C72C 7159CB5D
	static void SHAKE_CAM(uint32_t p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0xB98DF10F1936BD70, uint32_t>(p0, p1, p2); } // B98DF10F1936BD70 1D4211B0
	static void ANIMATED_SHAKE_CAM(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4) { rage::NativeInvoke::Invoke<0x6915FF493995442D, uint32_t>(p0, p1, p2, p3, p4); } // 6915FF493995442D E1168767
	static BOOL IS_CAM_SHAKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFC044F5A8CA9782F, BOOL>(p0); } // FC044F5A8CA9782F 0961FD9B
	static void SET_CAM_SHAKE_AMPLITUDE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xE2C04E90396EAF08, uint32_t>(p0, p1); } // E2C04E90396EAF08 60FF6382
	static void STOP_CAM_SHAKING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x60A59DBF922B3037, uint32_t>(p0, p1); } // 60A59DBF922B3037 40D0EB87
	static void _0xBD2C64AB088BFF85(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xBD2C64AB088BFF85, uint32_t>(p0, p1); } // BD2C64AB088BFF85 2B0F05CD
	static void _0x812B333ABA2FB102(uint32_t *p0, uint32_t *p1, uint32_t *p2, float p3) { rage::NativeInvoke::Invoke<0x812B333ABA2FB102, uint32_t>(p0, p1, p2, p3); } // 812B333ABA2FB102 CB75BD9C
	static BOOL _0x1306ADA2FB1E2138() { return rage::NativeInvoke::Invoke<0x1306ADA2FB1E2138, BOOL>(); } // 1306ADA2FB1E2138 6AEFE6A5
	static void _0xB31F99508794D61C(BOOL p0) { rage::NativeInvoke::Invoke<0xB31F99508794D61C, uint32_t>(p0); } // B31F99508794D61C 26FCFB96
	static BOOL PLAY_CAM_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, uint32_t p10) { return rage::NativeInvoke::Invoke<0xF39E2EDBF605630A, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // F39E2EDBF605630A BCEFB87E
	static BOOL IS_CAM_PLAYING_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x76EDD01A37BDDA44, BOOL>(p0, p1, p2); } // 76EDD01A37BDDA44 B998CB49
	static void SET_CAM_ANIM_CURRENT_PHASE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x1A09CDB7B105C698, uint32_t>(p0, p1); } // 1A09CDB7B105C698 3CB1D17F
	static float GET_CAM_ANIM_CURRENT_PHASE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB2850E51622B8C8B, float>(p0); } // B2850E51622B8C8B 345F72D0
	static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0xB754DFF4436CE5FF, BOOL>(p0, p1, p2, p3); } // B754DFF4436CE5FF 9458459E
	static void _0x8335F79B5636B220(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x8335F79B5636B220, uint32_t>(p0, p1, p2, p3); } // 8335F79B5636B220 56F9ED27
	static void _0x2765884D8FED9CBA(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x2765884D8FED9CBA, uint32_t>(p0, p1); } // 2765884D8FED9CBA 71570DBA
	static void _0x45CD07593C5459F2(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x45CD07593C5459F2, uint32_t>(p0, p1, p2, p3); } // 45CD07593C5459F2 60B345DE
	static void _0xEE0966B0F1226875(uint32_t p0) { rage::NativeInvoke::Invoke<0xEE0966B0F1226875, uint32_t>(p0); } // EE0966B0F1226875 44473EFC
	static BOOL _0x5EEC7B1AE687C584(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5EEC7B1AE687C584, BOOL>(p0); } // 5EEC7B1AE687C584 DA931D65
	static BOOL IS_SCREEN_FADED_OUT() { return rage::NativeInvoke::Invoke<0xC2C705ED6124A7C2, BOOL>(); } // C2C705ED6124A7C2 9CAA05FA
	static BOOL IS_SCREEN_FADED_IN() { return rage::NativeInvoke::Invoke<0x8D4100BAA46EE198, BOOL>(); } // 8D4100BAA46EE198 4F37276D
	static BOOL IS_SCREEN_FADING_OUT() { return rage::NativeInvoke::Invoke<0xF468278E75CA2341, BOOL>(); } // F468278E75CA2341 79275A57
	static BOOL IS_SCREEN_FADING_IN() { return rage::NativeInvoke::Invoke<0xC17F446CF864854D, BOOL>(); } // C17F446CF864854D C7C82800
	static void DO_SCREEN_FADE_IN(uint32_t p0) { rage::NativeInvoke::Invoke<0x662E87A876F1069D, uint32_t>(p0); } // 662E87A876F1069D 66C1BDEE
	static void DO_SCREEN_FADE_OUT(uint32_t p0) { rage::NativeInvoke::Invoke<0x7C69A4879766A867, uint32_t>(p0); } // 7C69A4879766A867 89D01805
	static void SET_WIDESCREEN_BORDERS(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFA65E7A36F8CCF0A, uint32_t>(p0, p1); } // FA65E7A36F8CCF0A 1A75DC9A
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return rage::NativeInvoke::Invoke<0xD51D48ADA03E62C7, Vector3>(); } // D51D48ADA03E62C7 9388CF79
	static Vector3 GET_GAMEPLAY_CAM_ROT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x11EE076BE3DC10C8, Vector3>(p0); } // 11EE076BE3DC10C8 13A010B5
	static uint32_t GET_GAMEPLAY_CAM_FOV() { return rage::NativeInvoke::Invoke<0x9F39A4E08B211E73, uint32_t>(); } // 9F39A4E08B211E73 4D6B3BFA
	static void _0xB3A2E1E33B288962(float p0) { rage::NativeInvoke::Invoke<0xB3A2E1E33B288962, uint32_t>(p0); } // B3A2E1E33B288962 A6E73135
	static void _0x06D88DBBBECD37E5A(float p0) { rage::NativeInvoke::Invoke<0x06D88DBBBECD37E5A, uint32_t>(p0); } // 06D88DBBBECD37E5A 1126E37C
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return rage::NativeInvoke::Invoke<0xEC3EBDC776EBC105, float>(); } // EC3EBDC776EBC105 CAF839C2
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float p0) { rage::NativeInvoke::Invoke<0xBE5E0E5A454F4D6A, uint32_t>(p0); } // BE5E0E5A454F4D6A 20C6217C
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return rage::NativeInvoke::Invoke<0xA38424C4D1A35716, float>(); } // A38424C4D1A35716 FC5A4946
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float p0, float p1) { rage::NativeInvoke::Invoke<0x77CB1AAAF31275BE, uint32_t>(p0, p1); } // 77CB1AAAF31275BE 6381B963
	static void _0xA9BF832396751ADB(float p0) { rage::NativeInvoke::Invoke<0xA9BF832396751ADB, uint32_t>(p0); } // A9BF832396751ADB
	static void _0xB27C8D61506D9E62(float p0) { rage::NativeInvoke::Invoke<0xB27C8D61506D9E62, uint32_t>(p0); } // B27C8D61506D9E62
	static void _0x5F80A122A2D28802(BOOL p0) { rage::NativeInvoke::Invoke<0x5F80A122A2D28802, uint32_t>(p0); } // 5F80A122A2D28802
	static void SHAKE_GAMEPLAY_CAM(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xF1C274C08D24D634, uint32_t>(p0, p1); } // F1C274C08D24D634 F2EFE660
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return rage::NativeInvoke::Invoke<0x0D0FDF77C380EC475, BOOL>(); } // 0D0FDF77C380EC475 3457D681
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float p0) { rage::NativeInvoke::Invoke<0xF78764690DB8F559, uint32_t>(p0); } // F78764690DB8F559 9219D44A
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { rage::NativeInvoke::Invoke<0x0B3BE5EAE7F48BADE, uint32_t>(p0); } // 0B3BE5EAE7F48BADE FD569E4E
	static void _0x75A789F1BD4FCEC9(uint32_t p0) { rage::NativeInvoke::Invoke<0x75A789F1BD4FCEC9, uint32_t>(p0); } // 75A789F1BD4FCEC9 7D3007A2
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return rage::NativeInvoke::Invoke<0x59CDBA417E0AD083, BOOL>(); } // 59CDBA417E0AD083 0EF276DA
	static BOOL _0xE6898C981186359C() { return rage::NativeInvoke::Invoke<0xE6898C981186359C, BOOL>(); } // E6898C981186359C C0B00C20
	static BOOL _0xB1408EC766262EB5() { return rage::NativeInvoke::Invoke<0xB1408EC766262EB5, BOOL>(); } // B1408EC766262EB5 60C23785
	static void _0xFA78E5A30E979FA6(BOOL p0) { rage::NativeInvoke::Invoke<0xFA78E5A30E979FA6, uint32_t>(p0); } // FA78E5A30E979FA6 20BFF6E5
	static void _0x5315EC07622F03D4() { rage::NativeInvoke::Invoke<0x5315EC07622F03D4, uint32_t>(); } // 5315EC07622F03D4 A61FF9AC
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return rage::NativeInvoke::Invoke<0x17883A5D027318C8, BOOL>(); } // 17883A5D027318C8 33C83F17
	static void _0x2469B2635578E3C4(uint32_t p0) { rage::NativeInvoke::Invoke<0x2469B2635578E3C4, uint32_t>(p0); } // 2469B2635578E3C4 2701A9AD
	static void _0x9197C40714B02BBF(uint32_t p0) { rage::NativeInvoke::Invoke<0x9197C40714B02BBF, uint32_t>(p0); } // 9197C40714B02BBF C4736ED3
	static void _0x5401ACAABF7E8FCB(uint32_t p0) { rage::NativeInvoke::Invoke<0x5401ACAABF7E8FCB, uint32_t>(p0); } // 5401ACAABF7E8FCB
	static void _0x9CF747CB24FAE16E() { rage::NativeInvoke::Invoke<0x9CF747CB24FAE16E, uint32_t>(); } // 9CF747CB24FAE16E 6B0E9D57
	static BOOL IS_SPHERE_VISIBLE(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x23A9305227426F8B, BOOL>(p0, p1, p2, p3); } // 23A9305227426F8B DD1329E2
	static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return rage::NativeInvoke::Invoke<0xF4E548FF0E09C05C, BOOL>(); } // F4E548FF0E09C05C 9F9E856C
	static BOOL SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x62138B1571E297C7, BOOL>(p0, p1); } // 62138B1571E297C7 1425F6AC
	static void _0xE9096DC7FFFD5750(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE9096DC7FFFD5750, uint32_t>(p0, p1); } // E9096DC7FFFD5750 8DC53629
	static void _0xFA48C1A7973849AF() { rage::NativeInvoke::Invoke<0xFA48C1A7973849AF, uint32_t>(); } // FA48C1A7973849AF 1F9DE6E4
	static void _0xCDB39AECC4D67E79(float p0, float p1) { rage::NativeInvoke::Invoke<0xCDB39AECC4D67E79, uint32_t>(p0, p1); } // CDB39AECC4D67E79 749909AC
	static void _0x41D4442B07A0FF5F(float p0, float p1) { rage::NativeInvoke::Invoke<0x41D4442B07A0FF5F, uint32_t>(p0, p1); } // 41D4442B07A0FF5F FA3A16E7
	static void _0xB6893C15800757D3(float p0, float p1) { rage::NativeInvoke::Invoke<0xB6893C15800757D3, uint32_t>(p0, p1); } // B6893C15800757D3 77340650
	static void _0x325321DAA8D5D727(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x325321DAA8D5D727, uint32_t>(p0, p1); } // 325321DAA8D5D727 4B22C5CB
	static void _0xE9B5EE42D44EAC1C() { rage::NativeInvoke::Invoke<0xE9B5EE42D44EAC1C, uint32_t>(); } // E9B5EE42D44EAC1C
	static void _0x8C3EC449F7948B8A() { rage::NativeInvoke::Invoke<0x8C3EC449F7948B8A, uint32_t>(); } // 8C3EC449F7948B8A
	static uint32_t GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return rage::NativeInvoke::Invoke<0xC243F8FF770AE73C, uint32_t>(); } // C243F8FF770AE73C 57583DF1
	static uint32_t GET_FOLLOW_PED_CAM_VIEW_MODE() { return rage::NativeInvoke::Invoke<0x25A5D05A7AF9563B, uint32_t>(); } // 25A5D05A7AF9563B A65FF946
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(uint32_t p0) { rage::NativeInvoke::Invoke<0x86A38958F477BE80, uint32_t>(p0); } // 86A38958F477BE80 495DBE8D
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return rage::NativeInvoke::Invoke<0xEE3FEF5CB30FDBA9, BOOL>(); } // EE3FEF5CB30FDBA9 8DD49B77
	static void _0xD41BDABD54E48753(BOOL p0) { rage::NativeInvoke::Invoke<0xD41BDABD54E48753, uint32_t>(p0); } // D41BDABD54E48753 9DB5D391
	static void _0x98EC954FE074A36E(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0x98EC954FE074A36E, uint32_t>(p0, p1); } // 98EC954FE074A36E 92302899
	static uint32_t GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return rage::NativeInvoke::Invoke<0xCFCDD75CC6F54408, uint32_t>(); } // CFCDD75CC6F54408 8CD67DE3
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x7152968414A8007F, uint32_t>(p0); } // 7152968414A8007F 8F55EBBE
	static uint32_t GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return rage::NativeInvoke::Invoke<0x16F52C789EC7346D, uint32_t>(); } // 16F52C789EC7346D A4B4DB03
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(uint32_t p0) { rage::NativeInvoke::Invoke<0xEC3C683F5F7BA0D3, uint32_t>(p0); } // EC3C683F5F7BA0D3 C4FBBBD3
	static uint32_t _0xD686D61A57BCB6E7(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD686D61A57BCB6E7, uint32_t>(p0); } // D686D61A57BCB6E7 F3B148A6
	static void _0x22272191749E9762(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x22272191749E9762, uint32_t>(p0, p1); } // 22272191749E9762 1DEBCB45
	static uint32_t _0xCF4F7FBD80ABE315() { return rage::NativeInvoke::Invoke<0xCF4F7FBD80ABE315, uint32_t>(); } // CF4F7FBD80ABE315
	static BOOL IS_AIM_CAM_ACTIVE() { return rage::NativeInvoke::Invoke<0xC0C709777CCE070F, BOOL>(); } // C0C709777CCE070F C24B4F6F
	static BOOL _0xD5979F74CBEDC68E() { return rage::NativeInvoke::Invoke<0xD5979F74CBEDC68E, BOOL>(); } // D5979F74CBEDC68E 8F320DE4
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return rage::NativeInvoke::Invoke<0x4B1DB7F8007D3A8E, BOOL>(); } // 4B1DB7F8007D3A8E D6280468
	static void _0xF3166D03A5924568() { rage::NativeInvoke::Invoke<0xF3166D03A5924568, uint32_t>(); } // F3166D03A5924568 1BAA7182
	static float _0x673D1AF84EDA28A5() { return rage::NativeInvoke::Invoke<0x673D1AF84EDA28A5, float>(); } // 673D1AF84EDA28A5 33951005
	static void _0xE42C2201C11C1279(float p0) { rage::NativeInvoke::Invoke<0xE42C2201C11C1279, uint32_t>(p0); } // E42C2201C11C1279 9F4AF763
	static void _0x9AE219F565919413(float p0, float p1) { rage::NativeInvoke::Invoke<0x9AE219F565919413, uint32_t>(p0, p1); } // 9AE219F565919413 68BA0730
	static void _0xD2444D47D59146BF(float p0, float p1) { rage::NativeInvoke::Invoke<0xD2444D47D59146BF, uint32_t>(p0, p1); } // D2444D47D59146BF 2F29F0D5
	static void _0xA6CD9F1462874FC8(float p0, float p1) { rage::NativeInvoke::Invoke<0xA6CD9F1462874FC8, uint32_t>(p0, p1); } // A6CD9F1462874FC8 76DAC96C
	static void _0x0859D6CCBF11D8802(float p0) { rage::NativeInvoke::Invoke<0x0859D6CCBF11D8802, uint32_t>(p0); } // 0859D6CCBF11D8802 0E21069D
	static void _0xA5833EEA42807168(float p0) { rage::NativeInvoke::Invoke<0xA5833EEA42807168, uint32_t>(p0); } // A5833EEA42807168 71E9C63E
	static void _0xF3A8D52F48EF53FA(BOOL p0) { rage::NativeInvoke::Invoke<0xF3A8D52F48EF53FA, uint32_t>(p0); } // F3A8D52F48EF53FA D1EEBC45
	static Vector3 _0xCAED01C16CFFE43C() { return rage::NativeInvoke::Invoke<0xCAED01C16CFFE43C, Vector3>(); } // CAED01C16CFFE43C 9C84BDA0
	static Vector3 _0x15625E41D8D33E1D(uint32_t p0) { return rage::NativeInvoke::Invoke<0x15625E41D8D33E1D, Vector3>(p0); } // 15625E41D8D33E1D 1FFBEFC5
	static Vector3 _0x1A62084802F2B69D(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x1A62084802F2B69D, Vector3>(p0, p1); } // 1A62084802F2B69D ACADF916
	static float _0xBCB9DCF2C76D747C() { return rage::NativeInvoke::Invoke<0xBCB9DCF2C76D747C, float>(); } // BCB9DCF2C76D747C 721B763B
	static float _0xAF23629CA4B541E1(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAF23629CA4B541E1, float>(p0); } // AF23629CA4B541E1 23E3F106
	static float _0xB2AEC196DF712795() { return rage::NativeInvoke::Invoke<0xB2AEC196DF712795, float>(); } // B2AEC196DF712795 457AE195
	static float _0x745FBEA28E665938() { return rage::NativeInvoke::Invoke<0x745FBEA28E665938, float>(); } // 745FBEA28E665938 46CB3A49
	static float _0x3D0251A6132F0FC7() { return rage::NativeInvoke::Invoke<0x3D0251A6132F0FC7, float>(); } // 3D0251A6132F0FC7 19297A7A
	static float _0x4D786F8A3025A3E3() { return rage::NativeInvoke::Invoke<0x4D786F8A3025A3E3, float>(); } // 4D786F8A3025A3E3 F24777CA
	static float _0xD232C78BB405F36E() { return rage::NativeInvoke::Invoke<0xD232C78BB405F36E, float>(); } // D232C78BB405F36E 38992E83
	static void SET_GAMEPLAY_COORD_HINT(float p0, float p1, float p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x372F870A74439808, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 372F870A74439808 F27483C9
	static void SET_GAMEPLAY_PED_HINT(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x799F50B736831F50, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 799F50B736831F50 7C27343E
	static void SET_GAMEPLAY_VEHICLE_HINT(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x70D9C3801B5CF3F9, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 70D9C3801B5CF3F9 2C9A11D8
	static void _0x350B8A2B3249C3B0(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x350B8A2B3249C3B0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 350B8A2B3249C3B0 2ED5E2F8
	static void SET_GAMEPLAY_ENTITY_HINT(uint32_t p0, float p1, float p2, float p3, BOOL p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { rage::NativeInvoke::Invoke<0x5272DA4DFB8755D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 5272DA4DFB8755D 66C32306
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return rage::NativeInvoke::Invoke<0x4DA2E12E0157B5A3, BOOL>(); } // 4DA2E12E0157B5A3 AD8DA205
	static void STOP_GAMEPLAY_HINT(BOOL p0) { rage::NativeInvoke::Invoke<0xD1C3C2B4975D8AC, uint32_t>(p0); } // D1C3C2B4975D8AC 1BC28B7B
	static void _0xC3217D5D3D14D874(uint32_t p0) { rage::NativeInvoke::Invoke<0xC3217D5D3D14D874, uint32_t>(p0); } // C3217D5D3D14D874 CAFEE798
	static void _0x16F8D6216A83987C(BOOL p0) { rage::NativeInvoke::Invoke<0x16F8D6216A83987C, uint32_t>(p0); } // 16F8D6216A83987C
	static uint32_t _0x3D73FF90660B4215() { return rage::NativeInvoke::Invoke<0x3D73FF90660B4215, uint32_t>(); } // 3D73FF90660B4215
	static void SET_GAMEPLAY_HINT_FOV(float p0) { rage::NativeInvoke::Invoke<0x4307004F998C4882, uint32_t>(p0); } // 4307004F998C4882 96FD173B
	static void _0x7F5316ECFD8DA1CC(float p0) { rage::NativeInvoke::Invoke<0x7F5316ECFD8DA1CC, uint32_t>(p0); } // 7F5316ECFD8DA1CC 72E8CD3A
	static void _0x873110DD0F490654(float p0) { rage::NativeInvoke::Invoke<0x873110DD0F490654, uint32_t>(p0); } // 873110DD0F490654 79472AE3
	static void _0x7CE63C7D0D4300F8(float p0) { rage::NativeInvoke::Invoke<0x7CE63C7D0D4300F8, uint32_t>(p0); } // 7CE63C7D0D4300F8 FC7464A0
	static void _0xA26DC501FE9CCF6E(float p0) { rage::NativeInvoke::Invoke<0xA26DC501FE9CCF6E, uint32_t>(p0); } // A26DC501FE9CCF6E 3554AA0E
	static void GET_IS_MULTIPLAYER_BRIEF(BOOL p0) { rage::NativeInvoke::Invoke<0x7F7472EAD5D217FD, uint32_t>(p0); } // 7F7472EAD5D217FD 2F0CE859
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0x2E98407DE29E0D76, uint32_t>(p0); } // 2E98407DE29E0D76 3FBC5D00
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return rage::NativeInvoke::Invoke<0x7053BA28C218E98, BOOL>(); } // 7053BA28C218E98 80471AD9
	static void SHAKE_CINEMATIC_CAM(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0x8C565956B6F9E723, uint32_t>(p0, p1); } // 8C565956B6F9E723 61815F31
	static BOOL IS_CINEMATIC_CAM_SHAKING() { return rage::NativeInvoke::Invoke<0xCED9A2EF4ECBCD16, BOOL>(); } // CED9A2EF4ECBCD16 8376D939
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { rage::NativeInvoke::Invoke<0x6B5EA708EBD7C0EF, uint32_t>(p0); } // 6B5EA708EBD7C0EF 67510C4B
	static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { rage::NativeInvoke::Invoke<0xD6F8F4C71896F304, uint32_t>(p0); } // D6F8F4C71896F304 71C12904
	static void _0xCEC2C1A952E78932() { rage::NativeInvoke::Invoke<0xCEC2C1A952E78932, uint32_t>(); } // CEC2C1A952E78932 5AC6DAC9
	static void _0xC8A31C46006AC0E6() { rage::NativeInvoke::Invoke<0xC8A31C46006AC0E6, uint32_t>(); } // C8A31C46006AC0E6 837F8581
	static void _0xE4D93F952ACE6D39() { rage::NativeInvoke::Invoke<0xE4D93F952ACE6D39, uint32_t>(); } // E4D93F952ACE6D39 65DDE8AF
	static void _0x34D2702FC9C10B64() { rage::NativeInvoke::Invoke<0x34D2702FC9C10B64, uint32_t>(); } // 34D2702FC9C10B64 D75CDD75
	static BOOL _0xE99F2BF3E6C9CA20() { return rage::NativeInvoke::Invoke<0xE99F2BF3E6C9CA20, BOOL>(); } // E99F2BF3E6C9CA20 96A07066
	static BOOL _0xB4559880093FB79E() { return rage::NativeInvoke::Invoke<0xB4559880093FB79E, BOOL>(); } // B4559880093FB79E
	static void CREATE_CINEMATIC_SHOT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xEDF9069E09C7144E, uint32_t>(p0, p1, p2, p3); } // EDF9069E09C7144E AC494E35
	static BOOL IS_CINEMATIC_SHOT_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9CC987147BD7A557, BOOL>(p0); } // 9CC987147BD7A557 A4049042
	static void STOP_CINEMATIC_SHOT(uint32_t p0) { rage::NativeInvoke::Invoke<0xCF819C8AB535C79, uint32_t>(p0); } // CF819C8AB535C79 D78358C5
	static void _0x5485AD3A89149EF5(BOOL p0) { rage::NativeInvoke::Invoke<0x5485AD3A89149EF5, uint32_t>(p0); } // 5485AD3A89149EF5 FBB85E02
	static void _0x45C08B49FC5C68C4() { rage::NativeInvoke::Invoke<0x45C08B49FC5C68C4, uint32_t>(); } // 45C08B49FC5C68C4 4938C82F
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0xF449FACE51E9CED4, uint32_t>(p0); } // F449FACE51E9CED4 2009E747
	static BOOL _0xB78322EEDE75AABE() { return rage::NativeInvoke::Invoke<0xB78322EEDE75AABE, BOOL>(); } // B78322EEDE75AABE 6739AD55
	static void STOP_CUTSCENE_CAM_SHAKING() { rage::NativeInvoke::Invoke<0xBF05A639D420CED, uint32_t>(); } // BF05A639D420CED F07D603D
	static void _0x6FB658F7CAA71C57(float p0) { rage::NativeInvoke::Invoke<0x6FB658F7CAA71C57, uint32_t>(p0); } // 6FB658F7CAA71C57 067BA6F5
	static uint32_t _0x738284E79AD465F(float p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x738284E79AD465F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 738284E79AD465F FD99BE2B
	static void _0x148BE90CB6E7D636() { rage::NativeInvoke::Invoke<0x148BE90CB6E7D636, uint32_t>(); } // 148BE90CB6E7D636 E206C450
	static void _0x5F3C6DA9E6C7C9AB(uint32_t p0) { rage::NativeInvoke::Invoke<0x5F3C6DA9E6C7C9AB, uint32_t>(p0); } // 5F3C6DA9E6C7C9AB B06CCD38
	static void _0x353E636C0F6E8F96(uint32_t p0) { rage::NativeInvoke::Invoke<0x353E636C0F6E8F96, uint32_t>(p0); } // 353E636C0F6E8F96
	static void _0xC600358708904B0C(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC600358708904B0C, uint32_t>(p0); } // C600358708904B0C
	static void _0x9D3B6E6475D2D218(uint32_t p0) { rage::NativeInvoke::Invoke<0x9D3B6E6475D2D218, uint32_t>(p0); } // 9D3B6E6475D2D218
}

namespace WEAPON
{
	static void ENABLE_LASER_SIGHT_RENDERING(BOOL p0) { rage::NativeInvoke::Invoke<0x1252B91DF30E2326, uint32_t>(p0); } // 1252B91DF30E2326 E3438955
	static uint32_t _0x050E2C6565C68F1C9(uint32_t p0) { return rage::NativeInvoke::Invoke<0x050E2C6565C68F1C9, uint32_t>(p0); } // 050E2C6565C68F1C9 324FA47A
	static uint32_t GET_WEAPONTYPE_MODEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB1E0BCECCDBB84FF, uint32_t>(p0); } // B1E0BCECCDBB84FF 44E1C269
	static uint32_t GET_WEAPONTYPE_SLOT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3D065250ED61F7CA, uint32_t>(p0); } // 3D065250ED61F7CA 2E3759AF
	static uint32_t GET_WEAPONTYPE_GROUP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF648048E6825DAC3, uint32_t>(p0); } // F648048E6825DAC3 5F2DE833
	static void SET_CURRENT_PED_WEAPON(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xA000D03DB5B545F, uint32_t>(p0, p1, p2); } // A000D03DB5B545F B8278882
	static BOOL GET_CURRENT_PED_WEAPON(uint32_t p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xAE0CD3052D6ED1ED, BOOL>(p0, p1, p2); } // AE0CD3052D6ED1ED B0237302
	static uint32_t _0xC802AF773B8A86E9(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC802AF773B8A86E9, uint32_t>(p0); } // C802AF773B8A86E9 5D73CD20
	static uint32_t GET_BEST_PED_WEAPON(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x6B9DE622102854B0, uint32_t>(p0, p1); } // 6B9DE622102854B0 B998D444
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x514C9C7B73B44C49, BOOL>(p0, p1); } // 514C9C7B73B44C49 8E6F2AF1
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x12EA6B1882056F26, BOOL>(p0, p1); } // 12EA6B1882056F26 F26C5D65
	static BOOL IS_PED_ARMED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x73741D3DABB81B29, BOOL>(p0, p1); } // 73741D3DABB81B29 0BFC892C
	static BOOL IS_WEAPON_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x577AED7A4A7B313C, BOOL>(p0); } // 577AED7A4A7B313C 38CA2954
	static BOOL HAS_PED_GOT_WEAPON(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x99A28335809E4B6C, BOOL>(p0, p1, p2); } // 99A28335809E4B6C 43D2FA82
	static BOOL _0xF0BCA5AA42062B2A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF0BCA5AA42062B2A, BOOL>(p0); } // F0BCA5AA42062B2A 02A32CB0
	static uint32_t GET_PED_WEAPONTYPE_IN_SLOT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x844EDB06A8B25065, uint32_t>(p0, p1); } // 844EDB06A8B25065 9BC64E16
	static uint32_t GET_AMMO_IN_PED_WEAPON(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x05B6F0BD6BBB2050, uint32_t>(p0, p1); } // 05B6F0BD6BBB2050 0C755733
	static void ADD_AMMO_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x26ABA9F6929FC315, uint32_t>(p0, p1, p2); } // 26ABA9F6929FC315 7F0580C7
	static void SET_PED_AMMO(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x5E9FB5BCBCC5552E, uint32_t>(p0, p1, p2); } // 5E9FB5BCBCC5552E BF90DF1A
	static void SET_PED_INFINITE_AMMO(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x278C9D6141B17BA8, uint32_t>(p0, p1, p2); } // 278C9D6141B17BA8 9CB8D278
	static void _0x149174181F6271F0(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x149174181F6271F0, uint32_t>(p0, p1); } // 149174181F6271F0 5A5E3B67
	static void GIVE_WEAPON_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0x3F9EDC2D18464273, uint32_t>(p0, p1, p2, p3, p4); } // 3F9EDC2D18464273 C4D88A85
	static void GIVE_DELAYED_WEAPON_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x22E3FB128E67BC05, uint32_t>(p0, p1, p2, p3); } // 22E3FB128E67BC05 5868D20D
	static void REMOVE_ALL_PED_WEAPONS(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD924F18058446351, uint32_t>(p0, p1); } // D924F18058446351 A44CE817
	static void REMOVE_WEAPON_FROM_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD419CF589B371044, uint32_t>(p0, p1); } // D419CF589B371044 9C37F220
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB0CAF046D7045AFD, uint32_t>(p0, p1); } // B0CAF046D7045AFD 00CFD6E9
	static void SET_PED_CURRENT_WEAPON_VISIBLE(uint32_t p0, BOOL p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x06ABB53110C862972, uint32_t>(p0, p1, p2, p3); } // 06ABB53110C862972 00BECD77
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8A38A8CE1C66FD26, uint32_t>(p0, p1); } // 8A38A8CE1C66FD26 8A444056
	static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x26C9ECBDBBD7083F, BOOL>(p0, p1, p2); } // 26C9ECBDBBD7083F CDFBBCC6
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(uint32_t p0) { rage::NativeInvoke::Invoke<0x0F9656291E97A14E1, uint32_t>(p0); } // 0F9656291E97A14E1 52C68832
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xEA4A2F1853D39672, BOOL>(p0, p1, p2); } // EA4A2F1853D39672 6DAABB39
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uint32_t p0) { rage::NativeInvoke::Invoke<0xE265BF17546FED93, uint32_t>(p0); } // E265BF17546FED93 CEC2732B
	static void SET_PED_DROPS_WEAPON(uint32_t p0) { rage::NativeInvoke::Invoke<0x45ACB0F4EFEF8566, uint32_t>(p0); } // 45ACB0F4EFEF8566 3D3329FA
	static void SET_PED_DROPS_INVENTORY_WEAPON(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xA7A2591469596B1C, uint32_t>(p0, p1, p2, p3, p4, p5); } // A7A2591469596B1C 81FFB874
	static uint32_t GET_MAX_AMMO_IN_CLIP(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x3F1546B19E6B4594, uint32_t>(p0, p1, p2); } // 3F1546B19E6B4594 6961E2A4
	static BOOL GET_AMMO_IN_CLIP(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x283DC9F21B8978CB, BOOL>(p0, p1, p2); } // 283DC9F21B8978CB 73C100C3
	static BOOL SET_AMMO_IN_CLIP(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x3390F439BECE0939, BOOL>(p0, p1, p2); } // 3390F439BECE0939 A54B0B10
	static BOOL GET_MAX_AMMO(uint32_t p0, uint32_t p1, int *p2) { return rage::NativeInvoke::Invoke<0x2A292A04D839BF3D, BOOL>(p0, p1, p2); } // 2A292A04D839BF3D 0B294796
	static void SET_PED_AMMO_BY_TYPE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x9BD32B3007178D18, uint32_t>(p0, p1, p2); } // 9BD32B3007178D18 311C52BB
	static uint32_t GET_PED_AMMO_BY_TYPE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x3C5580898397C891, uint32_t>(p0, p1); } // 3C5580898397C891 54077C4D
	static void SET_PED_AMMO_TO_DROP(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x395B0BA0616F847C, uint32_t>(p0, p1); } // 395B0BA0616F847C 2386A307
	static void _0x497AA8F1AEB81ABD(float p0) { rage::NativeInvoke::Invoke<0x497AA8F1AEB81ABD, uint32_t>(p0); } // 497AA8F1AEB81ABD D6460EA2
	static uint32_t _0x46876FC049FB1DBA(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x46876FC049FB1DBA, uint32_t>(p0, p1); } // 46876FC049FB1DBA 09337863
	static uint32_t GET_PED_LAST_WEAPON_IMPACT_COORD(uint32_t p0, rage::scrVector* p1) { return rage::NativeInvoke::Invoke<0x12AA7FF0D68549E2, uint32_t>(p0, p1); } // 12AA7FF0D68549E2 9B266079
	static void SET_PED_GADGET(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x2D8ABC8CC825C578, uint32_t>(p0, p1, p2); } // 2D8ABC8CC825C578 8A256D0A
	static BOOL _0xCB79AB67F7DF0E8F(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xCB79AB67F7DF0E8F, BOOL>(p0, p1); } // CB79AB67F7DF0E8F 8DDD0B5B
	static uint32_t GET_SELECTED_PED_WEAPON(uint32_t p0) { return rage::NativeInvoke::Invoke<0x038C3C5CBC068F495, uint32_t>(p0); } // 038C3C5CBC068F495 D240123E
	static void EXPLODE_PROJECTILES(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x85391B0CBADC9125, uint32_t>(p0, p1, p2); } // 85391B0CBADC9125 35A0B955
	static void REMOVE_ALL_PROJECTILES_OF_TYPE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA20D0F9030F8682A, uint32_t>(p0, p1); } // A20D0F9030F8682A A5F89919
	static float _0x9E72A131A3CFE4(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9E72A131A3CFE4, float>(p0); } // 9E72A131A3CFE4 3612110D
	static float _0xECB505237A71C614(uint32_t p0) { return rage::NativeInvoke::Invoke<0xECB505237A71C614, float>(p0); } // ECB505237A71C614 B2B2BBAA
	static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xCA0F57DC6B4F6FDF, BOOL>(p0, p1, p2, p3); } // CA0F57DC6B4F6FDF A57E2E80
	static void GIVE_WEAPON_COMPONENT_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xA5D38CA437E6AE76, uint32_t>(p0, p1, p2); } // A5D38CA437E6AE76 3E1E286D
	static void REMOVE_WEAPON_COMPONENT_FROM_PED(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xC79B464835F5D0AC, uint32_t>(p0, p1, p2); } // C79B464835F5D0AC 412AA00D
	static BOOL HAS_PED_GOT_WEAPON_COMPONENT(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xC2AA32EA0F5ABE8C, BOOL>(p0, p1, p2); } // C2AA32EA0F5ABE8C DC0FC145
	static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x0633078AE081FDFFC, BOOL>(p0, p1, p2); } // 0633078AE081FDFFC 7565FB19
	static BOOL _0x4880C41280A56CE8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4880C41280A56CE8, BOOL>(p0); } // 4880C41280A56CE8 82EEAF0F
	static BOOL MAKE_PED_RELOAD(uint32_t p0) { return rage::NativeInvoke::Invoke<0x828E3F61759785DA, BOOL>(p0); } // 828E3F61759785DA 515292C2
	static void REQUEST_WEAPON_ASSET(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x75EC07FC3A76FA6B, uint32_t>(p0, p1, p2); } // 75EC07FC3A76FA6B 65D139A5
	static BOOL HAS_WEAPON_ASSET_LOADED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC35CCF23F0A1E055, BOOL>(p0); } // C35CCF23F0A1E055 1891D5BB
	static void REMOVE_WEAPON_ASSET(uint32_t p0) { rage::NativeInvoke::Invoke<0x59A935DC5B1115A0, uint32_t>(p0); } // 59A935DC5B1115A0 2C0DFE3C
	static uint32_t CREATE_WEAPON_OBJECT(uint32_t p0, uint32_t p1, float p2, float p3, float p4, BOOL p5, float p6) { return rage::NativeInvoke::Invoke<0xE7097371671ECEE, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // E7097371671ECEE 62F5987F
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xA37DD53A77EFC004, uint32_t>(p0, p1); } // A37DD53A77EFC004 F7612A37
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xFA9FC2CC12F12E2, uint32_t>(p0, p1); } // FA9FC2CC12F12E2 A6E7ED3C
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xCCFDA3E6DB3292FD, BOOL>(p0, p1); } // CCFDA3E6DB3292FD 1D368510
	static void GIVE_WEAPON_OBJECT_TO_PED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC4FA9391A7820F4C, uint32_t>(p0, p1); } // C4FA9391A7820F4C 639AF3EF
	static BOOL _0xB54A90CFB6499CC0(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xB54A90CFB6499CC0, BOOL>(p0, p1); } // B54A90CFB6499CC0 B1817BAA
	static uint32_t GET_WEAPON_OBJECT_FROM_PED(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x835BADE44D15B89F, uint32_t>(p0, p1); } // 835BADE44D15B89F DF939A38
	static void SET_PED_WEAPON_TINT_INDEX(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x707D1AA75102B121, uint32_t>(p0, p1, p2); } // 707D1AA75102B121 EB2A7B23
	static uint32_t GET_PED_WEAPON_TINT_INDEX(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x539EF466D1E3CB3E, uint32_t>(p0, p1); } // 539EF466D1E3CB3E 3F9C90A7
	static void SET_WEAPON_OBJECT_TINT_INDEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x222A503B1ACC8E1B, uint32_t>(p0, p1); } // 222A503B1ACC8E1B 44ACC1DA
	static uint32_t GET_WEAPON_OBJECT_TINT_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2D7FEB764471741F, uint32_t>(p0); } // 2D7FEB764471741F D91D9576
	static uint32_t GET_WEAPON_TINT_COUNT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x66A8A449029FCEF9, uint32_t>(p0); } // 66A8A449029FCEF9 99E4EAAB
	static BOOL GET_WEAPON_HUD_STATS(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x57AB88AE53E6FE34, BOOL>(p0, p1); } // 57AB88AE53E6FE34 A9AD3D98
	static BOOL GET_WEAPON_COMPONENT_HUD_STATS(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xB6ECA79DB72D60DF, BOOL>(p0, p1); } // B6ECA79DB72D60DF BB5498F4
	static uint32_t GET_WEAPON_CLIP_SIZE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4FA0109B5AFB0E0B, uint32_t>(p0); } // 4FA0109B5AFB0E0B 8D515E66
	static void _0xB0CE2F58410F3E67(uint32_t p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xB0CE2F58410F3E67, uint32_t>(p0, p1, p2); } // B0CE2F58410F3E67 B4F44C6E
	static uint32_t _0x6548EE09EBE6F07B(uint32_t p0, float p1) { return rage::NativeInvoke::Invoke<0x6548EE09EBE6F07B, uint32_t>(p0, p1); } // 6548EE09EBE6F07B EC2E5304
	static void _0x5D4DF1B72809D988(uint32_t p0) { rage::NativeInvoke::Invoke<0x5D4DF1B72809D988, uint32_t>(p0); } // 5D4DF1B72809D988 E3BD00F9
	static BOOL _0xB6CDBC1E2904184A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB6CDBC1E2904184A, BOOL>(p0); } // B6CDBC1E2904184A BAF7BFBE
	static BOOL SET_WEAPON_SMOKEGRENADE_ASSIGNED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x494ECCA83F6C66DA, BOOL>(p0); } // 494ECCA83F6C66DA 76876154
	static uint32_t _0xDF504A84E9A42333(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDF504A84E9A42333, uint32_t>(p0); } // DF504A84E9A42333 B0127EA7
	static void SET_WEAPON_ANIMATION_OVERRIDE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x46D38CEA39E3DD6B, uint32_t>(p0, p1); } // 46D38CEA39E3DD6B A5DF7484
	static uint32_t GET_WEAPON_DAMAGE_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4671ADA807544C7C, uint32_t>(p0); } // 4671ADA807544C7C 013AFC13
	static void _0x58E3A84D0B120543(uint32_t p0) { rage::NativeInvoke::Invoke<0x58E3A84D0B120543, uint32_t>(p0); } // 58E3A84D0B120543 64646F1D
	static BOOL _0xE0D0E26CD5C29692(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE0D0E26CD5C29692, BOOL>(p0); } // E0D0E26CD5C29692 135E7AD4
}

namespace ITEMSET
{
	static uint32_t CREATE_ITEMSET(BOOL p0) { return rage::NativeInvoke::Invoke<0x95F5931B4A4A5A4F, uint32_t>(p0); } // 95F5931B4A4A5A4F 0A113B2C
	static void DESTROY_ITEMSET(uint32_t p0) { rage::NativeInvoke::Invoke<0x2EC9C57FB0F87740, uint32_t>(p0); } // 2EC9C57FB0F87740 83CE1A4C
	static BOOL IS_ITEMSET_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7EB3F4AFF5E5629C, BOOL>(p0); } // 7EB3F4AFF5E5629C D201FC29
	static BOOL ADD_TO_ITEMSET(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x9C10EF90C142040A, BOOL>(p0, p1); } // 9C10EF90C142040A 6B0FE61B
	static void REMOVE_FROM_ITEMSET(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB84BEE9EC8BFE9E9, uint32_t>(p0, p1); } // B84BEE9EC8BFE9E9 A9565228
	static uint32_t GET_ITEMSET_SIZE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3A30E959081412C4, uint32_t>(p0); } // 3A30E959081412C4 2B31F41A
	static uint32_t GET_INDEXED_ITEM_IN_ITEMSET(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x55A47F6E3AD65F26, uint32_t>(p0, p1); } // 55A47F6E3AD65F26 3F712874
	static BOOL IS_IN_ITEMSET(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x911210B40CE6E4B5, BOOL>(p0, p1); } // 911210B40CE6E4B5 0D4B9730
	static void CLEAN_ITEMSET(uint32_t p0) { rage::NativeInvoke::Invoke<0x7019C59DA53362F8, uint32_t>(p0); } // 7019C59DA53362F8 919A4858
}

namespace STREAMING
{
	static void LOAD_ALL_OBJECTS_NOW() { rage::NativeInvoke::Invoke<0x61D7DE7855BA322D, uint32_t>(); } // 61D7DE7855BA322D C9DBDA90
	static void LOAD_SCENE(float p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xACF6EF3086F35588, uint32_t>(p0, p1, p2); } // ACF6EF3086F35588 B72403F5
	static BOOL NETWORK_UPDATE_LOAD_SCENE() { return rage::NativeInvoke::Invoke<0x59A32924D04EF9E2, BOOL>(); } // 59A32924D04EF9E2 C76E023C
	static void NETWORK_STOP_LOAD_SCENE() { rage::NativeInvoke::Invoke<0x3853D49231A8D913, uint32_t>(); } // 3853D49231A8D913 24857907
	static uint32_t IS_NETWORK_LOADING_SCENE() { return rage::NativeInvoke::Invoke<0x74231FFA566BF8EB, uint32_t>(); } // 74231FFA566BF8EB 6DCFC021
	static void SET_INTERIOR_ACTIVE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x588A2342FBF483D3, uint32_t>(p0, p1); } // 588A2342FBF483D3 E1013910
	static void REQUEST_MODEL(uint32_t p0) { rage::NativeInvoke::Invoke<0xCBE6AC5010E5CE5C, uint32_t>(p0); } // CBE6AC5010E5CE5C FFF1B500
	static void _0x1208BFE48A0795A8(uint32_t p0) { rage::NativeInvoke::Invoke<0x1208BFE48A0795A8, uint32_t>(p0); } // 1208BFE48A0795A8 48CEB6B4
	static BOOL HAS_MODEL_LOADED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD291857D0C9C7FEC, BOOL>(p0); } // D291857D0C9C7FEC 62BFDB37
	static void _0x5A970C3A7A1E6FDA(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x5A970C3A7A1E6FDA, uint32_t>(p0, p1); } // 5A970C3A7A1E6FDA 939243FB
	static void SET_MODEL_AS_NO_LONGER_NEEDED(uint32_t p0) { rage::NativeInvoke::Invoke<0xFF467904A8A12BBE, uint32_t>(p0); } // FF467904A8A12BBE AE0F069E
	static BOOL IS_MODEL_IN_CDIMAGE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEC55223EB53BF03, BOOL>(p0); } // EC55223EB53BF03 1094782F
	static BOOL IS_MODEL_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x95D2CAFD0847126E, BOOL>(p0); } // 95D2CAFD0847126E AF8F8E9D
	static BOOL IS_MODEL_A_VEHICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4E583EB6802F4DA9, BOOL>(p0); } // 4E583EB6802F4DA9 FFFC85D4
	static void REQUEST_COLLISION_AT_COORD(float p0, float p1, float p2) { rage::NativeInvoke::Invoke<0x0153283B8BB8F15AB, uint32_t>(p0, p1, p2); } // 0153283B8BB8F15AB CD9805E7
	static void REQUEST_COLLISION_FOR_MODEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x6D7EB68BCA6E62DB, uint32_t>(p0); } // 6D7EB68BCA6E62DB 3930C042
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9F5185AF5BCEE3AD, BOOL>(p0); } // 9F5185AF5BCEE3AD 41A094F8
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xB9DEC413FDB9493F, uint32_t>(p0, p1, p2); } // B9DEC413FDB9493F C2CC1DF2
	static BOOL _0xF9A4710AC2279D8E(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xF9A4710AC2279D8E, BOOL>(p0); } // F9A4710AC2279D8E CD31C872
	static void REQUEST_ANIM_DICT(uint32_t *p0) { rage::NativeInvoke::Invoke<0x395C5D98343F0040, uint32_t>(p0); } // 395C5D98343F0040 DCA96950
	static BOOL HAS_ANIM_DICT_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xCE40391AB65FE305, BOOL>(p0); } // CE40391AB65FE305 05E6763C
	static void REMOVE_ANIM_DICT(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA878656BC39BBC51, uint32_t>(p0); } // A878656BC39BBC51 0AE050B5
	static void REQUEST_ANIM_SET(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC47168D93A3B223B, uint32_t>(p0); } // C47168D93A3B223B 2988B3FC
	static BOOL HAS_ANIM_SET_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xB3E0182D84120379, BOOL>(p0); } // B3E0182D84120379 4FFF397D
	static void REMOVE_ANIM_SET(uint32_t *p0) { rage::NativeInvoke::Invoke<0xD0522F98C595B73F, uint32_t>(p0); } // D0522F98C595B73F D04A817A
	static void REQUEST_CLIP_SET(uint32_t *p0) { rage::NativeInvoke::Invoke<0x4554A56FA4AB29D4, uint32_t>(p0); } // 4554A56FA4AB29D4 546C627A
	static BOOL HAS_CLIP_SET_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x7283AF7715BF497C, BOOL>(p0); } // 7283AF7715BF497C 230D5455
	static void REMOVE_CLIP_SET(uint32_t *p0) { rage::NativeInvoke::Invoke<0x036A51C16EAE930C6, uint32_t>(p0); } // 036A51C16EAE930C6 1E21F7AA
	static void REQUEST_IPL(uint32_t *p0) { rage::NativeInvoke::Invoke<0x601E476BBE5247E8, uint32_t>(p0); } // 601E476BBE5247E8 3B70D1DB
	static void REMOVE_IPL(uint32_t *p0) { rage::NativeInvoke::Invoke<0xF5C0693050707613, uint32_t>(p0); } // F5C0693050707613 DF7CBD36
	static BOOL IS_IPL_ACTIVE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x70AE5EB0F832620B, BOOL>(p0); } // 70AE5EB0F832620B B2C33714
	static void SET_STREAMING(BOOL p0) { rage::NativeInvoke::Invoke<0x45B3203E024F2BC0, uint32_t>(p0); } // 45B3203E024F2BC0 27EF6CB2
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL p0) { rage::NativeInvoke::Invoke<0x6AE9435516202E12, uint32_t>(p0); } // 6AE9435516202E12 9211A28A
	static void SET_REDUCE_PED_MODEL_BUDGET(BOOL p0) { rage::NativeInvoke::Invoke<0xA589B5F4D7EAEE6D, uint32_t>(p0); } // A589B5F4D7EAEE6D AFCB2B86
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL p0) { rage::NativeInvoke::Invoke<0x31C604AB6DA96DB8, uint32_t>(p0); } // 31C604AB6DA96DB8 CDB4FB7E
	static void SET_DITCH_POLICE_MODELS(uint32_t p0) { rage::NativeInvoke::Invoke<0x9170954EA4850E64, uint32_t>(p0); } // 9170954EA4850E64 3EA7FCE4
	static uint32_t GET_NUMBER_OF_STREAMING_REQUESTS() { return rage::NativeInvoke::Invoke<0x5B75812E50CF3504, uint32_t>(); } // 5B75812E50CF3504 C2EE9A02
	static void REQUEST_PTFX_ASSET() { rage::NativeInvoke::Invoke<0x903BC66D86D2CC1E>(); } // 903BC66D86D2CC1E 2C649263
	static BOOL HAS_PTFX_ASSET_LOADED() { return rage::NativeInvoke::Invoke<0x9B3E74864C634DA, BOOL>(); } // 9B3E74864C634DA 3EFF96BE
	static void REMOVE_PTFX_ASSET() { rage::NativeInvoke::Invoke<0x7E0FE22DC929277C>(); } // 7E0FE22DC929277C C10F178C
	static void _REQUEST_DLC_PTFX(const char *p0) { rage::NativeInvoke::Invoke<0xCF907E5AC65B038E, uint32_t>(p0); } // CF907E5AC65B038E CFEA19A9
	static BOOL _HAS_DLC_PTFX_LOADED(const char *p0) { return rage::NativeInvoke::Invoke<0x173B323AC0CDFE9F, BOOL>(p0); } // 173B323AC0CDFE9F 9ACC6446
	static void SET_VEHICLE_POPULATION_BUDGET(uint32_t p0) { rage::NativeInvoke::Invoke<0x71BAB41E12C3DD96, uint32_t>(p0); } // 71BAB41E12C3DD96 1D56993C
	static void SET_PED_POPULATION_BUDGET(uint32_t p0) { rage::NativeInvoke::Invoke<0xEC7A879C0E3A5901, uint32_t>(p0); } // EC7A879C0E3A5901 D2D026CD
	static void CLEAR_FOCUS() { rage::NativeInvoke::Invoke<0x82421251EA167F9A, uint32_t>(); } // 82421251EA167F9A 34D91E7A
	static void _0x8141B97DE35EAF42(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x8141B97DE35EAF42, uint32_t>(p0, p1, p2, p3, p4, p5); } // 8141B97DE35EAF42 14680A60
	static void SET_FOCUS_ENTITY(uint32_t p0) { rage::NativeInvoke::Invoke<0xA9E50DAA51C8EE4D, uint32_t>(p0); } // A9E50DAA51C8EE4D 18DB04AC
	static BOOL IS_ENTITY_FOCUS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x47673CA46C94CD3, BOOL>(p0); } // 47673CA46C94CD3 B456D707
	static void _0x0DEC4BB9C64BB7C50(uint32_t p0) { rage::NativeInvoke::Invoke<0x0DEC4BB9C64BB7C50, uint32_t>(p0); } // 0DEC4BB9C64BB7C50
	static void _0xEC53C2033B9406B2(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0xEC53C2033B9406B2, uint32_t>(p0, p1); } // EC53C2033B9406B2 403CD434
	static void _0x34E90427DB2C9C3D(uint32_t p0) { rage::NativeInvoke::Invoke<0x34E90427DB2C9C3D, uint32_t>(p0); } // 34E90427DB2C9C3D A07BAEB9
	static uint32_t _0x67C7B526372AB1F7(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x67C7B526372AB1F7, uint32_t>(p0, p1, p2, p3, p4, p5); } // 67C7B526372AB1F7 10B6AB36
	static uint32_t _0x14EF80A973C10A00(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x14EF80A973C10A00, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 14EF80A973C10A00 72344191
	static uint32_t _0x01B3D59C23288231C(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x01B3D59C23288231C, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 01B3D59C23288231C C0157255
	static void _0x1484CB72453DE620(uint32_t p0) { rage::NativeInvoke::Invoke<0x1484CB72453DE620, uint32_t>(p0); } // 1484CB72453DE620 E80F8ABE
	static uint32_t _0x8F23802DAAA26B2(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8F23802DAAA26B2, uint32_t>(p0); } // 8F23802DAAA26B2 1B3521F4
	static uint32_t _0x0B6507CA6AC51E37A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0B6507CA6AC51E37A, uint32_t>(p0); } // 0B6507CA6AC51E37A 42CFE9C0
	static uint32_t _0x61D9862E3903D16D() { return rage::NativeInvoke::Invoke<0x61D9862E3903D16D, uint32_t>(); } // 61D9862E3903D16D 56253356
	static BOOL NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x47EB1A81EF7F6F5E, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // 47EB1A81EF7F6F5E DF9C38B6
	static BOOL _0xE24944560D6F19ED(float p0, float p1, float p2, float p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xE24944560D6F19ED, BOOL>(p0, p1, p2, p3, p4); } // E24944560D6F19ED FA037FEB
	static void NEW_LOAD_SCENE_STOP() { rage::NativeInvoke::Invoke<0x5DE91777B624B339, uint32_t>(); } // 5DE91777B624B339 7C05B1F6
	static uint32_t IS_NEW_LOAD_SCENE_ACTIVE() { return rage::NativeInvoke::Invoke<0x9DBF5ADC61595373, uint32_t>(); } // 9DBF5ADC61595373 AD234B7F
	static BOOL IS_NEW_LOAD_SCENE_LOADED() { return rage::NativeInvoke::Invoke<0x096D96D592BE19BEA, BOOL>(); } // 096D96D592BE19BEA 3ECD839F
	static BOOL _0xC9499AE176FB8484() { return rage::NativeInvoke::Invoke<0xC9499AE176FB8484, BOOL>(); } // C9499AE176FB8484 EAA51103
	static void START_PLAYER_SWITCH(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xAA0990E3ED8437B7, uint32_t>(p0, p1, p2, p3); } // AA0990E3ED8437B7 0829E975
	static void STOP_PLAYER_SWITCH() { rage::NativeInvoke::Invoke<0x83FAAF48B0EAACD, uint32_t>(); } // 83FAAF48B0EAACD 2832C010
	static BOOL STOP_PLAYER_REMAIN_ARCADE() { return rage::NativeInvoke::Invoke<0xA4ADA92842355D33, BOOL>(); } // A4ADA92842355D33 56135ACC
	static uint32_t GET_PLAYER_SWITCH_TYPE() { return rage::NativeInvoke::Invoke<0x4B08838D3C4A40AA, uint32_t>(); } // 4B08838D3C4A40AA 280DC015
	static uint32_t GET_IDEAL_PLAYER_SWITCH_TYPE(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0xC434CEA3FC2359D6, uint32_t>(p0, p1, p2, p3, p4, p5); } // C434CEA3FC2359D6 D5A450F1
	static uint32_t GET_PLAYER_SWITCH_STATE() { return rage::NativeInvoke::Invoke<0x34F66A7928F4DB93, uint32_t>(); } // 34F66A7928F4DB93 39A0E1F2
	static uint32_t GET_PLAYER_SHORT_SWITCH_STATE() { return rage::NativeInvoke::Invoke<0x2621CD022E5AE115, uint32_t>(); } // 2621CD022E5AE115 9B7BA38F
	static void _0xA48A247910A6E571(uint32_t p0) { rage::NativeInvoke::Invoke<0xA48A247910A6E571, uint32_t>(p0); } // A48A247910A6E571 F0BD420D
	static uint32_t _0xB8BD521D1F906F0() { return rage::NativeInvoke::Invoke<0xB8BD521D1F906F0, uint32_t>(); } // B8BD521D1F906F0 02BA7AC2
	static void _0x7B207D72D37EFC3B(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { rage::NativeInvoke::Invoke<0x7B207D72D37EFC3B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 7B207D72D37EFC3B 47352E14
	static void _0x04B2180FC9D0403E3(uint32_t *p0) { rage::NativeInvoke::Invoke<0x04B2180FC9D0403E3, uint32_t>(p0); } // 04B2180FC9D0403E3 279077B0
	static void _0x9821FE0266D686EE() { rage::NativeInvoke::Invoke<0x9821FE0266D686EE, uint32_t>(); } // 9821FE0266D686EE 55CB21F9
	static void _0xBAA0FE55E638D8C3() { rage::NativeInvoke::Invoke<0xBAA0FE55E638D8C3, uint32_t>(); } // BAA0FE55E638D8C3 1084F2F4
	static void _0xD3744FCA4815EF13() { rage::NativeInvoke::Invoke<0xD3744FCA4815EF13, uint32_t>(); } // D3744FCA4815EF13 5B1E995D
	static void _0xEC81B96DF33239D6() { rage::NativeInvoke::Invoke<0xEC81B96DF33239D6, uint32_t>(); } // EC81B96DF33239D6 4B4B9A13
	static BOOL _0x7EA7AE481A42E95B() { return rage::NativeInvoke::Invoke<0x7EA7AE481A42E95B, BOOL>(); } // 7EA7AE481A42E95B 408F7148
	static void _0x98CD59A753CE3353(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x98CD59A753CE3353, uint32_t>(p0, p1, p2); } // 98CD59A753CE3353 FB4D062D
	static void _0x50A980784ED86151(uint32_t p0) { rage::NativeInvoke::Invoke<0x50A980784ED86151, uint32_t>(p0); } // 50A980784ED86151 2349373B
	static uint32_t _0x4159BF001E3FDB57() { return rage::NativeInvoke::Invoke<0x4159BF001E3FDB57, uint32_t>(); } // 4159BF001E3FDB57 74C16879
	static uint32_t SET_PLAYER_INVERTED_UP() { return rage::NativeInvoke::Invoke<0x038F612E131929D5E, uint32_t>(); } // 038F612E131929D5E 569847E3
	static uint32_t _0xF84FF9E4D5625A38() { return rage::NativeInvoke::Invoke<0xF84FF9E4D5625A38, uint32_t>(); } // F84FF9E4D5625A38 C7A3D279
	static BOOL DESTROY_PLAYER_IN_PAUSE_MENU() { return rage::NativeInvoke::Invoke<0x215578C9201B6757, BOOL>(); } // 215578C9201B6757 90F64284
	static void _0x437CD632F20746A6() { rage::NativeInvoke::Invoke<0x437CD632F20746A6, uint32_t>(); } // 437CD632F20746A6
	static float _0x0E120A70D33D04E8F() { return rage::NativeInvoke::Invoke<0x0E120A70D33D04E8F, float>(); } // 0E120A70D33D04E8F 7154B6FD
	static void _0xF07E710BE9E8FA84(float p0) { rage::NativeInvoke::Invoke<0xF07E710BE9E8FA84, uint32_t>(p0); } // F07E710BE9E8FA84 E5612C1A
	static void _0x3F6C995B1DADBAF1(float p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x3F6C995B1DADBAF1, uint32_t>(p0, p1, p2, p3); } // 3F6C995B1DADBAF1 9CD6A451
	static void _0xC0848C98549523E1() { rage::NativeInvoke::Invoke<0xC0848C98549523E1, uint32_t>(); } // C0848C98549523E1 4267DA87
	static void _0x627D032C7FD0BB74(BOOL p0) { rage::NativeInvoke::Invoke<0x627D032C7FD0BB74, uint32_t>(p0); } // 627D032C7FD0BB74 9FA4AF99
	static void _0x0833272B9D3BC279E() { rage::NativeInvoke::Invoke<0x0833272B9D3BC279E, uint32_t>(); } // 0833272B9D3BC279E
	static void _0xE39FA13E1C637A9B(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xE39FA13E1C637A9B, uint32_t>(p0, p1); } // E39FA13E1C637A9B 9EF0A9CF
	static void _0x707B7EF2E06745C8() { rage::NativeInvoke::Invoke<0x707B7EF2E06745C8, uint32_t>(); } // 707B7EF2E06745C8 F2CDD6A8
	static BOOL _0x250FD8B8660C7A40() { return rage::NativeInvoke::Invoke<0x250FD8B8660C7A40, BOOL>(); } // 250FD8B8660C7A40 17B0A1CD
	static void _0xD458EE4B388EE1C8() { rage::NativeInvoke::Invoke<0xD458EE4B388EE1C8, uint32_t>(); } // D458EE4B388EE1C8 3DA7AA5D
	static uint32_t _0x831491EBBA34B785() { return rage::NativeInvoke::Invoke<0x831491EBBA34B785, uint32_t>(); } // 831491EBBA34B785 DAB4BAC0
	static void PREFETCH_SRL(uint32_t *p0) { rage::NativeInvoke::Invoke<0x49A88368098E3AF9, uint32_t>(p0); } // 49A88368098E3AF9 37BE2FBB
	static BOOL IS_SRL_LOADED() { return rage::NativeInvoke::Invoke<0xD55927A4FADD9827, BOOL>(); } // D55927A4FADD9827 670FA2A6
	static void BEGIN_SRL() { rage::NativeInvoke::Invoke<0x3643AABED08C4088, uint32_t>(); } // 3643AABED08C4088 24F49427
	static void END_SRL() { rage::NativeInvoke::Invoke<0x09975B5F03D59921, uint32_t>(); } // 09975B5F03D59921 1977C56A
	static void SET_SRL_TIME(float p0) { rage::NativeInvoke::Invoke<0xDFAE00CBF55AE6B, uint32_t>(p0); } // DFAE00CBF55AE6B 30F8A487
	static void _0xBDC951C5BD3951E7(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xBDC951C5BD3951E7, uint32_t>(p0, p1, p2, p3, p4, p5); } // BDC951C5BD3951E7 814D0752
	static void _0xF29329109BCC55BA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xF29329109BCC55BA, uint32_t>(p0, p1, p2, p3); } // F29329109BCC55BA 62F02485
	static void _0xBD0C284DA80A605E(BOOL p0) { rage::NativeInvoke::Invoke<0xBD0C284DA80A605E, uint32_t>(p0); } // BD0C284DA80A605E A6459CAA
	static void _0x82ED31759BCD6119(uint32_t p0) { rage::NativeInvoke::Invoke<0x82ED31759BCD6119, uint32_t>(p0); } // 82ED31759BCD6119 F8F515E4
	static void SET_HD_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xD94E4A9B2B83CDFC, uint32_t>(p0, p1, p2, p3); } // D94E4A9B2B83CDFC 80BAA035
	static void CLEAR_HD_AREA() { rage::NativeInvoke::Invoke<0x5559EDE4C3EF42B, uint32_t>(); } // 5559EDE4C3EF42B 7CAC6FA0
	static void _0xD948D88317029FFF() { rage::NativeInvoke::Invoke<0xD948D88317029FFF, uint32_t>(); } // D948D88317029FFF E243B2AF
	static void _0x4523BEBE9D55295D() { rage::NativeInvoke::Invoke<0x4523BEBE9D55295D, uint32_t>(); } // 4523BEBE9D55295D 897A510F
	static BOOL _0x0265B2A3EBA9AC5FE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0265B2A3EBA9AC5FE, BOOL>(p0); } // 0265B2A3EBA9AC5FE C0E83320
	static void _0x76EBB880B0AD78AD(uint32_t p0) { rage::NativeInvoke::Invoke<0x76EBB880B0AD78AD, uint32_t>(p0); } // 76EBB880B0AD78AD 1C576388
	static float _0x2EC45570AA762A15() { return rage::NativeInvoke::Invoke<0x2EC45570AA762A15, float>(); } // 2EC45570AA762A15 3E9C4CBE
}

namespace SCRIPT
{
	static void REQUEST_SCRIPT(const char *p0) { rage::NativeInvoke::Invoke<0x38797C3918FDD596, uint32_t>(p0); } // 38797C3918FDD596 E26B2666
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char *p0) { rage::NativeInvoke::Invoke<0xDD83BEFDE8CC91AD, uint32_t>(p0); } // DD83BEFDE8CC91AD 6FCB7795
	static BOOL HAS_SCRIPT_LOADED(const char *p0) { return rage::NativeInvoke::Invoke<0x4C903C3B660A5023, BOOL>(p0); } // 4C903C3B660A5023 5D67F751
	static BOOL DOES_SCRIPT_EXIST(const char *p0) { return rage::NativeInvoke::Invoke<0x44285C38000518F, BOOL>(p0); } // 44285C38000518F DEAB87AB
	static void _0x9BDCCBFB569D44D3(uint32_t p0) { rage::NativeInvoke::Invoke<0x9BDCCBFB569D44D3, uint32_t>(p0); } // 9BDCCBFB569D44D3 1C68D9DC
	static void _0x369C9F8CD6971E4B(uint32_t p0) { rage::NativeInvoke::Invoke<0x369C9F8CD6971E4B, uint32_t>(p0); } // 369C9F8CD6971E4B 96C26F66
	static BOOL _0xCF2008EE76BCB924(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCF2008EE76BCB924, BOOL>(p0); } // CF2008EE76BCB924 06674818
	static void TERMINATE_THREAD(uint32_t p0) { rage::NativeInvoke::Invoke<0xA123AC95E71752A2, uint32_t>(p0); } // A123AC95E71752A2 253FD520
	static BOOL IS_THREAD_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB86C2D2B0CB3E42E, BOOL>(p0); } // B86C2D2B0CB3E42E 78D7A5A0
	static uint32_t _0x06AC6E47ABFB4EB1D(uint32_t p0) { return rage::NativeInvoke::Invoke<0x06AC6E47ABFB4EB1D, uint32_t>(p0); } // 06AC6E47ABFB4EB1D BE7ACD89
	static void _0x94332074A0B773EB() { rage::NativeInvoke::Invoke<0x94332074A0B773EB, uint32_t>(); } // 94332074A0B773EB BB4E2F66
	static uint32_t _0x455695D60DCAF0EC() { return rage::NativeInvoke::Invoke<0x455695D60DCAF0EC, uint32_t>(); } // 455695D60DCAF0EC 1E28B28F
	static uint32_t GET_ID_OF_THIS_THREAD() { return rage::NativeInvoke::Invoke<0xF682120D0C324317, uint32_t>(); } // F682120D0C324317 DE524830
	static void TERMINATE_THIS_THREAD() { rage::NativeInvoke::Invoke<0x883793591E631A3B, uint32_t>(); } // 883793591E631A3B 3CD9CBB7
	static uint32_t _0x25531002BCF0D968(uint32_t p0) { return rage::NativeInvoke::Invoke<0x25531002BCF0D968, uint32_t>(p0); } // 25531002BCF0D968 029D3841
	static const char* GET_THIS_SCRIPT_NAME() { return rage::NativeInvoke::Invoke<0x3ED5FA3F61EC9E68, const char*>(); } // 3ED5FA3F61EC9E68 A40FD5D9
	static uint32_t _0xADB26EA48763F7() { return rage::NativeInvoke::Invoke<0xADB26EA48763F7, uint32_t>(); } // ADB26EA48763F7 2BEE1F45
	static uint32_t GET_NUMBER_OF_EVENTS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB301423C53556EA6, uint32_t>(p0); } // B301423C53556EA6 A3525D60
	static BOOL GET_EVENT_EXISTS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x289D054E2E18C82E, BOOL>(p0, p1); } // 289D054E2E18C82E A1B447B5
	static uint32_t GET_EVENT_AT_INDEX(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xAAB64DCC229F922F, uint32_t>(p0, p1); } // AAB64DCC229F922F B49C1442
	static BOOL GET_EVENT_DATA(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x6EDD33D6B8546C95, BOOL>(p0, p1, p2, p3); } // 6EDD33D6B8546C95 4280F92F
	static void TRIGGER_SCRIPT_EVENT(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x16EC6B18501E56BB, uint32_t>(p0, p1, p2, p3); } // 16EC6B18501E56BB 54763B35
	static void SHUTDOWN_LOADING_SCREEN() { rage::NativeInvoke::Invoke<0x049BF644F14C1491D, uint32_t>(); } // 049BF644F14C1491D A2826D17
	static void SET_NO_LOADING_SCREEN(BOOL p0) { rage::NativeInvoke::Invoke<0x8311E913E07031CD, uint32_t>(p0); } // 8311E913E07031CD C8055034
	static void _0xF4A688A05D995730() { rage::NativeInvoke::Invoke<0xF4A688A05D995730, uint32_t>(); } // F4A688A05D995730 B03BCCDF
}

namespace UI
{
	static void _0x18BCFA6B2DA7EB4E(uint32_t *p0) { rage::NativeInvoke::Invoke<0x18BCFA6B2DA7EB4E, uint32_t>(p0); } // 18BCFA6B2DA7EB4E CB7C8994
	static void _0x395CE507EF66CF4B(uint32_t p0) { rage::NativeInvoke::Invoke<0x395CE507EF66CF4B, uint32_t>(p0); } // 395CE507EF66CF4B 903F5EE4
	static void _0x5561EBF2C1FBF8B6() { rage::NativeInvoke::Invoke<0x5561EBF2C1FBF8B6, uint32_t>(); } // 5561EBF2C1FBF8B6 94119534
	static void _0xA707C7A7B797DA6B() { rage::NativeInvoke::Invoke<0xA707C7A7B797DA6B, uint32_t>(); } // A707C7A7B797DA6B 71077FBD
	static BOOL _0xEFB40E8240A711CE() { return rage::NativeInvoke::Invoke<0xEFB40E8240A711CE, BOOL>(); } // EFB40E8240A711CE B8B3A5D0
	static void _0xD58155239E9DC61A() { rage::NativeInvoke::Invoke<0xD58155239E9DC61A, uint32_t>(); } // D58155239E9DC61A
	static void _0xA7813A277B2BC757(uint32_t p0) { rage::NativeInvoke::Invoke<0xA7813A277B2BC757, uint32_t>(p0); } // A7813A277B2BC757
	static void _0xDE31817B699BCA3(BOOL p0) { rage::NativeInvoke::Invoke<0xDE31817B699BCA3, uint32_t>(p0); } // DE31817B699BCA3 A7C8594B
	static void _0x1C15F329053D4B85(float p0) { rage::NativeInvoke::Invoke<0x1C15F329053D4B85, uint32_t>(p0); } // 1C15F329053D4B85 1DA7E41A
	static void _0x82035095C3F201ED() { rage::NativeInvoke::Invoke<0x82035095C3F201ED, uint32_t>(); } // 82035095C3F201ED 1E63088A
	static void _0xCDAB94FDF12511FC() { rage::NativeInvoke::Invoke<0xCDAB94FDF12511FC, uint32_t>(); } // CDAB94FDF12511FC 5205C6F5
	static void _0x183A54D9B60DAC36(uint32_t p0) { rage::NativeInvoke::Invoke<0x183A54D9B60DAC36, uint32_t>(p0); } // 183A54D9B60DAC36 ECA8ACB9
	static void _0x6FB9103CC3E6B3DB() { rage::NativeInvoke::Invoke<0x6FB9103CC3E6B3DB, uint32_t>(); } // 6FB9103CC3E6B3DB 520FCB6D
	static void _0xEAD6B0A09A0BB7C5() { rage::NativeInvoke::Invoke<0xEAD6B0A09A0BB7C5, uint32_t>(); } // EAD6B0A09A0BB7C5 C8BAB2F2
	static void _0x3CD3516D9FBE0424() { rage::NativeInvoke::Invoke<0x3CD3516D9FBE0424, uint32_t>(); } // 3CD3516D9FBE0424 4D0449C6
	static void _0x5DC2C7ED9A68FCEF() { rage::NativeInvoke::Invoke<0x5DC2C7ED9A68FCEF, uint32_t>(); } // 5DC2C7ED9A68FCEF D3F40140
	static uint32_t _0xD41FA6DD673E6AC0() { return rage::NativeInvoke::Invoke<0xD41FA6DD673E6AC0, uint32_t>(); } // D41FA6DD673E6AC0 C5223796
	static void _0x4C92FF4485E03D2A() { rage::NativeInvoke::Invoke<0x4C92FF4485E03D2A, uint32_t>(); } // 4C92FF4485E03D2A 709B4BCB
	static void _0x5D65EFFF2FFE0608() { rage::NativeInvoke::Invoke<0x5D65EFFF2FFE0608, uint32_t>(); } // 5D65EFFF2FFE0608 4A4A40A4
	static uint32_t _0xD2765452333C7D51() { return rage::NativeInvoke::Invoke<0xD2765452333C7D51, uint32_t>(); } // D2765452333C7D51 294405D4
	static void _0xB01BFB8612CEA579() { rage::NativeInvoke::Invoke<0xB01BFB8612CEA579, uint32_t>(); } // B01BFB8612CEA579 F881AB87
	static void _0x4F68572E44F0E9CF() { rage::NativeInvoke::Invoke<0x4F68572E44F0E9CF, uint32_t>(); } // 4F68572E44F0E9CF 1D6859CA
	static void _0x19702D001410D1BE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x19702D001410D1BE, uint32_t>(p0, p1, p2, p3); } // 19702D001410D1BE CF14D7F2
	static void _0xC980ADD93BC3E78F(uint32_t p0) { rage::NativeInvoke::Invoke<0xC980ADD93BC3E78F, uint32_t>(p0); } // C980ADD93BC3E78F 24A97AF8
	static void _0xED5105D2131B11AC(BOOL p0) { rage::NativeInvoke::Invoke<0xED5105D2131B11AC, uint32_t>(p0); } // ED5105D2131B11AC 44018EDB
	static void _0x145409952EA5A7A2() { rage::NativeInvoke::Invoke<0x145409952EA5A7A2, uint32_t>(); } // 145409952EA5A7A2 A4524B23
	static void _0x6E4578705BE0AFC6() { rage::NativeInvoke::Invoke<0x6E4578705BE0AFC6, uint32_t>(); } // 6E4578705BE0AFC6 AFA1148B
	static void _0xD829FDA59E30C7FC() { rage::NativeInvoke::Invoke<0xD829FDA59E30C7FC, uint32_t>(); } // D829FDA59E30C7FC 3CD4307C
	static void _0x44F609A2056E59D2(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x44F609A2056E59D2, uint32_t>(p0, p1, p2, p3); } // 44F609A2056E59D2
	static void _0x82FD00B995993186(uint32_t *p0) { rage::NativeInvoke::Invoke<0x82FD00B995993186, uint32_t>(p0); } // 82FD00B995993186 574EE85C
	static uint32_t _0x9E9520CAFF9A8532(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x9E9520CAFF9A8532, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 9E9520CAFF9A8532 ED130FA1
	static uint32_t _0x54BCC5519168683(uint32_t *p0, uint32_t *p1, BOOL p2, uint32_t p3, uint32_t *p4, uint32_t *p5) { return rage::NativeInvoke::Invoke<0x54BCC5519168683, uint32_t>(p0, p1, p2, p3, p4, p5); } // 54BCC5519168683 E7E3C98B
	static uint32_t _0x7DF7D8CEBE0F2926(uint32_t *p0, uint32_t *p1, BOOL p2, uint32_t p3, uint32_t *p4, uint32_t *p5, float p6) { return rage::NativeInvoke::Invoke<0x7DF7D8CEBE0F2926, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 7DF7D8CEBE0F2926 0EB382B7
	static uint32_t _0x22D0B3D34BF20D61(uint32_t *p0, uint32_t *p1, BOOL p2, uint32_t p3, uint32_t *p4, uint32_t *p5, float p6, uint32_t *p7) { return rage::NativeInvoke::Invoke<0x22D0B3D34BF20D61, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 22D0B3D34BF20D61 3E807FE3
	static uint32_t _0x2982461319CBCD94(uint32_t *p0, uint32_t *p1, BOOL p2, uint32_t p3, uint32_t *p4, uint32_t *p5, float p6, uint32_t *p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x2982461319CBCD94, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 2982461319CBCD94 DEB491C8
	static uint32_t _0x81489E3284B071C0(BOOL p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x81489E3284B071C0, uint32_t>(p0, p1); } // 81489E3284B071C0 08F7AF78
	static uint32_t _0x893E37DFDAAA6F9(BOOL p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x893E37DFDAAA6F9, uint32_t>(p0, p1); } // 893E37DFDAAA6F9 57B8D0D4
	static uint32_t _0xA3456638E48FDE3B(BOOL p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xA3456638E48FDE3B, uint32_t>(p0, p1); } // A3456638E48FDE3B 02BCAF9B
	static uint32_t _0xB2EF298704F6DA8D(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xB2EF298704F6DA8D, uint32_t>(p0, p1, p2, p3, p4); } // B2EF298704F6DA8D 02DED2B8
	static uint32_t _0x92CF09F49B3277D8(BOOL p0, BOOL p1, uint32_t *p2, uint32_t p3, BOOL p4, BOOL p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x92CF09F49B3277D8, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 92CF09F49B3277D8 A9CCEF66
	static uint32_t _0x7F8D4EA046A08C62(BOOL p0, BOOL p1, uint32_t *p2, uint32_t p3, BOOL p4, BOOL p5, uint32_t p6, uint32_t *p7, uint32_t p8, uint32_t p9, uint32_t p10) { return rage::NativeInvoke::Invoke<0x7F8D4EA046A08C62, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 7F8D4EA046A08C62 88B9B909
	static uint32_t _0x400DD45C8B29B277(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x400DD45C8B29B277, uint32_t>(p0, p1, p2); } // 400DD45C8B29B277 E05E7052
	static uint32_t _0x7A9FD59A22A1F4CD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x7A9FD59A22A1F4CD, uint32_t>(p0, p1, p2, p3); } // 7A9FD59A22A1F4CD 4FA43BA4
	static uint32_t _0x49E0CDA63068535D(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x49E0CDA63068535D, uint32_t>(p0, p1, p2, p3, p4, p5); } // 49E0CDA63068535D 8C90D22F
	static uint32_t _0xFB892ED59D0C8A8C(BOOL p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xFB892ED59D0C8A8C, uint32_t>(p0, p1); } // FB892ED59D0C8A8C 8E319AB8
	static uint32_t _0x1C84E07E49A72135(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, uint32_t *p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x1C84E07E49A72135, uint32_t>(p0, p1, p2, p3, p4, p5); } // 1C84E07E49A72135 5E93FBFA
	static void _0x328FE98BE3FE17FC(uint32_t *p0) { rage::NativeInvoke::Invoke<0x328FE98BE3FE17FC, uint32_t>(p0); } // 328FE98BE3FE17FC F42C43C7
	static void _0x6719DEAA365F81B2(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x6719DEAA365F81B2, uint32_t>(p0, p1); } // 6719DEAA365F81B2 38F82261
	static void _0x228B04C8B6530A66(uint32_t *p0) { rage::NativeInvoke::Invoke<0x228B04C8B6530A66, uint32_t>(p0); } // 228B04C8B6530A66 DD524A11
	static BOOL _0x3EDC7EA7BB2A109E() { return rage::NativeInvoke::Invoke<0x3EDC7EA7BB2A109E, BOOL>(); } // 3EDC7EA7BB2A109E 672EFB45
	static void _SET_TEXT_ENTRY(const char *p0) { rage::NativeInvoke::Invoke<0x55B01783B33A78F6, uint32_t>(p0); } // 55B01783B33A78F6 3E35563E
	static void _DRAW_TEXT(float x, float y) { rage::NativeInvoke::Invoke<0x268B3979E044050D, uint32_t>(x, y); } // 268B3979E044050D 6F8350CE
	static void _0xD43D59AFE59F450F(uint32_t *p0) { rage::NativeInvoke::Invoke<0xD43D59AFE59F450F, uint32_t>(p0); } // D43D59AFE59F450F 51E7A037
	static float _0x9B0FAD4ADFA5E05C(BOOL p0) { return rage::NativeInvoke::Invoke<0x9B0FAD4ADFA5E05C, float>(p0); } // 9B0FAD4ADFA5E05C D12A643A
	static void _0xC323F622DE9BE0FE(const char *p0) { rage::NativeInvoke::Invoke<0xC323F622DE9BE0FE, uint32_t>(p0); } // C323F622DE9BE0FE 94B82066
	static uint32_t _0xDF5D8D7B0F3B38AF(float p0, float p1) { return rage::NativeInvoke::Invoke<0xDF5D8D7B0F3B38AF, uint32_t>(p0, p1); } // DF5D8D7B0F3B38AF AA318785
	static void _0x1ACC22C365D06AAE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x1ACC22C365D06AAE, uint32_t>(p0); } // 1ACC22C365D06AAE B245FC10
	static void _0x9F84D1B39B1E5B59(uint32_t p0, BOOL p1, BOOL p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x9F84D1B39B1E5B59, uint32_t>(p0, p1, p2, p3); } // 9F84D1B39B1E5B59 B59B530D
	static void _0x074C587863BEFBDD0(uint32_t *p0) { rage::NativeInvoke::Invoke<0x074C587863BEFBDD0, uint32_t>(p0); } // 074C587863BEFBDD0 00E20F2D
	static BOOL _0x5D488553935013A9(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5D488553935013A9, BOOL>(p0); } // 5D488553935013A9 F63A13EC
	static void _0x900AC0BD5F16D935(uint32_t *p0) { rage::NativeInvoke::Invoke<0x900AC0BD5F16D935, uint32_t>(p0); } // 900AC0BD5F16D935 F4C211F6
	static void _0x3BF044F0B5B79140(uint32_t p0) { rage::NativeInvoke::Invoke<0x3BF044F0B5B79140, uint32_t>(p0); } // 3BF044F0B5B79140 E8E59820
	static void _0xD5A675030FF01A94(uint32_t *p0) { rage::NativeInvoke::Invoke<0xD5A675030FF01A94, uint32_t>(p0); } // D5A675030FF01A94 0E103475
	static void _0x8B05F7688AA9FA38(BOOL p0) { rage::NativeInvoke::Invoke<0x8B05F7688AA9FA38, uint32_t>(p0); } // 8B05F7688AA9FA38 2944A6C5
	static void _0x89BCDA7A12663C4(uint32_t *p0) { rage::NativeInvoke::Invoke<0x89BCDA7A12663C4, uint32_t>(p0); } // 89BCDA7A12663C4 550665AE
	static void _0x4F4DD0BEF0CEA6C1() { rage::NativeInvoke::Invoke<0x4F4DD0BEF0CEA6C1, uint32_t>(); } // 4F4DD0BEF0CEA6C1 67785AF2
	static void _0x646050BAB8B37326(uint32_t *p0) { rage::NativeInvoke::Invoke<0x646050BAB8B37326, uint32_t>(p0); } // 646050BAB8B37326 BF855650
	static void _0x9C54F77A60B586A5(uint32_t p0) { rage::NativeInvoke::Invoke<0x9C54F77A60B586A5, uint32_t>(p0); } // 9C54F77A60B586A5 6E7FDA1C
	static void ADD_TEXT_COMPONENT_INTEGER(uint32_t p0) { rage::NativeInvoke::Invoke<0x0844339A27F0F1508, uint32_t>(p0); } // 0844339A27F0F1508 FE272A57
	static void ADD_TEXT_COMPONENT_FLOAT(float p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x10568BB0829CD13A, uint32_t>(p0, p1); } // 10568BB0829CD13A 24D78013
	static void _0x923B18EB34FC2117(uint32_t *p0) { rage::NativeInvoke::Invoke<0x923B18EB34FC2117, uint32_t>(p0); } // 923B18EB34FC2117 DCE05406
	static void _0x64364D07891B307F(uint32_t p0) { rage::NativeInvoke::Invoke<0x64364D07891B307F, uint32_t>(p0); } // 64364D07891B307F 150E03B6
	static void _0x636705FA7EAFAC3C(uint32_t p0) { rage::NativeInvoke::Invoke<0x636705FA7EAFAC3C, uint32_t>(p0); } // 636705FA7EAFAC3C 5DE98F0A
	static void _ADD_TEXT_COMPONENT_STRING(const char *p0) { rage::NativeInvoke::Invoke<0xD1F22DD7F7363AB6, uint32_t>(p0); } // D1F22DD7F7363AB6 27A244D8
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x5D89BC4A497AE832, uint32_t>(p0, p1); } // 5D89BC4A497AE832 135B3CD0
	static void _0x096A7C8F7793B505A(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x096A7C8F7793B505A, uint32_t>(p0, p1); } // 096A7C8F7793B505A 12929BDF
	static void _0xB4E4F8C9F997D80D(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB4E4F8C9F997D80D, uint32_t>(p0, p1); } // B4E4F8C9F997D80D 65E1D404
	static void _0x1201038CD82B87B1(uint32_t *p0) { rage::NativeInvoke::Invoke<0x1201038CD82B87B1, uint32_t>(p0); } // 1201038CD82B87B1 C736999E
	static void _0xA61713D07D196CBB(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA61713D07D196CBB, uint32_t>(p0); } // A61713D07D196CBB 0829A799
	static void _0xF51CF48922F85ED5(uint32_t p0) { rage::NativeInvoke::Invoke<0xF51CF48922F85ED5, uint32_t>(p0); } // F51CF48922F85ED5 6F1A1901
	static uint32_t _0x46BB6E4FA2EE3230(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x46BB6E4FA2EE3230, uint32_t>(p0, p1, p2); } // 46BB6E4FA2EE3230 34A396EE
	static uint32_t _0xC7702C7B197D175D(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xC7702C7B197D175D, uint32_t>(p0, p1, p2, p3); } // C7702C7B197D175D 0183A66C
	static uint32_t _0x96C58477F1C53A5F(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x96C58477F1C53A5F, uint32_t>(p0, p1, p2); } // 96C58477F1C53A5F FA6373BB
	static uint32_t _0xB0EEA0615087D74B(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xB0EEA0615087D74B, uint32_t>(p0); } // B0EEA0615087D74B 95C4B5AD
	static void CLEAR_PRINTS() { rage::NativeInvoke::Invoke<0x3DF5706BBD8F5B5B, uint32_t>(); } // 3DF5706BBD8F5B5B 216CB1C5
	static void CLEAR_BRIEF() { rage::NativeInvoke::Invoke<0x27A59FE147B9A5B1, uint32_t>(); } // 27A59FE147B9A5B1 9F75A929
	static void CLEAR_ALL_HELP_MESSAGES() { rage::NativeInvoke::Invoke<0x5B981062CA8FDAF5, uint32_t>(); } // 5B981062CA8FDAF5 9E5D9198
	static void CLEAR_THIS_PRINT(uint32_t *p0) { rage::NativeInvoke::Invoke<0xAD91AFD429036CAB, uint32_t>(p0); } // AD91AFD429036CAB 06878327
	static void CLEAR_SMALL_PRINTS() { rage::NativeInvoke::Invoke<0xFA93C1D3FBECB64C, uint32_t>(); } // FA93C1D3FBECB64C A869A238
	static BOOL DOES_TEXT_BLOCK_EXIST(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x58D5A4D3355119FE, BOOL>(p0); } // 58D5A4D3355119FE 96F74838
	static void REQUEST_ADDITIONAL_TEXT(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x481B0AD01AC057F7, uint32_t>(p0, p1); } // 481B0AD01AC057F7 9FA9175B
	static void _0x49A00D0E4A3DA61(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x49A00D0E4A3DA61, uint32_t>(p0, p1); } // 49A00D0E4A3DA61 F4D27EBE
	static BOOL HAS_ADDITIONAL_TEXT_LOADED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x06C741637F73EA9EC, BOOL>(p0); } // 06C741637F73EA9EC B0E56045
	static void CLEAR_ADDITIONAL_TEXT(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x474B54D6F301DDF, uint32_t>(p0, p1); } // 474B54D6F301DDF 518141E0
	static BOOL IS_STREAMING_ADDITIONAL_TEXT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x41BC53892C2AAF91, BOOL>(p0); } // 41BC53892C2AAF91 F079E4EB
	static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF19EAF66744B8113, BOOL>(p0, p1); } // F19EAF66744B8113 80A52040
	static BOOL IS_MESSAGE_BEING_DISPLAYED() { return rage::NativeInvoke::Invoke<0x44057438DAE1BD45, BOOL>(); } // 44057438DAE1BD45 6A77FE8D
	static BOOL DOES_TEXT_LABEL_EXIST(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xD177A95825B53731, BOOL>(p0); } // D177A95825B53731 6ECAE560
	static uint32_t GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x15618931CEED653C, uint32_t>(p0); } // 15618931CEED653C A4CA7BE5
	static uint32_t GET_LENGTH_OF_LITERAL_STRING(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x23955AB7E3D629F7, uint32_t>(p0); } // 23955AB7E3D629F7 99379D55
	static uint32_t _0xADEF3A7482FE658C(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xADEF3A7482FE658C, uint32_t>(p0); } // ADEF3A7482FE658C 7DBC0764
	static uint32_t GET_STREET_NAME_FROM_HASH_KEY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7E119C8E89A4021, uint32_t>(p0); } // 7E119C8E89A4021 1E8E310C
	static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return rage::NativeInvoke::Invoke<0x974C1CCCC7E4638, BOOL>(); } // 974C1CCCC7E4638 C3BC1B4F
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return rage::NativeInvoke::Invoke<0xBFFACB91870B158B, BOOL>(); } // BFFACB91870B158B 14AEAA28
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return rage::NativeInvoke::Invoke<0x45C61809C43FF0B3, BOOL>(); } // 45C61809C43FF0B3 63BA19F5
	static void DISPLAY_HUD(BOOL p0) { rage::NativeInvoke::Invoke<0x330ABD0F05E764BB, uint32_t>(p0); } // 330ABD0F05E764BB D10E4E31
	static void _0xC6F233EDA17699E6() { rage::NativeInvoke::Invoke<0xC6F233EDA17699E6, uint32_t>(); } // C6F233EDA17699E6 C380AC85
	static void _0x2BB4B0E9A252D47D() { rage::NativeInvoke::Invoke<0x2BB4B0E9A252D47D, uint32_t>(); } // 2BB4B0E9A252D47D C47AB1B0
	static void DISPLAY_RADAR(BOOL p0) { rage::NativeInvoke::Invoke<0x255259988FBEFACC, uint32_t>(p0); } // 255259988FBEFACC 52816BD4
	static uint32_t IS_HUD_HIDDEN() { return rage::NativeInvoke::Invoke<0x5A55AE4A2A300EDF, uint32_t>(); } // 5A55AE4A2A300EDF 40BADA1D
	static uint32_t IS_RADAR_HIDDEN() { return rage::NativeInvoke::Invoke<0x25C455B54D545ED8, uint32_t>(); } // 25C455B54D545ED8 1AB3B954
	static uint32_t _0x43A8F2054E532005() { return rage::NativeInvoke::Invoke<0x43A8F2054E532005, uint32_t>(); } // 43A8F2054E532005
	static void SET_BLIP_ROUTE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x43F7D508C655CBA3, uint32_t>(p0, p1); } // 43F7D508C655CBA3 3E160C90
	static void SET_BLIP_ROUTE_COLOUR(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCCCD2A249D585AF2, uint32_t>(p0, p1); } // CCCD2A249D585AF2 DDE7C65C
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { rage::NativeInvoke::Invoke<0xBE8CEC04E54B5E4A, uint32_t>(p0); } // BE8CEC04E54B5E4A B58B25BD
	static void _0xE7BF499D7E13D331(BOOL p0) { rage::NativeInvoke::Invoke<0xE7BF499D7E13D331, uint32_t>(p0); } // E7BF499D7E13D331 9854485F
	static void RESPONDING_AS_TEMP(float p0) { rage::NativeInvoke::Invoke<0xF4FE3FEBD475D819, uint32_t>(p0); } // F4FE3FEBD475D819 DCA3F423
	static void SET_RADAR_ZOOM(uint32_t p0) { rage::NativeInvoke::Invoke<0x0CB213D9A785B441C, uint32_t>(p0); } // 0CB213D9A785B441C 2A50D1A6
	static void _0xB1676EBA656FC712(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB1676EBA656FC712, uint32_t>(p0, p1); } // B1676EBA656FC712 25EC28C0
	static void _0x6C79836FB9930A7B(float p0) { rage::NativeInvoke::Invoke<0x6C79836FB9930A7B, uint32_t>(p0); } // 6C79836FB9930A7B 09CF1CE5
	static void _0xB689139A82C20C0B() { rage::NativeInvoke::Invoke<0xB689139A82C20C0B, uint32_t>(); } // B689139A82C20C0B E8D3A910
	static void GET_HUD_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { rage::NativeInvoke::Invoke<0x761F331974F836D5, uint32_t>(p0, p1, p2, p3, p4); } // 761F331974F836D5 63F66A0B
	static void _0x361C6B9BE8C5AC93(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x361C6B9BE8C5AC93, uint32_t>(p0, p1, p2, p3); } // 361C6B9BE8C5AC93 0E41E45C
	static void _0x99D1B978927DD031(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x99D1B978927DD031, uint32_t>(p0, p1, p2, p3); } // 99D1B978927DD031 6BE3ACA8
	static void _0x6F7F7711FCFF2CB7(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x6F7F7711FCFF2CB7, uint32_t>(p0, p1); } // 6F7F7711FCFF2CB7 3B216749
	static void _0x9AFC102D24B14B80(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x9AFC102D24B14B80, uint32_t>(p0, p1, p2, p3, p4); } // 9AFC102D24B14B80 F6E7E92B
	static void FLASH_ABILITY_BAR(uint32_t p0) { rage::NativeInvoke::Invoke<0x0A364DC6B934133C5, uint32_t>(p0); } // 0A364DC6B934133C5 3648960D
	static void SET_ABILITY_BAR_VALUE(float p0, float p1) { rage::NativeInvoke::Invoke<0xE6186D687467003E, uint32_t>(p0, p1); } // E6186D687467003E 24E53FD8
	static void FLASH_WANTED_DISPLAY(BOOL p0) { rage::NativeInvoke::Invoke<0x3EB8E92373AECBC0, uint32_t>(p0); } // 3EB8E92373AECBC0 629F866B
	static float _0xD7F1FEE5545495C5(float p0, int p1) { return rage::NativeInvoke::Invoke<0xD7F1FEE5545495C5, float>(p0, p1); } // D7F1FEE5545495C5 3330175B
	static void SET_TEXT_SCALE(float p0, float p1) { rage::NativeInvoke::Invoke<0x08F290D3FB4225BC6, uint32_t>(p0, p1); } // 08F290D3FB4225BC6 B6E15B23
	static void SET_TEXT_COLOUR(int p0, int p1, int p2, int p3) { rage::NativeInvoke::Invoke<0xAF24EA89F4EF8594, uint32_t>(p0, p1, p2, p3); } // AF24EA89F4EF8594 E54DD2C8
	static void SET_TEXT_CENTRE(BOOL p0) { rage::NativeInvoke::Invoke<0x5FEA64228C897E30, uint32_t>(p0); } // 5FEA64228C897E30 E26D39A1
	static void SET_TEXT_RIGHT_JUSTIFY(BOOL p0) { rage::NativeInvoke::Invoke<0xF8EC5D9294FA5C74, uint32_t>(p0); } // F8EC5D9294FA5C74 45B60520
	static void _0x5E9A172D8EF0C9ED(BOOL p0) { rage::NativeInvoke::Invoke<0x5E9A172D8EF0C9ED, uint32_t>(p0); } // 5E9A172D8EF0C9ED 68CDFA60
	static void SET_TEXT_WRAP(float p0, float p1) { rage::NativeInvoke::Invoke<0xD49409263C7DA1DD, uint32_t>(p0, p1); } // D49409263C7DA1DD 6F60AB54
	static void SET_TEXT_LEADING(BOOL p0) { rage::NativeInvoke::Invoke<0xBB04D9A85B7BE7A2, uint32_t>(p0); } // BB04D9A85B7BE7A2 98CE21D4
	static void SET_TEXT_PROPORTIONAL(uint32_t p0) { rage::NativeInvoke::Invoke<0x0490F3793DD1437E4, uint32_t>(p0); } // 0490F3793DD1437E4 F49D8A08
	static void SET_TEXT_FONT(int p0) { rage::NativeInvoke::Invoke<0x8DD7836CF491E098, uint32_t>(p0); } // 8DD7836CF491E098 80BC530D
	static void SET_TEXT_DROP_SHADOW() { rage::NativeInvoke::Invoke<0x1DA0BC03A951E360, uint32_t>(); } // 1DA0BC03A951E360 E2A11511
	static void SET_TEXT_DROPSHADOW(int p0, int p1, int p2, int p3, int p4) { rage::NativeInvoke::Invoke<0x74F2ECA031310618, uint32_t>(p0, p1, p2, p3, p4); } // 74F2ECA031310618 E6587517
	static void SET_TEXT_OUTLINE() { rage::NativeInvoke::Invoke<0x76EEC181CF2707D6, uint32_t>(); } // 76EEC181CF2707D6 C753412F
	static void SET_TEXT_EDGE(int p0, int p1, int p2, int p3, int p4) { rage::NativeInvoke::Invoke<0xC7BC69AA9DAF5D69, uint32_t>(p0, p1, p2, p3, p4); } // C7BC69AA9DAF5D69 3F1A5DAB
	static void SET_TEXT_RENDER_ID(uint32_t p0) { rage::NativeInvoke::Invoke<0x24A6BECBE7FB7072, uint32_t>(p0); } // 24A6BECBE7FB7072 C5C3B7F3
	static uint32_t GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return rage::NativeInvoke::Invoke<0xE4DC0BC078803F6C, uint32_t>(); } // E4DC0BC078803F6C 8188935F
	static BOOL REGISTER_NAMED_RENDERTARGET(uint32_t *p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xE3FDC10D25BBBCBC, BOOL>(p0, p1); } // E3FDC10D25BBBCBC FAE5D6F0
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xBB59C64F638475F4, BOOL>(p0); } // BB59C64F638475F4 284057F5
	static BOOL RELEASE_NAMED_RENDERTARGET(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x9BDB594F5771D83A, BOOL>(p0); } // 9BDB594F5771D83A D3F6C892
	static void LINK_NAMED_RENDERTARGET(uint32_t p0) { rage::NativeInvoke::Invoke<0xE40E107E34572484, uint32_t>(p0); } // E40E107E34572484 6844C4B9
	static uint32_t GET_NAMED_RENDERTARGET_RENDER_ID(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x396E111E5411D0EE, uint32_t>(p0); } // 396E111E5411D0EE F9D7A401
	static BOOL IS_NAMED_RENDERTARGET_LINKED(uint32_t p0) { return rage::NativeInvoke::Invoke<0x29AAA721DD70EB9, BOOL>(p0); } // 29AAA721DD70EB9 8B52601F
	static void CLEAR_HELP(BOOL p0) { rage::NativeInvoke::Invoke<0x4A4C1A1BC79EFE8F, uint32_t>(p0); } // 4A4C1A1BC79EFE8F E6D85741
	static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return rage::NativeInvoke::Invoke<0xA325E5426CD8AC07, BOOL>(); } // A325E5426CD8AC07 4B3C9CA9
	static BOOL _0xC08EE9D523D26E14() { return rage::NativeInvoke::Invoke<0xC08EE9D523D26E14, BOOL>(); } // C08EE9D523D26E14 812CBE0E
	static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return rage::NativeInvoke::Invoke<0xBB51CB7A4D14453D, BOOL>(); } // BB51CB7A4D14453D A65F262A
	static BOOL IS_HELP_MESSAGE_FADING_OUT() { return rage::NativeInvoke::Invoke<0x4325F9ACF9C85AD9, BOOL>(); } // 4325F9ACF9C85AD9 3E50AE92
	static uint32_t _0xADC39FDF03F9D8CA() { return rage::NativeInvoke::Invoke<0xADC39FDF03F9D8CA, uint32_t>(); } // ADC39FDF03F9D8CA 87871CE0
	static uint32_t _GET_BLIP_INFO_ID_ITERATOR() { return rage::NativeInvoke::Invoke<0x138F9DA1F3442BA3, uint32_t>(); } // 138F9DA1F3442BA3 B9827942
	static uint32_t GET_NUMBER_OF_ACTIVE_BLIPS() { return rage::NativeInvoke::Invoke<0x4271E34D4C5FBF5D, uint32_t>(); } // 4271E34D4C5FBF5D 144020FA
	static uint32_t GET_NEXT_BLIP_INFO_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEB6533503AE8CA5E, uint32_t>(p0); } // EB6533503AE8CA5E 9356E92F
	static uint32_t GET_FIRST_BLIP_INFO_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3AF3E336702C148C, uint32_t>(p0); } // 3AF3E336702C148C 64C0273D
	static Vector3 GET_BLIP_INFO_ID_COORD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC4C0B7F25966C4C, Vector3>(p0); } // C4C0B7F25966C4C B7374A66
	static uint32_t GET_BLIP_INFO_ID_DISPLAY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD1708366330943C, uint32_t>(p0); } // D1708366330943C D0FC19F4
	static uint32_t GET_BLIP_INFO_ID_TYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF0F6309B76A8474C, uint32_t>(p0); } // F0F6309B76A8474C 501D7B4E
	static uint32_t GET_BLIP_INFO_ID_ENTITY_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7BBE8D79E8CB52E9, uint32_t>(p0); } // 7BBE8D79E8CB52E9 A068C40B
	static uint32_t GET_BLIP_INFO_ID_PICKUP_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5EFE230EE2438209, uint32_t>(p0); } // 5EFE230EE2438209 86913D37
	static uint32_t GET_BLIP_FROM_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2194B07471B5E552, uint32_t>(p0); } // 2194B07471B5E552 005A2A47
	static uint32_t ADD_BLIP_FOR_RADIUS(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x8C16986DEC165499, uint32_t>(p0, p1, p2, p3); } // 8C16986DEC165499 4626756C
	static uint32_t ADD_BLIP_FOR_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB6F075D13B917FBE, uint32_t>(p0); } // B6F075D13B917FBE 30822554
	static uint32_t ADD_BLIP_FOR_PICKUP(uint32_t p0) { return rage::NativeInvoke::Invoke<0x200CF8FFC0E56B0C, uint32_t>(p0); } // 200CF8FFC0E56B0C 16693C3A
	static uint32_t ADD_BLIP_FOR_COORD(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x7BFA7BEBF46363DE, uint32_t>(p0, p1, p2); } // 7BFA7BEBF46363DE C6F43D0E
	static void _0x92FB7F5843708CE6(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x92FB7F5843708CE6, uint32_t>(p0, p1, p2, p3, p4); } // 92FB7F5843708CE6 BF25E7B2
	static void _0x57BDC7F38FF5F720(BOOL p0) { rage::NativeInvoke::Invoke<0x57BDC7F38FF5F720, uint32_t>(p0); } // 57BDC7F38FF5F720 E7E1E32B
	static void SET_BLIP_COORDS(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x2F81977123174F1A, uint32_t>(p0, p1, p2, p3); } // 2F81977123174F1A 680A34D4
	static Vector3 GET_BLIP_COORDS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDEC21C0D420A9EFF, Vector3>(p0); } // DEC21C0D420A9EFF EF6FF47B
	static void SET_BLIP_SPRITE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1DF6D56C47E7482, uint32_t>(p0, p1); } // 1DF6D56C47E7482 8DBBB0B9
	static uint32_t GET_BLIP_SPRITE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4672A001CF8D53E4, uint32_t>(p0); } // 4672A001CF8D53E4 72FF2E73
	static void SET_BLIP_NAME_FROM_TEXT_FILE(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x2B271F66198227B7, uint32_t>(p0, p1); } // 2B271F66198227B7 AC8A5461
	static void SET_BLIP_NAME_TO_PLAYER_NAME(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC03F7B514FC6591E, uint32_t>(p0, p1); } // C03F7B514FC6591E 03A0B8F9
	static void SET_BLIP_ALPHA(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x80882386D3DF8627, uint32_t>(p0, p1); } // 80882386D3DF8627 A791FCCD
	static uint32_t GET_BLIP_ALPHA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x714F1BB644001893, uint32_t>(p0); } // 714F1BB644001893 297AF6C8
	static void SET_BLIP_FADE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xDD0B37CC1B62475F, uint32_t>(p0, p1, p2); } // DD0B37CC1B62475F A5999031
	static void SET_BLIP_ROTATION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x7660EFF89E3C012A, uint32_t>(p0, p1); } // 7660EFF89E3C012A 6B8F44FE
	static void SET_BLIP_FLASH_TIMER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x221C6713AAED6143, uint32_t>(p0, p1); } // 221C6713AAED6143 8D5DF611
	static void SET_BLIP_FLASH_INTERVAL(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x5C378F024EA622FB, uint32_t>(p0, p1); } // 5C378F024EA622FB EAF67377
	static void SET_BLIP_COLOUR(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x0EDB3DD98D55452E4, uint32_t>(p0, p1); } // 0EDB3DD98D55452E4 BB3C5A41
	static void SET_BLIP_SECONDARY_COLOUR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x8ED7D82D582CF41B, uint32_t>(p0, p1, p2, p3); } // 8ED7D82D582CF41B C6384D32
	static uint32_t GET_BLIP_COLOUR(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD623E5BF8A42FDB2, uint32_t>(p0); } // D623E5BF8A42FDB2 DD6A1E54
	static uint32_t GET_BLIP_HUD_COLOUR(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5E4CAE505FE210EB, uint32_t>(p0); } // 5E4CAE505FE210EB E88B4BC2
	static BOOL IS_BLIP_SHORT_RANGE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8807F37EDB4E0B6E, BOOL>(p0); } // 8807F37EDB4E0B6E 1226765A
	static BOOL IS_BLIP_ON_MINIMAP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC7F5EBCDE64628FA, BOOL>(p0); } // C7F5EBCDE64628FA 258CBA3A
	static BOOL _0xCC92332182B4F40D(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCC92332182B4F40D, BOOL>(p0); } // CC92332182B4F40D 3E47F357
	static void _0xAE1265C58534EC25(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAE1265C58534EC25, uint32_t>(p0, p1); } // AE1265C58534EC25 43996428
	static void SET_BLIP_HIGH_DETAIL(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA61B82C284FFE820, uint32_t>(p0, p1); } // A61B82C284FFE820 D5842BFF
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xB628C24ECEF4D08B, uint32_t>(p0, p1); } // B628C24ECEF4D08B 802FB686
	static BOOL IS_MISSION_CREATOR_BLIP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC9A8A5EE51B81E78, BOOL>(p0); } // C9A8A5EE51B81E78 24ACC4E9
	static uint32_t DISABLE_BLIP_NAME_FOR_VAR() { return rage::NativeInvoke::Invoke<0x4CF90E476945B4D1, uint32_t>(); } // 4CF90E476945B4D1 FFD7476C
	static BOOL _0x1A37753105D027E2() { return rage::NativeInvoke::Invoke<0x1A37753105D027E2, BOOL>(); } // 1A37753105D027E2 C5EB849A
	static void _0xB098C276E1253ABF(BOOL p0) { rage::NativeInvoke::Invoke<0xB098C276E1253ABF, uint32_t>(p0); } // B098C276E1253ABF A2CAAB4F
	static void SET_BLIP_FLASHES(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE344B71AFE01D194, uint32_t>(p0, p1); } // E344B71AFE01D194 C0047F15
	static void SET_BLIP_FLASHES_ALTERNATE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xAC7B42E07198FE25, uint32_t>(p0, p1); } // AC7B42E07198FE25 1A81202B
	static BOOL IS_BLIP_FLASHING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF1D3F36D61E6F618, BOOL>(p0); } // F1D3F36D61E6F618 52E111D7
	static void SET_BLIP_AS_SHORT_RANGE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xBC48AF3329DE187E, uint32_t>(p0, p1); } // BC48AF3329DE187E 5C67725E
	static void SET_BLIP_SCALE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x1D8833C0F155BFE7, uint32_t>(p0, p1); } // 1D8833C0F155BFE7 1E6EC434
	static void SET_BLIP_PRIORITY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xAE9EE75C62A1DACD, uint32_t>(p0, p1); } // AE9EE75C62A1DACD CE87DA6F
	static void SET_BLIP_DISPLAY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE5432F1BF1E5646B, uint32_t>(p0, p1); } // E5432F1BF1E5646B 2B521F91
	static void SET_BLIP_CATEGORY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x345FCB7A69800F7D, uint32_t>(p0, p1); } // 345FCB7A69800F7D EF72F533
	static void REMOVE_BLIP(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA0A65B537B1F11EC, uint32_t>(p0); } // A0A65B537B1F11EC D8C3C1CD
	static void SET_BLIP_AS_FRIENDLY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x109908E4511B0839, uint32_t>(p0, p1); } // 109908E4511B0839 F290CFD8
	static void PULSE_BLIP(uint32_t p0) { rage::NativeInvoke::Invoke<0x6ACCC0A48DFAFA52, uint32_t>(p0); } // 6ACCC0A48DFAFA52 44253855
	static void SHOW_NUMBER_ON_BLIP(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB47394D0FE1BF41B, uint32_t>(p0, p1); } // B47394D0FE1BF41B 7BFC66C6
	static void HIDE_NUMBER_ON_BLIP(uint32_t p0) { rage::NativeInvoke::Invoke<0xC3D5293FB2FE3EBB, uint32_t>(p0); } // C3D5293FB2FE3EBB 0B6D610D
	static void _0x847FC5384ABAF1A7(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x847FC5384ABAF1A7, uint32_t>(p0, p1); } // 847FC5384ABAF1A7 1D99F676
	static void _0xDEA3C4CE7D6663CC(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDEA3C4CE7D6663CC, uint32_t>(p0, p1); } // DEA3C4CE7D6663CC 3DCF0092
	static void _0xD248A6DE305F5B80(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD248A6DE305F5B80, uint32_t>(p0, p1); } // D248A6DE305F5B80 D1C3D71B
	static void _0x22C2C3DB1A362E11(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x22C2C3DB1A362E11, uint32_t>(p0, p1); } // 22C2C3DB1A362E11 8DE82C15
	static void _0xC91A6E910A31B021(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC91A6E910A31B021, uint32_t>(p0, p1); } // C91A6E910A31B021 4C8F02B4
	static void _0x5F733FEC450FAFEC(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5F733FEC450FAFEC, uint32_t>(p0, p1); } // 5F733FEC450FAFEC ABBE1E45
	static void _0x235FEEC8D1179CD8(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x235FEEC8D1179CD8, uint32_t>(p0, p1); } // 235FEEC8D1179CD8 6AA6A1CC
	static void _0x38E62F7828D181F(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x38E62F7828D181F, uint32_t>(p0, p1); } // 38E62F7828D181F C575F0BC
	static void _0x30967BF372C58139(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x30967BF372C58139, uint32_t>(p0, p1); } // 30967BF372C58139 40E25DB8
	static BOOL DOES_BLIP_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD361727124133DF3, BOOL>(p0); } // D361727124133DF3 AE92DD96
	static void SET_WAYPOINT_OFF() { rage::NativeInvoke::Invoke<0xF74507C0BFCA6440, uint32_t>(); } // F74507C0BFCA6440 B3496E1B
	static void _0x9CD638CE5CB60A6D() { rage::NativeInvoke::Invoke<0x9CD638CE5CB60A6D, uint32_t>(); } // 9CD638CE5CB60A6D 62BABF2C
	static void REFRESH_WAYPOINT() { rage::NativeInvoke::Invoke<0x88096D244FFF53D1, uint32_t>(); } // 88096D244FFF53D1 B395D753
	static BOOL IS_WAYPOINT_ACTIVE() { return rage::NativeInvoke::Invoke<0xD17658F84F9E1A04, BOOL>(); } // D17658F84F9E1A04 5E4DF47B
	static void SET_NEW_WAYPOINT(float p0, float p1) { rage::NativeInvoke::Invoke<0x484FAA0C13114090, uint32_t>(p0, p1); } // 484FAA0C13114090 8444E1F0
	static void SET_BLIP_BRIGHT(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x525905916066BA6B, uint32_t>(p0, p1); } // 525905916066BA6B 72BEE6DF
	static void SET_BLIP_SHOW_CONE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xE99390D652EA3E1C, uint32_t>(p0, p1); } // E99390D652EA3E1C FF545AD8
	static void _0xA0A741D787B8D1D5(uint32_t p0) { rage::NativeInvoke::Invoke<0xA0A741D787B8D1D5, uint32_t>(p0); } // A0A741D787B8D1D5 41B0D022
	static uint32_t SET_MINIMAP_COMPONENT(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x46FE69C22EF78F9F, uint32_t>(p0, p1); } // 46FE69C22EF78F9F 419DCDC4
	static void _0x828AA97AE68296D3() { rage::NativeInvoke::Invoke<0x828AA97AE68296D3, uint32_t>(); } // 828AA97AE68296D3
	static uint32_t GET_MAIN_PLAYER_BLIP_ID() { return rage::NativeInvoke::Invoke<0x2A0DDB06C714A7E0, uint32_t>(); } // 2A0DDB06C714A7E0 AB93F020
	static void _0x749257123BB86DC3(BOOL p0) { rage::NativeInvoke::Invoke<0x749257123BB86DC3, uint32_t>(p0); } // 749257123BB86DC3
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { rage::NativeInvoke::Invoke<0xB9127039E1155CEF, uint32_t>(); } // B9127039E1155CEF 35087963
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(uint32_t p0, float p1, float p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x8A1C826B6011F96F, uint32_t>(p0, p1, p2, p3, p4); } // 8A1C826B6011F96F 6F2626E1
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { rage::NativeInvoke::Invoke<0xE4326822B6D2AD23, uint32_t>(); } // E4326822B6D2AD23 39ABB10E
	static void _0x875CB94BF67CED69(float p0, float p1) { rage::NativeInvoke::Invoke<0x875CB94BF67CED69, uint32_t>(p0, p1); } // 875CB94BF67CED69 54E75C7D
	static uint32_t _0x2C35BEC417DC285C() { return rage::NativeInvoke::Invoke<0x2C35BEC417DC285C, uint32_t>(); } // 2C35BEC417DC285C 199DED14
	static void _0x82D64BFBA6F7D119() { rage::NativeInvoke::Invoke<0x82D64BFBA6F7D119, uint32_t>(); } // 82D64BFBA6F7D119 1A4318F7
	static void _0xC7ADF9E3A5C038B9() { rage::NativeInvoke::Invoke<0xC7ADF9E3A5C038B9, uint32_t>(); } // C7ADF9E3A5C038B9 CE36E3FE
	static void _0x22269D54BE40EDDC() { rage::NativeInvoke::Invoke<0x22269D54BE40EDDC, uint32_t>(); } // 22269D54BE40EDDC 334EFD46
	static void SET_WIDESCREEN_FORMAT(uint32_t p0) { rage::NativeInvoke::Invoke<0x7BCBD4B160BC9240, uint32_t>(p0); } // 7BCBD4B160BC9240 F016E08F
	static void DISPLAY_AREA_NAME(BOOL p0) { rage::NativeInvoke::Invoke<0x1FE21009C68A1E4C, uint32_t>(p0); } // 1FE21009C68A1E4C 489FDD41
	static void DISPLAY_CASH(BOOL p0) { rage::NativeInvoke::Invoke<0xF58B91E49213E693, uint32_t>(p0); } // F58B91E49213E693 0049DF83
	static void _0x2E97F57AB7822257(BOOL p0) { rage::NativeInvoke::Invoke<0x2E97F57AB7822257, uint32_t>(p0); } // 2E97F57AB7822257
	static void _0x02E29F4145DC9591A(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x02E29F4145DC9591A, uint32_t>(p0, p1); } // 02E29F4145DC9591A
	static void DISPLAY_AMMO_THIS_FRAME(BOOL p0) { rage::NativeInvoke::Invoke<0x36CA8D8C98192CF4, uint32_t>(p0); } // 36CA8D8C98192CF4 60693CEE
	static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { rage::NativeInvoke::Invoke<0x471873B3BE686969, uint32_t>(); } // 471873B3BE686969 BC6C73CB
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { rage::NativeInvoke::Invoke<0xDCB93E7DEB1CC3F, uint32_t>(); } // DCB93E7DEB1CC3F B75D4AD2
	static void _0xB96FE7C54712BB7(BOOL p0) { rage::NativeInvoke::Invoke<0xB96FE7C54712BB7, uint32_t>(p0); } // B96FE7C54712BB7 5476B9FD
	static void _0xC1A4879108C6BD61() { rage::NativeInvoke::Invoke<0xC1A4879108C6BD61, uint32_t>(); } // C1A4879108C6BD61 F4F3C796
	static void _0x84B994EED631E3E3() { rage::NativeInvoke::Invoke<0x84B994EED631E3E3, uint32_t>(); } // 84B994EED631E3E3 7BFFE82F
	static void SET_MULTIPLAYER_BANK_CASH() { rage::NativeInvoke::Invoke<0xF2A46914FCB65CCA, uint32_t>(); } // F2A46914FCB65CCA 2C842D03
	static void REMOVE_MULTIPLAYER_BANK_CASH() { rage::NativeInvoke::Invoke<0xAE01AFBC628C0D4C, uint32_t>(); } // AE01AFBC628C0D4C 728B4EF4
	static void SET_MULTIPLAYER_HUD_CASH(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xABBB431CD25723EC, uint32_t>(p0, p1); } // ABBB431CD25723EC A8DB435E
	static void REMOVE_MULTIPLAYER_HUD_CASH() { rage::NativeInvoke::Invoke<0xB3207C39486BF10D, uint32_t>(); } // B3207C39486BF10D 07BF4A7D
	static void HIDE_HELP_TEXT_THIS_FRAME() { rage::NativeInvoke::Invoke<0x834A2283A5D3A788, uint32_t>(); } // 834A2283A5D3A788 F3807BED
	static void DISPLAY_HELP_TEXT_THIS_FRAME(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0xD43B1BB61E829561, uint32_t>(p0, p1); } // D43B1BB61E829561 18E3360A
	static void _0x9100FC746CFA42CC(BOOL p0) { rage::NativeInvoke::Invoke<0x9100FC746CFA42CC, uint32_t>(p0); } // 9100FC746CFA42CC 1EFFB02A
	static void _0x0C89590ED39145134() { rage::NativeInvoke::Invoke<0x0C89590ED39145134, uint32_t>(); } // 0C89590ED39145134 B26FED2B
	static uint32_t _0x8DA04BE2123D1FA8() { return rage::NativeInvoke::Invoke<0x8DA04BE2123D1FA8, uint32_t>(); } // 8DA04BE2123D1FA8 22E9F555
	static void _0xAB9BBDB124328A1C(uint32_t p0) { rage::NativeInvoke::Invoke<0xAB9BBDB124328A1C, uint32_t>(p0); } // AB9BBDB124328A1C 83B608A0
	static uint32_t _0x67CA6386FD4A3F3A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x67CA6386FD4A3F3A, uint32_t>(p0); } // 67CA6386FD4A3F3A
	static void _0x7DAA4197B4D2BF0(BOOL p0) { rage::NativeInvoke::Invoke<0x7DAA4197B4D2BF0, uint32_t>(p0); } // 7DAA4197B4D2BF0 E70D1F43
	static void SET_GPS_FLAGS(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x88F9FBE498E45109, uint32_t>(p0, p1); } // 88F9FBE498E45109 60539BAB
	static void CLEAR_GPS_FLAGS() { rage::NativeInvoke::Invoke<0xC7AF1DA2B14B2283, uint32_t>(); } // C7AF1DA2B14B2283 056AFCE6
	static void _0xF30928F9EF2D6315(BOOL p0) { rage::NativeInvoke::Invoke<0xF30928F9EF2D6315, uint32_t>(p0); } // F30928F9EF2D6315 FB9BABF5
	static void CLEAR_GPS_RACE_TRACK() { rage::NativeInvoke::Invoke<0x7BE4A76B87C50D85, uint32_t>(); } // 7BE4A76B87C50D85 40C59829
	static void _0xC4A5D3BB4C3D3AB9(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xC4A5D3BB4C3D3AB9, uint32_t>(p0, p1, p2); } // C4A5D3BB4C3D3AB9 7F93799B
	static void _0x93E18AEF194CE163(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x93E18AEF194CE163, uint32_t>(p0, p1, p2); } // 93E18AEF194CE163 EEBDFE55
	static void _0xC16F6689A7DBE551(BOOL p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xC16F6689A7DBE551, uint32_t>(p0, p1, p2); } // C16F6689A7DBE551 DA0AF00E
	static void _0xAF71A49FDA517305() { rage::NativeInvoke::Invoke<0xAF71A49FDA517305, uint32_t>(); } // AF71A49FDA517305 CF2E3E24
	static void _0x7E3DA46CE25B6D18(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x7E3DA46CE25B6D18, uint32_t>(p0, p1, p2); } // 7E3DA46CE25B6D18 C3DCBEDB
	static void _0x170343993A3352C5(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x170343993A3352C5, uint32_t>(p0, p1, p2); } // 170343993A3352C5 FE485135
	static void _0x215D5A45803F79DC(BOOL p0) { rage::NativeInvoke::Invoke<0x215D5A45803F79DC, uint32_t>(p0); } // 215D5A45803F79DC E87CBE4C
	static void _0xE824F7271760B02() { rage::NativeInvoke::Invoke<0xE824F7271760B02, uint32_t>(); } // E824F7271760B02 0D9969E4
	static void CLEAR_GPS_PLAYER_WAYPOINT() { rage::NativeInvoke::Invoke<0x91DAD8C1643D4D5A, uint32_t>(); } // 91DAD8C1643D4D5A 0B9C7FC2
	static void SET_GPS_FLASHES(BOOL p0) { rage::NativeInvoke::Invoke<0xE97E144C74A00905, uint32_t>(p0); } // E97E144C74A00905 E991F733
	static void FLASH_MINIMAP_DISPLAY() { rage::NativeInvoke::Invoke<0x2EFA6B02E866355A, uint32_t>(); } // 2EFA6B02E866355A B8359952
	static void _0xF6F144824FA2BE83(uint32_t p0) { rage::NativeInvoke::Invoke<0xF6F144824FA2BE83, uint32_t>(p0); } // F6F144824FA2BE83 79A6CAF6
	static void TOGGLE_STEALTH_RADAR(BOOL p0) { rage::NativeInvoke::Invoke<0x8269440C7866A5B8, uint32_t>(p0); } // 8269440C7866A5B8 C68D47C4
	static void KEY_HUD_COLOUR(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x672D376470B6757D, uint32_t>(p0, p1); } // 672D376470B6757D D5BFCADB
	static void SET_MISSION_NAME(BOOL p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xAABDA3B6E57B068A, uint32_t>(p0, p1); } // AABDA3B6E57B068A 68DCAE10
	static void _0x4081A600A2C8F827(BOOL p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x4081A600A2C8F827, uint32_t>(p0, p1); } // 4081A600A2C8F827 8D9A1734
	static void _0xF1079458D323C454(BOOL p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6, uint32_t *p7, uint32_t *p8) { rage::NativeInvoke::Invoke<0xF1079458D323C454, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // F1079458D323C454 D2161E77
	static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL p0) { rage::NativeInvoke::Invoke<0xFDC8825960BE275C, uint32_t>(p0); } // FDC8825960BE275C A41C3B62
	static void _0x98BB94CE67283ADA(BOOL p0) { rage::NativeInvoke::Invoke<0x98BB94CE67283ADA, uint32_t>(p0); } // 98BB94CE67283ADA 02F5F1D1
	static void _0xB182AC07FE761D52(BOOL p0) { rage::NativeInvoke::Invoke<0xB182AC07FE761D52, uint32_t>(p0); } // B182AC07FE761D52 D8D77733
	static float _0x9E398CF68DAC5B00() { return rage::NativeInvoke::Invoke<0x9E398CF68DAC5B00, float>(); } // 9E398CF68DAC5B00 A4098ACC
	static BOOL _0x616B30750598DE38(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x616B30750598DE38, BOOL>(p0, p1, p2); } // 616B30750598DE38 65B705F6
	static void _0x0D21CC32C600DEF89(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x0D21CC32C600DEF89, uint32_t>(p0, p1, p2); } // 0D21CC32C600DEF89 E010F081
	static void _0x6876AA8265E2FE18(uint32_t p0) { rage::NativeInvoke::Invoke<0x6876AA8265E2FE18, uint32_t>(p0); } // 6876AA8265E2FE18 5133A750
	static void _0x2322D02156FBA3F2() { rage::NativeInvoke::Invoke<0x2322D02156FBA3F2, uint32_t>(); } // 2322D02156FBA3F2 20FD3E87
	static void LOCK_MINIMAP_ANGLE(BOOL p0) { rage::NativeInvoke::Invoke<0xAA609466F47F9ED0, uint32_t>(p0); } // AA609466F47F9ED0 DEC733E4
	static void UNLOCK_MINIMAP_ANGLE() { rage::NativeInvoke::Invoke<0x465FDAA9130F8F45, uint32_t>(); } // 465FDAA9130F8F45 742043F9
	static void LOCK_MINIMAP_POSITION(float p0, float p1) { rage::NativeInvoke::Invoke<0x76F422FE758FB5D7, uint32_t>(p0, p1); } // 76F422FE758FB5D7 B9632A91
	static void UNLOCK_MINIMAP_POSITION() { rage::NativeInvoke::Invoke<0x573535E36A62454, uint32_t>(); } // 573535E36A62454 5E8E6F54
	static void _0xC24747147A4F1DE3(float p0) { rage::NativeInvoke::Invoke<0xC24747147A4F1DE3, uint32_t>(p0); } // C24747147A4F1DE3 0308EDF6
	static void _0xBF032A862E60BA6C(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xBF032A862E60BA6C, uint32_t>(p0, p1, p2); } // BF032A862E60BA6C 7FB6FB2A
	static void _0x1E9706A18BCA60E6(uint32_t p0) { rage::NativeInvoke::Invoke<0x1E9706A18BCA60E6, uint32_t>(p0); } // 1E9706A18BCA60E6 F07D8CEF
	static void _0x08DE076CFFF4BC07A(uint32_t p0) { rage::NativeInvoke::Invoke<0x08DE076CFFF4BC07A, uint32_t>(p0); } // 08DE076CFFF4BC07A 827F14DE
	static void _0xA9D1BCCD3A625DAE(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA9D1BCCD3A625DAE, uint32_t>(p0, p1); } // A9D1BCCD3A625DAE 08EB83D2
	static BOOL IS_HUD_COMPONENT_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC7F3C9E82B405F1E, BOOL>(p0); } // C7F3C9E82B405F1E 6214631F
	static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6E41FB92A34F9483, BOOL>(p0); } // 6E41FB92A34F9483 2B86F382
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0x39987759D6C2EBBF, uint32_t>(p0); } // 39987759D6C2EBBF 31ABA127
	static BOOL _0x065AFFA04D9E38C76(uint32_t p0) { return rage::NativeInvoke::Invoke<0x065AFFA04D9E38C76, BOOL>(p0); } // 065AFFA04D9E38C76 E8C8E535
	static void HIDE_HUD_COMPONENT_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0xD9E638F7F8DCAA60, uint32_t>(p0); } // D9E638F7F8DCAA60 DB2D0762
	static void SHOW_HUD_COMPONENT_THIS_FRAME(uint32_t p0) { rage::NativeInvoke::Invoke<0x04EF7AADF2CD572A6, uint32_t>(p0); } // 04EF7AADF2CD572A6 95E1546E
	static void _0xD7635149595C854C() { rage::NativeInvoke::Invoke<0xD7635149595C854C, uint32_t>(); } // D7635149595C854C 52746FE1
	static void RESET_RETICULE_VALUES() { rage::NativeInvoke::Invoke<0x4852CC7102421294, uint32_t>(); } // 4852CC7102421294 BE27AA3F
	static void RESET_HUD_COMPONENT_VALUES(uint32_t p0) { rage::NativeInvoke::Invoke<0x7DD2AC90262DCE82, uint32_t>(p0); } // 7DD2AC90262DCE82 D15B46DA
	static void SET_HUD_COMPONENT_POSITION(uint32_t p0, float p1, float p2) { rage::NativeInvoke::Invoke<0x5FB5A2E05EF61B42, uint32_t>(p0, p1, p2); } // 5FB5A2E05EF61B42 2F3A0D15
	static Vector3 GET_HUD_COMPONENT_POSITION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8ECDD105EBC8FBAA, Vector3>(p0); } // 8ECDD105EBC8FBAA 080DCED6
	static void _0xADB29B38DD8FAD3C() { rage::NativeInvoke::Invoke<0xADB29B38DD8FAD3C, uint32_t>(); } // ADB29B38DD8FAD3C 5BBCC934
	static uint32_t _0x61EA0326067B832D(float p0, float p1, float p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0x61EA0326067B832D, uint32_t>(p0, p1, p2, p3, p4); } // 61EA0326067B832D FE9A39F8
	static void _0xACA52C0D9E6758DC() { rage::NativeInvoke::Invoke<0xACA52C0D9E6758DC, uint32_t>(); } // ACA52C0D9E6758DC 10DE5150
	static void _0x6F322BD2CC40DA48() { rage::NativeInvoke::Invoke<0x6F322BD2CC40DA48, uint32_t>(); } // 6F322BD2CC40DA48 67649EE0
	static uint32_t _0xF896651DB1B4DB26() { return rage::NativeInvoke::Invoke<0xF896651DB1B4DB26, uint32_t>(); } // F896651DB1B4DB26 9D2C94FA
	static BOOL _0xB583BEF8A2D14AAF(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB583BEF8A2D14AAF, BOOL>(p0); } // B583BEF8A2D14AAF 45472FD5
	static void _0xB7EA46F28381F55E(uint32_t p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xB7EA46F28381F55E, uint32_t>(p0, p1, p2); } // B7EA46F28381F55E 198F32D7
	static void _0xE07CD8C540C9722D(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xE07CD8C540C9722D, uint32_t>(p0, p1, p2, p3); } // E07CD8C540C9722D 93045157
	static void _0xF914B8DF951A923(uint32_t p0, uint32_t p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xF914B8DF951A923, uint32_t>(p0, p1, p2, p3); } // F914B8DF951A923 18B012B7
	static void _0x6343EDC03B72A678(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x6343EDC03B72A678, uint32_t>(p0, p1, p2, p3, p4, p5); } // 6343EDC03B72A678 97852A82
	static void CLEAR_FLOATING_HELP(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xDB8E6614BEC7977E, uint32_t>(p0, p1); } // DB8E6614BEC7977E B181F88F
	static void _CREATE_PED_HEAD_DISPLAY_2(uint32_t p0, const char* *p1, BOOL p2, BOOL p3, const char *p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { rage::NativeInvoke::Invoke<0xF55905207DDCE4B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // F55905207DDCE4B C969F2D0
	static BOOL _ARE_HEAD_DISPLAYS_READY() { return rage::NativeInvoke::Invoke<0x46119117C732580, BOOL>(); } // 46119117C732580 EFD2564A
	static uint32_t _CREATE_PED_HEAD_DISPLAY(uint32_t p0, const char *p1, BOOL p2, BOOL p3, const char *p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0xC0C3ADAA5E2742A8, uint32_t>(p0, p1, p2, p3, p4, p5); } // C0C3ADAA5E2742A8 F5CD2AA4
	static void _DELETE_HEAD_DISPLAY(uint32_t p0) { rage::NativeInvoke::Invoke<0xB16A30FAC740F372, uint32_t>(p0); } // B16A30FAC740F372 3D081FE4
	static BOOL _IS_HEAD_DISPLAY_ID_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x78D2B86B27D417FE, BOOL>(p0); } // 78D2B86B27D417FE 60118951
	static BOOL ADD_TREVOR_RANDOM_MODIFIER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4B4B2CA8617C20C1, BOOL>(p0); } // 4B4B2CA8617C20C1 63959059
	static void _SET_HEAD_DISPLAY_FLAG(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x1794D34117D18C4, uint32_t>(p0, p1, p2); } // 1794D34117D18C4 D41DF479
	static void _SET_HEAD_DISPLAY_UNKNWON1(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4CB5F83CD5B8333, uint32_t>(p0, p1); } // 4CB5F83CD5B8333 767DED29
	static void _SET_HEAD_DISPLAY_VISIBLE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2395A5BAA8CCB54, uint32_t>(p0, p1); } // 2395A5BAA8CCB54 B01A5434
	static void _SET_HEAD_DISPLAY_UNKNWON2(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x75868EF4D5C8A90B, uint32_t>(p0, p1, p2); } // 75868EF4D5C8A90B 7E3AA40A
	static void _SET_HEAD_DISPLAY_UNKNWON3(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x7298EA23DA5180D5, uint32_t>(p0, p1); } // 7298EA23DA5180D5 5777EC77
	static void _SET_HEAD_DISPLAY_ALPHA(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x7B0C1FCDD1359963, uint32_t>(p0, p1, p2); } // 7B0C1FCDD1359963 F4418611
	static BOOL _SET_HEAD_DISPLAY_WANTED_LEVEL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xFB17463B0E8EFACF, uint32_t>(p0, p1); } // FB17463B0E8EFACF 0EBB003F
	static BOOL _SET_HEAD_DISPLAY_STRING(uint32_t p0, const char *p1) { return rage::NativeInvoke::Invoke<0x7156A173B1B5DC67, uint32_t>(p0, p1); } // 7156A173B1B5DC67 627A559B
	static BOOL _GET_HEAD_DISPLAY_UNKNWON1(uint32_t p0) { return rage::NativeInvoke::Invoke<0x10220B72586ADF4E, BOOL>(p0); } // 10220B72586ADF4E F11414C4
	static void _SET_HEAD_DISPLAY_UNKNWON5(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x8734BB476A33A3F2, uint32_t>(p0, p1); } // 8734BB476A33A3F2 939218AB
	static uint32_t _0x028B0B9FAE91FC125() { return rage::NativeInvoke::Invoke<0x028B0B9FAE91FC125, uint32_t>(); } // 028B0B9FAE91FC125 AB5B7C18
	static uint32_t GET_CURRENT_WEBSITE_ID() { return rage::NativeInvoke::Invoke<0xCFDAF1A342ABD988, uint32_t>(); } // CFDAF1A342ABD988 42A55B14
	static uint32_t _0x160F30A19B8C7963(uint32_t p0) { return rage::NativeInvoke::Invoke<0x160F30A19B8C7963, uint32_t>(p0); } // 160F30A19B8C7963 D217EE7E
	static BOOL _0xD6FF24431E0986B() { return rage::NativeInvoke::Invoke<0xD6FF24431E0986B, BOOL>(); } // D6FF24431E0986B
	static void SET_WARNING_MESSAGE(uint32_t *p0, uint32_t p1, uint32_t *p2, BOOL p3, uint32_t p4, uint32_t *p5, uint32_t *p6, BOOL p7) { rage::NativeInvoke::Invoke<0x7B1776B3B53F8D74, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 7B1776B3B53F8D74 BE699BDE
	static void _0xDC38CC1E35B6A5D7(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, BOOL p4, uint32_t p5, uint32_t *p6, uint32_t *p7, BOOL p8) { rage::NativeInvoke::Invoke<0xDC38CC1E35B6A5D7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // DC38CC1E35B6A5D7 2DB9EAB5
	static void SET_DANCE_MAPPERS(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, BOOL p4, uint32_t p5, uint32_t p6, uint32_t *p7, uint32_t *p8, BOOL p9) { rage::NativeInvoke::Invoke<0x701919482C74B5AB, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 701919482C74B5AB 749929D3
	static BOOL _0x0C5A80A9E096D529(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x0C5A80A9E096D529, BOOL>(p0, p1, p2, p3, p4, p5); } // 0C5A80A9E096D529
	static BOOL _0x25251DA4142FF55(uint32_t p0) { return rage::NativeInvoke::Invoke<0x25251DA4142FF55, BOOL>(p0); } // 25251DA4142FF55
	static void _0xF45E4FC229984058() { rage::NativeInvoke::Invoke<0xF45E4FC229984058, uint32_t>(); } // F45E4FC229984058
	static BOOL _0xDAF2549B28FDF97C() { return rage::NativeInvoke::Invoke<0xDAF2549B28FDF97C, BOOL>(); } // DAF2549B28FDF97C 94C834AD
	static void _0xD7294662960BC935() { rage::NativeInvoke::Invoke<0xD7294662960BC935, uint32_t>(); } // D7294662960BC935 2F9A309C
	static void _0xBAFA44AE50C80A20(BOOL p0) { rage::NativeInvoke::Invoke<0xBAFA44AE50C80A20, uint32_t>(p0); } // BAFA44AE50C80A20 E4FD20D8
	static void _0x53CFDB990DA71C3E(uint32_t p0) { rage::NativeInvoke::Invoke<0x53CFDB990DA71C3E, uint32_t>(p0); } // 53CFDB990DA71C3E 13E7A5A9
	static uint32_t _0x939D790A0F52FFC3(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x939D790A0F52FFC3, uint32_t>(p0, p1, p2); } // 939D790A0F52FFC3 786CA0A2
	static void _0x7075A1DC41588A03() { rage::NativeInvoke::Invoke<0x7075A1DC41588A03, uint32_t>(); } // 7075A1DC41588A03 CBEC9369
	static uint32_t _0x1E71C40BC87F5A79() { return rage::NativeInvoke::Invoke<0x1E71C40BC87F5A79, uint32_t>(); } // 1E71C40BC87F5A79 3F4AFB13
	static void _0x63103FA92DB96A32(BOOL p0) { rage::NativeInvoke::Invoke<0x63103FA92DB96A32, uint32_t>(p0); } // 63103FA92DB96A32 2F28F0A6
	static void _0xB5FD622C93F7F27F() { rage::NativeInvoke::Invoke<0xB5FD622C93F7F27F, uint32_t>(); } // B5FD622C93F7F27F 801D0D86
	static void _0x7722857C13F16F8() { rage::NativeInvoke::Invoke<0x7722857C13F16F8, uint32_t>(); } // 7722857C13F16F8 317775DF
	static void ACTIVATE_FRONTEND_MENU(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xD3059E5D109BEB2B, uint32_t>(p0, p1, p2); } // D3059E5D109BEB2B 01D83872
	static void RESTART_FRONTEND_MENU(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x5E69E57D5EE8C815, uint32_t>(p0, p1); } // 5E69E57D5EE8C815 B07DAF98
	static uint32_t _0x951FD06749BEF574() { return rage::NativeInvoke::Invoke<0x951FD06749BEF574, uint32_t>(); } // 951FD06749BEF574 33D6868F
	static void SET_PAUSE_MENU_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0xA50E3E96348933D, uint32_t>(p0); } // A50E3E96348933D 1DCD878E
	static void DISABLE_FRONTEND_THIS_FRAME() { rage::NativeInvoke::Invoke<0xB27B75CF7FE04D35, uint32_t>(); } // B27B75CF7FE04D35 D86A029E
	static void _0x3BDB0147E3085DB4() { rage::NativeInvoke::Invoke<0x3BDB0147E3085DB4, uint32_t>(); } // 3BDB0147E3085DB4 7F349900
	static void _0x95A29F105741D0C3() { rage::NativeInvoke::Invoke<0x95A29F105741D0C3, uint32_t>(); } // 95A29F105741D0C3 630CD8EE
	static void SET_FRONTEND_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0x703307F9E1D0B307, uint32_t>(p0); } // 703307F9E1D0B307 81E1AD32
	static BOOL IS_PAUSE_MENU_ACTIVE() { return rage::NativeInvoke::Invoke<0xBB02FD0C8166DE6D, BOOL>(); } // BB02FD0C8166DE6D D3600591
	static uint32_t _0x710674C29CCC824A() { return rage::NativeInvoke::Invoke<0x710674C29CCC824A, uint32_t>(); } // 710674C29CCC824A C85C4487
	static uint32_t GET_PAUSE_MENU_STATE() { return rage::NativeInvoke::Invoke<0x3821D11074DB6AF2, uint32_t>(); } // 3821D11074DB6AF2 92F50134
	static BOOL IS_PAUSE_MENU_RESTARTING() { return rage::NativeInvoke::Invoke<0x3061F5773BD4FBDF, BOOL>(); } // 3061F5773BD4FBDF 3C4CF4D9
	static void _0xBE8E3C185B25CC6(uint32_t p0) { rage::NativeInvoke::Invoke<0xBE8E3C185B25CC6, uint32_t>(p0); } // BE8E3C185B25CC6 2DFD35C7
	static void _0x92275A60C4894E73(uint32_t p0) { rage::NativeInvoke::Invoke<0x92275A60C4894E73, uint32_t>(p0); } // 92275A60C4894E73 0A89336C
	static void _0x481BDECF0423B436() { rage::NativeInvoke::Invoke<0x481BDECF0423B436, uint32_t>(); } // 481BDECF0423B436 C84BE309
	static void _0x65B395215242FC26(uint32_t p0) { rage::NativeInvoke::Invoke<0x65B395215242FC26, uint32_t>(p0); } // 65B395215242FC26 9FE8FD5E
	static void OBJECT_DECAL_TOGGLE(uint32_t p0) { rage::NativeInvoke::Invoke<0x54693641958ECCD4, uint32_t>(p0); } // 54693641958ECCD4 0029046E
	static BOOL _0xA10DCB07986BC5C3(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA10DCB07986BC5C3, BOOL>(p0); } // A10DCB07986BC5C3 C51BC42F
	static BOOL _0x645256968F6461DF() { return rage::NativeInvoke::Invoke<0x645256968F6461DF, BOOL>(); } // 645256968F6461DF 016D7AF9
	static void ENABLE_DEATHBLOOD_SEETHROUGH(uint32_t p0) { rage::NativeInvoke::Invoke<0x3CAF82D57F002B28, uint32_t>(p0); } // 3CAF82D57F002B28 15B24768
	static void _0x17740B6494D7819C(BOOL p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x17740B6494D7819C, uint32_t>(p0, p1, p2); } // 17740B6494D7819C 6C67131A
	static void _0x428DBE4976192837(BOOL p0) { rage::NativeInvoke::Invoke<0x428DBE4976192837, uint32_t>(p0); } // 428DBE4976192837 11D09737
	static BOOL _0xD5319BA880C2F84C() { return rage::NativeInvoke::Invoke<0xD5319BA880C2F84C, BOOL>(); } // D5319BA880C2F84C D3BF3ABD
	static void _0x7FB1C4BFB97A00C0() { rage::NativeInvoke::Invoke<0x7FB1C4BFB97A00C0, uint32_t>(); } // 7FB1C4BFB97A00C0 C06B763D
	static void _0xA4525B118F3DFA6B() { rage::NativeInvoke::Invoke<0xA4525B118F3DFA6B, uint32_t>(); } // A4525B118F3DFA6B B9392CE7
	static BOOL _0x50A7BE9CD05AD5C1() { return rage::NativeInvoke::Invoke<0x50A7BE9CD05AD5C1, BOOL>(); } // 50A7BE9CD05AD5C1 92DAFA78
	static uint32_t _0xB28B82C182621B53() { return rage::NativeInvoke::Invoke<0xB28B82C182621B53, uint32_t>(); } // B28B82C182621B53 22CA9F2A
	static uint32_t _0x24D1C24D76CED44E() { return rage::NativeInvoke::Invoke<0x24D1C24D76CED44E, uint32_t>(); } // 24D1C24D76CED44E DA7951A2
	static uint32_t _0x780CA25DAF50F3BB() { return rage::NativeInvoke::Invoke<0x780CA25DAF50F3BB, uint32_t>(); } // 780CA25DAF50F3BB 7D95AFFF
	static uint32_t _0xEC7CB33300ACE653() { return rage::NativeInvoke::Invoke<0xEC7CB33300ACE653, uint32_t>(); } // EC7CB33300ACE653 96863460
	static void _0x9785E055AFBC6AFC(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x9785E055AFBC6AFC, uint32_t>(p0, p1); } // 9785E055AFBC6AFC 8543AAC8
	static void _0x5F93BED9D86A6FD4(uint32_t *p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x5F93BED9D86A6FD4, uint32_t>(p0, p1, p2); } // 5F93BED9D86A6FD4 6025AA2F
	static BOOL _0x8423D71411FAF4EB(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x8423D71411FAF4EB, BOOL>(p0, p1, p2); } // 8423D71411FAF4EB 46794EB2
	static BOOL SET_USERIDS_UIHIDDEN(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x414C7B1D56573AB6, BOOL>(p0, p1); } // 414C7B1D56573AB6 4370999E
	static BOOL _0x7277A34366A4F19F(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x7277A34366A4F19F, BOOL>(p0, p1, p2, p3); } // 7277A34366A4F19F D6CC4766
	static BOOL _0x3D4470BA1B125B1C(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x3D4470BA1B125B1C, BOOL>(p0, p1); } // 3D4470BA1B125B1C 51972B04
	static BOOL _0x0EADB0FBC4CD9EE39(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x0EADB0FBC4CD9EE39, BOOL>(p0, p1); } // 0EADB0FBC4CD9EE39 D43BB56D
	static void CLEAR_PED_IN_PAUSE_MENU() { rage::NativeInvoke::Invoke<0x8093233B188174FE, uint32_t>(); } // 8093233B188174FE 28058ACF
	static void GIVE_PED_TO_PAUSE_MENU(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD1F971E0ADC8AF70, uint32_t>(p0, p1); } // D1F971E0ADC8AF70 2AD2C9CE
	static void _0x8F236A4DCA8B39F3(BOOL p0) { rage::NativeInvoke::Invoke<0x8F236A4DCA8B39F3, uint32_t>(p0); } // 8F236A4DCA8B39F3 127310EB
	static void _0xFD6F800BAE08A8A9(BOOL p0) { rage::NativeInvoke::Invoke<0xFD6F800BAE08A8A9, uint32_t>(p0); } // FD6F800BAE08A8A9 8F45D327
	static void _0x89DC48C7C26889B0() { rage::NativeInvoke::Invoke<0x89DC48C7C26889B0, uint32_t>(); } // 89DC48C7C26889B0 19FCBBB2
	static BOOL _0x6B8C3FD0D5DD4926() { return rage::NativeInvoke::Invoke<0x6B8C3FD0D5DD4926, BOOL>(); } // 6B8C3FD0D5DD4926 850690FF
	static uint32_t _0xFFDDCE3C8DC39841() { return rage::NativeInvoke::Invoke<0xFFDDCE3C8DC39841, uint32_t>(); } // FFDDCE3C8DC39841 9D4934F4
	static void _0xC470E7BE34B3B971() { rage::NativeInvoke::Invoke<0xC470E7BE34B3B971, uint32_t>(); } // C470E7BE34B3B971 57218529
	static void _0xC79FC4EABCA4F9BD() { rage::NativeInvoke::Invoke<0xC79FC4EABCA4F9BD, uint32_t>(); } // C79FC4EABCA4F9BD 5F86AA39
	static void _0x4F5CF636B241140(uint32_t *p0) { rage::NativeInvoke::Invoke<0x4F5CF636B241140, uint32_t>(p0); } // 4F5CF636B241140 7AD67C95
	static uint32_t _0xBB6A8F38D35B8445() { return rage::NativeInvoke::Invoke<0xBB6A8F38D35B8445, uint32_t>(); } // BB6A8F38D35B8445 D4DA14EF
	static void _0x38194339C47A347D(BOOL p0) { rage::NativeInvoke::Invoke<0x38194339C47A347D, uint32_t>(p0); } // 38194339C47A347D FF06772A
	static void _0xADAC7AEDE592E5FF(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xADAC7AEDE592E5FF, uint32_t>(p0, p1); } // ADAC7AEDE592E5FF 96C4C4DD
	static BOOL _0xF9A4CF70DB92FFF6(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF9A4CF70DB92FFF6, BOOL>(p0); } // F9A4CF70DB92FFF6 3BE1257F
	static void _0x84A6F440181ACC23(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x84A6F440181ACC23, uint32_t>(p0, p1); } // 84A6F440181ACC23 D8E31B1A
	static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9F23324EC3A61137, uint32_t>(p0, p1); } // 9F23324EC3A61137 872C2CFB
	static void _0x089B93927F67D1769(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x089B93927F67D1769, uint32_t>(p0, p1); } // 089B93927F67D1769 FFDF46F0
	static void _0x5A510F8866FE43EA(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x5A510F8866FE43EA, uint32_t>(p0, p1); } // 5A510F8866FE43EA F9DC2AF7
	static uint32_t _0xD45FE2149D749B3(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD45FE2149D749B3, uint32_t>(p0); } // D45FE2149D749B3 06349065
	static uint32_t _0x793BA2783243F773(uint32_t p0) { return rage::NativeInvoke::Invoke<0x793BA2783243F773, uint32_t>(p0); } // 793BA2783243F773 CA52CF43
}

namespace GRAPHICS
{
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(uint32_t p0) { rage::NativeInvoke::Invoke<0x6BA9FD874495918A, uint32_t>(p0); } // 6BA9FD874495918A 1418CA37
	static void DRAW_DEBUG_LINE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x428FCEDAB4D8C227, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 428FCEDAB4D8C227 ABF783AB
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { rage::NativeInvoke::Invoke<0x5F8C0F598573E93, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 5F8C0F598573E93 E8BFF632
	static void DRAW_DEBUG_SPHERE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x6B7CE8468EF50BAB, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 6B7CE8468EF50BAB 304D0EEF
	static void DRAW_DEBUG_BOX(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x0F6127D1DE2EBCB3E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0F6127D1DE2EBCB3E 8524A848
	static void _0x4EBF37F1F2BE49CC(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x4EBF37F1F2BE49CC, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 4EBF37F1F2BE49CC B6DF3709
	static void DRAW_DEBUG_TEXT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x1D354C128EBBE84E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 1D354C128EBBE84E 269B006F
	static void DRAW_DEBUG_TEXT_2D(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0x9C64F97D3F9CCA97, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 9C64F97D3F9CCA97 528B973B
	static void DRAW_LINE(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x845D3C1816C12B24, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 845D3C1816C12B24 B3426BCC
	static void DRAW_POLY(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { rage::NativeInvoke::Invoke<0x7C906BA88CFAF018, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 7C906BA88CFAF018 ABD19253
	static void _0x800746F993F0A9B4(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x800746F993F0A9B4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 800746F993F0A9B4 CD4D9DD5
	static void _0xCDA4507E6EFCDDB(BOOL p0) { rage::NativeInvoke::Invoke<0xCDA4507E6EFCDDB, uint32_t>(p0); } // CDA4507E6EFCDDB C44C2F44
	static BOOL _0x896EFD6787A4FA76() { return rage::NativeInvoke::Invoke<0x896EFD6787A4FA76, BOOL>(); } // 896EFD6787A4FA76 BA9AD458
	static uint32_t _0x137263016733C0FD() { return rage::NativeInvoke::Invoke<0x137263016733C0FD, uint32_t>(); } // 137263016733C0FD ADBBA287
	static void _0x0196C1A356588DD48() { rage::NativeInvoke::Invoke<0x0196C1A356588DD48, uint32_t>(); } // 0196C1A356588DD48 9E553002
	static BOOL _0xA1640BB1376C9899(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xA1640BB1376C9899, BOOL>(p0, p1, p2, p3); } // A1640BB1376C9899 56C1E488
	static uint32_t _0x112CC37ABCFB532B(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x112CC37ABCFB532B, uint32_t>(p0); } // 112CC37ABCFB532B 226B08EA
	static BOOL _0xA2168DB211AB0146() { return rage::NativeInvoke::Invoke<0xA2168DB211AB0146, BOOL>(); } // A2168DB211AB0146 1F3CADB0
	static uint32_t _0x8E117BAA6F396547() { return rage::NativeInvoke::Invoke<0x8E117BAA6F396547, uint32_t>(); } // 8E117BAA6F396547 A9DC8558
	static void _0xF5F0E07FA56CB6C2() { rage::NativeInvoke::Invoke<0xF5F0E07FA56CB6C2, uint32_t>(); } // F5F0E07FA56CB6C2 88EAF398
	static BOOL _0xAD61A0D1BAA8BBFE() { return rage::NativeInvoke::Invoke<0xAD61A0D1BAA8BBFE, BOOL>(); } // AD61A0D1BAA8BBFE 47B0C137
	static uint32_t MELEE_SEETHROUGH_SKIPPED() { return rage::NativeInvoke::Invoke<0x06F0CB58B6DB82155, uint32_t>(); } // 06F0CB58B6DB82155 65376C9B
	static void _0xAAFD8D273DA4C304() { rage::NativeInvoke::Invoke<0xAAFD8D273DA4C304, uint32_t>(); } // AAFD8D273DA4C304 9CBA682A
	static uint32_t _0x3E8A766FEC679390(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3E8A766FEC679390, uint32_t>(p0); } // 3E8A766FEC679390 3B15D33C
	static uint32_t _0x0AB50E21A4AEE25C5() { return rage::NativeInvoke::Invoke<0x0AB50E21A4AEE25C5, uint32_t>(); } // 0AB50E21A4AEE25C5 EC5D0317
	static BOOL _0xCAAD27647F24E07C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCAAD27647F24E07C, BOOL>(p0); } // CAAD27647F24E07C 25D569EB
	static uint32_t _0x985B1F2F278B1110(uint32_t p0) { return rage::NativeInvoke::Invoke<0x985B1F2F278B1110, uint32_t>(p0); } // 985B1F2F278B1110 CFCDC518
	static void _0xD1C4DEF84114A0EA() { rage::NativeInvoke::Invoke<0xD1C4DEF84114A0EA, uint32_t>(); } // D1C4DEF84114A0EA 108F36CC
	static void _0xF228D122DDE60FF6(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF228D122DDE60FF6, uint32_t>(p0, p1); } // F228D122DDE60FF6 E9F2B68F
	static uint32_t GET_MAXIMUM_NUMBER_OF_PHOTOS() { return rage::NativeInvoke::Invoke<0x3E50D1C7A457E0ED, uint32_t>(); } // 3E50D1C7A457E0ED 727AA63F
	static uint32_t _0x34902F6101E02583() { return rage::NativeInvoke::Invoke<0x34902F6101E02583, uint32_t>(); } // 34902F6101E02583 239272BD
	static uint32_t _0x8AB089A8C6D05C26() { return rage::NativeInvoke::Invoke<0x8AB089A8C6D05C26, uint32_t>(); } // 8AB089A8C6D05C26 21DBF0C9
	static uint32_t _0x7B543A46F61EDB11(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7B543A46F61EDB11, uint32_t>(p0); } // 7B543A46F61EDB11 199FABF0
	static uint32_t _0xB6EB2C2CB96040D7(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB6EB2C2CB96040D7, uint32_t>(p0); } // B6EB2C2CB96040D7 596B900D
	static void _0xFDD88F7A47904AE7() { rage::NativeInvoke::Invoke<0xFDD88F7A47904AE7, uint32_t>(); } // FDD88F7A47904AE7 C9EF81ED
	static uint32_t _0x582E661A4506828E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x582E661A4506828E, uint32_t>(p0); } // 582E661A4506828E 9D84554C
	static uint32_t _0x2AC460AF1B51B2EF(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2AC460AF1B51B2EF, uint32_t>(p0); } // 2AC460AF1B51B2EF 9C106AD9
	static uint32_t _0xB1750848490A12B4(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB1750848490A12B4, uint32_t>(p0); } // B1750848490A12B4 762E5C5F
	static void DRAW_LIGHT_WITH_RANGE(float p0, float p1, float p2, uint32_t p3, uint32_t p4, uint32_t p5, float p6, float p7) { rage::NativeInvoke::Invoke<0x28ACAFB3A95CA7D9, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 28ACAFB3A95CA7D9 6A396E9A
	static void DRAW_SPOT_LIGHT(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, float p9, float p10, float p11, float p12, float p13) { rage::NativeInvoke::Invoke<0xD7DD9D04729ACCDD, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // D7DD9D04729ACCDD BDBC410C
	static void _0xCED07345ADC597CD(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, float p9, float p10, float p11, float p12, float p13, uint32_t p14) { rage::NativeInvoke::Invoke<0xCED07345ADC597CD, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // CED07345ADC597CD 32BF9598
	static void _0xA8DBEE4E858BDDCC(float p0) { rage::NativeInvoke::Invoke<0xA8DBEE4E858BDDCC, uint32_t>(p0); } // A8DBEE4E858BDDCC 93628786
	static void _0xA315118F294C9904(uint32_t p0) { rage::NativeInvoke::Invoke<0xA315118F294C9904, uint32_t>(p0); } // A315118F294C9904
	static void DRAW_MARKER(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13, uint32_t p14, uint32_t p15, uint32_t p16, BOOL p17, BOOL p18, uint32_t p19, BOOL p20, uint32_t *p21, uint32_t *p22, BOOL p23) { rage::NativeInvoke::Invoke<0x4F390C719D267402, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23); } // 4F390C719D267402 48D84A02
	static uint32_t CREATE_CHECKPOINT(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { return rage::NativeInvoke::Invoke<0x07071B27329D1D1F7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 07071B27329D1D1F7 F541B690
	static void _0x74CA264D09508BD5(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x74CA264D09508BD5, uint32_t>(p0, p1); } // 74CA264D09508BD5 80151CCF
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x7D680F994E42D835, uint32_t>(p0, p1, p2, p3); } // 7D680F994E42D835 FF0F9B22
	static void SET_CHECKPOINT_RGBA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xB51199C40AB67929, uint32_t>(p0, p1, p2, p3, p4); } // B51199C40AB67929 EF9C8CB3
	static void _0xBEFD6AD8026C8E77(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xBEFD6AD8026C8E77, uint32_t>(p0, p1, p2, p3, p4); } // BEFD6AD8026C8E77 A5456DBB
	static void _0x66555DABC55918CA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x66555DABC55918CA, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 66555DABC55918CA 20EABD0F
	static void _0xDBA93290ABCCC836(uint32_t p0) { rage::NativeInvoke::Invoke<0xDBA93290ABCCC836, uint32_t>(p0); } // DBA93290ABCCC836 1E3A3126
	static void DELETE_CHECKPOINT(uint32_t p0) { rage::NativeInvoke::Invoke<0x7D8A50215F755A70, uint32_t>(p0); } // 7D8A50215F755A70 B66CF3CA
	static void _0x2C60BA5D2749BC8B(BOOL p0) { rage::NativeInvoke::Invoke<0x2C60BA5D2749BC8B, uint32_t>(p0); } // 2C60BA5D2749BC8B 932FDB81
	static void _0xC45C67030F9898CC(BOOL p0) { rage::NativeInvoke::Invoke<0xC45C67030F9898CC, uint32_t>(p0); } // C45C67030F9898CC 7E946E87
	static void REQUEST_STREAMED_TEXTURE_DICT(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x685EB3667D702B92, uint32_t>(p0, p1); } // 685EB3667D702B92 4C9B035F
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x031920D7070131373, BOOL>(p0); } // 031920D7070131373 3F436EEF
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uint32_t *p0) { rage::NativeInvoke::Invoke<0xB6A951E6C2922F87, uint32_t>(p0); } // B6A951E6C2922F87 F07DDA38
	static void DRAW_RECT(float p0, float p1, float p2, float p3, int p4, int p5, int p6, int p7) { rage::NativeInvoke::Invoke<0x545012F14516B7DC, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 545012F14516B7DC DD2BFC77
	static void _0xED73E1F1A255F54E(BOOL p0) { rage::NativeInvoke::Invoke<0xED73E1F1A255F54E, uint32_t>(p0); } // ED73E1F1A255F54E F8FBCC25
	static void _0x70F78D7490C1013(uint32_t p0) { rage::NativeInvoke::Invoke<0x70F78D7490C1013, uint32_t>(p0); } // 70F78D7490C1013 ADF81D24
	static void _0xF44A12A4047C7C0C(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF44A12A4047C7C0C, uint32_t>(p0, p1); } // F44A12A4047C7C0C 228A2598
	static void _0x5B8A72A0C65F3377() { rage::NativeInvoke::Invoke<0x5B8A72A0C65F3377, uint32_t>(); } // 5B8A72A0C65F3377 3FE33BD6
	static void _0xBC1C1140DB6D4E5C(float p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0xBC1C1140DB6D4E5C, uint32_t>(p0, p1, p2, p3); } // BC1C1140DB6D4E5C 76C641E4
	static void _0x21734E5EF7E6EAD2(float p0, float p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x21734E5EF7E6EAD2, uint32_t>(p0, p1, p2, p3); } // 21734E5EF7E6EAD2
	static float _0x50136A6732A35B54() { return rage::NativeInvoke::Invoke<0x50136A6732A35B54, float>(); } // 50136A6732A35B54 3F0D1A6F
	static void DRAW_SPRITE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10) { rage::NativeInvoke::Invoke<0x23546A353B2D8470, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 23546A353B2D8470 1FEC16B0
	static uint32_t ADD_ENTITY_ICON(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xA50BB1E007C49DB6, uint32_t>(p0, p1); } // A50BB1E007C49DB6 F3027D21
	static void SET_ENTITY_ICON_VISIBILITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x20589A84B2681072, uint32_t>(p0, p1); } // 20589A84B2681072 D1D2FD52
	static void SET_ENTITY_ICON_COLOR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x1F298A2384ADC13C, uint32_t>(p0, p1, p2, p3, p4); } // 1F298A2384ADC13C 6EE1E946
	static void SET_DRAW_ORIGIN(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x45D4D211A74BF155, uint32_t>(p0, p1, p2, p3); } // 45D4D211A74BF155 E10198D5
	static void CLEAR_DRAW_ORIGIN() { rage::NativeInvoke::Invoke<0x246AE65A8A3953B0, uint32_t>(); } // 246AE65A8A3953B0 DD76B263
	static void ATTACH_TV_AUDIO_TO_ENTITY(uint32_t p0) { rage::NativeInvoke::Invoke<0xEA75A8248D29A0B1, uint32_t>(p0); } // EA75A8248D29A0B1 784944DB
	static void SET_TV_AUDIO_FRONTEND(BOOL p0) { rage::NativeInvoke::Invoke<0x56923E4D0D3E587, uint32_t>(p0); } // 56923E4D0D3E587 2E0DFA35
	static uint32_t LOAD_MOVIE_MESH_SET(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC63DE9DBF1142552, uint32_t>(p0); } // C63DE9DBF1142552 9627905C
	static void RELEASE_MOVIE_MESH_SET(uint32_t p0) { rage::NativeInvoke::Invoke<0x8EC9D969ACC9F81E, uint32_t>(p0); } // 8EC9D969ACC9F81E 4FA5501D
	static uint32_t _0x8EE113F661600791(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8EE113F661600791, uint32_t>(p0); } // 8EE113F661600791 9D5D9B38
	static void GET_SCREEN_RESOLUTION(int *p0, int *p1) { rage::NativeInvoke::Invoke<0xF11D9F31BB92168A, uint32_t>(p0, p1); } // F11D9F31BB92168A 29F3572F
	static float _0x22DC4083586C59ED() { return rage::NativeInvoke::Invoke<0x22DC4083586C59ED, float>(); } // 22DC4083586C59ED
	static BOOL GET_IS_WIDESCREEN() { return rage::NativeInvoke::Invoke<0xF10900B9F5120CA, BOOL>(); } // F10900B9F5120CA EC717AEF
	static BOOL GET_IS_HIDEF() { return rage::NativeInvoke::Invoke<0x48D3C3F34328B8BB, BOOL>(); } // 48D3C3F34328B8BB 1C340359
	static void SET_NIGHTVISION(BOOL p0) { rage::NativeInvoke::Invoke<0xF53D5E6CD565E923, uint32_t>(p0); } // F53D5E6CD565E923 D1E5565F
	static uint32_t _0x3B38C9E2CD147710() { return rage::NativeInvoke::Invoke<0x3B38C9E2CD147710, uint32_t>(); } // 3B38C9E2CD147710 62619061
	static void _0x1DCF56A472637FD(BOOL p0) { rage::NativeInvoke::Invoke<0x1DCF56A472637FD, uint32_t>(p0); } // 1DCF56A472637FD
	static void SET_NOISEOVERIDE(BOOL p0) { rage::NativeInvoke::Invoke<0x7014A901C58C99A7, uint32_t>(p0); } // 7014A901C58C99A7 D576F5DD
	static void SET_NOISINESSOVERIDE(float p0) { rage::NativeInvoke::Invoke<0x45648205B6DBF7FA, uint32_t>(p0); } // 45648205B6DBF7FA 046B62D9
	static BOOL _0xDB39618306E15461(float p0, float p1, float p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xDB39618306E15461, BOOL>(p0, p1, p2, p3, p4); } // DB39618306E15461 1F950E4B
	static Vector3 GET_TEXTURE_RESOLUTION(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x63A8F87EFE6A0289, Vector3>(p0, p1); } // 63A8F87EFE6A0289 096DAA4D
	static void _0x9CF34E9211C26211(float p0) { rage::NativeInvoke::Invoke<0x9CF34E9211C26211, uint32_t>(p0); } // 9CF34E9211C26211 455F1084
	static void SET_FLASH(float p0, float p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x0A923D2134B4FAF96, uint32_t>(p0, p1, p2, p3, p4); } // 0A923D2134B4FAF96 7E55A1EE
	static void _0x9C5F776D213D0667() { rage::NativeInvoke::Invoke<0x9C5F776D213D0667, uint32_t>(); } // 9C5F776D213D0667 0DCC0B8B
	static void _0x66DC587849288AAD(BOOL p0) { rage::NativeInvoke::Invoke<0x66DC587849288AAD, uint32_t>(p0); } // 66DC587849288AAD AA2A0EAF
	static uint32_t CREATE_TRACKED_POINT() { return rage::NativeInvoke::Invoke<0xF93F5137D30B83C5, uint32_t>(); } // F93F5137D30B83C5 3129C31A
	static void SET_TRACKED_POINT_INFO(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x66B44E3DC3B17FC3, uint32_t>(p0, p1, p2, p3, p4); } // 66B44E3DC3B17FC3 28689AA4
	static uint32_t IS_TRACKED_POINT_VISIBLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4F18063187932928, uint32_t>(p0); } // 4F18063187932928 0BFC4F64
	static void DESTROY_TRACKED_POINT(uint32_t p0) { rage::NativeInvoke::Invoke<0x4E170D2FB0D218D0, uint32_t>(p0); } // 4E170D2FB0D218D0 14AC675F
	static uint32_t _0xE3F4EDF18E6D3135(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xE3F4EDF18E6D3135, uint32_t>(p0, p1, p2, p3); } // E3F4EDF18E6D3135
	static void _0x9F4CF92F8CA02D68(uint32_t p0) { rage::NativeInvoke::Invoke<0x9F4CF92F8CA02D68, uint32_t>(p0); } // 9F4CF92F8CA02D68
	static void _0x69F2920076C65EBA(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x69F2920076C65EBA, uint32_t>(p0, p1, p2, p3, p4); } // 69F2920076C65EBA
	static void _0x17E93DCAD08898DE(uint32_t p0) { rage::NativeInvoke::Invoke<0x17E93DCAD08898DE, uint32_t>(p0); } // 17E93DCAD08898DE
	static void _0x477790818E316E6E() { rage::NativeInvoke::Invoke<0x477790818E316E6E, uint32_t>(); } // 477790818E316E6E
	static void _0x0A14F583527F01AE4() { rage::NativeInvoke::Invoke<0x0A14F583527F01AE4, uint32_t>(); } // 0A14F583527F01AE4
	static void _0xA3C8CE0F5A70F7B3() { rage::NativeInvoke::Invoke<0xA3C8CE0F5A70F7B3, uint32_t>(); } // A3C8CE0F5A70F7B3
	static void _0x8A6378AFB48BCE3A() { rage::NativeInvoke::Invoke<0x8A6378AFB48BCE3A, uint32_t>(); } // 8A6378AFB48BCE3A
	static void _0x31EA28546239EB62(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x31EA28546239EB62, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 31EA28546239EB62
	static void _0x1A15797D7222B9D0() { rage::NativeInvoke::Invoke<0x1A15797D7222B9D0, uint32_t>(); } // 1A15797D7222B9D0
	static void _0x056D29F96CA2CFAC2() { rage::NativeInvoke::Invoke<0x056D29F96CA2CFAC2, uint32_t>(); } // 056D29F96CA2CFAC2 48F16186
	static void _0x91B48F84D0BA74F4(float p0) { rage::NativeInvoke::Invoke<0x91B48F84D0BA74F4, uint32_t>(p0); } // 91B48F84D0BA74F4 13D4ABC0
	static void _0x2F7B7F11BFA91858(float p0) { rage::NativeInvoke::Invoke<0x2F7B7F11BFA91858, uint32_t>(p0); } // 2F7B7F11BFA91858 D2157428
	static void _0x5136348C9D261DE9(float p0) { rage::NativeInvoke::Invoke<0x5136348C9D261DE9, uint32_t>(p0); } // 5136348C9D261DE9 C07C64C9
	static void _0xDA6A2AC41AC1A31(BOOL p0) { rage::NativeInvoke::Invoke<0xDA6A2AC41AC1A31, uint32_t>(p0); } // DA6A2AC41AC1A31 FE903D0F
	static void _0x73B5CB51D47B2FC2(BOOL p0) { rage::NativeInvoke::Invoke<0x73B5CB51D47B2FC2, uint32_t>(p0); } // 73B5CB51D47B2FC2
	static void _0x5A899C81470E0A8B(uint32_t *p0) { rage::NativeInvoke::Invoke<0x5A899C81470E0A8B, uint32_t>(p0); } // 5A899C81470E0A8B DE10BA1F
	static void _0x9EC66FB007926486() { rage::NativeInvoke::Invoke<0x9EC66FB007926486, uint32_t>(); } // 9EC66FB007926486
	static void _0xB97C35D1E3075527(BOOL p0) { rage::NativeInvoke::Invoke<0xB97C35D1E3075527, uint32_t>(p0); } // B97C35D1E3075527 9F470BE3
	static void _0x2A8F1AD08719510B(BOOL p0) { rage::NativeInvoke::Invoke<0x2A8F1AD08719510B, uint32_t>(p0); } // 2A8F1AD08719510B 4A124267
	static void _0x088E2A0798E62EE30(float p0) { rage::NativeInvoke::Invoke<0x088E2A0798E62EE30, uint32_t>(p0); } // 088E2A0798E62EE30 B19B2764
	static void _0x01BC45407BA383C04(BOOL p0) { rage::NativeInvoke::Invoke<0x01BC45407BA383C04, uint32_t>(p0); } // 01BC45407BA383C04 342FA2B4
	static void _0x473F5BAF845F059F(BOOL p0) { rage::NativeInvoke::Invoke<0x473F5BAF845F059F, uint32_t>(p0); } // 473F5BAF845F059F 5D3BFFC9
	static void _0x9417BA52DA2D514(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { rage::NativeInvoke::Invoke<0x9417BA52DA2D514, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 9417BA52DA2D514 D9653728
	static void _0xCF6213ACDC45391C(float p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xCF6213ACDC45391C, uint32_t>(p0, p1, p2); } // CF6213ACDC45391C 72BA8A14
	static void _0x39A32BF6ADF18776(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x39A32BF6ADF18776, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 39A32BF6ADF18776 804F444C
	static void _0xE2279CC67FF94F4D(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE2279CC67FF94F4D, uint32_t>(p0, p1); } // E2279CC67FF94F4D BB1A1294
	static void _0x338298CD25420E76(BOOL p0) { rage::NativeInvoke::Invoke<0x338298CD25420E76, uint32_t>(p0); } // 338298CD25420E76 1A1A72EF
	static void _0xB468C1E2C1B10752(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { rage::NativeInvoke::Invoke<0xB468C1E2C1B10752, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // B468C1E2C1B10752 3BB12B75
	static void _0x38ED63CBE2605429(float p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x38ED63CBE2605429, uint32_t>(p0, p1, p2, p3, p4); } // 38ED63CBE2605429 4EA70FB4
	static void _0x0E431BB222891DA4B(BOOL p0) { rage::NativeInvoke::Invoke<0x0E431BB222891DA4B, uint32_t>(p0); } // 0E431BB222891DA4B 0D830DC7
	static float _0x8F7D0A20AA4AB6D8() { return rage::NativeInvoke::Invoke<0x8F7D0A20AA4AB6D8, float>(); } // 8F7D0A20AA4AB6D8 A08B46AD
	static Vector3 _0xB7776811D2BB4130(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB7776811D2BB4130, Vector3>(p0); } // B7776811D2BB4130 ECD470F0
	static void SET_SEETHROUGH(BOOL p0) { rage::NativeInvoke::Invoke<0xF3598251A407E6CC, uint32_t>(p0); } // F3598251A407E6CC 74D4995C
	static uint32_t _0x2A1D41D4A54FCF77() { return rage::NativeInvoke::Invoke<0x2A1D41D4A54FCF77, uint32_t>(); } // 2A1D41D4A54FCF77 1FE547F2
	static void _0xB2CBFE353440CF17(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xB2CBFE353440CF17, uint32_t>(p0, p1); } // B2CBFE353440CF17 654F0287
	static void _0xAB7EEF3EB27804E3(float p0) { rage::NativeInvoke::Invoke<0xAB7EEF3EB27804E3, uint32_t>(p0); } // AB7EEF3EB27804E3 F6B837F0
	static float _0x862C769A6453B034() { return rage::NativeInvoke::Invoke<0x862C769A6453B034, float>(); } // 862C769A6453B034 D906A3A9
	static void _0x6D3924BD726B8F3E(BOOL p0) { rage::NativeInvoke::Invoke<0x6D3924BD726B8F3E, uint32_t>(p0); } // 6D3924BD726B8F3E D34A6CBA
	static void _0xDD3B62EEE458AF30(uint32_t p0) { rage::NativeInvoke::Invoke<0xDD3B62EEE458AF30, uint32_t>(p0); } // DD3B62EEE458AF30 D8CC7221
	static BOOL _0x6B7FB6A615559EA(float p0) { return rage::NativeInvoke::Invoke<0x6B7FB6A615559EA, BOOL>(p0); } // 6B7FB6A615559EA 5604B890
	static BOOL _0x3970ED8539C5C98D(float p0) { return rage::NativeInvoke::Invoke<0x3970ED8539C5C98D, BOOL>(p0); } // 3970ED8539C5C98D 46617502
	static void _0x72976CDDA1F5BCEE() { rage::NativeInvoke::Invoke<0x72976CDDA1F5BCEE, uint32_t>(); } // 72976CDDA1F5BCEE DB7AECDA
	static float IS_PARTICLE_FX_DELAYED_BLINK() { return rage::NativeInvoke::Invoke<0xD611F2C9075F679D, float>(); } // D611F2C9075F679D EA432A94
	static BOOL _0x7626713868831C3F() { return rage::NativeInvoke::Invoke<0x7626713868831C3F, BOOL>(); } // 7626713868831C3F 926B8734
	static void _0x897404EB55F42812(BOOL p0) { rage::NativeInvoke::Invoke<0x897404EB55F42812, uint32_t>(p0); } // 897404EB55F42812 30ADE541
	static uint32_t _0xFAA55C2BB8498905() { return rage::NativeInvoke::Invoke<0xFAA55C2BB8498905, uint32_t>(); } // FAA55C2BB8498905
	static void _0x5A9FD1B70064B323() { rage::NativeInvoke::Invoke<0x5A9FD1B70064B323, uint32_t>(); } // 5A9FD1B70064B323 0113EAE4
	static void _0x9BB1107705A05418() { rage::NativeInvoke::Invoke<0x9BB1107705A05418, uint32_t>(); } // 9BB1107705A05418 DCBA251B
	static void _0x773732DA9B0D7CF8(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) { rage::NativeInvoke::Invoke<0x773732DA9B0D7CF8, uint32_t>(p0, p1, p2, p3, p4, p5); } // 773732DA9B0D7CF8 513D444B
	static BOOL _0x7BACFCD96F9E7AF4(BOOL p0) { return rage::NativeInvoke::Invoke<0x7BACFCD96F9E7AF4, BOOL>(p0); } // 7BACFCD96F9E7AF4 B2410EAB
	static uint32_t _0x2D37C1B5BFC1B3D1() { return rage::NativeInvoke::Invoke<0x2D37C1B5BFC1B3D1, uint32_t>(); } // 2D37C1B5BFC1B3D1 5AB94128
	static BOOL _0x769682944C6C19BF(const char *p0, BOOL p1) { return rage::NativeInvoke::Invoke<0x769682944C6C19BF, BOOL>(p0, p1); } // 769682944C6C19BF D63FCB3E
	static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char *p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9, BOOL p10) { return rage::NativeInvoke::Invoke<0x6F50EB359FDCCDEF, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 6F50EB359FDCCDEF DD79D679
	static uint32_t START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(uint32_t *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, BOOL p10, BOOL p11, BOOL p12) { return rage::NativeInvoke::Invoke<0x034FFC11E8AD10E0E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 034FFC11E8AD10E0E 53DAEF4E
	static uint32_t _0xEE231315BC96A10D(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, BOOL p10, BOOL p11, BOOL p12) { return rage::NativeInvoke::Invoke<0xEE231315BC96A10D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // EE231315BC96A10D 161780C1
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10, BOOL p11) { return rage::NativeInvoke::Invoke<0x08BCDEA8221B6D08A, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 08BCDEA8221B6D08A 9604DAD4
	static void _0x4A6FD8BBD9FD972C(float p0, float p1, float p2) { rage::NativeInvoke::Invoke<0x4A6FD8BBD9FD972C, uint32_t>(p0, p1, p2); } // 4A6FD8BBD9FD972C 7B689E20
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float p0) { rage::NativeInvoke::Invoke<0x59DA99BF43B66385, uint32_t>(p0); } // 59DA99BF43B66385 497EAFF2
	static void _0xBEC45683E225C647(BOOL p0) { rage::NativeInvoke::Invoke<0xBEC45683E225C647, uint32_t>(p0); } // BEC45683E225C647
	static uint32_t START_PARTICLE_FX_LOOPED_AT_COORD(const char *p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { return rage::NativeInvoke::Invoke<0x3F2250BCCDDD976F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 3F2250BCCDDD976F D348E3E6
	static uint32_t START_PARTICLE_FX_LOOPED_ON_PED_BONE(uint32_t *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, BOOL p10, BOOL p11, BOOL p12) { return rage::NativeInvoke::Invoke<0x90FEA1BBBFEF166B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 90FEA1BBBFEF166B F8FC196F
	static uint32_t START_PARTICLE_FX_LOOPED_ON_ENTITY(uint32_t *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10, BOOL p11) { return rage::NativeInvoke::Invoke<0xB9B1EE085AEABF71, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // B9B1EE085AEABF71 0D06FF62
	static uint32_t _0x707FE98E507B694(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, BOOL p10, BOOL p11, BOOL p12) { return rage::NativeInvoke::Invoke<0x707FE98E507B694, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 707FE98E507B694
	static uint32_t _0xE343AFB41847074(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10, BOOL p11) { return rage::NativeInvoke::Invoke<0xE343AFB41847074, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // E343AFB41847074 110752B2
	static uint32_t _0x93C35F05B9681A93(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, BOOL p10, BOOL p11, BOOL p12) { return rage::NativeInvoke::Invoke<0x93C35F05B9681A93, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 93C35F05B9681A93
	static void STOP_PARTICLE_FX_LOOPED(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9F5923D000431FF4, uint32_t>(p0, p1); } // 9F5923D000431FF4 D245455B
	static void REMOVE_PARTICLE_FX(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x931F7A629AC7E1A4, uint32_t>(p0, p1); } // 931F7A629AC7E1A4 6BA48C7E
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(uint32_t p0) { rage::NativeInvoke::Invoke<0xE1D0EA3F43D19F6A, uint32_t>(p0); } // E1D0EA3F43D19F6A CEDE52E9
	static void REMOVE_PARTICLE_FX_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xAC2FF55967985A8, uint32_t>(p0, p1, p2, p3); } // AC2FF55967985A8 7EB8F275
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0xED36ED704A7BADAF, BOOL>(p0); } // ED36ED704A7BADAF CBF91D2A
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x6E729891A97DE, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 6E729891A97DE 641F7790
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x64FF112E4261C4A8, uint32_t>(p0, p1, p2); } // 64FF112E4261C4A8 1CBC1373
	static void SET_PARTICLE_FX_LOOPED_COLOUR(uint32_t p0, float p1, float p2, float p3, BOOL p4) { rage::NativeInvoke::Invoke<0x66EF66FAA0B87448, uint32_t>(p0, p1, p2, p3, p4); } // 66EF66FAA0B87448 5219D530
	static void SET_PARTICLE_FX_LOOPED_ALPHA(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x6735033F50C34C82, uint32_t>(p0, p1); } // 6735033F50C34C82 5ED49BE1
	static void SET_PARTICLE_FX_LOOPED_SCALE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x28C5B36109EFBE55, uint32_t>(p0, p1); } // 28C5B36109EFBE55 099B8B49
	static void _0x8C0266B536F279D(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x8C0266B536F279D, uint32_t>(p0, p1); } // 8C0266B536F279D 233DE879
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { rage::NativeInvoke::Invoke<0xBFA7DD5BAA27D9E3, uint32_t>(p0); } // BFA7DD5BAA27D9E3 19EC0001
	static void _0x85E9D5AA8BE92173(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x85E9D5AA8BE92173, uint32_t>(p0, p1); } // 85E9D5AA8BE92173 6B125A02
	static void _0x83DA0F8A9E99AD65(uint32_t p0) { rage::NativeInvoke::Invoke<0x83DA0F8A9E99AD65, uint32_t>(p0); } // 83DA0F8A9E99AD65 D938DEE0
	static void SET_PARTICLE_FX_BLOOD_SCALE(BOOL p0) { rage::NativeInvoke::Invoke<0xDAA2E8C54920A61F, uint32_t>(p0); } // DAA2E8C54920A61F 18136DE0
	static void SET_CAMERA_ENDTIME(BOOL p0) { rage::NativeInvoke::Invoke<0xD768E81B28C868BD, uint32_t>(p0); } // D768E81B28C868BD C61C75E9
	static void _0x89E7B07DF6088B7D(BOOL p0) { rage::NativeInvoke::Invoke<0x89E7B07DF6088B7D, uint32_t>(p0); } // 89E7B07DF6088B7D CE8B8748
	static void _0x8A19D1A60FF04CD7(float p0) { rage::NativeInvoke::Invoke<0x8A19D1A60FF04CD7, uint32_t>(p0); } // 8A19D1A60FF04CD7
	static void _0x2E55EFBF3E8D4A36(float p0) { rage::NativeInvoke::Invoke<0x2E55EFBF3E8D4A36, uint32_t>(p0); } // 2E55EFBF3E8D4A36
	static void _0x36F57E2F58DC1A37(BOOL p0) { rage::NativeInvoke::Invoke<0x36F57E2F58DC1A37, uint32_t>(p0); } // 36F57E2F58DC1A37
	static void _0x717748748FFF89F1(float p0) { rage::NativeInvoke::Invoke<0x717748748FFF89F1, uint32_t>(p0); } // 717748748FFF89F1
	static void _SET_PTFX_LOAD_NAME(const char* name) { rage::NativeInvoke::Invoke<0x0C1A9BB4AB4377D0, uint32_t>(name); } // 0D88972E26984A04F
  static void _UNSET_PTFX_LOAD_NAME(const char* name) { rage::NativeInvoke::Invoke<0x9E60644385B460EE, uint32_t>(name); } // 9E60644385B460EE
  static void _LOAD_PARTICLE_UNKNOWN(const char* name) { rage::NativeInvoke::Invoke<0x5563A0D3F621412B, uint32_t>(name); } // 0D88972E26984A04F
  static void _UNLOAD_PARTICLE_UNKNOWN(const char* name) { rage::NativeInvoke::Invoke<0x0D54912F6B2C5CA0C, uint32_t>(name); } // 9E60644385B460EE
	static void _0xE6A6C88CD85E3A42(BOOL p0) { rage::NativeInvoke::Invoke<0xE6A6C88CD85E3A42, uint32_t>(p0); } // E6A6C88CD85E3A42
	static void _0xC1A9BB4AB4377D0(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC1A9BB4AB4377D0, uint32_t>(p0); } // C1A9BB4AB4377D0
	static void WASH_DECALS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xC1923CD2A99ABE71, uint32_t>(p0, p1, p2, p3, p4); } // C1923CD2A99ABE71 DEECBC57
	static void WASH_DECALS_FROM_VEHICLE(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x309AD43ED9007CA9, uint32_t>(p0, p1); } // 309AD43ED9007CA9 2929F11A
	static void FADE_DECALS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x544A537C48F4AD84, uint32_t>(p0, p1, p2, p3, p4); } // 544A537C48F4AD84 F81E884A
	static void REMOVE_DECALS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x52DD7CA48EBAB1F0, uint32_t>(p0, p1, p2, p3); } // 52DD7CA48EBAB1F0 06A619A0
	static void REMOVE_DECALS_FROM_OBJECT(uint32_t p0) { rage::NativeInvoke::Invoke<0x4C626D7AE9FC890D, uint32_t>(p0); } // 4C626D7AE9FC890D 8B67DCA7
	static void REMOVE_DECALS_FROM_OBJECT_FACING(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x2A70A4E31BF96773, uint32_t>(p0, p1, p2, p3); } // 2A70A4E31BF96773 F4999A55
	static void REMOVE_DECALS_FROM_VEHICLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xB64C52C36E05C792, uint32_t>(p0); } // B64C52C36E05C792 831D06CA
	static uint32_t ADD_DECAL(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, BOOL p17, BOOL p18, BOOL p19) { return rage::NativeInvoke::Invoke<0xD98C0AB608C86922, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } // D98C0AB608C86922 EAD0C412
	static uint32_t ADD_PETROL_DECAL(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x254E324F4284B60A, uint32_t>(p0, p1, p2, p3, p4, p5); } // 254E324F4284B60A 1259DF42
	static void _0x428DE4537BEF6973(float p0) { rage::NativeInvoke::Invoke<0x428DE4537BEF6973, uint32_t>(p0); } // 428DE4537BEF6973 E3938B0B
	static void _0xD4CEB3D43940A591(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xD4CEB3D43940A591, uint32_t>(p0, p1, p2, p3); } // D4CEB3D43940A591 BAEC6ADD
	static void SET_CAMERA_CAMERA_FORWARD() { rage::NativeInvoke::Invoke<0x098A1AE467F832B08, uint32_t>(); } // 098A1AE467F832B08 CCCA6855
	static void REMOVE_DECAL(uint32_t p0) { rage::NativeInvoke::Invoke<0xCC74D3FECA1F299D, uint32_t>(p0); } // CC74D3FECA1F299D A4363188
	static BOOL IS_DECAL_ALIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2E77ECAB357FA4D, BOOL>(p0); } // 2E77ECAB357FA4D CDD4A61A
	static float GET_DECAL_WASH_LEVEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE2A7A6BC8C694EE2, float>(p0); } // E2A7A6BC8C694EE2 054448EF
	static void _0xCCD2DC0354F10F8C() { rage::NativeInvoke::Invoke<0xCCD2DC0354F10F8C, uint32_t>(); } // CCD2DC0354F10F8C EAB6417C
	static void _0xD6DEA917AA2BD0E5() { rage::NativeInvoke::Invoke<0xD6DEA917AA2BD0E5, uint32_t>(); } // D6DEA917AA2BD0E5 C2703B88
	static void _0x91D6E7068525D028() { rage::NativeInvoke::Invoke<0x91D6E7068525D028, uint32_t>(); } // 91D6E7068525D028 A706E84D
	static BOOL _0xEECD6636717FFA3(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0xEECD6636717FFA3, BOOL>(p0, p1, p2, p3); } // EECD6636717FFA3 242C6A04
	static void _0x867E767515A4AAAC(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x867E767515A4AAAC, uint32_t>(p0, p1, p2); } // 867E767515A4AAAC 335695CF
	static void _0xBA584655AC23D805(uint32_t p0) { rage::NativeInvoke::Invoke<0xBA584655AC23D805, uint32_t>(p0); } // BA584655AC23D805 7B786555
	static void MOVE_VEHICLE_DECALS(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCD4C1D99D7DAEF08, uint32_t>(p0, p1); } // CD4C1D99D7DAEF08 CE9E6CF2
	static BOOL _0x6D704D5FBB4AFE38(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13) { return rage::NativeInvoke::Invoke<0x6D704D5FBB4AFE38, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 6D704D5FBB4AFE38 12077738
	static void _0xA3682A5845B969C(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xA3682A5845B969C, uint32_t>(p0, p1); } // A3682A5845B969C 667046A8
	static uint32_t _0x19973CB8923CD353(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x19973CB8923CD353, uint32_t>(p0, p1); } // 19973CB8923CD353 4F4D76E8
	static BOOL _0x0C0D8A6AB4509755B(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0C0D8A6AB4509755B, BOOL>(p0, p1); } // 0C0D8A6AB4509755B 6D58F73B
	static void _0x0CFE00B7A6C55BB77(BOOL p0) { rage::NativeInvoke::Invoke<0x0CFE00B7A6C55BB77, uint32_t>(p0); } // 0CFE00B7A6C55BB77 9BABCBA4
	static void _0x08997DA0100418A1E(BOOL p0) { rage::NativeInvoke::Invoke<0x08997DA0100418A1E, uint32_t>(p0); } // 08997DA0100418A1E FDF6D8DA
	static void _0xC1E7E02CAF4DEC8(float p0) { rage::NativeInvoke::Invoke<0xC1E7E02CAF4DEC8, uint32_t>(p0); } // C1E7E02CAF4DEC8 2056A015
	static void _0x11E961581C60D206(uint32_t *p0) { rage::NativeInvoke::Invoke<0x11E961581C60D206, uint32_t>(p0); } // 11E961581C60D206 0F486429
	static void _0xA7E6D3CA2BA14E7A(float p0) { rage::NativeInvoke::Invoke<0xA7E6D3CA2BA14E7A, uint32_t>(p0); } // A7E6D3CA2BA14E7A D87CC710
	static void _0x6AE3A65448553ED8() { rage::NativeInvoke::Invoke<0x6AE3A65448553ED8, uint32_t>(); } // 6AE3A65448553ED8 E29EE145
	static void _0xBC99126059F136FA() { rage::NativeInvoke::Invoke<0xBC99126059F136FA, uint32_t>(); } // BC99126059F136FA
	static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL p0) { rage::NativeInvoke::Invoke<0xF0DCFEF97D7E124A, uint32_t>(p0); } // F0DCFEF97D7E124A 7CFAE36F
	static void _0x0E1EF6D0D0D911196(BOOL p0) { rage::NativeInvoke::Invoke<0x0E1EF6D0D0D911196, uint32_t>(p0); } // 0E1EF6D0D0D911196 60F72371
	static void SET_TIMECYCLE_MODIFIER(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC268078730F02686, uint32_t>(p0); } // C268078730F02686 A81F3638
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float p0) { rage::NativeInvoke::Invoke<0x7181761BD8C2E2A2, uint32_t>(p0); } // 7181761BD8C2E2A2 458F4F45
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0x3D579EE31E433B6B, uint32_t>(p0, p1); } // 3D579EE31E433B6B BB2BA72A
	static void _0x47C3E4FCF4BD1E53(float p0) { rage::NativeInvoke::Invoke<0x47C3E4FCF4BD1E53, uint32_t>(p0); } // 47C3E4FCF4BD1E53 56345F6B
	static void CLEAR_TIMECYCLE_MODIFIER() { rage::NativeInvoke::Invoke<0x08611FA16C57B4195, uint32_t>(); } // 08611FA16C57B4195 8D8DF8EE
	static uint32_t GET_TIMECYCLE_MODIFIER_INDEX() { return rage::NativeInvoke::Invoke<0xEF9CD83E2E2816E8, uint32_t>(); } // EF9CD83E2E2816E8 594FEEC4
	static uint32_t _0x91796810B25FDA18() { return rage::NativeInvoke::Invoke<0x91796810B25FDA18, uint32_t>(); } // 91796810B25FDA18 03C44E4B
	static void PUSH_TIMECYCLE_MODIFIER() { rage::NativeInvoke::Invoke<0xC9DA17E17450CDFC, uint32_t>(); } // C9DA17E17450CDFC 7E082045
	static void POP_TIMECYCLE_MODIFIER() { rage::NativeInvoke::Invoke<0x4A9054971CD84A59, uint32_t>(); } // 4A9054971CD84A59 79D7D235
	static void _0xD47995175D08C7DE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xD47995175D08C7DE, uint32_t>(p0); } // D47995175D08C7DE 85BA15A4
	static void _0x35475C55E4B25340(float p0) { rage::NativeInvoke::Invoke<0x35475C55E4B25340, uint32_t>(p0); } // 35475C55E4B25340 9559BB38
	static void _0x4C1B01F11BFDF31E(uint32_t *p0) { rage::NativeInvoke::Invoke<0x4C1B01F11BFDF31E, uint32_t>(p0); } // 4C1B01F11BFDF31E 554BA16E
	static void _0x4AF1E079B1DD4247(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x4AF1E079B1DD4247, uint32_t>(p0, p1); } // 4AF1E079B1DD4247 E8F538B5
	static void _0xB0B9362C6F11C7E8(uint32_t p0) { rage::NativeInvoke::Invoke<0xB0B9362C6F11C7E8, uint32_t>(p0); } // B0B9362C6F11C7E8 805BAB08
	static void _0x22E16589E5408EEE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x22E16589E5408EEE, uint32_t>(p0); } // 22E16589E5408EEE 908A335E
	static void _0x3914030D50832501() { rage::NativeInvoke::Invoke<0x3914030D50832501, uint32_t>(); } // 3914030D50832501 6776720A
	static uint32_t _0xE1E8A673840DB547() { return rage::NativeInvoke::Invoke<0xE1E8A673840DB547, uint32_t>(); } // E1E8A673840DB547
	static void _0xF229F818FB224DAF() { rage::NativeInvoke::Invoke<0xF229F818FB224DAF, uint32_t>(); } // F229F818FB224DAF
	static uint32_t REQUEST_SCALEFORM_MOVIE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xAFBDE0BB5C885026, uint32_t>(p0); } // AFBDE0BB5C885026 C67E3DCB
	static uint32_t _0x7B272A68AB32BF92(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x7B272A68AB32BF92, uint32_t>(p0); } // 7B272A68AB32BF92 7CC8057D
	static uint32_t _0x9DC03E762A3D8DF0(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x9DC03E762A3D8DF0, uint32_t>(p0); } // 9DC03E762A3D8DF0
	static BOOL HAS_SCALEFORM_MOVIE_LOADED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE908465F9CDF4F1A, BOOL>(p0); } // E908465F9CDF4F1A DDFB6448
	static BOOL _0x3BFDC6E1F211D4FC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3BFDC6E1F211D4FC, BOOL>(p0); } // 3BFDC6E1F211D4FC 1DFE8D8A
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uint32_t *p0) { rage::NativeInvoke::Invoke<0x86FF04BBB2EC839F, uint32_t>(p0); } // 86FF04BBB2EC839F 5FED3BA1
	static void _0xFB7B0F31E496578D(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xFB7B0F31E496578D, uint32_t>(p0, p1); } // FB7B0F31E496578D 18C9DE8D
	static void DRAW_SCALEFORM_MOVIE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { rage::NativeInvoke::Invoke<0x12C58B789779AA4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 12C58B789779AA4 48DA6A58
	static void _0x04A383EC377D451D0(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x04A383EC377D451D0, uint32_t>(p0, p1, p2, p3, p4); } // 04A383EC377D451D0 7B48E696
	static void _0x884A1FA977CF411B(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x884A1FA977CF411B, uint32_t>(p0, p1, p2, p3, p4, p5); } // 884A1FA977CF411B 9C59FC06
	static void _0xA21979D200F559D2(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13) { rage::NativeInvoke::Invoke<0xA21979D200F559D2, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // A21979D200F559D2 C4F63A89
	static void _0x1FA28ED3F8C3A456(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13) { rage::NativeInvoke::Invoke<0x1FA28ED3F8C3A456, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 1FA28ED3F8C3A456 899933C8
	static void _0xBEEABE099826EB55(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xBEEABE099826EB55, uint32_t>(p0, p1); } // BEEABE099826EB55 7AB77B57
	static void _0xD4BDFD69787F80FD(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6) { rage::NativeInvoke::Invoke<0xD4BDFD69787F80FD, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // D4BDFD69787F80FD 557EDA1D
	static void _0x938962836F025CE2(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6) { rage::NativeInvoke::Invoke<0x938962836F025CE2, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 938962836F025CE2 91A7FCEB
	static void _0x22D1B33BDEBAE74A(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, uint32_t *p7, uint32_t *p8, uint32_t *p9, uint32_t *p10, uint32_t *p11) { rage::NativeInvoke::Invoke<0x22D1B33BDEBAE74A, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 22D1B33BDEBAE74A 6EAF56DE
	static BOOL _0x94719DC00506C475(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x94719DC00506C475, BOOL>(p0, p1); } // 94719DC00506C475 5D66CE1E
	static BOOL _0xF48C88BD1F0007E8(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xF48C88BD1F0007E8, BOOL>(p0, p1); } // F48C88BD1F0007E8 215ABBE8
	static BOOL _0xEDAB0C586C602260(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xEDAB0C586C602260, BOOL>(p0); } // EDAB0C586C602260 F6015178
	static BOOL _0x9C73B76A7F2108DC(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x9C73B76A7F2108DC, BOOL>(p0); } // 9C73B76A7F2108DC 5E219B67
	static void _0xA52FC2467E672B55() { rage::NativeInvoke::Invoke<0xA52FC2467E672B55, uint32_t>(); } // A52FC2467E672B55 02DBF2D7
	static uint32_t _0xD72C1C0D4A044A4() { return rage::NativeInvoke::Invoke<0xD72C1C0D4A044A4, uint32_t>(); } // D72C1C0D4A044A4 2F38B526
	static BOOL _0xEB72DB563C7B7566(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEB72DB563C7B7566, BOOL>(p0); } // EB72DB563C7B7566 5CD7C3C0
	static uint32_t _0x88AE9F0292C2B117(uint32_t p0) { return rage::NativeInvoke::Invoke<0x88AE9F0292C2B117, uint32_t>(p0); } // 88AE9F0292C2B117 2CFB0E6D
	static uint32_t SITTING_TV(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD6A92EF117E06539, uint32_t>(p0); } // D6A92EF117E06539 516862EB
	static void _0x876C5D0739031E15(uint32_t p0) { rage::NativeInvoke::Invoke<0x876C5D0739031E15, uint32_t>(p0); } // 876C5D0739031E15 716777CB
	static void _0xA8F7908868900538(float p0) { rage::NativeInvoke::Invoke<0xA8F7908868900538, uint32_t>(p0); } // A8F7908868900538 9A01FFDA
	static void _0x5D559A5DDC88A4EF(BOOL p0) { rage::NativeInvoke::Invoke<0x5D559A5DDC88A4EF, uint32_t>(p0); } // 5D559A5DDC88A4EF 0D4AE8CB
	static void _0x44F4D219F8513945(uint32_t *p0) { rage::NativeInvoke::Invoke<0x44F4D219F8513945, uint32_t>(p0); } // 44F4D219F8513945 3AC9CB55
	static void _0x113A6F657EE871A3() { rage::NativeInvoke::Invoke<0x113A6F657EE871A3, uint32_t>(); } // 113A6F657EE871A3 386CE0B8
	static void _0xA4B4710FEB8225B8() { rage::NativeInvoke::Invoke<0xA4B4710FEB8225B8, uint32_t>(); } // A4B4710FEB8225B8 2E80DB52
	static void _0x66576E79B8E81B87(uint32_t *p0) { rage::NativeInvoke::Invoke<0x66576E79B8E81B87, uint32_t>(p0); } // 66576E79B8E81B87 4DAAD55B
	static void _0x3F8884039D21AA69(uint32_t *p0) { rage::NativeInvoke::Invoke<0x3F8884039D21AA69, uint32_t>(p0); } // 3F8884039D21AA69 CCBF0334
	static uint32_t _0xC6C1199D410DB606(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC6C1199D410DB606, uint32_t>(p0); } // C6C1199D410DB606 91A081A1
	static void _0x7FAE23EFF35AC4FF(uint32_t p0) { rage::NativeInvoke::Invoke<0x7FAE23EFF35AC4FF, uint32_t>(p0); } // 7FAE23EFF35AC4FF 83A9811D
	static void _0xB8D2A401C3795A5D(uint32_t p0) { rage::NativeInvoke::Invoke<0xB8D2A401C3795A5D, uint32_t>(p0); } // B8D2A401C3795A5D 7AF85862
	static BOOL _0x6D7831B570D0478A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6D7831B570D0478A, BOOL>(p0); } // 6D7831B570D0478A 79B43255
	static void _0xDE4DF525E7DE1DF3(uint32_t p0) { rage::NativeInvoke::Invoke<0xDE4DF525E7DE1DF3, uint32_t>(p0); } // DE4DF525E7DE1DF3 03D87600
	static BOOL _0x72EF585C87482B92(uint32_t p0) { return rage::NativeInvoke::Invoke<0x72EF585C87482B92, BOOL>(p0); } // 72EF585C87482B92 E9183D3A
	static void SET_TV_CHANNEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x43A7A48748D1849, uint32_t>(p0); } // 43A7A48748D1849 41A8A627
	static uint32_t GET_TV_CHANNEL() { return rage::NativeInvoke::Invoke<0x621284AC8FD0C295, uint32_t>(); } // 621284AC8FD0C295 6B96145A
	static void SET_TV_VOLUME(float p0) { rage::NativeInvoke::Invoke<0xBC6BBC64C712F62D, uint32_t>(p0); } // BC6BBC64C712F62D F3504F4D
	static float GET_TV_VOLUME() { return rage::NativeInvoke::Invoke<0x75C910F11FAF0EB6, float>(); } // 75C910F11FAF0EB6 39555CF0
	static void DRAW_TV_CHANNEL(float p0, float p1, float p2, float p3, float p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { rage::NativeInvoke::Invoke<0x22530A75D2E66DB1, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 22530A75D2E66DB1 8129EF89
	static void _0x918AE8F31DECBA85(uint32_t p0, uint32_t *p1, BOOL p2) { rage::NativeInvoke::Invoke<0x918AE8F31DECBA85, uint32_t>(p0, p1, p2); } // 918AE8F31DECBA85 B262DE67
	static void _0x438AB20BC279B4E0(uint32_t p0, uint32_t *p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x438AB20BC279B4E0, uint32_t>(p0, p1, p2); } // 438AB20BC279B4E0 78C4DCBE
	static void _0x3CCD7CC885F83482(uint32_t p0) { rage::NativeInvoke::Invoke<0x3CCD7CC885F83482, uint32_t>(p0); } // 3CCD7CC885F83482 CBE7068F
	static BOOL _0x02100B583656B11C8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x02100B583656B11C8, BOOL>(p0); } // 02100B583656B11C8 4D1EB0FB
	static void _0xE82FD3DEBA285AFC(BOOL p0) { rage::NativeInvoke::Invoke<0xE82FD3DEBA285AFC, uint32_t>(p0); } // E82FD3DEBA285AFC 796DE696
	static void _0xF522BE2842DE4AF0(uint32_t p0) { rage::NativeInvoke::Invoke<0xF522BE2842DE4AF0, uint32_t>(p0); } // F522BE2842DE4AF0 D99EC000
	static void ENABLE_MOVIE_SUBTITLES(BOOL p0) { rage::NativeInvoke::Invoke<0xC756F1367BF62795, uint32_t>(p0); } // C756F1367BF62795 C2DEBA3D
	static uint32_t _0xF7E6D453CC7FACAE() { return rage::NativeInvoke::Invoke<0xF7E6D453CC7FACAE, uint32_t>(); } // F7E6D453CC7FACAE E40A0F1A
	static BOOL _0x91EF294588FCE8E0(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x91EF294588FCE8E0, BOOL>(p0); } // 91EF294588FCE8E0 2E7D9B98
	static BOOL _0x2B5B5F84E7AD6B74(uint32_t *p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x2B5B5F84E7AD6B74, BOOL>(p0, p1, p2, p3, p4, p5); } // 2B5B5F84E7AD6B74 9A0E3BFE
	static void _0x1F2A7C118177358F() { rage::NativeInvoke::Invoke<0x1F2A7C118177358F, uint32_t>(); } // 1F2A7C118177358F 431AA036
	static void _0xE5B2F1E0B6F2E6B3(BOOL p0) { rage::NativeInvoke::Invoke<0xE5B2F1E0B6F2E6B3, uint32_t>(p0); } // E5B2F1E0B6F2E6B3 24A7A7F6
	static void _0x64E376505E694B48(BOOL p0) { rage::NativeInvoke::Invoke<0x64E376505E694B48, uint32_t>(p0); } // 64E376505E694B48 A1CB6C94
	static void _0x33BB639B6F03CAFB(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { rage::NativeInvoke::Invoke<0x33BB639B6F03CAFB, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 33BB639B6F03CAFB 3B637AA7
	static void _0x9D6913AE50BA9388(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { rage::NativeInvoke::Invoke<0x9D6913AE50BA9388, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 9D6913AE50BA9388 DF552973
	static void _0x8EEEED91D5DD768C(uint32_t *p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x8EEEED91D5DD768C, uint32_t>(p0, p1, p2); } // 8EEEED91D5DD768C 1D980479
	static void _0x033D978A3F3EC8BD3(uint32_t *p0) { rage::NativeInvoke::Invoke<0x033D978A3F3EC8BD3, uint32_t>(p0); } // 033D978A3F3EC8BD3 06BB5CDA
	static BOOL _0x683A2D790A3425CE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x683A2D790A3425CE, BOOL>(p0); } // 683A2D790A3425CE 089D5921
	static void _0xA18B52A0F825A53B() { rage::NativeInvoke::Invoke<0xA18B52A0F825A53B, uint32_t>(); } // A18B52A0F825A53B 4E6D875B
	static void _0x2BE09E3760E51B64(uint32_t *p0) { rage::NativeInvoke::Invoke<0x2BE09E3760E51B64, uint32_t>(p0); } // 2BE09E3760E51B64
}

namespace STATS
{
	static uint32_t _0x93A68856243C04FA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x93A68856243C04FA, uint32_t>(p0); } // 93A68856243C04FA 84BDD475
	static BOOL STAT_LOAD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEE0CC2818C0729A1, BOOL>(p0); } // EE0CC2818C0729A1 9E5629F4
	static BOOL STAT_SAVE(uint32_t p0, BOOL p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x79AABEA86A46061, BOOL>(p0, p1, p2); } // 79AABEA86A46061 E10A7CA4
	static void _0x6332B422EDEB0AB0(uint32_t p0) { rage::NativeInvoke::Invoke<0x6332B422EDEB0AB0, uint32_t>(p0); } // 6332B422EDEB0AB0 C62406A6
	static BOOL STAT_LOAD_PENDING(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD162360BA6A2DAEA, BOOL>(p0); } // D162360BA6A2DAEA 4E9AC983
	static BOOL STAT_SAVE_PENDING() { return rage::NativeInvoke::Invoke<0xBEF35FC226ED9FD7, BOOL>(); } // BEF35FC226ED9FD7 C3FD3822
	static BOOL _0x4B51F5CEBD70DA94() { return rage::NativeInvoke::Invoke<0x4B51F5CEBD70DA94, BOOL>(); } // 4B51F5CEBD70DA94 A3407CA3
	static uint32_t STAT_DELETE_SLOT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x82B7369F7580459B, uint32_t>(p0); } // 82B7369F7580459B 2F171B94
	static BOOL _0x0E802DF20297BD521(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0E802DF20297BD521, BOOL>(p0); } // 0E802DF20297BD521 7A299C13
	static BOOL _0xF12A3702A73212B2(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF12A3702A73212B2, BOOL>(p0); } // F12A3702A73212B2 0BF0F4B2
	static uint32_t _0x25950CA14ECAECB1(uint32_t p0) { return rage::NativeInvoke::Invoke<0x25950CA14ECAECB1, uint32_t>(p0); } // 25950CA14ECAECB1 CE6B62B5
	static void _0x78D662AF7CFC00FF(BOOL p0) { rage::NativeInvoke::Invoke<0x78D662AF7CFC00FF, uint32_t>(p0); } // 78D662AF7CFC00FF CE7A2411
	static BOOL _0x671894F2EE31046E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x671894F2EE31046E, BOOL>(p0); } // 671894F2EE31046E 22804C20
	static void _0xACB4E33710F34876(uint32_t p0) { rage::NativeInvoke::Invoke<0xACB4E33710F34876, uint32_t>(p0); } // ACB4E33710F34876 395D18B1
	static BOOL _0x247C2938F7556B5F() { return rage::NativeInvoke::Invoke<0x247C2938F7556B5F, BOOL>(); } // 247C2938F7556B5F ED7000C8
	static void _0x450DD8560E441064() { rage::NativeInvoke::Invoke<0x450DD8560E441064, uint32_t>(); } // 450DD8560E441064
	static BOOL _0x4DA0D5B6BC9AB602() { return rage::NativeInvoke::Invoke<0x4DA0D5B6BC9AB602, BOOL>(); } // 4DA0D5B6BC9AB602 099FCC86
	static BOOL STAT_SET_INT(uint32_t p0, BOOL p2) { return rage::NativeInvoke::Invoke<0x96B68C67633472DC, BOOL>(p0, p2); } // 96B68C67633472DC C9CC1C5C
	static BOOL STAT_SET_FLOAT(uint32_t p0, float p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xCD9157C8F655290A, BOOL>(p0, p1, p2); } // CD9157C8F655290A 6CEA96F2
	static BOOL STAT_SET_BOOL(uint32_t p0, BOOL p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xD51A9EE025576399, BOOL>(p0, p1, p2); } // D51A9EE025576399 55D79DFB
	static BOOL _0x7FC6BDA12A4C63F5(uint32_t p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x7FC6BDA12A4C63F5, BOOL>(p0, p1, p2); } // 7FC6BDA12A4C63F5 C1224AA7
	static BOOL STAT_SET_DATE(uint32_t p0, uint32_t *p1, uint32_t p2, BOOL p3) { return rage::NativeInvoke::Invoke<0xFBBF733157EE9ABE, BOOL>(p0, p1, p2, p3); } // FBBF733157EE9ABE 36BE807B
	static BOOL STAT_SET_STRING(uint32_t p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x44311DAE17F82AA1, BOOL>(p0, p1, p2); } // 44311DAE17F82AA1 B1EF2E21
	static BOOL STAT_SET_POS(uint32_t p0, float p1, float p2, float p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x129A478A35CEE900, BOOL>(p0, p1, p2, p3, p4); } // 129A478A35CEE900 1192C9A3
	static BOOL STAT_SET_MASKED_INT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, BOOL p4) { return rage::NativeInvoke::Invoke<0xCA2BAAAF7DD1138A, BOOL>(p0, p1, p2, p3, p4); } // CA2BAAAF7DD1138A 2CBAA739
	static BOOL STAT_SET_USER_ID(uint32_t p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xE2F55E0885F36EDE, BOOL>(p0, p1, p2); } // E2F55E0885F36EDE DBE78ED7
	static BOOL _0xE58D5A26147E8CDD(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xE58D5A26147E8CDD, BOOL>(p0, p1); } // E58D5A26147E8CDD A286F015
	static BOOL STAT_GET_INT(uint32_t p0, int *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x55FFE396AA3CA77A, BOOL>(p0, p1, p2); } // 55FFE396AA3CA77A 1C6FE43E
	static BOOL STAT_GET_FLOAT(uint32_t p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x3E6ED0C6CF9AA077, BOOL>(p0, p1, p2); } // 3E6ED0C6CF9AA077 FCBDA612
	static BOOL STAT_GET_BOOL(uint32_t p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xED5C4CADD81A8853, BOOL>(p0, p1, p2); } // ED5C4CADD81A8853 28A3DD2B
	static BOOL STAT_GET_DATE(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x8CD6BCAFEE2BEE66, BOOL>(p0, p1, p2, p3); } // 8CD6BCAFEE2BEE66 D762D16C
	static uint32_t STAT_GET_STRING(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x219F85A5D3B5A223, uint32_t>(p0, p1); } // 219F85A5D3B5A223 10CE4BDE
	static BOOL STAT_GET_POS(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0x418ABA8839451A73, BOOL>(p0, p1, p2, p3, p4); } // 418ABA8839451A73 C846ECCE
	static BOOL STAT_GET_MASKED_INT(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xCA43B0981764D75A, BOOL>(p0, p1, p2, p3, p4); } // CA43B0981764D75A E9D9B70F
	static uint32_t STAT_GET_USER_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCABB8E92ADFFD687, uint32_t>(p0); } // CABB8E92ADFFD687 E2E8B6BA
	static uint32_t _0xE4AE97D0D3BF8D6C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE4AE97D0D3BF8D6C, uint32_t>(p0); } // E4AE97D0D3BF8D6C 1544B29F
	static BOOL _0xC9A14C1BB83E798A(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xC9A14C1BB83E798A, BOOL>(p0, p1); } // C9A14C1BB83E798A 3507D253
	static void STAT_INCREMENT(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x2849EC95E9D69392, uint32_t>(p0, p1); } // 2849EC95E9D69392 DFC5F71E
	static BOOL _0xB6BC25F70A121E9() { return rage::NativeInvoke::Invoke<0xB6BC25F70A121E9, BOOL>(); } // B6BC25F70A121E9 46F21343
	static BOOL _0x4D4FA6DD490DB8D9() { return rage::NativeInvoke::Invoke<0x4D4FA6DD490DB8D9, BOOL>(); } // 4D4FA6DD490DB8D9 02F283CE
	static BOOL _0x17BA71D18F6461AA(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x17BA71D18F6461AA, BOOL>(p0, p1, p2); } // 17BA71D18F6461AA C4110917
	static void _0x2D5C7C5557AC5890(uint32_t p0) { rage::NativeInvoke::Invoke<0x2D5C7C5557AC5890, uint32_t>(p0); } // 2D5C7C5557AC5890 343B27E2
	static void _0x831353F1F40A097C(uint32_t p0) { rage::NativeInvoke::Invoke<0x831353F1F40A097C, uint32_t>(p0); } // 831353F1F40A097C E3247582
	static uint32_t _0x2E2EDB3B1CA99DB(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2E2EDB3B1CA99DB, uint32_t>(p0); } // 2E2EDB3B1CA99DB FD66A429
	static uint32_t _0xC33F84241C8331EF(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC33F84241C8331EF, uint32_t>(p0); } // C33F84241C8331EF 9B431236
	static uint32_t _0x903E709719C0C924(uint32_t p0) { return rage::NativeInvoke::Invoke<0x903E709719C0C924, uint32_t>(p0); } // 903E709719C0C924 347B4436
	static uint32_t _0x7977CBB09204D3E3(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7977CBB09204D3E3, uint32_t>(p0); } // 7977CBB09204D3E3 2C1D6C31
	static void _0x440FD8D333B6B64E(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x440FD8D333B6B64E, uint32_t>(p0, p1); } // 440FD8D333B6B64E 24DD4929
	static uint32_t _0x3216D1FFC9DAD41E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3216D1FFC9DAD41E, uint32_t>(p0); } // 3216D1FFC9DAD41E DFC25D66
	static uint32_t _0xB5F1DB483A55394A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB5F1DB483A55394A, uint32_t>(p0); } // B5F1DB483A55394A CA160BCC
	static uint32_t _0xA207790667DAE5A1(uint32_t p0, BOOL p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xA207790667DAE5A1, uint32_t>(p0, p1, p2, p3); } // A207790667DAE5A1 B5BF87B2
	static uint32_t _0xB5B79ECD20995F7D(uint32_t p0, BOOL p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xB5B79ECD20995F7D, uint32_t>(p0, p1, p2, p3); } // B5B79ECD20995F7D 1F938864
	static uint32_t _0x2E32FF1D139F1210(uint32_t p0, BOOL p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x2E32FF1D139F1210, uint32_t>(p0, p1, p2, p3); } // 2E32FF1D139F1210 3F8E893B
	static uint32_t _0x367FBA1BA3ED6492(uint32_t p0, BOOL p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x367FBA1BA3ED6492, uint32_t>(p0, p1, p2, p3); } // 367FBA1BA3ED6492 FB93C5A2
	static BOOL STAT_GET_BOOL_MASKED(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x5C2F5514FB69DABE, BOOL>(p0, p1, p2); } // 5C2F5514FB69DABE 6ACE1B7D
	static BOOL STAT_SET_BOOL_MASKED(uint32_t p0, BOOL p1, uint32_t p2, BOOL p3) { return rage::NativeInvoke::Invoke<0x3F6A3CBDC7B68B4A, BOOL>(p0, p1, p2, p3); } // 3F6A3CBDC7B68B4A 7842C4D6
	static void _0x42A9C5CCDC86E4D0(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x42A9C5CCDC86E4D0, uint32_t>(p0, p1); } // 42A9C5CCDC86E4D0 61ECC465
	static void PLAYSTATS_NPC_INVITE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x1B8B3CE5AD7F14DB, uint32_t>(p0); } // 1B8B3CE5AD7F14DB 598C06F3
	static void PLAYSTATS_AWARD_XP(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x3568096DB3FEBF97, uint32_t>(p0, p1, p2); } // 3568096DB3FEBF97 8770017B
	static void PLAYSTATS_RANK_UP(uint32_t p0) { rage::NativeInvoke::Invoke<0xFCC9E561041E87F3, uint32_t>(p0); } // FCC9E561041E87F3 56AFB9F5
	static void _0x0E9C8BC02F2BC010A() { rage::NativeInvoke::Invoke<0x0E9C8BC02F2BC010A, uint32_t>(); } // 0E9C8BC02F2BC010A 896CDF8D
	static void _0x53B471E359546EFA(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x53B471E359546EFA, uint32_t>(p0, p1); } // 53B471E359546EFA 1A66945F
	static void _0x5ED2509A037BCB27(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x5ED2509A037BCB27, uint32_t>(p0, p1, p2, p3, p4); } // 5ED2509A037BCB27 C960E161
	static void PLAYSTATS_MISSION_STARTED(uint32_t *p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0x45BDED4C92C7BED2, uint32_t>(p0, p1, p2, p3); } // 45BDED4C92C7BED2 3AAB699C
	static void PLAYSTATS_MISSION_OVER(uint32_t *p0, uint32_t p1, uint32_t p2, BOOL p3, BOOL p4, BOOL p5) { rage::NativeInvoke::Invoke<0xA5DD6D136099F892, uint32_t>(p0, p1, p2, p3, p4, p5); } // A5DD6D136099F892 5B90B5FF
	static void PLAYSTATS_MISSION_CHECKPOINT(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xE608EEE8E0ECC590, uint32_t>(p0, p1, p2, p3); } // E608EEE8E0ECC590 CDC52280
	static void _0x7D8C98CDE178AB1B(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x7D8C98CDE178AB1B, uint32_t>(p0, p1, p2, p3); } // 7D8C98CDE178AB1B AC2C7C63
	static void _0x2E5A2019426D5BD5(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { rage::NativeInvoke::Invoke<0x2E5A2019426D5BD5, uint32_t>(p0, p1, p2, p3); } // 2E5A2019426D5BD5 413539BC
	static void PLAYSTATS_RACE_CHECKPOINT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x68917B1E78815D1D, uint32_t>(p0, p1, p2, p3, p4); } // 68917B1E78815D1D 580D5508
	static BOOL _0x2B1B2E96D0A31F96(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x2B1B2E96D0A31F96, BOOL>(p0, p1); } // 2B1B2E96D0A31F96 489E27E7
	static void PLAYSTATS_MATCH_STARTED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x48A0E2120E6C39F3, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 48A0E2120E6C39F3 2BDE85C1
	static void PLAYSTATS_SHOP_ITEM(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x5C0519B01EF5DAC9, uint32_t>(p0, p1, p2, p3, p4); } // 5C0519B01EF5DAC9 A4746384
	static void _0x87046317100E22FB(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x87046317100E22FB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 87046317100E22FB 6602CED6
	static void _0x2A3D782737F77576(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x2A3D782737F77576, uint32_t>(p0, p1, p2, p3); } // 2A3D782737F77576 759E0EC9
	static void _0x251C2AEE344B797(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x251C2AEE344B797, uint32_t>(p0, p1, p2, p3); } // 251C2AEE344B797 62073DF7
	static void _0x7CD0D54A2E0DE26E(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x7CD0D54A2E0DE26E, uint32_t>(p0, p1, p2); } // 7CD0D54A2E0DE26E 30558CFD
	static void _0x65107341C7C72344(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x65107341C7C72344, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 65107341C7C72344 06CE3692
	static void _0xC90C6CA3A1F613FC(uint32_t p0) { rage::NativeInvoke::Invoke<0xC90C6CA3A1F613FC, uint32_t>(p0); } // C90C6CA3A1F613FC 8D5C7B37
	static void _0x70E9569CCCC899FA(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x70E9569CCCC899FA, uint32_t>(p0, p1); } // 70E9569CCCC899FA 37D152BB
	static void PLAYSTATS_FRIEND_ACTIVITY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x0996AAE283A2A8195, uint32_t>(p0, p1); } // 0996AAE283A2A8195 D1FA1BDB
	static void PLAYSTATS_ODDJOB_DONE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x1B7A159B4B9FCB71, uint32_t>(p0, p1, p2); } // 1B7A159B4B9FCB71 FE14A8EA
	static void PLAYSTATS_PROP_CHANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0xF3E810922950FE10, uint32_t>(p0, p1, p2, p3); } // F3E810922950FE10 25740A1D
	static void PLAYSTATS_CLOTH_CHANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xFE9732FB3A3FB268, uint32_t>(p0, p1, p2, p3, p4); } // FE9732FB3A3FB268 3AFF9E58
	static void _0x6FB4C72F8D7410F7(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x6FB4C72F8D7410F7, uint32_t>(p0, p1, p2); } // 6FB4C72F8D7410F7 79716890
	static void PLAYSTATS_CHEAT_APPLIED(uint32_t *p0) { rage::NativeInvoke::Invoke<0x7CECFE2848241F2, uint32_t>(p0); } // 7CECFE2848241F2 345166F3
	static void _0x7E9EACA5CA053C2F(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x7E9EACA5CA053C2F, uint32_t>(p0, p1, p2, p3); } // 7E9EACA5CA053C2F 04181752
	static void _0x5BE345AC9B290FAA(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0x5BE345AC9B290FAA, uint32_t>(p0, p1, p2, p3); } // 5BE345AC9B290FAA 31002201
	static void _0xA0CB50CD87976698(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0xA0CB50CD87976698, uint32_t>(p0, p1, p2, p3); } // A0CB50CD87976698 DDD1F1F3
	static void _0x4E0B2BF0674F5668(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x4E0B2BF0674F5668, uint32_t>(p0, p1); } // 4E0B2BF0674F5668 66FEB701
	static void _0xAC10EBACFAE00D6B(uint32_t p0) { rage::NativeInvoke::Invoke<0xAC10EBACFAE00D6B, uint32_t>(p0); } // AC10EBACFAE00D6B 9E2B9522
	static uint32_t LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x58EE4806AFD82775, uint32_t>(p0, p1); } // 58EE4806AFD82775 0A56EE34
	static uint32_t LEADERBOARDS_GET_COLUMN_ID(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x7A57F3BB7EF76571, uint32_t>(p0, p1, p2); } // 7A57F3BB7EF76571 3821A334
	static uint32_t LEADERBOARDS_GET_COLUMN_TYPE(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x7799F677CAF2C5F4, uint32_t>(p0, p1, p2); } // 7799F677CAF2C5F4 6F2820F4
	static uint32_t LEADERBOARDS_READ_CLEAR_ALL() { return rage::NativeInvoke::Invoke<0xC06FEC2AD5C285E5, uint32_t>(); } // C06FEC2AD5C285E5 233E058A
	static uint32_t LEADERBOARDS_READ_CLEAR(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x3A33388C03E8340C, uint32_t>(p0, p1, p2); } // 3A33388C03E8340C 7090012F
	static BOOL LEADERBOARDS_READ_PENDING(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x35CC2C6A1658C995, BOOL>(p0, p1, p2); } // 35CC2C6A1658C995 EEB8BF5C
	static BOOL _0xFF6D2DA74F295C25() { return rage::NativeInvoke::Invoke<0xFF6D2DA74F295C25, BOOL>(); } // FF6D2DA74F295C25 1789437B
	static BOOL LEADERBOARDS_READ_SUCCESSFUL(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xD1FDB4A1469503ED, BOOL>(p0, p1, p2); } // D1FDB4A1469503ED 3AC5B2F1
	static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(uint32_t *p0, uint32_t *p1, uint32_t p2, BOOL p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x918B101666F9CB83, BOOL>(p0, p1, p2, p3, p4, p5); } // 918B101666F9CB83 BD91B136
	static BOOL LEADERBOARDS2_READ_BY_HANDLE(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x3702CC70B5362A08, BOOL>(p0, p1); } // 3702CC70B5362A08 6B553408
	static BOOL LEADERBOARDS2_READ_BY_ROW(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, uint32_t p4, uint32_t *p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0xA9CDB1E3F0A49883, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // A9CDB1E3F0A49883 CA931F34
	static BOOL LEADERBOARDS2_READ_BY_RANK(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xA7757C96E72775B6, BOOL>(p0, p1, p2); } // A7757C96E72775B6 1B03F59F
	static BOOL LEADERBOARDS2_READ_BY_RADIUS(uint32_t *p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x3EB47927EDFE17C1, BOOL>(p0, p1, p2); } // 3EB47927EDFE17C1 C5B7E685
	static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x7B312103F427CF62, BOOL>(p0, p1, p2); } // 7B312103F427CF62 AC020C18
	static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(uint32_t *p0, float p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x4EA947E118DEB421, BOOL>(p0, p1, p2); } // 4EA947E118DEB421 C678B29F
	static BOOL _0x40DBF7B821CC7547(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x40DBF7B821CC7547, BOOL>(p0, p1, p2); } // 40DBF7B821CC7547 9BEC3401
	static BOOL _0xC03FD60C2003FE6D(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC03FD60C2003FE6D, BOOL>(p0); } // C03FD60C2003FE6D C977D6E2
	static void _0xCCA089DEAB09CC79() { rage::NativeInvoke::Invoke<0xCCA089DEAB09CC79, uint32_t>(); } // CCA089DEAB09CC79 F2DB6A82
	static BOOL _0xA7C4FDD87B044F2A(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xA7C4FDD87B044F2A, BOOL>(p0, p1); } // A7C4FDD87B044F2A 766A74FE
	static uint32_t _0x7CAEE5BB9B752C91(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x7CAEE5BB9B752C91, uint32_t>(p0, p1); } // 7CAEE5BB9B752C91 6B90E730
	static float _0xF424952424F0F373(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF424952424F0F373, float>(p0, p1); } // F424952424F0F373 509A286F
	static BOOL LEADERBOARDS2_WRITE_DATA(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xF742066C63650FC1, BOOL>(p0); } // F742066C63650FC1 5F9DF634
	static void _0x0D01F5BCE1469E115(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0x0D01F5BCE1469E115, uint32_t>(p0, p1, p2); } // 0D01F5BCE1469E115 7524E27B
	static void _0x18C84767C4F08A7F(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x18C84767C4F08A7F, uint32_t>(p0, p1, p2); } // 18C84767C4F08A7F 1C5CCC3A
	static BOOL LEADERBOARDS_CACHE_DATA_ROW(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x219BD298A8A924D8, BOOL>(p0); } // 219BD298A8A924D8 44F7D82B
	static void LEADERBOARDS_CLEAR_CACHE_DATA() { rage::NativeInvoke::Invoke<0x1889384E08F6E7EA, uint32_t>(); } // 1889384E08F6E7EA 87F498C1
	static void _0x95255F44EB97B2D3(uint32_t p0) { rage::NativeInvoke::Invoke<0x95255F44EB97B2D3, uint32_t>(p0); } // 95255F44EB97B2D3 88AE9667
	static BOOL LEADERBOARDS_GET_CACHE_EXISTS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6C286FA043711C53, BOOL>(p0); } // 6C286FA043711C53 FC8A71F3
	static uint32_t LEADERBOARDS_GET_CACHE_TIME(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4B96B5ED065290BB, uint32_t>(p0); } // 4B96B5ED065290BB EDF02302
	static uint32_t _0xB2A318D4D5940F58(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB2A318D4D5940F58, uint32_t>(p0); } // B2A318D4D5940F58 CE7CB520
	static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xB6BDC9E1A1C3E62C, BOOL>(p0, p1, p2); } // B6BDC9E1A1C3E62C A11289EC
	static void _0x88300116A714168E(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x88300116A714168E, uint32_t>(p0, p1, p2); } // 88300116A714168E 4AC39C6C
	static void _0x2DC85625A709DD07(uint32_t p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x2DC85625A709DD07, uint32_t>(p0, p1, p2); } // 2DC85625A709DD07 3E69E7C3
	static void _0xA272A1759415F33B(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3) { rage::NativeInvoke::Invoke<0xA272A1759415F33B, uint32_t>(p0, p1, p2, p3); } // A272A1759415F33B 2FFD2FA5
	static BOOL _0x79D74854E24F70B7() { return rage::NativeInvoke::Invoke<0x79D74854E24F70B7, BOOL>(); } // 79D74854E24F70B7 23D70C39
	static void _0x23924535B818952E() { rage::NativeInvoke::Invoke<0x23924535B818952E, uint32_t>(); } // 23924535B818952E 0AD43306
	static void _0x7909860CD3EE04B1() { rage::NativeInvoke::Invoke<0x7909860CD3EE04B1, uint32_t>(); } // 7909860CD3EE04B1 C7DE5C30
	static void _0xA9F2D14D7E99ABF5(uint32_t p0) { rage::NativeInvoke::Invoke<0xA9F2D14D7E99ABF5, uint32_t>(p0); } // A9F2D14D7E99ABF5 A3DAC790
	static void _0xB5C5F2B3DB06F95D(uint32_t p0) { rage::NativeInvoke::Invoke<0xB5C5F2B3DB06F95D, uint32_t>(p0); } // B5C5F2B3DB06F95D 726FAE66
	static void _0xE91557824A90159E(uint32_t p0) { rage::NativeInvoke::Invoke<0xE91557824A90159E, uint32_t>(p0); } // E91557824A90159E F03895A4
	static void _0xB486BEEFB518B6B3(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB486BEEFB518B6B3, uint32_t>(p0, p1); } // B486BEEFB518B6B3 4C39CF10
	static void _0x047AAFCA3EF6CC8B8(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x047AAFCA3EF6CC8B8, uint32_t>(p0, p1); } // 047AAFCA3EF6CC8B8 2180AE13
	static void _0x9E6D44FDFA5DF0B6(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0x9E6D44FDFA5DF0B6, uint32_t>(p0, p1); } // 9E6D44FDFA5DF0B6 EE292B91
	static void _0x0C1D4C87F0B074654() { rage::NativeInvoke::Invoke<0x0C1D4C87F0B074654, uint32_t>(); } // 0C1D4C87F0B074654 A063CABD
	static BOOL _0x3D4070D942F47300(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x3D4070D942F47300, BOOL>(p0, p1); } // 3D4070D942F47300 62C19A3D
	static void _0x146793470817E2A6() { rage::NativeInvoke::Invoke<0x146793470817E2A6, uint32_t>(); } // 146793470817E2A6 3B4EF322
	static void _0xE90852AC664DD455() { rage::NativeInvoke::Invoke<0xE90852AC664DD455, uint32_t>(); } // E90852AC664DD455
	static BOOL _0x480A66636EF210BB(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x480A66636EF210BB, BOOL>(p0); } // 480A66636EF210BB
	static uint32_t _0x1788C6FAF16E2FA9() { return rage::NativeInvoke::Invoke<0x1788C6FAF16E2FA9, uint32_t>(); } // 1788C6FAF16E2FA9
	static uint32_t _0x60A81FE9258263B9() { return rage::NativeInvoke::Invoke<0x60A81FE9258263B9, uint32_t>(); } // 60A81FE9258263B9
	static BOOL _0xA8C893F0303A6582() { return rage::NativeInvoke::Invoke<0xA8C893F0303A6582, BOOL>(); } // A8C893F0303A6582
	static uint32_t _0xA2631D828508EF0(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA2631D828508EF0, uint32_t>(p0); } // A2631D828508EF0
	static uint32_t _0x9136C4E887DF9C9B(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x9136C4E887DF9C9B, uint32_t>(p0, p1); } // 9136C4E887DF9C9B
	static BOOL _0xE5D4A9B95B93E1C7() { return rage::NativeInvoke::Invoke<0xE5D4A9B95B93E1C7, BOOL>(); } // E5D4A9B95B93E1C7 54E775E0
	static uint32_t _0x1A03783604001E2B(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x1A03783604001E2B, uint32_t>(p0); } // 1A03783604001E2B E3F0D62D
	static void _0x872F00BA8F3D9A60() { rage::NativeInvoke::Invoke<0x872F00BA8F3D9A60, uint32_t>(); } // 872F00BA8F3D9A60
	static void _0x3B3221684AB5F0FB() { rage::NativeInvoke::Invoke<0x3B3221684AB5F0FB, uint32_t>(); } // 3B3221684AB5F0FB
}

namespace BRAIN
{
	static void ADD_SCRIPT_TO_RANDOM_PED(uint32_t *p0, uint32_t p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0xFE6DB36FC14C573D, uint32_t>(p0, p1, p2, p3); } // FE6DB36FC14C573D ECC76C3D
	static void REGISTER_OBJECT_SCRIPT_BRAIN(uint32_t *p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x066D78CAA38292E75, uint32_t>(p0, p1, p2, p3, p4, p5); } // 066D78CAA38292E75 B6BCC608
	static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDBBE1D10A2F589A7, BOOL>(p0); } // DBBE1D10A2F589A7 BA4CAA56
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(uint32_t *p0, float p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x4CE84E1CCD4720C3, uint32_t>(p0, p1, p2); } // 4CE84E1CCD4720C3 725D91F7
	static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return rage::NativeInvoke::Invoke<0x3BCCCFB165E15A65, BOOL>(); } // 3BCCCFB165E15A65 2CF305A0
	static void ENABLE_SCRIPT_BRAIN_SET(uint32_t p0) { rage::NativeInvoke::Invoke<0x3696C889B162F611, uint32_t>(p0); } // 3696C889B162F611 2765919F
	static void DISABLE_SCRIPT_BRAIN_SET(uint32_t p0) { rage::NativeInvoke::Invoke<0xC4F1F647D0C3EFC2, uint32_t>(p0); } // C4F1F647D0C3EFC2 FBD13FAD
	static void _0x0B6A7F9E7B567BA80() { rage::NativeInvoke::Invoke<0x0B6A7F9E7B567BA80, uint32_t>(); } // 0B6A7F9E7B567BA80 19B27825
	static void _0xAF1D44121BD120EF() { rage::NativeInvoke::Invoke<0xAF1D44121BD120EF, uint32_t>(); } // AF1D44121BD120EF F3A3AB08
	static void _0x89A307800AC22308(uint32_t *p0) { rage::NativeInvoke::Invoke<0x89A307800AC22308, uint32_t>(p0); } // 89A307800AC22308 949FE53E
	static void _0xA8AD4EA8635F3C1F(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA8AD4EA8635F3C1F, uint32_t>(p0); } // A8AD4EA8635F3C1F 29CE8BAA
}

namespace MOBILE
{
	static void CREATE_MOBILE_PHONE(uint32_t p0) { rage::NativeInvoke::Invoke<0x91619E4FDBEF8436, uint32_t>(p0); } // 91619E4FDBEF8436 5BBC5E23
	static void DESTROY_MOBILE_PHONE() { rage::NativeInvoke::Invoke<0x8F8805B248CD5B1F, uint32_t>(); } // 8F8805B248CD5B1F 1A65037B
	static void SET_MOBILE_PHONE_SCALE(float p0) { rage::NativeInvoke::Invoke<0xC59170A87C7F8BAA, uint32_t>(p0); } // C59170A87C7F8BAA 09BCF1BE
	static void SET_MOBILE_PHONE_ROTATION(float p0, float p1, float p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x21D2105CA1483300, uint32_t>(p0, p1, p2, p3); } // 21D2105CA1483300 209C28CF
	static void GET_MOBILE_PHONE_ROTATION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x8FF29DE8F4EBF419, uint32_t>(p0, p1); } // 8FF29DE8F4EBF419 17A29F23
	static void SET_MOBILE_PHONE_POSITION(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x22FDA9F8AE4DE11C, uint32_t>(p0, p1, p2); } // 22FDA9F8AE4DE11C 841800B3
	static void GET_MOBILE_PHONE_POSITION(uint32_t p0) { rage::NativeInvoke::Invoke<0x483F49444BC10CD1, uint32_t>(p0); } // 483F49444BC10CD1 B2E1E1A0
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL p0) { rage::NativeInvoke::Invoke<0x3AF342428160A447, uint32_t>(p0); } // 3AF342428160A447 29828690
	static uint32_t CAN_PHONE_BE_SEEN_ON_SCREEN() { return rage::NativeInvoke::Invoke<0x350C8497AED6EB6C, uint32_t>(); } // 350C8497AED6EB6C 5F978584
	static void _0xD3370B46DD5E27B0(uint32_t p0) { rage::NativeInvoke::Invoke<0xD3370B46DD5E27B0, uint32_t>(p0); } // D3370B46DD5E27B0
	static void _0xC69D5A5AF2C9F93D(BOOL p0) { rage::NativeInvoke::Invoke<0xC69D5A5AF2C9F93D, uint32_t>(p0); } // C69D5A5AF2C9F93D
	static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0xED2CDEF8B45664D, uint32_t>(p0, p1); } // ED2CDEF8B45664D 234C1AE9
	static void _0x09AA406ACF3A1D2B9(BOOL p0) { rage::NativeInvoke::Invoke<0x09AA406ACF3A1D2B9, uint32_t>(p0); } // 09AA406ACF3A1D2B9 4479B304
	static void _0xAA9D747402357C45(BOOL p0) { rage::NativeInvoke::Invoke<0xAA9D747402357C45, uint32_t>(p0); } // AA9D747402357C45 C273BB4D
	static void _0x73754E8E47EF8F9E(float p0) { rage::NativeInvoke::Invoke<0x73754E8E47EF8F9E, uint32_t>(p0); } // 73754E8E47EF8F9E
	static void _0x409A00BE617B6F2(float p0) { rage::NativeInvoke::Invoke<0x409A00BE617B6F2, uint32_t>(p0); } // 409A00BE617B6F2
	static void _0xF8545DBAF6FC3DC8(float p0) { rage::NativeInvoke::Invoke<0xF8545DBAF6FC3DC8, uint32_t>(p0); } // F8545DBAF6FC3DC8
	static void _0xACA62DD3FAB78014(float p0) { rage::NativeInvoke::Invoke<0xACA62DD3FAB78014, uint32_t>(p0); } // ACA62DD3FAB78014
	static void _0x28881257C25DDCA7(float p0) { rage::NativeInvoke::Invoke<0x28881257C25DDCA7, uint32_t>(p0); } // 28881257C25DDCA7
	static void _0x13C1497FF29F2CC(float p0) { rage::NativeInvoke::Invoke<0x13C1497FF29F2CC, uint32_t>(p0); } // 13C1497FF29F2CC
	static void _0x11C550F0F4303BA7(float p0) { rage::NativeInvoke::Invoke<0x11C550F0F4303BA7, uint32_t>(p0); } // 11C550F0F4303BA7
	static void _0x771E4741BA8ABCA6(float p0) { rage::NativeInvoke::Invoke<0x771E4741BA8ABCA6, uint32_t>(p0); } // 771E4741BA8ABCA6 66DCD9D2
	static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBECFD8F397FC0300, BOOL>(p0); } // BECFD8F397FC0300 BEA88097
	static void GET_MOBILE_PHONE_RENDER_ID(uint32_t *p0) { rage::NativeInvoke::Invoke<0x662829E4D24DCE5D, uint32_t>(p0); } // 662829E4D24DCE5D 88E4FECE
}

namespace APP
{
	static BOOL APP_DATA_VALID() { return rage::NativeInvoke::Invoke<0xCA73A01756217EC9, BOOL>(); } // CA73A01756217EC9 72BDE002
	static uint32_t APP_GET_INT(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x70C6EACA983B6FF3, uint32_t>(p0); } // 70C6EACA983B6FF3 2942AAD2
	static float APP_GET_FLOAT(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xFEBCD98364B9719F, float>(p0); } // FEBCD98364B9719F D87F3A1C
	static uint32_t APP_GET_STRING(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC4BD4C66A4C26679, uint32_t>(p0); } // C4BD4C66A4C26679 849CEB80
	static void APP_SET_INT(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB4E2418AF8C44161, uint32_t>(p0, p1); } // B4E2418AF8C44161 1B509C32
	static void APP_SET_FLOAT(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xF77F7449AA188390, uint32_t>(p0, p1); } // F77F7449AA188390 F3076135
	static void APP_SET_STRING(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xA8E05C460762609D, uint32_t>(p0, p1); } // A8E05C460762609D 23DF19A8
	static void APP_SET_APP(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC5C78229AFEE6823, uint32_t>(p0); } // C5C78229AFEE6823 8BAC4146
	static void APP_SET_BLOCK(uint32_t *p0) { rage::NativeInvoke::Invoke<0x36E74661AF56B42B, uint32_t>(p0); } // 36E74661AF56B42B C2D54DD9
	static void APP_CLEAR_BLOCK() { rage::NativeInvoke::Invoke<0xFE24248AD69CE856, uint32_t>(); } // FE24248AD69CE856 DAB86A18
	static void APP_CLOSE_APP() { rage::NativeInvoke::Invoke<0x71F24E3C4A6A054, uint32_t>(); } // 71F24E3C4A6A054 03767C7A
	static void APP_CLOSE_BLOCK() { rage::NativeInvoke::Invoke<0x65113407CCABB4C8, uint32_t>(); } // 65113407CCABB4C8 ED97B202
	static BOOL _0x744011153D5554F() { return rage::NativeInvoke::Invoke<0x744011153D5554F, BOOL>(); } // 744011153D5554F D368BA15
	static BOOL APP_HAS_SYNCED_DATA(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x8DF7BAD5EE97F803, BOOL>(p0); } // 8DF7BAD5EE97F803 1DE2A63D
	static void APP_SAVE_DATA() { rage::NativeInvoke::Invoke<0xA79DC6E48DB016F9, uint32_t>(); } // A79DC6E48DB016F9 84A3918D
	static uint32_t _0x343AB67BA4AB388A() { return rage::NativeInvoke::Invoke<0x343AB67BA4AB388A, uint32_t>(); } // 343AB67BA4AB388A 784D550B
	static BOOL APP_DELETE_APP_DATA(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x7F29D55CF5B1127F, BOOL>(p0); } // 7F29D55CF5B1127F 2A2FBD1C
}

namespace TIME
{
	static void SET_CLOCK_TIME(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xEBC6113420C4616D, uint32_t>(p0, p1, p2); } // EBC6113420C4616D 26F6AF14
	static void PAUSE_CLOCK(BOOL p0) { rage::NativeInvoke::Invoke<0xC0ECE64062B48246, uint32_t>(p0); } // C0ECE64062B48246 B02D6124
	static void _0x1D54C3C00FBE70DD(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x1D54C3C00FBE70DD, uint32_t>(p0, p1, p2); } // 1D54C3C00FBE70DD 57B8DA7C
	static void ADD_TO_CLOCK_TIME(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x7F71C140225F9EA, uint32_t>(p0, p1, p2); } // 7F71C140225F9EA CC40D20D
	static uint32_t GET_CLOCK_HOURS() { return rage::NativeInvoke::Invoke<0xE76C684D1C903A71, uint32_t>(); } // E76C684D1C903A71 7EF8316F
	static uint32_t GET_CLOCK_MINUTES() { return rage::NativeInvoke::Invoke<0x6F66CEDC24218A4, uint32_t>(); } // 6F66CEDC24218A4 94AAC486
	static uint32_t GET_CLOCK_SECONDS() { return rage::NativeInvoke::Invoke<0x2784A8234E9B4202, uint32_t>(); } // 2784A8234E9B4202 099C927E
	static void SET_CLOCK_DATE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x3EA9A7E631596580, uint32_t>(p0, p1, p2); } // 3EA9A7E631596580 96891C94
	static uint32_t GET_CLOCK_DAY_OF_WEEK() { return rage::NativeInvoke::Invoke<0x8E6E09D762A68FB6, uint32_t>(); } // 8E6E09D762A68FB6 84E4A289
	static uint32_t GET_CLOCK_DAY_OF_MONTH() { return rage::NativeInvoke::Invoke<0xA277D6C04B4B44C8, uint32_t>(); } // A277D6C04B4B44C8 C7A5ACB7
	static uint32_t GET_CLOCK_MONTH() { return rage::NativeInvoke::Invoke<0x1285C2DD1E4945FF, uint32_t>(); } // 1285C2DD1E4945FF 3C48A3D5
	static uint32_t GET_CLOCK_YEAR() { return rage::NativeInvoke::Invoke<0xCFC08A7C99F98C5B, uint32_t>(); } // CFC08A7C99F98C5B B8BECF15
	static uint32_t _0x9C0DC2E2BADFB107() { return rage::NativeInvoke::Invoke<0x9C0DC2E2BADFB107, uint32_t>(); } // 9C0DC2E2BADFB107 3B74095C
	static void GET_POSIX_TIME(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0xE447A3C9003CA31C, uint32_t>(p0, p1, p2, p3, p4, p5); } // E447A3C9003CA31C E15A5281
	static void _0xC37299817B9E621(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0xC37299817B9E621, uint32_t>(p0, p1, p2, p3, p4, p5); } // C37299817B9E621
	static void GET_LOCAL_TIME(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5) { rage::NativeInvoke::Invoke<0x27FEA12221A1DA38, uint32_t>(p0, p1, p2, p3, p4, p5); } // 27FEA12221A1DA38 124BCFA2
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { rage::NativeInvoke::Invoke<0xE0988F7BD7BD3889, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // E0988F7BD7BD3889 EBC7B918
	static void SET_ROADS_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9) { rage::NativeInvoke::Invoke<0x9598AFAD0FB9891E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 9598AFAD0FB9891E BD088F4B
	static void SET_PED_PATHS_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x6FD48A66A577F6B3, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 6FD48A66A577F6B3 2148EA84
	static uint32_t GET_SAFE_COORD_FOR_PED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x3CDB52EABD2C9FC7, uint32_t>(p0, p1, p2, p3, p4, p5); } // 3CDB52EABD2C9FC7 B370270A
	static uint32_t GET_CLOSEST_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x2BFB65A3CE932C8D, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 2BFB65A3CE932C8D 6F5F1E6C
	static uint32_t GET_CLOSEST_MAJOR_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x7ECBB9998D8E0FAB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 7ECBB9998D8E0FAB 04B5F15B
	static uint32_t GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x839399EDBB568AF1, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 839399EDBB568AF1 8BD5759B
	static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x28360C2B9B86505E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 28360C2B9B86505E F125BFCC
	static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_ID(float p0, float p1, float p2, uint32_t p3, uint32_t p4, float p5, float p6) { return rage::NativeInvoke::Invoke<0x9E39A8307E2B6503, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 9E39A8307E2B6503 3F358BEA
	static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x3D84F9AECFD58EB5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 3D84F9AECFD58EB5 7349C856
	static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float p0, float p1, float p2, uint32_t p3, uint32_t *p4, uint32_t *p5, uint32_t p6, float p7, float p8) { return rage::NativeInvoke::Invoke<0x41EB80A253F99F2F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 41EB80A253F99F2F C1AEB88D
	static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { return rage::NativeInvoke::Invoke<0x49EE3DCC3B0D9124, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 49EE3DCC3B0D9124 928A4DEC
	static BOOL GET_VEHICLE_NODE_PROPERTIES(float p0, float p1, float p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0x0C57DC64AD223F86E, BOOL>(p0, p1, p2, p3, p4); } // 0C57DC64AD223F86E CC90110B
	static BOOL IS_VEHICLE_NODE_ID_VALID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5D626D890DCCBB00, BOOL>(p0); } // 5D626D890DCCBB00 57DFB1EF
	static void GET_VEHICLE_NODE_POSITION(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3810B8E4BE77F3FC, uint32_t>(p0, p1); } // 3810B8E4BE77F3FC E38E252D
	static BOOL _0x4E95ACB56D760DBC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4E95ACB56D760DBC, BOOL>(p0); } // 4E95ACB56D760DBC EE4B1219
	static BOOL _0xBF29019E61FCFC6F(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBF29019E61FCFC6F, BOOL>(p0); } // BF29019E61FCFC6F 56737A3C
	static uint32_t GET_CLOSEST_ROAD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10) { return rage::NativeInvoke::Invoke<0xD157439A5C52AA4E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // D157439A5C52AA4E 567B0E11
	static BOOL LOAD_ALL_PATH_NODES(BOOL p0) { return rage::NativeInvoke::Invoke<0xA3EC3945492992B2, BOOL>(p0); } // A3EC3945492992B2 C66E28C3
	static void _0x89539C9F122EA3F4(BOOL p0) { rage::NativeInvoke::Invoke<0x89539C9F122EA3F4, uint32_t>(p0); } // 89539C9F122EA3F4 D6A3B458
	static BOOL _0x65AB4C5AAF640EB0(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x65AB4C5AAF640EB0, BOOL>(p0, p1, p2, p3); } // 65AB4C5AAF640EB0 86E80A17
	static BOOL _0x032BB0750E9174D6C(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x032BB0750E9174D6C, BOOL>(p0, p1, p2, p3); } // 032BB0750E9174D6C 2CDA5012
	static void SET_ROADS_BACK_TO_ORIGINAL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x9A76FCB3181D8AAB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 9A76FCB3181D8AAB 86AC4A85
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x00F9A746F55BDEFFDD, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 00F9A746F55BDEFFDD 9DB5D209
	static void _0x0D0EB5CCB272DDAAA(float p0) { rage::NativeInvoke::Invoke<0x0D0EB5CCB272DDAAA, uint32_t>(p0); } // 0D0EB5CCB272DDAAA 3C5085E4
	static void _0x6531E5E3F81DCAE8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x6531E5E3F81DCAE8, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 6531E5E3F81DCAE8 D0F51299
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xC08AF3BB0A2FE69B, uint32_t>(p0, p1, p2, p3, p4, p5); } // C08AF3BB0A2FE69B 3F1ABDA4
	static uint32_t GET_RANDOM_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x39BC906A323E9E1D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 39BC906A323E9E1D AD1476EA
	static void GET_STREET_NAME_AT_COORD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0xB273AF9A7408FB95, uint32_t>(p0, p1, p2, p3, p4); } // B273AF9A7408FB95 DEBEEFCF
	static uint32_t GENERATE_DIRECTIONS_TO_COORD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x19F6346FAC6834B7, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 19F6346FAC6834B7 ED35C094
	static void SET_IGNORE_NO_GPS_FLAG(BOOL p0) { rage::NativeInvoke::Invoke<0x9B517A356053EAB0, uint32_t>(p0); } // 9B517A356053EAB0 B72CF194
	static void _0xDB5A661303CFA49A(BOOL p0) { rage::NativeInvoke::Invoke<0xDB5A661303CFA49A, uint32_t>(p0); } // DB5A661303CFA49A 90DF7A4C
	static void SET_GPS_DISABLED_ZONE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x2F5F83D51B0C72E7, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2F5F83D51B0C72E7 720B8073
	static uint32_t _0xD366C962CE850FDE() { return rage::NativeInvoke::Invoke<0xD366C962CE850FDE, uint32_t>(); } // D366C962CE850FDE 4B770634
	static BOOL _0x824DCD3A8B26D9DD() { return rage::NativeInvoke::Invoke<0x824DCD3A8B26D9DD, BOOL>(); } // 824DCD3A8B26D9DD 286F82CC
	static uint32_t _0xE975CFA93E09C576(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xE975CFA93E09C576, uint32_t>(p0, p1, p2, p3, p4); } // E975CFA93E09C576 F6422F9A
	static BOOL IS_POINT_ON_ROAD(float p0, float p1, float p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xFB32C1533D77516D, BOOL>(p0, p1, p2, p3); } // FB32C1533D77516D CF198055
	static void ADD_NAVMESH_REQUIRED_REGION(float p0, float p1, float p2) { rage::NativeInvoke::Invoke<0xC47920984FEAECEF, uint32_t>(p0, p1, p2); } // C47920984FEAECEF 12B086EA
	static void REMOVE_NAVMESH_REQUIRED_REGIONS() { rage::NativeInvoke::Invoke<0xBEC066E45E66285, uint32_t>(); } // BEC066E45E66285 637BB680
	static void DISABLE_NAVMESH_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x84A799362FA1219F, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 84A799362FA1219F 6E37F132
	static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return rage::NativeInvoke::Invoke<0x3AC0C0048FD80F7A, BOOL>(); } // 3AC0C0048FD80F7A 34C4E789
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x8138C32B482323F5, BOOL>(p0, p1, p2, p3, p4, p5); } // 8138C32B482323F5 4C2BA99E
	static uint32_t _0x073EC3DA56D3FB398(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x073EC3DA56D3FB398, uint32_t>(p0, p1, p2, p3, p4, p5); } // 073EC3DA56D3FB398
	static uint32_t ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x73E83232BB98D800, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 73E83232BB98D800 2952BA56
	static void UPDATE_NAVMESH_BLOCKING_OBJECT(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { rage::NativeInvoke::Invoke<0xD67CED6C68C2C7D3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // D67CED6C68C2C7D3 4E9776D0
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(uint32_t p0) { rage::NativeInvoke::Invoke<0x8939E31C143EF145, uint32_t>(p0); } // 8939E31C143EF145 098602B0
	static BOOL _0x049977BD3DD29F214(uint32_t p0) { return rage::NativeInvoke::Invoke<0x049977BD3DD29F214, BOOL>(p0); } // 049977BD3DD29F214 4B67D7EE
	static float _0x89BDB3CBFB462F22(float p0, float p1) { return rage::NativeInvoke::Invoke<0x89BDB3CBFB462F22, float>(p0, p1); } // 89BDB3CBFB462F22 3FE8C5A0
	static float _0xDF609A62B8C63C61(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0xDF609A62B8C63C61, float>(p0, p1, p2, p3); } // DF609A62B8C63C61 3ED21C90
	static float _0x174FE026E5E3A404(float p0, float p1) { return rage::NativeInvoke::Invoke<0x174FE026E5E3A404, float>(p0, p1); } // 174FE026E5E3A404 A07C5B7D
	static float _0x1B636A9F4A19474F(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x1B636A9F4A19474F, float>(p0, p1, p2, p3); } // 1B636A9F4A19474F 76751DD4
	static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x473D9547087B09AE, float>(p0, p1, p2, p3, p4, p5); } // 473D9547087B09AE B114489B
}

namespace CONTROLS
{
	static BOOL IS_CONTROL_ENABLED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF31E3F8B0F8BAB29, BOOL>(p0, p1); } // F31E3F8B0F8BAB29 9174AF84
	static BOOL IS_CONTROL_PRESSED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xBD883E84B4B6E14E, BOOL>(p0, p1); } // BD883E84B4B6E14E 517A4384
	static BOOL IS_CONTROL_RELEASED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x985B3A911A49ABFC, BOOL>(p0, p1); } // 985B3A911A49ABFC 1F91A06E
	static BOOL IS_CONTROL_JUST_PRESSED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x58FC9C7DF8FE009B, BOOL>(p0, p1); } // 58FC9C7DF8FE009B 4487F579
	static BOOL IS_CONTROL_JUST_RELEASED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xBAAAD6B2D22A26ED, BOOL>(p0, p1); } // BAAAD6B2D22A26ED 2314444B
	static uint32_t GET_CONTROL_VALUE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x995E5B5A14F2E170, uint32_t>(p0, p1); } // 995E5B5A14F2E170 C526F3C6
	static float GET_CONTROL_NORMAL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x3A32FF422A47D4D2, float>(p0, p1); } // 3A32FF422A47D4D2 5DE226A5
	static float _0xD009084906064511(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xD009084906064511, float>(p0, p1); } // D009084906064511 C49343BB
	static BOOL _0x71F42569AB4A62FC(uint32_t p0, uint32_t p1, float p2) { return rage::NativeInvoke::Invoke<0x71F42569AB4A62FC, BOOL>(p0, p1, p2); } // 71F42569AB4A62FC
	static BOOL IS_DISABLED_CONTROL_PRESSED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x25F05AE8FAE80806, BOOL>(p0, p1); } // 25F05AE8FAE80806 32A93544
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x2AC213158CF29AE, BOOL>(p0, p1); } // 2AC213158CF29AE EE6ABD32
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF34A5B7A9ABA0975, BOOL>(p0, p1); } // F34A5B7A9ABA0975 D6A679E1
	static float GET_DISABLED_CONTROL_NORMAL(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xAA8FAD2763B85102, float>(p0, p1); } // AA8FAD2763B85102 66FF4FAA
	static float _0xDA6E836529BF74AC(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xDA6E836529BF74AC, float>(p0, p1); } // DA6E836529BF74AC F2A65A4C
	static uint32_t _0x4D5885EB193CEFF7(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4D5885EB193CEFF7, uint32_t>(p0); } // 4D5885EB193CEFF7 0E8EF929
	static uint32_t _0x30E5EC01C9ACF9BC(uint32_t p0) { return rage::NativeInvoke::Invoke<0x30E5EC01C9ACF9BC, uint32_t>(p0); } // 30E5EC01C9ACF9BC
	static BOOL _0x6DA85361C794F2B1(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6DA85361C794F2B1, BOOL>(p0); } // 6DA85361C794F2B1
	static BOOL _0xDEFE27F6AD31BDE4(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDEFE27F6AD31BDE4, BOOL>(p0); } // DEFE27F6AD31BDE4
	static uint32_t _0x585B724989D978(uint32_t p0) { return rage::NativeInvoke::Invoke<0x585B724989D978, uint32_t>(p0); } // 585B724989D978
	static uint32_t _0x0B588E50C18B98D3F(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x0B588E50C18B98D3F, uint32_t>(p0, p1, p2); } // 0B588E50C18B98D3F 3551727A
	static uint32_t _0xA493E672277131FE(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xA493E672277131FE, uint32_t>(p0, p1, p2); } // A493E672277131FE 3EE71F6A
	static void _0x5147FAA338AB7B27(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x5147FAA338AB7B27, uint32_t>(p0, p1, p2, p3); } // 5147FAA338AB7B27
	static void SET_PAD_SHAKE(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x5C68F3EBC8A92D55, uint32_t>(p0, p1, p2); } // 5C68F3EBC8A92D55 5D38BD2F
	static void _0x1D386DC387AF1DB0(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { rage::NativeInvoke::Invoke<0x1D386DC387AF1DB0, uint32_t>(p0, p1, p2, p3, p4); } // 1D386DC387AF1DB0
	static void STOP_PAD_SHAKE(uint32_t p0) { rage::NativeInvoke::Invoke<0x26D5B88BC1FA1BAB, uint32_t>(p0); } // 26D5B88BC1FA1BAB 8F75657E
	static void _0x26E77FA00BD02C3C(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x26E77FA00BD02C3C, uint32_t>(p0, p1); } // 26E77FA00BD02C3C 7D65EB6E
	static void _0x5CF3C9118AB79AF0(uint32_t p0) { rage::NativeInvoke::Invoke<0x5CF3C9118AB79AF0, uint32_t>(p0); } // 5CF3C9118AB79AF0
	static BOOL IS_LOOK_INVERTED() { return rage::NativeInvoke::Invoke<0xEEBA0A292090EE79, BOOL>(); } // EEBA0A292090EE79 313434B2
	static BOOL _0xC91404D4E0A94981() { return rage::NativeInvoke::Invoke<0xC91404D4E0A94981, BOOL>(); } // C91404D4E0A94981
	static uint32_t _0xEBB57845870E2E01() { return rage::NativeInvoke::Invoke<0xEBB57845870E2E01, uint32_t>(); } // EBB57845870E2E01 81802053
	static uint32_t _0x17DC1E084CF1ACDD() { return rage::NativeInvoke::Invoke<0x17DC1E084CF1ACDD, uint32_t>(); } // 17DC1E084CF1ACDD
	static BOOL _0x0991FC1675F6DECBD() { return rage::NativeInvoke::Invoke<0x0991FC1675F6DECBD, BOOL>(); } // 0991FC1675F6DECBD
	static BOOL _0x1A2F72143DF4C59F() { return rage::NativeInvoke::Invoke<0x1A2F72143DF4C59F, BOOL>(); } // 1A2F72143DF4C59F
	static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL p0) { rage::NativeInvoke::Invoke<0xAD368980E4E38C6B, uint32_t>(p0); } // AD368980E4E38C6B A86BD91F
	static void SET_INPUT_EXCLUSIVE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x756DDDAD8038AC9, uint32_t>(p0, p1); } // 756DDDAD8038AC9 4E8E29E6
	static void DISABLE_CONTROL_ACTION(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x500F4CA776CEBD0A, uint32_t>(p0, p1, p2); } // 500F4CA776CEBD0A 3800C0DC
	static void ENABLE_CONTROL_ACTION(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB7B9319D77D69AF2, uint32_t>(p0, p1, p2); } // B7B9319D77D69AF2 D2753551
	static void DISABLE_ALL_CONTROL_ACTIONS(uint32_t p0) { rage::NativeInvoke::Invoke<0xB39A0108BE8483DE, uint32_t>(p0); } // B39A0108BE8483DE 16753CF4
	static void ENABLE_ALL_CONTROL_ACTIONS(uint32_t p0) { rage::NativeInvoke::Invoke<0xF133F66F6761D77A, uint32_t>(p0); } // F133F66F6761D77A FC2F119F
	static BOOL _0xE9AD5BEA272D4AC8(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xE9AD5BEA272D4AC8, BOOL>(p0); } // E9AD5BEA272D4AC8 D2C80B2E
	static BOOL _0x373E8B54D82039E9(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x373E8B54D82039E9, BOOL>(p0); } // 373E8B54D82039E9 BBFC9050
	static void _0x262D794F49C1A5EB() { rage::NativeInvoke::Invoke<0x262D794F49C1A5EB, uint32_t>(); } // 262D794F49C1A5EB 42140FF9
	static void _0xD56126DC7330EEF3(uint32_t p0) { rage::NativeInvoke::Invoke<0xD56126DC7330EEF3, uint32_t>(p0); } // D56126DC7330EEF3 2CEDE6C5
}

namespace DATAFILE
{
	static void _0xD58995F0ADECC553(uint32_t p0) { rage::NativeInvoke::Invoke<0xD58995F0ADECC553, uint32_t>(p0); } // D58995F0ADECC553 621388FF
	static BOOL _0x6619B43A54187875(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6619B43A54187875, BOOL>(p0); } // 6619B43A54187875 B41064A4
	static BOOL _0x2D8466EC94F4E458(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2D8466EC94F4E458, BOOL>(p0); } // 2D8466EC94F4E458 9DB63CFF
	static BOOL _0x3C71A103AF1391D5(uint32_t *p0, uint32_t p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, BOOL p6) { return rage::NativeInvoke::Invoke<0x3C71A103AF1391D5, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // 3C71A103AF1391D5 F09157B0
	static BOOL _0x47CE34C09C6E5B01(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x47CE34C09C6E5B01, BOOL>(p0, p1, p2, p3, p4); } // 47CE34C09C6E5B01 D96860FC
	static BOOL _0x7CA582E78942F762(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6) { return rage::NativeInvoke::Invoke<0x7CA582E78942F762, BOOL>(p0, p1, p2, p3, p4, p5, p6); } // 7CA582E78942F762 459F2683
	static BOOL _0xABCA9621186215BC(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xABCA9621186215BC, BOOL>(p0, p1, p2, p3, p4); } // ABCA9621186215BC DBB83E2B
	static BOOL _0x249DF7F2462DF24D(uint32_t *p0, float p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x249DF7F2462DF24D, BOOL>(p0, p1, p2); } // 249DF7F2462DF24D BB6321BD
	static BOOL _0x21788DA28CA10E5C(uint32_t p0) { return rage::NativeInvoke::Invoke<0x21788DA28CA10E5C, BOOL>(p0); } // 21788DA28CA10E5C E8D56DA2
	static BOOL _0xD817614FF53D2CFD(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xD817614FF53D2CFD, BOOL>(p0, p1); } // D817614FF53D2CFD CB6A351E
	static BOOL _0x35EC844747BD1B03(uint32_t p0) { return rage::NativeInvoke::Invoke<0x35EC844747BD1B03, BOOL>(p0); } // 35EC844747BD1B03 A4D1B30E
	static BOOL _0x0BEB4BCAB2586C5DA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0BEB4BCAB2586C5DA, BOOL>(p0); } // 0BEB4BCAB2586C5DA B8515B2F
	static BOOL _0xAD01E46EE8359F6D(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xAD01E46EE8359F6D, BOOL>(p0); } // AD01E46EE8359F6D 660C468E
	static void DATAFILE_CREATE() { rage::NativeInvoke::Invoke<0x86B98DE94D370225, uint32_t>(); } // 86B98DE94D370225 95F8A221
	static void DATAFILE_DELETE() { rage::NativeInvoke::Invoke<0x7C7D9E1147295314, uint32_t>(); } // 7C7D9E1147295314 DEF31B0A
	static void _0x42B679850A5A9934() { rage::NativeInvoke::Invoke<0x42B679850A5A9934, uint32_t>(); } // 42B679850A5A9934 4E03F632
	static void _0x2941B9A2515F6517() { rage::NativeInvoke::Invoke<0x2941B9A2515F6517, uint32_t>(); } // 2941B9A2515F6517 F11F956F
	static uint32_t PRELOAD_FIND() { return rage::NativeInvoke::Invoke<0x196C090B64F95927, uint32_t>(); } // 196C090B64F95927 86DDF9C2
	static BOOL _0x9AEBCD68F7E99F9A(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x9AEBCD68F7E99F9A, BOOL>(p0); } // 9AEBCD68F7E99F9A 768CBB35
	static BOOL _0x6FB0FF5F24BAFFD5(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x6FB0FF5F24BAFFD5, BOOL>(p0); } // 6FB0FF5F24BAFFD5 0B4087F7
	static BOOL _0x557C97BA9C4CE8E1() { return rage::NativeInvoke::Invoke<0x557C97BA9C4CE8E1, BOOL>(); } // 557C97BA9C4CE8E1 5DCD0796
	static void _0xB053C7D9066BCFA8(uint32_t *p0, uint32_t *p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB053C7D9066BCFA8, uint32_t>(p0, p1, p2); } // B053C7D9066BCFA8 9B29D99B
	static void _0xB701176DAD1CE489(uint32_t *p0, uint32_t *p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xB701176DAD1CE489, uint32_t>(p0, p1, p2); } // B701176DAD1CE489 EFCF554A
	static void _0x1E22AD0EEF53C7CA(uint32_t *p0, uint32_t *p1, float p2) { rage::NativeInvoke::Invoke<0x1E22AD0EEF53C7CA, uint32_t>(p0, p1, p2); } // 1E22AD0EEF53C7CA E972CACF
	static void _0xCAFE10453B41DF86(uint32_t *p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xCAFE10453B41DF86, uint32_t>(p0, p1, p2); } // CAFE10453B41DF86 D437615C
	static void _0x7978FE4A2F447580(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x7978FE4A2F447580, uint32_t>(p0, p1, p2, p3, p4); } // 7978FE4A2F447580 75FC6C3C
	static uint32_t _0x21B82249ACB846C2(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x21B82249ACB846C2, uint32_t>(p0, p1); } // 21B82249ACB846C2 96A8E05F
	static uint32_t _0x326FA623570CA13A(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x326FA623570CA13A, uint32_t>(p0, p1); } // 326FA623570CA13A 03939B8D
	static BOOL _0xB3A8649C32ED90CE(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xB3A8649C32ED90CE, BOOL>(p0, p1); } // B3A8649C32ED90CE 8876C872
	static uint32_t _0x735007A4BFE76556(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x735007A4BFE76556, uint32_t>(p0, p1); } // 735007A4BFE76556 A6C68693
	static float _0x0B7620056BA3ADCF9(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x0B7620056BA3ADCF9, float>(p0, p1); } // 0B7620056BA3ADCF9 A92C1AF4
	static uint32_t _0xD9FF36EDF58FE651(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xD9FF36EDF58FE651, uint32_t>(p0, p1); } // D9FF36EDF58FE651 942160EC
	static Vector3 _0xB9CCB29139D5107A(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xB9CCB29139D5107A, Vector3>(p0, p1); } // B9CCB29139D5107A E84A127A
	static uint32_t _0x5A2CEB52983CECFE(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x5A2CEB52983CECFE, uint32_t>(p0, p1); } // 5A2CEB52983CECFE C9C13D8D
	static uint32_t _0x2BD693D8CC2DF27D(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x2BD693D8CC2DF27D, uint32_t>(p0, p1); } // 2BD693D8CC2DF27D 1F2F7D00
	static uint32_t _0x0786139F494F19CB3(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x0786139F494F19CB3, uint32_t>(p0, p1); } // 0786139F494F19CB3 2678342A
	static void _0x643842C751B6F00C(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x643842C751B6F00C, uint32_t>(p0, p1); } // 643842C751B6F00C 08174B90
	static void _0xD20AF9A71F2E5FE7(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD20AF9A71F2E5FE7, uint32_t>(p0, p1); } // D20AF9A71F2E5FE7 F29C0B36
	static void _0xC0CBD3387AEB1E6(uint32_t *p0, float p1) { rage::NativeInvoke::Invoke<0xC0CBD3387AEB1E6, uint32_t>(p0, p1); } // C0CBD3387AEB1E6 E4302123
	static void _0x543E6628C0127BA9(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x543E6628C0127BA9, uint32_t>(p0, p1); } // 543E6628C0127BA9 F3C01350
	static void _0x289CA066B10B5673(uint32_t *p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x289CA066B10B5673, uint32_t>(p0, p1, p2, p3); } // 289CA066B10B5673 16F464B6
	static uint32_t _0x3A246948D8E8409D(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x3A246948D8E8409D, uint32_t>(p0); } // 3A246948D8E8409D C174C71B
	static BOOL _0x1AB42E452190C11E(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x1AB42E452190C11E, BOOL>(p0, p1); } // 1AB42E452190C11E A2E5F921
	static uint32_t _0xE913F752727FD5C8(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xE913F752727FD5C8, uint32_t>(p0, p1); } // E913F752727FD5C8 BB120CFC
	static float FOCUS_USE_SPLINE(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xCCBB936CD7C5A191, float>(p0, p1); } // CCBB936CD7C5A191 08AD2CC2
	static uint32_t OVERIDE_TEXTURENAMES(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x18929D922A4FCF1B, uint32_t>(p0, p1); } // 18929D922A4FCF1B 93F985A6
	static Vector3 _0x6C482A60A2924F25(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x6C482A60A2924F25, Vector3>(p0, p1); } // 6C482A60A2924F25 80E3DA55
	static uint32_t _0xA7A0456A2B66D469(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA7A0456A2B66D469, uint32_t>(p0, p1); } // A7A0456A2B66D469 ECE81278
	static uint32_t _0x073A0E0802EA47143(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x073A0E0802EA47143, uint32_t>(p0); } // 073A0E0802EA47143 A8A21766
	static uint32_t _0x9ECC945812FC4A08(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x9ECC945812FC4A08, uint32_t>(p0, p1); } // 9ECC945812FC4A08 FA2402C8
}

namespace FIRE
{
	static uint32_t START_SCRIPT_FIRE(float p0, float p1, float p2, uint32_t p3, BOOL p4) { return rage::NativeInvoke::Invoke<0xA044C47C75E01FFA, uint32_t>(p0, p1, p2, p3, p4); } // A044C47C75E01FFA E7529357
	static void REMOVE_SCRIPT_FIRE(uint32_t p0) { rage::NativeInvoke::Invoke<0xE2112B348477C41D, uint32_t>(p0); } // E2112B348477C41D 6B21FE26
	static uint32_t START_ENTITY_FIRE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x888DE189078AE934, uint32_t>(p0); } // 888DE189078AE934 8928428E
	static void STOP_ENTITY_FIRE(uint32_t p0) { rage::NativeInvoke::Invoke<0x146A47ED2C5B980, uint32_t>(p0); } // 146A47ED2C5B980 CE8C9066
	static BOOL IS_ENTITY_ON_FIRE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEF57771119A32DB2, BOOL>(p0); } // EF57771119A32DB2 8C73E64F
	static uint32_t GET_NUMBER_OF_FIRES_IN_RANGE(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0xF97CA70F2DB85F21, uint32_t>(p0, p1, p2, p3); } // F97CA70F2DB85F21 654D93B7
	static void STOP_FIRE_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x0B895F3A5E3A84693, uint32_t>(p0, p1, p2, p3); } // 0B895F3A5E3A84693 725C7205
	static uint32_t GET_CLOSEST_FIRE_POS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x82EB1172B0FFC72F, uint32_t>(p0, p1, p2, p3); } // 82EB1172B0FFC72F C4977B47
	static void ADD_EXPLOSION(float p0, float p1, float p2, uint32_t p3, float p4, BOOL p5, BOOL p6, float p7) { rage::NativeInvoke::Invoke<0x593E9069AA8CC707, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 593E9069AA8CC707 10AF5258
	static void ADD_OWNED_EXPLOSION(uint32_t p0, float p1, float p2, float p3, uint32_t p4, float p5, BOOL p6, BOOL p7, float p8) { rage::NativeInvoke::Invoke<0xB90E808FA39547A7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // B90E808FA39547A7 27EE0D67
	static void _0x74D42031A9977A6B(float p0, float p1, float p2, uint32_t p3, uint32_t p4, float p5, BOOL p6, BOOL p7, float p8) { rage::NativeInvoke::Invoke<0x74D42031A9977A6B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 74D42031A9977A6B CF358946
	static uint32_t IS_EXPLOSION_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x656425C603F673C9, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 656425C603F673C9 FB40075B
	static BOOL IS_EXPLOSION_IN_SPHERE(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x6588804F7BCB1101, BOOL>(p0, p1, p2, p3, p4); } // 6588804F7BCB1101 D455A7F3
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { return rage::NativeInvoke::Invoke<0xE8AE70970F9FEB69, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7); } // E8AE70970F9FEB69 0128FED9
	static uint32_t _0x3C1A4586B2884E94(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { return rage::NativeInvoke::Invoke<0x3C1A4586B2884E94, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 3C1A4586B2884E94 AEC0D176
}

namespace DECISIONEVENT
{
	static void SET_DECISION_MAKER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4016A240221D4050, uint32_t>(p0, p1); } // 4016A240221D4050 19CEAC9E
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x672BD2EACF7286FE, uint32_t>(p0, p1); } // 672BD2EACF7286FE 07ABD94D
	static void _0x8081B463AA928C27(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x8081B463AA928C27, uint32_t>(p0, p1); } // 8081B463AA928C27 57506EA6
	static void _0xC487ACDF4DB3850E(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC487ACDF4DB3850E, uint32_t>(p0, p1); } // C487ACDF4DB3850E 62A3161D
	static uint32_t ADD_SHOCKING_EVENT_AT_POSITION(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0x54FC3D63A1AF7A4, uint32_t>(p0, p1, p2, p3, p4); } // 54FC3D63A1AF7A4 0B30F779
	static uint32_t ADD_SHOCKING_EVENT_FOR_ENTITY(uint32_t p0, uint32_t p1, float p2) { return rage::NativeInvoke::Invoke<0x769FF914868DA2BB, uint32_t>(p0, p1, p2); } // 769FF914868DA2BB A81B5B71
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0xE38EA58EE20A1F1A, BOOL>(p0, p1, p2, p3, p4); } // E38EA58EE20A1F1A 2F98823E
	static BOOL REMOVE_SHOCKING_EVENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x629852E07D36F649, BOOL>(p0); } // 629852E07D36F649 F82D5A87
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { rage::NativeInvoke::Invoke<0x68C135A763206156, uint32_t>(p0); } // 68C135A763206156 64DF6282
	static void _0xABB922B735B1AE9B() { rage::NativeInvoke::Invoke<0xABB922B735B1AE9B, uint32_t>(); } // ABB922B735B1AE9B A0CE89C8
	static void _0x45D88A2C351C0F89() { rage::NativeInvoke::Invoke<0x45D88A2C351C0F89, uint32_t>(); } // 45D88A2C351C0F89 4CC674B5
	static void _0xD4AAD898916CA36C(uint32_t p0) { rage::NativeInvoke::Invoke<0xD4AAD898916CA36C, uint32_t>(p0); } // D4AAD898916CA36C A0FDCB82
	static void _0xFB79FDADA15350FE() { rage::NativeInvoke::Invoke<0xFB79FDADA15350FE, uint32_t>(); } // FB79FDADA15350FE 80340396
}

namespace ZONE
{
	static uint32_t GET_ZONE_AT_COORDS(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x70E7DC016A3BCE02, uint32_t>(p0, p1, p2); } // 70E7DC016A3BCE02 C9018181
	static uint32_t _0xC20A0CF390344083(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC20A0CF390344083, uint32_t>(p0); } // C20A0CF390344083 8EC68304
	static uint32_t GET_ZONE_POPSCHEDULE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1791D68BE81FDBCB, uint32_t>(p0); } // 1791D68BE81FDBCB 20AB2FC9
	static uint32_t GET_NAME_OF_ZONE(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0xE0F4D060DC66FA8E, uint32_t>(p0, p1, p2); } // E0F4D060DC66FA8E 7875CE91
	static void SET_ZONE_ENABLED(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xCB270486B25A847A, uint32_t>(p0, p1); } // CB270486B25A847A 04E21B03
	static uint32_t GET_ZONE_SCUMMINESS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAD21C6801F78A71C, uint32_t>(p0); } // AD21C6801F78A71C B2FB5C4C
	static void _0x18F0CF3A83D7B33E(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x18F0CF3A83D7B33E, uint32_t>(p0, p1); } // 18F0CF3A83D7B33E 3F0A3680
	static void _0x2CEB4AD79C7B5906(uint32_t p0) { rage::NativeInvoke::Invoke<0x2CEB4AD79C7B5906, uint32_t>(p0); } // 2CEB4AD79C7B5906 7A72A24E
	static uint32_t _0x23407968FA594DB9(float p0, float p1, float p2) { return rage::NativeInvoke::Invoke<0x23407968FA594DB9, uint32_t>(p0, p1, p2); } // 23407968FA594DB9 B5C5C99B
}

namespace ROPE
{
	static uint32_t ADD_ROPE(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, float p8, float p9, float p10, BOOL p11, BOOL p12, BOOL p13, float p14, BOOL p15, uint32_t *p16) { return rage::NativeInvoke::Invoke<0xCEDB3DB364D4E9F4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // CEDB3DB364D4E9F4 A592EC74
	static void DELETE_ROPE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x256A40788A3A4EA, uint32_t>(p0); } // 256A40788A3A4EA 748D72AF
	static void DELETE_CHILD_ROPE(uint32_t p0) { rage::NativeInvoke::Invoke<0xD3CB0CAB574196C7, uint32_t>(p0); } // D3CB0CAB574196C7 B19B4706
	static BOOL DOES_ROPE_EXIST(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC1C471D9F0CB910D, BOOL>(p0); } // C1C471D9F0CB910D 66E4A3AC
	static void _0x791DDCF9AF7869A7(uint32_t *p0, BOOL p1) { rage::NativeInvoke::Invoke<0x791DDCF9AF7869A7, uint32_t>(p0, p1); } // 791DDCF9AF7869A7 51523B8C
	static void LOAD_ROPE_DATA(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xE2E7141D12BCA5DF, uint32_t>(p0, p1); } // E2E7141D12BCA5DF 9E8F1644
	static void PIN_ROPE_VERTEX(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0xDD5704566ED470A8, uint32_t>(p0, p1, p2, p3, p4); } // DD5704566ED470A8 AE1D101B
	static void UNPIN_ROPE_VERTEX(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4EA6FFFA9B2C9DE9, uint32_t>(p0, p1); } // 4EA6FFFA9B2C9DE9 B30B552F
	static uint32_t GET_ROPE_VERTEX_COUNT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1030B174F1D9E10B, uint32_t>(p0); } // 1030B174F1D9E10B 5131CD2C
	static void ATTACH_ENTITIES_TO_ROPE(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, uint32_t p10, uint32_t p11, uint32_t *p12, uint32_t *p13) { rage::NativeInvoke::Invoke<0x5FA05DAA2F11913D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 5FA05DAA2F11913D 7508668F
	static void ATTACH_ROPE_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5) { rage::NativeInvoke::Invoke<0xCB9E38D07F8AC84F, uint32_t>(p0, p1, p2, p3, p4, p5); } // CB9E38D07F8AC84F B25D9536
	static void DETACH_ROPE_FROM_ENTITY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x339482E66F313F79, uint32_t>(p0, p1); } // 339482E66F313F79 3E720BEE
	static void _0xBCB57097E14BD2F0(uint32_t p0) { rage::NativeInvoke::Invoke<0xBCB57097E14BD2F0, uint32_t>(p0); } // BCB57097E14BD2F0 EAF291A0
	static void _0xE8BFE40EA4992B6B(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE8BFE40EA4992B6B, uint32_t>(p0, p1); } // E8BFE40EA4992B6B 80DB77A7
	static void _0xC4B10914E8DFFED8(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xC4B10914E8DFFED8, uint32_t>(p0, p1); } // C4B10914E8DFFED8 C67D5CF6
	static BOOL _0xD623175288881516(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xD623175288881516, BOOL>(p0); } // D623175288881516 7A18BB9C
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEA5A54772E6E2E5B, Vector3>(p0); } // EA5A54772E6E2E5B 91F6848B
	static Vector3 GET_ROPE_VERTEX_COORD(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x45217E2AE13CA818, Vector3>(p0, p1); } // 45217E2AE13CA818 84374452
	static void _0x1731EFEF9C6A5682(uint32_t p0) { rage::NativeInvoke::Invoke<0x1731EFEF9C6A5682, uint32_t>(p0); } // 1731EFEF9C6A5682 5187BED3
	static void _0x13593A32293B017D(uint32_t p0) { rage::NativeInvoke::Invoke<0x13593A32293B017D, uint32_t>(p0); } // 13593A32293B017D 46826B53
	static void _0xBDDB2F907355FAEA(uint32_t p0) { rage::NativeInvoke::Invoke<0xBDDB2F907355FAEA, uint32_t>(p0); } // BDDB2F907355FAEA FC0DB4C3
	static void _0xBB965A14A8819BEC(uint32_t p0) { rage::NativeInvoke::Invoke<0xBB965A14A8819BEC, uint32_t>(p0); } // BB965A14A8819BEC 2EEDB18F
	static void _0xEECF7FBCECFDBB7E(uint32_t p0) { rage::NativeInvoke::Invoke<0xEECF7FBCECFDBB7E, uint32_t>(p0); } // EECF7FBCECFDBB7E 43E92628
	static void ROPE_LOAD_TEXTURES() { rage::NativeInvoke::Invoke<0xAD25F191C2D4862B, uint32_t>(); } // AD25F191C2D4862B BA97CE91
	static BOOL _0x2B3E5A9FFCAECA3F() { return rage::NativeInvoke::Invoke<0x2B3E5A9FFCAECA3F, BOOL>(); } // 2B3E5A9FFCAECA3F 5FDC1047
	static void ROPE_UNLOAD_TEXTURES() { rage::NativeInvoke::Invoke<0x92F78D0E1AD88096, uint32_t>(); } // 92F78D0E1AD88096 584463E0
	static void _0x6BD9FCE842024E2E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { rage::NativeInvoke::Invoke<0x6BD9FCE842024E2E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 6BD9FCE842024E2E 106BA127
	static void _0xFDA23F0FB8466733(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xFDA23F0FB8466733, uint32_t>(p0, p1, p2); } // FDA23F0FB8466733 7C6F7668
	static void _0xD5A375229EA0C787(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD5A375229EA0C787, uint32_t>(p0, p1); } // D5A375229EA0C787 686672DD
	static float _0xF4A6C19A72265069(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF4A6C19A72265069, float>(p0); } // F4A6C19A72265069 FD309DC8
	static void ROPE_FORCE_LENGTH(uint32_t p0, float p1) { rage::NativeInvoke::Invoke<0xD69801FF65CC4DAF, uint32_t>(p0, p1); } // D69801FF65CC4DAF ABF3130F
	static void ROPE_RESET_LENGTH(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4F44BDD9DD44A1DF, uint32_t>(p0, p1); } // 4F44BDD9DD44A1DF C8A423A3
	static void _0x4524D16B76927B50(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x4524D16B76927B50, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 4524D16B76927B50 A2A5C9FE
	static void SET_DAMPING(uint32_t p0, uint32_t p1, float p2) { rage::NativeInvoke::Invoke<0xB4B1BA73A75F5208, uint32_t>(p0, p1, p2); } // B4B1BA73A75F5208 CFB37773
	static void ACTIVATE_PHYSICS(uint32_t p0) { rage::NativeInvoke::Invoke<0xC18E5D819BB888B, uint32_t>(p0); } // C18E5D819BB888B 031711B8
	static void _0x2C0D13B555386850(uint32_t p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x2C0D13B555386850, uint32_t>(p0, p1, p2, p3); } // 2C0D13B555386850 59910AB2
	static Vector3 _0xBD58634EFC7D8DB0(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBD58634EFC7D8DB0, Vector3>(p0); } // BD58634EFC7D8DB0 49A11F0D
	static void _0x28B16D290672BD40(uint32_t p0) { rage::NativeInvoke::Invoke<0x28B16D290672BD40, uint32_t>(p0); } // 28B16D290672BD40 A5B55421
	static void BREAK_ENTITY_GLASS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, BOOL p10) { rage::NativeInvoke::Invoke<0x58BDE5167AAC6009, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 58BDE5167AAC6009 D0E0402F
	static void SET_DISABLE_BREAKING(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x4D9470D67663A76C, uint32_t>(p0, p1); } // 4D9470D67663A76C EE77C326
	static void _0x26DE83C354F34CAD(uint32_t p0) { rage::NativeInvoke::Invoke<0x26DE83C354F34CAD, uint32_t>(p0); } // 26DE83C354F34CAD
	static void _0x0D7C58CF8463D1510(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x0D7C58CF8463D1510, uint32_t>(p0, p1); } // 0D7C58CF8463D1510 97269DC8
}

namespace WATER
{
	static BOOL GET_WATER_HEIGHT(float p0, float p1, float p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0xB27F8CEA1C1CB3A6, BOOL>(p0, p1, p2, p3); } // B27F8CEA1C1CB3A6 D864E17C
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float p0, float p1, float p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0xAD7BE04AE98198AF, BOOL>(p0, p1, p2, p3); } // AD7BE04AE98198AF 262017F8
	static uint32_t _0x48538B9EA42C034F(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return rage::NativeInvoke::Invoke<0x48538B9EA42C034F, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 48538B9EA42C034F AA4AE00C
	static uint32_t _0x41CAD76404DF0CCA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return rage::NativeInvoke::Invoke<0x41CAD76404DF0CCA, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 41CAD76404DF0CCA 4A962D55
	static uint32_t _0xB350E3504F18AE9E(float p0, float p1, float p2, uint32_t p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xB350E3504F18AE9E, uint32_t>(p0, p1, p2, p3, p4); } // B350E3504F18AE9E 4C71D143
	static void MODIFY_WATER(float p0, float p1, float p2, float p3) { rage::NativeInvoke::Invoke<0x6E5E583337B2D562, uint32_t>(p0, p1, p2, p3); } // 6E5E583337B2D562 C49E005A
	static uint32_t _0xF2D10B85A374AA6A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xF2D10B85A374AA6A, uint32_t>(p0, p1, p2, p3, p4); } // F2D10B85A374AA6A
	static void _0x76125BC6295BCC83(uint32_t p0) { rage::NativeInvoke::Invoke<0x76125BC6295BCC83, uint32_t>(p0); } // 76125BC6295BCC83
}

namespace WORLDPROBE
{
	static uint32_t _0x9400A3EC34709233(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x9400A3EC34709233, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 9400A3EC34709233 EFAF4BA6
	static uint32_t _0x76AC96FD8F95E946(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x76AC96FD8F95E946, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 76AC96FD8F95E946 8251485D
	static uint32_t _0x0643CBFFDA91D4D9D(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x0643CBFFDA91D4D9D, uint32_t>(p0, p1, p2); } // 0643CBFFDA91D4D9D CEEAD94B
	static uint32_t _0x10C1AA389D3AB1F5(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { return rage::NativeInvoke::Invoke<0x10C1AA389D3AB1F5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 10C1AA389D3AB1F5 249BC876
	static uint32_t _0xA9E107B3B2ABCE55(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xA9E107B3B2ABCE55, uint32_t>(p0, p1, p2); } // A9E107B3B2ABCE55 13BC46C0
	static uint32_t _0x46668681EA3C2CF0(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x46668681EA3C2CF0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 46668681EA3C2CF0 591EA833
	static uint32_t _0x8272E1A38E356C6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0x8272E1A38E356C6, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 8272E1A38E356C6 4559460A
	static uint32_t _0xBFABF77FCEA8BA3F(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xBFABF77FCEA8BA3F, uint32_t>(p0, p1, p2, p3, p4); } // BFABF77FCEA8BA3F F3C2875A
	static uint32_t _0x57DE6ED9CC51E26C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x57DE6ED9CC51E26C, uint32_t>(p0, p1, p2, p3, p4, p5); } // 57DE6ED9CC51E26C 4301E10C
	static void _0x4CF3E8F2A18BEA95(uint32_t p0) { rage::NativeInvoke::Invoke<0x4CF3E8F2A18BEA95, uint32_t>(p0); } // 4CF3E8F2A18BEA95 EC2AAF06
}

namespace NETWORK
{
	static BOOL NETWORK_IS_SIGNED_IN() { return rage::NativeInvoke::Invoke<0x0A730AA29D1C70932, BOOL>(); } // 0A730AA29D1C70932 ADD0B40F
	static BOOL NETWORK_IS_SIGNED_ONLINE() { return rage::NativeInvoke::Invoke<0xE4B4CA22DBCFA69, BOOL>(); } // E4B4CA22DBCFA69 6E5BDCE2
	static uint32_t _0x15ADFB66D6CE78C0() { return rage::NativeInvoke::Invoke<0x15ADFB66D6CE78C0, uint32_t>(); } // 15ADFB66D6CE78C0
	static uint32_t _0xDFDA2808EFCE872D() { return rage::NativeInvoke::Invoke<0xDFDA2808EFCE872D, uint32_t>(); } // DFDA2808EFCE872D
	static BOOL _0x72B3C5483AF02F51() { return rage::NativeInvoke::Invoke<0x72B3C5483AF02F51, BOOL>(); } // 72B3C5483AF02F51 3FB40673
	static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return rage::NativeInvoke::Invoke<0x5F65F01B2E04B349, BOOL>(); } // 5F65F01B2E04B349 C7FF5AFC
	static BOOL _0xA4524458CE5990BF() { return rage::NativeInvoke::Invoke<0xA4524458CE5990BF, BOOL>(); } // A4524458CE5990BF 66EC713F
	static BOOL _0xAB519D48E89D4814() { return rage::NativeInvoke::Invoke<0xAB519D48E89D4814, BOOL>(); } // AB519D48E89D4814 358D1D77
	static BOOL NETWORK_IS_HOST() { return rage::NativeInvoke::Invoke<0x581374CD956CD916, BOOL>(); } // 581374CD956CD916 E46AC10F
	static BOOL _0x60C57BB4784C90AA() { return rage::NativeInvoke::Invoke<0x60C57BB4784C90AA, BOOL>(); } // 60C57BB4784C90AA
	static uint32_t _0xB5BB4A60B941F31D() { return rage::NativeInvoke::Invoke<0xB5BB4A60B941F31D, uint32_t>(); } // B5BB4A60B941F31D
	static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return rage::NativeInvoke::Invoke<0xBBF1B75F19D2AF94, BOOL>(); } // BBF1B75F19D2AF94 EF63BFDF
	static BOOL _0xD44F5752F96E0941() { return rage::NativeInvoke::Invoke<0xD44F5752F96E0941, BOOL>(); } // D44F5752F96E0941
	static BOOL _0xC91D05FCB0DA28F6(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC91D05FCB0DA28F6, BOOL>(p0); } // C91D05FCB0DA28F6 1F88819D
	static BOOL _0xA948986572BA242B(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA948986572BA242B, BOOL>(p0, p1); } // A948986572BA242B 2D817A5E
	static BOOL _0xBF939973F011C9B9(uint32_t p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xBF939973F011C9B9, BOOL>(p0, p1); } // BF939973F011C9B9
	static BOOL _0xC63711FE8D9F440A(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xC63711FE8D9F440A, BOOL>(p0, p1, p2); } // C63711FE8D9F440A BB54AA3D
	static BOOL _0x1D85B30183285B97(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x1D85B30183285B97, BOOL>(p0, p1, p2); } // 1D85B30183285B97
	static BOOL _0x25F8EC97D0710045() { return rage::NativeInvoke::Invoke<0x25F8EC97D0710045, BOOL>(); } // 25F8EC97D0710045
	static uint32_t _0x8AFF49260615C795() { return rage::NativeInvoke::Invoke<0x8AFF49260615C795, uint32_t>(); } // 8AFF49260615C795
	static BOOL _0x8BE1B6A8AF84E85F() { return rage::NativeInvoke::Invoke<0x8BE1B6A8AF84E85F, BOOL>(); } // 8BE1B6A8AF84E85F
	static void _0x8BCAA6ACC61DF007() { rage::NativeInvoke::Invoke<0x8BCAA6ACC61DF007, uint32_t>(); } // 8BCAA6ACC61DF007
	static BOOL _0x1E296600C34BA193() { return rage::NativeInvoke::Invoke<0x1E296600C34BA193, BOOL>(); } // 1E296600C34BA193 60E1FEDF
	static void NETWORK_BAIL() { rage::NativeInvoke::Invoke<0xE3E004AF58906931, uint32_t>(); } // E3E004AF58906931 87D79A04
	static void _0x72A449DF861CCD98() { rage::NativeInvoke::Invoke<0x72A449DF861CCD98, uint32_t>(); } // 72A449DF861CCD98 96E28FE2
	static BOOL _0xB1B150F16B4B82F4(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xB1B150F16B4B82F4, BOOL>(p0); } // B1B150F16B4B82F4 A520B982
	static BOOL _0x7312F247C4673540() { return rage::NativeInvoke::Invoke<0x7312F247C4673540, BOOL>(); } // 7312F247C4673540 05518C0F
	static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return rage::NativeInvoke::Invoke<0xEE19A033ABB7EEEE, BOOL>(); } // EE19A033ABB7EEEE 4A23B9C9
	static uint32_t NETWORK_SESSION_ENTER(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x57E9A335D87D3C04, uint32_t>(p0, p1, p2, p3, p4, p5); } // 57E9A335D87D3C04 543CD2BE
	static BOOL _0xB5FC4ADFB510C91C(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3) { return rage::NativeInvoke::Invoke<0xB5FC4ADFB510C91C, BOOL>(p0, p1, p2, p3); } // B5FC4ADFB510C91C 4E53202A
	static BOOL _0x5F6784BECA53D0DE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x5F6784BECA53D0DE, BOOL>(p0, p1, p2, p3, p4); } // 5F6784BECA53D0DE D7624E6B
	static BOOL _0x38DC83FDA3896B7A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x38DC83FDA3896B7A, BOOL>(p0, p1, p2, p3); } // 38DC83FDA3896B7A 3F75CC38
	static BOOL NETWORK_SESSION_HOST(uint32_t p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xC145DAA33405D124, BOOL>(p0, p1, p2); } // C145DAA33405D124 6716460F
	static BOOL _0x809FA71A3B38EFA4(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x809FA71A3B38EFA4, BOOL>(p0, p1); } // 809FA71A3B38EFA4 8AC9EA19
	static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x9CDE54643F082129, BOOL>(p0, p1); } // 9CDE54643F082129 26864403
	static BOOL _0x20778865CB6946C4() { return rage::NativeInvoke::Invoke<0x20778865CB6946C4, BOOL>(); } // 20778865CB6946C4 56E75FE4
	static BOOL _0x3CF738BBB9A8372B() { return rage::NativeInvoke::Invoke<0x3CF738BBB9A8372B, BOOL>(); } // 3CF738BBB9A8372B A95299B9
	static BOOL _0x56C339A17D4102E5() { return rage::NativeInvoke::Invoke<0x56C339A17D4102E5, BOOL>(); } // 56C339A17D4102E5 3D2C1916
	static BOOL _0x64182B770CC5AF45() { return rage::NativeInvoke::Invoke<0x64182B770CC5AF45, BOOL>(); } // 64182B770CC5AF45 DB67785D
	static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return rage::NativeInvoke::Invoke<0xE3917E4D608D7D, BOOL>(p0, p1); } // E3917E4D608D7D BCACBEA2
	static void NETWORK_SESSION_KICK_PLAYER(uint32_t p0) { rage::NativeInvoke::Invoke<0x531AA7084B2B9A64, uint32_t>(p0); } // 531AA7084B2B9A64 1E20138A
	static BOOL _0x7D76E3EA9E082DD9(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7D76E3EA9E082DD9, BOOL>(p0); } // 7D76E3EA9E082DD9 8A559D26
	static BOOL _0x197559FB40270739() { return rage::NativeInvoke::Invoke<0x197559FB40270739, BOOL>(); } // 197559FB40270739
	static BOOL _0x74B9283A24EF798E() { return rage::NativeInvoke::Invoke<0x74B9283A24EF798E, BOOL>(); } // 74B9283A24EF798E
	static void _0x24E01D4C14E3F20E(uint32_t p0) { rage::NativeInvoke::Invoke<0x24E01D4C14E3F20E, uint32_t>(p0); } // 24E01D4C14E3F20E 3C3E2AB6
	static void _0x581E51DE9A868E89(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x581E51DE9A868E89, uint32_t>(p0, p1); } // 581E51DE9A868E89 5F29A7E0
	static uint32_t _0xA72830288D44B063(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA72830288D44B063, uint32_t>(p0); } // A72830288D44B063 36EAD960
	static void _0x80571E35A63416EB(uint32_t p0) { rage::NativeInvoke::Invoke<0x80571E35A63416EB, uint32_t>(p0); } // 80571E35A63416EB 5BE529F7
	static void _0xC354BCDF219C192(uint32_t p0) { rage::NativeInvoke::Invoke<0xC354BCDF219C192, uint32_t>(p0); } // C354BCDF219C192 454C7B67
	static void _0xE365A413E4AB79B1(uint32_t p0) { rage::NativeInvoke::Invoke<0xE365A413E4AB79B1, uint32_t>(p0); } // E365A413E4AB79B1 E5961511
	static void _0xDFFFF8FA5D87115(BOOL p0) { rage::NativeInvoke::Invoke<0xDFFFF8FA5D87115, uint32_t>(p0); } // DFFFF8FA5D87115 AE396263
	static void _0xC956F5FBF50C5B4D(uint32_t p0) { rage::NativeInvoke::Invoke<0xC956F5FBF50C5B4D, uint32_t>(p0); } // C956F5FBF50C5B4D 913FD7D6
	static void _0xE537E3D1B3ED07C(BOOL p0) { rage::NativeInvoke::Invoke<0xE537E3D1B3ED07C, uint32_t>(p0); } // E537E3D1B3ED07C B3D9A67F
	static void _0xA0893682894A5DFA(uint32_t p0) { rage::NativeInvoke::Invoke<0xA0893682894A5DFA, uint32_t>(p0); } // A0893682894A5DFA 6CC062FC
	static void _0xD8EEE077FEF5D2EE() { rage::NativeInvoke::Invoke<0xD8EEE077FEF5D2EE, uint32_t>(); } // D8EEE077FEF5D2EE 57F9BC83
	static void _0x959D08A2A2C7D17F(BOOL p0) { rage::NativeInvoke::Invoke<0x959D08A2A2C7D17F, uint32_t>(p0); } // 959D08A2A2C7D17F F3768F90
	static void _0xE99A27946CE8E1D3(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE99A27946CE8E1D3, uint32_t>(p0, p1); } // E99A27946CE8E1D3 0EC62629
	static void _0x05E1485B5338AE56B() { rage::NativeInvoke::Invoke<0x05E1485B5338AE56B, uint32_t>(); } // 05E1485B5338AE56B 5E557307
	static void _0x41B5A23A4D978CAE(uint32_t *p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x41B5A23A4D978CAE, uint32_t>(p0, p1, p2); } // 41B5A23A4D978CAE 74E8C53E
	static void _0xCF25B7144365B6C4(uint32_t p0) { rage::NativeInvoke::Invoke<0xCF25B7144365B6C4, uint32_t>(p0); } // CF25B7144365B6C4 959E43A3
	static BOOL _0x6FEC4B4CC9D4DE3B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6FEC4B4CC9D4DE3B, BOOL>(p0); } // 6FEC4B4CC9D4DE3B 7771AB83
	static BOOL _0x71BCDC2206204346(uint32_t p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0x71BCDC2206204346, BOOL>(p0, p1, p2, p3); } // 71BCDC2206204346 A13045D4
	static BOOL NETWORK_IS_FINDING_GAMERS() { return rage::NativeInvoke::Invoke<0x8CDE360ECA8843ED, BOOL>(); } // 8CDE360ECA8843ED A6DAA79F
	static BOOL _0xB6891F01E19730B4() { return rage::NativeInvoke::Invoke<0xB6891F01E19730B4, BOOL>(); } // B6891F01E19730B4 BEDC4503
	static uint32_t NETWORK_GET_NUM_FOUND_GAMERS() { return rage::NativeInvoke::Invoke<0xA5BAD8A85A0F188A, uint32_t>(); } // A5BAD8A85A0F188A F4B80C7E
	static BOOL NETWORK_GET_FOUND_GAMER(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x27E73373192A5767, BOOL>(p0, p1); } // 27E73373192A5767 A08C9141
	static void NETWORK_CLEAR_FOUND_GAMERS() { rage::NativeInvoke::Invoke<0xACC57E420A457028, uint32_t>(); } // ACC57E420A457028 6AA9A154
	static BOOL _0x529C216188DF4549(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x529C216188DF4549, BOOL>(p0); } // 529C216188DF4549 42BD0780
	static BOOL _0x6379315D56F34266() { return rage::NativeInvoke::Invoke<0x6379315D56F34266, BOOL>(); } // 6379315D56F34266 BEB98840
	static BOOL _0x20E7062F02164437() { return rage::NativeInvoke::Invoke<0x20E7062F02164437, BOOL>(); } // 20E7062F02164437 08029970
	static BOOL _0x73BC072354A109E4() { return rage::NativeInvoke::Invoke<0x73BC072354A109E4, BOOL>(); } // 73BC072354A109E4 C871E745
	static BOOL _0x0B1D50F6D059F24C1(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x0B1D50F6D059F24C1, BOOL>(p0, p1); } // 0B1D50F6D059F24C1 B5ABC4B4
	static void _0xC47C624A11F2C6E6() { rage::NativeInvoke::Invoke<0xC47C624A11F2C6E6, uint32_t>(); } // C47C624A11F2C6E6 3F7EDBBD
	static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { rage::NativeInvoke::Invoke<0x1B2E2A4CD0944394, uint32_t>(); } // 1B2E2A4CD0944394 3D6360B5
	static void NETWORK_SESSION_CANCEL_INVITE() { rage::NativeInvoke::Invoke<0x37674934F1DD2487, uint32_t>(); } // 37674934F1DD2487 20317535
	static void _0xFFE9E412D439BF63() { rage::NativeInvoke::Invoke<0xFFE9E412D439BF63, uint32_t>(); } // FFE9E412D439BF63 3FD49D3B
	static BOOL NETWORK_HAS_PENDING_INVITE() { return rage::NativeInvoke::Invoke<0xF8A03C31557ED686, BOOL>(); } // F8A03C31557ED686 0C207D6E
	static uint32_t _0xE49B8EC0B318F452() { return rage::NativeInvoke::Invoke<0xE49B8EC0B318F452, uint32_t>(); } // E49B8EC0B318F452 FBBAC350
	static BOOL _0xF6A0AC93A2A3865B() { return rage::NativeInvoke::Invoke<0xF6A0AC93A2A3865B, BOOL>(); } // F6A0AC93A2A3865B 0907A6BF
	static uint32_t _0x81DA40D94D4F5622() { return rage::NativeInvoke::Invoke<0x81DA40D94D4F5622, uint32_t>(); } // 81DA40D94D4F5622 6A0BEA60
	static void NETWORK_SESSION_GET_INVITER(uint32_t *p0) { rage::NativeInvoke::Invoke<0x703E2DF2988146F8, uint32_t>(p0); } // 703E2DF2988146F8 E9C6B3FD
	static BOOL _0x19A011A69A24FC4C() { return rage::NativeInvoke::Invoke<0x19A011A69A24FC4C, BOOL>(); } // 19A011A69A24FC4C 3EA9D44C
	static void NETWORK_SUPPRESS_INVITE(BOOL p0) { rage::NativeInvoke::Invoke<0x173F2A184D62D794, uint32_t>(p0); } // 173F2A184D62D794 323DC78C
	static void NETWORK_BLOCK_INVITES(BOOL p0) { rage::NativeInvoke::Invoke<0x705FA48E5697018F, uint32_t>(p0); } // 705FA48E5697018F D156FD1A
	static void _0x72ECBE6703E2ECCC() { rage::NativeInvoke::Invoke<0x72ECBE6703E2ECCC, uint32_t>(); } // 72ECBE6703E2ECCC 32B7A076
	static void _0x8A336F517BEF9569(BOOL p0) { rage::NativeInvoke::Invoke<0x8A336F517BEF9569, uint32_t>(p0); } // 8A336F517BEF9569 0FCE995D
	static void _0x6E761E21A4A8DB09(BOOL p0) { rage::NativeInvoke::Invoke<0x6E761E21A4A8DB09, uint32_t>(p0); } // 6E761E21A4A8DB09 A639DCA2
	static BOOL _0x199278F86069A256() { return rage::NativeInvoke::Invoke<0x199278F86069A256, BOOL>(); } // 199278F86069A256 70ED476A
	static void _0xEF4899DB4D75491() { rage::NativeInvoke::Invoke<0xEF4899DB4D75491, uint32_t>(); } // EF4899DB4D75491 50507BED
	static void NETWORK_SESSION_HOST_SINGLE_PLAYER(uint32_t p0) { rage::NativeInvoke::Invoke<0xE9A83D3659E54BEF, uint32_t>(p0); } // E9A83D3659E54BEF F3B1CA85
	static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { rage::NativeInvoke::Invoke<0xF0FEC28CF157A0CB, uint32_t>(); } // F0FEC28CF157A0CB C692F86A
	static uint32_t NETWORK_IS_GAME_IN_PROGRESS() { return rage::NativeInvoke::Invoke<0xD95428C8AA1DBBF2, uint32_t>(); } // D95428C8AA1DBBF2 09B88E3E
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return rage::NativeInvoke::Invoke<0x1E4D433A48A6F7DC, BOOL>(); } // 1E4D433A48A6F7DC 715CB8C4
	static BOOL NETWORK_IS_IN_SESSION() { return rage::NativeInvoke::Invoke<0xD5762A6870CA7430, BOOL>(); } // D5762A6870CA7430 4BC4105E
	static BOOL NETWORK_IS_SESSION_STARTED() { return rage::NativeInvoke::Invoke<0x452817FC180A1B56, BOOL>(); } // 452817FC180A1B56 9D854A37
	static BOOL NETWORK_IS_SESSION_BUSY() { return rage::NativeInvoke::Invoke<0x7AF31E5812BF13B, BOOL>(); } // 7AF31E5812BF13B 8592152D
	static BOOL NETWORK_CAN_SESSION_END() { return rage::NativeInvoke::Invoke<0x15D7469B63A1F2A7, BOOL>(); } // 15D7469B63A1F2A7 E1FCCDBA
	static void _0x3F93764742382AA9(BOOL p0) { rage::NativeInvoke::Invoke<0x3F93764742382AA9, uint32_t>(p0); } // 3F93764742382AA9 7017257D
	static uint32_t _0xB8AEB705FE005986() { return rage::NativeInvoke::Invoke<0xB8AEB705FE005986, uint32_t>(); } // B8AEB705FE005986 4977AC28
	static void _0x41DA4911D6725B35(BOOL p0) { rage::NativeInvoke::Invoke<0x41DA4911D6725B35, uint32_t>(p0); } // 41DA4911D6725B35 E6EEF8AF
	static void _0xAA5B5DFB4FED5F1E(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xAA5B5DFB4FED5F1E, uint32_t>(p0, p1); } // AA5B5DFB4FED5F1E 6BB93227
	static void NETWORK_SESSION_VOICE_HOST() { rage::NativeInvoke::Invoke<0x84F393FF709C6230, uint32_t>(); } // 84F393FF709C6230 345C2980
	static void NETWORK_SESSION_VOICE_LEAVE() { rage::NativeInvoke::Invoke<0xE0EAE35FBD38899, uint32_t>(); } // E0EAE35FBD38899 E566C7DA
	static void _0xF8D4D87208452DBF(uint32_t *p0) { rage::NativeInvoke::Invoke<0xF8D4D87208452DBF, uint32_t>(p0); } // F8D4D87208452DBF 9DFD89E6
	static void NETWORK_SET_KEEP_FOCUSPOINT(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xDF11CF2E352E2FFB, uint32_t>(p0, p1); } // DF11CF2E352E2FFB 075321B5
	static void _0x3EE95D22EAE5A902(uint32_t p0) { rage::NativeInvoke::Invoke<0x3EE95D22EAE5A902, uint32_t>(p0); } // 3EE95D22EAE5A902 6EFC2FD0
	static BOOL _0x734AE915F79C37CE() { return rage::NativeInvoke::Invoke<0x734AE915F79C37CE, BOOL>(); } // 734AE915F79C37CE 60AA4AA1
	static BOOL _0xD2F7650899BABBF8() { return rage::NativeInvoke::Invoke<0xD2F7650899BABBF8, BOOL>(); } // D2F7650899BABBF8 132CA01E
	static BOOL NETWORK_SEND_TEXT_MESSAGE(const char *p0, uint64_t* p1) { return rage::NativeInvoke::Invoke<0xE1C404578F35ECB9, BOOL>(p0, p1); } // E1C404578F35ECB9 AFFEA720
	static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL p0) { rage::NativeInvoke::Invoke<0xF82E1F630503B034, uint32_t>(p0); } // F82E1F630503B034 FC9AD060
	static uint32_t NETWORK_IS_ACTIVITY_SPECTATOR() { return rage::NativeInvoke::Invoke<0xE80CFBE8CE6466F8, uint32_t>(); } // E80CFBE8CE6466F8 AF329720
	static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(uint32_t p0) { rage::NativeInvoke::Invoke<0x1732494BD79FD922, uint32_t>(p0); } // 1732494BD79FD922 74E0BC0A
	static uint32_t NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return rage::NativeInvoke::Invoke<0xA1518C9DF2C571A0, uint32_t>(p0); } // A1518C9DF2C571A0 31F951FD
	static uint32_t NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xBE22C00DCB67EBE2, uint32_t>(p0); } // BE22C00DCB67EBE2 58F1DF7D
	static uint32_t NETWORK_HOST_TRANSITION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0xA003619DFE231014, uint32_t>(p0, p1, p2, p3, p4, p5); } // A003619DFE231014 146764FB
	static BOOL _0x30CE85004F919BBA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x30CE85004F919BBA, BOOL>(p0, p1, p2, p3); } // 30CE85004F919BBA 2FF65C0B
	static BOOL _0x4811354204245ECC(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x4811354204245ECC, BOOL>(p0, p1, p2, p3); } // 4811354204245ECC 47D61C99
	static BOOL _0x60D338F516C6222A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t *p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x60D338F516C6222A, BOOL>(p0, p1, p2, p3, p4, p5); } // 60D338F516C6222A 5CE60A11
	static BOOL _0x99290C7A9CA5BCDA() { return rage::NativeInvoke::Invoke<0x99290C7A9CA5BCDA, BOOL>(); } // 99290C7A9CA5BCDA 0D7E5CF9
	static void _0x64E930151A0D95CF() { rage::NativeInvoke::Invoke<0x64E930151A0D95CF, uint32_t>(); } // 64E930151A0D95CF 36A5F2DA
	static void _0xD88F70BCF3A9D8FC(BOOL p0) { rage::NativeInvoke::Invoke<0xD88F70BCF3A9D8FC, uint32_t>(p0); } // D88F70BCF3A9D8FC 7EF353E1
	static void _0x19F4C5FF6D3907F7(BOOL p0) { rage::NativeInvoke::Invoke<0x19F4C5FF6D3907F7, uint32_t>(p0); } // 19F4C5FF6D3907F7 F60986FC
	static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(uint32_t *p0) { rage::NativeInvoke::Invoke<0x3FFBF0BF806563CD, uint32_t>(p0); } // 3FFBF0BF806563CD 1DD01FE7
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { rage::NativeInvoke::Invoke<0x58329107F470B57E, uint32_t>(); } // 58329107F470B57E 8BB336F7
	static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x6333288B5F36B698, BOOL>(p0, p1); } // 6333288B5F36B698 5332E645
	static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(uint32_t *p0) { rage::NativeInvoke::Invoke<0x46D7D97BBCA027C8, uint32_t>(p0); } // 46D7D97BBCA027C8 17F1C69D
	static uint32_t NETWORK_LEAVE_TRANSITION() { return rage::NativeInvoke::Invoke<0xFD2550E86ECD5E50, uint32_t>(); } // FD2550E86ECD5E50 3A3599B7
	static BOOL NETWORK_LAUNCH_TRANSITION() { return rage::NativeInvoke::Invoke<0xC9CA4D385D2067B0, BOOL>(); } // C9CA4D385D2067B0 E3570BA2
	static void _0x82CA213FA367D98A() { rage::NativeInvoke::Invoke<0x82CA213FA367D98A, uint32_t>(); } // 82CA213FA367D98A B59D74CA
	static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x7482B6A5E58FEAC3, BOOL>(p0, p1); } // 7482B6A5E58FEAC3 1B2114D2
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, uint32_t p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xDDD81BB432B11186, BOOL>(p0, p1, p2); } // DDD81BB432B11186 58AFBE63
	static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(uint32_t *p0, uint32_t p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xA9EC1E5F53E6342, BOOL>(p0, p1, p2, p3); } // A9EC1E5F53E6342 C7CB8ADF
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(uint32_t *p0, uint32_t p1, uint32_t p2, BOOL p3, BOOL p4) { return rage::NativeInvoke::Invoke<0x3A12EFDC4B720CB3, BOOL>(p0, p1, p2, p3, p4); } // 3A12EFDC4B720CB3 AD13375E
	static uint32_t NETWORK_IS_TRANSITION_TO_GAME() { return rage::NativeInvoke::Invoke<0x1F983B24242B8980, uint32_t>(); } // 1F983B24242B8980 17146B2B
	static uint32_t NETWORK_GET_TRANSITION_MEMBERS(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x9076887FD8B12099, uint32_t>(p0, p1); } // 9076887FD8B12099 31F19263
	static void _0x3CD52ABD4A8D6C0C(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x3CD52ABD4A8D6C0C, uint32_t>(p0, p1); } // 3CD52ABD4A8D6C0C CEE79711
	static void _0x81DAEAA09A320AD4(uint32_t p0, uint32_t *p1, BOOL p2) { rage::NativeInvoke::Invoke<0x81DAEAA09A320AD4, uint32_t>(p0, p1, p2); } // 81DAEAA09A320AD4 E0C28DB5
	static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3, BOOL p4) { return rage::NativeInvoke::Invoke<0xCB681D685A344ECC, BOOL>(p0, p1, p2, p3, p4); } // CB681D685A344ECC 468B0884
	static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x84F5BEC0C7CBE89E, BOOL>(p0); } // 84F5BEC0C7CBE89E 03383F57
	static BOOL NETWORK_IS_TRANSITION_HOST() { return rage::NativeInvoke::Invoke<0x0C81E947A9B8DB6C1, BOOL>(); } // 0C81E947A9B8DB6C1 0C0900BC
	static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x50840D79564620AE, BOOL>(p0); } // 50840D79564620AE 0E2854C4
	static BOOL NETWORK_GET_TRANSITION_HOST(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x87A69D98991B1062, BOOL>(p0); } // 87A69D98991B1062 73098D40
	static uint32_t NETWORK_IS_IN_TRANSITION() { return rage::NativeInvoke::Invoke<0x4EAB5B2233889408, uint32_t>(); } // 4EAB5B2233889408 C3CDB626
	static uint32_t NETWORK_IS_TRANSITION_STARTED() { return rage::NativeInvoke::Invoke<0x5EEC2C7CDF25271C, uint32_t>(); } // 5EEC2C7CDF25271C 7917E111
	static uint32_t NETWORK_IS_TRANSITION_BUSY() { return rage::NativeInvoke::Invoke<0x5E1E03EEE25C3409, uint32_t>(); } // 5E1E03EEE25C3409 A357A2C6
	static uint32_t _0x3AB2B9170251C863() { return rage::NativeInvoke::Invoke<0x3AB2B9170251C863, uint32_t>(); } // 3AB2B9170251C863 8262C70E
	static void _0x9DCBCE87AA2359FE() { rage::NativeInvoke::Invoke<0x9DCBCE87AA2359FE, uint32_t>(); } // 9DCBCE87AA2359FE C71E607B
	static void _0xBE566F180F41C3FC() { rage::NativeInvoke::Invoke<0xBE566F180F41C3FC, uint32_t>(); } // BE566F180F41C3FC 82D32D07
	static BOOL _0x909ECF9DACCA3495() { return rage::NativeInvoke::Invoke<0x909ECF9DACCA3495, BOOL>(); } // 909ECF9DACCA3495 C901AA9F
	static void _0x138BD4DEF8321312(uint32_t p0) { rage::NativeInvoke::Invoke<0x138BD4DEF8321312, uint32_t>(p0); } // 138BD4DEF8321312 CCA9C022
	static void _0x9703CAB6269F516B(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x9703CAB6269F516B, uint32_t>(p0, p1); } // 9703CAB6269F516B 1E5F6AEF
	static void _0x9013F784A4987620(BOOL p0) { rage::NativeInvoke::Invoke<0x9013F784A4987620, uint32_t>(p0); } // 9013F784A4987620 0532DDD2
	static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(uint32_t p0) { return rage::NativeInvoke::Invoke<0x857597190150575B, BOOL>(p0); } // 857597190150575B 4ABD1E59
	static BOOL _0xAF0E4C98464E4A39(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAF0E4C98464E4A39, BOOL>(p0); } // AF0E4C98464E4A39 CDEBCCE7
	static BOOL NETWORK_JOIN_TRANSITION(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAC9BB15E5D72D468, BOOL>(p0); } // AC9BB15E5D72D468 B054EC4B
	static BOOL _0xBCE0455A4726689B(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xBCE0455A4726689B, BOOL>(p0); } // BCE0455A4726689B 4F41DF6B
	static BOOL NETWORK_IS_ACTIVITY_SESSION() { return rage::NativeInvoke::Invoke<0x0971F0C5992C6780, BOOL>(); } // 0971F0C5992C6780 577DAA8A
	static void _0x87503E0E47E86295(uint32_t p0) { rage::NativeInvoke::Invoke<0x87503E0E47E86295, uint32_t>(p0); } // 87503E0E47E86295 18F03AFD
	static BOOL _0xF891D11A51794EB3(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xF891D11A51794EB3, BOOL>(p0, p1, p2, p3); } // F891D11A51794EB3 8B99B72B
	static BOOL _0x89660F74ADF6E369(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x89660F74ADF6E369, BOOL>(p0, p1, p2, p3); } // 89660F74ADF6E369 877C0E1C
	static uint32_t _0x5F0FBB285CAE0703(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5F0FBB285CAE0703, uint32_t>(p0); } // 5F0FBB285CAE0703 5E832444
	static uint32_t _0x16413FF522F6F328() { return rage::NativeInvoke::Invoke<0x16413FF522F6F328, uint32_t>(); } // 16413FF522F6F328 3FDA00F3
	static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x408DB1789CFE30A5, BOOL>(p0); } // 408DB1789CFE30A5 E5DA4CED
	static BOOL _0x5A24372B5B3E4B26(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5A24372B5B3E4B26, BOOL>(p0); } // 5A24372B5B3E4B26 93C665FA
	static uint32_t _0x9D850C06018F49E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9D850C06018F49E, uint32_t>(p0); } // 9D850C06018F49E D50DF46C
	static uint32_t _0x4BA54829D69C29D(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4BA54829D69C29D, uint32_t>(p0); } // 4BA54829D69C29D 19EC65D9
	static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xE33C905B20D9505C, BOOL>(p0, p1); } // E33C905B20D9505C B2451429
	static uint32_t _0xAA61F9720822A7EE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAA61F9720822A7EE, uint32_t>(p0); } // AA61F9720822A7EE C5E0C989
	static uint32_t _0xA312C1D458D0F1F5(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA312C1D458D0F1F5, uint32_t>(p0); } // A312C1D458D0F1F5 A4302183
	static uint32_t _0xE81FCA21231F5F8A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE81FCA21231F5F8A, uint32_t>(p0); } // E81FCA21231F5F8A 51B2D848
	static uint32_t _0x5FBAB3D18A11B1B7(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5FBAB3D18A11B1B7, uint32_t>(p0); } // 5FBAB3D18A11B1B7 4677C656
	static BOOL _0xA294D4127E525BAC(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA294D4127E525BAC, BOOL>(p0); } // A294D4127E525BAC F5E3401C
	static BOOL _0x1450675C5E729280(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1450675C5E729280, BOOL>(p0); } // 1450675C5E729280 7D593B4C
	static BOOL _0xF94F8D000237823A() { return rage::NativeInvoke::Invoke<0xF94F8D000237823A, BOOL>(); } // F94F8D000237823A E96CFE7D
	static BOOL _0x299B8C19B48DEABB() { return rage::NativeInvoke::Invoke<0x299B8C19B48DEABB, BOOL>(); } // 299B8C19B48DEABB AB969F00
	static BOOL _0x7492CE68CF4208F6() { return rage::NativeInvoke::Invoke<0x7492CE68CF4208F6, BOOL>(); } // 7492CE68CF4208F6 3242F952
	static void _0x73169F47F6E2434E() { rage::NativeInvoke::Invoke<0x73169F47F6E2434E, uint32_t>(); } // 73169F47F6E2434E 9773F36A
	static void NETWORK_REMOVE_TRANSITION_INVITE(uint32_t *p0) { rage::NativeInvoke::Invoke<0xCC7AA13AE665D7B9, uint32_t>(p0); } // CC7AA13AE665D7B9 FDE84CB7
	static void _0xB11A8725DE11DA85() { rage::NativeInvoke::Invoke<0xB11A8725DE11DA85, uint32_t>(); } // B11A8725DE11DA85 F7134E73
	static void _0x7A3772DCF7C6E117() { rage::NativeInvoke::Invoke<0x7A3772DCF7C6E117, uint32_t>(); } // 7A3772DCF7C6E117 C47352E7
	static BOOL NETWORK_INVITE_GAMERS(uint32_t *p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0x9AD1DBFDA4A4D753, BOOL>(p0, p1, p2, p3); } // 9AD1DBFDA4A4D753 52FB8074
	static BOOL _0xFABC83CAD970B4F2(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xFABC83CAD970B4F2, BOOL>(p0); } // FABC83CAD970B4F2 EC651BC0
	static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x39C89794FF7547D6, BOOL>(p0); } // 39C89794FF7547D6 72BA00CE
	static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x120C5B476EA561A9, BOOL>(p0); } // 120C5B476EA561A9 FD95899E
	static void _0x8CEA7DF8B56A0527(uint32_t *p0) { rage::NativeInvoke::Invoke<0x8CEA7DF8B56A0527, uint32_t>(p0); } // 8CEA7DF8B56A0527
	static void _0x0880E5DC8910002CB(uint32_t *p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x0880E5DC8910002CB, uint32_t>(p0, p1); } // 0880E5DC8910002CB 0808D4CC
	static BOOL FILLOUT_PM_PLAYER_LIST(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x906617497ABEF434, BOOL>(p0, p1, p2); } // 906617497ABEF434 CE40F423
	static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xBDD5BCC9D584461E, BOOL>(p0, p1, p2, p3); } // BDD5BCC9D584461E B8DF604E
	static BOOL USING_NETWORK_WEAPONTYPE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4E0E67DCA38E87, BOOL>(p0); } // 4E0E67DCA38E87 F49C1533
	static BOOL _0xFA9B0DF15B5F4073() { return rage::NativeInvoke::Invoke<0xFA9B0DF15B5F4073, BOOL>(); } // FA9B0DF15B5F4073 A812B6CB
	static uint32_t _0x0701BBF8113A5FD05() { return rage::NativeInvoke::Invoke<0x0701BBF8113A5FD05, uint32_t>(); } // 0701BBF8113A5FD05
	static uint32_t _0x4A8107044486CDB9(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x4A8107044486CDB9, uint32_t>(p0, p1); } // 4A8107044486CDB9 F30E5814
	static BOOL _0xD24771C9305CBE3D() { return rage::NativeInvoke::Invoke<0xD24771C9305CBE3D, BOOL>(); } // D24771C9305CBE3D C6609191
	static BOOL _0xF3F7824D312A88E6(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xF3F7824D312A88E6, BOOL>(p0); } // F3F7824D312A88E6 51367B34
	static uint32_t NETWORK_IS_IN_PARTY() { return rage::NativeInvoke::Invoke<0xE6B2A39EDCAFDFA8, uint32_t>(); } // E6B2A39EDCAFDFA8 F9D7D67D
	static uint32_t NETWORK_IS_PARTY_MEMBER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x91B8EA12DB5A5C26, uint32_t>(p0); } // 91B8EA12DB5A5C26 1D0C929D
	static BOOL _0xA5151B1028F37C95() { return rage::NativeInvoke::Invoke<0xA5151B1028F37C95, BOOL>(); } // A5151B1028F37C95 9156EFC0
	static BOOL _0xB6096E365D3716BC() { return rage::NativeInvoke::Invoke<0xB6096E365D3716BC, BOOL>(); } // B6096E365D3716BC 8FA6EE0E
	static void _0x60D205908A340F37() { rage::NativeInvoke::Invoke<0x60D205908A340F37, uint32_t>(); } // 60D205908A340F37 7F70C15A
	static void _0xD62FD9C106FD7370(uint32_t p0) { rage::NativeInvoke::Invoke<0xD62FD9C106FD7370, uint32_t>(p0); } // D62FD9C106FD7370 8179C48A
	static void _0xB084459C8FC4F4A2(uint32_t p0) { rage::NativeInvoke::Invoke<0xB084459C8FC4F4A2, uint32_t>(p0); } // B084459C8FC4F4A2 41702C8A
	static uint32_t _0x5C795171BEE56D12() { return rage::NativeInvoke::Invoke<0x5C795171BEE56D12, uint32_t>(); } // 5C795171BEE56D12 208DD848
	static uint32_t _0x8C8B290549B85919(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x8C8B290549B85919, uint32_t>(p0, p1); } // 8C8B290549B85919 F9B6426D
	static BOOL NETWORK_PLAYER_IS_CHEATER() { return rage::NativeInvoke::Invoke<0xA33FE9A284DEBCB6, BOOL>(); } // A33FE9A284DEBCB6 A51DC214
	static uint32_t _0x5E6F2F8B23D1759D() { return rage::NativeInvoke::Invoke<0x5E6F2F8B23D1759D, uint32_t>(); } // 5E6F2F8B23D1759D 1720ABA6
	static BOOL _0x9CA2BE3B1B25E1F6() { return rage::NativeInvoke::Invoke<0x9CA2BE3B1B25E1F6, BOOL>(); } // 9CA2BE3B1B25E1F6 A19708E3
	static BOOL _0xCD538DB92E481E64(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xCD538DB92E481E64, BOOL>(p0, p1, p2); } // CD538DB92E481E64 F9A51B92
	static BOOL _0x15EAF08C20144AD9(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x15EAF08C20144AD9, BOOL>(p0, p1, p2); } // 15EAF08C20144AD9 4C2C6B6A
	static void _0xECFB570FE74C0DFB(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xECFB570FE74C0DFB, uint32_t>(p0, p1); } // ECFB570FE74C0DFB 4818ACD0
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uint32_t p0, BOOL p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x4C2DEED020A287EF, uint32_t>(p0, p1, p2); } // 4C2DEED020A287EF 470810ED
	static BOOL _0x9F2729CB26037C3F(uint32_t p0, BOOL p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x9F2729CB26037C3F, BOOL>(p0, p1, p2); } // 9F2729CB26037C3F
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return rage::NativeInvoke::Invoke<0xD1738F09A13D367, BOOL>(); } // D1738F09A13D367 D9BF6549
	static uint32_t _0xF0C172200951A9A() { return rage::NativeInvoke::Invoke<0xF0C172200951A9A, uint32_t>(); } // F0C172200951A9A CCD8C02D
	static uint32_t _0x6006E2AB72A77741() { return rage::NativeInvoke::Invoke<0x6006E2AB72A77741, uint32_t>(); } // 6006E2AB72A77741 3E25A3C5
	static uint32_t NETWORK_GET_SCRIPT_STATUS() { return rage::NativeInvoke::Invoke<0x2B79F83CAD49E762, uint32_t>(); } // 2B79F83CAD49E762 2BE9235A
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x661B032797391228, uint32_t>(p0, p1); } // 661B032797391228 DAF3B0AE
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xEF4D8ADC6645E7F7, uint32_t>(p0, p1); } // EF4D8ADC6645E7F7 BE3D32B4
	static void _0xE2284AD135A9E2D4() { rage::NativeInvoke::Invoke<0xE2284AD135A9E2D4, uint32_t>(); } // E2284AD135A9E2D4 A71A1D2A
	static BOOL _0x483A743E1339A51() { return rage::NativeInvoke::Invoke<0x483A743E1339A51, BOOL>(); } // 483A743E1339A51 0B739F53
	static uint32_t NETWORK_GET_PLAYER_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6E852073107AE8FE, uint32_t>(p0); } // 6E852073107AE8FE BE1C1506
	static uint32_t NETWORK_GET_PARTICIPANT_INDEX(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB62DE86EAE026A00, uint32_t>(p0); } // B62DE86EAE026A00 C4D91094
	static uint32_t _0xB53DE20B11FF02FE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB53DE20B11FF02FE, uint32_t>(p0); } // B53DE20B11FF02FE 40DBF464
	static uint32_t NETWORK_GET_NUM_CONNECTED_PLAYERS() { return rage::NativeInvoke::Invoke<0xE175C83B2065112A, uint32_t>(); } // E175C83B2065112A F7952E62
	static BOOL NETWORK_IS_PLAYER_CONNECTED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC6B530D5751B117C, BOOL>(p0); } // C6B530D5751B117C 168EE2C2
	static uint32_t _0xB7E22652CC2A39C3() { return rage::NativeInvoke::Invoke<0xB7E22652CC2A39C3, uint32_t>(); } // B7E22652CC2A39C3 F4F13B06
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD0E2103B183CBA60, BOOL>(p0); } // D0E2103B183CBA60 4E2C348B
	static BOOL NETWORK_IS_PLAYER_ACTIVE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB832D52B86777A35, BOOL>(p0); } // B832D52B86777A35 43657B17
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE0AA590C8D413E3F, BOOL>(p0); } // E0AA590C8D413E3F B08B6992
	static BOOL NET_BUT() { return rage::NativeInvoke::Invoke<0x2CCDE625E685C339, BOOL>(); } // 2CCDE625E685C339 6970BA94
	static uint32_t NETWORK_GET_HOST_OF_THIS_SCRIPT() { return rage::NativeInvoke::Invoke<0x1045A3C91E014F8C, uint32_t>(); } // 1045A3C91E014F8C 89EA7B54
	static uint32_t NETWORK_GET_HOST_OF_SCRIPT(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x7ECD41540878264D, uint32_t>(p0, p1, p2); } // 7ECD41540878264D 9C95D0BB
	static void NETWORK_SET_MISSION_FINISHED() { rage::NativeInvoke::Invoke<0x8090314541F52B37, uint32_t>(); } // 8090314541F52B37 3083FAD7
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(uint32_t *p0, uint32_t p1, BOOL p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xE950C6ECABB8A1F2, BOOL>(p0, p1, p2, p3); } // E950C6ECABB8A1F2 4A65250C
	static uint32_t _0x6E3AA1F0B24A2507(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x6E3AA1F0B24A2507, uint32_t>(p0, p1, p2); } // 6E3AA1F0B24A2507 8F7D9F46
	static uint32_t _0x4C1F8BFCBF665ECC() { return rage::NativeInvoke::Invoke<0x4C1F8BFCBF665ECC, uint32_t>(); } // 4C1F8BFCBF665ECC DB8B5D71
	static BOOL _0x50CA0D60AA0C576B(uint32_t p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x50CA0D60AA0C576B, BOOL>(p0, p1, p2); } // 50CA0D60AA0C576B CEA55F4C
	static void _0x83428269E589D8EC() { rage::NativeInvoke::Invoke<0x83428269E589D8EC, uint32_t>(); } // 83428269E589D8EC 8DCFE77D
	static void _0x5DCCF4E39237A7DF() { rage::NativeInvoke::Invoke<0x5DCCF4E39237A7DF, uint32_t>(); } // 5DCCF4E39237A7DF 331D9A27
	static uint32_t PARTICIPANT_ID() { return rage::NativeInvoke::Invoke<0x4A2E9345D452154D, uint32_t>(); } // 4A2E9345D452154D 9C35A221
	static uint32_t PARTICIPANT_ID_TO_INT() { return rage::NativeInvoke::Invoke<0x9DCF1243D4AAD942, uint32_t>(); } // 9DCF1243D4AAD942 907498B0
	static uint32_t NETWORK_GET_DESTROYER_OF_NETWORK_ID(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xDB209D16617B9D30, uint32_t>(p0, p1); } // DB209D16617B9D30 4FCA6436
	static BOOL _0x34CC9E6A33706922(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x34CC9E6A33706922, BOOL>(p0, p1, p2); } // 34CC9E6A33706922 28A45454
	static uint32_t NETWORK_GET_ENTITY_KILLER_OF_PLAYER(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x4E0031459A9C15D5, uint32_t>(p0, p1); } // 4E0031459A9C15D5 A7E7E04F
	static void NETWORK_RESURRECT_LOCAL_PLAYER(float p0, float p1, float p2, uint32_t p3, uint32_t p4, uint32_t p5) { rage::NativeInvoke::Invoke<0x9C32E5EB35C1F4AC, uint32_t>(p0, p1, p2, p3, p4, p5); } // 9C32E5EB35C1F4AC F1F9D4B4
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(uint32_t p0) { rage::NativeInvoke::Invoke<0xA97BC2AA612D020B, uint32_t>(p0); } // A97BC2AA612D020B FEA9B85C
	static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return rage::NativeInvoke::Invoke<0x6AD9A2E74580EFA1, BOOL>(); } // 6AD9A2E74580EFA1 8DE13B36
	static void _0xA8AC5B96A8581942(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA8AC5B96A8581942, uint32_t>(p0, p1); } // A8AC5B96A8581942 8D27280E
	static void _0x670117EE933D3EA0(BOOL p0) { rage::NativeInvoke::Invoke<0x670117EE933D3EA0, uint32_t>(p0); } // 670117EE933D3EA0 B72F086D
	static BOOL _0x7A26B8C1333C27B0(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7A26B8C1333C27B0, BOOL>(p0); } // 7A26B8C1333C27B0 EDA68956
	static uint32_t NETWORK_GET_NETWORK_ID_FROM_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFB16D0E5BDC7C257, uint32_t>(p0); } // FB16D0E5BDC7C257 9E35DAB6
	static uint32_t NETWORK_GET_ENTITY_FROM_NETWORK_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0xADC2E4C3C87E6B02, uint32_t>(p0); } // ADC2E4C3C87E6B02 5B912C3F
	static BOOL _0xFD54DBFF23B29E98(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFD54DBFF23B29E98, BOOL>(p0); } // FD54DBFF23B29E98 D7F934F4
	static BOOL NETWORK_GET_ENTITY_IS_LOCAL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x09ACF2D423F8B5749, BOOL>(p0); } // 09ACF2D423F8B5749 813353ED
	static void _0x09E9AC75C2C553464(uint32_t p0) { rage::NativeInvoke::Invoke<0x09E9AC75C2C553464, uint32_t>(p0); } // 09E9AC75C2C553464 31A630A4
	static void _0x1AA0A83000D74922(uint32_t p0) { rage::NativeInvoke::Invoke<0x1AA0A83000D74922, uint32_t>(p0); } // 1AA0A83000D74922 5C645F64
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3D8BF0E3847B29E0, BOOL>(p0); } // 3D8BF0E3847B29E0 B8D2C99E
	static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB8C2D6B33E64EA14, BOOL>(p0); } // B8C2D6B33E64EA14 1E2E3177
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1301764D6FF2BC45, BOOL>(p0); } // 1301764D6FF2BC45 9262A60A
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC6EE326730271D0C, BOOL>(p0); } // C6EE326730271D0C 92E77D21
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9705E19F502858A3, BOOL>(p0); } // 9705E19F502858A3 A05FEBD7
	static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB1736597F4F6E120, BOOL>(p0); } // B1736597F4F6E120 F60DAAF6
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0FE0D96A75DA37EB0, BOOL>(p0); } // 0FE0D96A75DA37EB0 005FD797
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA00DF0C8355ADE8F, BOOL>(p0); } // A00DF0C8355ADE8F F7784FC8
	static BOOL NETWORK_HAS_CONTROL_OF_DOOR(uint32_t p0) { return rage::NativeInvoke::Invoke<0x67BE91BDDF4BD8A, BOOL>(p0); } // 67BE91BDDF4BD8A 136326EC
	static uint32_t VEH_TO_NET(uint32_t p0) { return rage::NativeInvoke::Invoke<0x61B4CBE0A0FF746E, uint32_t>(p0); } // 61B4CBE0A0FF746E F17634EB
	static uint32_t PED_TO_NET(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0522900D6F6631F0E, uint32_t>(p0); } // 0522900D6F6631F0E 86A0B759
	static uint32_t OBJ_TO_NET(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE552D459248217B5, uint32_t>(p0); } // E552D459248217B5 1E05F29F
	static uint32_t NET_TO_VEH(uint32_t p0) { return rage::NativeInvoke::Invoke<0xDACD0CF3BB366AB6, uint32_t>(p0); } // DACD0CF3BB366AB6 7E02FAEA
	static uint32_t NET_TO_PED(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE6286B95AEF7B8C2, uint32_t>(p0); } // E6286B95AEF7B8C2 87717DD4
	static uint32_t NET_TO_OBJ(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9F00512086D0A86F, uint32_t>(p0); } // 9F00512086D0A86F 27AA14D8
	static uint32_t NET_TO_ENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3CB82CF6E610C2A9, uint32_t>(p0); } // 3CB82CF6E610C2A9 5E149683
	static void NETWORK_GET_LOCAL_HANDLE(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x2F8919586947AAB, uint32_t>(p0, p1); } // 2F8919586947AAB 08023B16
	static void NETWORK_HANDLE_FROM_USER_ID(uint32_t *p0, uint32_t *p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x647D3161EDE06005, uint32_t>(p0, p1, p2); } // 647D3161EDE06005 74C2C1B7
	static void NETWORK_HANDLE_FROM_MEMBER_ID(uint32_t *p0, uint32_t *p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xF966A5BE3BFC269, uint32_t>(p0, p1, p2); } // F966A5BE3BFC269 9BFC9FE2
	static void NETWORK_HANDLE_FROM_PLAYER(uint32_t p0, uint64_t *p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xD7D678636A21203, uint32_t>(p0, p1, p2); } // D7D678636A21203 D3498917
	static void NETWORK_HANDLE_FROM_FRIEND(uint32_t p0, uint32_t *p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x100D1FD15D71008F, uint32_t>(p0, p1, p2); } // 100D1FD15D71008F 3B0BB3A3
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x19B3D9D0FD08C05D, BOOL>(p0); } // 19B3D9D0FD08C05D EBA00C2A
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return rage::NativeInvoke::Invoke<0x8044140AF1814A05, BOOL>(); } // 8044140AF1814A05 F000828E
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return rage::NativeInvoke::Invoke<0x7050CAF84FC5229E, BOOL>(); } // 7050CAF84FC5229E 89C2B5EA
	static uint32_t NETWORK_GET_GAMERTAG_FROM_HANDLE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xB912BC555C457096, uint32_t>(p0); } // B912BC555C457096 A18A1B26
	static uint32_t _0x266EE17B3F43CFCB(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x266EE17B3F43CFCB, uint32_t>(p0, p1); } // 266EE17B3F43CFCB
	static uint32_t _0xD63DA6A2E971E11C(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xD63DA6A2E971E11C, uint32_t>(p0, p1, p2); } // D63DA6A2E971E11C
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x8CBC243FE3F15719, BOOL>(p0, p1); } // 8CBC243FE3F15719 45975AE3
	static BOOL NETWORK_IS_HANDLE_VALID(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC9BC4B1CA2991FB3, BOOL>(p0, p1); } // C9BC4B1CA2991FB3 F0996C6E
	static uint32_t NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x3A0FA4556F0B1BB9, uint32_t>(p0); } // 3A0FA4556F0B1BB9 2E96EF1E
	static uint32_t NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC2CEC356504FEA3, uint32_t>(p0); } // C2CEC356504FEA3 62EF0A63
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x0C082A14929264FAD, BOOL>(p0); } // 0C082A14929264FAD 59127716
	static void NETWORK_SHOW_PROFILE_UI(uint32_t *p0) { rage::NativeInvoke::Invoke<0x5F782679B51A1633, uint32_t>(p0); } // 5F782679B51A1633 F00A20B0
	static uint32_t NETWORK_PLAYER_GET_NAME(uint32_t p0) { return rage::NativeInvoke::Invoke<0x54196AFC53E10C36, uint32_t>(p0); } // 54196AFC53E10C36 CE48F260
	static uint32_t _0x315E0F0E6CC07B1F(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x315E0F0E6CC07B1F, uint32_t>(p0, p1); } // 315E0F0E6CC07B1F 4EC0D983
	static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(uint32_t p0) { return rage::NativeInvoke::Invoke<0x71616108F549B30D, BOOL>(p0); } // 71616108F549B30D F6659045
	static BOOL _0xC29FA77E033D27B9(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC29FA77E033D27B9, BOOL>(p0); } // C29FA77E033D27B9 D265B049
	static BOOL NETWORK_IS_INACTIVE_PROFILE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x5F0BFD4AC2653B4A, BOOL>(p0); } // 5F0BFD4AC2653B4A 95481343
	static uint32_t NETWORK_GET_MAX_FRIENDS() { return rage::NativeInvoke::Invoke<0xC26730AED2311B5A, uint32_t>(); } // C26730AED2311B5A 048171BC
	static uint32_t NETWORK_GET_FRIEND_COUNT() { return rage::NativeInvoke::Invoke<0x67DB4596177F1772, uint32_t>(); } // 67DB4596177F1772 A396ACDE
	static uint32_t NETWORK_GET_FRIEND_NAME(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA67F0A084B59AEA0, uint32_t>(p0); } // A67F0A084B59AEA0 97420B6D
	static uint32_t _0x12F21CEA57728570(uint32_t p0) { return rage::NativeInvoke::Invoke<0x12F21CEA57728570, uint32_t>(p0); } // 12F21CEA57728570
	static BOOL NETWORK_IS_FRIEND_ONLINE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xB49A8202BE01069, BOOL>(p0); } // B49A8202BE01069 E0A42430
	static BOOL _0xADB93294A40CA459(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xADB93294A40CA459, BOOL>(p0); } // ADB93294A40CA459
	static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xAB850D7FE5B0F83E, BOOL>(p0); } // AB850D7FE5B0F83E C54365C2
	static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xA3A0B42746D2006D, BOOL>(p0); } // A3A0B42746D2006D 400BDDD9
	static BOOL NETWORK_IS_FRIEND(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x8EF73C99D8AA61C0, BOOL>(p0); } // 8EF73C99D8AA61C0 2DA4C282
	static uint32_t NETWORK_IS_PENDING_FRIEND(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0E4D7B1FA0D634EA2, uint32_t>(p0); } // 0E4D7B1FA0D634EA2 5C85FF81
	static BOOL NETWORK_IS_ADDING_FRIEND() { return rage::NativeInvoke::Invoke<0x8A7E759BB699483E, BOOL>(); } // 8A7E759BB699483E BB7EC8C4
	static BOOL NETWORK_ADD_FRIEND(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x3C74BD5F07A7A73F, BOOL>(p0, p1); } // 3C74BD5F07A7A73F 20E5B3EE
	static uint32_t CLEAR_PLAYER_BAILED_FROM_PLAYERICLE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC141A1B8E0252D2A, uint32_t>(p0); } // C141A1B8E0252D2A 94AE7172
	static BOOL GET_OBJ_ENTITY(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1185F8F24900CAB1, BOOL>(p0); } // 1185F8F24900CAB1 B802B671
	static BOOL NETWORK_CAN_SET_WAYPOINT() { return rage::NativeInvoke::Invoke<0x4A71D8A268A3247E, BOOL>(); } // 4A71D8A268A3247E 009E68F3
	static uint32_t _0xAD8588ED7B4BA3BD(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAD8588ED7B4BA3BD, uint32_t>(p0); } // AD8588ED7B4BA3BD 5C0AB2A9
	static BOOL _0x7EC6E93DA61BAB1D() { return rage::NativeInvoke::Invoke<0x7EC6E93DA61BAB1D, BOOL>(); } // 7EC6E93DA61BAB1D 9A176B6E
	static BOOL NETWORK_HAS_HEADSET() { return rage::NativeInvoke::Invoke<0xB70341F3B6C85A66, BOOL>(); } // B70341F3B6C85A66 A7DC5657
	static void _0xA473588D48246688(BOOL p0) { rage::NativeInvoke::Invoke<0xA473588D48246688, uint32_t>(p0); } // A473588D48246688 5C05B7E1
	static BOOL NETWORK_GAMER_HAS_HEADSET(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x9B37C1A497F85694, BOOL>(p0); } // 9B37C1A497F85694 D036DA4A
	static BOOL NETWORK_IS_GAMER_TALKING(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x8F37FEA40E8E02DA, BOOL>(p0); } // 8F37FEA40E8E02DA 99B58DBC
	static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xF6C8136A93AD52F9, BOOL>(p0); } // F6C8136A93AD52F9 D05EB7F6
	static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x2FC544E0D579DD81, BOOL>(p0); } // 2FC544E0D579DD81 001B4046
	static BOOL _0xA43BF634D54F8620(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xA43BF634D54F8620, BOOL>(p0); } // A43BF634D54F8620 7685B333
	static BOOL _0x6A271D2286C50CF3(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x6A271D2286C50CF3, BOOL>(p0); } // 6A271D2286C50CF3 3FDCC8D7
	static BOOL _0xC1A697B1A3BB1FE5(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xC1A697B1A3BB1FE5, BOOL>(p0); } // C1A697B1A3BB1FE5 D19B312C
	static BOOL _0xAE62E3288AAFD6C5(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xAE62E3288AAFD6C5, BOOL>(p0); } // AE62E3288AAFD6C5
	static BOOL _0x57CE5A7AE74AE2DE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x57CE5A7AE74AE2DE, BOOL>(p0); } // 57CE5A7AE74AE2DE
	static BOOL NETWORK_IS_PLAYER_TALKING(uint32_t p0) { return rage::NativeInvoke::Invoke<0x07326943B92733EC5, BOOL>(p0); } // 07326943B92733EC5 DA9FD9DB
	static BOOL NETWORK_PLAYER_HAS_HEADSET(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8861B7F6B89737F1, BOOL>(p0); } // 8861B7F6B89737F1 451FB6B6
	static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB0C4CAFF6BE27E8A, BOOL>(p0); } // B0C4CAFF6BE27E8A 7A21050E
	static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x619AC52B0FAF6C91, BOOL>(p0); } // 619AC52B0FAF6C91 E128F2B0
	static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7867A93EFB6C9999, BOOL>(p0); } // 7867A93EFB6C9999 AE4F4560
	static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9CB70611C2B13B0F, BOOL>(p0); } // 9CB70611C2B13B0F 953EF45E
	static float NETWORK_GET_PLAYER_LOUDNESS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE1E19A9CF9183A4B, float>(p0); } // E1E19A9CF9183A4B F2F67014
	static void NETWORK_SET_TALKER_PROXIMITY(float p0) { rage::NativeInvoke::Invoke<0xFB1E654E8FB3D849, uint32_t>(p0); } // FB1E654E8FB3D849 67555C66
	static float NETWORK_GET_TALKER_PROXIMITY() { return rage::NativeInvoke::Invoke<0x985BE22066D160C2, float>(); } // 985BE22066D160C2 19991ADD
	static void NETWORK_SET_VOICE_ACTIVE(BOOL p0) { rage::NativeInvoke::Invoke<0x872B4562A25B7351, uint32_t>(p0); } // 872B4562A25B7351 8011247F
	static void _0x1FA6F4D53173332B(BOOL p0) { rage::NativeInvoke::Invoke<0x1FA6F4D53173332B, uint32_t>(p0); } // 1FA6F4D53173332B 1A3EA6CD
	static void _0xD77A549BB3363CE3(BOOL p0) { rage::NativeInvoke::Invoke<0xD77A549BB3363CE3, uint32_t>(p0); } // D77A549BB3363CE3 CAB21090
	static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL p0) { rage::NativeInvoke::Invoke<0x2F85B5C939CC3065, uint32_t>(p0); } // 2F85B5C939CC3065 3813019A
	static void _0x6B4418098AC665C1(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x6B4418098AC665C1, uint32_t>(p0, p1); } // 6B4418098AC665C1 C8CC9E75
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL p0) { rage::NativeInvoke::Invoke<0xDF7D01D2FC2E846C, uint32_t>(p0); } // DF7D01D2FC2E846C A0FD42D3
	static void _0x9670A2A631CECE0B(BOOL p0) { rage::NativeInvoke::Invoke<0x9670A2A631CECE0B, uint32_t>(p0); } // 9670A2A631CECE0B C9DDA85B
	static void _0x19379600FEEACC5C(BOOL p0) { rage::NativeInvoke::Invoke<0x19379600FEEACC5C, uint32_t>(p0); } // 19379600FEEACC5C D33AFF79
	static void _0x2E5132C6FB4341EB(BOOL p0) { rage::NativeInvoke::Invoke<0x2E5132C6FB4341EB, uint32_t>(p0); } // 2E5132C6FB4341EB 4FFEFE43
	static void _0x5FF769DCD0927090(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x5FF769DCD0927090, uint32_t>(p0, p1); } // 5FF769DCD0927090 74EE2D8B
	static void _0x3FA48B7B772BB64B(BOOL p0) { rage::NativeInvoke::Invoke<0x3FA48B7B772BB64B, uint32_t>(p0); } // 3FA48B7B772BB64B 2F98B405
	static void _0x63E4EA31C83F74E8(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x63E4EA31C83F74E8, uint32_t>(p0, p1); } // 63E4EA31C83F74E8 95F1C60D
	static void _0x064F4DFCD147D0B88(BOOL p0) { rage::NativeInvoke::Invoke<0x064F4DFCD147D0B88, uint32_t>(p0); } // 064F4DFCD147D0B88 1BCD3DDF
	static void NETWORK_SET_VOICE_CHANNEL(uint32_t p0) { rage::NativeInvoke::Invoke<0x2F19459692DCD579, uint32_t>(p0); } // 2F19459692DCD579 3974879F
	static void _0x2D69690B1A33F30C() { rage::NativeInvoke::Invoke<0x2D69690B1A33F30C, uint32_t>(); } // 2D69690B1A33F30C 9ECF722A
	static void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x316E5F1CDD67AAF5, uint32_t>(p0, p1, p2); } // 316E5F1CDD67AAF5 F1E84832
	static void _0x7C6F918A4E3148A() { rage::NativeInvoke::Invoke<0x7C6F918A4E3148A, uint32_t>(); } // 7C6F918A4E3148A 7F9B9052
	static void _0x8D32EB47FCEB114B(uint32_t p0) { rage::NativeInvoke::Invoke<0x8D32EB47FCEB114B, uint32_t>(p0); } // 8D32EB47FCEB114B 7BBEA8CF
	static void _0x6C06F37FCF560A5B(uint32_t p0) { rage::NativeInvoke::Invoke<0x6C06F37FCF560A5B, uint32_t>(p0); } // 6C06F37FCF560A5B E797A4B6
	static void _0x1AF6FB829A26BBE5(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x1AF6FB829A26BBE5, uint32_t>(p0, p1, p2); } // 1AF6FB829A26BBE5 92268BB5
	static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { rage::NativeInvoke::Invoke<0xC5EA1E7F03CFA48D, uint32_t>(); } // C5EA1E7F03CFA48D 92B7351C
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL p0) { rage::NativeInvoke::Invoke<0x3DD000A6AF075873, uint32_t>(p0); } // 3DD000A6AF075873 6BAF95FA
	static void NETWORK_SET_RICH_PRESENCE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x25A20EA9824CF18A, uint32_t>(p0, p1, p2, p3); } // 25A20EA9824CF18A 932A6CED
	static void _0xE910527B20D11CBB(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE910527B20D11CBB, uint32_t>(p0, p1); } // E910527B20D11CBB 017E6777
	static uint32_t _0x6250FFF942FD28E1() { return rage::NativeInvoke::Invoke<0x6250FFF942FD28E1, uint32_t>(); } // 6250FFF942FD28E1 E1F86C6A
	static void _0xB6F9C97516E168BC(uint32_t p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { rage::NativeInvoke::Invoke<0xB6F9C97516E168BC, uint32_t>(p0, p1, p2, p3, p4, p5); } // B6F9C97516E168BC BE6A30C3
	static void _0x75E9DCB3F5E4F122(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x75E9DCB3F5E4F122, uint32_t>(p0, p1); } // 75E9DCB3F5E4F122 22E03AD0
	static void _0xEFA969247D61F973(uint32_t p0) { rage::NativeInvoke::Invoke<0xEFA969247D61F973, uint32_t>(p0); } // EFA969247D61F973 CEAE5AFC
	static BOOL _0x48005FE1241D4091() { return rage::NativeInvoke::Invoke<0x48005FE1241D4091, BOOL>(); } // 48005FE1241D4091 F5F4BD95
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x39606F3949DA3895, BOOL>(p0); } // 39606F3949DA3895 AB8319A3
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(uint32_t *p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x96899C28EF61DCA9, BOOL>(p0, p1, p2); } // 96899C28EF61DCA9 6EE4A282
	static uint32_t _0xCFD44BE3BA4E2AF0(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xCFD44BE3BA4E2AF0, uint32_t>(p0, p1); } // CFD44BE3BA4E2AF0 54E79E9C
	static void _0x8F29D351C9ECC53A(uint32_t *p0, uint32_t p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0x8F29D351C9ECC53A, uint32_t>(p0, p1, p2); } // 8F29D351C9ECC53A F633805A
	static uint32_t _0x3515CC2BCA7599FE() { return rage::NativeInvoke::Invoke<0x3515CC2BCA7599FE, uint32_t>(); } // 3515CC2BCA7599FE 807B3450
	static BOOL _0xC0811AEED5C2A6E2(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xC0811AEED5C2A6E2, BOOL>(p0, p1); } // C0811AEED5C2A6E2 3369DD1F
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x4304CE1CBC945F1D, BOOL>(p0); } // 4304CE1CBC945F1D 8E8CB520
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xAB83A861D90BB2E, BOOL>(p0); } // AB83A861D90BB2E 1FDB590F
	static BOOL _0x396315A816CCA854() { return rage::NativeInvoke::Invoke<0x396315A816CCA854, BOOL>(); } // 396315A816CCA854 83ED8E08
	static BOOL _0x3BA5F5E48DF60E4D(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x3BA5F5E48DF60E4D, BOOL>(p0); } // 3BA5F5E48DF60E4D 40202867
	static uint32_t NETWORK_CLAN_GET_MEMBERSHIP_COUNT(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x87473ECC351A3688, uint32_t>(p0); } // 87473ECC351A3688 25924010
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA17DF63BD937E9B0, BOOL>(p0, p1); } // A17DF63BD937E9B0 48914F6A
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP(uint32_t *p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x3C7466FF00C70785, BOOL>(p0, p1, p2); } // 3C7466FF00C70785 CDC4A590
	static uint32_t NETWORK_CLAN_JOIN(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFEC3F98A9ACCA04D, uint32_t>(p0); } // FEC3F98A9ACCA04D 79C916C5
	static BOOL _0xB7FC404738586251(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xB7FC404738586251, BOOL>(p0, p1); } // B7FC404738586251 BDA90BAC
	static BOOL _0xD1E4ECD1113E5923(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xD1E4ECD1113E5923, BOOL>(p0, p1); } // D1E4ECD1113E5923 8E952B12
	static BOOL _0x13DB6DE3708B150F() { return rage::NativeInvoke::Invoke<0x13DB6DE3708B150F, BOOL>(); } // 13DB6DE3708B150F 966C90FD
	static BOOL _0xAAB782F753BC4B9A(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xAAB782F753BC4B9A, BOOL>(p0, p1); } // AAB782F753BC4B9A BA672146
	static BOOL _0x5473A0E2455A373E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5473A0E2455A373E, BOOL>(p0); } // 5473A0E2455A373E 7963FA4D
	static BOOL _0x19138D3E8320455E(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x19138D3E8320455E, BOOL>(p0, p1); } // 19138D3E8320455E 88B13CDC
	static void _0x6F267ECCFC0358E6(uint32_t p0) { rage::NativeInvoke::Invoke<0x6F267ECCFC0358E6, uint32_t>(p0); } // 6F267ECCFC0358E6 D6E3D5EA
	static uint32_t _0x336B2E2EFA871654() { return rage::NativeInvoke::Invoke<0x336B2E2EFA871654, uint32_t>(); } // 336B2E2EFA871654 E22445DA
	static void _0x03868218C4B476992() { rage::NativeInvoke::Invoke<0x03868218C4B476992, uint32_t>(); } // 03868218C4B476992 455DDF5C
	static BOOL _0xE1171EA39F998140(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xE1171EA39F998140, BOOL>(p0, p1); } // E1171EA39F998140 89DB0EC7
	static uint32_t _0xDA1850DF9CF8319C() { return rage::NativeInvoke::Invoke<0xDA1850DF9CF8319C, uint32_t>(); } // DA1850DF9CF8319C A4EF02F3
	static uint32_t _0xBCECE10CFB2488E6() { return rage::NativeInvoke::Invoke<0xBCECE10CFB2488E6, uint32_t>(); } // BCECE10CFB2488E6 068A054E
	static BOOL _0xF566158F1DE04233(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xF566158F1DE04233, BOOL>(p0, p1); } // F566158F1DE04233 9B8631EB
	static void SET_NETWORK_ID_CAN_MIGRATE(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7C1E12119F5A5526, uint32_t>(p0, p1); } // 7C1E12119F5A5526 47C8E5FF
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x9459531F5B8A4A2F, uint32_t>(p0, p1); } // 9459531F5B8A4A2F 68D486B2
	static void _0x90DE6356BC9973E8(uint32_t p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0x90DE6356BC9973E8, uint32_t>(p0, p1, p2); } // 90DE6356BC9973E8 4D15FDB1
	static void NETWORK_SET_ENTITY_CAN_BLEND(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x87A8028C4D053F26, uint32_t>(p0, p1); } // 87A8028C4D053F26 DE8C0DB8
	static void _0x7A984B75CEE57B50(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x7A984B75CEE57B50, uint32_t>(p0, p1); } // 7A984B75CEE57B50 09CBC4B0
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x85BE1625FC7D4532, uint32_t>(p0, p1, p2); } // 85BE1625FC7D4532 199E75EF
	static void _0x2FB8A67D014ABA96(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2FB8A67D014ABA96, uint32_t>(p0, p1); } // 2FB8A67D014ABA96 00AE4E17
	static BOOL _0x555782BF9C00FA3E(uint32_t p0) { return rage::NativeInvoke::Invoke<0x555782BF9C00FA3E, BOOL>(p0); } // 555782BF9C00FA3E EA5176C0
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0xCE7A6A0D338BC2C3, uint32_t>(p0, p1); } // CE7A6A0D338BC2C3 59F3479B
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { rage::NativeInvoke::Invoke<0x92A9EE374F4560B0, uint32_t>(p0); } // 92A9EE374F4560B0 764F6222
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { rage::NativeInvoke::Invoke<0xD70702505BD9D3A7, uint32_t>(p0); } // D70702505BD9D3A7 324B56DB
	static void SET_PLAYER_INVISIBLE_LOCALLY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8A764796435A89A, uint32_t>(p0, p1); } // 8A764796435A89A 18227209
	static void SET_PLAYER_VISIBLE_LOCALLY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x11D3771DDEF0AE90, uint32_t>(p0, p1); } // 11D3771DDEF0AE90 BA2BB4B4
	static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { rage::NativeInvoke::Invoke<0x341B81CE859F7C97, uint32_t>(p0); } // 341B81CE859F7C97 8FA7CEBD
	static void NETWORK_FADE_OUT_ENTITY(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xA877A08A60C4D171, uint32_t>(p0, p1, p2); } // A877A08A60C4D171 47EDEE56
	static void NETWORK_FADE_IN_ENTITY(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x74186D5C974AECC0, uint32_t>(p0, p1); } // 74186D5C974AECC0 9B9FCD02
	static BOOL IS_PLAYER_IN_CUTSCENE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x8ADD07741F4E0AF7, BOOL>(p0); } // 8ADD07741F4E0AF7 E0A619BD
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x4232121619A485D5, uint32_t>(p0, p1, p2); } // 4232121619A485D5 DBFB067B
	static void SET_ENTITY_LOCALLY_INVISIBLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xD6FA3AE4648B8068, uint32_t>(p0); } // D6FA3AE4648B8068 51ADCC5F
	static void SET_ENTITY_LOCALLY_VISIBLE(uint32_t p0) { rage::NativeInvoke::Invoke<0xBA3B32E4478CF2DD, uint32_t>(p0); } // BA3B32E4478CF2DD 235A57B3
	static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4C72419D28A7CADF, BOOL>(p0); } // 4C72419D28A7CADF 597063BA
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x8DB2CC0993EFA656, uint32_t>(p0, p1); } // 8DB2CC0993EFA656 95D07BA5
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return rage::NativeInvoke::Invoke<0xE28C4F98434AE296, BOOL>(p0, p1, p2, p3); } // E28C4F98434AE296 23C5274E
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(uint32_t p0, float p1, float p2, float p3, float p4) { return rage::NativeInvoke::Invoke<0xEDACD0E59C5E7D93, BOOL>(p0, p1, p2, p3, p4); } // EDACD0E59C5E7D93 E9FCFB32
	static void RESERVE_NETWORK_MISSION_OBJECTS(uint32_t p0) { rage::NativeInvoke::Invoke<0x91AADFDC8448CBD, uint32_t>(p0); } // 91AADFDC8448CBD 391DF4F3
	static void RESERVE_NETWORK_MISSION_PEDS(uint32_t p0) { rage::NativeInvoke::Invoke<0x31C8FBE30948E037, uint32_t>(p0); } // 31C8FBE30948E037 54998C37
	static void RESERVE_NETWORK_MISSION_VEHICLES(uint32_t p0) { rage::NativeInvoke::Invoke<0xB5C67549F1765883, uint32_t>(p0); } // B5C67549F1765883 5062875E
	static BOOL CAN_REGISTER_MISSION_OBJECTS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAD902020E597F2AC, BOOL>(p0); } // AD902020E597F2AC 7F85DFDE
	static BOOL CAN_REGISTER_MISSION_PEDS(uint32_t p0) { return rage::NativeInvoke::Invoke<0x743224EE855B1894, BOOL>(p0); } // 743224EE855B1894 CCAA5CE9
	static BOOL CAN_REGISTER_MISSION_VEHICLES(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4BB625F7911DD339, BOOL>(p0); } // 4BB625F7911DD339 818B6830
	static BOOL CAN_REGISTER_MISSION_ENTITIES(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xDD4EF4723F36D8F0, BOOL>(p0, p1, p2, p3); } // DD4EF4723F36D8F0 83794008
	static uint32_t GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) { return rage::NativeInvoke::Invoke<0xACD63093CA24A31E, uint32_t>(p0); } // ACD63093CA24A31E 16A80CD6
	static uint32_t GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) { return rage::NativeInvoke::Invoke<0x3688EAE35B68185, uint32_t>(p0); } // 3688EAE35B68185 6C25975C
	static uint32_t GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) { return rage::NativeInvoke::Invoke<0xBF3ED7A1FCC41A0B, uint32_t>(p0); } // BF3ED7A1FCC41A0B A9A308F3
	static uint32_t _0xAD4FE4090EA9E3BE(BOOL p0) { return rage::NativeInvoke::Invoke<0xAD4FE4090EA9E3BE, uint32_t>(p0); } // AD4FE4090EA9E3BE 603FA104
	static uint32_t _0x134CB4C8912CA9A2(BOOL p0) { return rage::NativeInvoke::Invoke<0x134CB4C8912CA9A2, uint32_t>(p0); } // 134CB4C8912CA9A2 D8FEC4F8
	static uint32_t _0x0A75012549D00203C(BOOL p0) { return rage::NativeInvoke::Invoke<0x0A75012549D00203C, uint32_t>(p0); } // 0A75012549D00203C 20527695
	static uint32_t _0x4C3FBCD592D8EF54() { return rage::NativeInvoke::Invoke<0x4C3FBCD592D8EF54, uint32_t>(); } // 4C3FBCD592D8EF54 8687E285
	static uint32_t _0x0A574F8D18497967() { return rage::NativeInvoke::Invoke<0x0A574F8D18497967, uint32_t>(); } // 0A574F8D18497967 744AC008
	static uint32_t _0x07FF4CC54A37B4678() { return rage::NativeInvoke::Invoke<0x07FF4CC54A37B4678, uint32_t>(); } // 07FF4CC54A37B4678 C3A12135
	static uint32_t _0x7DE670D1201C775() { return rage::NativeInvoke::Invoke<0x7DE670D1201C775, uint32_t>(); } // 7DE670D1201C775 6A036061
	static uint32_t GET_NETWORK_TIME() { return rage::NativeInvoke::Invoke<0xFACC0E85E40AD425, uint32_t>(); } // FACC0E85E40AD425 998103C2
	static uint32_t _0x49BD9731DF21C969() { return rage::NativeInvoke::Invoke<0x49BD9731DF21C969, uint32_t>(); } // 49BD9731DF21C969 98AA48E5
	static BOOL _0xB2A39761793E1452() { return rage::NativeInvoke::Invoke<0xB2A39761793E1452, BOOL>(); } // B2A39761793E1452 4538C4A2
	static uint32_t GET_TIME_OFFSET(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x027BE5673BC364722, uint32_t>(p0, p1); } // 027BE5673BC364722 2E079AE6
	static uint32_t _0xB140E4D25861508C(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xB140E4D25861508C, uint32_t>(p0, p1); } // B140E4D25861508C 50EF8FC6
	static uint32_t _0xBAAA7FC3F886D297(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xBAAA7FC3F886D297, uint32_t>(p0, p1); } // BAAA7FC3F886D297 BBB6DF61
	static uint32_t _0x72BC399AFD40817A(BOOL p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x72BC399AFD40817A, uint32_t>(p0, p1); } // 72BC399AFD40817A 8B4D1C06
	static uint32_t GET_TIME_DIFFERENCE(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x88702B74B95C046D, uint32_t>(p0, p1); } // 88702B74B95C046D 5666A837
	static uint32_t _0x88EB896A03FC2C52(uint32_t p0) { return rage::NativeInvoke::Invoke<0x88EB896A03FC2C52, uint32_t>(p0); } // 88EB896A03FC2C52 8218944E
	static uint32_t _0x116C811902B474B3() { return rage::NativeInvoke::Invoke<0x116C811902B474B3, uint32_t>(); } // 116C811902B474B3 F2FDF2E0
	static void _0x936F93A8369D8BC6(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x936F93A8369D8BC6, uint32_t>(p0, p1); } // 936F93A8369D8BC6 BB7CCE49
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x88C9E2C8752CBE32, uint32_t>(p0, p1); } // 88C9E2C8752CBE32 5C4C8458
	static void _0xB6A417B12550774(BOOL p0, uint32_t p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB6A417B12550774, uint32_t>(p0, p1, p2); } // B6A417B12550774 54058F5F
	static void _0xA699C3AF2BDE18AF(BOOL p0) { rage::NativeInvoke::Invoke<0xA699C3AF2BDE18AF, uint32_t>(p0); } // A699C3AF2BDE18AF A7E36020
	static void _0x912FEB1C460CB841(BOOL p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x912FEB1C460CB841, uint32_t>(p0, p1); } // 912FEB1C460CB841 64235620
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return rage::NativeInvoke::Invoke<0x0C1828A36977095F3, BOOL>(); } // 0C1828A36977095F3 3EAD9DB8
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { rage::NativeInvoke::Invoke<0xA33B68FDAA8C4B25, uint32_t>(p0, p1); } // A33B68FDAA8C4B25 8434CB43
	static uint32_t NETWORK_IS_IN_MP_CUTSCENE() { return rage::NativeInvoke::Invoke<0x47245DD35A0EDC7B, uint32_t>(); } // 47245DD35A0EDC7B 4BB33316
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(uint32_t p0) { return rage::NativeInvoke::Invoke<0x389712B76BCB5899, BOOL>(p0); } // 389712B76BCB5899 56F961E4
	static void SET_NETWORK_VEHICLE_RESPOT_TIMER(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xEDFF1CE1C50D51C1, uint32_t>(p0, p1); } // EDFF1CE1C50D51C1 2C30912D
	static void _0x2E7630E0E3EC734E(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x2E7630E0E3EC734E, uint32_t>(p0, p1); } // 2E7630E0E3EC734E EA235081
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL p0) { rage::NativeInvoke::Invoke<0x86C8D7FA3535C5CB, uint32_t>(p0); } // 86C8D7FA3535C5CB 4DD46DAE
	static BOOL _0xEAE3C165B183732E(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEAE3C165B183732E, BOOL>(p0); } // EAE3C165B183732E
	static void _0xB846FEC1FCE28FD5(BOOL p0) { rage::NativeInvoke::Invoke<0xB846FEC1FCE28FD5, uint32_t>(p0); } // B846FEC1FCE28FD5
	static uint32_t NETWORK_CREATE_SYNCHRONISED_SCENE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return rage::NativeInvoke::Invoke<0xE9581057DA227F4B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // E9581057DA227F4B B06FE3FE
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6, uint32_t p7, float p8, uint32_t p9) { rage::NativeInvoke::Invoke<0x864A7869C9418424, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 864A7869C9418424 B386713E
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6) { rage::NativeInvoke::Invoke<0x44F22276168E5495, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 44F22276168E5495 10DD636C
	static void _0xA8E062ECBBC738B(uint32_t p0, uint32_t *p1, uint32_t *p2) { rage::NativeInvoke::Invoke<0xA8E062ECBBC738B, uint32_t>(p0, p1, p2); } // A8E062ECBBC738B BFFE8B5C
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0xC47E09BE9449A547, uint32_t>(p0, p1, p2); } // C47E09BE9449A547 3FE5B222
	static void NETWORK_START_SYNCHRONISED_SCENE(uint32_t p0) { rage::NativeInvoke::Invoke<0x1CF38F11D5249AB4, uint32_t>(p0); } // 1CF38F11D5249AB4 A9DFDC40
	static void NETWORK_STOP_SYNCHRONISED_SCENE(uint32_t p0) { rage::NativeInvoke::Invoke<0x1EA2868A4D844B2A, uint32_t>(p0); } // 1EA2868A4D844B2A 97B1CDF6
	static uint32_t _0x0BF636E78B6E9E404(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0BF636E78B6E9E404, uint32_t>(p0); } // 0BF636E78B6E9E404 16AED87B
	static uint32_t _0x8812B208B8CA0B42(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x8812B208B8CA0B42, uint32_t>(p0, p1); } // 8812B208B8CA0B42 0679CE71
	static BOOL _0x16CF59103F382765(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { return rage::NativeInvoke::Invoke<0x16CF59103F382765, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 16CF59103F382765 C62E77B3
	static BOOL _0x5B974B672AF66EA9(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, uint32_t p11) { return rage::NativeInvoke::Invoke<0x5B974B672AF66EA9, BOOL>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 5B974B672AF66EA9 74D6B13C
	static uint32_t _0x193CE735823BDA6E(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x193CE735823BDA6E, uint32_t>(p0); } // 193CE735823BDA6E 90700C7D
	static void _0x606319450BD18268() { rage::NativeInvoke::Invoke<0x606319450BD18268, uint32_t>(); } // 606319450BD18268 44BFB619
	static void NETWORK_GET_RESPAWN_RESULT(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x2842F2EB42EB3295, uint32_t>(p0, p1, p2); } // 2842F2EB42EB3295 DDFE9FBC
	static uint32_t _0xCBE564E4FA008C3C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCBE564E4FA008C3C, uint32_t>(p0); } // CBE564E4FA008C3C 03287FD2
	static void _0xE29A6C6381A0B53B() { rage::NativeInvoke::Invoke<0xE29A6C6381A0B53B, uint32_t>(); } // E29A6C6381A0B53B 408A9436
	static void _0xB5807FD5FA730B52(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xB5807FD5FA730B52, uint32_t>(p0, p1); } // B5807FD5FA730B52 FFB2ADA1
	static void NETWORK_END_TUTORIAL_SESSION() { rage::NativeInvoke::Invoke<0xCE839D35225BADA4, uint32_t>(); } // CE839D35225BADA4 BA57E53E
	static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return rage::NativeInvoke::Invoke<0x1965D5FB1AA96228, BOOL>(); } // 1965D5FB1AA96228 34DD7B28
	static BOOL _0x91FFBEACAAC1D550() { return rage::NativeInvoke::Invoke<0x91FFBEACAAC1D550, BOOL>(); } // 91FFBEACAAC1D550 755A2B3E
	static BOOL _0xB802AAE006746FDB() { return rage::NativeInvoke::Invoke<0xB802AAE006746FDB, BOOL>(); } // B802AAE006746FDB A003C40B
	static uint32_t _0xAA7FFE7562363CFF(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAA7FFE7562363CFF, uint32_t>(p0); } // AA7FFE7562363CFF 5E1020CC
	static BOOL _0x73AB522FB7F2E420(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x73AB522FB7F2E420, BOOL>(p0, p1); } // 73AB522FB7F2E420 E66A0B40
	static void _0x3A04B58CE30703B7(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x3A04B58CE30703B7, uint32_t>(p0, p1); } // 3A04B58CE30703B7 72052DB3
	static BOOL _0xBDB378C87628C9CE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBDB378C87628C9CE, BOOL>(p0); } // BDB378C87628C9CE B0313590
	static void NETWORK_OVERRIDE_CLOCK_TIME(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x560E1B5BC4BF589, uint32_t>(p0, p1, p2); } // 560E1B5BC4BF589 C077BCD6
	static void _0x875F7BA4E4200153() { rage::NativeInvoke::Invoke<0x875F7BA4E4200153, uint32_t>(); } // 875F7BA4E4200153 C4AEAF49
	static BOOL _0x6EB8E49A563B3891() { return rage::NativeInvoke::Invoke<0x6EB8E49A563B3891, BOOL>(); } // 6EB8E49A563B3891 2465296D
	static uint32_t NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x9482A010973A1A26, uint32_t>(p0, p1, p2, p3, p4, p5); } // 9482A010973A1A26 51030E5B
	static uint32_t _0x67209B8AD84CB0C0(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return rage::NativeInvoke::Invoke<0x67209B8AD84CB0C0, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 67209B8AD84CB0C0
	static uint32_t _0x989621D0464A02CB(float p0, float p1, float p2, float p3, float p4, float p5) { return rage::NativeInvoke::Invoke<0x989621D0464A02CB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 989621D0464A02CB 4C2C2B12
	static BOOL NETWORK_REMOVE_ENTITY_AREA(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC83780D1DB4D60EE, BOOL>(p0); } // C83780D1DB4D60EE EAB97F25
	static BOOL _0xFE94B5FB48D07EA1(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE94B5FB48D07EA1, BOOL>(p0); } // FE94B5FB48D07EA1 69956127
	static BOOL _0x96AD82F98DD1B558(uint32_t p0) { return rage::NativeInvoke::Invoke<0x96AD82F98DD1B558, BOOL>(p0); } // 96AD82F98DD1B558 CB1CD6D3
	static BOOL _0x6C3BF7236FBC142A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6C3BF7236FBC142A, BOOL>(p0); } // 6C3BF7236FBC142A C6D53AA0
	static void _0x19D01F2541CA6CD4(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x19D01F2541CA6CD4, uint32_t>(p0, p1); } // 19D01F2541CA6CD4 155465EE
	static BOOL _0xCB725C700B0BD08D() { return rage::NativeInvoke::Invoke<0xCB725C700B0BD08D, BOOL>(); } // CB725C700B0BD08D 29532731
	static void _0xF65721167CEE3C83() { rage::NativeInvoke::Invoke<0xF65721167CEE3C83, uint32_t>(); } // F65721167CEE3C83 D760CAD5
	static uint32_t _0xCDB42C3ED6170EB7() { return rage::NativeInvoke::Invoke<0xCDB42C3ED6170EB7, uint32_t>(); } // CDB42C3ED6170EB7 231CFD12
	static BOOL NETWORK_DOES_TUNABLE_EXIST(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xED1B1D306533181E, BOOL>(p0, p1); } // ED1B1D306533181E 9FCE9C9A
	static BOOL _0xE06E281CC0B401A6(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xE06E281CC0B401A6, BOOL>(p0, p1, p2); } // E06E281CC0B401A6 E4B3726A
	static BOOL _0xCF5CE7800A8EE7C5(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xCF5CE7800A8EE7C5, BOOL>(p0, p1, p2); } // CF5CE7800A8EE7C5 41E8912A
	static BOOL _0xFB2C5A2F48AF9B0C(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xFB2C5A2F48AF9B0C, BOOL>(p0, p1); } // FB2C5A2F48AF9B0C 8A04E1FE
	static uint32_t _0x1A8D52961399BA01(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1A8D52961399BA01, uint32_t>(p0); } // 1A8D52961399BA01 A78571CA
	static uint32_t _0x650D7CDF8D696F01() { return rage::NativeInvoke::Invoke<0x650D7CDF8D696F01, uint32_t>(); } // 650D7CDF8D696F01 053BB329
	static void NETWORK_RESET_BODY_TRACKER() { rage::NativeInvoke::Invoke<0x5B90B317A42EC17C, uint32_t>(); } // 5B90B317A42EC17C 3914463F
	static uint32_t _0xCBFD8C03A7CECA89() { return rage::NativeInvoke::Invoke<0xCBFD8C03A7CECA89, uint32_t>(); } // CBFD8C03A7CECA89 17CBC608
	static BOOL _0xD38A15EFF8976ABA(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD38A15EFF8976ABA, BOOL>(p0); } // D38A15EFF8976ABA BFAA349B
	static BOOL _0x075619AF961130C0B(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x075619AF961130C0B, BOOL>(p0, p1); } // 075619AF961130C0B BEB7281A
	static uint32_t NETWORK_EXPLODE_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x3CF71355C7CD09A, uint32_t>(p0, p1, p2, p3); } // 3CF71355C7CD09A 0E1B38AE
	static void _0x42AF104DD530B138(uint32_t p0) { rage::NativeInvoke::Invoke<0x42AF104DD530B138, uint32_t>(p0); } // 42AF104DD530B138 BC54371B
	static void _0x774265231FBBB6E1(uint32_t p0, float p1, float p2, float p3, float p4) { rage::NativeInvoke::Invoke<0x774265231FBBB6E1, uint32_t>(p0, p1, p2, p3, p4); } // 774265231FBBB6E1 644141C5
	static void NETWORK_SET_PROPERTY_ID(uint32_t p0) { rage::NativeInvoke::Invoke<0x9E04FFB9BC778DF3, uint32_t>(p0); } // 9E04FFB9BC778DF3 5A74E873
	static void _0x2FFDCFFCA8794BA1() { rage::NativeInvoke::Invoke<0x2FFDCFFCA8794BA1, uint32_t>(); } // 2FFDCFFCA8794BA1 38BC35C8
	static void _0x2A6BDDC3B9EDC6C6(uint32_t p0) { rage::NativeInvoke::Invoke<0x2A6BDDC3B9EDC6C6, uint32_t>(p0); } // 2A6BDDC3B9EDC6C6 53C9563C
	static void _0x948CB9AA983BC9A2(BOOL p0) { rage::NativeInvoke::Invoke<0x948CB9AA983BC9A2, uint32_t>(p0); } // 948CB9AA983BC9A2 6B97075B
	static uint32_t _0xB0AC4B9E75C18C3() { return rage::NativeInvoke::Invoke<0xB0AC4B9E75C18C3, uint32_t>(); } // B0AC4B9E75C18C3 965EA007
	static uint32_t _0x9C225E21E8BA6113() { return rage::NativeInvoke::Invoke<0x9C225E21E8BA6113, uint32_t>(); } // 9C225E21E8BA6113 EEFC8A55
	static void _0x685B935AF14CD7BD(uint32_t p0) { rage::NativeInvoke::Invoke<0x685B935AF14CD7BD, uint32_t>(p0); } // 685B935AF14CD7BD 866D1B67
	static BOOL _0xF63CC5259EE95491() { return rage::NativeInvoke::Invoke<0xF63CC5259EE95491, BOOL>(); } // F63CC5259EE95491 ED4A272F
	static uint32_t _0x34228D9CD039464F(uint32_t p0) { return rage::NativeInvoke::Invoke<0x34228D9CD039464F, uint32_t>(p0); } // 34228D9CD039464F 4ACF110C
	static uint32_t _0x9144C894D38C7E15(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9144C894D38C7E15, uint32_t>(p0); } // 9144C894D38C7E15 1AA3A0D5
	static uint32_t _0xFAD7AB48319C66DC(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFAD7AB48319C66DC, uint32_t>(p0); } // FAD7AB48319C66DC 37877757
	static uint32_t _0x85840D3E433A2C13(uint32_t p0) { return rage::NativeInvoke::Invoke<0x85840D3E433A2C13, uint32_t>(p0); } // 85840D3E433A2C13 1CF89DA5
	static uint32_t _0x161F3984BD562DAC(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x161F3984BD562DAC, uint32_t>(p0, p1); } // 161F3984BD562DAC 16E53875
	static void _0x4C5E3FF6C6706702(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x4C5E3FF6C6706702, uint32_t>(p0, p1); } // 4C5E3FF6C6706702 365C50EE
	static BOOL _0xC7DB3B0FD27ABAAD() { return rage::NativeInvoke::Invoke<0xC7DB3B0FD27ABAAD, BOOL>(); } // C7DB3B0FD27ABAAD 25E2DBA9
	static void SET_STORE_ENABLED(BOOL p0) { rage::NativeInvoke::Invoke<0x8A1FDF55065D5DE0, uint32_t>(p0); } // 8A1FDF55065D5DE0 C1F6443B
	static BOOL _0xB8BDA9D998920252(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB8BDA9D998920252, BOOL>(p0); } // B8BDA9D998920252 1FDC75DC
	static void _0x4510D4C580CA4CD6() { rage::NativeInvoke::Invoke<0x4510D4C580CA4CD6, uint32_t>(); } // 4510D4C580CA4CD6 CA7A0A49
	static uint32_t _0x44DE035E2E87760A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x44DE035E2E87760A, uint32_t>(p0); } // 44DE035E2E87760A 44A58B0A
	static BOOL _0xB67050B59E08385A() { return rage::NativeInvoke::Invoke<0xB67050B59E08385A, BOOL>(); } // B67050B59E08385A D32FA11F
	static void _0x983F5BC954DB24C1() { rage::NativeInvoke::Invoke<0x983F5BC954DB24C1, uint32_t>(); } // 983F5BC954DB24C1 A7FA70AE
	static void _0xAB5C67FA11BB7F1B() { rage::NativeInvoke::Invoke<0xAB5C67FA11BB7F1B, uint32_t>(); } // AB5C67FA11BB7F1B CC7DCE24
	static BOOL _0x4BA442FB764A510B() { return rage::NativeInvoke::Invoke<0x4BA442FB764A510B, BOOL>(); } // 4BA442FB764A510B 70F6D3AD
	static uint32_t _0x5A1B17ACE2B7B307(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x5A1B17ACE2B7B307, uint32_t>(p0); } // 5A1B17ACE2B7B307 2B7B57B3
	static BOOL _0xA862A1BE5F233BCE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA862A1BE5F233BCE, BOOL>(p0); } // A862A1BE5F233BCE BAF52DD8
	static BOOL _0x28B66938B2AE0496(uint32_t p0) { return rage::NativeInvoke::Invoke<0x28B66938B2AE0496, BOOL>(p0); } // 28B66938B2AE0496 9B9AFFF1
	static void _0x3FC82BA4056A34B8() { rage::NativeInvoke::Invoke<0x3FC82BA4056A34B8, uint32_t>(); } // 3FC82BA4056A34B8 C38E9DB0
	static BOOL _0x2ADDDC2FB61551AC() { return rage::NativeInvoke::Invoke<0x2ADDDC2FB61551AC, BOOL>(); } // 2ADDDC2FB61551AC 32A4EB22
	static uint32_t _0x01B02BE08E36D3C01() { return rage::NativeInvoke::Invoke<0x01B02BE08E36D3C01, uint32_t>(); } // 01B02BE08E36D3C01 9262744C
	static uint32_t _0x1ECA36576A268BC8() { return rage::NativeInvoke::Invoke<0x1ECA36576A268BC8, uint32_t>(); } // 1ECA36576A268BC8
	static uint32_t _0x94BC6040E52B7BA4() { return rage::NativeInvoke::Invoke<0x94BC6040E52B7BA4, uint32_t>(); } // 94BC6040E52B7BA4
	static uint32_t _0x976BF460D0D2FFD7() { return rage::NativeInvoke::Invoke<0x976BF460D0D2FFD7, uint32_t>(); } // 976BF460D0D2FFD7
	static void _0x369844F61CC4DA30() { rage::NativeInvoke::Invoke<0x369844F61CC4DA30, uint32_t>(); } // 369844F61CC4DA30
	static BOOL _0xEF48CE618399AF0A(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xEF48CE618399AF0A, BOOL>(p0, p1); } // EF48CE618399AF0A 08243B79
	static BOOL _0x2EE36F43F9228A24() { return rage::NativeInvoke::Invoke<0x2EE36F43F9228A24, BOOL>(); } // 2EE36F43F9228A24 798D6C27
	static BOOL _0xE0FD1EBD790BBCEA() { return rage::NativeInvoke::Invoke<0xE0FD1EBD790BBCEA, BOOL>(); } // E0FD1EBD790BBCEA E69E8D0D
	static BOOL _0x6E6501F88E9E24CE() { return rage::NativeInvoke::Invoke<0x6E6501F88E9E24CE, BOOL>(); } // 6E6501F88E9E24CE 742075FE
	static uint32_t _0xA5C07493FF6F9640() { return rage::NativeInvoke::Invoke<0xA5C07493FF6F9640, uint32_t>(); } // A5C07493FF6F9640 CE569932
	static uint32_t _0xE23C76304BDB44B6() { return rage::NativeInvoke::Invoke<0xE23C76304BDB44B6, uint32_t>(); } // E23C76304BDB44B6 82146BE9
	static void _0x67ED9B0C7C50FEBB() { rage::NativeInvoke::Invoke<0x67ED9B0C7C50FEBB, uint32_t>(); } // 67ED9B0C7C50FEBB 133FF2D5
	static BOOL _0xBF6236234355282B(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0xBF6236234355282B, BOOL>(p0, p1, p2, p3, p4, p5); } // BF6236234355282B CBA7242F
	static BOOL _0x29BF8373C402ED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3, uint32_t p4, BOOL p5) { return rage::NativeInvoke::Invoke<0x29BF8373C402ED, BOOL>(p0, p1, p2, p3, p4, p5); } // 29BF8373C402ED
	static BOOL _0x4E56D47D52C10EF8(uint32_t *p0, BOOL p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x4E56D47D52C10EF8, BOOL>(p0, p1, p2); } // 4E56D47D52C10EF8 DED82A6E
	static BOOL _0xBA80CD088DDFCFC2(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xBA80CD088DDFCFC2, BOOL>(p0, p1, p2, p3); } // BA80CD088DDFCFC2 40CF0783
	static BOOL _0x6F87CA81E2BBFCCC(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0x6F87CA81E2BBFCCC, BOOL>(p0, p1, p2, p3); } // 6F87CA81E2BBFCCC 4609D596
	static BOOL _0xE1305A745E39AF0(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0xE1305A745E39AF0, BOOL>(p0, p1, p2, p3); } // E1305A745E39AF0 4C2C0D1F
	static BOOL _0x651A15ADDEAAA78E(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0x651A15ADDEAAA78E, BOOL>(p0, p1, p2, p3); } // 651A15ADDEAAA78E 9EFBD5D1
	static BOOL _0xAB475505E1428537(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0xAB475505E1428537, BOOL>(p0, p1, p2, p3, p4); } // AB475505E1428537 A6D8B798
	static BOOL _0x516A844C03E48DF(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3, uint32_t *p4) { return rage::NativeInvoke::Invoke<0x516A844C03E48DF, BOOL>(p0, p1, p2, p3, p4); } // 516A844C03E48DF 67E74842
	static BOOL SET_BALANCE_ADD_MACHINE(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xA61931BBBFCC780B, BOOL>(p0, p1); } // A61931BBBFCC780B E123C7AC
	static BOOL SET_BALANCE_ADD_MACHINES(uint32_t *p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xA694CE2B5354872, BOOL>(p0, p1, p2); } // A694CE2B5354872 22C33603
	static BOOL _0x7027052F8758E0DF(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0x7027052F8758E0DF, BOOL>(p0, p1, p2, p3); } // 7027052F8758E0DF 37F5BD93
	static BOOL _0xAE13AE0E296441DF(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0xAE13AE0E296441DF, BOOL>(p0, p1, p2, p3); } // AE13AE0E296441DF 1CFB3F51
	static BOOL _0x65E25ECD593B2233(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return rage::NativeInvoke::Invoke<0x65E25ECD593B2233, BOOL>(p0, p1, p2, p3); } // 65E25ECD593B2233 87D1E6BD
	static void _0xC6C784D63815B00A() { rage::NativeInvoke::Invoke<0xC6C784D63815B00A, uint32_t>(); } // C6C784D63815B00A 021D5A94
	static BOOL _0xD29595708422F4D4() { return rage::NativeInvoke::Invoke<0xD29595708422F4D4, BOOL>(); } // D29595708422F4D4 4908A514
	static BOOL _0x0118305AAC4F7F183() { return rage::NativeInvoke::Invoke<0x0118305AAC4F7F183, BOOL>(); } // 0118305AAC4F7F183 50296140
	static BOOL _0xBEE8C71E71338165() { return rage::NativeInvoke::Invoke<0xBEE8C71E71338165, BOOL>(); } // BEE8C71E71338165 3970B0DA
	static BOOL _0x7EBE83FC4C47BF6F() { return rage::NativeInvoke::Invoke<0x7EBE83FC4C47BF6F, BOOL>(); } // 7EBE83FC4C47BF6F C1487110
	static uint32_t _0xE539AD9EC07706EB() { return rage::NativeInvoke::Invoke<0xE539AD9EC07706EB, uint32_t>(); } // E539AD9EC07706EB CC2356E3
	static uint32_t _0x2F037182EFEE8D06() { return rage::NativeInvoke::Invoke<0x2F037182EFEE8D06, uint32_t>(); } // 2F037182EFEE8D06 2DE69817
	static uint32_t _0x250D5FF638374F91() { return rage::NativeInvoke::Invoke<0x250D5FF638374F91, uint32_t>(); } // 250D5FF638374F91 81BD8D3B
	static uint32_t _0x5E214320D47062E2() { return rage::NativeInvoke::Invoke<0x5E214320D47062E2, uint32_t>(); } // 5E214320D47062E2 8E1D8F78
	static void _0x44FD6BA447D0EA3F() { rage::NativeInvoke::Invoke<0x44FD6BA447D0EA3F, uint32_t>(); } // 44FD6BA447D0EA3F 0D35DD93
	static uint32_t _0x9779D6EFA6730EA4(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9779D6EFA6730EA4, uint32_t>(p0); } // 9779D6EFA6730EA4 8F3137E6
	static BOOL _0x9963590A51CECFAC(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x9963590A51CECFAC, BOOL>(p0, p1); } // 9963590A51CECFAC
	static BOOL _0x2BF70139BE04229B(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2BF70139BE04229B, BOOL>(p0); } // 2BF70139BE04229B
	static uint32_t _0x6F39B7BEEDD65FEA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6F39B7BEEDD65FEA, uint32_t>(p0); } // 6F39B7BEEDD65FEA B9137BA7
	static BOOL _0x843FAF7ECFB47C2F(uint32_t p0) { return rage::NativeInvoke::Invoke<0x843FAF7ECFB47C2F, BOOL>(p0); } // 843FAF7ECFB47C2F 9FEEAA9C
	static uint32_t _0x71FB3ECF515AB0A8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x71FB3ECF515AB0A8, uint32_t>(p0); } // 71FB3ECF515AB0A8 5E8A7559
	static uint32_t _0xCC6691CC3D08D95F(uint32_t p0) { return rage::NativeInvoke::Invoke<0xCC6691CC3D08D95F, uint32_t>(p0); } // CC6691CC3D08D95F 331AEABF
	static uint32_t _0x64371B1989342625(uint32_t p0) { return rage::NativeInvoke::Invoke<0x64371B1989342625, uint32_t>(p0); } // 64371B1989342625 0E5E8E5C
	static uint32_t _0x1614D9CD7987D17(uint32_t p0) { return rage::NativeInvoke::Invoke<0x1614D9CD7987D17, uint32_t>(p0); } // 1614D9CD7987D17 A5A0C695
	static uint32_t _0x43765D2EC7278730(uint32_t p0) { return rage::NativeInvoke::Invoke<0x43765D2EC7278730, uint32_t>(p0); } // 43765D2EC7278730 91534C6E
	static uint32_t _0xBFA6A1DFF7408348(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xBFA6A1DFF7408348, uint32_t>(p0, p1); } // BFA6A1DFF7408348 744A9EA5
	static void _0x2C40C9D5FF056ADE(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x2C40C9D5FF056ADE, uint32_t>(p0, p1); } // 2C40C9D5FF056ADE A19A238D
	static uint32_t _0x683BB5D2B038C81F(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x683BB5D2B038C81F, uint32_t>(p0, p1); } // 683BB5D2B038C81F FF7D44E6
	static BOOL _0xC8C1B7724A93B1B0(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC8C1B7724A93B1B0, BOOL>(p0); } // C8C1B7724A93B1B0
	static BOOL _0x613E04ED22D1EA9A(uint32_t p0) { return rage::NativeInvoke::Invoke<0x613E04ED22D1EA9A, BOOL>(p0); } // 613E04ED22D1EA9A
	static uint32_t _0xF62F0B0627612D8A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF62F0B0627612D8A, uint32_t>(p0); } // F62F0B0627612D8A A2C5BD9D
	static BOOL _0x3B0539D7CA329244(uint32_t p0) { return rage::NativeInvoke::Invoke<0x3B0539D7CA329244, BOOL>(p0); } // 3B0539D7CA329244 A850DDE1
	static BOOL _0x6C149DB72682371(uint32_t p0) { return rage::NativeInvoke::Invoke<0x6C149DB72682371, BOOL>(p0); } // 6C149DB72682371 8F6754AE
	static uint32_t _0x10C481A7180DAEA4(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x10C481A7180DAEA4, uint32_t>(p0, p1); } // 10C481A7180DAEA4 1E34953F
	static uint32_t _0x53D3F1D904EB8CFD(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x53D3F1D904EB8CFD, uint32_t>(p0, p1); } // 53D3F1D904EB8CFD 771FE190
	static uint32_t _0xA0D37214D4BE85BC(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xA0D37214D4BE85BC, uint32_t>(p0, p1); } // A0D37214D4BE85BC 3276D9D3
	static uint32_t _0x56DBAA8CF60DF437(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x56DBAA8CF60DF437, uint32_t>(p0, p1); } // 56DBAA8CF60DF437 41A0FB02
	static BOOL _0xD2542B3A6499CD38(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD2542B3A6499CD38, BOOL>(p0); } // D2542B3A6499CD38 11DC0F27
	static BOOL _0xC67B6C8F541D4198(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC67B6C8F541D4198, BOOL>(p0); } // C67B6C8F541D4198 0DEB3F5A
	static uint32_t _0x171DF6A0C07FB3DC(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x171DF6A0C07FB3DC, uint32_t>(p0, p1); } // 171DF6A0C07FB3DC 84315226
	static uint32_t _0x7FD2990AF016795E(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0x7FD2990AF016795E, uint32_t>(p0, p1, p2, p3, p4); } // 7FD2990AF016795E 38FC2EEB
	static uint32_t _0x4FF9F024FD32E6C2(uint32_t p0) { return rage::NativeInvoke::Invoke<0x4FF9F024FD32E6C2, uint32_t>(p0); } // 4FF9F024FD32E6C2 1C4F9FDB
	static BOOL _0xE16EFE9713A6D3DE(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE16EFE9713A6D3DE, BOOL>(p0); } // E16EFE9713A6D3DE A69AE16C
	static BOOL _0xA92F8628189E75D7(uint32_t p0) { return rage::NativeInvoke::Invoke<0xA92F8628189E75D7, BOOL>(p0); } // A92F8628189E75D7 F50BC67A
	static BOOL _0x94CCC01E5F279942(uint32_t p0) { return rage::NativeInvoke::Invoke<0x94CCC01E5F279942, BOOL>(p0); } // 94CCC01E5F279942 B3BBD241
	static uint32_t _0x2C1BD81BDB0413A8(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x2C1BD81BDB0413A8, uint32_t>(p0, p1); } // 2C1BD81BDB0413A8 70A2845C
	static BOOL _0x9A42AFF66E5078C6(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9A42AFF66E5078C6, BOOL>(p0); } // 9A42AFF66E5078C6 346B506C
	static void _0x5006646B0A94A36D() { rage::NativeInvoke::Invoke<0x5006646B0A94A36D, uint32_t>(); } // 5006646B0A94A36D 0095DB71
	static BOOL _0xC783B2D6A5C277CB(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xC783B2D6A5C277CB, BOOL>(p0, p1, p2); } // C783B2D6A5C277CB AD334B40
	static BOOL _0x68FC37BD2D66AD3B(uint32_t *p0, BOOL p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x68FC37BD2D66AD3B, BOOL>(p0, p1, p2); } // 68FC37BD2D66AD3B 980D45D7
	static BOOL _0x5179477A404730F4(uint32_t *p0, BOOL p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x5179477A404730F4, BOOL>(p0, p1, p2); } // 5179477A404730F4 48CCC328
	static BOOL _0x7AEBFA66997BD979() { return rage::NativeInvoke::Invoke<0x7AEBFA66997BD979, BOOL>(); } // 7AEBFA66997BD979 8E664EFD
	static BOOL _0xD9D6605097CCCDF4() { return rage::NativeInvoke::Invoke<0xD9D6605097CCCDF4, BOOL>(); } // D9D6605097CCCDF4 611E0BE2
	static BOOL _0x5476FD804980B34C() { return rage::NativeInvoke::Invoke<0x5476FD804980B34C, BOOL>(); } // 5476FD804980B34C F0211AC1
	static uint32_t _0x58E65C18F1DC3FF7() { return rage::NativeInvoke::Invoke<0x58E65C18F1DC3FF7, uint32_t>(); } // 58E65C18F1DC3FF7 1F0DD8AF
	static void _0xC13829D2B382C248() { rage::NativeInvoke::Invoke<0xC13829D2B382C248, uint32_t>(); } // C13829D2B382C248 405ECA16
	static BOOL _0xF9AD04DCF8EBEC10(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xF9AD04DCF8EBEC10, BOOL>(p0, p1); } // F9AD04DCF8EBEC10 9567392B
	static BOOL _0x15661C14C9EAB7F2() { return rage::NativeInvoke::Invoke<0x15661C14C9EAB7F2, BOOL>(); } // 15661C14C9EAB7F2 F79FFF3C
	static BOOL _0x43B037C40D85373A() { return rage::NativeInvoke::Invoke<0x43B037C40D85373A, BOOL>(); } // 43B037C40D85373A A7F3F82B
	static uint32_t _0xC953DE1C979F7864() { return rage::NativeInvoke::Invoke<0xC953DE1C979F7864, uint32_t>(); } // C953DE1C979F7864 410C61D1
	static BOOL _0xE28CFF18502EA4E(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE28CFF18502EA4E, BOOL>(p0); } // E28CFF18502EA4E 0D4F845D
	static void _0x6436BDEACFB0495D() { rage::NativeInvoke::Invoke<0x6436BDEACFB0495D, uint32_t>(); } // 6436BDEACFB0495D E13C1F7F
	static void _0x6D5993A0867993BC(BOOL p0) { rage::NativeInvoke::Invoke<0x6D5993A0867993BC, uint32_t>(p0); } // 6D5993A0867993BC 213C6D36
	static void _0xA9A185532649B33E(BOOL p0) { rage::NativeInvoke::Invoke<0xA9A185532649B33E, uint32_t>(p0); } // A9A185532649B33E 511E6F50
	static BOOL _0xF7D85F23727065AA(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF7D85F23727065AA, BOOL>(p0); } // F7D85F23727065AA B4668B23
	static BOOL _0x017BD2BC9EC8FF721(uint32_t *p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x017BD2BC9EC8FF721, BOOL>(p0, p1, p2); } // 017BD2BC9EC8FF721 30B51753
	static BOOL _0x3240E3C70DDA9474() { return rage::NativeInvoke::Invoke<0x3240E3C70DDA9474, BOOL>(); } // 3240E3C70DDA9474 02DAD93F
	static BOOL _0x0FD61A954794984BA(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0FD61A954794984BA, BOOL>(p0); } // 0FD61A954794984BA 2D947814
	static BOOL _0x5BF1C0FDA139383B() { return rage::NativeInvoke::Invoke<0x5BF1C0FDA139383B, BOOL>(); } // 5BF1C0FDA139383B 37A28C26
	static BOOL _0xF1C6F9E767A5DEE8() { return rage::NativeInvoke::Invoke<0xF1C6F9E767A5DEE8, BOOL>(); } // F1C6F9E767A5DEE8 11E8B5CD
	static BOOL _0x4798C6069A872EC2() { return rage::NativeInvoke::Invoke<0x4798C6069A872EC2, BOOL>(); } // 4798C6069A872EC2 429AEAB3
	static uint32_t TEXTURE_DOWNLOAD_REQUEST(uint32_t *p0, uint32_t *p1, uint32_t *p2, BOOL p3) { return rage::NativeInvoke::Invoke<0xF167A5ADFC667948, uint32_t>(p0, p1, p2, p3); } // F167A5ADFC667948 AD546CC3
	static uint32_t _0x0CE3B4D02B7A92D26(uint32_t *p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x0CE3B4D02B7A92D26, uint32_t>(p0, p1, p2); } // 0CE3B4D02B7A92D26 1856D008
	static uint32_t _0x4FB34A5068894285(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t *p4, BOOL p5) { return rage::NativeInvoke::Invoke<0x4FB34A5068894285, uint32_t>(p0, p1, p2, p3, p4, p5); } // 4FB34A5068894285 68C9AF69
	static void TEXTURE_DOWNLOAD_RELEASE(uint32_t p0) { rage::NativeInvoke::Invoke<0x23C292E9407BA5C3, uint32_t>(p0); } // 23C292E9407BA5C3 EE8D9E70
	static BOOL _0xF98CD24814CF850B(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF98CD24814CF850B, BOOL>(p0); } // F98CD24814CF850B E4547765
	static uint32_t TEXTURE_DOWNLOAD_GET_NAME(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBBFC293A49773E04, uint32_t>(p0); } // BBFC293A49773E04 A40EF65A
	static uint32_t _0xFE7079FA4E8435E8(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFE7079FA4E8435E8, uint32_t>(p0); } // FE7079FA4E8435E8 03225BA3
	static BOOL _0xFB0BBF0CC2ED72E9() { return rage::NativeInvoke::Invoke<0xFB0BBF0CC2ED72E9, BOOL>(); } // FB0BBF0CC2ED72E9 4DEBC227
	static BOOL _0x9BF8E98D9B3F5A54() { return rage::NativeInvoke::Invoke<0x9BF8E98D9B3F5A54, BOOL>(); } // 9BF8E98D9B3F5A54 5C065D55
	static BOOL _0x159065C2913B4494() { return rage::NativeInvoke::Invoke<0x159065C2913B4494, BOOL>(); } // 159065C2913B4494 0CA1167F
	static BOOL _0x19070185D75DF222() { return rage::NativeInvoke::Invoke<0x19070185D75DF222, BOOL>(); } // 19070185D75DF222 424C6E27
	static BOOL _0xEC2B31743D652C31() { return rage::NativeInvoke::Invoke<0xEC2B31743D652C31, BOOL>(); } // EC2B31743D652C31 D3BBE42F
	static BOOL _0xEBCDDFA755C5351E() { return rage::NativeInvoke::Invoke<0xEBCDDFA755C5351E, BOOL>(); } // EBCDDFA755C5351E BDBB5948
	static BOOL _0x96DFA37778AF8612() { return rage::NativeInvoke::Invoke<0x96DFA37778AF8612, BOOL>(); } // 96DFA37778AF8612 97287D68
	static BOOL _0x9EAC9983022E6FF4() { return rage::NativeInvoke::Invoke<0x9EAC9983022E6FF4, BOOL>(); } // 9EAC9983022E6FF4 C6EA802E
	static BOOL _0xEFDDEF6F89C7D852(uint32_t p0) { return rage::NativeInvoke::Invoke<0xEFDDEF6F89C7D852, BOOL>(p0); } // EFDDEF6F89C7D852 FD261E30
	static BOOL _0xB44392005E092A22(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xB44392005E092A22, BOOL>(p0, p1, p2); } // B44392005E092A22 8570DD34
	static uint32_t _0x7D162B3706F5713C(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7D162B3706F5713C, uint32_t>(p0); } // 7D162B3706F5713C
	static void _0xEA10D24F8D8A9217() { rage::NativeInvoke::Invoke<0xEA10D24F8D8A9217, uint32_t>(); } // EA10D24F8D8A9217 273C6180
	static void _0xD1A3BECA9203A5A9() { rage::NativeInvoke::Invoke<0xD1A3BECA9203A5A9, uint32_t>(); } // D1A3BECA9203A5A9 371BBA08
	static void _0x6C912BA9B35A9F3F(BOOL p0) { rage::NativeInvoke::Invoke<0x6C912BA9B35A9F3F, uint32_t>(p0); } // 6C912BA9B35A9F3F A100CC97
	static void _0x767B987327A45DE0(uint32_t p0, BOOL p1) { rage::NativeInvoke::Invoke<0x767B987327A45DE0, uint32_t>(p0, p1); } // 767B987327A45DE0 BB2D33D3
	static void _0xA77A2F3C94F99323(uint32_t p0) { rage::NativeInvoke::Invoke<0xA77A2F3C94F99323, uint32_t>(p0); } // A77A2F3C94F99323
	static void _0x4AB930244460BF2() { rage::NativeInvoke::Invoke<0x4AB930244460BF2, uint32_t>(); } // 4AB930244460BF2
	static uint32_t _0xC6B51ABA90A91F9C() { return rage::NativeInvoke::Invoke<0xC6B51ABA90A91F9C, uint32_t>(); } // C6B51ABA90A91F9C
}

namespace NETWORKCASH
{
	static void _0x1FF571B9157EE8D(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x1FF571B9157EE8D, uint32_t>(p0, p1); } // 1FF571B9157EE8D 66DA9935
	static void NETWORK_DELETE_CHARACTER(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x0E4E716428D186C37, uint32_t>(p0, p1, p2); } // 0E4E716428D186C37 A9F7E9C3
	static void _0x80CF7744FA465DBE(uint32_t p0) { rage::NativeInvoke::Invoke<0x80CF7744FA465DBE, uint32_t>(p0); } // 80CF7744FA465DBE 19F0C471
	static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xB79C30FF82F0D089, uint32_t>(p0, p1); } // B79C30FF82F0D089 C6047FDB
	static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x18502B2FD4934538, uint32_t>(p0, p1); } // 18502B2FD4934538 4ED71C1A
	static BOOL _0x3CDF164C92BCDE6D() { return rage::NativeInvoke::Invoke<0x3CDF164C92BCDE6D, BOOL>(); } // 3CDF164C92BCDE6D A27B9FE8
	static void _0x3C2373FD72F7B502(uint32_t p0, uint32_t *p1, uint32_t *p2, BOOL p3) { rage::NativeInvoke::Invoke<0x3C2373FD72F7B502, uint32_t>(p0, p1, p2, p3); } // 3C2373FD72F7B502 07C92F21
	static BOOL _0xDDAF2DF64E40BF0E(uint32_t p0, BOOL p1, BOOL p2) { return rage::NativeInvoke::Invoke<0xDDAF2DF64E40BF0E, BOOL>(p0, p1, p2); } // DDAF2DF64E40BF0E 8474E6F0
	static BOOL _0x81CD3917E8426670(uint32_t p0) { return rage::NativeInvoke::Invoke<0x81CD3917E8426670, BOOL>(p0); } // 81CD3917E8426670 E3802533
	static void NETWORK_EARN_FROM_PICKUP(uint32_t p0) { rage::NativeInvoke::Invoke<0x14EB8BD17B652FEB, uint32_t>(p0); } // 14EB8BD17B652FEB 70A0ED62
	static void _0x6FC4139E8B076EB5(uint32_t p0) { rage::NativeInvoke::Invoke<0x6FC4139E8B076EB5, uint32_t>(p0); } // 6FC4139E8B076EB5 33C20BC4
	static void _0xAD3D2665CCF516BE(uint32_t p0) { rage::NativeInvoke::Invoke<0xAD3D2665CCF516BE, uint32_t>(p0); } // AD3D2665CCF516BE 30B3EC0A
	static void _0xB64682EA5A91F1C4(uint32_t p0) { rage::NativeInvoke::Invoke<0xB64682EA5A91F1C4, uint32_t>(p0); } // B64682EA5A91F1C4 EAF04923
	static void NETWORK_EARN_FROM_BETTING(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xB8026A1998D6CCF6, uint32_t>(p0, p1); } // B8026A1998D6CCF6 A0F7F07C
	static void NETWORK_EARN_FROM_JOB(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x236F604FB0A40861, uint32_t>(p0, p1); } // 236F604FB0A40861 0B6997FC
	static void _0x3F9BAC1B16A279E2(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x3F9BAC1B16A279E2, uint32_t>(p0, p1); } // 3F9BAC1B16A279E2 5E81F55C
	static void _0xED9DC6C19B789496(uint32_t p0, uint32_t *p1, BOOL p2) { rage::NativeInvoke::Invoke<0xED9DC6C19B789496, uint32_t>(p0, p1, p2); } // ED9DC6C19B789496 2BEFB6C4
	static void NETWORK_EARN_FROM_BOUNTY(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3) { rage::NativeInvoke::Invoke<0x650865A1683F7638, uint32_t>(p0, p1, p2, p3); } // 650865A1683F7638 127F2DAE
	static void _0x2B85201A5F74DFC9(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x2B85201A5F74DFC9, uint32_t>(p0, p1); } // 2B85201A5F74DFC9 F11FC458
	static void NETWORK_EARN_FROM_HOLDUPS(uint32_t p0) { rage::NativeInvoke::Invoke<0xD9FAAB133DEA223D, uint32_t>(p0); } // D9FAAB133DEA223D E6B90E9C
	static void NETWORK_EARN_FROM_PROPERTY(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xF082DA8AACD681A7, uint32_t>(p0, p1); } // F082DA8AACD681A7 9BE4F7E1
	static void _0xE80D3EE0F2EADEBD(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE80D3EE0F2EADEBD, uint32_t>(p0, p1); } // E80D3EE0F2EADEBD 866004A8
	static void _0xAB9B3424CF655F60(uint32_t p0) { rage::NativeInvoke::Invoke<0xAB9B3424CF655F60, uint32_t>(p0); } // AB9B3424CF655F60 CC068380
	static void NETWORK_EARN_FROM_ROCKSTAR(uint32_t p0) { rage::NativeInvoke::Invoke<0x0709E9C93EC5ED91, uint32_t>(p0); } // 0709E9C93EC5ED91 5A3733CC
	static void NETWORK_EARN_FROM_VEHICLE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xE290EBF203F47, uint32_t>(p0, p1); } // E290EBF203F47 F803589D
	static void _0x107CE9A6E8598A7F(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x107CE9A6E8598A7F, uint32_t>(p0, p1); } // 107CE9A6E8598A7F 96B8BEE8
	static BOOL _0xD2C51FB6128E84C0(uint32_t p0, BOOL p1, BOOL p2, BOOL p3, uint32_t p4) { return rage::NativeInvoke::Invoke<0xD2C51FB6128E84C0, BOOL>(p0, p1, p2, p3, p4); } // D2C51FB6128E84C0 5AA379D9
	static void NETWORK_BUY_ITEM(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, BOOL p4, uint32_t *p5, uint32_t p6, uint32_t p7, uint32_t p8, BOOL p9) { rage::NativeInvoke::Invoke<0xE7EB9FEEDAA96E59, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // E7EB9FEEDAA96E59 A07B6368
	static void NETWORK_SPENT_TAXI(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x9B839B7143174CEF, uint32_t>(p0, p1, p2); } // 9B839B7143174CEF 1F3DB3E3
	static void _0xB75FD9FD92CF5413(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB75FD9FD92CF5413, uint32_t>(p0, p1, p2); } // B75FD9FD92CF5413 BE70849B
	static void _0xDA63A3F8369D53C9(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xDA63A3F8369D53C9, uint32_t>(p0, p1, p2); } // DA63A3F8369D53C9 451A2644
	static void _0xBB7AEB1776F6998F(uint32_t p0, uint32_t *p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0xBB7AEB1776F6998F, uint32_t>(p0, p1, p2, p3); } // BB7AEB1776F6998F 224A3488
	static void NETWORK_SPENT_BETTING(uint32_t p0, uint32_t p1, uint32_t *p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0x23924D69EA14501C, uint32_t>(p0, p1, p2, p3, p4); } // 23924D69EA14501C F8A07513
	static void _0xF059C5210EEBF5D5(uint32_t p0, BOOL p1, uint32_t p2, BOOL p3) { rage::NativeInvoke::Invoke<0xF059C5210EEBF5D5, uint32_t>(p0, p1, p2, p3); } // F059C5210EEBF5D5 8957038E
	static void NETWORK_BUY_HEALTHCARE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xF9FE8BEA10CEF491, uint32_t>(p0, p1, p2); } // F9FE8BEA10CEF491 832150E5
	static void NETWORK_BUY_AIRSTRIKE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xFBE819C513537631, uint32_t>(p0, p1, p2); } // FBE819C513537631 40470683
	static void _0x34D60A7B0A6708EC(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x34D60A7B0A6708EC, uint32_t>(p0, p1, p2); } // 34D60A7B0A6708EC 047547D4
	static void NETWORK_SPENT_AMMO_DROP(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x4884ACE40C107FB4, uint32_t>(p0, p1, p2); } // 4884ACE40C107FB4 4B643076
	static void NETWORK_BUY_BOUNTY(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0xCEC9FA0E742FF9C5, uint32_t>(p0, p1, p2, p3); } // CEC9FA0E742FF9C5 CB89CBE0
	static void NETWORK_BUY_PROPERTY(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x9FCCC2372AF47C44, uint32_t>(p0, p1, p2, p3); } // 9FCCC2372AF47C44 7D479AAB
	static void NETWORK_SPENT_HELI_PICKUP(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xE7F22FDA5A24DE10, uint32_t>(p0, p1, p2); } // E7F22FDA5A24DE10 27EEBCAB
	static void NETWORK_SPENT_BOAT_PICKUP(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x5287EBA22D40FD9A, uint32_t>(p0, p1, p2); } // 5287EBA22D40FD9A B241CABD
	static void _0x9EA538C085A0CBD0(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x9EA538C085A0CBD0, uint32_t>(p0, p1, p2); } // 9EA538C085A0CBD0 DE7D398C
	static void NETWORK_SPENT_CASH_DROP(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xB27DE344F77251C3, uint32_t>(p0, p1, p2); } // B27DE344F77251C3 87BD1D11
	static void _0x9AD5F7A9399F7EDA(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x9AD5F7A9399F7EDA, uint32_t>(p0, p1, p2); } // 9AD5F7A9399F7EDA E792C4A5
	static void _0x8118A007BA66D5AA(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x8118A007BA66D5AA, uint32_t>(p0, p1, p2); } // 8118A007BA66D5AA E6AAA0D5
	static void _0x8600FF19E5FEBF49(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x8600FF19E5FEBF49, uint32_t>(p0, p1, p2); } // 8600FF19E5FEBF49 99CF02C4
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(uint32_t p0, uint32_t *p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x9D396A1182EC927D, uint32_t>(p0, p1, p2, p3); } // 9D396A1182EC927D E7CB4F95
	static void _0x2732AD1B3B7B9AC6(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x2732AD1B3B7B9AC6, uint32_t>(p0, p1, p2); } // 2732AD1B3B7B9AC6 20DDCF2F
	static void _0x1CDE21ABC6B951E5(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x1CDE21ABC6B951E5, uint32_t>(p0, p1, p2); } // 1CDE21ABC6B951E5 2F7836E2
	static void NETWORK_SPENT_CARWASH(uint32_t p0, uint32_t p1, uint32_t p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0x8AC761BC12E50F8, uint32_t>(p0, p1, p2, p3, p4); } // 8AC761BC12E50F8 8283E028
	static void NETWORK_SPENT_CINEMA(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x2D9617C46CBEED90, uint32_t>(p0, p1, p2, p3); } // 2D9617C46CBEED90 1100CAF5
	static void NETWORK_SPENT_TELESCOPE(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xBE3FE11E83295EB, uint32_t>(p0, p1, p2); } // BE3FE11E83295EB AE7FF044
	static void NETWORK_SPENT_HOLDUPS(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xE2763147830124B7, uint32_t>(p0, p1, p2); } // E2763147830124B7 1B3803B1
	static void _0xC3DF83382D6BA7BD(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xC3DF83382D6BA7BD, uint32_t>(p0, p1, p2); } // C3DF83382D6BA7BD 7E97C92C
	static void _0x595D032642CAB7C9(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x595D032642CAB7C9, uint32_t>(p0, p1, p2); } // 595D032642CAB7C9 78436D07
	static void _0xAB9797B49949A570(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xAB9797B49949A570, uint32_t>(p0, p1, p2); } // AB9797B49949A570 5AEE2FC1
	static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(uint32_t p0, uint32_t p1, uint32_t *p2, BOOL p3, BOOL p4) { rage::NativeInvoke::Invoke<0xA61C21F6F50100E0, uint32_t>(p0, p1, p2, p3, p4); } // A61C21F6F50100E0 4E665BB2
	static void NETWORK_SPENT_CALL_PLAYER(uint32_t p0, uint32_t *p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x9C7CF4B68145F109, uint32_t>(p0, p1, p2, p3); } // 9C7CF4B68145F109 1A89B5FC
	static void NETWORK_SPENT_BOUNTY(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0xDB872C4B72F80C18, uint32_t>(p0, p1, p2); } // DB872C4B72F80C18 3401FC96
	static void _0x80D435EF8A833C56(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x80D435EF8A833C56, uint32_t>(p0, p1, p2); } // 80D435EF8A833C56 54198922
	static uint32_t _0x41DCD44C1252DD10(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x41DCD44C1252DD10, uint32_t>(p0, p1); } // 41DCD44C1252DD10 C5D8B1E9
	static void _0x7CE95A977BD9557F(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x7CE95A977BD9557F, uint32_t>(p0, p1, p2, p3); } // 7CE95A977BD9557F 3D96A21C
	static void _0x27129F179B18E953(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x27129F179B18E953, uint32_t>(p0, p1, p2); } // 27129F179B18E953 2E51C61C
	static void _0x74F159901D7AA2FB(uint32_t p0, BOOL p1, BOOL p2) { rage::NativeInvoke::Invoke<0x74F159901D7AA2FB, uint32_t>(p0, p1, p2); } // 74F159901D7AA2FB D57A5125
	static void _0x96CD36BAF0A29413(uint32_t p0, uint32_t p1, BOOL p2, BOOL p3) { rage::NativeInvoke::Invoke<0x96CD36BAF0A29413, uint32_t>(p0, p1, p2, p3); } // 96CD36BAF0A29413 D9622D64
	static uint32_t _0x67F16E47B5610AAF() { return rage::NativeInvoke::Invoke<0x67F16E47B5610AAF, uint32_t>(); } // 67F16E47B5610AAF 16184FB5
	static uint32_t _0x5A1D7FBA416DF110(uint32_t p0) { return rage::NativeInvoke::Invoke<0x5A1D7FBA416DF110, uint32_t>(p0); } // 5A1D7FBA416DF110 4F5B781C
	static uint32_t _0xE9F02F4EB9632856() { return rage::NativeInvoke::Invoke<0xE9F02F4EB9632856, uint32_t>(); } // E9F02F4EB9632856 ADF8F882
	static uint32_t _0x3809EE5EAB82CFA1() { return rage::NativeInvoke::Invoke<0x3809EE5EAB82CFA1, uint32_t>(); } // 3809EE5EAB82CFA1
	static BOOL _0xFC1F829F3E833222(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xFC1F829F3E833222, BOOL>(p0, p1); } // FC1F829F3E833222
	static uint32_t NETWORK_CAN_RECEIVE_PLAYER_CASH(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xD8CAAEFC44292B1E, uint32_t>(p0, p1, p2, p3); } // D8CAAEFC44292B1E 41F5F10E
	static uint32_t _0x56549C0F3B2AE925(uint32_t p0) { return rage::NativeInvoke::Invoke<0x56549C0F3B2AE925, uint32_t>(p0); } // 56549C0F3B2AE925 8B755993
	static BOOL _0x679C259D41AE5A56(uint32_t p0) { return rage::NativeInvoke::Invoke<0x679C259D41AE5A56, BOOL>(p0); } // 679C259D41AE5A56 8F266745
	static uint32_t _0x814B79DBBCB98520(uint32_t p0) { return rage::NativeInvoke::Invoke<0x814B79DBBCB98520, uint32_t>(p0); } // 814B79DBBCB98520 531E4892
	static uint32_t _0x7A9501011DB6895(uint32_t p0) { return rage::NativeInvoke::Invoke<0x7A9501011DB6895, uint32_t>(p0); } // 7A9501011DB6895 B96C7ABE
}

namespace DLC1
{
	static uint32_t _0xAA1DFDAF98DA3254(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAA1DFDAF98DA3254, uint32_t>(p0); } // AA1DFDAF98DA3254 71D0CF3E
	static BOOL _0xEAC18B18FFAB93BC(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xEAC18B18FFAB93BC, BOOL>(p0, p1, p2); } // EAC18B18FFAB93BC 2E9D628C
	static void INIT_SHOP_PED_COMPONENT(uint32_t *p0) { rage::NativeInvoke::Invoke<0x16CF56B9CED4C26, uint32_t>(p0); } // 16CF56B9CED4C26 B818C7FC
	static void INIT_SHOP_PED_PROP(uint32_t *p0) { rage::NativeInvoke::Invoke<0x62F34DA8BFDDE029, uint32_t>(p0); } // 62F34DA8BFDDE029 F5659E50
	static uint32_t _0x765684370AAF9AF8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x765684370AAF9AF8, uint32_t>(p0, p1, p2, p3); } // 765684370AAF9AF8 C937FF3D
	static uint32_t _0x8B119055718A4BE6(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x8B119055718A4BE6, uint32_t>(p0, p1, p2, p3, p4, p5); } // 8B119055718A4BE6 594E862C
	static void GET_SHOP_PED_QUERY_COMPONENT(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xC40101F04AFB5C6D, uint32_t>(p0, p1); } // C40101F04AFB5C6D C0718904
	static void GET_SHOP_PED_COMPONENT(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xFCAEA25EDE75812, uint32_t>(p0, p1); } // FCAEA25EDE75812 B39677C5
	static void GET_SHOP_PED_QUERY_PROP(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0xFBAB26A1FE2B440A, uint32_t>(p0, p1); } // FBAB26A1FE2B440A 1D3C1466
	static uint32_t _0x0D10BF675CBE79756(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0x0D10BF675CBE79756, uint32_t>(p0, p1, p2, p3); } // 0D10BF675CBE79756 C8A4BF12
	static uint32_t _0xE41CAAF2BE648006(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xE41CAAF2BE648006, uint32_t>(p0, p1, p2, p3); } // E41CAAF2BE648006 7D876DC0
	static uint32_t _0xE6140197413A5F77(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE6140197413A5F77, uint32_t>(p0); } // E6140197413A5F77 159751B4
	static void _0xFD2E9A61D26D5F93(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { rage::NativeInvoke::Invoke<0xFD2E9A61D26D5F93, uint32_t>(p0, p1, p2, p3, p4); } // FD2E9A61D26D5F93 E4FF7103
	static uint32_t _0x852356FD10955BB9(uint32_t p0) { return rage::NativeInvoke::Invoke<0x852356FD10955BB9, uint32_t>(p0); } // 852356FD10955BB9 CE70F183
	static void GET_FORCED_COMPONENT(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { rage::NativeInvoke::Invoke<0x970ECF30E9EF8E6F, uint32_t>(p0, p1, p2, p3, p4); } // 970ECF30E9EF8E6F 382C70BE
	static uint32_t _0xD9CFD2CE14D8A9BC(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xD9CFD2CE14D8A9BC, uint32_t>(p0, p1, p2); } // D9CFD2CE14D8A9BC 8E2C7FD5
	static uint32_t _0x907A60ED99070489(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x907A60ED99070489, uint32_t>(p0, p1); } // 907A60ED99070489 1ECD23E7
	static void GET_SHOP_PED_QUERY_OUTFIT(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x31C74BFD03FE74C3, uint32_t>(p0, p1); } // 31C74BFD03FE74C3 2F8013A1
	static void _0x26B75F16F9847D7F(uint32_t p0, uint32_t *p1) { rage::NativeInvoke::Invoke<0x26B75F16F9847D7F, uint32_t>(p0, p1); } // 26B75F16F9847D7F CAFE9209
	static uint32_t _0x0B485BCF6D39F22B3(uint32_t p0) { return rage::NativeInvoke::Invoke<0x0B485BCF6D39F22B3, uint32_t>(p0); } // 0B485BCF6D39F22B3 2798F56F
	static BOOL _0x71DC6C016B32FEA2(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x71DC6C016B32FEA2, BOOL>(p0, p1, p2); } // 71DC6C016B32FEA2 6641A864
	static BOOL _0xEEC23EAA7B8F7831(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xEEC23EAA7B8F7831, BOOL>(p0, p1, p2); } // EEC23EAA7B8F7831 818534AC
	static uint32_t _0x4FC8D240D0A0F8E5() { return rage::NativeInvoke::Invoke<0x4FC8D240D0A0F8E5, uint32_t>(); } // 4FC8D240D0A0F8E5 8EAF9CF6
	static uint32_t GET_DLC_VEHICLE_MODEL(uint32_t p0) { return rage::NativeInvoke::Invoke<0x72735B4DB6C14EE1, uint32_t>(p0); } // 72735B4DB6C14EE1 A2201E09
	static BOOL GET_DLC_VEHICLE_DATA(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x10E2F747F94CA7D, BOOL>(p0, p1); } // 10E2F747F94CA7D CF428FA4
	static uint32_t GET_DLC_VEHICLE_FLAGS(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB3E61EDD39F041F, uint32_t>(p0); } // B3E61EDD39F041F AB12738C
	static uint32_t _0x2611EF4947AA943C() { return rage::NativeInvoke::Invoke<0x2611EF4947AA943C, uint32_t>(); } // 2611EF4947AA943C 2B757E6C
	static BOOL GET_DLC_WEAPON_DATA(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x82A3D8743B8B79C0, BOOL>(p0, p1); } // 82A3D8743B8B79C0 D88EC8EA
	static uint32_t _0xB2C0362098CB97C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB2C0362098CB97C, uint32_t>(p0); } // B2C0362098CB97C 476B23A9
	static BOOL GET_DLC_WEAPON_COMPONENT_DATA(uint32_t p0, uint32_t p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x47BF2221B5382C2A, BOOL>(p0, p1, p2); } // 47BF2221B5382C2A 4B83FCAF
	static BOOL _0x33C8EAC2E4509403(uint32_t p0) { return rage::NativeInvoke::Invoke<0x33C8EAC2E4509403, BOOL>(p0); } // 33C8EAC2E4509403 06396058
	static BOOL _0x09145BCE598642314(uint32_t p0) { return rage::NativeInvoke::Invoke<0x09145BCE598642314, BOOL>(p0); } // 09145BCE598642314 35BCA844
	static uint32_t _0xF63266F5CAB1CD08(uint32_t p0) { return rage::NativeInvoke::Invoke<0xF63266F5CAB1CD08, uint32_t>(p0); } // F63266F5CAB1CD08 59352658
}

namespace DLC2
{
	static BOOL IS_DLC_PRESENT(uint32_t p0) { return rage::NativeInvoke::Invoke<0xFBD0BD8E550E0625, BOOL>(p0); } // FBD0BD8E550E0625 1F321943
	static uint32_t _0xFF191F289DBE0826() { return rage::NativeInvoke::Invoke<0xFF191F289DBE0826, uint32_t>(); } // FF191F289DBE0826 881B1FDB
	static uint32_t _0xA1B16BEDA324097F() { return rage::NativeInvoke::Invoke<0xA1B16BEDA324097F, uint32_t>(); } // A1B16BEDA324097F C2169164
	static uint32_t _0x8DFFECC7653AF0A8() { return rage::NativeInvoke::Invoke<0x8DFFECC7653AF0A8, uint32_t>(); } // 8DFFECC7653AF0A8 F79A97F5
	static uint32_t _0xB07282DFA0766DC3() { return rage::NativeInvoke::Invoke<0xB07282DFA0766DC3, uint32_t>(); } // B07282DFA0766DC3 F69B729C
	static BOOL _0x7E6E244632305904() { return rage::NativeInvoke::Invoke<0x7E6E244632305904, BOOL>(); } // 7E6E244632305904 517B601B
	static uint32_t _0xAF7E3364891E45C2(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xAF7E3364891E45C2, uint32_t>(p0, p1); } // AF7E3364891E45C2 6087C10C
	static void _0x83E54013C981B0D4() { rage::NativeInvoke::Invoke<0x83E54013C981B0D4, uint32_t>(); } // 83E54013C981B0D4
	static void _0x0C1F119804DDBD63E() { rage::NativeInvoke::Invoke<0x0C1F119804DDBD63E, uint32_t>(); } // 0C1F119804DDBD63E
}

namespace DECORATOR
{
	static BOOL _0xEF4F1DE626450A9(uint32_t p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xEF4F1DE626450A9, BOOL>(p0, p1, p2); } // EF4F1DE626450A9 BBAEEF94
	static BOOL _0x2A2AF8EC19CD5CF5(uint32_t p0, uint32_t *p1, BOOL p2) { return rage::NativeInvoke::Invoke<0x2A2AF8EC19CD5CF5, BOOL>(p0, p1, p2); } // 2A2AF8EC19CD5CF5 8E101F5C
	static BOOL _0x0D88478BF58FAE749(uint32_t p0, uint32_t *p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x0D88478BF58FAE749, BOOL>(p0, p1, p2); } // 0D88478BF58FAE749 DB718B21
	static BOOL _0x44A72A39C7AE7EDD(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x44A72A39C7AE7EDD, BOOL>(p0, p1); } // 44A72A39C7AE7EDD DBCE51E0
	static uint32_t _0xB98156B7389A5A3F(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xB98156B7389A5A3F, uint32_t>(p0, p1); } // B98156B7389A5A3F DDDE59B5
	static BOOL _0x0D665B29FEC987319(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x0D665B29FEC987319, BOOL>(p0, p1); } // 0D665B29FEC987319 74EF9C40
	static BOOL _0x00D9C66E899F04C833(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x00D9C66E899F04C833, BOOL>(p0, p1); } // 00D9C66E899F04C833 E0E2640B
	static void _0xD28F3B77F040264C(uint32_t *p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xD28F3B77F040264C, uint32_t>(p0, p1); } // D28F3B77F040264C 68BD42A9
	static BOOL _0x2F5CF849AAF443C(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x2F5CF849AAF443C, BOOL>(p0, p1); } // 2F5CF849AAF443C 7CF0971D
	static void _0xF827E84964E1F05D() { rage::NativeInvoke::Invoke<0xF827E84964E1F05D, uint32_t>(); } // F827E84964E1F05D 7F3F1C02
}

namespace UNK_SC
{
	static uint32_t _0x05A065FD7D484F6D3() { return rage::NativeInvoke::Invoke<0x05A065FD7D484F6D3, uint32_t>(); } // 05A065FD7D484F6D3 6BE5DF29
	static uint32_t _0xB61576413088514A(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB61576413088514A, uint32_t>(p0); } // B61576413088514A 5ECF955D
	static BOOL _0x53CAD294E3679BE8(uint32_t p0) { return rage::NativeInvoke::Invoke<0x53CAD294E3679BE8, BOOL>(p0); } // 53CAD294E3679BE8 D1ED1D48
	static BOOL _0x27C9311CF33D424C(uint32_t p0) { return rage::NativeInvoke::Invoke<0x27C9311CF33D424C, BOOL>(p0); } // 27C9311CF33D424C 19EE0CCB
	static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xF56FFBFFB7F444B6, BOOL>(p0, p1, p2); } // F56FFBFFB7F444B6 88068C7C
	static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0x21BD5A21CEB536F9, BOOL>(p0, p1, p2); } // 21BD5A21CEB536F9 15607620
	static BOOL _0xD48B375996764F41(uint32_t p0) { return rage::NativeInvoke::Invoke<0xD48B375996764F41, BOOL>(p0); } // D48B375996764F41 EBE420A4
	static uint32_t _0x2DDA4DD69F75469C(uint32_t p0) { return rage::NativeInvoke::Invoke<0x2DDA4DD69F75469C, uint32_t>(p0); } // 2DDA4DD69F75469C 2C959AF9
	static void _0x2E98D16CDABF17BB(uint32_t *p0) { rage::NativeInvoke::Invoke<0x2E98D16CDABF17BB, uint32_t>(p0); } // 2E98D16CDABF17BB 0B9A3512
	static void _0xA4CDEBF6B6E48AE0(uint32_t *p0) { rage::NativeInvoke::Invoke<0xA4CDEBF6B6E48AE0, uint32_t>(p0); } // A4CDEBF6B6E48AE0 75324674
	static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x4F796105569EE198, BOOL>(p0, p1); } // 4F796105569EE198 88CA3BFC
	static BOOL _0x3759EBC033D70D61(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x3759EBC033D70D61, BOOL>(p0); } // 3759EBC033D70D61 628F489B
	static BOOL _0x6B54A5F5C8E5F852(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x6B54A5F5C8E5F852, BOOL>(p0, p1); } // 6B54A5F5C8E5F852 AB3346B5
	static void _0x283F65B9F7FFF473(uint32_t *p0) { rage::NativeInvoke::Invoke<0x283F65B9F7FFF473, uint32_t>(p0); } // 283F65B9F7FFF473 9A703A2B
	static void _0x80963FEB3A23786E() { rage::NativeInvoke::Invoke<0x80963FEB3A23786E, uint32_t>(); } // 80963FEB3A23786E D094F11A
	static void _0xC86CA07C8B94AAA(uint32_t *p0) { rage::NativeInvoke::Invoke<0xC86CA07C8B94AAA, uint32_t>(p0); } // C86CA07C8B94AAA AF3C081B
	static void _0x2DBBC201E29D17ED(BOOL p0) { rage::NativeInvoke::Invoke<0x2DBBC201E29D17ED, uint32_t>(p0); } // 2DBBC201E29D17ED 2FB9F53C
	static uint32_t _0xC3938B032D1D9A73() { return rage::NativeInvoke::Invoke<0xC3938B032D1D9A73, uint32_t>(); } // C3938B032D1D9A73 6C5738AB
	static uint32_t _0xE504BE0FBA18C659() { return rage::NativeInvoke::Invoke<0xE504BE0FBA18C659, uint32_t>(); } // E504BE0FBA18C659 468668F0
	static BOOL _0xF973FBF57064BF2C(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xF973FBF57064BF2C, BOOL>(p0, p1); } // F973FBF57064BF2C 90C74343
	static BOOL _0x5A787CFC4FBE7CF6(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x5A787CFC4FBE7CF6, BOOL>(p0, p1); } // 5A787CFC4FBE7CF6 3ACE6D6B
	static BOOL _0xFA2B7282B8204F3A(uint32_t p0, float p1) { return rage::NativeInvoke::Invoke<0xFA2B7282B8204F3A, BOOL>(p0, p1); } // FA2B7282B8204F3A 579B4510
	static BOOL _0x40341C7F6FA063CB(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x40341C7F6FA063CB, BOOL>(p0); } // 40341C7F6FA063CB DF45B2A7
	static BOOL _0xBA75E6BA58CAED6D(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0xBA75E6BA58CAED6D, BOOL>(p0, p1); } // BA75E6BA58CAED6D DF084A6B
	static BOOL _0xC4CFCD0FB869C13(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC4CFCD0FB869C13, BOOL>(p0); } // C4CFCD0FB869C13 FFED3676
	static uint32_t _0x548F24F67E9D3A7(uint32_t p0) { return rage::NativeInvoke::Invoke<0x548F24F67E9D3A7, uint32_t>(p0); } // 548F24F67E9D3A7 A796D7A7
	static uint32_t _0xBE8ACB9C59400B04(uint32_t p0) { return rage::NativeInvoke::Invoke<0xBE8ACB9C59400B04, uint32_t>(p0); } // BE8ACB9C59400B04 09497F31
	static uint32_t _0xE5CB5657EB648F29(uint32_t p0) { return rage::NativeInvoke::Invoke<0xE5CB5657EB648F29, uint32_t>(p0); } // E5CB5657EB648F29 4D8A6521
	static BOOL _0x3C4225789B58B0F6(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x3C4225789B58B0F6, BOOL>(p0, p1); } // 3C4225789B58B0F6 7AA36406
	static BOOL _0xAA78540A16CE631B(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAA78540A16CE631B, BOOL>(p0); } // AA78540A16CE631B F379DCE4
	static uint32_t _0xAE53CB94C418DB1C(uint32_t p0) { return rage::NativeInvoke::Invoke<0xAE53CB94C418DB1C, uint32_t>(p0); } // AE53CB94C418DB1C 65D84665
	static BOOL _0x158FF047B5E1602F() { return rage::NativeInvoke::Invoke<0x158FF047B5E1602F, BOOL>(); } // 158FF047B5E1602F C96456BA
	static uint32_t _0x200BD0C04B9D4202(uint32_t *p0) { return rage::NativeInvoke::Invoke<0x200BD0C04B9D4202, uint32_t>(p0); } // 200BD0C04B9D4202 8E7AEEB7
	static BOOL _0xF881F91655D8F5E3(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xF881F91655D8F5E3, BOOL>(p0, p1, p2); } // F881F91655D8F5E3 E778B2A7
	static BOOL _0xD198BC289D0F2E55(uint32_t p0, uint32_t *p1, uint32_t *p2) { return rage::NativeInvoke::Invoke<0xD198BC289D0F2E55, BOOL>(p0, p1, p2); } // D198BC289D0F2E55 CE7D50A8
	static BOOL _0x643A897B5633DCAB(uint32_t p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x643A897B5633DCAB, BOOL>(p0, p1); } // 643A897B5633DCAB D26CCA46
	static BOOL _0x9DA9EA1CE59903D3(uint32_t p0) { return rage::NativeInvoke::Invoke<0x9DA9EA1CE59903D3, BOOL>(p0); } // 9DA9EA1CE59903D3 24D84334
	static BOOL _0x5A258266A5D0BA37(uint32_t p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0x5A258266A5D0BA37, BOOL>(p0, p1); } // 5A258266A5D0BA37 8A023024
	static BOOL _0x1A2866BE5E9877C3() { return rage::NativeInvoke::Invoke<0x1A2866BE5E9877C3, BOOL>(); } // 1A2866BE5E9877C3 1C65B038
	static BOOL _0x949EE73B9619A6AB() { return rage::NativeInvoke::Invoke<0x949EE73B9619A6AB, BOOL>(); } // 949EE73B9619A6AB 4D4C37B3
	static BOOL _0x47A74873CD94D2C(uint32_t *p0, uint32_t *p1) { return rage::NativeInvoke::Invoke<0x47A74873CD94D2C, BOOL>(p0, p1); } // 47A74873CD94D2C AED95A6F
	static void _0x686EA3473144AC63() { rage::NativeInvoke::Invoke<0x686EA3473144AC63, uint32_t>(); } // 686EA3473144AC63 486867E6
	static uint32_t _0xA3F6500A63C8CF54() { return rage::NativeInvoke::Invoke<0xA3F6500A63C8CF54, uint32_t>(); } // A3F6500A63C8CF54
	static BOOL _0xFD223E6B868B6E52(uint32_t *p0) { return rage::NativeInvoke::Invoke<0xFD223E6B868B6E52, BOOL>(p0); } // FD223E6B868B6E52
	static BOOL _0xC38BFF40021AF7B0(uint32_t p0) { return rage::NativeInvoke::Invoke<0xC38BFF40021AF7B0, BOOL>(p0); } // C38BFF40021AF7B0
}

namespace UNK
{
	static uint32_t _0xA6E1A44FB9E16C16() { return rage::NativeInvoke::Invoke<0xA6E1A44FB9E16C16, uint32_t>(); } // A6E1A44FB9E16C16 106C8317
	static BOOL _0x8849932B9B95A837() { return rage::NativeInvoke::Invoke<0x8849932B9B95A837, BOOL>(); } // 8849932B9B95A837 D87F3A9E
	static void _0xBAAAD72367127DBF(BOOL p0) { rage::NativeInvoke::Invoke<0xBAAAD72367127DBF, uint32_t>(p0); } // BAAAD72367127DBF C0B971EA
	static BOOL _0x7FE3D7B52975AA5A() { return rage::NativeInvoke::Invoke<0x7FE3D7B52975AA5A, BOOL>(); } // 7FE3D7B52975AA5A 94BCAC7C
	static void _0x176DCB904478615C(BOOL p0) { rage::NativeInvoke::Invoke<0x176DCB904478615C, uint32_t>(p0); } // 176DCB904478615C 7D90EEE5
	static BOOL _0x534FF77E97E4DDFF() { return rage::NativeInvoke::Invoke<0x534FF77E97E4DDFF, BOOL>(); } // 534FF77E97E4DDFF 734CFEDA
	static void _0xE2E70F189D00A6F5(BOOL p0) { rage::NativeInvoke::Invoke<0xE2E70F189D00A6F5, uint32_t>(p0); } // E2E70F189D00A6F5 8C227332
	static void _0x58DB02A283E5EEA4(BOOL p0) { rage::NativeInvoke::Invoke<0x58DB02A283E5EEA4, uint32_t>(p0); } // 58DB02A283E5EEA4 5C350D78
}

namespace UNK1
{
	static void _0x2F48D79FB2EB0A39(BOOL p0) { rage::NativeInvoke::Invoke<0x2F48D79FB2EB0A39, uint32_t>(p0); } // 2F48D79FB2EB0A39
	static void _0xE697661E50E44C07() { rage::NativeInvoke::Invoke<0xE697661E50E44C07, uint32_t>(); } // E697661E50E44C07
	static void _0x8E96B18BFCA8AA0C() { rage::NativeInvoke::Invoke<0x8E96B18BFCA8AA0C, uint32_t>(); } // 8E96B18BFCA8AA0C
	static void _0x47B990AE184F491B(float p0, float p1, BOOL p2) { rage::NativeInvoke::Invoke<0x47B990AE184F491B, uint32_t>(p0, p1, p2); } // 47B990AE184F491B
	static void _0xC0B91B09CAEBF5AE(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0xC0B91B09CAEBF5AE, uint32_t>(p0, p1); } // C0B91B09CAEBF5AE
	static void _0x882182119EAE9ABF() { rage::NativeInvoke::Invoke<0x882182119EAE9ABF, uint32_t>(); } // 882182119EAE9ABF
	static void _0xDA165DAF4BA384C2() { rage::NativeInvoke::Invoke<0xDA165DAF4BA384C2, uint32_t>(); } // DA165DAF4BA384C2
	static void _0x9871B9F47D2318AE() { rage::NativeInvoke::Invoke<0x9871B9F47D2318AE, uint32_t>(); } // 9871B9F47D2318AE
	static void _0x3A1068DE0F4910A0(uint32_t p0, uint32_t p1, uint32_t p2) { rage::NativeInvoke::Invoke<0x3A1068DE0F4910A0, uint32_t>(p0, p1, p2); } // 3A1068DE0F4910A0
}

namespace UNK2
{
	static void _0x968399323B2AB7E2(uint32_t p0, uint32_t p1) { rage::NativeInvoke::Invoke<0x968399323B2AB7E2, uint32_t>(p0, p1); } // 968399323B2AB7E2
	static uint32_t _0xFD9A44D9D38B33D2() { return rage::NativeInvoke::Invoke<0xFD9A44D9D38B33D2, uint32_t>(); } // FD9A44D9D38B33D2
	static void _0x362326B645DF33A5() { rage::NativeInvoke::Invoke<0x362326B645DF33A5, uint32_t>(); } // 362326B645DF33A5
}

namespace UNK3
{
	static uint32_t _0x8685E0829D91880(uint32_t p0, uint32_t p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0x8685E0829D91880, uint32_t>(p0, p1, p2); } // 8685E0829D91880
	static BOOL _0xF1C99748F5FBF6A0() { return rage::NativeInvoke::Invoke<0xF1C99748F5FBF6A0, BOOL>(); } // F1C99748F5FBF6A0
	static uint32_t _0xC5F1039E65761FD() { return rage::NativeInvoke::Invoke<0xC5F1039E65761FD, uint32_t>(); } // C5F1039E65761FD
	static BOOL _0xF256D78CD08C63F2(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { return rage::NativeInvoke::Invoke<0xF256D78CD08C63F2, BOOL>(p0, p1, p2, p3); } // F256D78CD08C63F2
	static BOOL _0xCEBF7A17B05CC993() { return rage::NativeInvoke::Invoke<0xCEBF7A17B05CC993, BOOL>(); } // CEBF7A17B05CC993
	static BOOL _0xD9479776A4CCE6E1(uint32_t *p0, uint32_t p1) { return rage::NativeInvoke::Invoke<0xD9479776A4CCE6E1, BOOL>(p0, p1); } // D9479776A4CCE6E1
	static BOOL _0xDA6D8DECEBA1F666() { return rage::NativeInvoke::Invoke<0xDA6D8DECEBA1F666, BOOL>(); } // DA6D8DECEBA1F666
	static BOOL _0xB76AB231270A606(uint32_t p0) { return rage::NativeInvoke::Invoke<0xB76AB231270A606, BOOL>(p0); } // B76AB231270A606
	static BOOL _0x92B90704D2F9B3AF(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return rage::NativeInvoke::Invoke<0x92B90704D2F9B3AF, BOOL>(p0, p1, p2, p3, p4, p5); } // 92B90704D2F9B3AF
	static BOOL _0x185C3EB8FA1F5445(uint32_t p0) { return rage::NativeInvoke::Invoke<0x185C3EB8FA1F5445, BOOL>(p0); } // 185C3EB8FA1F5445
	static BOOL _0xAC3D5162415A97A9(uint32_t p0, BOOL p1, uint32_t p2) { return rage::NativeInvoke::Invoke<0xAC3D5162415A97A9, BOOL>(p0, p1, p2); } // AC3D5162415A97A9
	static uint32_t _0x077F27B2AF5BFC4B4() { return rage::NativeInvoke::Invoke<0x077F27B2AF5BFC4B4, uint32_t>(); } // 077F27B2AF5BFC4B4
}

namespace SYSTEM
{
	static void WAIT(uint32_t p0) { rage::NativeInvoke::Invoke<0x452724341A49CD8B, uint32_t>(p0); } // 452724341A49CD8B 7715C03B
	static int START_NEW_SCRIPT(const char* name, int stack) { return rage::NativeInvoke::Invoke<0xE81651AD79516E48, int>(name, stack); } // E81651AD79516E48 3F166D0E
}