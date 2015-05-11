#pragma once

#define Vector3 rage::scrVector

#include "../gta5-scripthook/rage_engine.h"

using N = rage::NativeInvoke;

namespace PLAYER
{
  static uint32_t GET_PLAYER_PED(uint32_t p0) { return N::Invoke<0x687D51F360787909, uint32_t>(p0); } // 43A66C31C68491C0 6E31E993
  static uint32_t GET_PLAYER_PED_SCRIPT_INDEX(uint32_t p0) { return N::Invoke<0x52B9D9DF3307FA5D, uint32_t>(p0); } // 50FAC3A3E030A6E1 6AC64990
  static void SET_PLAYER_MODEL(uint32_t p0, uint32_t p1) { N::Invoke<0x46914EC1D30FE279, void>(p0, p1); } // 00A1CADD00108836 774A4C54
  static void CHANGE_PLAYER_PED(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0x1EC350773AE8700D, void>(p0, p1, p2, p3); } // 048189FAC643DEEE BE515485
  static void GET_PLAYER_RGB_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0xD967C3738031F876, void>(p0, p1, p2, p3); } // E902EF951DCE178F 6EF43BBB
  static uint32_t GET_NUMBER_OF_PLAYERS() { return N::Invoke<0x5E80FD63F151DA78, uint32_t>(); } // 407C7F91DDB46C16 4C1B8867
  static uint32_t GET_PLAYER_TEAM(uint32_t p0) { return N::Invoke<0x5805EAF13FC54BE6, uint32_t>(p0); } // 37039302F4E0A008 9873E404
  static void SET_PLAYER_TEAM(uint32_t p0, uint32_t p1) { N::Invoke<0x8F758D41AE40CD9D, void>(p0, p1); } // 0299FA38396A4940 725ADCF2
  static const char* GET_PLAYER_NAME(uint32_t p0) { return N::Invoke<0xFE4056CB6BBEC732, const char*>(p0); } // 6D0DE6A7B5DA71F8 406B4B20
  static float GET_WANTED_LEVEL_RADIUS(uint32_t p0) { return N::Invoke<0x262A8B3B46EFA590, float>(p0); } // 085DEB493BE80812 1CF7D7DA
  static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(uint32_t p0) { return N::Invoke<0x59B9E2AFE8684602, Vector3>(p0); } // 0C92BA89F1AF26F8 821F2D2C
  static void SET_PLAYER_WANTED_CENTRE_POSITION(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xB728C8416EB7278E, void>(p0, p1, p2, p3); } // 520E541A97A13354 F261633A
  static uint32_t GET_WANTED_LEVEL_THRESHOLD(uint32_t p0) { return N::Invoke<0xBA2F72A1F977F267, uint32_t>(p0); } // FDD179EAF45B556C D9783F6B
  static void SET_PLAYER_WANTED_LEVEL(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x50E86400BAF39B2, void>(p0, p1, p2); } // 39FF19C64EF7DA5B B7A0914B
  static void SET_PLAYER_WANTED_LEVEL_NO_DROP(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x5D68762ED393DB97, void>(p0, p1, p2); } // 340E61DE7F471565 ED6F44F5
  static void SET_PLAYER_WANTED_LEVEL_NOW(uint32_t p0, bool p1) { N::Invoke<0x4DFE220122919594, void>(p0, p1); } // E0A7D1E497FFCD6F AF3AFD83
  static bool ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(uint32_t p0) { return N::Invoke<0x2A2D002410196FB5, bool>(p0); } // AFAF86043E5874E9 E13A71C7
  static bool ARE_PLAYER_STARS_GREYED_OUT(uint32_t p0) { return N::Invoke<0x5F46D07196415342, bool>(p0); } // 0A6EB355EE14A2DB 5E72AB72
  static void SET_DISPATCH_COPS_FOR_PLAYER(uint32_t p0, bool p1) { N::Invoke<0xC6D71CDDE02AA227, void>(p0, p1); } // DB172424876553F4 48A18913
  static bool IS_PLAYER_WANTED_LEVEL_GREATER(uint32_t p0, uint32_t p1) { return N::Invoke<0xF0428CCE35084401, bool>(p0, p1); } // 238DB2A2C23EE9EF 589A2661
  static void CLEAR_PLAYER_WANTED_LEVEL(uint32_t p0) { N::Invoke<0x35667994C79745D2, void>(p0); } // B302540597885499 54EA5BCC
  static bool IS_PLAYER_DEAD(uint32_t p0) { return N::Invoke<0x3082186EA3CBA463, bool>(p0); } // 424D4687FA1E5652 140CA5A8
  static bool IS_PLAYER_PRESSING_HORN(uint32_t p0) { return N::Invoke<0x2A48227D4098FFDD, bool>(p0); } // FA1E2BF8B10598F9 ED1D1662
  static void SET_PLAYER_CONTROL(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0xFAAA53BBE1EEF174, void>(p0, p1, p2); } // 8D32347D6D4C40A2 D17AFCD8
  static uint32_t GET_PLAYER_WANTED_LEVEL(uint32_t p0) { return N::Invoke<0x89D8D467C3C356CB, uint32_t>(p0); } // E28E54788CE8F12D BDCDD163
  static void SET_MAX_WANTED_LEVEL(uint32_t p0) { N::Invoke<0x53C0659721DC11EC, void>(p0); } // AA5F02DB48D704B9 665A06F5
  static void SET_POLICE_RADAR_BLIPS(bool p0) { N::Invoke<0x8B34D6FC7568C13D, void>(p0); } // 43286D561B72B8BF 8E114B10
  static void SET_POLICE_IGNORE_PLAYER(uint32_t p0, bool p1) { N::Invoke<0xDD748F877B6C00B7, void>(p0, p1); } // 32C62AA929C2DA6A E6DE71B7
  static bool IS_PLAYER_PLAYING(uint32_t p0) { return N::Invoke<0x52A84D9C3A400EA8, bool>(p0); } // 5E9564D8246B909A E15D777F
  static void SET_EVERYONE_IGNORE_PLAYER(uint32_t p0, bool p1) { N::Invoke<0x6BF1DDDFD53FBE63, void>(p0, p1); } // 8EEDA153AD141BA4 C915285E
  static void SET_ALL_RANDOM_PEDS_FLEE(uint32_t p0, bool p1) { N::Invoke<0x85561C2D9ACBDF0D, void>(p0, p1); } // 056E0FE8534C2949 49EAE968
  static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(uint32_t p0) { N::Invoke<0x34D399ACBC6AA213, void>(p0); } // 471D2FF42A94B4F2 BF974891
  static void _0x924E17FA35852EAD(uint32_t p0, bool p1) { N::Invoke<0x924E17FA35852EAD, void>(p0, p1); } // DE45D1A1EF45EE61 274631FE
  static void _0xC6C656365A451A8F(uint32_t p0) { N::Invoke<0xC6C656365A451A8F, void>(p0); } // C3376F42B1FACCC6 02DF7AF4
  static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(uint32_t p0, bool p1) { N::Invoke<0x896B1B7049CA83BC, void>(p0, p1); } // 596976B02B6B5700 A3D675ED
  static void SET_WANTED_LEVEL_MULTIPLIER(float p0) { N::Invoke<0xA54C914AEB391F49, void>(p0); } // 020E5F00CDA207BA 1359292F
  static void SET_WANTED_LEVEL_DIFFICULTY(uint32_t p0, float p1) { N::Invoke<0x4D655E609EE9D982, void>(p0, p1); } // 9B0BB33B04405E7A B552626C
  static void RESET_WANTED_LEVEL_DIFFICULTY(uint32_t p0) { N::Invoke<0xBA9B9D6C060CA3B8, void>(p0); } // B9D0DD990DC141DD A64C378D
  static void START_FIRING_AMNESTY(uint32_t p0) { N::Invoke<0x22AF53B3D19EC31A, void>(p0); } // BF9BD71691857E48 5F8A22A6
  static void REPORT_CRIME(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xA81C1CA136F22988, void>(p0, p1, p2); } // E9B09589827545E7 D8EB3A44
  static void _0x19372A1A61357555(uint32_t p0, uint32_t p1) { N::Invoke<0x19372A1A61357555, void>(p0, p1); } // 9A987297ED8BD838 59B5C2A2
  static void _0x3B5E31F65A4A561B(uint32_t p0) { N::Invoke<0x3B5E31F65A4A561B, void>(p0); } // BC9490CA15AEA8FB 6B34A160
  static void _0xB5CB06B5C617D346(uint32_t p0) { N::Invoke<0xB5CB06B5C617D346, void>(p0); } // 4669B3ED80F24B4E B9FB142F
  static void _0x2D51603E740B4BE1(uint32_t p0) { N::Invoke<0x2D51603E740B4BE1, void>(p0); } // AD73CE5A09E42D12 85725848
  static void _0xCFD4301FF0DDCA9(uint32_t p0) { N::Invoke<0xCFD4301FF0DDCA9, void>(p0); } // 36F1B38855F2A8DF 3A7E5FB6
  static void _0x10C11CE8BB565A4F(uint32_t p0) { N::Invoke<0x10C11CE8BB565A4F, void>(p0); } // DC64D2C53493ED12 D15C4B1C
  static void _0x310F8ADFF76EABB8(float p0) { N::Invoke<0x310F8ADFF76EABB8, void>(p0); } // B45EFF719D8427A6 BF6993C7
  static void _0x00235AB27CB3B9490E() { N::Invoke<0x235AB27CB3B9490E, void>(); } // 0032A6DBA562C518 47CAB814
  static bool CAN_PLAYER_START_MISSION(uint32_t p0) { return N::Invoke<0x352008B5469ACC31, bool>(p0); } // DE7465A27D403C06 39E3CB3F
  static bool IS_PLAYER_READY_FOR_CUTSCENE(uint32_t p0) { return N::Invoke<0x78E049AAE10556D5, bool>(p0); } // 908CBECC2CAA3690 BB77E9CD
  static bool IS_PLAYER_TARGETTING_ENTITY(uint32_t p0, uint32_t p1) { return N::Invoke<0x8DEF14B60C4A9D01, bool>(p0, p1); } // 7912F7FC4F6264B6 F3240B77
  static bool GET_PLAYER_TARGET_ENTITY(uint32_t p0, uint32_t *p1) { return N::Invoke<0xF35BC786336308F5, bool>(p0, p1); } // 13EDE1A5DBF797C9 F6AAA2D7
  static bool IS_PLAYER_FREE_AIMING(uint32_t p0) { return N::Invoke<0xAD26E3EB5603F99C, bool>(p0); } // 2E397FD2ECD37C87 1DEC67B7
  static bool IS_PLAYER_FREE_AIMING_AT_ENTITY(uint32_t p0, uint32_t p1) { return N::Invoke<0xB89DCD342FB7AC95, bool>(p0, p1); } // 3C06B5C839B38F7B 7D80EEAA
  static bool _GET_AIMED_ENTITY(uint32_t p0, uint32_t *p1) { return N::Invoke<0x8FF35E6057D45161, bool>(p0, p1); } // 2975C866E6713290 8866D9D0
  static void _0xB558094C81091C67(uint32_t p0, float p1) { N::Invoke<0xB558094C81091C67, void>(p0, p1); } // 29961D490E5814FD 74D42C03
  static void SET_PLAYER_CAN_DO_DRIVE_BY(uint32_t p0, bool p1) { N::Invoke<0x364C7B6EFAC33A0, void>(p0, p1); } // 6E8834B52EC20C77 F4D99685
  static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(uint32_t p0, bool p1) { N::Invoke<0xAA919F0D192F1F06, void>(p0, p1); } // D5E460AD7020A246 71B305BB
  static void SET_PLAYER_CAN_USE_COVER(uint32_t p0, bool p1) { N::Invoke<0xEE994C7E42032A88, void>(p0, p1); } // D465A8599DFF6814 13CAFAFA
  static uint32_t GET_MAX_WANTED_LEVEL() { return N::Invoke<0xB916C06719AE0212, uint32_t>(); } // 462E0DB9B137DC5F 457F1E44
  static bool IS_PLAYER_TARGETTING_ANYTHING(uint32_t p0) { return N::Invoke<0xED0A2A3FDC3E3728, bool>(p0); } // 78CFE51896B6B8A4 456DB50D
  static void SET_PLAYER_SPRINT(uint32_t p0, bool p1) { N::Invoke<0xE464B534EE3DDD9B, void>(p0, p1); } // A01B8075D8B92DF4 7DD7900C
  static void RESET_PLAYER_STAMINA(uint32_t p0) { N::Invoke<0x34320D73366F471A, void>(p0); } // A6F312FCCE9C1DFE C0445A9C
  static void RESTORE_PLAYER_STAMINA(uint32_t p0, float p1) { N::Invoke<0xD10E47A64E6B7BA9, void>(p0, p1); } // A352C1B864CAFD33 62A93608
  static float _0xDE93D2E2A139150A(uint32_t p0) { return N::Invoke<0xDE93D2E2A139150A, float>(p0); } // 3F9F16F8E65A7ED7 47017C90
  static float GET_PLAYER_SPRINT_TIME_REMAINING(uint32_t p0) { return N::Invoke<0x3169682A8CEF8DEF, float>(p0); } // 1885BC9B108B4C99 40E80543
  static float GET_PLAYER_UNDERWATER_TIME_REMAINING(uint32_t p0) { return N::Invoke<0x9B0C9AAE48223212, float>(p0); } // A1FCF8E6AF40B731 1317125A
  static uint32_t GET_PLAYER_GROUP(uint32_t p0) { return N::Invoke<0x36A590B33049FCAF, uint32_t>(p0); } // 0D127585F77030AF A5EDCDE8
  static uint32_t GET_PLAYER_MAX_ARMOUR(uint32_t p0) { return N::Invoke<0x566F53D732C5E4A2, uint32_t>(p0); } // 92659B4CE1863CB3 02A50657
  static bool IS_PLAYER_CONTROL_ON(uint32_t p0) { return N::Invoke<0xA54B09EB6B49FA94, bool>(p0); } // 49C32D60007AFA47 618857F2
  static uint32_t _0xA9587537C221A5AB() { return N::Invoke<0xA9587537C221A5AB, uint32_t>(); } // 7C814D2FB49F40C0
  static bool IS_PLAYER_SCRIPT_CONTROL_ON(uint32_t p0) { return N::Invoke<0x9CEB43D7FF40BE4A, bool>(p0); } // 8A876A65283DD7D7 61B00A84
  static bool IS_PLAYER_CLIMBING(uint32_t p0) { return N::Invoke<0x3AA78AB1897C2B94, bool>(p0); } // 95E8F73DC65EFB9C 4A9E9AE0
  static bool IS_PLAYER_BEING_ARRESTED(uint32_t p0, bool p1) { return N::Invoke<0xAC33D6DDFB2C92EC, bool>(p0, p1); } // 388A47C51ABDAC8E 7F6A60D3
  static void _0x16C74761D06A22F3(uint32_t p0) { N::Invoke<0x16C74761D06A22F3, void>(p0); } // 2D03E13C460760D6 453C7CAB
  static uint32_t GET_PLAYERS_LAST_VEHICLE() { return N::Invoke<0xF6EA6ED8FFB5B505, uint32_t>(); } // B6997A7EB3F5C8C0 E2757AC1
  static uint32_t GET_PLAYER_INDEX() { return N::Invoke<0x4D82797EF5035A9F, uint32_t>(); } // A5EDC40EF369B48D 309BBDC1
  static uint32_t INT_TO_PLAYERINDEX(uint32_t p0) { return N::Invoke<0xAE744CCC666ACB74, uint32_t>(p0); } // 41BD2A6B006AF756 98DD98F1
  static uint32_t _0xC54850646145FF41(uint32_t p0) { return N::Invoke<0xC54850646145FF41, uint32_t>(p0); } // 9EC6603812C24710 98F3B274
  static uint32_t GET_TIME_SINCE_PLAYER_HIT_VEHICLE(uint32_t p0) { return N::Invoke<0xC739875A6A1D454B, uint32_t>(p0); } // 5D35ECF3A81A0EE0 6E9B8B9E
  static uint32_t GET_TIME_SINCE_PLAYER_HIT_PED(uint32_t p0) { return N::Invoke<0xD53C4B2C0771295D, uint32_t>(p0); } // E36A25322DC35F42 B6209195
  static uint32_t GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(uint32_t p0) { return N::Invoke<0x21C65FE2A4DA9912, uint32_t>(p0); } // D559D2BE9E37853B 8836E732
  static uint32_t GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(uint32_t p0) { return N::Invoke<0xDEB4FF3AA365AC5A, uint32_t>(p0); } // DB89591E290D9182 9F27D00E
  static bool IS_PLAYER_FREE_FOR_AMBIENT_TASK(uint32_t p0) { return N::Invoke<0xC7F04149CEA63421, bool>(p0); } // DCCFD3F106C36AB4 85C7E232
  static uint32_t PLAYER_ID() { return N::Invoke<0xAF65E5A58BE87D95, uint32_t>(); } // 4F8644AF03D0E0D6 8AEA886C
  static uint32_t PLAYER_PED_ID() { return N::Invoke<0x507DA4994C3D8EBD, uint32_t>(); } // D80958FC74E988A6 FA92E226
  static uint32_t _0x49CA6938CD809023() { return N::Invoke<0x49CA6938CD809023, uint32_t>(); } // EE68096F9F37341E 8DD5B838
  static bool _0x7547D7CF93115D6D(uint32_t p0) { return N::Invoke<0x7547D7CF93115D6D, bool>(p0); } // C968670BFACE42D9 4B37333C
  static void FORCE_CLEANUP(uint32_t p0) { N::Invoke<0xA6C786E2F6583AF3, void>(p0); } // BC8983F38F78ED51 FDAAEA2B
  static void _0x622285B9570960AE(uint32_t *p0, uint32_t p1) { N::Invoke<0x622285B9570960AE, void>(p0, p1); } // 4C68DDDDF0097317 04256C73
  static void _0xED57D3CB2B5F4C03(uint32_t p0, uint32_t p1) { N::Invoke<0xED57D3CB2B5F4C03, void>(p0, p1); } // F745B37630DF176B 882D3EB3
  static uint32_t _0x26AE414A8D829787() { return N::Invoke<0x26AE414A8D829787, uint32_t>(); } // 9A41CF4674A12272 39AA9FC8
  static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(uint32_t p0, uint32_t p1) { N::Invoke<0x317F71FAB1B637F6, void>(p0, p1); } // 8026FF78F208978A A454DD29
  static void _0xC224FCE71F1B69E0(uint32_t p0) { N::Invoke<0xC224FCE71F1B69E0, void>(p0); } // 1DE37BBF9E9CC14A AF7AFCC4
  static bool GIVE_ACHIEVEMENT_TO_PLAYER(uint32_t p0) { return N::Invoke<0xB13535CD55ADA8AF, bool>(p0); } // BEC7076D64130195 822BC992
  static uint32_t _0xC190BD464AD91623() { return N::Invoke<0xC190BD464AD91623, uint32_t>(); } // C2AFFFDABBDC2C5C
  static uint32_t _0xF81DDE50AEEE85CC() { return N::Invoke<0xF81DDE50AEEE85CC, uint32_t>(); } // 1C186837D0619335
  static bool HAS_ACHIEVEMENT_BEEN_PASSED(uint32_t p0) { return N::Invoke<0xC91582A6D1E6CE38, bool>(p0); } // 867365E111A3B6EB 136A5BE9
  static bool IS_PLAYER_ONLINE() { return N::Invoke<0x2273C299A3D2906F, bool>(); } // F25D331DC2627BBC 9FAB6729
  static uint32_t IS_PLAYER_LOGGING_IN_NP() { return N::Invoke<0x2226D8DDD32D6416, uint32_t>(); } // 74556E1420867ECA 8F72FAD0
  static void DISPLAY_SYSTEM_SIGNIN_UI(bool p0) { N::Invoke<0x120CADF76A6DEED1, void>(p0); } // 94DD7888C10A979E 4264CED2
  static bool IS_SYSTEM_UI_BEING_DISPLAYED() { return N::Invoke<0x82F85CC376273040, bool>(); } // 5D511E3867C87139 E495B6DA
  static void SET_PLAYER_INVINCIBLE(uint32_t p0, bool p1) { N::Invoke<0x60D71C675384BFB1, void>(p0, p1); } // 239528EACDC3E7DE DFB9A2A2
  static bool GET_PLAYER_INVINCIBLE(uint32_t p0) { return N::Invoke<0x95C3D05421303CD7, bool>(p0); } // B721981B2B939E07 680C90EE
  static void _0xD208E6FEE4ED0A33(uint32_t p0, bool p1) { N::Invoke<0xD208E6FEE4ED0A33, void>(p0, p1); } // CAC57395B151135F 00563E0D
  static void REMOVE_PLAYER_HELMET(uint32_t p0, bool p1) { N::Invoke<0x92929C879D7A5D03, void>(p0, p1); } // F3AC26D3CC576528 6255F3B4
  static void GIVE_PLAYER_RAGDOLL_CONTROL(uint32_t p0, bool p1) { N::Invoke<0x858D64CC004F1CE9, void>(p0, p1); } // 3C49C870E66F0A28 C7B4D7AC
  static void SET_PLAYER_LOCKON(uint32_t p0, bool p1) { N::Invoke<0xED8CF4FA6897DA1A, void>(p0, p1); } // 5C8B2F450EE4328E 0B270E0F
  static void SET_PLAYER_TARGETING_MODE(uint32_t p0) { N::Invoke<0xD52CB0A6A959DB2E, void>(p0); } // B1906895227793F3 61CAE253
  static uint32_t _0xDBAD3DFC2E7A4DAC() { return N::Invoke<0xDBAD3DFC2E7A4DAC, uint32_t>(); } // 5702B917B99DB1CD
  static uint32_t _0xEC83793981EDB5CE() { return N::Invoke<0xEC83793981EDB5CE, uint32_t>(); } // B9CF1F793A9F1BF1
  static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(uint32_t p0) { N::Invoke<0xDFA69A35174944B2, void>(p0); } // F0B67A4DE6AB5F98 1D31CBBD
  static bool HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(uint32_t p0) { return N::Invoke<0xA0DC5B4F5EADB551, bool>(p0); } // 20CE80B0C2BF4ACC 14F52453
  static void _0xA6E6CA9E3F5ACCE7(uint32_t p0) { N::Invoke<0xA6E6CA9E3F5ACCE7, void>(p0); } // 4AACB96203D11A31 7E3BFBC5
  static bool _0xE77D87B24BECF3E0(uint32_t p0) { return N::Invoke<0xE77D87B24BECF3E0, bool>(p0); } // E4B90F367BD81752 A3707DFC
  static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(uint32_t p0, float p1) { N::Invoke<0x8DFB8AB8D39B556B, void>(p0, p1); } // CA7DC8329F0A1E9E F20F72E5
  static void _SET_SWIM_SPEED_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0x1E57C47E025777AC, void>(p0, p1); } // A91C6F0FF7D16A13 B986FF47
  static void _SET_MOVE_SPEED_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0x97B16D7AD1680356, void>(p0, p1); } // 6DB47AA77FD94E09 825423C2
  static uint32_t GET_TIME_SINCE_LAST_ARREST() { return N::Invoke<0xC97B3280400752FE, uint32_t>(); } // 5063F92F07C2A316 62824EF4
  static uint32_t GET_TIME_SINCE_LAST_DEATH() { return N::Invoke<0x56D611C338FAC7D6, uint32_t>(); } // C7034807558DDFCA 24BC5AC0
  static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { N::Invoke<0x385940EA96075FD7, void>(); } // AEBF081FFC0A0E5E F23277F3
  static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { N::Invoke<0x325FEDAF82AC922A, void>(); } // 8621390F0CDCFE1F D04568B9
  static void SET_PLAYER_FORCED_AIM(uint32_t p0, bool p1) { N::Invoke<0xE3D2F2FAB4CBA729, void>(p0, p1); } // 0FEE4F80AC44A726 94E42E2E
  static void SET_PLAYER_FORCED_ZOOM(uint32_t p0, bool p1) { N::Invoke<0xFB5349D55B248349, void>(p0, p1); } // 75E7D505F2B15902 B0C576CB
  static void _0x23E0115579F0B410(uint32_t p0, bool p1) { N::Invoke<0x23E0115579F0B410, void>(p0, p1); } // 7651BC64AE59E128 374F42F0
  static void DISABLE_PLAYER_FIRING(uint32_t p0, bool p1) { N::Invoke<0x1659395830D45200, void>(p0, p1); } // 5E6CC07646BBEAB8 30CB28CB
  static uint32_t _0x5CDC205E0656D419() { return N::Invoke<0x5CDC205E0656D419, uint32_t>(); } // B885852C39CC265D
  static void _0xC157D77C5EA7E9C1(uint32_t p0, bool p1) { N::Invoke<0xC157D77C5EA7E9C1, void>(p0, p1); } // 2E8AABFA40A84F8C CCD937E7
  static void SET_PLAYER_MAX_ARMOUR(uint32_t p0, uint32_t p1) { N::Invoke<0xD0F21EDFD4FBBD84, void>(p0, p1); } // 77DFCCF5948B8C71 C6C3C53B
  static void SPECIAL_ABILITY_DEACTIVATE(uint32_t p0) { N::Invoke<0x781B097139B80D2A, void>(p0); } // D6A953C6D1492057 80C2AB09
  static void _0x62F999FAD28AC182(uint32_t p0) { N::Invoke<0x62F999FAD28AC182, void>(p0); } // 9CB5CE07A3968D5A 0751908A
  static void SPECIAL_ABILITY_RESET(uint32_t p0) { N::Invoke<0x7FD9BE2C185AEC8F, void>(p0); } // 375F0E738F861A94 A7D8BCD3
  static void _0xB263FA96BED3FA47(uint32_t p0) { N::Invoke<0xB263FA96BED3FA47, void>(p0); } // C9A763D8FE87436A 4136829A
  static void _0xAAC1F5332F27BDA0(uint32_t p0, bool p1, bool p2) { N::Invoke<0xAAC1F5332F27BDA0, void>(p0, p1, p2); } // 2E7B9B683481687D 6F463F56
  static void _0x791768C4C7B9609E(uint32_t p0, bool p1, bool p2) { N::Invoke<0x791768C4C7B9609E, void>(p0, p1, p2); } // F113E3AA9BC54613 AB55D8F3
  static void _0xFB11454A91E10821(uint32_t p0, bool p1, bool p2) { N::Invoke<0xFB11454A91E10821, void>(p0, p1, p2); } // F733F45FA4497D93 F440C04D
  static void _0xA93329D18C9611F1(uint32_t p0, bool p1) { N::Invoke<0xA93329D18C9611F1, void>(p0, p1); } // ED481732DFF7E997 5FEE98A2
  static void _0xB655B357FD83D0E4(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xB655B357FD83D0E4, void>(p0, p1, p2); } // B7B0870EB531D08D 72429998
  static void RESET_SPECIAL_ABILITY_CONTROLS_CINEMATIC(uint32_t p0, float p1, bool p2) { N::Invoke<0xB51054474146B6AA, void>(p0, p1, p2); } // A0696A65F009EE18 8C7E68C1
  static void _RECHARGE_SPECIAL_ABILITY(uint32_t p0, bool p1) { N::Invoke<0xC2AE0675A3BC6FEE, void>(p0, p1); } // 3DACA8DDC6FD4980 B71589DA
  static void _0x5E1135587DA373B8(uint32_t p0, bool p1) { N::Invoke<0x5E1135587DA373B8, void>(p0, p1); } // 1D506DBBBC51E64B 9F80F6DF
  static void SPECIAL_ABILITY_LOCK(uint32_t p0) { N::Invoke<0x214BB38E946E7F3B, void>(p0); } // 6A09D0D590A47D13 1B7BB388
  static void SPECIAL_ABILITY_UNLOCK(uint32_t p0) { N::Invoke<0x20BB3D45C067628E, void>(p0); } // F145F3BE2EFA9A3B 1FDB2919
  static bool IS_SPECIAL_ABILITY_UNLOCKED(uint32_t p0) { return N::Invoke<0x8D1517ED38D12903, bool>(p0); } // C6017F6A6CDFA694 C9C75E82
  static bool IS_SPECIAL_ABILITY_ACTIVE(uint32_t p0) { return N::Invoke<0x5636DF02874259EA, bool>(p0); } // 3E5F7FC85D854E15 1B17E334
  static bool IS_SPECIAL_ABILITY_METER_FULL(uint32_t p0) { return N::Invoke<0xBB6B8BB621BB2C97, bool>(p0); } // 05A1FE504B7F2587 2E19D7F6
  static void ENABLE_SPECIAL_ABILITY(uint32_t p0, bool p1) { N::Invoke<0x11073CBF39CB7032, void>(p0, p1); } // 181EC197DAEFE121 C86C1B4E
  static bool IS_SPECIAL_ABILITY_ENABLED(uint32_t p0) { return N::Invoke<0xBED4C646F6B66E3A, bool>(p0); } // B1D200FE26AEF3CB C01238CC
  static void SET_SPECIAL_ABILITY_MULTIPLIER(float p0) { N::Invoke<0xD9F52F7EB92A826E, void>(p0); } // A49C426ED0CA4AB7 FF1BC556
  static void _0x4E4530ACCC2AAF8B(uint32_t p0) { N::Invoke<0x4E4530ACCC2AAF8B, void>(p0); } // FFEE8FA29AB9A18E 5D0FE25B
  static bool _0x65138EDA5D74E117(uint32_t p0) { return N::Invoke<0x65138EDA5D74E117, bool>(p0); } // 5FC472C501CCADB3 46E7E31D
  static bool _0xD3A2E4DC46ABD029(uint32_t p0, uint32_t p1) { return N::Invoke<0xD3A2E4DC46ABD029, bool>(p0, p1); } // F10B44FD479D69F3 1E359CC8
  static bool _0xA8EFC5524AD91221(uint32_t p0, float p1) { return N::Invoke<0xA8EFC5524AD91221, bool>(p0, p1); } // DD2620B7B9D16FF1 8CB53C9F
  static void START_PLAYER_TELEPORT(uint32_t p0, float p1, float p2, float p3, float p4, bool p5, bool p6, bool p7) { N::Invoke<0x6F8A1D62CF606CEF, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // AD15F075A4DA0FDE C552E06C
  static uint32_t _0xD2F8057CD383D533() { return N::Invoke<0xD2F8057CD383D533, uint32_t>(); } // E23D5873C2394C61
  static void STOP_PLAYER_TELEPORT() { N::Invoke<0xA572598AC9C703A1, void>(); } // C449EDED9D73009C 86AB8DBB
  static bool IS_PLAYER_TELEPORT_ACTIVE() { return N::Invoke<0x9CAFDEAB6242673, bool>(); } // 02B15662D7F8886F 3A11D118
  static float GET_PLAYER_CURRENT_STEALTH_NOISE(uint32_t p0) { return N::Invoke<0x727D9AE87D8490D1, float>(p0); } // 2F395D61F3A1F877 C3B02362
  static void _0xE9D44603410B2DBE(uint32_t p0, float p1) { N::Invoke<0xE9D44603410B2DBE, void>(p0, p1); } // 5DB660B38DD98A31 45514731
  static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(uint32_t p0, float p1) { N::Invoke<0xB8668A8A57B0785, void>(p0, p1); } // CE07B9F7817AADA3 B02C2F39
  static void _0x4525FE997ADE7244(uint32_t p0, float p1) { N::Invoke<0x4525FE997ADE7244, void>(p0, p1); } // 2D83BC011CA14A3C AE446344
  static void _0x53168525D1CF19A8(uint32_t p0, float p1) { N::Invoke<0x53168525D1CF19A8, void>(p0, p1); } // 4A3DC7ECCC321032 362E69AD
  static void _0xB56AF6C1B3D0A2B0(uint32_t p0, float p1) { N::Invoke<0xB56AF6C1B3D0A2B0, void>(p0, p1); } // AE540335B4ABC4E2 9F3D577F
  static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(uint32_t p0, float p1) { N::Invoke<0x56C8841BB3F3E7FE, void>(p0, p1); } // A50E117CDDF82F0C 823ECA63
  static void _0xD557CE7EE0E091DC(uint32_t p0, float p1) { N::Invoke<0xD557CE7EE0E091DC, void>(p0, p1); } // 4C60E6EFDAFF2462 A16626C7
  static void SET_PLAYER_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0xD22020DCD4D6898E, void>(p0, p1); } // A3D0E54541D9A5E5 8EA12EDB
  static void GET_PLAYER_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t *p1) { N::Invoke<0xFB2737CFD0FAA232, void>(p0, p1); } // 75D3F7A1B0D9B145 432B0509
  static void _0xF16F48EE312E023A(uint32_t p0, uint32_t p1) { N::Invoke<0xF16F48EE312E023A, void>(p0, p1); } // AF04C87F5DC1DF38 70689638
  static void _0xFEC34AB033BF0FAD(uint32_t p0, uint32_t *p1) { N::Invoke<0xFEC34AB033BF0FAD, void>(p0, p1); } // D5A016BC3C09CF40 77B8EF01
  static void _0x4E47698A7D339775(uint32_t p0, uint32_t p1) { N::Invoke<0x4E47698A7D339775, void>(p0, p1); } // 93B0FB27C9A04060 D79D5D1B
  static void _0xCC87B2694189E7CF(uint32_t p0, uint32_t *p1) { N::Invoke<0xCC87B2694189E7CF, void>(p0, p1); } // 6E9C742F340CE5A2 4E418E13
  static void _0x85E90C7BDBA1B1A9(uint32_t p0) { N::Invoke<0x85E90C7BDBA1B1A9, void>(p0); } // 7DDAB28D31FAC363 A3E4798E
  static bool _0x53B0B86EF53FE301(uint32_t p0) { return N::Invoke<0x53B0B86EF53FE301, bool>(p0); } // 5DDFE2FF727F3CA3 30DA1DA1
  static void _0xA18857613A6FE4AD(uint32_t p0, bool p1) { N::Invoke<0xA18857613A6FE4AD, void>(p0, p1); } // F401B182DBA8AF53 832DEB7A
  static void _0xA121E1225EDD216E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xA121E1225EDD216E, void>(p0, p1, p2, p3); } // 8217FD371A4625CF 14FE9264
  static void _0x87D4195E32E4AC96(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x87D4195E32E4AC96, void>(p0, p1, p2, p3); } // EF56DBABD3CD4887 F66E5CDD
  static void _0x5E0712245D353952(uint32_t p0, uint32_t p1) { N::Invoke<0x5E0712245D353952, void>(p0, p1); } // 11D5F725F0E780E0 725C6174
  static void SET_PLAYER_NOISE_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0x8BD370190E66BB94, void>(p0, p1); } // DB89EF50FF25FCE9 15786DD1
  static void _0x46E1941063DAC541(uint32_t p0, float p1) { N::Invoke<0x46E1941063DAC541, void>(p0, p1); } // B2C1A29588A9F47C 8D2D89C4
  static bool _0xE131581629473E8F(uint32_t p0, uint32_t p1) { return N::Invoke<0xE131581629473E8F, bool>(p0, p1); } // F297383AA91DCA29 1C70B2EB
  static void SIMULATE_PLAYER_INPUT_GAIT(uint32_t p0, float p1, uint32_t p2, float p3, bool p4, bool p5) { N::Invoke<0x2D7FE4B6E3F31F41, void>(p0, p1, p2, p3, p4, p5); } // 477D5D63E63ECA5D 0D77CC34
  static void RESET_PLAYER_INPUT_GAIT(uint32_t p0) { N::Invoke<0xCAF96F3FC7BD5390, void>(p0); } // 19531C47A2ABD691 4A701EE1
  static void _0xDA1AC80F42F720CE(uint32_t p0, bool p1) { N::Invoke<0xDA1AC80F42F720CE, void>(p0, p1); } // 9F343285A00B4BB6 A97C2059
  static void _0xCF98B71BDC696D37(uint32_t p0, bool p1) { N::Invoke<0xCF98B71BDC696D37, void>(p0, p1); } // D2B315B6689D537D A25D767E
  static void _0xB3D9BF898A7A3CF4(uint32_t p0, float p1) { N::Invoke<0xB3D9BF898A7A3CF4, void>(p0, p1); } // 4E9021C1FCDD507A 3D26105F
  static bool _0x17CDDC2EA5B1DA48(uint32_t p0) { return N::Invoke<0x17CDDC2EA5B1DA48, bool>(p0); } // 690A61A6D13583F6 1D371529
  static void _0xA124B435C75E5F8F(uint32_t p0) { N::Invoke<0xA124B435C75E5F8F, void>(p0); } // 9EDD76E87D5D51BA E30A64DC
  static void SET_PLAYER_SIMULATE_AIMING(uint32_t p0, bool p1) { N::Invoke<0x76CDE4A00CC75AC5, void>(p0, p1); } // C54C95DA968EC5B5 F1E0CAFC
  static void _0x4F0AE7916719B90(uint32_t p0, uint32_t p1) { N::Invoke<0x4F0AE7916719B90, void>(p0, p1); } // 749FADDF97DFE930 F7A0F00F
  static void _0xD2E73E6A6D417836(uint32_t p0) { N::Invoke<0xD2E73E6A6D417836, void>(p0); } // 9F7BBA2EA6372500 B8209F16
  static void _0x171AC9F0CFF3012D(bool p0) { N::Invoke<0x171AC9F0CFF3012D, void>(p0); } // 14D913B777DFF5DA 8D9FD4D1
  static void _0x3BC6A71331269C80(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x3BC6A71331269C80, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // ED51733DC73AED51 ECD12E60
  static void _0x141573CBFA109F8D() { N::Invoke<0x141573CBFA109F8D, void>(); } // 1DD5897E2FA6E7C9 96100EA4
  static bool _0x588012548399142(uint32_t p0) { return N::Invoke<0x588012548399142, bool>(p0); } // D705740BB0A1CF4C 4A01B76A
  static bool _0xE908BABD022876D1(uint32_t p0) { return N::Invoke<0xE908BABD022876D1, bool>(p0); } // 38D28DA81E4E9BF9 013B4F72
  static bool _0xD6F2B09BF0387432(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xD6F2B09BF0387432, bool>(p0, p1, p2); } // BC0753C9CA14B506 9DF75B2A
  static uint32_t _0xD4B879D2DDAB4755() { return N::Invoke<0xD4B879D2DDAB4755, uint32_t>(); } // 5006D96C995A5827
  static uint32_t _0xBDAE5694574620E7() { return N::Invoke<0xBDAE5694574620E7, uint32_t>(); } // DA1DF03D5A315F4E
  static bool IS_PLAYER_RIDING_TRAIN(uint32_t p0) { return N::Invoke<0x53EF5755AE305BF9, bool>(p0); } // 4EC12697209F2196 9765E71D
  static bool _0x9A58EA3A7EEC2FFC(uint32_t p0) { return N::Invoke<0x9A58EA3A7EEC2FFC, bool>(p0); } // D55DDFB47991A294 FEA40B6C
  static void _0xD2A3C73B88069848(uint32_t p0, bool p1) { N::Invoke<0xD2A3C73B88069848, void>(p0, p1); } // FF300C7649724A0B AD8383FA
  static void _0xC3B804DDC3A3D289(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xC3B804DDC3A3D289, void>(p0, p1, p2, p3, p4); } // D9284A8C0D48352C 9254249D
  static void _0x0C63F976C36BCAD48(uint32_t p0) { N::Invoke<0xC63F976C36BCAD48, void>(p0); } // 0F4CC924CF8C7B21 FD60F5AB
  static void _0xFFE1A0404D101F6C(uint32_t p0, uint32_t p1) { N::Invoke<0xFFE1A0404D101F6C, void>(p0, p1); } // 977DB4641F6FC3DB 5D382498
  static void _0xFCF8A06AF0F9EFC6(uint32_t p0) { N::Invoke<0xFCF8A06AF0F9EFC6, void>(p0); } // 8753997EB5F6EE3F 6FF034BB
  static void _0x90948F033AC40F62(uint32_t p0, uint32_t p1) { N::Invoke<0x90948F033AC40F62, void>(p0, p1); } // DC80A4C2F18A2B64 A877FF5E
  static void _0xC9FA1E3D4C8CC189(uint32_t p0) { N::Invoke<0xC9FA1E3D4C8CC189, void>(p0); } // 10C54E4389C12B42 BB62AAC5
  static void _0x1C1D54F61CAEF9C4(uint32_t p0) { N::Invoke<0x1C1D54F61CAEF9C4, void>(p0); } // C142BE3BB9CE125F 8C6E611D
  static void _0xAA0634FFB832752F(bool p0) { N::Invoke<0xAA0634FFB832752F, void>(p0); } // 2F7CEB6520288061 2849D4B2
  static uint32_t _0xE83F7D45231B94E() { return N::Invoke<0xE83F7D45231B94E, uint32_t>(); } // 5DC40A8869C22141
  static uint32_t _0x46B7794D9118B9A2() { return N::Invoke<0x46B7794D9118B9A2, uint32_t>(); } // 65FAEE425DE637B0
  static uint32_t _0x815D910A97424E73() { return N::Invoke<0x815D910A97424E73, uint32_t>(); } // 5501B7A5CDB79D37
  static uint32_t _0xF082B8BCAF39E66C() { return N::Invoke<0xF082B8BCAF39E66C, uint32_t>(); } // 56105E599CAB0EFA
}

namespace ENTITY
{
  static bool DOES_ENTITY_EXIST(uint32_t p0) { return N::Invoke<0xFD68187442384158, bool>(p0); } // 7239B21A38F536BA 3AC90869
  static bool _0x51BC2FF711F8CF71(uint32_t p0, bool p1) { return N::Invoke<0x51BC2FF711F8CF71, bool>(p0, p1); } // DDE6DF5AE89981D2 ACFEB3F9
  static bool DOES_ENTITY_HAVE_DRAWABLE(uint32_t p0) { return N::Invoke<0xFBE2EB4D474675FC, bool>(p0); } // 060D6E96F8B8E48D A5B33300
  static bool DOES_ENTITY_HAVE_PHYSICS(uint32_t p0) { return N::Invoke<0x2E0F030186A261D3, bool>(p0); } // DA95EA3317CC5064 9BCD2979
  static bool HAS_ENTITY_ANIM_FINISHED(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3) { return N::Invoke<0xD58C0ABFAF258340, bool>(p0, p1, p2, p3); } // 20B711662962B472 1D9CAB92
  static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uint32_t p0) { return N::Invoke<0x43827D6447B61FA0, bool>(p0); } // 95EB9964FF5C5C65 6B74582E
  static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uint32_t p0) { return N::Invoke<0x6B91ED8EB0DE484, bool>(p0); } // 605F5A140F202491 53FD4A25
  static bool HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uint32_t p0) { return N::Invoke<0x87F7B968CB47182, bool>(p0); } // DFD5033FDBA0A9C8 878C2CE0
  static bool HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0x6255AE2591FE7603, bool>(p0, p1, p2); } // C86D67D52A707CF8 07FC77E0
  static bool HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x15DEAA4402D18301, bool>(p0, p1, p2); } // FCDFF7B72D23A1AC 53576FA7
  static bool HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uint32_t p0, uint32_t p1) { return N::Invoke<0xB4D3CFD952BEB647, bool>(p0, p1); } // 0267D00AF114F17A 210D87C8
  static bool HAS_ENTITY_COLLIDED_WITH_ANYTHING(uint32_t p0) { return N::Invoke<0x5800F5EE75107519, bool>(p0); } // 8BAD02F0368D9E14 662A2F41
  static uint32_t _0xE8F096AC1F064558(uint32_t p0) { return N::Invoke<0xE8F096AC1F064558, uint32_t>(p0); } // 5C3D0A935F535C4C C0E3AA47
  static Vector3 _0xAA24F621DD65AB7(uint32_t p0) { return N::Invoke<0xAA24F621DD65AB7, Vector3>(p0); } // E465D4AB7CA6AE72 AB415C07
  static void _0x4A99017CF06B75D9(uint32_t p0) { N::Invoke<0x4A99017CF06B75D9, void>(p0); } // 40FDEDB72F8293B2 58D9775F
  static float GET_ENTITY_ANIM_CURRENT_TIME(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x5132EC78980FBED7, float>(p0, p1, p2); } // 346D81500D088F42 83943F41
  static float GET_ENTITY_ANIM_TOTAL_TIME(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x7166BD6F3788D273, float>(p0, p1, p2); } // 50BD2730B191E360 433A9D18
  static uint32_t _0x96352C4E64C54D4C() { return N::Invoke<0x96352C4E64C54D4C, uint32_t>(); } // FEDDF04D62B8D790
  static uint32_t GET_ENTITY_ATTACHED_TO(uint32_t p0) { return N::Invoke<0xAC954CE73C919889, uint32_t>(p0); } // 48C2BED9180FE123 FE1589F9
  static Vector3 GET_ENTITY_COORDS(uint32_t p0, bool p1) { return N::Invoke<0xBF1B13057E5119A4, Vector3>(p0, p1); } // 3FEF770D40960D5A 1647F1CB
  static Vector3 GET_ENTITY_FORWARD_VECTOR(uint32_t p0) { return N::Invoke<0xF260FCBA09D07146, Vector3>(p0); } // 0A794A5A57F8DF91 84DCECBF
  static float GET_ENTITY_FORWARD_X(uint32_t p0) { return N::Invoke<0x7BC30F058DCB71F9, float>(p0); } // 8BB4EF4214E0E6D5 49FAE914
  static float GET_ENTITY_FORWARD_Y(uint32_t p0) { return N::Invoke<0xFE3BB5571030E833, float>(p0); } // 866A4A5FAE349510 9E2F917C
  static float GET_ENTITY_HEADING(uint32_t p0) { return N::Invoke<0xA9D6B28E708753B6, float>(p0); } // E83D4F9BA2A38914 972CC383
  static uint32_t _0xBA56765BD0B2E099() { return N::Invoke<0xBA56765BD0B2E099, uint32_t>(); } // 846BF6291198A71E
  static uint32_t GET_ENTITY_HEALTH(uint32_t p0) { return N::Invoke<0x5D422B4764FA2ACA, uint32_t>(p0); } // EEF059FAD016D209 8E3222B7
  static uint32_t GET_ENTITY_MAX_HEALTH(uint32_t p0) { return N::Invoke<0xE32A4C9A9C5EB019, uint32_t>(p0); } // 15D757606D170C3C C7AE6AA1
  static void SET_ENTITY_MAX_HEALTH(uint32_t p0, uint32_t p1) { N::Invoke<0x60D75A750A3CA4F8, void>(p0, p1); } // 166E7CF68597D8B5 96F84DF8
  static float GET_ENTITY_HEIGHT(uint32_t p0, float p1, float p2, float p3, bool p4, bool p5) { return N::Invoke<0xD8D7F1865C03A10A, float>(p0, p1, p2, p3, p4, p5); } // 5A504562485944DD EE443481
  static float GET_ENTITY_HEIGHT_ABOVE_GROUND(uint32_t p0) { return N::Invoke<0x4E45AB7AE0C35CB4, float>(p0); } // 1DD55701034110E5 57F56A4D
  static void GET_ENTITY_MATRIX(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x5C1DE83C22B0FDA5, void>(p0, p1, p2, p3, p4); } // ECB2FC7235A7D137 EB9EB001
  static uint32_t GET_ENTITY_MODEL(uint32_t p0) { return N::Invoke<0x26EA758C2A691D06, uint32_t>(p0); } // 9F47B058362C84B5 DAFCB3EC
  static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uint32_t p0, float p1, float p2, float p3) { return N::Invoke<0xC9351EFF34BB33C0, Vector3>(p0, p1, p2, p3); } // 2274BC1C4885E333 6477EC9E
  static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uint32_t p0, float p1, float p2, float p3) { return N::Invoke<0xCAFB9D38494283D, Vector3>(p0, p1, p2, p3); } // 1899F328B0E12848 ABCF043A
  static float GET_ENTITY_PITCH(uint32_t p0) { return N::Invoke<0x14712CD81E458F87, float>(p0); } // D45DC2893621E1FE FCE6ECE5
  static void GET_ENTITY_QUATERNION(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { N::Invoke<0x4A737960F4097B82, void>(p0, p1, p2, p3, p4); } // 7B3703D2D32DFA18 5154EC90
  static float GET_ENTITY_ROLL(uint32_t p0) { return N::Invoke<0x13D65835892E426D, float>(p0); } // 831E0242595560DF 36610842
  static Vector3 GET_ENTITY_ROTATION(uint32_t p0, uint32_t p1) { return N::Invoke<0xAD9A5677421290F3, Vector3>(p0, p1); } // AFBD61CC738D9EB9 8FF45B04
  static Vector3 GET_ENTITY_ROTATION_VELOCITY(uint32_t p0) { return N::Invoke<0x801EC3BC611E2B1D, Vector3>(p0); } // 213B91045D09B983 9BF8A73F
  static uint32_t GET_ENTITY_SCRIPT(uint32_t p0, uint32_t *p1) { return N::Invoke<0x6438FDFEA7CD1702, uint32_t>(p0, p1); } // A6E9C38DB51D7748 B7F70784
  static float GET_ENTITY_SPEED(uint32_t p0) { return N::Invoke<0x11F6A4A45943670E, float>(p0); } // D5037BA82E12416F 9E1E4798
  static Vector3 GET_ENTITY_SPEED_VECTOR(uint32_t p0, bool p1) { return N::Invoke<0xA159D8B7175A5386, Vector3>(p0, p1); } // 9A8D700A51CB7B0D 3ED2B997
  static float GET_ENTITY_UPRIGHT_VALUE(uint32_t p0) { return N::Invoke<0xEE28BD1C8F477A55, float>(p0); } // 95EED5A694951F9F F4268190
  static Vector3 GET_ENTITY_VELOCITY(uint32_t p0) { return N::Invoke<0x903468970F24CA24, Vector3>(p0); } // 4805D2B1D8CF94A9 C14C9B6B
  static uint32_t _0xB7E8BD80F6126D63(uint32_t p0) { return N::Invoke<0xB7E8BD80F6126D63, uint32_t>(p0); } // D7E3B9735C0F89D6 BC5A9C58
  static uint32_t _0x0274BAC44978F9161(uint32_t p0) { return N::Invoke<0x274BAC44978F9161, uint32_t>(p0); } // 04A2A40C73395041 C46F74AC
  static uint32_t _0x379620F9B34A512B(uint32_t p0) { return N::Invoke<0x379620F9B34A512B, uint32_t>(p0); } // 4B53F92932ADFAC0 C69CF43D
  static Vector3 _0xF72E61A2DB753A80(uint32_t p0, uint32_t p1) { return N::Invoke<0xF72E61A2DB753A80, Vector3>(p0, p1); } // 44A8FCB8ED227738 7C6339DF
  static uint32_t GET_NEAREST_PLAYER_TO_ENTITY(uint32_t p0) { return N::Invoke<0x4ABABA7F7437B49, uint32_t>(p0); } // 7196842CB375CDB3 CE17FDEC
  static uint32_t _0xD146E00699ACE766(uint32_t p0, uint32_t p1) { return N::Invoke<0xD146E00699ACE766, uint32_t>(p0, p1); } // 4DC9A62F844D9337 B1808F56
  static uint32_t GET_ENTITY_TYPE(uint32_t p0) { return N::Invoke<0x4EC0314653F6A605, uint32_t>(p0); } // 8ACD366038D14505 0B1BD08D
  static uint32_t _0x3BFDCA5CFB987907() { return N::Invoke<0x3BFDCA5CFB987907, uint32_t>(); } // F6F5161F4534EDFF
  static bool IS_AN_ENTITY(uint32_t p0) { return N::Invoke<0x9D168168EFD33C8, bool>(p0); } // 731EC8A916BD11A1 D4B9715A
  static bool IS_ENTITY_A_PED(uint32_t p0) { return N::Invoke<0x91F594068DF4424F, bool>(p0); } // 524AC5ECEA15343E 55D33EAB
  static bool IS_ENTITY_A_MISSION_ENTITY(uint32_t p0) { return N::Invoke<0x73E2404DC70203CD, bool>(p0); } // 0A7B270912999B3C 2632E124
  static bool IS_ENTITY_A_VEHICLE(uint32_t p0) { return N::Invoke<0x1BA544973A67E699, bool>(p0); } // 6AC7003FA6E5575E BE800B01
  static bool IS_ENTITY_AN_OBJECT(uint32_t p0) { return N::Invoke<0xBCF2529C09F7A239, bool>(p0); } // 8D68C8FD0FACA94E 3F52E561
  static bool IS_ENTITY_AT_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, uint32_t p9) { return N::Invoke<0x594EB70937EC1486, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 20B60995556D004F D749B606
  static bool IS_ENTITY_AT_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5, bool p6, uint32_t p7) { return N::Invoke<0x2F406E91B59DB558, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // 751B70C3D034E187 DABDCB52
  static bool IS_ENTITY_ATTACHED(uint32_t p0) { return N::Invoke<0xDF75DAAACD32E49E, bool>(p0); } // B346476EF1A64897 EC1479D5
  static bool IS_ENTITY_ATTACHED_TO_ANY_OBJECT(uint32_t p0) { return N::Invoke<0xB150B4C4A9FFA174, bool>(p0); } // CF511840CEEDE0CC 0B5DE340
  static bool IS_ENTITY_ATTACHED_TO_ANY_PED(uint32_t p0) { return N::Invoke<0x42B70344077B22B9, bool>(p0); } // B1632E9A5F988D11 9D7A609C
  static bool IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uint32_t p0) { return N::Invoke<0xB9D0211AF48761E5, bool>(p0); } // 26AA915AD89BFB4B DE5C995E
  static bool IS_ENTITY_ATTACHED_TO_ENTITY(uint32_t p0, uint32_t p1) { return N::Invoke<0x21F34311BCDA79B9, bool>(p0, p1); } // EFBE71898A993728 B0ABFEA8
  static bool IS_ENTITY_DEAD(uint32_t p0) { return N::Invoke<0xE5D56342B0FF1D0D, bool>(p0); } // 5F9532F3B5CC2551 B6F7CBAC
  static bool IS_ENTITY_IN_AIR(uint32_t p0) { return N::Invoke<0xF97DDB74A78F6500, bool>(p0); } // 886E37EC497200B6 A4157987
  static bool IS_ENTITY_IN_ANGLED_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9, uint32_t p10) { return N::Invoke<0x9EC075F0DABF6298, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 51210CED3DA1C78A 883622FA
  static bool IS_ENTITY_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, uint32_t p9) { return N::Invoke<0xE4C60D15202FDAD8, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 54736AA40E271165 8C2DFA9D
  static bool IS_ENTITY_IN_ZONE(uint32_t p0, uint32_t *p1) { return N::Invoke<0x15E1E68CC8303F09, bool>(p0, p1); } // B6463CF6AF527071 45C82B21
  static bool IS_ENTITY_IN_WATER(uint32_t p0) { return N::Invoke<0x26FE3F0A2045AA7E, bool>(p0); } // CFB0A0D8EDD145A3 4C3C2508
  static float _0xC062498DF45BB995(uint32_t p0) { return N::Invoke<0xC062498DF45BB995, float>(p0); } // E81AFC1BC4CC41CE 0170F68C
  static void _0xF87E30E725AD0C2E(uint32_t p0, bool p1) { N::Invoke<0xF87E30E725AD0C2E, void>(p0, p1); } // 694E00132F2823ED 40C84A74
  static bool IS_ENTITY_ON_SCREEN(uint32_t p0) { return N::Invoke<0x9226425D9E480D72, bool>(p0); } // E659E47AF827484B C1FEC5ED
  static bool IS_ENTITY_PLAYING_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3) { return N::Invoke<0x22605DE2E6933CF2, bool>(p0, p1, p2, p3); } // 1F0B79228E461EC9 0D130D34
  static bool IS_ENTITY_STATIC(uint32_t p0) { return N::Invoke<0x76A777C5C8CD79A7, bool>(p0); } // 1218E6886D3D8327 928E12E9
  static bool IS_ENTITY_TOUCHING_ENTITY(uint32_t p0, uint32_t p1) { return N::Invoke<0x5D0DED2275F131C9, bool>(p0, p1); } // 17FFC1B2BA35A494 6B931477
  static bool _0x069CE28F9B6AB5CA0(uint32_t p0, uint32_t p1) { return N::Invoke<0x69CE28F9B6AB5CA0, bool>(p0, p1); } // 0F42323798A58C8C 307E7611
  static bool IS_ENTITY_UPRIGHT(uint32_t p0, float p1) { return N::Invoke<0x3F9C86DAF30C655, bool>(p0, p1); } // 5333F526F6AB19AA 3BCDF4E1
  static bool IS_ENTITY_UPSIDEDOWN(uint32_t p0) { return N::Invoke<0x932B30DC68C85A46, bool>(p0); } // 1DBD58820FA61D71 5ACAA48F
  static bool IS_ENTITY_VISIBLE(uint32_t p0) { return N::Invoke<0xDAB2315B565377E3, bool>(p0); } // 47D6F43D77935C75 120B4ED5
  static bool IS_ENTITY_VISIBLE_TO_SCRIPT(uint32_t p0) { return N::Invoke<0x1ACC4CD5A7C76F75, bool>(p0); } // D796CB5BA8F20E32 5D240E9D
  static bool IS_ENTITY_OCCLUDED(uint32_t p0) { return N::Invoke<0x19F2D2C58150C825, bool>(p0); } // E31C2C72B8692B64 46BC5B40
  static bool _0xF01F32895032B155(uint32_t p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0xF01F32895032B155, bool>(p0, p1, p2, p3, p4); } // EE5D2A122E09EC42 EA127CBC
  static bool IS_ENTITY_WAITING_FOR_WORLD_COLLISION(uint32_t p0) { return N::Invoke<0x61DBAE4CD87221B9, bool>(p0); } // D05BFF0C0A12C68F 00AB7A4A
  static void _0xCD5BFC4DFAFC3268(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, bool p6, bool p7, bool p8) { N::Invoke<0xCD5BFC4DFAFC3268, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 18FF00FC7EFF559E 28924E98
  static void APPLY_FORCE_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, bool p9, bool p10, bool p11, bool p12, bool p13) { N::Invoke<0x5784591F4D03884C, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // C5F68BE9613E2D18 C1C0855A
  static void ATTACH_ENTITY_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10, bool p11, bool p12, uint32_t p13, bool p14) { N::Invoke<0x26030664C7D28388, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 6B9BBD38AB0796DF EC024237
  static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, bool p14, bool p15, bool p16, bool p17, uint32_t p18) { N::Invoke<0x4F805549F5B07893, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // C3675780C92F90F9 0547417F
  static void _0x97976FD664FF4A16(uint32_t p0) { N::Invoke<0x97976FD664FF4A16, void>(p0); } // F4080490ADC51C6F 6909BA59
  static uint32_t _0xD33827A2E07C4BE6(uint32_t p0, uint32_t *p1) { return N::Invoke<0xD33827A2E07C4BE6, uint32_t>(p0, p1); } // FB71170B7E76ACBA E4ECAC22
  static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uint32_t p0) { N::Invoke<0x7CEA616AE5D86DF7, void>(p0); } // A72CD9CA74A5ECBA 2B83F43B
  static void DELETE_ENTITY(uint32_t *p0) { N::Invoke<0xA65C6361932CEE99, void>(p0); } // AE3CBE5BF394C9C9 FAA3D236
  static void DETACH_ENTITY(uint32_t p0, bool p1, bool p2) { N::Invoke<0x5B97F41A7BE54877, void>(p0, p1, p2); } // 961AC54BF0613F5D C8EFCB41
  static void FREEZE_ENTITY_POSITION(uint32_t p0, bool p1) { N::Invoke<0x479E7EEEBDEE245D, void>(p0, p1); } // 428CA6DBD1094446 65C16D57
  static void _0x5BA593EA32D0187E(uint32_t p0, bool p1) { N::Invoke<0x5BA593EA32D0187E, void>(p0, p1); } // 3910051CCECDB00C D3850671
  static bool PLAY_ENTITY_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, bool p4, bool p5, bool p6, float p7, uint32_t p8) { return N::Invoke<0x7FFC7B578074E5B8, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 7FB218262B810701 878753D5
  static bool PLAY_SYNCHRONIZED_ENTITY_ANIM(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6, float p7) { return N::Invoke<0x763BBCB2253879B8, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // C77720A12FE14A86 012760AA
  static bool _0xCDC98ED98F4741D7(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t *p6, uint32_t *p7, float p8, float p9, uint32_t p10, float p11) { return N::Invoke<0xCDC98ED98F4741D7, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // B9C54555ED30FBC4 EB4CBA74
  static bool _0x201BF055A9978BFE(float p0, float p1, float p2, float p3, uint32_t p4, float p5) { return N::Invoke<0x201BF055A9978BFE, bool>(p0, p1, p2, p3, p4, p5); } // 11E79CAB7183B6F5 7253D5B2
  static uint32_t STOP_ENTITY_ANIM(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x6F5A8AEA65939753, uint32_t>(p0, p1, p2, p3); } // 28004F88151E03E0 C4769830
  static bool STOP_SYNCHRONIZED_ENTITY_ANIM(uint32_t p0, float p1, bool p2) { return N::Invoke<0x520A583BA5E4F9A7, bool>(p0, p1, p2); } // 43D3807C077261E3 E27D2FC1
  static bool _0x89D7DDF7D591D231(uint32_t p0, uint32_t p1) { return N::Invoke<0x89D7DDF7D591D231, bool>(p0, p1); } // EAF4CD9EA3E7E922 66571CA0
  static bool _0x01667EC8951B464F(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0x1667EC8951B464F, bool>(p0, p1, p2, p3, p4); } // 07F1BE2BCCAA27A7 C41DDA62
  static void SET_ENTITY_ANIM_CURRENT_TIME(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3) { N::Invoke<0xADF6DEFE940F56B0, void>(p0, p1, p2, p3); } // 4487C259F0F70977 99D90735
  static void SET_ENTITY_ANIM_SPEED(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3) { N::Invoke<0x823AFE6C22E61E55, void>(p0, p1, p2, p3); } // 28D1A16553C51776 3990C90A
  static void SET_ENTITY_AS_MISSION_ENTITY(uint32_t p0, bool p1, bool p2) { N::Invoke<0xBAE5DF507EEC53C8, void>(p0, p1, p2); } // AD738C3085FE7E11 5D1F9E0F
  static void SET_ENTITY_AS_NO_LONGER_NEEDED(uint32_t *p0) { N::Invoke<0x9720CE176AF721DF, void>(p0); } // B736A491E64A32CF ADF2267C
  static void SET_PED_AS_NO_LONGER_NEEDED(uint32_t *p0) { N::Invoke<0xCA4DD92F1F2931F3, void>(p0); } // 2595DD4236549CE3 9A388380
  static void SET_VEHICLE_AS_NO_LONGER_NEEDED(uint32_t *p0) { N::Invoke<0xB67623A401171555, void>(p0); } // 629BFA74418D6239 9B0E10BE
  static void SET_OBJECT_AS_NO_LONGER_NEEDED(uint32_t *p0) { N::Invoke<0x5DADA1340CBB893, void>(p0); } // 3AE22DEB5BA5A3E6 3F6B949F
  static void SET_ENTITY_CAN_BE_DAMAGED(uint32_t p0, bool p1) { N::Invoke<0x843E25883D2C32A3, void>(p0, p1); } // 1760FFA8AB074D66 60B6E744
  static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0x482BF74E0AD9F7BC, void>(p0, p1, p2); } // E22D8FDE858B8119 34165B5D
  static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(uint32_t p0, bool p1) { N::Invoke<0x457B5DD3F7C51156, void>(p0, p1); } // D3997889736FD899 3B13797C
  static void SET_ENTITY_COLLISION(uint32_t p0, bool p1, bool p2) { N::Invoke<0xCC8C6873CFB069A4, void>(p0, p1, p2); } // 1A9205C1B9EE827F 139FD37D
  static uint32_t _0xCFEC4FDF9B169907() { return N::Invoke<0xCFEC4FDF9B169907, uint32_t>(); } // CCF1E97BEFDAE480
  static uint32_t _0x7B88BD0030190351() { return N::Invoke<0x7B88BD0030190351, uint32_t>(); } // 9EBC85ED0FFFE51C
  static void SET_ENTITY_COORDS(uint32_t p0, float p1, float p2, float p3, bool p4, bool p5, bool p6, bool p7) { N::Invoke<0xF85858E5CBF4D9F0, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 06843DA7060A026B DF70B41B
  static uint32_t _0x5794AC350DFE7892() { return N::Invoke<0x5794AC350DFE7892, uint32_t>(); } // 621873ECE1178967
  static void SET_ENTITY_COORDS_NO_OFFSET(uint32_t p0, float p1, float p2, float p3, bool p4, bool p5, bool p6) { N::Invoke<0x5614D4217C75FFE5, void>(p0, p1, p2, p3, p4, p5, p6); } // 239A3351AC1DA385 4C83DE8D
  static void SET_ENTITY_DYNAMIC(uint32_t p0, bool p1) { N::Invoke<0x4B499AD03E78933A, void>(p0, p1); } // 1718DE8E3F2823CA 236F525B
  static void SET_ENTITY_HEADING(uint32_t p0, float p1) { N::Invoke<0x248DC16118AE5035, void>(p0, p1); } // 8E2530AA8ADA980E E0FF064D
  static void SET_ENTITY_HEALTH(uint32_t p0, uint32_t p1) { N::Invoke<0x3E16CE93BAE616EE, void>(p0, p1); } // 6B76DC1F3AE6E6A3 FBCD1831
  static void SET_ENTITY_INVINCIBLE(uint32_t p0, bool p1) { N::Invoke<0xF732465E1FF70CE4, void>(p0, p1); } // 3882114BDE571AD4 C1213A21
  static void SET_ENTITY_IS_TARGET_PRIORITY(uint32_t p0, bool p1, float p2) { N::Invoke<0x7AB733311E18F96E, void>(p0, p1, p2); } // EA02E132F5C68722 9729EE32
  static void SET_ENTITY_LIGHTS(uint32_t p0, bool p1) { N::Invoke<0xC483689F46456E37, void>(p0, p1); } // 7CFBA6A80BDF3874 E8FC85AF
  static void SET_ENTITY_LOAD_COLLISION_FLAG(uint32_t p0, bool p1) { N::Invoke<0x3C2614E45AB2F499, void>(p0, p1); } // 0DC7CABAB1E9B67E C52F295B
  static bool _0xDD4FE903268AAF8(uint32_t p0) { return N::Invoke<0xDD4FE903268AAF8, bool>(p0); } // E9676F61BC0B3321 851687F9
  static void SET_ENTITY_MAX_SPEED(uint32_t p0, float p1) { N::Invoke<0x18D283BE0DD0EDEB, void>(p0, p1); } // 0E46A3FCBDE2A1B1 46AFFED3
  static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uint32_t p0, bool p1) { N::Invoke<0xCAFAFBAB1F150EFF, void>(p0, p1); } // 79F020FF9EDC0748 4B707F50
  static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0x3AF1287A38E532D6, void>(p0, p1, p2); } // 7022BD828FA0B082 202237E2
  static void SET_ENTITY_PROOFS(uint32_t p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8) { N::Invoke<0x9FD46396C2DAB482, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // FAEE099C6F890BB8 7E9EAB66
  static void SET_ENTITY_QUATERNION(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0x39E21A7346BD6D1B, void>(p0, p1, p2, p3, p4); } // 77B21BE7AC540F07 83B6046F
  static void SET_ENTITY_RECORDS_COLLISIONS(uint32_t p0, bool p1) { N::Invoke<0xA50E417B5EB36D47, void>(p0, p1); } // 0A50A1EEDAD01E65 6B189A1A
  static void SET_ENTITY_ROTATION(uint32_t p0, float p1, float p2, float p3, uint32_t p4, bool p5) { N::Invoke<0xC1619F9F00BCB470, void>(p0, p1, p2, p3, p4, p5); } // 8524A8B0171D5E07 0A345EFE
  static void SET_ENTITY_VISIBLE(uint32_t p0, bool p1) { N::Invoke<0x7E0AE075425AA06, void>(p0, p1); } // EA1C610A04DB6BBB D043E8E1
  static void SET_ENTITY_VELOCITY(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xB13ED1AA2B45F4BE, void>(p0, p1, p2, p3); } // 1C99BB7B6E96D16F FF5A1988
  static void SET_ENTITY_HAS_GRAVITY(uint32_t p0, bool p1) { N::Invoke<0x91E11F10B6C60E7B, void>(p0, p1); } // 4A4722448F18EEF5 E2F262BF
  static void SET_ENTITY_LOD_DIST(uint32_t p0, uint32_t p1) { N::Invoke<0x94A4D627D865396B, void>(p0, p1); } // 5927F96A78577363 D7ACC7AD
  static uint32_t _0xD9BC90A41A7D584C(uint32_t p0) { return N::Invoke<0xD9BC90A41A7D584C, uint32_t>(p0); } // 4159C2762B5791D6 4DA3D51F
  static void SET_ENTITY_ALPHA(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x4B7E9C56D2699137, void>(p0, p1, p2); } // 44A0870B7E92D7C0 AE667CB0
  static uint32_t GET_ENTITY_ALPHA(uint32_t p0) { return N::Invoke<0x23D71D352CFE13D8, uint32_t>(p0); } // 5A47B3B5E63E94C6 1560B017
  static void RESET_ENTITY_ALPHA(uint32_t p0) { N::Invoke<0x55583B2832F3D36E, void>(p0); } // 9B1E824FFBB7027A 8A30761C
  static uint32_t _0x9EC71C3E441E3F56() { return N::Invoke<0x9EC71C3E441E3F56, uint32_t>(); } // 5C3B791D580E0BC2
  static void _0x76C1E719845E0CA2(uint32_t p0, bool p1) { N::Invoke<0x76C1E719845E0CA2, void>(p0, p1); } // ACAD101E1FB66689 D8FF798A
  static void SET_ENTITY_RENDER_SCORCHED(uint32_t p0, bool p1) { N::Invoke<0x950A8FF87758D4D3, void>(p0, p1); } // 730F5F8D3F0F2050 AAC9317B
  static void _0xCC8692693AC43A3F(uint32_t p0, uint32_t p1) { N::Invoke<0xCC8692693AC43A3F, void>(p0, p1); } // 57C5DB656185EAC4 C47F5B91
  static uint32_t _0x1F5E06B60B7FCD25() { return N::Invoke<0x1F5E06B60B7FCD25, uint32_t>(); } // 78E8E3A640178255
  static void CREATE_MODEL_SWAP(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, bool p6) { N::Invoke<0xDCFF52D7A029D648, void>(p0, p1, p2, p3, p4, p5, p6); } // 92C47782FDA8B2A3 0BC12F9E
  static void REMOVE_MODEL_SWAP(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, bool p6) { N::Invoke<0x78EAA9E51EE74647, void>(p0, p1, p2, p3, p4, p5, p6); } // 033C0F9A64E229AE CE0AA8BC
  static void CREATE_MODEL_HIDE(float p0, float p1, float p2, float p3, uint32_t p4, bool p5) { N::Invoke<0x259C96726C65FE5C, void>(p0, p1, p2, p3, p4, p5); } // 8A97BCA30A0CE478 7BD5CF2F
  static void _0x41FE9C4E02E515C(float p0, float p1, float p2, float p3, uint32_t p4, bool p5) { N::Invoke<0x41FE9C4E02E515C, void>(p0, p1, p2, p3, p4, p5); } // 3A52AE588830BF7F 07AAF22C
  static void REMOVE_MODEL_HIDE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xB59362C1B4E8772E, void>(p0, p1, p2, p3, p4, p5); } // D9E3006FB3CBD765 993DBC10
  static void CREATE_FORCED_OBJECT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xC1D99B19BD327A1B, void>(p0, p1, p2, p3, p4, p5); } // 150E808B375A385A 335190A2
  static void REMOVE_FORCED_OBJECT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xD1B54E2C95D694E4, void>(p0, p1, p2, p3, p4); } // 61B6775E83C0DB6F AED73ADD
  static void SET_ENTITY_NO_COLLISION_ENTITY(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x53098C54EF3B4593, void>(p0, p1, p2); } // A53ED5520C07654A 1E11BFE9
  static void SET_ENTITY_MOTION_BLUR(uint32_t p0, bool p1) { N::Invoke<0x94B6597E86F6FAF9, void>(p0, p1); } // 295D82A8559F9150 E90005B8
  static void _0x76527CDA9FF31B20(uint32_t p0, bool p1) { N::Invoke<0x76527CDA9FF31B20, void>(p0, p1); } // E12ABE5E3A389A6C 44767B31
  static void _0xE22810FDCF98C21A(uint32_t p0, bool p1) { N::Invoke<0xE22810FDCF98C21A, void>(p0, p1); } // A80AE305E0A3044F E224A6A5
  static uint32_t _0x260D9533C4156602() { return N::Invoke<0x260D9533C4156602, uint32_t>(); } // DC6F8601FAF2E893
  static uint32_t _0x8457B3004CE3262E() { return N::Invoke<0x8457B3004CE3262E, uint32_t>(); } // 2C2E3DC128F44309
  static uint32_t _0x36F8F6D4F1ED9877() { return N::Invoke<0x36F8F6D4F1ED9877, uint32_t>(); } // 1A092BB0C3808B96

  static uint32_t CREATE_ITEMSET(bool p0) { return N::Invoke<0x95F5931B4A4A5A4F, uint32_t>(p0); } // 35AD299F50D91B24 0A113B2C
  static void DESTROY_ITEMSET(uint32_t p0) { N::Invoke<0x2EC9C57FB0F87740, void>(p0); } // DE18220B1C183EDA 83CE1A4C
  static bool IS_ITEMSET_VALID(uint32_t p0) { return N::Invoke<0x7EB3F4AFF5E5629C, bool>(p0); } // B1B1EA596344DFAB D201FC29
  static bool ADD_TO_ITEMSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x9C10EF90C142040A, bool>(p0, p1); } // E3945201F14637DD 6B0FE61B
  static void REMOVE_FROM_ITEMSET(uint32_t p0, uint32_t p1) { N::Invoke<0xB84BEE9EC8BFE9E9, void>(p0, p1); } // 25E68244B0177686 A9565228
  static uint32_t GET_ITEMSET_SIZE(uint32_t p0) { return N::Invoke<0x3A30E959081412C4, uint32_t>(p0); } // D9127E83ABF7C631 2B31F41A
  static uint32_t GET_INDEXED_ITEM_IN_ITEMSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x55A47F6E3AD65F26, uint32_t>(p0, p1); } // 7A197E2521EE2BAB 3F712874
  static bool IS_IN_ITEMSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x911210B40CE6E4B5, bool>(p0, p1); } // 2D0FC594D1E9C107 0D4B9730
  static void CLEAN_ITEMSET(uint32_t p0) { N::Invoke<0x7019C59DA53362F8, void>(p0); } // 41BC0D722FC04221 919A4858
}

namespace PED
{
  static uint32_t CREATE_PED(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, bool p6, bool p7) { return N::Invoke<0x7B88529CAE3B7F15, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // D49F9B0955C367DE 0389EF71
  static void DELETE_PED(uint32_t *p0) { N::Invoke<0x8019BB3BA236A900, void>(p0); } // 9614299DCB53E54B 13EFB9A0
  static uint32_t CLONE_PED(uint32_t p0, bool p1, bool p2, bool p3) { return N::Invoke<0xA4462E0443BF7F13, uint32_t>(p0, p1, p2, p3); } // EF29A16337FACADB 8C8A8D6E
  static void _0x89A1CAD126A6BDE2(uint32_t p0, uint32_t p1) { N::Invoke<0x89A1CAD126A6BDE2, void>(p0, p1); } // E952D6431689AD9A FC70EEC7
  static bool IS_PED_IN_VEHICLE(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0x53170344050F2301, bool>(p0, p1, p2); } // A3EE4A07279BB9DB 7DA6BC83
  static bool IS_PED_IN_MODEL(uint32_t p0, uint32_t p1) { return N::Invoke<0x70955799BE2F456F, bool>(p0, p1); } // 796D90EFB19AA332 A6438D4B
  static bool IS_PED_IN_ANY_VEHICLE(uint32_t p0, bool p1) { return N::Invoke<0x2A24448FF232F834, bool>(p0, p1); } // 997ABD671D25CA0B 3B0171EE
  static bool IS_COP_PED_IN_AREA_3D(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x2ECF6DFC75F222F2, bool>(p0, p1, p2, p3, p4, p5); } // 16EC4839969F9F5E B98DB96B
  static bool IS_PED_INJURED(uint32_t p0) { return N::Invoke<0x9F94F2CFDCA78C55, bool>(p0); } // 84A2DD9AC37C35C1 2530A087
  static bool IS_PED_HURT(uint32_t p0) { return N::Invoke<0xD074306FB8714BD2, bool>(p0); } // 5983BB449D7FDB12 69DFA0AF
  static bool IS_PED_FATALLY_INJURED(uint32_t p0) { return N::Invoke<0x50CD51844ED01084, bool>(p0); } // D839450756ED5A80 BADA0093
  static bool _0x1F214B2198E9D98E(uint32_t p0, bool p1) { return N::Invoke<0x1F214B2198E9D98E, bool>(p0, p1); } // 3317DEDB88C95038 CBDB7739
  static bool IS_CONVERSATION_PED_DEAD(uint32_t p0) { return N::Invoke<0x20F836CFEDC2DEE3, bool>(p0); } // E0A0AEC214B1FABA 1FA39EFE
  static bool IS_PED_AIMING_FROM_COVER(uint32_t p0) { return N::Invoke<0xC335288A248B7DA, bool>(p0); } // 3998B1276A3300E5 DEBAB2AF
  static bool IS_PED_RELOADING(uint32_t p0) { return N::Invoke<0xFEE0084CCD1F1D18, bool>(p0); } // 24B100C68C645951 961E1745
  static bool IS_PED_A_PLAYER(uint32_t p0) { return N::Invoke<0xBC57175ED22C698D, bool>(p0); } // 12534C348C6CB68B 404794CA
  static uint32_t CREATE_PED_INSIDE_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, bool p4, bool p5) { return N::Invoke<0xC68FBD37098CE438, uint32_t>(p0, p1, p2, p3, p4, p5); } // 7DD959874C1FD534 3000F092
  static void SET_PED_DESIRED_HEADING(uint32_t p0, float p1) { N::Invoke<0x3227271A33EDB93D, void>(p0, p1); } // AA5A7ECE2AA8FE70 961458F9
  static void _0x7367A83B3C88034A(uint32_t p0) { N::Invoke<0x7367A83B3C88034A, void>(p0); } // FF287323B0E2C69A 290421BE
  static bool IS_PED_FACING_PED(uint32_t p0, uint32_t p1, float p2) { return N::Invoke<0x849DBD2D635C99D5, bool>(p0, p1, p2); } // D71649DB0A545AA3 0B775838
  static bool IS_PED_IN_MELEE_COMBAT(uint32_t p0) { return N::Invoke<0x6A5400407F3E1292, bool>(p0); } // 4E209B2C1EAD5159 FD7814A5
  static bool IS_PED_STOPPED(uint32_t p0) { return N::Invoke<0x3428BABF05B108EE, bool>(p0); } // 530944F6F4B8A214 A0DC0B87
  static bool IS_PED_SHOOTING_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8) { return N::Invoke<0xEE9A290405B6083, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 7E9DFE24AC1E58EF 741BF04F
  static bool IS_ANY_PED_SHOOTING_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7) { return N::Invoke<0x4FD2063004E8875E, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // A0D3D71EA1086C55 91833867
  static bool IS_PED_SHOOTING(uint32_t p0) { return N::Invoke<0xEB4AE93098956715, bool>(p0); } // 34616828CD07F1A1 E7C3405E
  static void SET_PED_ACCURACY(uint32_t p0, uint32_t p1) { N::Invoke<0xE7962295F4C99484, void>(p0, p1); } // 7AEFB85C1D49DEB6 6C17122E
  static uint32_t GET_PED_ACCURACY(uint32_t p0) { return N::Invoke<0x87769EF841855C53, uint32_t>(p0); } // 37F4AD56ECBC0CD6 0A2A0AA0
  static bool IS_PED_MODEL(uint32_t p0, uint32_t p1) { return N::Invoke<0x92A853B99CCAA054, bool>(p0, p1); } // C9D55B1A358A5BF7 5F1DDFCB
  static void EXPLODE_PED_HEAD(uint32_t p0, uint32_t p1) { N::Invoke<0x4FAD05F0077C290C, void>(p0, p1); } // 2D05CED3A38D0F3A 05CC1380
  static void REMOVE_PED_ELEGANTLY(uint32_t *p0) { N::Invoke<0x38909B3F85749CCE, void>(p0); } // AC6D445B994DF95E 4FFB8C6C
  static void ADD_ARMOUR_TO_PED(uint32_t p0, uint32_t p1) { N::Invoke<0x97D59B34648267BB, void>(p0, p1); } // 5BA652A0CD14DF2F F686B26E
  static void SET_PED_ARMOUR(uint32_t p0, uint32_t p1) { N::Invoke<0xBB2572E965AF1D41, void>(p0, p1); } // CEA04D83135264CC 4E3A0CC4
  static void SET_PED_INTO_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x11460EBE0487B44F, void>(p0, p1, p2); } // F75B0D629E1C063D 07500C79
  static void _0x840551AFD170C83E(uint32_t p0, bool p1) { N::Invoke<0x840551AFD170C83E, void>(p0, p1); } // 3C028C636A414ED9 58A80BD5
  static bool CAN_CREATE_RANDOM_PED(uint32_t p0) { return N::Invoke<0xCDE53837DC5E7B49, bool>(p0); } // 3E8349C08E4B82E4 F9ABE88F
  static uint32_t CREATE_RANDOM_PED(float p0, float p1, float p2) { return N::Invoke<0xFBA8162159A66DCF, uint32_t>(p0, p1, p2); } // B4AC7D0CF06BFE8F 5A949543
  static uint32_t CREATE_RANDOM_PED_AS_DRIVER(uint32_t p0, bool p1) { return N::Invoke<0x7B86333DEEC0F470, uint32_t>(p0, p1); } // 9B62392B474F44A0 B927CE9A
  static bool CAN_CREATE_RANDOM_DRIVER() { return N::Invoke<0x9A04A31EBD7CBED5, bool>(); } // B8EB95E5B4E56978 99861609
  static bool _0xC17491A1504D536A() { return N::Invoke<0xC17491A1504D536A, bool>(); } // EACEEDA81751915C 7018BE31
  static void SET_PED_MOVE_ANIMS_BLEND_OUT(uint32_t p0) { N::Invoke<0xD25CAD1150EE36F6, void>(p0); } // 9E8C908F41584ECD 20E01957
  static void SET_PED_CAN_BE_DRAGGED_OUT(uint32_t p0, bool p1) { N::Invoke<0xEA0F21C3BB415566, void>(p0, p1); } // C1670E958EEE24E5 AA7F1131
  static void _0x1B3C629097FA3B1A(bool p0) { N::Invoke<0x1B3C629097FA3B1A, void>(p0); } // F2BEBCDFAFDAA19E 6CD58238
  static bool IS_PED_MALE(uint32_t p0) { return N::Invoke<0xB9DC6B81F29B0CA8, bool>(p0); } // 6D9F5FAA7488BA46 90950455
  static bool IS_PED_HUMAN(uint32_t p0) { return N::Invoke<0x93AAE5923D671594, bool>(p0); } // B980061DA992779D 194BB7B0
  static uint32_t GET_VEHICLE_PED_IS_IN(uint32_t p0, bool p1) { return N::Invoke<0x78AB10B64129B3D5, uint32_t>(p0, p1); } // 9A9112A0FE9A4713 AFE92319
  static void RESET_PED_LAST_VEHICLE(uint32_t p0) { N::Invoke<0xBC8F72DD87BC210F, void>(p0); } // BB8DE8CF6A8DD8BB 5E3B5942
  static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { N::Invoke<0xAC84A7D79E8CE169, void>(p0); } // 95E3D6257B166CF2 039C82BB
  static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { N::Invoke<0x2EDE2079957BD6D3, void>(p0, p1); } // 7A556143A1C03898 2909ABF0
  static void _0x71DEC6D1CF24C538() { N::Invoke<0x71DEC6D1CF24C538, void>(); } // 5A7F62FDA59759BD B48C0C04
  static void _0xDE204F802975CF64(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xDE204F802975CF64, void>(p0, p1, p2); } // 5086C7843552CF85 25EA2AA5
  static void SET_PED_NON_CREATION_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xE833E73A4C46A088, void>(p0, p1, p2, p3, p4, p5); } // EE01041D559983EA 7A97283F
  static void CLEAR_PED_NON_CREATION_AREA() { N::Invoke<0x8956FD662264693F, void>(); } // 2E05208086BA0651 6F7043A3
  static void _0x9611FE1B4A112F5F() { N::Invoke<0x9611FE1B4A112F5F, void>(); } // 4759CC730F947C81 8C555ADD
  static uint32_t IS_PED_ON_MOUNT(uint32_t p0) { return N::Invoke<0xB105D3800E587FE, uint32_t>(p0); } // 460BC76A0E10655E 43103006
  static uint32_t GET_MOUNT(uint32_t p0) { return N::Invoke<0xB26FB9A55AE15726, uint32_t>(p0); } // E7E11B8DCBED1058 DD31EC4E
  static bool IS_PED_ON_VEHICLE(uint32_t p0) { return N::Invoke<0x2E26534B0B94DA84, bool>(p0); } // 67722AEB798E5FAB A1AE7CC7
  static bool IS_PED_ON_SPECIFIC_VEHICLE(uint32_t p0, uint32_t p1) { return N::Invoke<0xAD117F83E7C4D176, bool>(p0, p1); } // EC5F66E459AF3BB2 63CB4603
  static void SET_PED_MONEY(uint32_t p0, uint32_t p1) { N::Invoke<0xFBF796BC19E6FC23, void>(p0, p1); } // A9C8960E8684C1B5 40D90BF2
  static uint32_t GET_PED_MONEY(uint32_t p0) { return N::Invoke<0xCC26FE784C3641CC, uint32_t>(p0); } // 3F69145BBA87BAE7 EB3C4C7E
  static void _0x12A7BC4048447EB3(float p0, uint32_t p1) { N::Invoke<0x12A7BC4048447EB3, void>(p0, p1); } // FF4803BC019852D9 D41C9AED
  static void _0xCD96F5BE16E73D4D(bool p0) { N::Invoke<0xCD96F5BE16E73D4D, void>(p0); } // 6B0E6172C9A4D902 30B98369
  static void _0x7C64F1AAE963D0C9(bool p0) { N::Invoke<0x7C64F1AAE963D0C9, void>(p0); } // 9911F4A24485F653 02A080C8
  static void SET_PED_SUFFERS_CRITICAL_HITS(uint32_t p0, bool p1) { N::Invoke<0x24C9F79D6E9E61A8, void>(p0, p1); } // EBD76F2359F190AC 6F6FC7E6
  static void _0xEA418A40A17769F3(uint32_t p0, bool p1) { N::Invoke<0xEA418A40A17769F3, void>(p0, p1); } // AFC976FD0580C7B3 1572022A
  static bool IS_PED_SITTING_IN_VEHICLE(uint32_t p0, uint32_t p1) { return N::Invoke<0x764E7360C13E7383, bool>(p0, p1); } // A808AA1D79230FC2 DDDE26FA
  static bool IS_PED_SITTING_IN_ANY_VEHICLE(uint32_t p0) { return N::Invoke<0x2E177F2B797A4A34, bool>(p0); } // 826AA586EDB9FEF8 0EA9CA03
  static bool IS_PED_ON_FOOT(uint32_t p0) { return N::Invoke<0x73B082A8BFC119BA, bool>(p0); } // 01FEE67DB37F59B2 C60D0785
  static bool IS_PED_ON_ANY_BIKE(uint32_t p0) { return N::Invoke<0x9331412F1452086E, bool>(p0); } // 94495889E22C6479 4D885B2E
  static bool IS_PED_PLANTING_BOMB(uint32_t p0) { return N::Invoke<0xA43F7819FA056045, bool>(p0); } // C70B5FAE151982D8 0EDAC574
  static Vector3 GET_DEAD_PED_PICKUP_COORDS(uint32_t p0, float p1, float p2) { return N::Invoke<0x19FA4BF61837E14, Vector3>(p0, p1, p2); } // CD5003B097200F36 129F9DC1
  static bool IS_PED_IN_ANY_BOAT(uint32_t p0) { return N::Invoke<0x70A314BA86AFCBFA, bool>(p0); } // 2E0E1C2B4F6CB339 1118A947
  static bool IS_PED_IN_ANY_SUB(uint32_t p0) { return N::Invoke<0x202FB250328FD056, bool>(p0); } // FBFC01CCFB35D99E E65F8059
  static bool IS_PED_IN_ANY_HELI(uint32_t p0) { return N::Invoke<0xD7475AE87197B442, bool>(p0); } // 298B91AE825E5705 7AB5523B
  static bool IS_PED_IN_ANY_PLANE(uint32_t p0) { return N::Invoke<0x2910F2A2D77BD576, bool>(p0); } // 5FFF4CFC74D8FB80 51BBCE7E
  static bool IS_PED_IN_FLYING_VEHICLE(uint32_t p0) { return N::Invoke<0x7E94D7B1F9207611, bool>(p0); } // 9134873537FA419C CA072485
  static void SET_PED_DIES_IN_WATER(uint32_t p0, bool p1) { N::Invoke<0x89A2F145B2FE98D8, void>(p0, p1); } // 56CEF0AC79073BDE 604C872B
  static void SET_PED_DIES_IN_SINKING_VEHICLE(uint32_t p0, bool p1) { N::Invoke<0xDB5B109FE6F6023F, void>(p0, p1); } // D718A22995E2B4BC 8D4D9ABB
  static uint32_t GET_PED_ARMOUR(uint32_t p0) { return N::Invoke<0xCB5E3AD3FD81074F, uint32_t>(p0); } // 9483AF821605B1D8 2CE311A7
  static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(uint32_t p0, bool p1) { N::Invoke<0xBF75756655C78CFC, void>(p0, p1); } // EDF4079F9D54C9A1 B014A09C
  static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(uint32_t p0, bool p1) { N::Invoke<0x3F43830115F993C, void>(p0, p1); } // C7EF1BA83230BA07 5DB7B3A9
  static bool GET_PED_LAST_DAMAGE_BONE(uint32_t p0, uint32_t *p1) { return N::Invoke<0x418F1542AE84B559, bool>(p0, p1); } // D75960F6BD9EA49C AB933841
  static void CLEAR_PED_LAST_DAMAGE_BONE(uint32_t p0) { N::Invoke<0x32C990BD881FEBFC, void>(p0); } // 8EF6B7AC68E2F01B 56CB715E
  static void SET_AI_WEAPON_DAMAGE_MODIFIER(float p0) { N::Invoke<0xA5359580664CF637, void>(p0); } // 1B1E2A40A65B8521 516E30EE
  static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { N::Invoke<0xE4DAE8FDD9A42830, void>(); } // EA16670E7BA4743C 6E965420
  static void _0xD74763A1167B762F(float p0) { N::Invoke<0xD74763A1167B762F, void>(p0); } // 66460DEDDD417254 0F9A401F
  static void _0xD8634F868A3488A3() { N::Invoke<0xD8634F868A3488A3, void>(); } // 46E56A7CD1D63C3F 97886238
  static void _0xCA66ED82FCBC2235(uint32_t p0, bool p1) { N::Invoke<0xCA66ED82FCBC2235, void>(p0, p1); } // 2F3C3D9F50681DE4 CC9D7F1A
  static void SET_PED_CAN_BE_TARGETTED(uint32_t p0, bool p1) { N::Invoke<0x6A750A31D18DA81A, void>(p0, p1); } // 63F58F7C80513AAD 75C49F74
  static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x5EE189347C442304, void>(p0, p1, p2); } // BF1CA77833E58F2C B103A8E1
  static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xF9F87CD8FFA68EB5, void>(p0, p1, p2); } // 66B57B72E0836A76 D050F490
  static void _0x03718A4AEDC5A9465(uint32_t p0, bool p1) { N::Invoke<0x3718A4AEDC5A9465, void>(p0, p1); } // 061CB768363D6424 7DA12905
  static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(uint32_t p0, bool p1) { N::Invoke<0x747D7F0B1E7077E2, void>(p0, p1); } // FD325494792302D7 7F67671D
  static bool IS_PED_IN_ANY_POLICE_VEHICLE(uint32_t p0) { return N::Invoke<0x98DA9B25A89BC9B9, bool>(p0); } // 0BD04E29640C9C12 84FA790D
  static void _0x6C511493C5ADBC5C(uint32_t p0) { N::Invoke<0x6C511493C5ADBC5C, void>(p0); } // 16E42E800B472221 A819680B
  static bool _0xB42AA529845BA2A3(uint32_t p0) { return N::Invoke<0xB42AA529845BA2A3, bool>(p0); } // 7DCE8BDA0F1C1200 CD71F11B
  static bool IS_PED_FALLING(uint32_t p0) { return N::Invoke<0xC9A89245EC1B2DDF, bool>(p0); } // FB92A102F1C4DFA3 ABF77334
  static bool IS_PED_JUMPING(uint32_t p0) { return N::Invoke<0xA38092DB0A690D89, bool>(p0); } // CEDABC5900A0BF97 07E5BC0E
  static bool IS_PED_CLIMBING(uint32_t p0) { return N::Invoke<0x8BD202CCF931002E, bool>(p0); } // 53E8CB4F48BFE623 BCE03D35
  static bool _0x6B17AF16D70870DB(uint32_t p0) { return N::Invoke<0x6B17AF16D70870DB, bool>(p0); } // 117C70D1F5730B5E C3169BDA
  static bool IS_PED_DIVING(uint32_t p0) { return N::Invoke<0xFAE339472E7A5B7E, bool>(p0); } // 5527B8246FEF9B11 7BC5BF3C
  static bool _0x5A0E95A7625C9784(uint32_t p0) { return N::Invoke<0x5A0E95A7625C9784, bool>(p0); } // 433DDFFE2044B636 B19215F6
  static uint32_t _0x7DB063549A6BB3C6() { return N::Invoke<0x7DB063549A6BB3C6, uint32_t>(); } // 26AF0E8E30BD2A2C
  static uint32_t GET_PED_PARACHUTE_STATE(uint32_t p0) { return N::Invoke<0x5D1F13DB150DEEBE, uint32_t>(p0); } // 79CFD9827CC979B6 7D4BC475
  static uint32_t _0x62C221B7C9EF0028(uint32_t p0) { return N::Invoke<0x62C221B7C9EF0028, uint32_t>(p0); } // 8B9F1FC6AE8166C0 01F3B035
  static void SET_PED_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0x51C50BBA2E17BCD3, void>(p0, p1); } // 333FC8DB079B7186 5AEFEC3A
  static void GET_PED_PARACHUTE_TINT_INDEX(uint32_t p0, uint32_t *p1) { N::Invoke<0xB97F64AC4BDAE546, void>(p0, p1); } // EAF5F7E5AE7C6C9D E9E7FAC5
  static void _0xBF4E3DD8A4D67CE0(uint32_t p0, uint32_t p1) { N::Invoke<0xBF4E3DD8A4D67CE0, void>(p0, p1); } // E88DA0751C22A2AD 177EFC79
  static uint32_t _0x69512EFD6C641354() { return N::Invoke<0x69512EFD6C641354, uint32_t>(); } // 8C4F3BF23B6237DB
  static void SET_PED_DUCKING(uint32_t p0, bool p1) { N::Invoke<0xC23E5B0130192B40, void>(p0, p1); } // 030983CA930B692D B90353D7
  static bool IS_PED_DUCKING(uint32_t p0) { return N::Invoke<0xB0680605FE40CDC9, bool>(p0); } // D125AE748725C6BC 9199C77D
  static bool IS_PED_IN_ANY_TAXI(uint32_t p0) { return N::Invoke<0x7AA4BD1E05DEDC0E, bool>(p0); } // 6E575D6A898AB852 16FD386C
  static void SET_PED_ID_RANGE(uint32_t p0, float p1) { N::Invoke<0x6ED0D84DD08E49FE, void>(p0, p1); } // F107E836A70DCE05 EF3B4ED9
  static void _0x7662811443D31A6(uint32_t p0, bool p1) { N::Invoke<0x7662811443D31A6, void>(p0, p1); } // 52D59AB61DDC05DD 9A2180FF
  static void _0x991C39C1927E1A8C(uint32_t p0, float p1) { N::Invoke<0x991C39C1927E1A8C, void>(p0, p1); } // EC4B4B3B9908052A F30658D2
  static void _0x8FA024C3B9F2D060(uint32_t p0) { N::Invoke<0x8FA024C3B9F2D060, void>(p0); } // 733C87D4CE22BEA2 43709044
  static void SET_PED_SEEING_RANGE(uint32_t p0, float p1) { N::Invoke<0x2F82BB8951419B6D, void>(p0, p1); } // F29CF591C4BF6CEE 4BD72FE8
  static void SET_PED_HEARING_RANGE(uint32_t p0, float p1) { N::Invoke<0x9A9059D04284280B, void>(p0, p1); } // 33A8F7F7D5F7F33C B32087E0
  static void SET_PED_VISUAL_FIELD_MIN_ANGLE(uint32_t p0, float p1) { N::Invoke<0xA207807C07A63952, void>(p0, p1); } // 2DB492222FB21E26 72E2E18B
  static void SET_PED_VISUAL_FIELD_MAX_ANGLE(uint32_t p0, float p1) { N::Invoke<0xF90C94CA25D31B90, void>(p0, p1); } // 70793BDCA1E854D4 0CEA0F9A
  static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(uint32_t p0, float p1) { N::Invoke<0xC22938E564A0E072, void>(p0, p1); } // 7A276EB2C224D70F 5CC2F1B8
  static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(uint32_t p0, float p1) { N::Invoke<0x6A42B1A366334C04, void>(p0, p1); } // 78D0B67629D75856 39D9102F
  static void _0x5C8F1CDF678A827B(uint32_t p0, float p1) { N::Invoke<0x5C8F1CDF678A827B, void>(p0, p1); } // 9C74B0BC831B753A FDF2F7C2
  static void _0xBCC4F1BC92CC5FEB(uint32_t p0, float p1) { N::Invoke<0xBCC4F1BC92CC5FEB, void>(p0, p1); } // 3B6405E8AB34A907 E57202A1
  static void SET_PED_STEALTH_MOVEMENT(uint32_t p0, bool p1, uint32_t *p2) { N::Invoke<0xD14BE9B74CD80551, void>(p0, p1, p2); } // 88CBB5CEB96B7BD2 67E28E1D
  static bool GET_PED_STEALTH_MOVEMENT(uint32_t p0) { return N::Invoke<0x3153580B6C021741, bool>(p0); } // 7C2AC9CA66575FBF 40321B83
  static uint32_t CREATE_GROUP(uint32_t p0) { return N::Invoke<0xE0DEFE37EDBF40E4, uint32_t>(p0); } // 90370EBE0FEE1A3D 8DC0368D
  static void SET_PED_AS_GROUP_LEADER(uint32_t p0, uint32_t p1) { N::Invoke<0xF8B7633482A778B3, void>(p0, p1); } // 2A7819605465FBCE 7265BEA2
  static void SET_PED_AS_GROUP_MEMBER(uint32_t p0, uint32_t p1) { N::Invoke<0x2D5B9F52D7E174CF, void>(p0, p1); } // 9F3480FE65DB31B5 0EE13F92
  static void _0x3AEFF894289473D3(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x3AEFF894289473D3, void>(p0, p1, p2); } // 2E2F4240B3F24647 D0D8BDBC
  static void REMOVE_GROUP(uint32_t p0) { N::Invoke<0x62D7E49BFC44B2E9, void>(p0); } // 8EB2F69076AF7053 48D72B88
  static void REMOVE_PED_FROM_GROUP(uint32_t p0) { N::Invoke<0xA2A854DDCAB3A06F, void>(p0); } // ED74007FFB146BC2 82697713
  static bool IS_PED_GROUP_MEMBER(uint32_t p0, uint32_t p1) { return N::Invoke<0xF9BC20445D57B42A, bool>(p0, p1); } // 9BB01E3834671191 876D5363
  static bool _0x68B3DFCF1710D279(uint32_t p0) { return N::Invoke<0x68B3DFCF1710D279, bool>(p0); } // 1C86D8AEF8254B78 9678D4FF
  static void SET_GROUP_SEPARATION_RANGE(uint32_t p0, float p1) { N::Invoke<0xA0A946BC184823C5, void>(p0, p1); } // 4102C7858CFEE4E4 7B820CD5
  static void _0x1A6A526FF70B018(uint32_t p0, uint32_t p1) { N::Invoke<0x1A6A526FF70B018, void>(p0, p1); } // FA0675AB151073FA 2F0D0973
  static bool IS_PED_PRONE(uint32_t p0) { return N::Invoke<0x9DB847DFDEB5A491, bool>(p0); } // D6A86331A537A7B9 02C2A6C3
  static bool IS_PED_IN_COMBAT(uint32_t p0, uint32_t p1) { return N::Invoke<0xC20B334EFA64243F, bool>(p0, p1); } // 4859F1FC66A6278E FE027CB5
  static bool _0xDA309AC09070BCF2(uint32_t p0, uint32_t p1) { return N::Invoke<0xDA309AC09070BCF2, bool>(p0, p1); } // EAD42DE3610D0721 CCD525E1
  static bool IS_PED_DOING_DRIVEBY(uint32_t p0) { return N::Invoke<0xAF28F7E1259EB5F2, bool>(p0); } // B2C086CC1BF8F2BF AC3CEB9C
  static bool IS_PED_JACKING(uint32_t p0) { return N::Invoke<0x865FD939154C0034, bool>(p0); } // 4AE4FF911DFB61DA 3B321816
  static bool IS_PED_BEING_JACKED(uint32_t p0) { return N::Invoke<0x88253E28293B8BFD, bool>(p0); } // 9A497FE2DF198913 D45D605C
  static bool IS_PED_BEING_STUNNED(uint32_t p0, uint32_t p1) { return N::Invoke<0xED64F67EF8D1EFB, bool>(p0, p1); } // 4FBACCE3B4138EE8 0A66CE30
  static uint32_t GET_PEDS_JACKER(uint32_t p0) { return N::Invoke<0x1F2BCCC99110BB36, uint32_t>(p0); } // 9B128DC36C1E04CF DE1DBB59
  static uint32_t GET_JACK_TARGET(uint32_t p0) { return N::Invoke<0x3BCC2A91D1770E2F, uint32_t>(p0); } // 5486A79D9FBD342D 1D196361
  static bool IS_PED_FLEEING(uint32_t p0) { return N::Invoke<0x1BA961C8CF14F399, bool>(p0); } // BBCCE00B381F8482 85D813C6
  static bool IS_PED_IN_COVER(uint32_t p0, bool p1) { return N::Invoke<0x537F3CB4EFB8C4C1, bool>(p0, p1); } // 60DFD0691A170B88 972C5A8B
  static bool IS_PED_IN_COVER_FACING_LEFT(uint32_t p0) { return N::Invoke<0xA352B6224D654D74, bool>(p0); } // 845333B3150583AB B89DBB80
  static uint32_t _0xFB66DD65996C1501() { return N::Invoke<0xFB66DD65996C1501, uint32_t>(); } // 6A03BF943D767C93
  static bool IS_PED_GOING_INTO_COVER(uint32_t p0) { return N::Invoke<0x356D40C350B9D4CE, bool>(p0); } // 9F65DBC537E59AD5 A3589628
  static uint32_t SET_PED_PINNED_DOWN(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x2A21EE33783D249, uint32_t>(p0, p1, p2); } // AAD6D1ACF08F4612 CC78999D
  static uint32_t _0x979447E72A29474F(uint32_t p0) { return N::Invoke<0x979447E72A29474F, uint32_t>(p0); } // 6F4C85ACD641BCD2 ACF162E0
  static uint32_t _0xEBAC754E1AF19AFD(uint32_t p0) { return N::Invoke<0xEBAC754E1AF19AFD, uint32_t>(p0); } // 814FA8BE5449445D 99968B37
  static uint32_t _0x5F3196CF91FEF27(uint32_t p0) { return N::Invoke<0x5F3196CF91FEF27, uint32_t>(p0); } // 93C8B64DEB84728C 84ADF9EB
  static uint32_t GET_PED_CAUSE_OF_DEATH(uint32_t p0) { return N::Invoke<0x9C6ED73266D56543, uint32_t>(p0); } // 16FFE42AB2D2DC59 63458C27
  static uint32_t _0xBFE81BA854397A75() { return N::Invoke<0xBFE81BA854397A75, uint32_t>(); } // 1E98817B311AE98A
  static uint32_t _0xFFFB31E0814861D0(uint32_t p0) { return N::Invoke<0xFFFB31E0814861D0, uint32_t>(p0); } // 5407B7288D0478B7 EF0B78E6
  static uint32_t _0x6BE6E510FDBF0BBD(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x6BE6E510FDBF0BBD, uint32_t>(p0, p1, p2, p3, p4); } // 336B3D200AB007CB FB18CB19
  static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uint32_t p0, uint32_t p1) { N::Invoke<0xABF0523672571D46, void>(p0, p1); } // ADB3F206518799E8 423B7BA2
  static void SET_PED_RELATIONSHIP_GROUP_HASH(uint32_t p0, uint32_t p1) { N::Invoke<0xE440546F94B26235, void>(p0, p1); } // C80A74AC829DDD92 79F8C18C
  static void SET_RELATIONSHIP_BETWEEN_GROUPS(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xCA4EA7D4F6DCCD43, void>(p0, p1, p2); } // BF25EB89375A37AD D4A215BA
  static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xF4ED2C758D61D1F5, void>(p0, p1, p2); } // 5E29243FB56FC6D4 994B8C2D
  static uint32_t ADD_RELATIONSHIP_GROUP(uint32_t p0, uint32_t p1) { return N::Invoke<0x46B6351EE89452C8, uint32_t>(p0, p1); } // F372BC22FCB88606 8B635546
  static void REMOVE_RELATIONSHIP_GROUP(uint32_t p0) { N::Invoke<0xAF3EF4477F7346AE, void>(p0); } // B6BA2444AB393DA2 4A1DC59A
  static uint32_t GET_RELATIONSHIP_BETWEEN_PEDS(uint32_t p0, uint32_t p1) { return N::Invoke<0xC4F49DBA1D250447, uint32_t>(p0, p1); } // EBA5AD3A0EAF7121 E254C39C
  static uint32_t GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uint32_t p0) { return N::Invoke<0x3EAAADB3B74271DB, uint32_t>(p0); } // 42FDD0F017B1E38E 714BD6E4
  static uint32_t GET_PED_RELATIONSHIP_GROUP_HASH(uint32_t p0) { return N::Invoke<0x2F429CA4FEA3DA65, uint32_t>(p0); } // 7DBDD04862D95F04 354F283C
  static uint32_t GET_RELATIONSHIP_BETWEEN_GROUPS(uint32_t p0, uint32_t p1) { return N::Invoke<0xA29A28F9314D99CA, uint32_t>(p0, p1); } // 9E6B70061662AE5C 4E372FE2
  static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(uint32_t p0, bool p1) { N::Invoke<0x8109C69A79FE2EE0, void>(p0, p1); } // 4328652AE5769C71 7FDDC0A6
  static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(uint32_t p0, float p1, uint32_t p2) { N::Invoke<0x491EB5C6E2E1F2DC, void>(p0, p1, p2); } // 112942C6E708F70B D78AC46C
  static bool IS_PED_RESPONDING_TO_EVENT(uint32_t p0, uint32_t p1) { return N::Invoke<0xB7D382FB7B7589C5, bool>(p0, p1); } // 625B774D75C87068 7A877554
  static void SET_PED_FIRING_PATTERN(uint32_t p0, uint32_t p1) { N::Invoke<0x17851927364BD706, void>(p0, p1); } // 9AC577F5A12AD8A9 B4629D66
  static void SET_PED_SHOOT_RATE(uint32_t p0, uint32_t p1) { N::Invoke<0x82BD6614CF6D5ED4, void>(p0, p1); } // 614DA022990752DC FB301746
  static void SET_COMBAT_FLOAT(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0x6C5E5193D2E6CED0, void>(p0, p1, p2); } // FF41B4B141ED981C D8B7637C
  static float GET_COMBAT_FLOAT(uint32_t p0, uint32_t p1) { return N::Invoke<0x4A2AA443A38BFF10, float>(p0, p1); } // 52DFF8A10508090A 511D7EF8
  static void GET_GROUP_SIZE(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xB589946D42277470, void>(p0, p1, p2); } // 8DE69FE35CA09A45 F7E1A691
  static bool DOES_GROUP_EXIST(uint32_t p0) { return N::Invoke<0xFC3D53CDA17426F4, bool>(p0); } // 7C6B0C22F9F40BBE 935C978D
  static uint32_t GET_PED_GROUP_INDEX(uint32_t p0) { return N::Invoke<0xA33F72168DA2B359, uint32_t>(p0); } // F162E133B4E7A675 134E0785
  static bool IS_PED_IN_GROUP(uint32_t p0) { return N::Invoke<0xBE55B130951EF5CA, bool>(p0); } // 5891CAC5D4ACFF74 836D9795
  static uint32_t _0x9CBE137E6D6C3E15(uint32_t p0) { return N::Invoke<0x9CBE137E6D6C3E15, uint32_t>(p0); } // 6A3975DEA89F9A17 DE7442EE
  static void SET_GROUP_FORMATION(uint32_t p0, uint32_t p1) { N::Invoke<0x826D4A244DB3C8C7, void>(p0, p1); } // CE2F5FC3AF7E8C1E 08FAC739
  static void SET_GROUP_FORMATION_SPACING(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x25542001613BAB1D, void>(p0, p1, p2, p3); } // 1D9D45004C28C916 B1E086FF
  static void _0xDFD03783C44906DA(uint32_t p0) { N::Invoke<0xDFD03783C44906DA, void>(p0); } // 63DAB4CCB3273205 267FCEAD
  static uint32_t GET_VEHICLE_PED_IS_USING(uint32_t p0) { return N::Invoke<0x527D4CB4E8181391, uint32_t>(p0); } // 6094AD011A2EA87D 6DE3AADA
  static uint32_t SET_EXCLUSIVE_PHONE_RELATIONSHIPS(uint32_t p0) { return N::Invoke<0x96FD444E235E7EFB, uint32_t>(p0); } // F92691AED837A5FC 56E0C163
  static void SET_PED_GRAVITY(uint32_t p0, bool p1) { N::Invoke<0x2D79AC19922F7D7, void>(p0, p1); } // 9FF447B6B6AD960A 3CA16652
  static void APPLY_DAMAGE_TO_PED(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x638CD54DC5CC8A3F, void>(p0, p1, p2); } // 697157CED63F18D4 4DC27FCF
  static uint32_t _0xAC586844A977FDFB() { return N::Invoke<0xAC586844A977FDFB, uint32_t>(); } // 36B77BB84687C318
  static void SET_PED_ALLOWED_TO_DUCK(uint32_t p0, bool p1) { N::Invoke<0xA7818F64CC2D1B4E, void>(p0, p1); } // DA1F1B7BE1A8766F C4D122F8
  static void SET_PED_NEVER_LEAVES_GROUP(uint32_t p0, bool p1) { N::Invoke<0x8A7FF20217891392, void>(p0, p1); } // 3DBFC55D5C9BB447 0E038813
  static uint32_t GET_PED_TYPE(uint32_t p0) { return N::Invoke<0xF715A8C79E9233AC, uint32_t>(p0); } // FF059E1E4C01E63C B1460D43
  static void SET_PED_AS_COP(uint32_t p0, bool p1) { N::Invoke<0x3D070287E585BD99, void>(p0, p1); } // BB03C38DD3FB7FFD 84E7DE9F
  static void SET_PED_MAX_HEALTH(uint32_t p0, uint32_t p1) { N::Invoke<0xA1053F9C0358C868, void>(p0, p1); } // F5F6378C4F3419D3 5533F60B
  static uint32_t GET_PED_MAX_HEALTH(uint32_t p0) { return N::Invoke<0xD7873D6F1741A9A4, uint32_t>(p0); } // 4700A416E8324EF3 A45B6C8D
  static void SET_PED_MAX_TIME_IN_WATER(uint32_t p0, float p1) { N::Invoke<0x96D846762E3EC719, void>(p0, p1); } // 43C851690662113D FE0A106B
  static void SET_PED_MAX_TIME_UNDERWATER(uint32_t p0, float p1) { N::Invoke<0x1CECA14829814CF3, void>(p0, p1); } // 6BA428C528D9E522 082EF240
  static void _0x24996A0E1678C9EB(uint32_t p0, float p1) { N::Invoke<0x24996A0E1678C9EB, void>(p0, p1); } // 2735233A786B1BEF 373CC405
  static uint32_t _0xC8D78325297F15A9() { return N::Invoke<0xC8D78325297F15A9, uint32_t>(); } // 952F06BEECD775CC
  static uint32_t _0x44AA5CA076D8D822() { return N::Invoke<0x44AA5CA076D8D822, uint32_t>(); } // E6CA85E7259CE16B
  static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uint32_t p0, uint32_t p1) { N::Invoke<0xAEC837DFD456FB5E, void>(p0, p1); } // 7A6535691B477C48 8A251612
  static bool _0xA2AF2B561D47A72F(uint32_t p0) { return N::Invoke<0xA2AF2B561D47A72F, bool>(p0); } // 51AC07A44D4F5B8A C9D098B3
  static void KNOCK_PED_OFF_VEHICLE(uint32_t p0) { N::Invoke<0x3E581FB687769461, void>(p0); } // 45BBCBA77C29A841 ACDD0674
  static void SET_PED_COORDS_NO_GANG(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xB297794EA6CCEB2B, void>(p0, p1, p2, p3); } // 87052FE446E07247 9561AD98
  static uint32_t GET_PED_AS_GROUP_MEMBER(uint32_t p0, uint32_t p1) { return N::Invoke<0x6B3743907740C84A, uint32_t>(p0, p1); } // 51455483CF23ED97 9AA3CC8C
  static uint32_t _0x2FA7974E4A03EE30() { return N::Invoke<0x2FA7974E4A03EE30, uint32_t>(); } // 5CCE68DBD5FE93EC
  static void SET_PED_KEEP_TASK(uint32_t p0, bool p1) { N::Invoke<0xA1E4BA3B17C6D931, void>(p0, p1); } // 971D38760FBC02EF A7EC79CE
  static void _0xD9ED5246EF17B30F(uint32_t p0, bool p1) { N::Invoke<0xD9ED5246EF17B30F, void>(p0, p1); } // 49E50BDB8BA4DAB2 397F06E3
  static bool IS_PED_SWIMMING(uint32_t p0) { return N::Invoke<0x43C1CCFF3C61F7D7, bool>(p0); } // 9DE327631295B4C2 7AB43DB8
  static bool IS_PED_SWIMMING_UNDER_WATER(uint32_t p0) { return N::Invoke<0x830367A25D848DC7, bool>(p0); } // C024869A53992F34 0E8D524F
  static void SET_PED_COORDS_KEEP_VEHICLE(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x70C5B39D4C577287, void>(p0, p1, p2, p3); } // 9AFEFF481A85AB2E D66AE1D3
  static void SET_PED_DIES_IN_VEHICLE(uint32_t p0, bool p1) { N::Invoke<0xE5B547F352F698E, void>(p0, p1); } // 2A30922C90C9B42C 6FE1E440
  static void SET_CREATE_RANDOM_COPS(bool p0) { N::Invoke<0xF83CD415BF55C455, void>(p0); } // 102E68B2024D536D 23441648
  static void _0xC646B6DB90A65BB7(bool p0) { N::Invoke<0xC646B6DB90A65BB7, void>(p0); } // 8A4986851C4EF6E7 82E548CC
  static void _0x93F161A8EC8AF6B9(bool p0) { N::Invoke<0x93F161A8EC8AF6B9, void>(p0); } // 444CB7D7DBE6973D EDC31475
  static bool CAN_CREATE_RANDOM_COPS() { return N::Invoke<0xBB524B1990FB9D50, bool>(); } // 5EE2CAFF7F17770D AA73DAD9
  static void SET_PED_AS_ENEMY(uint32_t p0, bool p1) { N::Invoke<0x15DE8332B7C67C99, void>(p0, p1); } // 02A0C9720B854BFA AE620A1B
  static void SET_PED_CAN_SMASH_GLASS(uint32_t p0, bool p1, bool p2) { N::Invoke<0xEE0C58B9B0B4B427, void>(p0, p1, p2); } // 1CCE141467FF42A2 149C60A8
  static bool IS_PED_IN_ANY_TRAIN(uint32_t p0) { return N::Invoke<0xA94EC3763C55FF12, bool>(p0); } // 6F972C1AB75A1ED0 759EF63A
  static bool IS_PED_GETTING_INTO_A_VEHICLE(uint32_t p0) { return N::Invoke<0xADFF42956B1E6E0F, bool>(p0); } // BB062B2B5722478E 90E805AC
  static bool IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(uint32_t p0) { return N::Invoke<0xED261CE09A6522AE, bool>(p0); } // 44D28D5DDFE5F68C 46828B4E
  static void SET_ENABLE_HANDCUFFS(uint32_t p0, bool p1) { N::Invoke<0x5E3892A28C879327, void>(p0, p1); } // DF1AF8B5D56542FA AC9BBA23
  static void SET_ENABLE_BOUND_ANKLES(uint32_t p0, bool p1) { N::Invoke<0x898359B91EB2E0B1, void>(p0, p1); } // C52E0F855C58FC2E 9208D689
  static void _0x5756B50A1D1D2FCE(uint32_t p0, bool p1) { N::Invoke<0x5756B50A1D1D2FCE, void>(p0, p1); } // F99F62004024D506 7BF61471
  static void SET_CAN_ATTACK_FRIENDLY(uint32_t p0, bool p1, bool p2) { N::Invoke<0x59F63E7B08DC975C, void>(p0, p1, p2); } // B3B1CB349FF9C75D 47C60963
  static uint32_t GET_PED_ALERTNESS(uint32_t p0) { return N::Invoke<0xD06ED9C602D58624, uint32_t>(p0); } // F6AA118530443FD2 F83E4DAF
  static void SET_PED_ALERTNESS(uint32_t p0, uint32_t p1) { N::Invoke<0xE4A53248B57092F2, void>(p0, p1); } // DBA71115ED9941A6 2C32D9AE
  static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uint32_t p0, bool p1) { N::Invoke<0xEC19F55466DE878B, void>(p0, p1); } // BC0ED94165A48BC2 89AD49FF
  static void SET_PED_MOVEMENT_CLIPSET(uint32_t p0, uint32_t *p1, float p2) { N::Invoke<0xC3171961272B0BF2, void>(p0, p1, p2); } // AF8A94EDE7712BEF A817CDEB
  static void RESET_PED_MOVEMENT_CLIPSET(uint32_t p0, float p1) { N::Invoke<0x708A5EFEB2660CE4, void>(p0, p1); } // AA74EC0CB0AAEA2C B83CEE93
  static void SET_PED_STRAFE_CLIPSET(uint32_t p0, uint32_t *p1) { N::Invoke<0x4C174E6F2323E7DC, void>(p0, p1); } // 29A28F3F8CF6D854 0BACF010
  static void RESET_PED_STRAFE_CLIPSET(uint32_t p0) { N::Invoke<0x514C7D46216AA8DE, void>(p0); } // 20510814175EA477 F1967A12
  static void SET_PED_WEAPON_MOVEMENT_CLIPSET(uint32_t p0, uint32_t *p1) { N::Invoke<0xEF6A678C672AD689, void>(p0, p1); } // 2622E35B77D3ACA2 F8BE54DC
  static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(uint32_t p0) { N::Invoke<0x4F7B10CA147AAAA, void>(p0); } // 97B0DB5B4AA74E77 C60C9ACD
  static void _0xF295BB2B8DBCE3B8(uint32_t p0, uint32_t *p1) { N::Invoke<0xF295BB2B8DBCE3B8, void>(p0, p1); } // ED34AB6C5CB36520 D4C73595
  static void _0x422380C60199A383(uint32_t p0) { N::Invoke<0x422380C60199A383, void>(p0); } // 4AFE3690D7E0B5AC AEC9163B
  static uint32_t _0x9CF43385A2A6D420() { return N::Invoke<0x9CF43385A2A6D420, uint32_t>(); } // 9DBA107B4937F809
  static uint32_t _0x6C208E3A0EB62E5E() { return N::Invoke<0x6C208E3A0EB62E5E, uint32_t>(); } // C79196DCB36F6121
  static uint32_t _0xC0059219652ED56A() { return N::Invoke<0xC0059219652ED56A, uint32_t>(); } // 80054D7FCC70EEC6
  static void SET_PED_IN_VEHICLE_CONTEXT(uint32_t p0, uint32_t p1) { N::Invoke<0xCEB04649203784E4, void>(p0, p1); } // 530071295899A8C6 27F25C0E
  static void RESET_PED_IN_VEHICLE_CONTEXT(uint32_t p0) { N::Invoke<0xBFFF161AF85017B0, void>(p0); } // 22EF8FF8778030EB 3C94D88A
  static bool _0x5AE455312D8AA1F0(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x5AE455312D8AA1F0, bool>(p0, p1, p2); } // 6EC47A344923E1ED 3C30B447
  static void _0xEC0F336E703AD93E(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, bool p4) { N::Invoke<0xEC0F336E703AD93E, void>(p0, p1, p2, p3, p4); } // 6C60394CB4F75E9A 895E1D67
  static void _0xB1DBE330E63E93FE(uint32_t p0, float p1) { N::Invoke<0xB1DBE330E63E93FE, void>(p0, p1); } // 8844BBFCE30AA9E9 5736FB23
  static void SET_PED_ALTERNATE_MOVEMENT_ANIM(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, bool p5) { N::Invoke<0x750F44AB2EED1F0B, void>(p0, p1, p2, p3, p4, p5); } // 90A43CC281FFAB46 BA84FD8C
  static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0x12F4EB7593FFEE2C, void>(p0, p1, p2); } // D8D19675ED5FBDCE 7A7F5BC3
  static void SET_PED_GESTURE_GROUP(uint32_t p0, uint32_t *p1) { N::Invoke<0xD25D9D023066E5D7, void>(p0, p1); } // DDF803377F94AAA8 170DA109
  static Vector3 _0xE07FE144B472B7C8(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9) { return N::Invoke<0xE07FE144B472B7C8, Vector3>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // BE22B26DD764C040 C59D4268
  static Vector3 _0x99E69251597182A2(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9) { return N::Invoke<0x99E69251597182A2, Vector3>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 4B805E6046EE9E47 5F7789E6
  static uint32_t GET_PED_DRAWABLE_VARIATION(uint32_t p0, uint32_t p1) { return N::Invoke<0xFEAB4D7F75916F7C, uint32_t>(p0, p1); } // 67F3780DD425D4FC 29850FE2
  static uint32_t GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uint32_t p0, uint32_t p1) { return N::Invoke<0x8EE8B9C6684645F9, uint32_t>(p0, p1); } // 27561561732A7842 9754C27D
  static uint32_t GET_PED_TEXTURE_VARIATION(uint32_t p0, uint32_t p1) { return N::Invoke<0xB1803498CF77A15A, uint32_t>(p0, p1); } // 04A355E041E004E6 C0A8590A
  static uint32_t GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xEECA1EB6A4643BEA, uint32_t>(p0, p1, p2); } // 8F7156A3142A6BAD 83D9FBE7
  static uint32_t _0x71A0AEF383D7C7D9(uint32_t p0, uint32_t p1) { return N::Invoke<0x71A0AEF383D7C7D9, uint32_t>(p0, p1); } // 5FAF9754E789FB47 C9780B95
  static uint32_t REMOVE_NIGHTVISION_MELEE(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xFB807AF25D055BAB, uint32_t>(p0, p1, p2); } // A6E7F1CEB523E171 4892B882
  static bool GET_PED_PALETTE_VARIATION(uint32_t p0, uint32_t p1) { return N::Invoke<0x1B556A31096DEA5F, bool>(p0, p1); } // E3DD5F2A84B42281 EF1BC082
  static uint32_t _0x3646F9629B182FCE() { return N::Invoke<0x3646F9629B182FCE, uint32_t>(); } // 9E30E91FB03A2CAF
  static uint32_t _0xD727B7116C3391F5() { return N::Invoke<0xD727B7116C3391F5, uint32_t>(); } // 1E77FA7A62EE6C4C
  static uint32_t _0xEE0D3BDFFD4EB701() { return N::Invoke<0xEE0D3BDFFD4EB701, uint32_t>(); } // F033419D1B81FAE8
  static bool IS_PED_COMPONENT_VARIATION_VALID(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x7B4DA46DAF545101, bool>(p0, p1, p2, p3); } // E825F6B6CEA7671D 952ABD9A
  static void SET_PED_COMPONENT_VARIATION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xF2685765B7BEBCB0, void>(p0, p1, p2, p3, p4); } // 262B14F48D29DE80 D4F7B05C
  static void SET_PED_RANDOM_COMPONENT_VARIATION(uint32_t p0, uint32_t p1) { N::Invoke<0x146FCBEC0D4289BF, void>(p0, p1); } // C8A9481A01E63C28 4111BA46
  static void SET_PED_RANDOM_PROPS(uint32_t p0) { N::Invoke<0x4340FFD30238C1BC, void>(p0); } // C44AA05345C992C6 E3318E0E
  static void SET_PED_DEFAULT_COMPONENT_VARIATION(uint32_t p0) { N::Invoke<0x4376624421FB329B, void>(p0); } // 45EEE61580806D63 C866A984
  static void SET_PED_BLEND_FROM_PARENTS(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4) { N::Invoke<0xE6F28E4D8529DACB, void>(p0, p1, p2, p3, p4); } // 137BBD05230DB22D 837BD370
  static void SET_PED_HEAD_BLEND_DATA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, float p7, float p8, float p9, bool p10) { N::Invoke<0x9C6AEA1AA18BD606, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 9414E18B9434C2FE 60746B88
  static uint32_t _0xB8AE06BD6400116C() { return N::Invoke<0xB8AE06BD6400116C, uint32_t>(); } // 2746BD9D88C5C5D0
  static void UPDATE_PED_HEAD_BLEND_DATA(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x6FA9550BF8D838E6, void>(p0, p1, p2, p3); } // 723538F61C647C5A 5CB76219
  static uint32_t _0xA1AB7CB505B590EC() { return N::Invoke<0xA1AB7CB505B590EC, uint32_t>(); } // 50B56988B170AFDF
  static void SET_PED_HEAD_OVERLAY(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { N::Invoke<0xF116D5E316BE86C3, void>(p0, p1, p2, p3); } // 48F44967FA05CC1E D28DBA90
  static uint32_t _0x84C61B7610C1B574() { return N::Invoke<0x84C61B7610C1B574, uint32_t>(); } // A60EF3B6461A4D43
  static uint32_t _0x93C3A94D37AB02D6(uint32_t p0) { return N::Invoke<0x93C3A94D37AB02D6, uint32_t>(p0); } // CF1CE768BB43480E FF43C18D
  static uint32_t _0x5B9153AA7FFB5E16() { return N::Invoke<0x5B9153AA7FFB5E16, uint32_t>(); } // 497BF74A7B9CB952
  static uint32_t _0xF32EA66CD58FFDC5() { return N::Invoke<0xF32EA66CD58FFDC5, uint32_t>(); } // 4CFFC65454C93A49
  static uint32_t _0xEA4DFCA3D89A5DBE() { return N::Invoke<0xEA4DFCA3D89A5DBE, uint32_t>(); } // E5C0CF872C2AD150
  static uint32_t _0x3B53055F9FFD34BD() { return N::Invoke<0x3B53055F9FFD34BD, uint32_t>(); } // D1F7CA1535D22818
  static uint32_t _0xC9DF0A5E39A36E9F() { return N::Invoke<0xC9DF0A5E39A36E9F, uint32_t>(); } // 4852FC386E2E1BB5
  static uint32_t _0x824E228D77A8327F() { return N::Invoke<0x824E228D77A8327F, uint32_t>(); } // 13E5CFC38CD5387
  static uint32_t _0x487FCE50621551A6() { return N::Invoke<0x487FCE50621551A6, uint32_t>(); } // ED6D8E27A43B8CDE
  static uint32_t _0xF6C8D87E847E92CD() { return N::Invoke<0xF6C8D87E847E92CD, uint32_t>(); } // EA9960D07DADCF10
  static uint32_t _0x3629FDDADC3C8189() { return N::Invoke<0x3629FDDADC3C8189, uint32_t>(); } // 3E802F11FBE27674
  static uint32_t _0x5E20222FFF785E5() { return N::Invoke<0x5E20222FFF785E5, uint32_t>(); } // F41B5D290C99A3D6
  static uint32_t _0x4BA252C15595C16() { return N::Invoke<0x4BA252C15595C16, uint32_t>(); } // E0D36E5D9E99CC21
  static uint32_t _0x5A8B43D68250C292() { return N::Invoke<0x5A8B43D68250C292, uint32_t>(); } // AAA6A3698A69E048
  static uint32_t _0x26DA4C85337D755A() { return N::Invoke<0x26DA4C85337D755A, uint32_t>(); } // 525A2C2562F3CD4
  static uint32_t _0x317DFA73E59ABE90() { return N::Invoke<0x317DFA73E59ABE90, uint32_t>(); } // 604E810189EE3A59
  static uint32_t _0xD00475D2D272E227() { return N::Invoke<0xD00475D2D272E227, uint32_t>(); } // C56FBF2F228E1DAC
  static uint32_t _0xAB7D136BEF6BAB51() { return N::Invoke<0xAB7D136BEF6BAB51, uint32_t>(); } // 71A5C1DBA060049E
  static bool HAS_PED_HEAD_BLEND_FINISHED(uint32_t p0) { return N::Invoke<0xC94E1E6AD5DBBAB1, bool>(p0); } // 654CD0A825161131 2B1BD9C5
  static void _0x8576187A1C5FF880(uint32_t p0) { N::Invoke<0x8576187A1C5FF880, void>(p0); } // 4668D80430D6C299 894314A4
  static void _0x20A6B9C577CF602E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x20A6B9C577CF602E, void>(p0, p1, p2, p3, p4); } // CC9682B8951C5229 57E5B3F9
  static void _0xF4C6533AAC05548C(uint32_t p0) { N::Invoke<0xF4C6533AAC05548C, void>(p0); } // A21C118553BBDF02 C6F36292
  static uint32_t _0x79003537C113F6C5(uint32_t p0) { return N::Invoke<0x79003537C113F6C5, uint32_t>(p0); } // 68D353AB88B97E0C 211DEFEC
  static uint32_t _0x2C82D8A3F076307D(uint32_t p0) { return N::Invoke<0x2C82D8A3F076307D, uint32_t>(p0); } // 5EF37013A6539C9D 095D3BD8
  static uint32_t _0x318EE36FAC56D9E3(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x318EE36FAC56D9E3, uint32_t>(p0, p1, p2, p3); } // 39D55A620FCB6A3A 45F3BDFB
  static bool _0x1FD88953E125C3A2(uint32_t p0) { return N::Invoke<0x1FD88953E125C3A2, bool>(p0); } // 66680A92700F43DF C6517D52
  static void _0x2199312DA9E83EA1(uint32_t p0) { N::Invoke<0x2199312DA9E83EA1, void>(p0); } // 5AAB586FFEC0FD96 6435F67F
  static uint32_t _0xC2283888B2F54BE5(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xC2283888B2F54BE5, uint32_t>(p0, p1, p2, p3); } // 2B16A3BFF1FBCE49 C0E23671
  static bool _0xEA54B1E8D668AEDC(uint32_t p0) { return N::Invoke<0xEA54B1E8D668AEDC, bool>(p0); } // 784002A632822099 3B0CA391
  static void _0xE853A2CFFA2E8A27(uint32_t p0) { N::Invoke<0xE853A2CFFA2E8A27, void>(p0); } // F79F9DEF0AADE61A FD103BA7
  static uint32_t GET_PED_PROP_INDEX(uint32_t p0, uint32_t p1) { return N::Invoke<0x7974CEFA1BFEA57F, uint32_t>(p0, p1); } // 898CC20EA75BACD8 746DDAC0
  static void SET_PED_PROP_INDEX(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, bool p4) { N::Invoke<0x6543DA07CCCC7F5, void>(p0, p1, p2, p3, p4); } // 93376B65A266EB5F 0829F2E2
  static void KNOCK_OFF_PED_PROP(uint32_t p0, bool p1, bool p2, bool p3, bool p4) { N::Invoke<0x16635CEA3A5C8EBA, void>(p0, p1, p2, p3, p4); } // 6FD7816A36615F48 08D8B180
  static void CLEAR_PED_PROP(uint32_t p0, uint32_t p1) { N::Invoke<0xCBC81ECD741ECE5E, void>(p0, p1); } // 0943E5B8E078E76E 2D23D743
  static void CLEAR_ALL_PED_PROPS(uint32_t p0) { N::Invoke<0x22D39A6F835A63ED, void>(p0); } // CD8A7537A9B52F06 81DF8B43
  static uint32_t _0x23A80D5BA59C0AAE() { return N::Invoke<0x23A80D5BA59C0AAE, uint32_t>(); } // AFF4710E2A0A6C12
  static uint32_t GET_PED_PROP_TEXTURE_INDEX(uint32_t p0, uint32_t p1) { return N::Invoke<0xC822E015E8309254, uint32_t>(p0, p1); } // E131A28626F81AB2 922A6653
  static void _0xF05E2F0816C02541(uint32_t p0) { N::Invoke<0xF05E2F0816C02541, void>(p0); } // 1280804F7CFD2D6C 7BCD8991
  static uint32_t _0xD9D97B9FBE26802C() { return N::Invoke<0xD9D97B9FBE26802C, uint32_t>(); } // 36C6984C3ED0C911
  static void _0x99A73C300AA2BB17(uint32_t p0) { N::Invoke<0x99A73C300AA2BB17, void>(p0); } // B50EB4CCB29704AC 080275EE
  static uint32_t _0xA87F50646E5E68F1() { return N::Invoke<0xA87F50646E5E68F1, uint32_t>(); } // FEC9A3B1820F3331
  static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uint32_t p0, bool p1) { N::Invoke<0x2DC5B31EBB810396, void>(p0, p1); } // 9F8AA94D6D97DBF4 DFE34E4A
  static void SET_PED_BOUNDS_ORIENTATION(uint32_t p0, float p1, float p2, float p3, float p4, float p5) { N::Invoke<0x81F83277441417FB, void>(p0, p1, p2, p3, p4, p5); } // 4F5F651ACCC9C4CF CFA20D68
  static void REGISTER_TARGET(uint32_t p0, uint32_t p1) { N::Invoke<0x3019783289DEF027, void>(p0, p1); } // 2F25D9AEFA34FBA2 50A95442
  static void REGISTER_HATED_TARGETS_AROUND_PED(uint32_t p0, float p1) { N::Invoke<0x943597F159F91C4E, void>(p0, p1); } // 9222F300BF8354FE 7F87559E
  static uint32_t GET_RANDOM_PED_AT_COORD(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return N::Invoke<0x53BACC5C821169E0, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 876046A8E3A4B71C DC8239EB
  static bool GET_CLOSEST_PED(float p0, float p1, float p2, float p3, bool p4, bool p5, uint32_t *p6, bool p7, bool p8, uint32_t p9) { return N::Invoke<0xB676D277AA38546, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // C33AB876A77F8164 8F6C1F55
  static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(bool p0) { N::Invoke<0x4BE787B11E265718, void>(p0); } // 14F19A8782C8071E 85615FD0
  static bool _0x0F4086D9455FFF58C(uint32_t p0, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, uint32_t p8) { return N::Invoke<0xF4086D9455FFF58C, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 03EA03AF85A85CB7 18DD76A1
  static void _0x2C8D1FC52AC8C668(uint32_t p0, float p1) { N::Invoke<0x2C8D1FC52AC8C668, void>(p0, p1); } // DED5AF5A0EA4B297 6D55B3B3
  static void SET_DRIVER_ABILITY(uint32_t p0, float p1) { N::Invoke<0x96814E698DED4FE7, void>(p0, p1); } // B195FFA8042FC5C3 AAD4012C
  static void SET_DRIVER_AGGRESSIVENESS(uint32_t p0, float p1) { N::Invoke<0xDF3F6BC07D4EFDC1, void>(p0, p1); } // A731F608CA104E3C 8B02A8FB
  static bool CAN_PED_RAGDOLL(uint32_t p0) { return N::Invoke<0xF5C3CA840B03C074, bool>(p0); } // 128F79EDCECE4FD5 C0EFB7A3
  static bool SET_PED_TO_RAGDOLL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, bool p4, bool p5, bool p6) { return N::Invoke<0xFFA7CDD296D07129, bool>(p0, p1, p2, p3, p4, p5, p6); } // AE99FB955581844A 83CB5052
  static uint32_t SET_PED_TO_RAGDOLL_WITH_FALL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { return N::Invoke<0x44884A42AD0F9AA3, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // D76632D99E4966C8 FA12E286
  static void SET_PED_RAGDOLL_ON_COLLISION(uint32_t p0, bool p1) { N::Invoke<0xC891085FCF0774F0, void>(p0, p1); } // F0A4F1BBF4FA7497 2654A0F4
  static bool IS_PED_RAGDOLL(uint32_t p0) { return N::Invoke<0x1983DA3C921BB046, bool>(p0); } // 47E4E977581C5B55 C833BBE1
  static bool IS_PED_RUNNING_RAGDOLL_TASK(uint32_t p0) { return N::Invoke<0xF9241A6D74AF80C7, bool>(p0); } // E3B6097CC25AA69E 44A153F2
  static void SET_PED_RAGDOLL_FORCE_FALL(uint32_t p0) { N::Invoke<0x5073B77532ACF316, void>(p0); } // 01F6594B923B9251 20A5BDE0
  static void RESET_PED_RAGDOLL_TIMER(uint32_t p0) { N::Invoke<0x99B38FD868DCDB8F, void>(p0); } // 9FA4664CF62E47E8 F2865370
  static void SET_PED_CAN_RAGDOLL(uint32_t p0, bool p1) { N::Invoke<0x6A8A5F1A990BB700, void>(p0, p1); } // B128377056A54E2A CF1384C4
  static uint32_t _0x4C97964157803281() { return N::Invoke<0x4C97964157803281, uint32_t>(); } // D1871251F3B5ACD7
  static bool IS_PED_RUNNING_MOBILE_PHONE_TASK(uint32_t p0) { return N::Invoke<0xCAE88F3FE0FF5690, bool>(p0); } // 2AFE52F782F25775 FB2AFED1
  static bool _0x4ECA212B0D29A486(uint32_t p0) { return N::Invoke<0x4ECA212B0D29A486, bool>(p0); } // A3F3564A5B3646C0 97353375
  static void _0xB3AFD1CE4D234677(uint32_t p0, uint32_t p1) { N::Invoke<0xB3AFD1CE4D234677, void>(p0, p1); } // 26695EC767728D84 9C8F830D
  static void _0xB5387C65C820C260(uint32_t p0, uint32_t p1) { N::Invoke<0xB5387C65C820C260, void>(p0, p1); } // D86D101FCFD00A4B 77CBA290
  static void SET_PED_ANGLED_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9) { N::Invoke<0x857B2B6B54BD2AC3, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // C7F76DF27A5045A1 3EFBDD9B
  static void SET_PED_SPHERE_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4, bool p5, bool p6) { N::Invoke<0x8A18D33204B561D, void>(p0, p1, p2, p3, p4, p5, p6); } // 9D3151A373974804 BD96D8E8
  static void _0x416C9B1337D7A700(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, bool p6) { N::Invoke<0x416C9B1337D7A700, void>(p0, p1, p2, p3, p4, p5, p6); } // F9B8F91AAD3B953E 40638BDC
  static void _0xB8EAF2F8AB363E6B(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, bool p6) { N::Invoke<0xB8EAF2F8AB363E6B, void>(p0, p1, p2, p3, p4, p5, p6); } // E4723DB6E736CCFF 4763B2C6
  static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10) { N::Invoke<0xA1AAA55EB22BF53B, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 4EF47FE21698A8B6 74BDA7CE
  static void _0xC9BE04F564E51438(uint32_t p0, float p1, float p2, float p3, bool p4) { N::Invoke<0xC9BE04F564E51438, void>(p0, p1, p2, p3, p4); } // 413C6C763A4AFFAD B66B0C9A
  static void REMOVE_PED_DEFENSIVE_AREA(uint32_t p0, bool p1) { N::Invoke<0xC00A761B5BB4E38B, void>(p0, p1); } // 74D4E028107450A9 34AAAFA5
  static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(uint32_t p0, bool p1) { return N::Invoke<0x4738EB7FC2AEC017, Vector3>(p0, p1); } // 3C06B8786DD94CD1 CB65198D
  static uint32_t _0xB230BDFA1BEF334E() { return N::Invoke<0xB230BDFA1BEF334E, uint32_t>(); } // BA63D9FE45412247
  static void _0x716E132DDA636AA2(uint32_t p0, uint32_t p1) { N::Invoke<0x716E132DDA636AA2, void>(p0, p1); } // 8421EB4DA7E391B9 F3B7EFBF
  static void _0x64AD6D8CC4C8D9F3(uint32_t p0) { N::Invoke<0x64AD6D8CC4C8D9F3, void>(p0); } // FDDB234CF74073D9 A0134498
  static void REVIVE_INJURED_PED(uint32_t p0) { N::Invoke<0xB50E81059EB87236, void>(p0); } // 8D8ACD8388CD99CE 14D3E6E3
  static void RESURRECT_PED(uint32_t p0) { N::Invoke<0x636FF869C08C00AC, void>(p0); } // 71BC8E838B9C6035 A4B82097
  static void SET_PED_NAME_DEBUG(uint32_t p0, uint32_t p1) { N::Invoke<0x3F671607BC1804B5, void>(p0, p1); } // 98EFA132A4117BE1 20D6273E
  static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(uint32_t p0, bool p1) { return N::Invoke<0xD29FE5456F5F7171, Vector3>(p0, p1); } // E0AF41401ADF87E3 5231F901
  static void SET_PED_DIES_WHEN_INJURED(uint32_t p0, bool p1) { N::Invoke<0x78BFEA1E2E65768C, void>(p0, p1); } // 5BA7919BED300023 E94E24D4
  static void SET_PED_ENABLE_WEAPON_BLOCKING(uint32_t p0, bool p1) { N::Invoke<0xF6784072BE8C52D, void>(p0, p1); } // 97A790315D3831FD 4CAD1A4A
  static void _0xF1188B0DA70C7D06(uint32_t p0, bool p1) { N::Invoke<0xF1188B0DA70C7D06, void>(p0, p1); } // F9ACF4A08098EA25 141CC936
  static void RESET_PED_VISIBLE_DAMAGE(uint32_t p0) { N::Invoke<0xD28176DC1D779514, void>(p0); } // 3AC1F7B898F30C05 C4BC4841
  static void _0x85E8D195CD442A7F(uint32_t p0, uint32_t p1, float p2, float p3, uint32_t p4) { N::Invoke<0x85E8D195CD442A7F, void>(p0, p1, p2, p3, p4); } // 816F6981C60BF53B 1E54DB12
  static void APPLY_PED_BLOOD(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t *p5) { N::Invoke<0x41F4A25AABA0D838, void>(p0, p1, p2, p3, p4, p5); } // 83F7E01C7B769A26 376CE3C0
  static void _0xA356BA354418CD2F(uint32_t p0, uint32_t p1, float p2, float p3, uint32_t *p4) { N::Invoke<0xA356BA354418CD2F, void>(p0, p1, p2, p3, p4); } // 3311E47B91EDCBBC 8F3F3A9C
  static void _0xC228A449B4DE49C8(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, uint32_t *p8) { N::Invoke<0xC228A449B4DE49C8, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // EF0D582CBF2D9B0F FC13CE80
  static void APPLY_PED_DAMAGE_DECAL(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, bool p8, uint32_t *p9) { N::Invoke<0x2D0DEEF97562324B, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 397C38AA7B4A5F83 8A13A41F
  static void APPLY_PED_DAMAGE_PACK(uint32_t p0, uint32_t *p1, float p2, float p3) { N::Invoke<0xC98F9602E69A0C17, void>(p0, p1, p2, p3); } // 46DF918788CB093F 208D0CB8
  static void CLEAR_PED_BLOOD_DAMAGE(uint32_t p0) { N::Invoke<0x375E13D05B0DF434, void>(p0); } // 8FE22675A5A45817 F7ADC960
  static void _0x41FBD4190B8E028B(uint32_t p0, uint32_t p1) { N::Invoke<0x41FBD4190B8E028B, void>(p0, p1); } // 56E3B78C5408D9F4 F210BE69
  static void _0x3B6BB00383411B50(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x3B6BB00383411B50, void>(p0, p1, p2); } // 62AB793144DE75DC 0CB6C4ED
  static void _0x6C8995307A95F99A(uint32_t p0, uint32_t p1, uint32_t *p2) { N::Invoke<0x6C8995307A95F99A, void>(p0, p1, p2); } // 523C79AEEFCC4A2A 70AA5B7D
  static uint32_t _0xE628E820C5762D02(uint32_t p0) { return N::Invoke<0xE628E820C5762D02, uint32_t>(p0); } // 71EAB450D86954A1 47187F7F
  static uint32_t _0x51F6354E2C2EFDDA() { return N::Invoke<0x51F6354E2C2EFDDA, uint32_t>(); } // 2B694AFCF64E6994
  static void CLEAR_PED_WETNESS(uint32_t p0) { N::Invoke<0x309CA1336CB83196, void>(p0); } // 9C720776DAA43E7E 629F15BD
  static void SET_PED_WETNESS_HEIGHT(uint32_t p0, float p1) { N::Invoke<0xEAD5A0AC20C145E7, void>(p0, p1); } // 44CB6447D2571AA0 7B33289A
  static void SET_PED_WETNESS_ENABLED_THIS_FRAME(uint32_t p0) { N::Invoke<0xE0072E5087CCF679, void>(p0); } // B5485E4907B53019 BDE749F7
  static void _0x13DAAD7AD7366D7D(uint32_t p0) { N::Invoke<0x13DAAD7AD7366D7D, void>(p0); } // 6585D955A68452A5 A993915F
  static void SET_PED_SWEAT(uint32_t p0, float p1) { N::Invoke<0xEB142D0007A7329, void>(p0, p1); } // 27B0405F59637D1F 76A1DB9F
  static void _0x992DEDFFA9FED32C(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x992DEDFFA9FED32C, void>(p0, p1, p2); } // 5F5D1665E352A839 70559AC7
  static uint32_t _0x5E2274D6DCE4B82() { return N::Invoke<0x5E2274D6DCE4B82, uint32_t>(); } // 5619BFA07CFD7833
  static uint32_t _0xC8AC8FE33891F844(uint32_t p0, uint32_t p1) { return N::Invoke<0xC8AC8FE33891F844, uint32_t>(p0, p1); } // 9FD452BFBE7A7A8B 3543019E
  static void CLEAR_PED_DECORATIONS(uint32_t p0) { N::Invoke<0x485CBA188D4849AB, void>(p0); } // 0E5173C163976E38 D4496BF3
  static void _0x96D0175685CDB7DB(uint32_t p0) { N::Invoke<0x96D0175685CDB7DB, void>(p0); } // E3B27E70CEAB9F0C EFD58EB9
  static bool WAS_PED_SKELETON_UPDATED(uint32_t p0) { return N::Invoke<0x7CF9934132FBF3CF, bool>(p0); } // 11B499C1E0FF8559 F7E2FBAD
  static Vector3 GET_PED_BONE_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0xC5B1818639240D24, Vector3>(p0, p1, p2, p3, p4); } // 17C07FC640E86B4E 4579CAB1
  static void CREATE_NM_MESSAGE(uint32_t p0, uint32_t p1) { N::Invoke<0x38021CD2E0B38F76, void>(p0, p1); } // 418EF2A1BCE56685 1CFBFD4B
  static void GIVE_PED_NM_MESSAGE(uint32_t p0) { N::Invoke<0xD079377CBD056C52, void>(p0); } // B158DFCCC56E5C5B 737C3689
  static uint32_t ADD_SCENARIO_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9) { return N::Invoke<0x92832F671263F8E0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 1B5C85C612E5256E A38C0234
  static void REMOVE_SCENARIO_BLOCKING_AREAS() { N::Invoke<0x8473059B7180712A, void>(); } // D37401D78A929A49 4DDF845F
  static void REMOVE_SCENARIO_BLOCKING_AREA(uint32_t p0, bool p1) { N::Invoke<0x1D6153ECFEB26B2A, void>(p0, p1); } // 31D16B74C6E29D66 4483EF06
  static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x4F625D364D2B9F19, void>(p0, p1, p2, p3, p4); } // 28157D43CF600981 80EAD297
  static bool IS_PED_USING_SCENARIO(uint32_t p0, uint32_t *p1) { return N::Invoke<0x9DC0AD9091504FA7, bool>(p0, p1); } // 1BF094736DD62C2E 0F65B0D4
  static bool IS_PED_USING_ANY_SCENARIO(uint32_t p0) { return N::Invoke<0xF5FF2C22C19B44, bool>(p0); } // 57AB4A3080F85143 195EF5B7
  static uint32_t _0x1833FF6277164617(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x1833FF6277164617, uint32_t>(p0, p1, p2, p3); } // FE07FF6495D52E2A 59DE73AC
  static void _0x7B29EE2823C23A24(uint32_t p0, bool p1) { N::Invoke<0x7B29EE2823C23A24, void>(p0, p1); } // 9A77DFD295E29B09 C08FE5F6
  static uint32_t _0x9B087072254B8A12(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x9B087072254B8A12, uint32_t>(p0, p1, p2, p3); } // 25361A96E0F7E419 58C0F6CF
  static uint32_t _0xA2FD8D516B402112(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xA2FD8D516B402112, uint32_t>(p0, p1, p2, p3); } // EC6935EBE0847B90 761F8F48
  static void _0xB7058A94644D8E45(uint32_t p0) { N::Invoke<0xB7058A94644D8E45, void>(p0); } // A3A9299C4F2ADB98 033F43FA
  static void _0xDC06C29AA1C2E756(uint32_t p0) { N::Invoke<0xDC06C29AA1C2E756, void>(p0); } // F1C03A5352243A30 4C684C81
  static uint32_t _0x4F8427034438EDCB(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x4F8427034438EDCB, uint32_t>(p0, p1, p2, p3); } // EEED8FAFEC331A70 7B4C3E6F
  static void _0xFBE0E187FFCA2218(uint32_t p0, bool p1) { N::Invoke<0xFBE0E187FFCA2218, void>(p0, p1); } // 425AECF167663F48 5BC276AE
  static uint32_t _0xBA249A0F020DF4DA() { return N::Invoke<0xBA249A0F020DF4DA, uint32_t>(); } // 5B6010B3CBC29095
  static uint32_t _0x14461093EF58EAB0() { return N::Invoke<0x14461093EF58EAB0, uint32_t>(); } // CEDA60A74219D064
  static void PLAY_FACIAL_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x87B85D8B36733983, void>(p0, p1, p2); } // E1E65CA8AC9C00ED 1F6CCDDE
  static void SET_FACIAL_IDLE_ANIM_OVERRIDE(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xB999892D829E5A79, void>(p0, p1, p2); } // FFC24B988B938B38 9BA19C13
  static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uint32_t p0) { N::Invoke<0xF0092A6A58666782, void>(p0); } // 726256CC1EEB182F 5244F4E2
  static void SET_PED_CAN_PLAY_GESTURE_ANIMS(uint32_t p0, bool p1) { N::Invoke<0xEEB517332A13895, void>(p0, p1); } // BAF20C5432058024 E131E3B3
  static void SET_PED_CAN_PLAY_VISEME_ANIMS(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0x9D338B9203A5F6E7, void>(p0, p1, p2); } // F833DDBA3B104D43 A2FDAF27
  static void _0x24CA2BC9CE38CF9F(uint32_t p0, bool p1) { N::Invoke<0x24CA2BC9CE38CF9F, void>(p0, p1); } // 33A60D8BDD6E508C ADB2511A
  static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(uint32_t p0, bool p1) { N::Invoke<0xC9CD9F3D2675F791, void>(p0, p1); } // 6373D1349925A70E F8053081
  static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uint32_t p0, bool p1) { N::Invoke<0xB38B1727AB0E27B6, void>(p0, p1); } // 0EB0585D15254740 5720A5DD
  static void _0x1763E1AC972E12DC(uint32_t p0) { N::Invoke<0x1763E1AC972E12DC, void>(p0); } // C2EE020F5FB4DB53 B7CD0A49
  static void _0xE420E85FDA3D78E0(uint32_t p0, bool p1) { N::Invoke<0xE420E85FDA3D78E0, void>(p0, p1); } // 6C3B4D6D13B4C841 343B4DE0
  static void SET_PED_CAN_HEAD_IK(uint32_t p0, bool p1) { N::Invoke<0x41CB8191D48B2AB0, void>(p0, p1); } // C11C18092C5530DC D3B04476
  static void SET_PED_CAN_LEG_IK(uint32_t p0, bool p1) { N::Invoke<0x156892E8BA89A62, void>(p0, p1); } // 73518ECE2485412B 9955BC6F
  static void _0xAD665BBFE858E3B6(uint32_t p0, bool p1) { N::Invoke<0xAD665BBFE858E3B6, void>(p0, p1); } // F2B7106D37947CE0 8E5D4EAB
  static void _0x25BA464569724601(uint32_t p0, bool p1) { N::Invoke<0x25BA464569724601, void>(p0, p1); } // F5846EDB26A98A24 7B0040A8
  static void _0x6022FC5BEC6E12CF(uint32_t p0, bool p1) { N::Invoke<0x6022FC5BEC6E12CF, void>(p0, p1); } // 6647C5F6F5792496 0FDA62DE
  static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uint32_t p0, bool p1) { N::Invoke<0xABDE52C59BE3C61A, void>(p0, p1); } // EC4686EC06434678 584C5178
  static bool IS_PED_HEADTRACKING_PED(uint32_t p0, uint32_t p1) { return N::Invoke<0x59752F977A640536, bool>(p0, p1); } // 5CD3CB88A7F8850D 2A5DF721
  static bool IS_PED_HEADTRACKING_ENTITY(uint32_t p0, uint32_t p1) { return N::Invoke<0x6E7B0D66F3838319, bool>(p0, p1); } // 813A0A7C9D2E831F 233C9ACF
  static void SET_PED_PRIMARY_LOOKAT(uint32_t p0, uint32_t p1) { N::Invoke<0xBF9E49325B271DA6, void>(p0, p1); } // CD17B554996A8D9E 6DEF6F1C
  static void _0xBFA4F1C98BBAF857(uint32_t p0, uint32_t p1) { N::Invoke<0xBFA4F1C98BBAF857, void>(p0, p1); } // 78C4E9961DB3EB5B FC942D7C
  static void _0xE39D1FB72E0EE747(uint32_t p0, uint32_t p1) { N::Invoke<0xE39D1FB72E0EE747, void>(p0, p1); } // 82A3D6D9CC2CB8E3 89EEE07B
  static uint32_t _0xF7236044FB4D6579() { return N::Invoke<0xF7236044FB4D6579, uint32_t>(); } // A660FAF550EB37E5
  static void SET_PED_CONFIG_FLAG(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x7FEDD088E489CE41, void>(p0, p1, p2); } // 1913FE4CBF41C463 9CFBE10D
  static void SET_PED_RESET_FLAG(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xE131FC34DA8AD63F, void>(p0, p1, p2); } // C1E8A365BF3B29F2 CFF6FF66
  static bool GET_PED_CONFIG_FLAG(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xA7C37587D6D77CA4, bool>(p0, p1, p2); } // 7EE53118C892B513 ABE98267
  static bool GET_PED_RESET_FLAG(uint32_t p0, uint32_t p1) { return N::Invoke<0xF06F46B83EF10D97, bool>(p0, p1); } // AF9E59B1B1FBF2A0 2FC10D11
  static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0xA01476C01CE2E552, void>(p0, p1); } // 0BDDB8D9EC6BCF3C 2AB3670B
  static void SET_PED_CAN_EVASIVE_DIVE(uint32_t p0, bool p1) { N::Invoke<0xA0693E7A116283F, void>(p0, p1); } // 6B7A646C242A7059 542FEB4D
  static bool IS_PED_EVASIVE_DIVING(uint32_t p0, uint32_t *p1) { return N::Invoke<0xFEAC7116B533A693, bool>(p0, p1); } // 414641C26E105898 D82829DC
  static void SET_PED_SHOOTS_AT_COORD(uint32_t p0, float p1, float p2, float p3, bool p4) { N::Invoke<0x478A9894800A2A4F, void>(p0, p1, p2, p3, p4); } // 96A05E4FB321B1BA FD64EAE5
  static void SET_PED_MODEL_IS_SUPPRESSED(uint32_t p0, bool p1) { N::Invoke<0xF45D0029FDDF5279, void>(p0, p1); } // E163A4BCE4DE6F11 7820CA43
  static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { N::Invoke<0x28EE726AD82D5B4D, void>(); } // B47BD05FA66B40CF 5AD7DC55
  static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(uint32_t p0, bool p1) { N::Invoke<0xC45B64BD76E013C6, void>(p0, p1); } // 638C03B0F9878F57 6FD9A7CD
  static void SET_PED_GENERATES_DEAD_BODY_EVENTS(uint32_t p0, bool p1) { N::Invoke<0x99B5AF64F0734BCA, void>(p0, p1); } // 7FB17BA2E7DECA5B E9B97A2B
  static void _0xCEAA0D0206013959(uint32_t p0, bool p1) { N::Invoke<0xCEAA0D0206013959, void>(p0, p1); } // E43A13C9E4CCCBCF FF1F6AEB
  static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uint32_t p0, bool p1) { N::Invoke<0xA769A4326FC5BBEA, void>(p0, p1); } // DF993EE5E90ABA25 E9BD733A
  static void GIVE_PED_HELMET(uint32_t p0, bool p1, uint32_t p2, uint32_t p3) { N::Invoke<0x9661336BAB6FB9AA, void>(p0, p1, p2, p3); } // 54C7C4A94367717E 1862A461
  static void REMOVE_PED_HELMET(uint32_t p0, bool p1) { N::Invoke<0x150D92C99E954111, void>(p0, p1); } // A7B2458D0AD6DED8 2086B1F0
  static uint32_t _0x3F8C01C12516B042() { return N::Invoke<0x3F8C01C12516B042, uint32_t>(); } // 14590DDBEDB1EC85
  static void SET_PED_HELMET(uint32_t p0, bool p1) { N::Invoke<0x344C5D954883BFBF, void>(p0, p1); } // 560A43136EB58105 ED366E53
  static void SET_PED_HELMET_FLAG(uint32_t p0, uint32_t p1) { N::Invoke<0x55EEDFE096B45965, void>(p0, p1); } // C0E78D5C2CE3EB25 12677780
  static void SET_PED_HELMET_PROP_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0xC2472E939A526F64, void>(p0, p1); } // 26D83693ED99291C A316D13F
  static void SET_PED_HELMET_TEXTURE_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0x9C7105AA7B5C764E, void>(p0, p1); } // F1550C4BD22582E2 5F6C3328
  static bool IS_PED_WEARING_HELMET(uint32_t p0) { return N::Invoke<0xB2AFAFC648C71A2A, bool>(p0); } // F33BDFE19B309B19 0D680D49
  static void _0x53C8F2FAD3BDC2E6(uint32_t p0) { N::Invoke<0x53C8F2FAD3BDC2E6, void>(p0); } // 687C0B594907D2E8 24A1284E
  static uint32_t _0x8174C54E61FC0EB1(uint32_t p0) { return N::Invoke<0x8174C54E61FC0EB1, uint32_t>(p0); } // 451294E859ECC018 8A3A3116
  static uint32_t _0x7E9D7621887FA9EE(uint32_t p0) { return N::Invoke<0x7E9D7621887FA9EE, uint32_t>(p0); } // 9D728C1E12BF5518 74EB662D
  static bool _0x14AD7EF37FAF68CB(uint32_t p0) { return N::Invoke<0x14AD7EF37FAF68CB, bool>(p0); } // F2385935BFFD4D92 FFF149FE
  static void SET_PED_TO_LOAD_COVER(uint32_t p0, bool p1) { N::Invoke<0x30DE3DE96CA506BC, void>(p0, p1); } // 332B562EEDA62399 CF94BA97
  static void SET_PED_CAN_COWER_IN_COVER(uint32_t p0, bool p1) { N::Invoke<0x981E5A79D734B99F, void>(p0, p1); } // CB7553CDCEF4A735 5194658B
  static void SET_PED_CAN_PEEK_IN_COVER(uint32_t p0, bool p1) { N::Invoke<0x44C018342041591B, void>(p0, p1); } // C514825C507E3736 C1DAE216
  static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(uint32_t p0, uint32_t p1) { N::Invoke<0xBB6C26AC23A39E9E, void>(p0, p1); } // 94D94BF1A75AED3D 7C563CD2
  static void SET_PED_LEG_IK_MODE(uint32_t p0, uint32_t p1) { N::Invoke<0x53B8D6970EF7E585, void>(p0, p1); } // C396F5B86FF9FEBD FDDB042E
  static void SET_PED_MOTION_BLUR(uint32_t p0, bool p1) { N::Invoke<0x22D66BD7F7E54A4, void>(p0, p1); } // 0A986918B102B448 A211A128
  static void SET_PED_CAN_SWITCH_WEAPON(uint32_t p0, bool p1) { N::Invoke<0xFEC689D9249C8D61, void>(p0, p1); } // ED7F7EFE9FABF340 B5F8BA28
  static void SET_PED_DIES_INSTANTLY_IN_WATER(uint32_t p0, bool p1) { N::Invoke<0x9559F452E8108F99, void>(p0, p1); } // EEB64139BA29A7CF FE2554FC
  static void _0x1CDC566813C7A5CF(uint32_t p0, uint32_t p1) { N::Invoke<0x1CDC566813C7A5CF, void>(p0, p1); } // 1A330D297AAC6BC1 77BB7CB8
  static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(uint32_t p0) { N::Invoke<0xAAEE8324D74A907F, void>(p0); } // C158D28142A34608 4AC3421E
  static void SET_SCRIPTED_ANIM_SEAT_OFFSET(uint32_t p0, float p1) { N::Invoke<0xBEA801D480C6DB4E, void>(p0, p1); } // 5917BBA32D06C230 7CEFFA45
  static void SET_PED_COMBAT_MOVEMENT(uint32_t p0, uint32_t p1) { N::Invoke<0x48FFA098B5BE8ED0, void>(p0, p1); } // 4D9CA1009AFBD057 12E62F9E
  static uint32_t GET_PED_COMBAT_MOVEMENT(uint32_t p0) { return N::Invoke<0x29FB4F1FAB8CCA75, uint32_t>(p0); } // DEA92412FCAEB3F5 F3E7730E
  static void SET_PED_COMBAT_ABILITY(uint32_t p0, uint32_t p1) { N::Invoke<0xE53A759D522CA83, void>(p0, p1); } // C7622C0D36B2FDA8 6C23D329
  static void SET_PED_COMBAT_RANGE(uint32_t p0, uint32_t p1) { N::Invoke<0xD149F8A3FE6B4956, void>(p0, p1); } // 3C606747B23E497B 8818A959
  static uint32_t GET_PED_COMBAT_RANGE(uint32_t p0) { return N::Invoke<0x85E986CF0B24762A, uint32_t>(p0); } // F9D9F7F2DB8E2FA0 9B9B7163
  static void SET_PED_COMBAT_ATTRIBUTES(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x3A1E687904400847, void>(p0, p1, p2); } // 9F7794730795E019 81D64248
  static void SET_PED_TARGET_LOSS_RESPONSE(uint32_t p0, uint32_t p1) { N::Invoke<0x9B02246888A617A8, void>(p0, p1); } // 0703B9079823DA4A CFA613FF
  static bool _0xFB97925DF1115C38(uint32_t p0) { return N::Invoke<0xFB97925DF1115C38, bool>(p0); } // DCCA191DF9980FD7 139C0875
  static bool IS_PED_PERFORMING_STEALTH_KILL(uint32_t p0) { return N::Invoke<0x2F0EF8797B769C86, bool>(p0); } // FD4CCDBCC59941B7 9ADD7B21
  static bool _0x3E75ABD02CAA7AE(uint32_t p0) { return N::Invoke<0x3E75ABD02CAA7AE, bool>(p0); } // EBD0EDBA5BE957CF 9BE7C860
  static bool IS_PED_BEING_STEALTH_KILLED(uint32_t p0) { return N::Invoke<0x3165359F7146B860, bool>(p0); } // 863B23EFDE9C5DF2 D044C8AF
  static uint32_t _0x9BB6E0044E0E9BAF(uint32_t p0) { return N::Invoke<0x9BB6E0044E0E9BAF, uint32_t>(p0); } // 18A3E9EE1297FD39 AFEC26A4
  static bool WAS_PED_KILLED_BY_STEALTH(uint32_t p0) { return N::Invoke<0x99B3AF1B678B9666, bool>(p0); } // F9800AA1A771B000 2EA4B54E
  static bool WAS_PED_KILLED_BY_TAKEDOWN(uint32_t p0) { return N::Invoke<0xBBFFAF37EC36FA56, bool>(p0); } // 7F08E26039C7347C BDD3CE69
  static bool _0x45A82D99BB22AE9B(uint32_t p0) { return N::Invoke<0x45A82D99BB22AE9B, bool>(p0); } // 61767F73EACEED21 3993092B
  static void SET_PED_FLEE_ATTRIBUTES(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xB2B080B88A4144B7, void>(p0, p1, p2); } // 70A2D1137C8ED7C9 A717A875
  static void SET_PED_COWER_HASH(uint32_t p0, uint32_t *p1) { N::Invoke<0x391385F0544B6DAC, void>(p0, p1); } // A549131166868ED3 16F30DF4
  static void _0xC0470B17F0D88622(uint32_t p0, bool p1) { N::Invoke<0xC0470B17F0D88622, void>(p0, p1); } // 2016C603D6B8987C A6F2C057
  static void SET_PED_STEERS_AROUND_PEDS(uint32_t p0, bool p1) { N::Invoke<0xF35ADFAA525ADE7B, void>(p0, p1); } // 46F2193B3AD1D891 797CAE4F
  static void SET_PED_STEERS_AROUND_OBJECTS(uint32_t p0, bool p1) { N::Invoke<0xAC48E95BA8741956, void>(p0, p1); } // 1509C089ADC208BF 3BD9B0A6
  static void SET_PED_STEERS_AROUND_VEHICLES(uint32_t p0, bool p1) { N::Invoke<0xFA3AB51FEB96BD64, void>(p0, p1); } // EB6FB9D48DDE23EC 533C0651
  static void _0x463A4BE5AA0887B6(uint32_t p0, bool p1) { N::Invoke<0x463A4BE5AA0887B6, void>(p0, p1); } // A9B61A329BFDCBEA 2276DE0D
  static void _0xB1A5EE596FA70701(uint32_t p0) { N::Invoke<0xB1A5EE596FA70701, void>(p0); } // 570389D1C3DE3C6B 59C52BE6
  static void _0x3800D5410449A653(uint32_t p0, bool p1) { N::Invoke<0x3800D5410449A653, void>(p0, p1); } // 576594E8D64375E2 1D87DDC1
  static void _0x3FE396202873263B(uint32_t p0) { N::Invoke<0x3FE396202873263B, void>(p0); } // A52D5247A4227E14 B52BA5F5
  static bool IS_ANY_PED_NEAR_POINT(float p0, float p1, float p2, float p3) { return N::Invoke<0x98DDD45D8A6467D0, bool>(p0, p1, p2, p3); } // 083961498679DC9F FBD9B050
  static void _0x243553B40CC46CFE(uint32_t p0, bool p1, bool p2) { N::Invoke<0x243553B40CC46CFE, void>(p0, p1, p2); } // 2208438012482A1A 187B9070
  static bool _0x6A55FEB8D0A8F5D1(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x6A55FEB8D0A8F5D1, bool>(p0, p1, p2, p3, p4); } // FCF37A457CB96DC0 45037B9B
  static void _0xF4127D3DAB8D011F(uint32_t p0) { N::Invoke<0xF4127D3DAB8D011F, void>(p0); } // 7D7A2E43E74E2EB8 840D24D3
  static void GET_PED_FLOOD_INVINCIBILITY(uint32_t p0, bool p1) { N::Invoke<0xB215D95552289435, void>(p0, p1); } // 2BC338A7B21F4608 31C31DAA
  static uint32_t _0xC00BA07CF07267A8() { return N::Invoke<0xC00BA07CF07267A8, uint32_t>(); } // CD018C591F94CB43
  static void _0xCE7E74428DCEC0A(uint32_t p0, bool p1) { N::Invoke<0xCE7E74428DCEC0A, void>(p0, p1); } // 75BA1CB3B7D40CAF 9194DB71
  static bool IS_TRACKED_PED_VISIBLE(uint32_t p0) { return N::Invoke<0xC76769D28EAFDE03, bool>(p0); } // 91C8E617F64188AC 33248CC1
  static uint32_t _0xCBD425CCB7669AD5(uint32_t p0) { return N::Invoke<0xCBD425CCB7669AD5, uint32_t>(p0); } // 511F1A683387C7E2 5B1B70AA
  static bool IS_PED_TRACKED(uint32_t p0) { return N::Invoke<0x53C4582ECB7FC9E4, bool>(p0); } // 4C5E1F087CD10BB7 7EB613D9
  static bool HAS_PED_RECEIVED_EVENT(uint32_t p0, uint32_t p1) { return N::Invoke<0x22E454ACC745B58C, bool>(p0, p1); } // 8507BCB710FA6DC0 ECD73DB0
  static bool _0x2A71687AF0AE817B(uint32_t p0, uint32_t p1) { return N::Invoke<0x2A71687AF0AE817B, bool>(p0, p1); } // 6CD5A433374D4CFB 74A0F291
  static uint32_t _0x85A39F86BFEAB388() { return N::Invoke<0x85A39F86BFEAB388, uint32_t>(); } // 9C6A6C19B6C0C496
  static uint32_t GET_PED_BONE_INDEX(uint32_t p0, uint32_t p1) { return N::Invoke<0xA8918EDB277FC51C, uint32_t>(p0, p1); } // 3F428D08BE5AAE31 259C6BA2
  static uint32_t GET_PED_RAGDOLL_BONE_INDEX(uint32_t p0, uint32_t p1) { return N::Invoke<0xEC6153B3A7DF8F5B, uint32_t>(p0, p1); } // 2057EF813397A772 849F0716
  static void SET_PED_ENVEFF_SCALE(uint32_t p0, float p1) { N::Invoke<0x7D8723023881CD95, void>(p0, p1); } // BF29516833893561 FC1CFC27
  static float GET_PED_ENVEFF_SCALE(uint32_t p0) { return N::Invoke<0xBC165599D37CF7FE, float>(p0); } // 9C14D30395A51A3C A3421E39
  static void SET_ENABLE_PED_ENVEFF_SCALE(uint32_t p0, bool p1) { N::Invoke<0x5A2866F66A9B4EBC, void>(p0, p1); } // D2C5AA0C0E8D0F1E C70F4A84
  static void _0xAFB0E8DD7A5F1A2C(uint32_t p0, float p1) { N::Invoke<0xAFB0E8DD7A5F1A2C, void>(p0, p1); } // 110F526AB784111F 3B882533
  static void _0x89F8AC733C8EDA5C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x89F8AC733C8EDA5C, void>(p0, p1, p2, p3); } // D69411AA0CEBF9E9 87A0C174
  static void _0x86F59F19D512507F(uint32_t p0, uint32_t p1) { N::Invoke<0x86F59F19D512507F, void>(p0, p1); } // 1216E0BFA72CC703 7BD26837
  static void _0xE8CDA461A10C8848(uint32_t p0, bool p1) { N::Invoke<0xE8CDA461A10C8848, void>(p0, p1); } // 2B5AA717A181FB4C 98E29ED0
  static uint32_t _0x555543062B749A50() { return N::Invoke<0x555543062B749A50, uint32_t>(); } // B8B52E498014F5B0
  static uint32_t CREATE_SYNCHRONIZED_SCENE(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return N::Invoke<0x1BEDF9ACAEAB15F8, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 8C18E0F9080ADD73 FFDDF8FA
  static uint32_t _0x650BCF458DE81EC2(float p0, float p1, float p2, float p3, uint32_t p4) { return N::Invoke<0x650BCF458DE81EC2, uint32_t>(p0, p1, p2, p3, p4); } // 62EC273D00187DCA F3876894
  static uint32_t IS_SYNCHRONIZED_SCENE_RUNNING(uint32_t p0) { return N::Invoke<0x1955A5B9B65FEEBD, uint32_t>(p0); } // 25D39B935A038A26 57A282F1
  static void SET_SYNCHRONIZED_SCENE_ORIGIN(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7) { N::Invoke<0x37925BB9CC5A36FA, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 6ACF6B7225801CD7 2EC2A0B2
  static void SET_SYNCHRONIZED_SCENE_PHASE(uint32_t p0, float p1) { N::Invoke<0x39ABDEE52B08CBD2, void>(p0, p1); } // 734292F4F0ABF6D0 F5AB0D98
  static float GET_SYNCHRONIZED_SCENE_PHASE(uint32_t p0) { return N::Invoke<0x6385FE4ECBDF05D2, float>(p0); } // E4A310B1D7FA73CC B0B2C852
  static void SET_SYNCHRONIZED_SCENE_RATE(uint32_t p0, float p1) { N::Invoke<0x5F6A1BCECF1CEED6, void>(p0, p1); } // B6C49F8A5E295A5D F10112FD
  static float GET_SYNCHRONIZED_SCENE_RATE(uint32_t p0) { return N::Invoke<0x8EACF10787040544, float>(p0); } // D80932D577274D40 89365F0D
  static void SET_SYNCHRONIZED_SCENE_LOOPED(uint32_t p0, bool p1) { N::Invoke<0x15B365C4645F79B8, void>(p0, p1); } // D9A897A4C6C2974F 32ED9F82
  static bool IS_SYNCHRONIZED_SCENE_LOOPED(uint32_t p0) { return N::Invoke<0xD8DEB279D8DF665F, bool>(p0); } // 62522002E0C391BA 47D87A84
  static void _0x36069312B76436F6(uint32_t p0, bool p1) { N::Invoke<0x36069312B76436F6, void>(p0, p1); } // 394B9CD12435C981 2DE48DA1
  static bool _0x606A9207A4D823D3(uint32_t p0) { return N::Invoke<0x606A9207A4D823D3, bool>(p0); } // 7F2F4F13AC5257EF 72CF2514
  static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xBC7DDBE5DB276E21, void>(p0, p1, p2); } // 272E4723B56A3B96 E9BA6189
  static void DETACH_SYNCHRONIZED_SCENE(uint32_t p0) { N::Invoke<0xDA08F511A13A14A2, void>(p0); } // 6D38F1F04CBB37EA 52A1CAB2
  static void _0xCA8E791F0FF3D9CE(uint32_t p0) { N::Invoke<0xCA8E791F0FF3D9CE, void>(p0); } // CD9CC7E200A52A6F BF7F9035
  static bool FORCE_PED_MOTION_STATE(uint32_t p0, uint32_t p1, bool p2, uint32_t p3, bool p4) { return N::Invoke<0x832DBDBEA29906F5, bool>(p0, p1, p2, p3, p4); } // F28965D04F570DCA 164DDEFF
  static uint32_t _0x84A764CF4854B4D5() { return N::Invoke<0x84A764CF4854B4D5, uint32_t>(); } // F60165E1D2C5370B
  static void SET_PED_MAX_MOVE_BLEND_RATIO(uint32_t p0, float p1) { N::Invoke<0xD156A7AA30AC555A, void>(p0, p1); } // 433083750C5E064A EAD0269A
  static void SET_PED_MIN_MOVE_BLEND_RATIO(uint32_t p0, float p1) { N::Invoke<0x46A9B5764CAA654E, void>(p0, p1); } // 01A898D26E2333DD 383EC364
  static void SET_PED_MOVE_RATE_OVERRIDE(uint32_t p0, float p1) { N::Invoke<0x8500A524C6ADFD34, void>(p0, p1); } // 085BF80FA50A39D1 900008C6
  static bool _0x9FD49D841955E633(uint32_t p0, uint32_t p1) { return N::Invoke<0x9FD49D841955E633, bool>(p0, p1); } // 46B05BCAE43856B0 79543043
  static uint32_t GET_PED_NEARBY_VEHICLES(uint32_t p0, uint32_t *p1) { return N::Invoke<0x44110552833E1A96, uint32_t>(p0, p1); } // CFF869CBFA210D82 CB716F68
  static uint32_t GET_PED_NEARBY_PEDS(uint32_t p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0xC92E7719639C64A, uint32_t>(p0, p1, p2); } // 23F8F5FC7E8C4A6B 4D3325F4
  static bool _0x276AAF646BAB792B(uint32_t p0) { return N::Invoke<0x276AAF646BAB792B, bool>(p0); } // 7350823473013C02 F9FB4B71
  static bool IS_PED_USING_ACTION_MODE(uint32_t p0) { return N::Invoke<0x7758D769A79898D4, bool>(p0); } // 00E73468D085F745 5AE7EDA2
  static void SET_PED_USING_ACTION_MODE(uint32_t p0, bool p1, uint32_t p2, uint32_t *p3) { N::Invoke<0x6C2B8C9CB6B5CDE4, void>(p0, p1, p2, p3); } // D75ACCF5E0FB5367 8802F696
  static uint32_t _0x255266F58793DE33() { return N::Invoke<0x255266F58793DE33, uint32_t>(); } // 781DE8FA214E87D2
  static void SET_PED_CAPSULE(uint32_t p0, float p1) { N::Invoke<0xE496A9A04A9A0A0E, void>(p0, p1); } // 364DF566EC833DE2 B153E1B9
  static uint32_t REGISTER_PEDHEADSHOT(uint32_t p0) { return N::Invoke<0x10C39784940B6317, uint32_t>(p0); } // 4462658788425076 FFE2667B
  static uint32_t _0x7B4140130BB1BA55(uint32_t p0) { return N::Invoke<0x7B4140130BB1BA55, uint32_t>(p0); } // 953563CE563143AF 4DD03628
  static void UNREGISTER_PEDHEADSHOT(uint32_t p0) { N::Invoke<0xEE99D3729480B00B, void>(p0); } // 96B1361D9B24C2FF 0879AE45
  static bool IS_PEDHEADSHOT_VALID(uint32_t p0) { return N::Invoke<0x1132CE7A24BDADC2, bool>(p0); } // A0A9668F158129A2 0B1080C4
  static bool IS_PEDHEADSHOT_READY(uint32_t p0) { return N::Invoke<0xDCBCBE55C7A8D357, bool>(p0); } // 7085228842B13A67 761CD02E
  static uint32_t GET_PEDHEADSHOT_TXD_STRING(uint32_t p0) { return N::Invoke<0x47A5C6F75ADC0C8A, uint32_t>(p0); } // DB4EACD4AD0A5D6B 76D28E96
  static bool _0x52B8D71F9D0DC811(uint32_t p0) { return N::Invoke<0x52B8D71F9D0DC811, bool>(p0); } // F0DAEF2F545BEE25 10F2C023
  static void _0x5D770B76D5E85FA0(uint32_t p0) { N::Invoke<0x5D770B76D5E85FA0, void>(p0); } // 5D517B27CF6ECD04 0DBB2FA7
  static uint32_t _0x1AC18C15711152BA() { return N::Invoke<0x1AC18C15711152BA, uint32_t>(); } // EBB376779A760AA8 810158F8
  static uint32_t _0x386F22AE2EC830E6() { return N::Invoke<0x386F22AE2EC830E6, uint32_t>(); } // 876928DDDFCCC9CD 05023F8F
  static uint32_t _0x415098FED60FB46() { return N::Invoke<0x415098FED60FB46, uint32_t>(); } // E8A169E666CBC541 AA39FD6C
  static void _0xED12442D1BEB118A(uint32_t p0, uint32_t p1) { N::Invoke<0xED12442D1BEB118A, void>(p0, p1); } // C1F6EBF9A3D55538 EF9142DB
  static void _0xF16562EBE23066E5(uint32_t p0) { N::Invoke<0xF16562EBE23066E5, void>(p0); } // 600048C60D5C2C51 0688DE64
  static void _0x6C474EE15021D6F0(float p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7) { N::Invoke<0x6C474EE15021D6F0, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2DF9038C90AD5264 909A1D76
  static void _0x193E2CDD2E26C6B3(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, float p8, uint32_t p9) { N::Invoke<0x193E2CDD2E26C6B3, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // B2AFF10216DEFA2F 4AAD0ECB
  static void _0xEE12B0307228F6E0() { N::Invoke<0xEE12B0307228F6E0, void>(); } // FEE4A5459472A9F8 492C9E46
  static bool _0x50F2384162070F3A() { return N::Invoke<0x50F2384162070F3A, bool>(); } // 3C67506996001F5E 814A28F4
  static bool _0xABFE24513C5D2AF9() { return N::Invoke<0xABFE24513C5D2AF9, bool>(); } // A586FBEB32A53DBB 0B60D2BA
  static bool _0x4B9D86C8232D1110() { return N::Invoke<0x4B9D86C8232D1110, bool>(); } // F445DE8DA80A1792 6B83ABDF
  static uint32_t _0x5F4F4254E34C9F57() { return N::Invoke<0x5F4F4254E34C9F57, uint32_t>(); } // A635C11B8C44AFC2 F46B4DC8
  static void _0xD02DED3660889F08(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0xD02DED3660889F08, void>(p0, p1, p2, p3); } // 280C7E3AC7F56E90 36A4AC65
  static void _0xF4A89B0F7B78383E(uint32_t p0, uint32_t *p1) { N::Invoke<0xF4A89B0F7B78383E, void>(p0, p1); } // B782F8238512BAD5 BA699DDF
  static void SET_IK_TARGET(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x8D97A58E67A00C0C, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // C32779C16FCEECD9 6FE5218C
  static void _0x18C6DDCAB6C5608E(uint32_t p0) { N::Invoke<0x18C6DDCAB6C5608E, void>(p0); } // ED3C76ADFA6D07C4 FB4000DC
  static void REQUEST_ACTION_MODE_ASSET(uint32_t *p0) { N::Invoke<0xFD4EA8E24903BE82, void>(p0); } // 290E2780BB7AA598 572BA553
  static bool HAS_ACTION_MODE_ASSET_LOADED(uint32_t *p0) { return N::Invoke<0xF3F8EABCC34FE806, bool>(p0); } // E4B5F4BF2CB24E65 F7EB2BF1
  static void REMOVE_ACTION_MODE_ASSET(uint32_t *p0) { N::Invoke<0xC65F92A82E62133A, void>(p0); } // 13E940F88470FA51 3F480F92
  static void REQUEST_STEALTH_MODE_ASSET(uint32_t *p0) { N::Invoke<0xA4978532792895C2, void>(p0); } // 2A0A62FCDEE16D4F 280A004A
  static bool HAS_STEALTH_MODE_ASSET_LOADED(uint32_t *p0) { return N::Invoke<0xD21D3B976B0BF82, bool>(p0); } // E977FC5B08AF3441 39245667
  static void REMOVE_STEALTH_MODE_ASSET(uint32_t *p0) { N::Invoke<0xC61BCDAB7118911F, void>(p0); } // 9219857D21F0E842 8C0B243A
  static void SET_PED_LOD_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0x75CB839D13ADADEE, void>(p0, p1); } // DC2C5C242AAC342B 1D2B5C70
  static void _0xBAEDF75CCDA1BEB8(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0xBAEDF75CCDA1BEB8, void>(p0, p1, p2); } // E861D0B05C7662B8 2F9550C2
  static void _0x5CA3C0D266164A4D(uint32_t p0, bool p1) { N::Invoke<0x5CA3C0D266164A4D, void>(p0, p1); } // 129466ED55140F8D 37DBC2AD
  static void _0x80B1CF93DD91E3E8(uint32_t p0, bool p1, uint32_t p2, uint32_t p3) { N::Invoke<0x80B1CF93DD91E3E8, void>(p0, p1, p2, p3); } // CB968B53FC7F916D C0F1BC91
  static bool _0x7714F26C0D3E05E5(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x7714F26C0D3E05E5, bool>(p0, p1, p2, p3, p4); } // 68772DB2B2526F9F 1A464167
  static bool _0x072A7C1A0E950F304(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x72A7C1A0E950F304, bool>(p0, p1, p2, p3, p4, p5); } // 06087579E7AA85A9 D0567D41
  static void _0xA9A9EC00EAE64B1A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xA9A9EC00EAE64B1A, void>(p0, p1, p2, p3, p4); } // D8C3BE3EE94CAF2D 4BBE5E2C
  static void _0x2760FA247569D426(uint32_t p0) { N::Invoke<0x2760FA247569D426, void>(p0); } // D33DAA36272177C4 A89A53F2
  static uint32_t _0x5BA603BCBD63290E() { return N::Invoke<0x5BA603BCBD63290E, uint32_t>(); } // 83A169EABCDB10A2
  static uint32_t _0x8CC867BE28661C52() { return N::Invoke<0x8CC867BE28661C52, uint32_t>(); } // 288DF530C92DAD6F
}

namespace VEHICLE
{
  static uint32_t CREATE_VEHICLE(uint32_t p0, float p1, float p2, float p3, float p4, bool p5, bool p6) { return N::Invoke<0x546974B676313326, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // AF35D0D2583051B0 DD75460A
  static void DELETE_VEHICLE(uint32_t *p0) { N::Invoke<0x10EA498723DC5A09, void>(p0); } // EA386986E786A54F 9803AF60
  static void _0x89BB944E8FF3CF6C(uint32_t p0, bool p1) { N::Invoke<0x89BB944E8FF3CF6C, void>(p0, p1); } // 7D6F9A3EF26136A0 BB54ECCA
  static void _0xAFFA64558CC670AB(uint32_t p0, bool p1) { N::Invoke<0xAFFA64558CC670AB, void>(p0, p1); } // 5D14D4154BFE7B2C 8BAAC437
  static uint32_t _0xBC382C484070365(uint32_t p0) { return N::Invoke<0xBC382C484070365, uint32_t>(p0); } // E6B0E8CFC3633BF0 FBDE9FD8
  static bool IS_VEHICLE_MODEL(uint32_t p0, uint32_t p1) { return N::Invoke<0x40923C25A763E8E8, bool>(p0, p1); } // 423E8DE37D934D89 013B10B6
  static bool DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(uint32_t p0) { return N::Invoke<0x629363FE562ED409, bool>(p0); } // F6086BC836400876 F6BDDA30
  static uint32_t CREATE_SCRIPT_VEHICLE_GENERATOR(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, bool p11, uint32_t p12, uint32_t p13, bool p14, bool p15, uint32_t p16) { return N::Invoke<0xE58B057B66800D22, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 9DEF883114668116 25A9A261
  static void DELETE_SCRIPT_VEHICLE_GENERATOR(uint32_t p0) { N::Invoke<0x1A07CC1CAA76FAA8, void>(p0); } // 22102C9ABFCF125D E4328E3F
  static void SET_SCRIPT_VEHICLE_GENERATOR(uint32_t p0, uint32_t p1) { N::Invoke<0x102246777F5F994C, void>(p0, p1); } // D9D620E0AC6DC4B0 40D73747
  static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0xC198E0954F22A27D, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // C12321827687FE4D B4E0E69A
  static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { N::Invoke<0x56F23AA29DA30DB2, void>(); } // 34AD89078831A4BC AB1FDD76
  static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(bool p0) { N::Invoke<0x6D1F69C2D6F53A63, void>(p0); } // 608207E7A8FB787C 87F767F2
  static void _0x22961CD4C38166A(float p0, float p1, float p2, float p3) { N::Invoke<0x22961CD4C38166A, void>(p0, p1, p2, p3); } // 9A75585FB2E54FAD 935A95DA
  static void _0x0E50BD25931C53B3F() { N::Invoke<0xE50BD25931C53B3F, void>(); } // 0A436B8643716D14 6C73E45A
  static bool SET_VEHICLE_ON_GROUND_PROPERLY(uint32_t p0) { return N::Invoke<0xD90C30D269B19096, bool>(p0); } // 49733E92263139D1 E14FDBA6
  static uint32_t SET_ALL_VEHICLES_SPAWN(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x8BE5B68DB02E00B2, uint32_t>(p0, p1, p2, p3); } // E023E8AC4EF7C117 A0909ADB
  static bool IS_VEHICLE_STUCK_ON_ROOF(uint32_t p0) { return N::Invoke<0xFE5C9C2629E1907A, bool>(p0); } // B497F06B288DCFDF 18D07C6C
  static void ADD_VEHICLE_UPSIDEDOWN_CHECK(uint32_t p0) { N::Invoke<0x6C5479F57AAC2554, void>(p0); } // B72E26D81006005B 3A13D384
  static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uint32_t p0) { N::Invoke<0xCD79646FD263CD43, void>(p0); } // C53EB42A499A7E90 F390BA1B
  static bool IS_VEHICLE_STOPPED(uint32_t p0) { return N::Invoke<0x2ACEA6F88B3AFFB0, bool>(p0); } // 5721B434AD84D57A 655F072C
  static uint32_t GET_VEHICLE_NUMBER_OF_PASSENGERS(uint32_t p0) { return N::Invoke<0xFD6DBE4BBF51CA66, uint32_t>(p0); } // 24CB2137731FFE89 1EF20849
  static uint32_t GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uint32_t p0) { return N::Invoke<0xF7D9833F1E3C722B, uint32_t>(p0); } // A7C4F2C6E744A550 0A2FC08C
  static uint32_t _0x3D27599863364482(uint32_t p0) { return N::Invoke<0x3D27599863364482, uint32_t>(p0); } // 2AD93716F184EDA4 838F7BF7
  static bool _0xF45D390F38484A3(uint32_t p0, uint32_t p1) { return N::Invoke<0xF45D390F38484A3, bool>(p0, p1); } // F7F203E31F96F6A1 769E5CF2
  static uint32_t _0x459616FAE9B012C2() { return N::Invoke<0x459616FAE9B012C2, uint32_t>(); } // E33FFA906CE74880
  static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { N::Invoke<0x6471EB4B59AE203B, void>(p0); } // 245A6883D966D537 F4187E51
  static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { N::Invoke<0x12C634752EADE76, void>(p0); } // B3B3359379FE77D3 543F712B
  static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float p0) { N::Invoke<0x880A21F1BF566643, void>(p0); } // EAE6DCC7EEE3DB1D DD46CEBE
  static void _0x488227EA185D3160(bool p0) { N::Invoke<0x488227EA185D3160, void>(p0); } // D4B8E3D1917BC86B 09462665
  static void _0x936E7369FAF0B7ED(float p0) { N::Invoke<0x936E7369FAF0B7ED, void>(p0); } // 90B6DA738A9A25DA DAE2A2BE
  static void SET_FAR_DRAW_VEHICLES(bool p0) { N::Invoke<0x5CC9622A821160DC, void>(p0); } // 26324F33423F3CC3 9F019C49
  static void SET_NUMBER_OF_PARKED_VEHICLES(uint32_t p0) { N::Invoke<0x8CFF0DBCEF15EE73, void>(p0); } // CAA15F13EBD417FF 206A58E8
  static void SET_VEHICLE_DOORS_LOCKED(uint32_t p0, uint32_t p1) { N::Invoke<0xCDC1FD4387DA32EC, void>(p0, p1); } // B664292EAECF7FA6 4CDD35D0
  static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x1B76E3D481FAFA52, void>(p0, p1, p2); } // BE70724027F85BCD D61D182D
  static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(uint32_t p0, bool p1) { N::Invoke<0x5286A512BB71BC8D, void>(p0, p1); } // D8050E0EB60CF274 C54156A9
  static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x981FC4F2EAC2B7D0, void>(p0, p1, p2); } // 517AAF684BB50CD1 49829236
  static bool GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(uint32_t p0, uint32_t p1) { return N::Invoke<0x1802268D75357896, bool>(p0, p1); } // F6AF6CB341349015 1DC50247
  static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uint32_t p0, bool p1) { N::Invoke<0xB837077D79A8A5F0, void>(p0, p1); } // A2F80B8D040727CC 891BA8A4
  static void _0x52F60AF2C0E3294F(uint32_t p0, bool p1) { N::Invoke<0x52F60AF2C0E3294F, void>(p0, p1); } // 9737A37136F07E75 E4EF6514
  static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x73BCBE4364E252F6, void>(p0, p1, p2); } // B81F6D4A8F5EEBA8 4F85E783
  static void EXPLODE_VEHICLE(uint32_t p0, bool p1, bool p2) { N::Invoke<0x9CC0A0DFBB83918C, void>(p0, p1, p2); } // BA71116ADF5B514C BEDEACEB
  static void SET_VEHICLE_OUT_OF_CONTROL(uint32_t p0, bool p1, bool p2) { N::Invoke<0x66383760D0528C04, void>(p0, p1, p2); } // F19D095E42D430CC 3764D734
  static void SET_VEHICLE_TIMED_EXPLOSION(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x2DE5EB12E48E340C, void>(p0, p1, p2); } // 2E0A74E1002380B1 DB8CB8E2
  static void _0x286B6A8C189C0301(uint32_t p0) { N::Invoke<0x286B6A8C189C0301, void>(p0); } // 99AD4CCCB128CBC9 811373DE
  static bool _0x66F794FF7EBD3C84() { return N::Invoke<0x66F794FF7EBD3C84, bool>(); } // 6ADAABD3068C5235 A4E69134
  static void _0xB42D5E1B81AC8C17() { N::Invoke<0xB42D5E1B81AC8C17, void>(); } // EF49CF0270307CBE 65255524
  static bool _0x3739CEE6C015ACB5(uint32_t p0) { return N::Invoke<0x3739CEE6C015ACB5, bool>(p0); } // AE3FEE8709B39DCB E39DAF36
  static void SET_TAXI_LIGHTS(uint32_t p0, bool p1) { N::Invoke<0x51573EF310AEF180, void>(p0, p1); } // 598803E85E8448D9 68639D85
  static bool IS_TAXI_LIGHT_ON(uint32_t p0) { return N::Invoke<0x44924228199BBC23, bool>(p0); } // 7504C0F113AB50FC 6FC4924A
  static bool IS_VEHICLE_IN_GARAGE_AREA(uint32_t *p0, uint32_t p1) { return N::Invoke<0xA5A6C7F14D300E6C, bool>(p0, p1); } // CEE4490CD57BB3C2 A90EC257
  static void SET_VEHICLE_COLOURS(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x2972E055244638AD, void>(p0, p1, p2); } // 4F1D4BE3A7F24601 57F24253
  static void SET_VEHICLE_FULLBEAM(uint32_t p0, bool p1) { N::Invoke<0x4587367331B50718, void>(p0, p1); } // 8B7FD87F0DDB421E 9C49CC15
  static void STEER_UNLOCK_BIAS(uint32_t p0, bool p1) { N::Invoke<0x32614B2EF1227D60, void>(p0, p1); } // 07116E24E9D1929D A59E3DCD
  static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x86140F88A4D4237B, void>(p0, p1, p2, p3); } // 7141766F91D15BEA 8DF9F9BC
  static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x36299CCFE91E283, void>(p0, p1, p2, p3); } // B64CF2CCA9D95F52 1C2B9FEF
  static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(uint32_t p0) { N::Invoke<0x47486E10E526890E, void>(p0); } // 55E1D2758F34E437 51E1E33D
  static bool _DOES_VEHICLE_HAVE_SECONDARY_COLOUR(uint32_t p0) { return N::Invoke<0xEC9139D75F13D0D3, bool>(p0); } // F095C0405307B21B D7EC8760
  static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xF7A065BFB9BF72C6, void>(p0, p1, p2, p3); } // 36CED73BFED89754 9D77259E
  static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x5A28251CF7DB43BF, void>(p0, p1, p2, p3); } // 8389CD56CA8072DC 3FF247A2
  static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(uint32_t p0) { N::Invoke<0xCBF5684487475533, void>(p0); } // 5FFBDEEC3E8E2009 7CE00B29
  static bool _0x4FD71373746F04E1(uint32_t p0) { return N::Invoke<0x4FD71373746F04E1, bool>(p0); } // 910A32E7AAD2656C 288AD228
  static void _0xCBB1969A60D77603(uint32_t p0, float p1) { N::Invoke<0xCBB1969A60D77603, void>(p0, p1); } // 3AFDC536C3D01674 8332730C
  static float _0x98F1308BE40F6537(uint32_t p0) { return N::Invoke<0x98F1308BE40F6537, float>(p0); } // A82819CAC9C4C403 D5F1EEE1
  static void SET_CAN_RESPRAY_VEHICLE(uint32_t p0, bool p1) { N::Invoke<0x66C2903A9B8B3BCE, void>(p0, p1); } // 52BBA29D5EC69356 37677590
  static void _0xE97969830227DD25(uint32_t p0, bool p1) { N::Invoke<0xE97969830227DD25, void>(p0, p1); } // 33506883545AC0DF 54E9EE75
  static void _0x4A077D4FD31F5ED(uint32_t p0, bool p1, float p2, float p3, float p4) { N::Invoke<0x4A077D4FD31F5ED, void>(p0, p1, p2, p3, p4); } // C59872A5134879C7 4A46E814
  static void SET_BOAT_ANCHOR(uint32_t p0, bool p1) { N::Invoke<0xBDE8781B24AE060, void>(p0, p1); } // 75DBEC174AEEAD10 A3906284
  static uint32_t _0x8BEA7C6B219C6B95() { return N::Invoke<0x8BEA7C6B219C6B95, uint32_t>(); } // 26C10ECBDA5D043B
  static void _0x2B15B2FCEF2D8E68(uint32_t p0, bool p1) { N::Invoke<0x2B15B2FCEF2D8E68, void>(p0, p1); } // E3EBAAE484798530 0ED84792
  static void _0xCCCDE957EF314FDE(uint32_t p0, bool p1) { N::Invoke<0xCCCDE957EF314FDE, void>(p0, p1); } // B28B1FE5BFADD7F5 A739012A
  static void _0xAC3B1E7088D6FA43(uint32_t p0, float p1) { N::Invoke<0xAC3B1E7088D6FA43, void>(p0, p1); } // E842A9398079BD82 66FA450C
  static void _0xEA6E1422269A2218(uint32_t p0, bool p1) { N::Invoke<0xEA6E1422269A2218, void>(p0, p1); } // 8F719973E1445BA2 35614622
  static void SET_VEHICLE_SIREN(uint32_t p0, bool p1) { N::Invoke<0xD625A1F3890F76DC, void>(p0, p1); } // F4924635A19EB37D 4AC1EFC7
  static bool IS_VEHICLE_SIREN_ON(uint32_t p0) { return N::Invoke<0x3E4CDDFA2D064429, bool>(p0); } // 4C9BF537BE2634B2 25EB5873
  static uint32_t _0xA7420BE797BFBA72() { return N::Invoke<0xA7420BE797BFBA72, uint32_t>(); } // B5CC40FBCB586380
  static void SET_VEHICLE_STRONG(uint32_t p0, bool p1) { N::Invoke<0xA175CED361F78A04, void>(p0, p1); } // 3E8C8727991A8A0B C758D19F
  static void REMOVE_VEHICLE_STUCK_CHECK(uint32_t p0) { N::Invoke<0x8190B3B1300AE293, void>(p0); } // 8386BFB614D06749 81594917
  static void GET_VEHICLE_COLOURS(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x1603516D6065B48F, void>(p0, p1, p2); } // A19435F193E081AC 40D82D88
  static bool IS_VEHICLE_SEAT_FREE(uint32_t p0, uint32_t p1) { return N::Invoke<0xC51FBEBD87CFD69C, bool>(p0, p1); } // 22AC59A870E6A669 DAF42B02
  static uint32_t GET_PED_IN_VEHICLE_SEAT(uint32_t p0, uint32_t p1) { return N::Invoke<0xE634CB9EE7094537, uint32_t>(p0, p1); } // BB40DD2270B65366 388FDE9A
  static uint32_t _0xF417BF3AE09AE69A(uint32_t p0, uint32_t p1) { return N::Invoke<0xF417BF3AE09AE69A, uint32_t>(p0, p1); } // 83F969AA1EE2A664 F7C6792D
  static bool GET_VEHICLE_LIGHTS_STATE(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x958961ACDD8EF23C, bool>(p0, p1, p2); } // B91B4C20085BD12F 7C278621
  static bool IS_VEHICLE_TYRE_BURST(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xEB461363EE450DCA, bool>(p0, p1, p2); } // BA291848A0815CA9 48C80210
  static void SET_VEHICLE_FORWARD_SPEED(uint32_t p0, float p1) { N::Invoke<0xADE31BE382A60FA4, void>(p0, p1); } // AB54A438726D25D5 69880D14
  static void _0x7674FE6F22323056(uint32_t p0, float p1, uint32_t p2, bool p3) { N::Invoke<0x7674FE6F22323056, void>(p0, p1, p2, p3); } // 260BE8F09E326A20 CBC7D3C8
  static void _0x86D787D1787528E4(uint32_t p0, float p1) { N::Invoke<0x86D787D1787528E4, void>(p0, p1); } // 37EBBF3117BD6A25 943A6CFC
  static bool SET_PED_ENABLED_BIKE_RINGTONE(uint32_t p0, uint32_t p1) { return N::Invoke<0xD93B67903E37DF9A, bool>(p0, p1); } // 57715966069157AD 7FB25568
  static bool _0x3D84FFE098363B73(uint32_t p0) { return N::Invoke<0x3D84FFE098363B73, bool>(p0); } // 62CA17B74C435651 593143B9
  static uint32_t _0x3C0F98076B6EA8C7(uint32_t p0) { return N::Invoke<0x3C0F98076B6EA8C7, uint32_t>(p0); } // 375E7FC44F21C8AB 70DD5E25
  static bool _0x706E9A09986A93EE(uint32_t p0, uint32_t p1) { return N::Invoke<0x706E9A09986A93EE, bool>(p0, p1); } // 89D630CF5EA96D23 FBF5536A
  static void _0xE271210F335D049(uint32_t p0, uint32_t p1) { N::Invoke<0xE271210F335D049, void>(p0, p1); } // 6A98C2ECF57FA5D4 20AB5783
  static void _0x3F72ED3A3E1F435C(uint32_t p0) { N::Invoke<0x3F72ED3A3E1F435C, void>(p0); } // 7C0043FDFF6436BC 0F11D01F
  static void _0xD2D9CF38FCB7BA95(uint32_t p0, bool p1) { N::Invoke<0xD2D9CF38FCB7BA95, void>(p0, p1); } // 8AA9180DE2FEDD45 AE040377
  static void _0x07783E403C4EF50FD(uint32_t p0, bool p1) { N::Invoke<0x7783E403C4EF50FD, void>(p0, p1); } // 0A6A279F3AA4FD70 4C0E4031
  static bool _0x271DC0F49A6DA8A0(uint32_t p0) { return N::Invoke<0x271DC0F49A6DA8A0, bool>(p0); } // 634148744F385576 6346B7CC
  static void _0xD7525ABFEB8CEC46(uint32_t p0, float p1) { N::Invoke<0xD7525ABFEB8CEC46, void>(p0, p1); } // E6F13851780394DA CCB41A55
  static void SET_VEHICLE_TYRE_BURST(uint32_t p0, uint32_t p1, bool p2, float p3) { N::Invoke<0x9E55A68D6F41E517, void>(p0, p1, p2, p3); } // EC6A202EE4960385 89D28068
  static void SET_VEHICLE_DOORS_SHUT(uint32_t p0, bool p1) { N::Invoke<0x6F4AC9499C730CF0, void>(p0, p1); } // 781B3D62BB013EF5 BB1FF6E7
  static void SET_VEHICLE_TYRES_CAN_BURST(uint32_t p0, bool p1) { N::Invoke<0x668C5F7E7EE6BF09, void>(p0, p1); } // EB9DC3C7D8596C46 A198DB54
  static bool GET_VEHICLE_TYRES_CAN_BURST(uint32_t p0) { return N::Invoke<0x4FA9345A8F43BDAC, bool>(p0); } // 678B9BB8C3F58FEB 4D76CD2F
  static void SET_VEHICLE_WHEELS_CAN_BREAK(uint32_t p0, bool p1) { N::Invoke<0x75E0D55C963CD062, void>(p0, p1); } // 29B18B4FD460CA8F 829ED654
  static void SET_VEHICLE_DOOR_OPEN(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0xE25E46198A369207, void>(p0, p1, p2, p3); } // 7C65DAC73C35C862 BB75D38B
  static void REMOVE_VEHICLE_WINDOW(uint32_t p0, uint32_t p1) { N::Invoke<0xA8B02A3D719BC7B0, void>(p0, p1); } // A711568EEDB43069 BB8104A3
  static void ROLL_DOWN_WINDOWS(uint32_t p0) { N::Invoke<0x59C6671FED5AE193, void>(p0); } // 85796B0549DDE156 51A16DC6
  static void ROLL_DOWN_WINDOW(uint32_t p0, uint32_t p1) { N::Invoke<0x1B098CDE9E6BB203, void>(p0, p1); } // 7AD9E6CE657D69E3 F840134C
  static void ROLL_UP_WINDOW(uint32_t p0, uint32_t p1) { N::Invoke<0x32268F14FB2EE675, void>(p0, p1); } // 602E548F46E24D59 83B7E06A
  static void SMASH_VEHICLE_WINDOW(uint32_t p0, uint32_t p1) { N::Invoke<0x57F7CA2B6EB04369, void>(p0, p1); } // 9E5B5E4D2CCD2259 DDD9A8C2
  static void FIX_VEHICLE_WINDOW(uint32_t p0, uint32_t p1) { N::Invoke<0xD11E6D08418600CB, void>(p0, p1); } // 772282EBEB95E682 6B8E990D
  static void _0xC7B567CBBB3E5267(uint32_t p0) { N::Invoke<0xC7B567CBBB3E5267, void>(p0); } // 6D645D59FB5F5AD3 CC95C96B
  static void _0x68D6988357E5CFB0(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x68D6988357E5CFB0, void>(p0, p1, p2, p3); } // E38CB9D7D39FDBCC FDA7B6CA
  static void SET_VEHICLE_LIGHTS(uint32_t p0, uint32_t p1) { N::Invoke<0x82A70865B4EF1184, void>(p0, p1); } // 34E710FF01247C5A E8930226
  static void _0x32343F077D675E97(uint32_t p0, bool p1) { N::Invoke<0x32343F077D675E97, void>(p0, p1); } // C45C27EF50F36ADC 4221E435
  static uint32_t _0xC11E5B3FA650F029() { return N::Invoke<0xC11E5B3FA650F029, uint32_t>(); } // 1FD09E7390A74D54
  static void SET_VEHICLE_ALARM(uint32_t p0, bool p1) { N::Invoke<0xAD78B089450094CB, void>(p0, p1); } // CDE5E70C1DDB954C 24877D84
  static void START_VEHICLE_ALARM(uint32_t p0) { N::Invoke<0xEBEB3C85BCDB344B, void>(p0); } // B8FF7AB45305C345 5B451FF7
  static bool IS_VEHICLE_ALARM_ACTIVATED(uint32_t p0) { return N::Invoke<0x75A06D5F83176A1C, bool>(p0); } // 4319E335B71FFF34 F2630A4C
  static void SET_VEHICLE_INTERIORLIGHT(uint32_t p0, bool p1) { N::Invoke<0x20DE8B7C1E1378DC, void>(p0, p1); } // BC2042F090AF6AD3 9AD1FE1E
  static void SET_VEHICLE_LIGHT_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0xE84BDB8B20F2DF98, void>(p0, p1); } // B385454F8791F57C 48039D6A
  static void ATTACH_VEHICLE_TO_TRAILER(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0xF2010391989F2D52, void>(p0, p1, p2); } // 3C7D42D58F770B54 2133977F
  static void _0x889C7ACE5D70B022(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { N::Invoke<0x889C7ACE5D70B022, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 16B5E274BDE402F8 12AC1A16
  static void _0x31C8FE3AD33785E5(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0x31C8FE3AD33785E5, void>(p0, p1, p2); } // 374706271354CB18 40C4763F
  static void DETACH_VEHICLE_FROM_TRAILER(uint32_t p0) { N::Invoke<0x680AEB4DF31DB9A, void>(p0); } // 90532EDF0D2BDD86 B5DBF91D
  static bool IS_VEHICLE_ATTACHED_TO_TRAILER(uint32_t p0) { return N::Invoke<0xA04CA7D6710299C3, bool>(p0); } // E7CF3C4F9F489F0C E142BBCC
  static void _0xAFB23EE2444B9873(uint32_t p0, float p1) { N::Invoke<0xAFB23EE2444B9873, void>(p0, p1); } // 2A8F319B392E7B3F E74E85CE
  static void _0xA0108C9F7C74F07A(uint32_t p0) { N::Invoke<0xA0108C9F7C74F07A, void>(p0); } // 95CF53B3D687F9FA 06C47A6F
  static void SET_VEHICLE_TYRE_FIXED(uint32_t p0, uint32_t p1) { N::Invoke<0x43AB3F42820319A6, void>(p0, p1); } // 6E13FC662B882D1D A42EFA6B
  static void SET_VEHICLE_NUMBER_PLATE_TEXT(uint32_t p0, uint32_t *p1) { N::Invoke<0xBC897C4AD5A4F17, void>(p0, p1); } // 95A88F0B409CDA47 400F9556
  static uint32_t GET_VEHICLE_NUMBER_PLATE_TEXT(uint32_t p0) { return N::Invoke<0x3907ED4361C53248, uint32_t>(p0); } // 7CE1CCB9B293020E E8522D58
  static uint32_t GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return N::Invoke<0x8063ADDF06EDB6B8, uint32_t>(); } // 4C4D6B2644F458CB D24BC1AE
  static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0x4181147B4609CD58, void>(p0, p1); } // 9088EB5A43FFB0A1 A1A1890E
  static uint32_t _0x19BB097358BFF0AF(uint32_t p0) { return N::Invoke<0x19BB097358BFF0AF, uint32_t>(p0); } // F11BC2DD9A3E7195 499747B6
  static void SET_RANDOM_TRAINS(bool p0) { N::Invoke<0xA410A4D8F307E26, void>(p0); } // 80D9F74197EA47D9 D461CA7F
  static uint32_t CREATE_MISSION_TRAIN(uint32_t p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0x44E34FD47BE39CB9, uint32_t>(p0, p1, p2, p3, p4); } // 63C6CCA8E68AE8C8 D4C2EAFD
  static void SWITCH_TRAIN_TRACK(uint32_t p0, bool p1) { N::Invoke<0x2504068D2AC71DE0, void>(p0, p1); } // FD813BB7DB977F20 68BFDD61
  static void _0x3D7DC92824C3BBA0(uint32_t p0, uint32_t p1) { N::Invoke<0x3D7DC92824C3BBA0, void>(p0, p1); } // 21973BBF8D17EDFA D5774FB7
  static void DELETE_ALL_TRAINS() { N::Invoke<0x65FB157973AC3D3E, void>(); } // 736A718577F39C7D 83DE7ABF
  static void SET_TRAIN_SPEED(uint32_t p0, float p1) { N::Invoke<0x3C0127DD23CE5548, void>(p0, p1); } // AA0BC91BE0B796E3 DFC35E4D
  static void SET_TRAIN_CRUISE_SPEED(uint32_t p0, float p1) { N::Invoke<0x50BDA076B97B3673, void>(p0, p1); } // 16469284DB8C62B5 B507F51D
  static void SET_RANDOM_BOATS(bool p0) { N::Invoke<0x14D78F83242AE236, void>(p0); } // 84436EC293B1415F B505BD89
  static void SET_GARBAGE_TRUCKS(bool p0) { N::Invoke<0xD173B40EEAF095B0, void>(p0); } // 2AFD795EEAC8D30D D9ABB0FF
  static bool DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uint32_t p0) { return N::Invoke<0x7C415C27D612EB5A, bool>(p0); } // 57E4C39DE5EE8470 5D91D9AC
  static uint32_t GET_VEHICLE_RECORDING_ID(uint32_t p0, uint32_t *p1) { return N::Invoke<0xEE6ADE60E5ABC4DE, uint32_t>(p0, p1); } // 21543C612379DB3C 328D601D
  static void REQUEST_VEHICLE_RECORDING(uint32_t p0, uint32_t *p1) { N::Invoke<0x27859D80F345E855, void>(p0, p1); } // AF514CABE74CBF15 91AFEFD9
  static bool HAS_VEHICLE_RECORDING_BEEN_LOADED(uint32_t p0, uint32_t *p1) { return N::Invoke<0xD3536FF14115DA03, bool>(p0, p1); } // 300D614A4C785FC4 F52CD7F5
  static void REMOVE_VEHICLE_RECORDING(uint32_t p0, uint32_t *p1) { N::Invoke<0x6F50999A7C4DD6A2, void>(p0, p1); } // F1160ACCF98A3FC8 D3C05B00
  static Vector3 _0xBFB3058750DE68FA(uint32_t p0, float p1) { return N::Invoke<0xBFB3058750DE68FA, Vector3>(p0, p1); } // 92523B76657A517D F31973BB
  static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(uint32_t p0, float p1, uint32_t *p2) { return N::Invoke<0xE4ED200C17FDDB43, Vector3>(p0, p1, p2); } // D242728AA6F0FBA2 7178558D
  static Vector3 _0x85B367BF256E3700(uint32_t p0, float p1) { return N::Invoke<0x85B367BF256E3700, Vector3>(p0, p1); } // F0F2103EFAF8CBA7 4D1C15C2
  static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(uint32_t p0, float p1, uint32_t *p2) { return N::Invoke<0x50E9138806D09495, Vector3>(p0, p1, p2); } // 2058206FBE79A8AD D96DEC68
  static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uint32_t p0) { return N::Invoke<0x5795FC1A25E3D756, float>(p0); } // 102D125411A7B6E6 7116785E
  static uint32_t GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(uint32_t p0, uint32_t p1) { return N::Invoke<0x5EC8472D80EE9A7, uint32_t>(p0, p1); } // 0E48D1C262390950 5B35EEB7
  static float GET_POSITION_IN_RECORDING(uint32_t p0) { return N::Invoke<0xAF35F387BDE86320, float>(p0); } // 2DACD605FC681475 7DCD644C
  static float GET_TIME_POSITION_IN_RECORDING(uint32_t p0) { return N::Invoke<0x34CBA24EC004D58A, float>(p0); } // 5746F3A7AB7FE544 F8C3E4A2
  static void START_PLAYBACK_RECORDED_VEHICLE(uint32_t p0, uint32_t p1, uint32_t *p2, bool p3) { N::Invoke<0xFB79A537A7D76B64, void>(p0, p1, p2, p3); } // 3F878F92B3A7A071 CF614CA8
  static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xC3835F187A1E9DF2, void>(p0, p1, p2, p3, p4, p5); } // 7D80FD645D4DA346 4E721AD2
  static void _0x230DF9402D44A48C(uint32_t p0, bool p1) { N::Invoke<0x230DF9402D44A48C, void>(p0, p1); } // 1F2E4E06DEA8992B 01B91CD0
  static void STOP_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { N::Invoke<0xA4DCD8636424FF17, void>(p0); } // 54833611C17ABDEA AE99C57C
  static void PAUSE_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { N::Invoke<0xE58AF459A19DBC89, void>(p0); } // 632A689BF42301B1 CCF54912
  static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { N::Invoke<0x651D6CB9785E1859, void>(p0); } // 8879EE09268305D5 59060F75
  static bool IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uint32_t p0) { return N::Invoke<0x8B3A54875054E60A, bool>(p0); } // 1C8A4C2C19E68EEC 61F7650D
  static bool IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(uint32_t p0) { return N::Invoke<0x8905CBC8A6F34181, bool>(p0); } // AEA8FD591FAD4106 63022C58
  static uint32_t GET_CURRENT_PLAYBACK_FOR_VEHICLE(uint32_t p0) { return N::Invoke<0x22D3F1E84B527125, uint32_t>(p0); } // 42BC05C27A946054 A3F44390
  static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(uint32_t p0) { N::Invoke<0xBBA90609C2B3A60A, void>(p0); } // AB8E2EDA0C0A5883 8DEA18C8
  static void SET_PLAYBACK_SPEED(uint32_t p0, float p1) { N::Invoke<0xD5432BD2F44E464F, void>(p0, p1); } // 6683AB880E427778 684E26E4
  static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uint32_t p0, uint32_t p1, uint32_t *p2, float p3, uint32_t p4) { N::Invoke<0x185733340D6EED4, void>(p0, p1, p2, p3, p4); } // 29DE5FA52D00428C 8DE8E24E
  static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uint32_t p0, float p1) { N::Invoke<0xB44A0E3915FAA937, void>(p0, p1); } // 9438F7AD68771A20 CF3EFA4B
  static void SET_PLAYBACK_TO_USE_AI(uint32_t p0, uint32_t p1) { N::Invoke<0x230418AE8DD46C5B, void>(p0, p1); } // A549C3B37EA28131 B536CCD7
  static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0xABE60515B3B46807, void>(p0, p1, p2, p3); } // 6E63860BBB190730 0C8ABAA4
  static void _0xA7E03C7421793651(uint32_t p0, float p1, float p2, float p3, uint32_t p4) { N::Invoke<0xA7E03C7421793651, void>(p0, p1, p2, p3, p4); } // 5845066D8A1EA7F7 943A58EB
  static void _0xF96F0E2B721F875B(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xF96F0E2B721F875B, void>(p0, p1, p2, p3); } // 796A877E459B99EA 5C9F477C
  static void _0x7CC418E2FD378CEA(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x7CC418E2FD378CEA, void>(p0, p1, p2, p3); } // FAF2A78061FD9EF4 CD83C393
  static void _0x0514B94F52EED1823(uint32_t p0, bool p1) { N::Invoke<0x514B94F52EED1823, void>(p0, p1); } // 063AE2B2CC273588 2EF8435C
  static void EXPLODE_VEHICLE_IN_CUTSCENE(uint32_t p0, bool p1) { N::Invoke<0x94BEDB926639BE7F, void>(p0, p1); } // 786A4EB67B01BF0B A85207B5
  static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(uint32_t p0, float p1, uint32_t p2, bool p3, bool p4, bool p5, uint32_t p6) { N::Invoke<0x4D86FCE119E3D0F0, void>(p0, p1, p2, p3, p4, p5, p6); } // 2FA9923062DD396C C8B789AD
  static void SET_VEHICLE_MODEL_IS_SUPPRESSED(uint32_t p0, bool p1) { N::Invoke<0x941F924D5E9C2140, void>(p0, p1); } // 0FC2D89AC25A5814 42A08C9B
  static uint32_t GET_RANDOM_VEHICLE_IN_SPHERE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return N::Invoke<0xB889FF42D90D99BA, uint32_t>(p0, p1, p2, p3, p4, p5); } // 386F6CE5BAF6091C 57216D03
  static uint32_t GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0xC4A49B108CA8C47A, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // C5574E0AEB86BA68 DCADEB66
  static uint32_t GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0xC69E73E8DD075C95, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // B50807EABE20A8DC D6343F6B
  static uint32_t GET_CLOSEST_VEHICLE(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x9A67DC5FE3A03F32, uint32_t>(p0, p1, p2, p3, p4, p5); } // F73EB622C4F1689B D7E26B2C
  static uint32_t GET_TRAIN_CARRIAGE(uint32_t p0, uint32_t p1) { return N::Invoke<0x283A0295F1B379EA, uint32_t>(p0, p1); } // 08AAFD0814722BC3 2544E7A6
  static void DELETE_MISSION_TRAIN(uint32_t *p0) { N::Invoke<0x2082C6F369D5223, void>(p0); } // 5B76B14AE875C795 86C9497D
  static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(uint32_t *p0, uint32_t p1) { N::Invoke<0x86F7AE7C07CC96E2, void>(p0, p1); } // BBE7648349B49BE8 19808560
  static void SET_MISSION_TRAIN_COORDS(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xF2879FF4C29EF81E, void>(p0, p1, p2, p3); } // 591CA673AA6AB736 D6D70803
  static bool IS_THIS_MODEL_A_BOAT(uint32_t p0) { return N::Invoke<0x9C14CED64BA9A516, bool>(p0); } // 45A9187928F4B9E3 10F6085C
  static uint32_t _0x3B8F7829EC2D058B() { return N::Invoke<0x3B8F7829EC2D058B, uint32_t>(); } // 9537097412CF75FE
  static bool IS_THIS_MODEL_A_PLANE(uint32_t p0) { return N::Invoke<0x9652AA5F22572EA4, bool>(p0); } // A0948AB42D7BA0DE 3B3907BB
  static bool IS_THIS_MODEL_A_HELI(uint32_t p0) { return N::Invoke<0x6149FC3B1572A5B9, bool>(p0); } // DCE4334788AF94EA 8AF7F568
  static bool IS_THIS_MODEL_A_CAR(uint32_t p0) { return N::Invoke<0x4658BA5921D40213, bool>(p0); } // 7F6DB52EEFC96DF8 60E4C22F
  static bool IS_THIS_MODEL_A_TRAIN(uint32_t p0) { return N::Invoke<0xA0852014FD513B3, bool>(p0); } // AB935175B22E822B F87DCFFD
  static bool IS_THIS_MODEL_A_BIKE(uint32_t p0) { return N::Invoke<0xA34706B20AE53D17, bool>(p0); } // B50C0B0CEDC6CE84 7E702CDD
  static bool IS_THIS_MODEL_A_BICYCLE(uint32_t p0) { return N::Invoke<0xD70F47541E70FD47, bool>(p0); } // BF94DD42F63BDED2 328E6FF5
  static bool IS_THIS_MODEL_A_QUADBIKE(uint32_t p0) { return N::Invoke<0x99F5A208CDBDA518, bool>(p0); } // 39DAC362EE65FA28 C1625277
  static void SET_HELI_BLADES_FULL_SPEED(uint32_t p0) { N::Invoke<0x1AFF0858378FA21B, void>(p0); } // A178472EBB8AE60D 033A9408
  static void SET_HELI_BLADES_SPEED(uint32_t p0, float p1) { N::Invoke<0xE9F234A5BD062118, void>(p0, p1); } // FD280B4D7F3ABC4D 5C7D4EA9
  static void _0x88B16F022564CE30(uint32_t p0, float p1, float p2) { N::Invoke<0x88B16F022564CE30, void>(p0, p1, p2); } // 99CAD8E7AFDB60FA 1128A45B
  static void SET_VEHICLE_CAN_BE_TARGETTED(uint32_t p0, bool p1) { N::Invoke<0x87EA2A5AFD2719BC, void>(p0, p1); } // 3750146A28097A82 64B70B1D
  static void _0x208D3A373B7F3F36(uint32_t p0, bool p1) { N::Invoke<0x208D3A373B7F3F36, void>(p0, p1); } // DBC631F109350B8C 486C1280
  static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(uint32_t p0, bool p1) { N::Invoke<0xD8F7B399E76BD1E6, void>(p0, p1); } // 4C7028F78FFD3681 C5D94017
  static void _0x1F3D5217EF2F40F3(uint32_t p0, bool p1) { N::Invoke<0x1F3D5217EF2F40F3, void>(p0, p1); } // 1AA8A837D2169D94 009AB49E
  static void _0x60567B551F135997(uint32_t p0, bool p1) { N::Invoke<0x60567B551F135997, void>(p0, p1); } // 2311DD7159F00582 758C5E2E
  static uint32_t GET_VEHICLE_DIRT_LEVEL(uint32_t p0) { return N::Invoke<0xD6725C0AA2828965, uint32_t>(p0); } // 8F17BC8BA08DA62B FD15C065
  static void SET_VEHICLE_DIRT_LEVEL(uint32_t p0, float p1) { N::Invoke<0xBEFA69C2C9E8754D, void>(p0, p1); } // 79D3B596FE44EE8B 2B39128B
  static bool _0xA37FC49E200C4829(uint32_t p0) { return N::Invoke<0xA37FC49E200C4829, bool>(p0); } // BCDC5017D3CE1E9E DAC523BC
  static bool IS_VEHICLE_DOOR_FULLY_OPEN(uint32_t p0, uint32_t p1) { return N::Invoke<0xA0D5C9E71EAFB346, bool>(p0, p1); } // 3E933CFF7B111C22 C2385B6F
  static void SET_VEHICLE_ENGINE_ON(uint32_t p0, bool p1, bool p2) { N::Invoke<0xE0E038A4E5C7727B, void>(p0, p1, p2); } // 2497C4717C8B881E 7FBC86F1
  static void SET_VEHICLE_UNDRIVEABLE(uint32_t p0, bool p1) { N::Invoke<0xB96DBAE0EA8F23C7, void>(p0, p1); } // 8ABA6AF54B942B95 48D02A4E
  static void SET_VEHICLE_PROVIDES_COVER(uint32_t p0, bool p1) { N::Invoke<0xDEB25011D82977D7, void>(p0, p1); } // 5AFEEDD9BB2899D7 EFC01CA9
  static void SET_VEHICLE_DOOR_CONTROL(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { N::Invoke<0x377AA6DD990C0D26, void>(p0, p1, p2, p3); } // F2BFA0430F0A0FCB 572DD360
  static void SET_VEHICLE_DOOR_LATCHED(uint32_t p0, uint32_t p1, bool p2, bool p3, bool p4) { N::Invoke<0x82CD41B77AA3D46B, void>(p0, p1, p2, p3, p4); } // A5A9653A8D2CAF48 4EB7BBFC
  static float GET_VEHICLE_DOOR_ANGLE_RATIO(uint32_t p0, uint32_t p1) { return N::Invoke<0x790D2A28F6320CC8, float>(p0, p1); } // FE3F9C29F7B32BD5 0E399C26
  static uint32_t _0x5F5BCD94359ABA66() { return N::Invoke<0x5F5BCD94359ABA66, uint32_t>(); } // 218297BF0CFD853B
  static void SET_VEHICLE_DOOR_SHUT(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x7E40829CCC49E744, void>(p0, p1, p2); } // 93D9BD300D7789E5 142606BD
  static void SET_VEHICLE_DOOR_BROKEN(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xD5EFF2387753D17, void>(p0, p1, p2); } // D4D4F6A4AB575A33 8147FEA7
  static void SET_VEHICLE_CAN_BREAK(uint32_t p0, bool p1) { N::Invoke<0xE6C37E5E1782F221, void>(p0, p1); } // 59BF8C3D52C92F66 90A810D1
  static bool DOES_VEHICLE_HAVE_ROOF(uint32_t p0) { return N::Invoke<0x7FA6B8D00E53690B, bool>(p0); } // 8AC862B0B32C5B80 DB817403
  static bool IS_BIG_VEHICLE(uint32_t p0) { return N::Invoke<0x9BEA3FC192D22438, bool>(p0); } // 9F243D3919F442FE 9CDBA8DE
  static uint32_t GET_NUMBER_OF_VEHICLE_COLOURS(uint32_t p0) { return N::Invoke<0x134204B049ECC669, uint32_t>(p0); } // 3B963160CD65D41E F2442EE2
  static void SET_VEHICLE_COLOUR_COMBINATION(uint32_t p0, uint32_t p1) { N::Invoke<0x29CE15040B0080CB, void>(p0, p1); } // 33E8CD3322E2FE31 A557AEAD
  static uint32_t GET_VEHICLE_COLOUR_COMBINATION(uint32_t p0) { return N::Invoke<0x12C8F81FD7D335FF, uint32_t>(p0); } // 6A842D197F845D56 77AC1B4C
  static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uint32_t p0, bool p1) { N::Invoke<0x43F7F4A62787BC4B, void>(p0, p1); } // 31B927BBC44156CD 14413319
  static void _0xE1A0AADDFA9D4FD8(uint32_t p0, bool p1) { N::Invoke<0xE1A0AADDFA9D4FD8, void>(p0, p1); } // BE5C1255A1830FF5 A6D8D7A5
  static void _0x216DAC5158B70D45(uint32_t p0, bool p1) { N::Invoke<0x216DAC5158B70D45, void>(p0, p1); } // 9BECD4B9FEF3F8A6 ACAB8FF3
  static void _0x8217E34A7D5CC293(uint32_t p0, bool p1) { N::Invoke<0x8217E34A7D5CC293, void>(p0, p1); } // 88BC673CA9E0AE99 F0E5C41D
  static void _0x1EC586BF9D2588E1(uint32_t p0, bool p1) { N::Invoke<0x1EC586BF9D2588E1, void>(p0, p1); } // E851E480B814D4BA 2F98B4B7
  static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xE9056F1CC20B228E, void>(p0, p1, p2); } // 055BF0AC0C34F4FD E2C45631
  static uint32_t GET_VEHICLE_DOOR_LOCK_STATUS(uint32_t p0) { return N::Invoke<0x407FC6F2E81C15C7, uint32_t>(p0); } // 25BC98A59C2EA962 0D72CEF2
  static bool IS_VEHICLE_DOOR_DAMAGED(uint32_t p0, uint32_t p1) { return N::Invoke<0x81A4DE5D88AD9A2C, bool>(p0, p1); } // B8E181E559464527 4999E3C3
  static void _0xC7523792059C60E4(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xC7523792059C60E4, void>(p0, p1, p2); } // 2FA133A4A9D37ED8 065B92B3
  static bool _0xA079C84217EBAD2F(uint32_t p0, bool p1) { return N::Invoke<0xA079C84217EBAD2F, bool>(p0, p1); } // 27B926779DEB502D B3A2CC4F
  static bool IS_VEHICLE_BUMPER_BROKEN_OFF(uint32_t p0, bool p1) { return N::Invoke<0x4CF67036719A0DD4, bool>(p0, p1); } // 468056A6BB6F3846 AF25C027
  static bool IS_COP_VEHICLE_IN_AREA_3D(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x4D30A22147A9AEBA, bool>(p0, p1, p2, p3, p4, p5); } // 7EEF65D5F153E26A FB16C6D1
  static bool IS_VEHICLE_ON_ALL_WHEELS(uint32_t p0) { return N::Invoke<0x525FB3C56A2F33BE, bool>(p0); } // B104CD1BABF302E2 10089F8E
  static uint32_t GET_VEHICLE_LAYOUT_HASH(uint32_t p0) { return N::Invoke<0x19DA9483264F328E, uint32_t>(p0); } // 28D37D4F71AC5C58 E0B35187
  static uint32_t _0xC73C4E677526149E() { return N::Invoke<0xC73C4E677526149E, uint32_t>(); } // A01BC64DD4BFBBAC
  static void SET_RENDER_TRAIN_AS_DERAILED(uint32_t p0, bool p1) { N::Invoke<0x6A6F577585506D47, void>(p0, p1); } // 317B11A312DF5534 899D9092
  static void SET_VEHICLE_EXTRA_COLOURS(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xA3A489EE6DDCCD16, void>(p0, p1, p2); } // 2036F561ADD12E33 515DB2A0
  static void GET_VEHICLE_EXTRA_COLOURS(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xA350E44A87923312, void>(p0, p1, p2); } // 3BC4245933A166F7 80E4659B
  static void STOP_ALL_GARAGE_ACTIVITY() { N::Invoke<0x5916AEC8B9F691A3, void>(); } // 0F87E938BDF29D66 17A0BCE5
  static void SET_VEHICLE_FIXED(uint32_t p0) { N::Invoke<0x949A95FF1987531C, void>(p0); } // 115722B1B9C14C1C 17469AA1
  static void SET_VEHICLE_DEFORMATION_FIXED(uint32_t p0) { N::Invoke<0x194383AE03B2AF0E, void>(p0); } // 953DA1E1B12C0491 DD2920C8
  static uint32_t _0x9F8F940E13D1B22E() { return N::Invoke<0x9F8F940E13D1B22E, uint32_t>(); } // 206BC5DC9D1AC70A
  static void _0x74032F41B7AB0FBB(uint32_t p0, bool p1) { N::Invoke<0x74032F41B7AB0FBB, void>(p0, p1); } // 51BB2D88D31A914B 88F0F7E7
  static void _0x798A38BABF030708(uint32_t p0, bool p1) { N::Invoke<0x798A38BABF030708, void>(p0, p1); } // 192547247864DFDD 90D6EE57
  static void _0x44ED33478851346F(uint32_t p0, bool p1) { N::Invoke<0x44ED33478851346F, void>(p0, p1); } // 465BF26AB9684352 C40192B5
  static void _0x3309AC605BC85316(uint32_t p0, bool p1) { N::Invoke<0x3309AC605BC85316, void>(p0, p1); } // 37C8252A7C92D017 AD3E05F2
  static void _0x815C1ACCF629D6(uint32_t p0, bool p1) { N::Invoke<0x815C1ACCF629D6, void>(p0, p1); } // 91A0BD635321F145 1784BA1A
  static void _0xFE5B6DC1831B779C(uint32_t p0, bool p1) { N::Invoke<0xFE5B6DC1831B779C, void>(p0, p1); } // C50CE861B55EAB8B 40C323AE
  static void _0x1BF8CC69AC7AC0C9(uint32_t p0, bool p1) { N::Invoke<0x1BF8CC69AC7AC0C9, void>(p0, p1); } // 6EBFB22D646FFC18 847F1304
  static void _0x9BE3CF0D916E6F6A(uint32_t p0, bool p1) { N::Invoke<0x9BE3CF0D916E6F6A, void>(p0, p1); } // 25367DE49D64CF16 CBD98BA1
  static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xFF2066264E0F3BD4, void>(p0, p1, p2, p3, p4, p5); } // 46A1E1A299EC4BBA 42CC15E0
  static void SET_VEHICLE_STEER_BIAS(uint32_t p0, float p1) { N::Invoke<0xAD31B3B3B4A153DE, void>(p0, p1); } // 42A8EC77D5150CBE 7357C1EB
  static bool IS_VEHICLE_EXTRA_TURNED_ON(uint32_t p0, uint32_t p1) { return N::Invoke<0x64D04C2170ADD5A9, bool>(p0, p1); } // D2E6822DBFD6C8BD 042098B5
  static void SET_VEHICLE_EXTRA(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x25A5C91E8079E04E, void>(p0, p1, p2); } // 7EE3A3C5E4A40CC9 642D065C
  static bool DOES_EXTRA_EXIST(uint32_t p0, uint32_t p1) { return N::Invoke<0xA23EFE39C0529E26, bool>(p0, p1); } // 1262D55792428154 409411CC
  static void SET_CONVERTIBLE_ROOF(uint32_t p0, bool p1) { N::Invoke<0xA00A96276C86D98C, void>(p0, p1); } // F39C4F538B5124C2 C87B6A51
  static void LOWER_CONVERTIBLE_ROOF(uint32_t p0, bool p1) { N::Invoke<0xB094F261B9D8440F, void>(p0, p1); } // DED51F703D0FA83D C5F72EAE
  static void RAISE_CONVERTIBLE_ROOF(uint32_t p0, bool p1) { N::Invoke<0x2575047F91291C9B, void>(p0, p1); } // 8F5FB35D7E88FC70 A4E4CBA3
  static uint32_t GET_CONVERTIBLE_ROOF_STATE(uint32_t p0) { return N::Invoke<0x92632E4A1274BB2C, uint32_t>(p0); } // F8C397922FC03F41 1B09714D
  static bool IS_VEHICLE_A_CONVERTIBLE(uint32_t p0, bool p1) { return N::Invoke<0x850813D10502D655, bool>(p0, p1); } // 52F357A30698BCCE 6EF54490
  static bool IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(uint32_t p0) { return N::Invoke<0x1DE314FA5D15EAB5, bool>(p0); } // 2959F696AE390A99 69200FA4
  static void SET_VEHICLE_DAMAGE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, bool p6) { N::Invoke<0x8E5C15A367AD44B0, void>(p0, p1, p2, p3, p4, p5, p6); } // A1DD317EA8FD4F29 21B458B2
  static float GET_VEHICLE_ENGINE_HEALTH(uint32_t p0) { return N::Invoke<0xBA2FAB683F225FF0, float>(p0); } // C45D23BAF168AAB8 8880038A
  static void SET_VEHICLE_ENGINE_HEALTH(uint32_t p0, float p1) { N::Invoke<0x240BBFD908B5DA09, void>(p0, p1); } // 45F6D8EEF34ABEF1 1B760FB5
  static float GET_VEHICLE_PETROL_TANK_HEALTH(uint32_t p0) { return N::Invoke<0x6E8B0986A202BDDE, float>(p0); } // 7D5DABE888D2D074 E41595CE
  static void SET_VEHICLE_PETROL_TANK_HEALTH(uint32_t p0, float p1) { N::Invoke<0xD9C8A48B8EE646C7, void>(p0, p1); } // 70DB57649FA8D0D8 660A3692
  static bool IS_VEHICLE_STUCK_TIMER_UP(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xD803509E70F20530, bool>(p0, p1, p2); } // 679BE1DAF71DA874 2FCF58C1
  static void RESET_VEHICLE_STUCK_TIMER(uint32_t p0, uint32_t p1) { N::Invoke<0x99074E6F581D3E84, void>(p0, p1); } // D7591B0065AFAA7A EF2A6016
  static bool IS_VEHICLE_DRIVEABLE(uint32_t p0, bool p1) { return N::Invoke<0xCA8794CE207FC6D5, bool>(p0, p1); } // 4C241E39B23DF959 41A7267A
  static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(uint32_t p0, bool p1) { N::Invoke<0x6CB6EA6826752A6, void>(p0, p1); } // 2B5F9D2AF1F1722D B4D3DBFB
  static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(uint32_t p0, bool p1) { N::Invoke<0xDA90BAFB2AE59996, void>(p0, p1); } // FBA550EA44404EE6 D8260751
  static uint32_t _0x97BC793C1789E1CC() { return N::Invoke<0x97BC793C1789E1CC, uint32_t>(); } // 9F3F689B814F2599
  static uint32_t _0x8B414A721A1D897C() { return N::Invoke<0x8B414A721A1D897C, uint32_t>(); } // 4E74E62E0A97E901
  static void START_VEHICLE_HORN(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0xEDA66F3323CFFA45, void>(p0, p1, p2, p3); } // 9C8C6504B5B63D2C 0DF5ADB3
  static void _0x3938C37578C25DF1(uint32_t p0, bool p1) { N::Invoke<0x3938C37578C25DF1, void>(p0, p1); } // 9D44FCCE98450843 968E5770
  static void SET_VEHICLE_HAS_STRONG_AXLES(uint32_t p0, bool p1) { N::Invoke<0xC158AF2A8304483D, void>(p0, p1); } // 92F0CF722BC4202F 0D1CBC65
  static uint32_t GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uint32_t p0) { return N::Invoke<0x9CA400FE84544C65, uint32_t>(p0); } // B215AAC32D25D019 EC86DF39
  static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xBC1E385D0B7A6032, Vector3>(p0, p1, p2, p3); } // 4EC6CFBC7B2E9536 ABF02075
  static void SET_VEHICLE_LIVERY(uint32_t p0, uint32_t p1) { N::Invoke<0x2BACAD26E4CE1EDA, void>(p0, p1); } // 60BF608F1B8CD1B6 7AD87059
  static uint32_t GET_VEHICLE_LIVERY(uint32_t p0) { return N::Invoke<0x4CA0AD498EF66914, uint32_t>(p0); } // 2BB9230590DA5E8A EC82A51D
  static uint32_t GET_VEHICLE_LIVERY_COUNT(uint32_t p0) { return N::Invoke<0xF889AB56F9A8D5E3, uint32_t>(p0); } // 87B63E25A529D526 FB0CA947
  static bool IS_VEHICLE_WINDOW_INTACT(uint32_t p0, uint32_t p1) { return N::Invoke<0x9067781626AA370D, bool>(p0, p1); } // 46E571A0E20D01F1 AC4EF23D
  static bool _0xD2EDB145978EF7B6(uint32_t p0) { return N::Invoke<0xD2EDB145978EF7B6, bool>(p0); } // 11D862A3E977A9EF BB619744
  static bool _0x307A19A374EEAB57(uint32_t p0) { return N::Invoke<0x307A19A374EEAB57, bool>(p0); } // 2D34FC3BC4ADB780 648E685A
  static void RESET_VEHICLE_WHEELS(uint32_t p0, bool p1) { N::Invoke<0x3243978F3B735696, void>(p0, p1); } // 21D2E5662C1F6FED D5FFE779
  static bool IS_HELI_PART_BROKEN(uint32_t p0, bool p1, bool p2, bool p3) { return N::Invoke<0x6FD856D296EABBE4, bool>(p0, p1, p2, p3); } // BC74B4BE25EB6C8A F4E4C439
  static float _0x90228EF18036EE6A(uint32_t p0) { return N::Invoke<0x90228EF18036EE6A, float>(p0); } // E4CB7541F413D2C5 F01E2AAB
  static float _0xDDC4374B7D84EE5F(uint32_t p0) { return N::Invoke<0xDDC4374B7D84EE5F, float>(p0); } // AE8CE82A4219AC8C A41BC13D
  static float _0xCB7AA89214F578C1(uint32_t p0) { return N::Invoke<0xCB7AA89214F578C1, float>(p0); } // AC51915D27E4A5F7 8A68388F
  static uint32_t WAS_COUNTER_ACTIVATED(uint32_t p0, uint32_t p1) { return N::Invoke<0x71CD47382EE84166, uint32_t>(p0, p1); } // 3EC8BF18AA453FE9 2916D69B
  static void SET_VEHICLE_NAME_DEBUG(uint32_t p0, uint32_t p1) { N::Invoke<0xE8243C7B1ED62E02, void>(p0, p1); } // BFDF984E2C22B94F A712FF5C
  static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(uint32_t p0, bool p1) { N::Invoke<0xCFAA2B317EA7B259, void>(p0, p1); } // 71B0892EC081D60A 38CC692B
  static void _0xFA1F9781C53CC396(uint32_t p0, bool p1) { N::Invoke<0xFA1F9781C53CC396, void>(p0, p1); } // 3441CAD2F2231923 C306A9A3
  static void _0xCB627690F1A36612(uint32_t p0, bool p1) { N::Invoke<0xCB627690F1A36612, void>(p0, p1); } // 2B6747FAA9DB9D6B 95A9ACCB
  static void _0xF14E53754BC84C29(uint32_t p0, uint32_t p1) { N::Invoke<0xF14E53754BC84C29, void>(p0, p1); } // CFC8BE9A5E1FE575 24F873FB
  static uint32_t _0x91068745EF3E0ADA(uint32_t p0) { return N::Invoke<0x91068745EF3E0ADA, uint32_t>(p0); } // 9B0F3DCA3DB0F4CD A6F02670
  static bool IS_ANY_VEHICLE_NEAR_POINT(float p0, float p1, float p2, float p3) { return N::Invoke<0x1DB23BF4B2FFF9BA, bool>(p0, p1, p2, p3); } // 61E1DD6125A3EEE6 2867A834
  static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(uint32_t p0) { N::Invoke<0x3D9568341F46CF22, void>(p0); } // A6E9FDCB2C76785E 9DA21956
  static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(uint32_t p0) { N::Invoke<0x14087AABE70E6BE4, void>(p0); } // 00689CDE5F7C6787 382BE070
  static bool IS_VEHICLE_HIGH_DETAIL(uint32_t p0) { return N::Invoke<0xA8F27B4255BFFE1F, bool>(p0); } // 1F25887F3C104278 55D41928
  static void REQUEST_VEHICLE_ASSET(uint32_t p0, uint32_t p1) { N::Invoke<0x958003C8F1315BF5, void>(p0, p1); } // 81A15811460FAB3A 902B4F06
  static bool HAS_VEHICLE_ASSET_LOADED(uint32_t p0) { return N::Invoke<0xFA32E3333C5BD56A, bool>(p0); } // 1BBE0523B8DB9A21 8DAAC3CB
  static void REMOVE_VEHICLE_ASSET(uint32_t p0) { N::Invoke<0x3F5DB12BA017912F, void>(p0); } // ACE699C71AB9DEB5 9620E9C6
  static void _0xBFA9FE814D364BC5(uint32_t p0, float p1) { N::Invoke<0xBFA9FE814D364BC5, void>(p0, p1); } // FE54B92A344583CA 88236E22
  static void ATTACH_VEHICLE_TO_TOW_TRUCK(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { N::Invoke<0x1511BF52ECA48F55, void>(p0, p1, p2, p3, p4, p5); } // 29A16F8D621C4508 8151571A
  static void DETACH_VEHICLE_FROM_TOW_TRUCK(uint32_t p0, uint32_t p1) { N::Invoke<0xE1B462BF1EEE86A3, void>(p0, p1); } // C2DB6B6708350ED8 C666CF33
  static bool DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(uint32_t p0) { return N::Invoke<0xA1593D2D8A42357B, bool>(p0); } // D0E9CE05A1E68CD8 3BF93651
  static bool IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uint32_t p0, uint32_t p1) { return N::Invoke<0x7FA9B9EC1CAEE692, bool>(p0, p1); } // 146DF9EC4C4B9FD4 9699CFDC
  static uint32_t GET_ENTITY_ATTACHED_TO_TOW_TRUCK(uint32_t p0) { return N::Invoke<0xD4674B673D8048B, uint32_t>(p0); } // EFEA18DCF10F8F75 11EC7844
  static uint32_t SET_VEHICLE_AUTOMATICALLY_ATTACHES(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xCDED36A388C5C6F3, uint32_t>(p0, p1, p2); } // 8BA6F76BC53A1493 4273A8D3
  static void _0x23907B014F837B48(uint32_t p0, float p1, bool p2) { N::Invoke<0x23907B014F837B48, void>(p0, p1, p2); } // F8EBCCC96ADB9FB7 ED23C8A3
  static void _0x9BEF801B0A929312(uint32_t p0, float p1, bool p2) { N::Invoke<0x9BEF801B0A929312, void>(p0, p1, p2); } // 56B94C6D7127DFBA B1A52EF7
  static void _0xEAA3C4889C3FA3CE(uint32_t p0, float p1) { N::Invoke<0xEAA3C4889C3FA3CE, void>(p0, p1); } // 1093408B4B9D1146 F30C566F
  static void _0x758D26F289A36B55(uint32_t p0, float p1) { N::Invoke<0x758D26F289A36B55, void>(p0, p1); } // 30D779DE7C4F6DD3 A7DF64D7
  static void _0x2033787D1F77672C(uint32_t p0, float p1) { N::Invoke<0x2033787D1F77672C, void>(p0, p1); } // 9AA47FFF660CB932 DD7936F5
  static uint32_t _0xF2AAB57248BA7736(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return N::Invoke<0xF2AAB57248BA7736, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // A4822F1CF23F4810 34E02FCD
  static void SET_VEHICLE_BURNOUT(uint32_t p0, bool p1) { N::Invoke<0x7F4DBF81A64330DB, void>(p0, p1); } // FB8794444A7D60FB 9B6EF0EA
  static bool IS_VEHICLE_IN_BURNOUT(uint32_t p0) { return N::Invoke<0x40A898F321DE322A, bool>(p0); } // 1297A88E081430EB 6632BC12
  static void SET_VEHICLE_REDUCE_GRIP(uint32_t p0, bool p1) { N::Invoke<0x5774326B6DEC114A, void>(p0, p1); } // 222FF6A823D122E2 90D3A0D9
  static void SET_VEHICLE_INDICATOR_LIGHTS(uint32_t p0, bool p1, bool p2) { N::Invoke<0x1CFFF7994271C44E, void>(p0, p1, p2); } // B5D45264751B7DF0 A6073B5D
  static void SET_VEHICLE_BRAKE_LIGHTS(uint32_t p0, bool p1) { N::Invoke<0x229D259AC32C20C7, void>(p0, p1); } // 92B35082E0B42F66 6D9BA11E
  static void SET_VEHICLE_HANDBRAKE(uint32_t p0, bool p1) { N::Invoke<0x7812650BCCF0DC2D, void>(p0, p1); } // 684785568EF26A22 BA729A25
  static void _0x383F49040A255D78() { N::Invoke<0x383F49040A255D78, void>(); } // 48ADC8A773564670 37BC6ACB
  static bool _0x66CA9B9689E10C56() { return N::Invoke<0x66CA9B9689E10C56, bool>(); } // 91D6DD290888CBAB 71D898EF
  static void _0x12119E96F64463E6(bool p0) { N::Invoke<0x12119E96F64463E6, void>(p0); } // 51DB102F4A3BA5E0 0B0523B0
  static bool GET_VEHICLE_TRAILER_VEHICLE(uint32_t p0, uint32_t *p1) { return N::Invoke<0xF978484FC39FCE8C, bool>(p0, p1); } // 1CDD6BADC297830D AE84D758
  static void _0x8E04A46A40F8E353(uint32_t p0, bool p1) { N::Invoke<0x8E04A46A40F8E353, void>(p0, p1); } // CAC66558B944DA67 0B200CE2
  static void SET_VEHICLE_RUDDER_BROKEN(uint32_t p0, bool p1) { N::Invoke<0xE418777D0676FD3A, void>(p0, p1); } // 09606148B6C71DEF 3FAC3CD4
  static void _0xECAC65CC613B494A(uint32_t p0, bool p1) { N::Invoke<0xECAC65CC613B494A, void>(p0, p1); } // 1A78AD3D8240536F 0858678C
  static uint32_t _0xBE83BDE3FD937FB(uint32_t p0) { return N::Invoke<0xBE83BDE3FD937FB, uint32_t>(p0); } // 53AF99BAA671CA47 7D1A0616
  static float GET_VEHICLE_MAX_BRAKING(uint32_t p0) { return N::Invoke<0xE72C2B4E772BB2DB, float>(p0); } // AD7E85FC227197C4 03B926F6
  static float GET_VEHICLE_MAX_TRACTION(uint32_t p0) { return N::Invoke<0x3B4E8A0AD25000F7, float>(p0); } // A132FB5370554DB0 7E5A1587
  static float GET_VEHICLE_ACCELERATION(uint32_t p0) { return N::Invoke<0x4E99398467649989, float>(p0); } // 5DD35C8D074E57AE 00478321
  static float _0xA69367DED5B00EAE(uint32_t p0) { return N::Invoke<0xA69367DED5B00EAE, float>(p0); } // F417C2502FFFED43 8F291C4A
  static float GET_VEHICLE_MODEL_MAX_BRAKING(uint32_t p0) { return N::Invoke<0x3AEBDA0A4A1A87D8, float>(p0); } // DC53FD41B4ED944C 7EF02883
  static float _0x9756F1A0186A3C19(uint32_t p0) { return N::Invoke<0x9756F1A0186A3C19, float>(p0); } // BFBA3BA79CFF7EBF F3A7293F
  static float GET_VEHICLE_MODEL_MAX_TRACTION(uint32_t p0) { return N::Invoke<0xBB4EC8D7C1E61BF7, float>(p0); } // 539DE94D44FDFD0D 7F985597
  static float GET_VEHICLE_MODEL_ACCELERATION(uint32_t p0) { return N::Invoke<0x91D3EE889899A137, float>(p0); } // 8C044C5C84505B6A 29CB3537
  static float _0x3611CA0FB9F1F0BE(uint32_t p0) { return N::Invoke<0x3611CA0FB9F1F0BE, float>(p0); } // 53409B5163D5B846 37FBA7BC
  static float _0xF4373FA641145995(uint32_t p0) { return N::Invoke<0xF4373FA641145995, float>(p0); } // C6AD107DDC9054CC 95BB67EB
  static float _0xB5F8459C2D3D7ACE(uint32_t p0) { return N::Invoke<0xB5F8459C2D3D7ACE, float>(p0); } // 5AA3F878A178C4FC 87C5D271
  static uint32_t _0x00C7399D60599739D(uint32_t p0) { return N::Invoke<0xC7399D60599739D, uint32_t>(p0); } // 00C09F246ABEDD82 CE67162C
  static float GET_VEHICLE_CLASS_MAX_TRACTION(uint32_t p0) { return N::Invoke<0x269A13871F4F91CC, float>(p0); } // DBC86D85C5059461 5B4FDC16
  static float GET_VEHICLE_CLASS_MAX_AGILITY(uint32_t p0) { return N::Invoke<0x72A06F5F5DF641E7, float>(p0); } // 4F930AD022D6DE3B 45F2BD83
  static float GET_VEHICLE_CLASS_MAX_ACCELERATION(uint32_t p0) { return N::Invoke<0xD682543A2029D706, float>(p0); } // 2F83E7E45D9EA7AE 3E220A9B
  static float GET_VEHICLE_CLASS_MAX_BRAKING(uint32_t p0) { return N::Invoke<0xCC56F70CC1B3C064, float>(p0); } // 4BF54C16EC8FEC03 D08CC1A5
  static uint32_t _0xA6FA78C13B14EFC2(float p0, float p1, float p2, float p3, float p4, bool p5) { return N::Invoke<0xA6FA78C13B14EFC2, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2CE544C68FB812A0 D6685803
  static bool _0xFE6EA8CF0B9F002F(uint32_t p0) { return N::Invoke<0xFE6EA8CF0B9F002F, bool>(p0); } // 1033371FC8E842A7 0C0332A6
  static void _0xB932809AAF04620B(uint32_t p0) { N::Invoke<0xB932809AAF04620B, void>(p0); } // 87E7F24270732CB1 6574041D
  static void _0xAB09A97ECC95CD9A(uint32_t p0) { N::Invoke<0xAB09A97ECC95CD9A, void>(p0); } // 3556041742A0DC74 F8EC5751
  static bool IS_VEHICLE_SEARCHLIGHT_ON(uint32_t p0) { return N::Invoke<0x590577929DE9C3BB, bool>(p0); } // C0F97FCE55094987 ADAF3513
  static void SET_VEHICLE_SEARCHLIGHT(uint32_t p0, bool p1, bool p2) { N::Invoke<0xF0B3AB259115809C, void>(p0, p1, p2); } // 14E85C5EE7A4D542 E2C0DD8A
  static bool _0xCA8508992C844A64(uint32_t p0, uint32_t p1, uint32_t p2, bool p3, bool p4) { return N::Invoke<0xCA8508992C844A64, bool>(p0, p1, p2, p3, p4); } // 639431E895B9AA57 AB0E79EB
  static bool _0x99398D846F3F81FE(uint32_t p0, uint32_t p1) { return N::Invoke<0x99398D846F3F81FE, bool>(p0, p1); } // 30785D90C956BF35 B3EB01ED
  static uint32_t GET_NUM_MOD_KITS(uint32_t p0) { return N::Invoke<0xFE85A2A6EE40ADA0, uint32_t>(p0); } // 33F2E3FE70EAAE1D E4903AA0
  static void SET_VEHICLE_MOD_KIT(uint32_t p0, uint32_t p1) { N::Invoke<0xB7A7C917CF0448E6, void>(p0, p1); } // 1F2AA07F00B3217A B8132158
  static uint32_t GET_VEHICLE_MOD_KIT(uint32_t p0) { return N::Invoke<0x23DC46514AADEDFC, uint32_t>(p0); } // 6325D1A044AE510D 9FE60927
  static uint32_t GET_VEHICLE_MOD_KIT_TYPE(uint32_t p0) { return N::Invoke<0x346E832A02ADB742, uint32_t>(p0); } // FC058F5121E54C32 E5F76765
  static uint32_t GET_VEHICLE_WHEEL_TYPE(uint32_t p0) { return N::Invoke<0x7650202B3E229E02, uint32_t>(p0); } // B3ED1BFB4BE636DC DA58D7AE
  static void SET_VEHICLE_WHEEL_TYPE(uint32_t p0, uint32_t p1) { N::Invoke<0x3B1F287A5A67026D, void>(p0, p1); } // 487EB21CC7295BA1 64BDAAAD
  static uint32_t _0x536132A42AC9F3DE(uint32_t p0, bool p1) { return N::Invoke<0x536132A42AC9F3DE, uint32_t>(p0, p1); } // A551BE18C11A476D 73722CD9
  static void SET_VEHICLE_MOD_COLOR_1(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xAB57EBB1ECD365FC, void>(p0, p1, p2, p3); } // 43FEB945EE7F85B8 CBE9A54D
  static void SET_VEHICLE_MOD_COLOR_2(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xBB6D9642821B71A1, void>(p0, p1, p2); } // 816562BADFDEC83E C32613C2
  static void GET_VEHICLE_MOD_COLOR_1(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x46F07AD60AAB0637, void>(p0, p1, p2, p3); } // E8D65CA700C9A693 E625510A
  static void GET_VEHICLE_MOD_COLOR_2(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x809B5FC0DB3D37C2, void>(p0, p1, p2); } // 81592BE4E3878728 9B76BB8E
  static uint32_t _0x664C51CC97C40270(uint32_t p0, bool p1) { return N::Invoke<0x664C51CC97C40270, uint32_t>(p0, p1); } // B45085B721EFD38C 9A0840FD
  static uint32_t _0x837A0E7B64B2EC50(uint32_t p0) { return N::Invoke<0x837A0E7B64B2EC50, uint32_t>(p0); } // 4967A516ED23A5A1 9BDC0B49
  static bool _0xDF21CABCD0FD4913(uint32_t p0) { return N::Invoke<0xDF21CABCD0FD4913, bool>(p0); } // 9A83F5F9963775EF 112D637A
  static void SET_VEHICLE_MOD(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0x5D4B50E2007354F0, void>(p0, p1, p2, p3); } // 6AF0636DDEDCB6DD B52E5ED5
  static uint32_t GET_VEHICLE_MOD(uint32_t p0, uint32_t p1) { return N::Invoke<0x892B3EDA66236D64, uint32_t>(p0, p1); } // 772960298DA26FDB DC520069
  static uint32_t GET_VEHICLE_MOD_VARIATION(uint32_t p0, uint32_t p1) { return N::Invoke<0x194DFCDAD36ABECC, uint32_t>(p0, p1); } // B3924ECD70E095DC C1B92003
  static uint32_t GET_NUM_VEHICLE_MODS(uint32_t p0, uint32_t p1) { return N::Invoke<0xDA0BED5AABEFFBCF, uint32_t>(p0, p1); } // E38E9162A2500646 8A814FF9
  static void REMOVE_VEHICLE_MOD(uint32_t p0, uint32_t p1) { N::Invoke<0xEB013E50B9C4917A, void>(p0, p1); } // 92D619E420858204 9CC80A43
  static void TOGGLE_VEHICLE_MOD(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xA157CC58CEE29910, void>(p0, p1, p2); } // 2A1F4F37F95BAD08 D095F811
  static bool IS_TOGGLE_MOD_ON(uint32_t p0, uint32_t p1) { return N::Invoke<0x44C699E5DC7A51EA, bool>(p0, p1); } // 84B233A8C8FC8AE7 F0E1689F
  static uint32_t GET_MOD_TEXT_LABEL(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xF1BAAAC0BE911525, uint32_t>(p0, p1, p2); } // 8935624F8C5592CC 0BA39CA7
  static uint32_t GET_MOD_SLOT_NAME(uint32_t p0, uint32_t p1) { return N::Invoke<0xA9232741BBFA5E2B, uint32_t>(p0, p1); } // 51F0FEB9F6AE98C0 5E113483
  static uint32_t GET_LIVERY_NAME(uint32_t p0, uint32_t p1) { return N::Invoke<0xFE0D0A6A60696667, uint32_t>(p0, p1); } // B4C7A93837C91A1F ED80B5BE
  static uint32_t GET_VEHICLE_MOD_MODIFIER_VALUE(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x1658847BBD27C6B1, uint32_t>(p0, p1, p2); } // 90A38E9838E0A8C1 73AE5505
  static uint32_t _0xB22275A4F948C356(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xB22275A4F948C356, uint32_t>(p0, p1, p2); } // 4593CF82AA179706 94850968
  static void PRELOAD_VEHICLE_MOD(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x8F179C57E8564697, void>(p0, p1, p2); } // 758F49C24925568A 6EA5F4A8
  static bool HAS_PRELOAD_MODS_FINISHED(uint32_t p0) { return N::Invoke<0x8812127E3B0608, bool>(p0); } // 06F43E5175EB6D96 A8A0D246
  static void RELEASE_PRELOAD_MODS(uint32_t p0) { N::Invoke<0x418C34F506EAB4F9, void>(p0); } // 445D79F995508307 D442521F
  static void SET_VEHICLE_TYRE_SMOKE_COLOR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xBB5E99AAAB5C5476, void>(p0, p1, p2, p3); } // B5BA80F839791C0F 3EDEC0DB
  static void GET_VEHICLE_TYRE_SMOKE_COLOR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x8239CD0D53DFB0BC, void>(p0, p1, p2, p3); } // B635392A4938B3C3 75280015
  static void SET_VEHICLE_WINDOW_TINT(uint32_t p0, uint32_t p1) { N::Invoke<0xE181A03438FED412, void>(p0, p1); } // 57C51E6BAD752696 497C8787
  static uint32_t GET_VEHICLE_WINDOW_TINT(uint32_t p0) { return N::Invoke<0x612606EF85B26EA, uint32_t>(p0); } // 0EE21293DAD47C95 13D53892
  static uint32_t _0x935562E00D97FB73() { return N::Invoke<0x935562E00D97FB73, uint32_t>(); } // 9D1224004B3A6707 625C7B66
  static void GET_VEHICLE_COLOR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0xFD66225D50193B2F, void>(p0, p1, p2, p3); } // F3CC740D36221548 03BC8F1B
  static uint32_t _0x8BDABCCD10099E14(uint32_t p0) { return N::Invoke<0x8BDABCCD10099E14, uint32_t>(p0); } // EEBFC7A7EFDC35B4 749DEEA2
  static uint32_t GET_VEHICLE_CAUSE_OF_DESTRUCTION(uint32_t p0) { return N::Invoke<0x75A0224E92FC3A1A, uint32_t>(p0); } // E495D1EF4C91FD20 7F8C20DD
  static bool _0x9B15BB547A1A5C04(uint32_t p0) { return N::Invoke<0x9B15BB547A1A5C04, bool>(p0); } // 5EF77C9ADD3B11A3 A0777943
  static bool _0xAC273612FDC05B55(uint32_t p0) { return N::Invoke<0xAC273612FDC05B55, bool>(p0); } // A7ECB73355EB2F20 F178390B
  static void _0xCB92FE91E2240DB9(uint32_t p0, float p1) { N::Invoke<0xCB92FE91E2240DB9, void>(p0, p1); } // 93A3996368C94158 E943B09C
  static void _0x7B3BEF7A36F8E662(uint32_t p0, bool p1) { N::Invoke<0x7B3BEF7A36F8E662, void>(p0, p1); } // 1CF38D529D7441D9 DF594D8D
  static void _0x5151070C2E5BF9FC(uint32_t p0, bool p1) { N::Invoke<0x5151070C2E5BF9FC, void>(p0, p1); } // 1F9FB66F3A3842D2 4D840FC4
  static uint32_t _0x7493269FB983F6A7(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return N::Invoke<0x7493269FB983F6A7, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 54B0F614960F4A5F 5AB26C2B
  static void _0x86EB14ED408A0D53(uint32_t p0) { N::Invoke<0x86EB14ED408A0D53, void>(p0); } // E30524E1871F481D EF05F807
  static bool _0x8E7C44AC47EC6DBF(uint32_t p0) { return N::Invoke<0x8E7C44AC47EC6DBF, bool>(p0); } // 291E373D483E7EE7 D656E7E5
  static void _0xA994C47AB8403393(uint32_t p0, float p1) { N::Invoke<0xA994C47AB8403393, void>(p0, p1); } // B59E4BD37AE292DB 642DA5AA
  static void _0x0F17C1232FE70C3D1(uint32_t p0, bool p1) { N::Invoke<0xF17C1232FE70C3D1, void>(p0, p1); } // 0AD9E8F87FF7C16F 04F5546C
  static void SET_VEHICLE_IS_WANTED(uint32_t p0, bool p1) { N::Invoke<0x7E6050AB562A74F2, void>(p0, p1); } // F7EC25A3EBEEC726 DAA388E8
  static void _0xEC6326D5743CD803(uint32_t p0, float p1) { N::Invoke<0xEC6326D5743CD803, void>(p0, p1); } // F488C566413B4232 A25CCB8C
  static void _0xE5791767233A3F63(uint32_t p0, bool p1) { N::Invoke<0xE5791767233A3F63, void>(p0, p1); } // C1F981A6F74F0C23 00966934
  static void _0x03D196D291B7B1716(uint32_t p0, bool p1) { N::Invoke<0x3D196D291B7B1716, void>(p0, p1); } // 0F3B4D4E43177236 113DF5FD
  static float _0xB338D071B6FF5D0C(uint32_t p0) { return N::Invoke<0xB338D071B6FF5D0C, float>(p0); } // 6636C535F6CC2725 7C8D6464
  static void DISABLE_PLANE_AILERON(uint32_t p0, bool p1, bool p2) { N::Invoke<0x3F1A364DD933FE4C, void>(p0, p1, p2); } // 23428FC53C60919C 7E84C45C
  static bool _0x8069215141D4E926(uint32_t p0) { return N::Invoke<0x8069215141D4E926, bool>(p0); } // AE31E7DF9B5B132E 7DC6D022
  static void _0xE6BB236B6FE7502D(uint32_t p0, bool p1) { N::Invoke<0xE6BB236B6FE7502D, void>(p0, p1); } // 1D97D1E3A70A649F A03E42DF
  static void _0xD3D3EB608150FE2(uint32_t p0, float p1, float p2) { N::Invoke<0xD3D3EB608150FE2, void>(p0, p1, p2); } // 9CFA4896C3A53CBB 15D40761
  static void _0xBA20637A88AFB259(uint32_t p0, bool p1) { N::Invoke<0xBA20637A88AFB259, void>(p0, p1); } // AB04325045427AAE 1984F88D
  static void _0x87720A29837F2E7(uint32_t p0) { N::Invoke<0x87720A29837F2E7, void>(p0); } // CFD778E7904C255E 3FBE904F
  static void _0x4DCAE2A736FC1726(uint32_t p0) { N::Invoke<0x4DCAE2A736FC1726, void>(p0); } // ACFB2463CC22BED2 D1B71A25
  static uint32_t _0xA83D16728734CEAB() { return N::Invoke<0xA83D16728734CEAB, uint32_t>(); } // B2D06FAEDE65B577 FEB0C0C8
  static uint32_t _0x545E5A5517D48BE() { return N::Invoke<0x545E5A5517D48BE, uint32_t>(); } // E01903C47C7AC89E
  static void _0x0E923ADCA1B4CD031(uint32_t p0, bool p1) { N::Invoke<0xE923ADCA1B4CD031, void>(p0, p1); } // 02398B627547189C 08CD58F9
  static void _0x7C76B3DBC3FC45F8(uint32_t p0, uint32_t p1) { N::Invoke<0x7C76B3DBC3FC45F8, void>(p0, p1); } // B893215D8D4C015B 8C4B63E2
  static void SET_VEHICLE_LOD_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0xDAFFEDA410DDC991, void>(p0, p1); } // 93AE6A61BE015BF1 569E5AE3
  static void _0xB5168D28656DA503(uint32_t p0, bool p1) { N::Invoke<0xB5168D28656DA503, void>(p0, p1); } // 428BACCDF5E26EAD 1604C2F5
  static uint32_t _0xC6F86F97D17D6BAA(uint32_t p0) { return N::Invoke<0xC6F86F97D17D6BAA, uint32_t>(p0); } // 42A4BEB35D372407 8CDB0C09
  static uint32_t _0x89CF747B07C4FCAE(uint32_t p0) { return N::Invoke<0x89CF747B07C4FCAE, uint32_t>(p0); } // 2C8CBFE1EA5FC631 ABC99E21
  static void _0x41B122A99F870561(uint32_t p0, bool p1) { N::Invoke<0x41B122A99F870561, void>(p0, p1); } // 4D9D109F63FEE1D4 900C878C
  static void _0x960956EA6A951627(uint32_t p0, bool p1) { N::Invoke<0x960956EA6A951627, void>(p0, p1); } // 279D50DE5652D935 B3200F72
  static void _0x4CBCC2C2638F6964(uint32_t p0, uint32_t p1) { N::Invoke<0x4CBCC2C2638F6964, void>(p0, p1); } // E44A982368A4AF23 BAE491C7
  static void _0x21D20E951651F9F3() { N::Invoke<0x21D20E951651F9F3, void>(); } // F25E02CB9C5818F8 F0E59BC1
  static void _0xEC39D53B6BA82672(float p0) { N::Invoke<0xEC39D53B6BA82672, void>(p0); } // BC3CCA5844452B06 929801C6
  static void SET_VEHICLE_SHOOT_AT_TARGET(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { N::Invoke<0xA2028BFEB72ADDBC, void>(p0, p1, p2, p3, p4); } // 74CD9A9327A282EA 2343FFDF
  static bool _0x85E1A20D909E2DB1(uint32_t p0, uint32_t *p1) { return N::Invoke<0x85E1A20D909E2DB1, bool>(p0, p1); } // 8F5EBAB1F260CFCE 4A557117
  static void _0xC81706AA1BDD3E06(uint32_t p0, bool p1) { N::Invoke<0xC81706AA1BDD3E06, void>(p0, p1); } // 97CE68CB032583F0 E0FC6A32
  static void _0x15AB8AF256F50E6B(uint32_t p0, float p1) { N::Invoke<0x15AB8AF256F50E6B, void>(p0, p1); } // 182F266C2D9E2BEB 7D0DE7EA
  static uint32_t GET_VEHICLE_PLATE_TYPE(uint32_t p0) { return N::Invoke<0xF67883FDEB2C5518, uint32_t>(p0); } // 9CCC9525BF2408E0 65CA9286
  static void TRACK_VEHICLE_VISIBILITY(uint32_t p0) { N::Invoke<0x54E7B67452327959, void>(p0); } // 64473AEFDCF47DCA 78122DC1
  static bool IS_VEHICLE_VISIBLE(uint32_t p0) { return N::Invoke<0xAEFA676AB984E73A, bool>(p0); } // AA0A52D24FB98293 7E0D6056
  static void SET_VEHICLE_GRAVITY(uint32_t p0, bool p1) { N::Invoke<0x6A8CFDEE34426378, void>(p0, p1); } // 89F149B6131E57DA 07B2A6DC
  static void _0xDA23DF6D369857A3(bool p0) { N::Invoke<0xDA23DF6D369857A3, void>(p0); } // E6C0C80B8C867537 D2B8ACBD
  static uint32_t _0xEF9F7A80FA543DCC(uint32_t p0) { return N::Invoke<0xEF9F7A80FA543DCC, uint32_t>(p0); } // 36492C2F0D134C56 A4A75FCF
  static void _0x067DA19CC82FDD598(uint32_t p0, bool p1) { N::Invoke<0x67DA19CC82FDD598, void>(p0, p1); } // 06582AFF74894C75 50F89338
  static void _0xEEB83DBFD640C824(uint32_t p0, bool p1) { N::Invoke<0xEEB83DBFD640C824, void>(p0, p1); } // DFFCEF48E511DB48 EB7D7C27
  static bool _0x5289273441068327(uint32_t p0) { return N::Invoke<0x5289273441068327, bool>(p0); } // 8D474C8FAEFF6CDE 5EB00A6A
  static void _0x5AAD91AB1306C46D(uint32_t p0, bool p1) { N::Invoke<0x5AAD91AB1306C46D, void>(p0, p1); } // 983765856F2564F9 081DAC12
  static void _0xBA0C954BE649527A(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xBA0C954BE649527A, void>(p0, p1, p2); } // F0E4BA16D1DB546C 5BD8D82D
  static void _0xDC238E9FB8387BA9(uint32_t p0) { N::Invoke<0xDC238E9FB8387BA9, void>(p0); } // F87D9F2301F7D206 450AD03A
  static bool _0xE72A4DAD5B1689BE(uint32_t p0) { return N::Invoke<0xE72A4DAD5B1689BE, bool>(p0); } // 4198AB0022B15F87 BD085DCA
  static bool _0x1D554EF8AC0C9CD8(uint32_t p0) { return N::Invoke<0x1D554EF8AC0C9CD8, bool>(p0); } // 755D6D5267CBBD7E ABBDD5C6
  static void _0x095F0524EC2321783(uint32_t p0, bool p1) { N::Invoke<0x95F0524EC2321783, void>(p0, p1); } // 0CDDA42F9E360CA6 9B581DE7
  static bool IS_VEHICLE_STOLEN(uint32_t p0) { return N::Invoke<0xFE579AAF18C374AC, bool>(p0); } // 4AF9BD80EEBEB453 20B61DDE
  static void SET_VEHICLE_IS_STOLEN(uint32_t p0, bool p1) { N::Invoke<0x464A1A49361CDE18, void>(p0, p1); } // 67B2C79AA7FF5738 70912E42
  static void _0x3434D4AA7555C54C(uint32_t p0, float p1) { N::Invoke<0x3434D4AA7555C54C, void>(p0, p1); } // AD2D28A1AFDFF131 ED159AE6
  static bool _0x8D770EBA5B1B0101(uint32_t p0) { return N::Invoke<0x8D770EBA5B1B0101, bool>(p0); } // 5991A01434CE9677 AF8CB3DF
  static void _0x632C6A73C8F25F0C(uint32_t p0) { N::Invoke<0x632C6A73C8F25F0C, void>(p0); } // B264C4D2F2B0A78B 45F72495
  static void DETACH_VEHICLE_FROM_CARGOBOB(uint32_t p0, uint32_t p1) { N::Invoke<0x2CC89657300D2B64, void>(p0, p1); } // 0E21D3DF1051399D 83D3D331
  static bool DETACH_VEHICLE_FROM_ANY_CARGOBOB(uint32_t p0) { return N::Invoke<0xA253E3933F868783, bool>(p0); } // ADF7BE450512C12F 50E0EABE
  static bool IS_VEHICLE_ATTACHED_TO_CARGOBOB(uint32_t p0, uint32_t p1) { return N::Invoke<0xA89E36906A28895D, bool>(p0, p1); } // D40148F22E81A1D9 5DEEC76C
  static uint32_t GET_VEHICLE_ATTACHED_TO_CARGOBOB(uint32_t p0) { return N::Invoke<0xEDBD27E7EA93FB0F, uint32_t>(p0); } // 873B82D42AC2B9E5 301A1D24
  static void ATTACH_VEHICLE_TO_CARGOBOB(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { N::Invoke<0x44D3AD547AC63124, void>(p0, p1, p2, p3, p4, p5); } // 4127F1D84E347769 607DC9D5
  static uint32_t _0xCAD7A8D45BC0D94A() { return N::Invoke<0xCAD7A8D45BC0D94A, uint32_t>(); } // 571FEB383F629926
  static uint32_t _0xE00234CC4F002AB8() { return N::Invoke<0xE00234CC4F002AB8, uint32_t>(); } // CBDB9B923CACC92D
  static bool _0x29753C26F80C767B(uint32_t p0) { return N::Invoke<0x29753C26F80C767B, bool>(p0); } // 1821D91AD4B56108 AF769B81
  static void _0xA6C79F8D4D356396(uint32_t p0) { N::Invoke<0xA6C79F8D4D356396, void>(p0); } // 7BEB0C7A235F6F3B 4D3C9A99
  static void GET_CLOSEST_VEHICLE_TURNING_BLOODSPRAY(uint32_t p0) { N::Invoke<0x77A9AC7B94B5BB2A, void>(p0); } // 9768CF648F54C804 A8211EE9
  static void GET_VEHICLE_HAS_BACK_RECURSIVE(uint32_t p0, float p1, float p2, bool p3) { N::Invoke<0x67884AB0AACAAB30, void>(p0, p1, p2, p3); } // 877C1EAEAC531023 3A8AB081
  static uint32_t _0x2DCC7C563CD529A9() { return N::Invoke<0x2DCC7C563CD529A9, uint32_t>(); } // CF1182F682F65307
  static uint32_t _0x203DC642E7630A75() { return N::Invoke<0x203DC642E7630A75, uint32_t>(); } // 6E08BF5B3722BAC9
  static uint32_t _0xD4E61ACF003187E0() { return N::Invoke<0xD4E61ACF003187E0, uint32_t>(); } // 9A665550F8DA349B
  static uint32_t _0x9192BAB331BFF3C9() { return N::Invoke<0x9192BAB331BFF3C9, uint32_t>(); } // BCBFCD9D1DAC19E2
  static uint32_t _0x4C75DF7BA89B72CB() { return N::Invoke<0x4C75DF7BA89B72CB, uint32_t>(); } // A17BAD153B51547E
  static uint32_t _0x789F4F7F07A8672A() { return N::Invoke<0x789F4F7F07A8672A, uint32_t>(); } // 66979ACF5102FD2F
  static uint32_t _0xAEECEC76B8753072() { return N::Invoke<0xAEECEC76B8753072, uint32_t>(); } // 6D8EAC07506291FB
  static uint32_t _0x2F71FA6015CC6FA5() { return N::Invoke<0x2F71FA6015CC6FA5, uint32_t>(); } // ED8286F71A819BAA
  static uint32_t _0xF37B092173E4D3CF() { return N::Invoke<0xF37B092173E4D3CF, uint32_t>(); } // 685D5561680D088B
  static uint32_t _0x47E70D41DB3BED97() { return N::Invoke<0x47E70D41DB3BED97, uint32_t>(); } // E301BD63E9E13CF0
  static uint32_t _0xFD2E6BFCCF3BE2E9() { return N::Invoke<0xFD2E6BFCCF3BE2E9, uint32_t>(); } // 9BDDC73CC6A115D4
  static uint32_t _0x56A604EF876CC3EE() { return N::Invoke<0x56A604EF876CC3EE, uint32_t>(); } // 56EB5E94318D3FB6
  static bool DOES_VEHICLE_HAVE_WEAPONS(uint32_t p0) { return N::Invoke<0xCEE115C93A00DD08, bool>(p0); } // 25ECB9F8017D98E0 B2E1E1FB
  static void _0xEF593E0776DEC46F(uint32_t p0, bool p1) { N::Invoke<0xEF593E0776DEC46F, void>(p0, p1); } // 2C4A1590ABF43E8B 2EC19A8B
  static void DISABLE_VEHICLE_WEAPON(bool p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xEA3D69B3C799A5A5, void>(p0, p1, p2, p3); } // F4FC6A6F67D8D856 A688B7D1
  static void _0xB8C724B62CAD8B88(uint32_t p0, bool p1) { N::Invoke<0xB8C724B62CAD8B88, void>(p0, p1); } // E05DD0E9707003A3 123E5B90
  static void _0xFE1272B9313C38F7(uint32_t p0, bool p1) { N::Invoke<0xFE1272B9313C38F7, void>(p0, p1); } // 21115BCD6E44656A EBC225C1
  static uint32_t GET_VEHICLE_CLASS(uint32_t p0) { return N::Invoke<0xDE9EA0A157B88C9F, uint32_t>(p0); } // 29439776AAA00A62 C025338E
  static uint32_t GET_VEHICLE_CLASS_FROM_NAME(uint32_t p0) { return N::Invoke<0xD8F4BF4B195C3E7E, uint32_t>(p0); } // DEDF1C8BD47C2200 EA469980
  static void SET_PLAYERS_LAST_VEHICLE(uint32_t p0) { N::Invoke<0x47167CB086F25EEA, void>(p0); } // BCDF8BAF56C87B6A DE86447D
  static void _0x28560775F6AAFE23(uint32_t p0, bool p1) { N::Invoke<0x28560775F6AAFE23, void>(p0, p1); } // 300504B23BD3B711 5130DB1E
  static void _0x87DC225C22879140(uint32_t p0, float p1) { N::Invoke<0x87DC225C22879140, void>(p0, p1); } // E5810AC70602F2F5 B6BE07E0
  static void _0x064D8A8521BE8A093(uint32_t p0, bool p1) { N::Invoke<0x64D8A8521BE8A093, void>(p0, p1); } // 068F64F2470F9656 4BB5605D
  static void _0x4F5059898B3587C(uint32_t p0, bool p1) { N::Invoke<0x4F5059898B3587C, void>(p0, p1); } // B8FBC8B1330CA9B4 51E0064F
  static uint32_t _0xFB7776FBE674C887() { return N::Invoke<0xFB7776FBE674C887, uint32_t>(); } // 10655FAB9915623D
  static void _0xFCED9D0DBA285B55(uint32_t p0, uint32_t p1) { N::Invoke<0xFCED9D0DBA285B55, void>(p0, p1); } // 79DF7E806202CE01 AEF9611C
  static void _0x63DD3B213F2C0B81(uint32_t p0, float p1) { N::Invoke<0x63DD3B213F2C0B81, void>(p0, p1); } // 9007A2F21DC108D4 585E49B6
  static void _0x3925840FDE5A42E0(uint32_t p0, float p1) { N::Invoke<0x3925840FDE5A42E0, void>(p0, p1); } // 6E0859B530A365CC 6E67FD35
  static void SET_VEHICLE_FRICTION_OVERRIDE(uint32_t p0, float p1) { N::Invoke<0xA5812DF7B62DF8E1, void>(p0, p1); } // 1837AF7C627009BA 32AFD42E
  static void SET_VEHICLE_MAX_STR_TRAP(uint32_t p0, bool p1) { N::Invoke<0xE9D3C37CF76A0473, void>(p0, p1); } // A37B9A517B133349 670913A4
  static uint32_t _0xFF5C93332E8D363B() { return N::Invoke<0xFF5C93332E8D363B, uint32_t>(); } // F78F94D60248C737
  static void GET_VEHICLE_DEFORMATION_GET_TREE(uint32_t p0, float p1) { N::Invoke<0x3EAC78A11B59A8B, void>(p0, p1); } // A46413066687A328 98A10A86
  static void _0xC62E422BAF266781(uint32_t p0, bool p1) { N::Invoke<0xC62E422BAF266781, void>(p0, p1); } // 5E569EC46EC21CAE BC649C49
  static void _0x68B365A0FD9E0B7B(uint32_t p0) { N::Invoke<0x68B365A0FD9E0B7B, void>(p0); } // 6D6AF961B72728AE 8DD9AA0C
  static uint32_t DOES_VEHICLE_EXIST_WITH_DECORATOR(uint32_t *p0) { return N::Invoke<0x86316CADCE37033B, uint32_t>(p0); } // 956B409B984D9BF7 39E68EDD
  static void _0x5E5BB71B5F3B933B(uint32_t p0, bool p1) { N::Invoke<0x5E5BB71B5F3B933B, void>(p0, p1); } // 41062318F23ED854 AA8BD440
  static uint32_t _0x2238234EE09F4669() { return N::Invoke<0x2238234EE09F4669, uint32_t>(); } // B5C51B5502E85E83
  static uint32_t _0x890433DA96DA9000() { return N::Invoke<0x890433DA96DA9000, uint32_t>(); } // 500873A45724C863
  static uint32_t _0xA4E0A95191DE44C2() { return N::Invoke<0xA4E0A95191DE44C2, uint32_t>(); } // B055A34527CB8FD7
  static void _0x3AC1D8BBACC66332(bool p0) { N::Invoke<0x3AC1D8BBACC66332, void>(p0); } // F796359A959DF65D B5CC548B
  static uint32_t _0x51A9720CD1E345DB() { return N::Invoke<0x51A9720CD1E345DB, uint32_t>(); } // 8E0A582209A62695
  static uint32_t _0xF5E00BA0DEA3A55A() { return N::Invoke<0xF5E00BA0DEA3A55A, uint32_t>(); } // 7619EEE8C886757F
  static uint32_t _0x64FB83DE98A88D4A() { return N::Invoke<0x64FB83DE98A88D4A, uint32_t>(); } // 2AA720E4287BF269
  static uint32_t _0xD9DD35FE09967D1F() { return N::Invoke<0xD9DD35FE09967D1F, uint32_t>(); } // 8C4B92553E4766A5
  static uint32_t _0x25F353877FB46EC6() { return N::Invoke<0x25F353877FB46EC6, uint32_t>(); } // 35E0654F4BAD7971
  static uint32_t _0x6E1F17D714C2BDCD() { return N::Invoke<0x6E1F17D714C2BDCD, uint32_t>(); } // B088E9A47AE6EDD5
  static uint32_t _0x2EAA7BDDEAA4BBB9() { return N::Invoke<0x2EAA7BDDEAA4BBB9, uint32_t>(); } // DBA3C090E3D74690
  static float _0x43B189EDC141B10F(uint32_t p0) { return N::Invoke<0x43B189EDC141B10F, float>(p0); } // F271147EB7B40F12 2B2FCC28
  static void _0x50F5E8CCDB56D46F(uint32_t p0, float p1) { N::Invoke<0x50F5E8CCDB56D46F, void>(p0, p1); } // B77D05AC8C78AADB 920C2517
  static uint32_t _0xC12F158FCF93E148() { return N::Invoke<0xC12F158FCF93E148, uint32_t>(); } // DF7E3EEB29642C38
  static float _0x5F4D2CE3D6F7FDB3(uint32_t p0) { return N::Invoke<0x5F4D2CE3D6F7FDB3, float>(p0); } // 53952FD2BAA19F17 B73A1486
  static uint32_t _0xE847B12B9FE6E806() { return N::Invoke<0xE847B12B9FE6E806, uint32_t>(); } // 84FD40F56075E816
  static uint32_t _0x79E406E0D865C5EC() { return N::Invoke<0x79E406E0D865C5EC, uint32_t>(); } // A7DCDF4DED40A8F4
  static uint32_t _0xCC5F5B95C94DBB6B() { return N::Invoke<0xCC5F5B95C94DBB6B, uint32_t>(); } // B8EF61207C2393A9
  static uint32_t _0x61FA5E3E786C033D() { return N::Invoke<0x61FA5E3E786C033D, uint32_t>(); } // D4C4642CB7F50B5D
  static uint32_t _0x718C1C990C2D29A3() { return N::Invoke<0x718C1C990C2D29A3, uint32_t>(); } // C361AA040D6637A8
  static uint32_t _0x449EB3BA51D79CE3() { return N::Invoke<0x449EB3BA51D79CE3, uint32_t>(); } // 99C82F8A139F3E4E
  static uint32_t _0x637CA8E9D4A8DB58() { return N::Invoke<0x637CA8E9D4A8DB58, uint32_t>(); } // E16142B94664DEFD
}

namespace OBJECT {
  static uint32_t CREATE_OBJECT(uint32_t p0, float p1, float p2, float p3, bool p4, bool p5, bool p6) { return N::Invoke<0xCEC985247737A30E, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 509D5878EB39E842 2F7AA05C
  static uint32_t CREATE_OBJECT_NO_OFFSET(uint32_t p0, float p1, float p2, float p3, bool p4, bool p5, bool p6) { return N::Invoke<0xD5699E0F473613BB, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 9A294B2138ABB884 58040420
  static void DELETE_OBJECT(uint32_t *p0) { N::Invoke<0x4095FD029041DD48, void>(p0); } // 539E0AE3E6634B9F D6EF9DA7
  static bool PLACE_OBJECT_ON_GROUND_PROPERLY(uint32_t p0) { return N::Invoke<0xC780BE928551FBA3, bool>(p0); } // 58A850EAEE20FAA3 8F95A20B
  static bool SLIDE_OBJECT(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7) { return N::Invoke<0x9E2DCADD0682D80, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2FDFF4107B8C1147 63BFA7A0
  static void SET_OBJECT_TARGETTABLE(uint32_t p0, bool p1) { N::Invoke<0x908207D40B588280, void>(p0, p1); } // 8A7391690F5AFD81 3F88CD86
  static void _0xF4B77EB64DBE71C5(uint32_t p0, bool p1) { N::Invoke<0xF4B77EB64DBE71C5, void>(p0, p1); } // 77F33F2CCF64B3AA 483C5C88
  static uint32_t GET_CLOSEST_OBJECT_OF_TYPE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x78608A3628DF265E, uint32_t>(p0, p1, p2, p3, p4, p5); } // E143FA2249364369 45619B33
  static bool HAS_OBJECT_BEEN_BROKEN(uint32_t p0) { return N::Invoke<0x74DEF5421E666A8A, bool>(p0); } // 8ABFB70C49CC43E2 FE21F891
  static bool HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x4BE4F5AA0A8BA74B, bool>(p0, p1, p2, p3, p4, p5); } // 761B0E69AC4D007E 6FC0353D
  static bool _0xBB39DF56191578AC(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return N::Invoke<0xBB39DF56191578AC, bool>(p0, p1, p2, p3, p4, p5); } // 46494A2475701343 7DB578DD
  static Vector3 _0xDA0070A0FA486D72(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0xDA0070A0FA486D72, Vector3>(p0, p1, p2, p3, p4, p5, p6); } // 163E252DE035A133 87A42A12
  static uint32_t _0x74DC7E6FCD7835B4(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return N::Invoke<0x74DC7E6FCD7835B4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 163F8B586BC95F2A 65213FC3
  static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint32_t p0, float p1, float p2, float p3, bool p4, float p5, bool p6) { N::Invoke<0x460FF6F9E3EECC69, void>(p0, p1, p2, p3, p4, p5, p6); } // F82D8F1926A02C3D 38C951A4
  static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint32_t p0, float p1, float p2, float p3, uint32_t *p4, uint32_t *p5) { N::Invoke<0x97F80A59AB9D636B, void>(p0, p1, p2, p3, p4, p5); } // EDC1A5B84AEF33FF 4B44A83D
  static void _0x1CD43CFDD3B0B347(uint32_t p0, float p1, float p2, float p3, bool p4, float p5, float p6, float p7) { N::Invoke<0x1CD43CFDD3B0B347, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 9B12F9A24FABEDB0 4E0A260B
  static void _0x47AAC79564A8EB7(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5, bool p6, bool p7) { N::Invoke<0x47AAC79564A8EB7, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 6F8838D03D1DC226 9D2D778D
  static void _0xC0693A4E5A09EA40(uint32_t p0) { N::Invoke<0xC0693A4E5A09EA40, void>(p0); } // 464D8E1427156FE4 00253286
  static void _0x9D9DF796E80DD27E(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0x9D9DF796E80DD27E, void>(p0, p1, p2, p3); } // 6BAB9442830C7F53 DF83DB47
  static uint32_t _0xE1750C23202FC256(uint32_t p0) { return N::Invoke<0xE1750C23202FC256, uint32_t>(p0); } // 160AA1B32F6139B8 D42A41C2
  static uint32_t _0x242ADC22B164B093(uint32_t p0) { return N::Invoke<0x242ADC22B164B093, uint32_t>(p0); } // 4BC2854478F3A749 D649B7E1
  static void _0x07B52121AC6D961DB(uint32_t p0, float p1, bool p2, bool p3) { N::Invoke<0x7B52121AC6D961DB, void>(p0, p1, p2, p3); } // 03C27E13B42A0E82 4F44AF21
  static void _0x9CDA01A72E31F0FA(uint32_t p0, float p1, bool p2, bool p3) { N::Invoke<0x9CDA01A72E31F0FA, void>(p0, p1, p2, p3); } // 9BA001CB45CBF627 47531446
  static void _0xDA14050EE6A337B7(uint32_t p0, float p1, bool p2, bool p3) { N::Invoke<0xDA14050EE6A337B7, void>(p0, p1, p2, p3); } // B6E6FBA95C7324AC 34883DE3
  static float _0x1F0F9203A3EBA8B9(uint32_t p0) { return N::Invoke<0x1F0F9203A3EBA8B9, float>(p0); } // 65499865FCA6E5EC B74C3BD7
  static void _0xF5390315F79F4262(uint32_t p0, bool p1, bool p2, bool p3) { N::Invoke<0xF5390315F79F4262, void>(p0, p1, p2, p3); } // C485E07E4F0B7958 B4A9A558
  static void _0x10F572BE0BC32042(uint32_t p0, bool p1) { N::Invoke<0x10F572BE0BC32042, void>(p0, p1); } // D9B71952F78A2640 ECE58AE0
  static void _0xD00B1EF6D4694DAC(uint32_t p0, bool p1) { N::Invoke<0xD00B1EF6D4694DAC, void>(p0, p1); } // A85A21582451E951 F736227C
  static bool _0x494E5E4C0E87278(uint32_t p0) { return N::Invoke<0x494E5E4C0E87278, bool>(p0); } // C153C43EA202C8C1 5AFCD8A1
  static bool IS_DOOR_CLOSED(uint32_t p0) { return N::Invoke<0xE02451F946C36866, bool>(p0); } // C531EE8A1145A149 48659CD7
  static void _0x2E4B0FF8AB92C441(bool p0) { N::Invoke<0x2E4B0FF8AB92C441, void>(p0); } // C7F29CA00F46350E 9BF33E41
  static void _0xE92BA274A38A886E() { N::Invoke<0xE92BA274A38A886E, void>(); } // 701FDA1E82076BA4 F592AD10
  static bool _0xC554BC20AA572C65(uint32_t p0) { return N::Invoke<0xC554BC20AA572C65, bool>(p0); } // DF97CDD4FC08FD34 17FF9393
  static bool _0xAC983D1173C7DDE1(float p0, float p1, float p2, uint32_t p3, uint32_t *p4) { return N::Invoke<0xAC983D1173C7DDE1, bool>(p0, p1, p2, p3, p4); } // 589F80B325CC82C5 E9AE494F
  static bool IS_GARAGE_EMPTY(uint32_t p0, bool p1, uint32_t p2) { return N::Invoke<0xBC4AF4A3E5D31AB3, bool>(p0, p1, p2); } // 90E47239EA1980B8 A8B37DEA
  static bool _0x0E672E0A3F64FFA5(uint32_t p0, uint32_t p1, float p2, uint32_t p3) { return N::Invoke<0xE672E0A3F64FFA5, bool>(p0, p1, p2, p3); } // 024A60DEB0EA69F0 C33ED360
  static bool _0x13956EF6168B4D82(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x13956EF6168B4D82, bool>(p0, p1, p2); } // 1761DC5D8471CBAA 41924877
  static bool _0x86E4029E8A464607(uint32_t p0, bool p1, bool p2, bool p3, uint32_t p4) { return N::Invoke<0x86E4029E8A464607, bool>(p0, p1, p2, p3, p4); } // 85B6C850546FDDE2 4BD59750
  static bool _0x3DF4DF064F265800(uint32_t p0, bool p1, bool p2, bool p3, uint32_t p4) { return N::Invoke<0x3DF4DF064F265800, bool>(p0, p1, p2, p3, p4); } // 673ED815D6E323B7 7B44D659
  static bool _0x95360860AF57F540(uint32_t p0, uint32_t p1, float p2, uint32_t p3) { return N::Invoke<0x95360860AF57F540, bool>(p0, p1, p2, p3); } // 372EF6699146A1E4 142C8F76
  static bool _0x693C3E5B5FD2274(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x693C3E5B5FD2274, bool>(p0, p1, p2); } // F0EED5A6BC7B237A 95A9AB2B
  static void _0x76FA8586F3F5B777(uint32_t p0, bool p1, bool p2, bool p3, bool p4) { N::Invoke<0x76FA8586F3F5B777, void>(p0, p1, p2, p3, p4); } // 190428512B240692 A565E27E
  static void _0xB5CD732E5D57335F(uint32_t p0, bool p1) { N::Invoke<0xB5CD732E5D57335F, void>(p0, p1); } // F2E1A7133DD356A6 43BB7E48
  static void _0xD949729FC0AF3248() { N::Invoke<0xD949729FC0AF3248, void>(); } // 66A49D021870FE88 6158959E
  static bool DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float p0, float p1, float p2, float p3, uint32_t p4, bool p5) { return N::Invoke<0x93EADDF7E52E1671, bool>(p0, p1, p2, p3, p4, p5); } // BFA48E2FF417213F 23FF2BA4
  static bool IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, bool p10, bool p11) { return N::Invoke<0x65EC44693BF9CB43, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 2A70BAE8883E4C81 73BCFFDC
  static void _0x817D46CED971A3C3(uint32_t p0, bool p1) { N::Invoke<0x817D46CED971A3C3, void>(p0, p1); } // 4D89D607CB3DD1D2 19B17769
  static void SET_OBJECT_PHYSICS_PARAMS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { N::Invoke<0x9547DA0F3BA0C9C4, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // F6DF6E90DE7DF90F E8D11C58
  static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(uint32_t p0, bool p1) { return N::Invoke<0x3735E22AB80C6902, float>(p0, p1); } // B6FBFD079B8D0596 F0B330AD
  static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uint32_t p0, bool p1) { N::Invoke<0xC3C2903A62F202C5, void>(p0, p1); } // 406137F8EF90EAF5 3E263AE1
  static bool IS_ANY_OBJECT_NEAR_POINT(float p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0x3D4E28BCE4C60954, bool>(p0, p1, p2, p3, p4); } // 397DC58FF00298D1 E9E46941
  static bool IS_OBJECT_NEAR_POINT(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x47B746365AD99ED1, bool>(p0, p1, p2, p3, p4); } // 8C90FE4B381BA60A 50A62C43
  static void _0xD652BD009496F421(uint32_t p0) { N::Invoke<0xD652BD009496F421, void>(p0); } // 4A39DB43E47CF3AA E3261B35
  static void _0x487D912F69CDACB6(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x487D912F69CDACB6, void>(p0, p1, p2); } // E7E4C198B0185900 1E82C2AE
  static uint32_t _0xB992A4CA741F9663() { return N::Invoke<0xB992A4CA741F9663, uint32_t>(); } // F9C1681347C8BD15
  static void TRACK_OBJECT_VISIBILITY(uint32_t p0) { N::Invoke<0xF30B2A027AD7244C, void>(p0); } // B252BC036B525623 46D06B9A
  static bool IS_OBJECT_VISIBLE(uint32_t p0) { return N::Invoke<0x5F6DACBDBCB51121, bool>(p0); } // 8B32ACE6326A7546 F4FD8AE4
  static void _0x80F0DC008199B220(uint32_t p0, bool p1) { N::Invoke<0x80F0DC008199B220, void>(p0, p1); } // C6033D32241F6FB5 F4A1A14A
  static void _0xC78A8CB9F2F5EA32(uint32_t p0, bool p1) { N::Invoke<0xC78A8CB9F2F5EA32, void>(p0, p1); } // EB6F1A9B5510A5D2 AF016CC1
  static void _0xB3D88F2B80DD36A1(uint32_t p0, bool p1) { N::Invoke<0xB3D88F2B80DD36A1, void>(p0, p1); } // BCE595371A5FBAAF 3A68AA46
  static uint32_t _0xCF09B28F3F88F4A2(float p0, float p1, float p2, float p3, uint32_t *p4) { return N::Invoke<0xCF09B28F3F88F4A2, uint32_t>(p0, p1, p2, p3, p4); } // B48FCED898292E52 A286DE96
  static void _0xCE30B2ED864F51C2(uint32_t p0, uint32_t p1) { N::Invoke<0xCE30B2ED864F51C2, void>(p0, p1); } // 5C29F698D404C5E1 21F51560
  static uint32_t _0x9D3DEC1AC03F824C(uint32_t p0) { return N::Invoke<0x9D3DEC1AC03F824C, uint32_t>(p0); } // 899BA936634A322E F1B8817A
  static bool _0x2EAEFE87D100B20F(uint32_t p0) { return N::Invoke<0x2EAEFE87D100B20F, bool>(p0); } // 52AF537A0C5B8AAD E08C834D
  static float _0x19560E452B054D33(uint32_t p0) { return N::Invoke<0x19560E452B054D33, float>(p0); } // 260EE4FDBDF4DB01 020497DE
  static uint32_t CREATE_PICKUP(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, bool p6, uint32_t p7) { return N::Invoke<0x134AE1EC4D58EAE4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // FBA08C503DD5FA58 5E14DF68
  static uint32_t CREATE_PICKUP_ROTATE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9, bool p10, uint32_t p11) { return N::Invoke<0xD55FB1F137D220, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 891804727E0A98B7 F015BFE2
  static uint32_t CREATE_AMBIENT_PICKUP(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6, bool p7, bool p8) { return N::Invoke<0xD5C2A73D33CEF9D5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 673966A0C0FD7171 17B99CE7
  static uint32_t CREATE_PORTABLE_PICKUP(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5) { return N::Invoke<0xA25854DB0CE2EB95, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2EAF1FDB2FB55698 8C886BE5
  static uint32_t _0x56F745470B5C8E6(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5) { return N::Invoke<0x56F745470B5C8E6, uint32_t>(p0, p1, p2, p3, p4, p5); } // 125494B98A21AAF7 56A02502
  static void ATTACH_PORTABLE_PICKUP_TO_PED(uint32_t p0, uint32_t p1) { N::Invoke<0xF19CA86BBE9184EB, void>(p0, p1); } // 8DC39368BDD57755 184F6AB3
  static void DETACH_PORTABLE_PICKUP_FROM_PED(uint32_t p0) { N::Invoke<0x26F3FA7C467DDD, void>(p0); } // CF463D1E9A0AECB1 1D094562
  static void _0x04D9EEC9EF4E88095(uint32_t p0, uint32_t p1) { N::Invoke<0x4D9EEC9EF4E88095, void>(p0, p1); } // 0BF3B3BD47D79C08 7EFBA039
  static void _0x98695D9039266A05(bool p0) { N::Invoke<0x98695D9039266A05, void>(p0); } // 78857FC65CADB909 A3CDF152
  static Vector3 GET_SAFE_PICKUP_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0xFF447C6CF8EB3D23, Vector3>(p0, p1, p2, p3, p4); } // 6E16BC2503FF1FF0 618B5F67
  static Vector3 GET_PICKUP_COORDS(uint32_t p0) { return N::Invoke<0xC615E5E6E1D987A1, Vector3>(p0); } // 225B8B35C88029B3 C2E1E2C5
  static void REMOVE_ALL_PICKUPS_OF_TYPE(uint32_t p0) { N::Invoke<0x86030A69928F48B, void>(p0); } // 27F9D613092159CF 40062C53
  static bool HAS_PICKUP_BEEN_COLLECTED(uint32_t p0) { return N::Invoke<0x561B9096FB80229, bool>(p0); } // 80EC48E6679313F9 0BE5CCED
  static void REMOVE_PICKUP(uint32_t p0) { N::Invoke<0x226EBEC6CC97441F, void>(p0); } // 3288D8ACAECD2AB2 64A7A0E0
  static void CREATE_MONEY_PICKUPS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x442FAAEC53563313, void>(p0, p1, p2, p3, p4, p5); } // 0589B5E791CE9B2B 36C9A5EA
  static bool DOES_PICKUP_EXIST(uint32_t p0) { return N::Invoke<0xBAE26BE2046B39E0, bool>(p0); } // AFC1CA75AD4074D1 9C6DA0B3
  static bool DOES_PICKUP_OBJECT_EXIST(uint32_t p0) { return N::Invoke<0x6A89ECA8C773F1E8, bool>(p0); } // D9EFB6DBF7DAAEA3 E0B32108
  static uint32_t _0xBAE2051B557AC082(uint32_t p0) { return N::Invoke<0xBAE2051B557AC082, uint32_t>(p0); } // 5099BC55630B25AE 6052E62E
  static uint32_t _0x2BC1E2B286C5722F() { return N::Invoke<0x2BC1E2B286C5722F, uint32_t>(); } // 378C08504160D0D
  static bool _0x24C3831FA3629798(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x24C3831FA3629798, bool>(p0, p1, p2, p3, p4); } // F9C36251F6E48E33 F139681B
  static void SET_PICKUP_REGENERATION_TIME(uint32_t p0, uint32_t p1) { N::Invoke<0x20D7FF6A3397A28D, void>(p0, p1); } // 78015C9B4B3ECC9D AB11267D
  static void _0xBFF6E297FADC1308(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xBFF6E297FADC1308, void>(p0, p1, p2); } // 616093EC6B139DD9 7FADB4B9
  static void _0xCDA3BEAC8F170CA1(uint32_t p0, bool p1) { N::Invoke<0xCDA3BEAC8F170CA1, void>(p0, p1); } // 88EAEC617CD26926 3A8F1BF7
  static void SET_TEAM_PICKUP_OBJECT(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x281D53F7B25AF6CF, void>(p0, p1, p2); } // 53E0DF1A2A3CF0CA 77687DC5
  static void _0x878D9EDEB26817BA(uint32_t p0, bool p1, bool p2) { N::Invoke<0x878D9EDEB26817BA, void>(p0, p1, p2); } // 92AEFB5F6E294023 CBB5F9B6
  static void _0x78B1C7D2A5DD1719(uint32_t p0, float p1, bool p2) { N::Invoke<0x78B1C7D2A5DD1719, void>(p0, p1, p2); } // A08FE5E49BDC39DD 276A7807
  static uint32_t _0x7F82B2733B0072CF(uint32_t p0) { return N::Invoke<0x7F82B2733B0072CF, uint32_t>(p0); } // DB41D07A45A6D4B7 000E92DC
  static void _0xD246762F9836A623(float p0) { N::Invoke<0xD246762F9836A623, void>(p0); } // 318516E02DE3ECE2 9879AC51
  static void _0xB050C97C7D94AD29(bool p0) { N::Invoke<0xB050C97C7D94AD29, void>(p0); } // 31F924B53EADDF65 DB18FA01
  static void _0xB37248259CE6903C(uint32_t p0, uint32_t p1) { N::Invoke<0xB37248259CE6903C, void>(p0, p1); } // F92099527DB8E2A7 A7E936FD
  static void _0x1B185625AF5C7D31() { N::Invoke<0x1B185625AF5C7D31, void>(); } // A2C1F5E92AFE49ED B241806C
  static void _0x286F4C53BCD3D10A(uint32_t p0) { N::Invoke<0x286F4C53BCD3D10A, void>(p0); } // 762DB2D380B48D04 D1BAAFB7
  static void _0xCB8F37084048526C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xCB8F37084048526C, void>(p0, p1, p2, p3); } // 3430676B11CDF21D 63B02FAD
  static void _0x5C9A488167F7C6B0(uint32_t p0, bool p1) { N::Invoke<0x5C9A488167F7C6B0, void>(p0, p1); } // B2D0BDE54F0E8E5A 132B6D92
  static uint32_t _0x0B2C3511A3929F7CC(uint32_t p0) { return N::Invoke<0xB2C3511A3929F7CC, uint32_t>(p0); } // 08F96CA6C551AD51 EDD01937
  static uint32_t _0x59B9C74DFDBFEBF0() { return N::Invoke<0x59B9C74DFDBFEBF0, uint32_t>(); } // 11D1E53A726891FE
  static uint32_t _0x4E7747B0AB0FB44() { return N::Invoke<0x4E7747B0AB0FB44, uint32_t>(); } // 971DA0055324D033
  static uint32_t _0x6606779CF30C6031(uint32_t p0) { return N::Invoke<0x6606779CF30C6031, uint32_t>(p0); } // 5EAAD83F8CFB4575 6AE36192
  static void SET_FORCE_OBJECT_THIS_FRAME(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x4E950DCC512F2DC9, void>(p0, p1, p2, p3); } // F538081986E49E9D 3DA41C1A
  static void _0xD693FF0257B8CE4(uint32_t p0) { N::Invoke<0xD693FF0257B8CE4, void>(p0); } // ADBE4809F19F927A 2048A7DD
}

namespace AI
{
  static void TASK_PAUSE(uint32_t p0, uint32_t p1) { N::Invoke<0x72E8B5193C65ADE0, void>(p0, p1); } // E73A266DB0CA9042 17A64668
  static void TASK_STAND_STILL(uint32_t p0, uint32_t p1) { N::Invoke<0xEA828B9C078AFB05, void>(p0, p1); } // 919BE13EED931959 6F80965D
  static void TASK_JUMP(uint32_t p0, bool p1) { N::Invoke<0xBFD761F6368B4459, void>(p0, p1); } // 0AE4086104E067B1 0356E3CE
  static void TASK_COWER(uint32_t p0, uint32_t p1) { N::Invoke<0x5FD5E7ABD766D498, void>(p0, p1); } // 3EB1FE9E8E908E15 9CF1C19B
  static void TASK_HANDS_UP(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x6A1BC4DBA3899CCB, void>(p0, p1, p2, p3, p4); } // F2EAB31979A7F910 8DCC19C5
  static void _0x828BF2C6D0604991(uint32_t p0, uint32_t p1) { N::Invoke<0x828BF2C6D0604991, void>(p0, p1); } // A98FCAFD7893C834 3AA39BE9
  static void TASK_OPEN_VEHICLE_DOOR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4) { N::Invoke<0x30676857605F837F, void>(p0, p1, p2, p3, p4); } // 965791A9A488A062 8EE06BF4
  static void TASK_ENTER_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, uint32_t *p6) { N::Invoke<0x36B42DB2912118E2, void>(p0, p1, p2, p3, p4, p5, p6); } // C20E50AA46D09CA8 B8689B4E
  static void TASK_LEAVE_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x9632B185BE7E73E6, void>(p0, p1, p2); } // D3DBCE61A490BE02 7B1141C6
  static uint32_t _0xB40A1F43CD4D8A86() { return N::Invoke<0xB40A1F43CD4D8A86, uint32_t>(); } // 9C00E77AF14B2DFF
  static void TASK_SKY_DIVE(uint32_t p0) { N::Invoke<0xAF49353C1FC67EB9, void>(p0); } // 601736CFE536B0A0 D3874AFA
  static void TASK_PARACHUTE(uint32_t p0, uint32_t p1) { N::Invoke<0xE9D9D75BBBE0B9BB, void>(p0, p1); } // D2F1C53C97EE81AB EC3060A2
  static void TASK_PARACHUTE_TO_TARGET(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x7C745FEDC575E3E6, void>(p0, p1, p2, p3); } // B33E291AFA6BD03A E0104D6C
  static void SET_PARACHUTE_TASK_TARGET(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xDFC69F1DA4D94734, void>(p0, p1, p2, p3); } // C313379AF0FCEDA7 6ED3AD81
  static void SET_PARACHUTE_TASK_THRUST(uint32_t p0, float p1) { N::Invoke<0x588351B84B1D2B39, void>(p0, p1); } // 0729BAC1B8C64317 D07C8AAA
  static void TASK_RAPPEL_FROM_HELI(uint32_t p0, float p1) { N::Invoke<0x7672007582A95DD0, void>(p0, p1); } // 09693B0312F91649 2C7ADB93
  static void TASK_VEHICLE_DRIVE_TO_COORD(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, float p9, float p10) { N::Invoke<0x5E44C1186E137E21, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // E2A2AA2F659D77A7 E4AC0387
  static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7) { N::Invoke<0x2EB35831F6E79042, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 158BB33F920D360C 1490182A
  static void TASK_VEHICLE_DRIVE_WANDER(uint32_t p0, uint32_t p1, float p2, uint32_t p3) { N::Invoke<0xF40D4EBDC0BA2C26, void>(p0, p1, p2, p3); } // 480142959D337D00 36EC0EB0
  static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, bool p8) { N::Invoke<0x3F79A7E4F9378558, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 304AE42E357B8C7E 2DF5A6AC
  static void TASK_GO_STRAIGHT_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, float p7) { N::Invoke<0x804E88DCA0C40FF8, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // D76B57B44F1E6F8B 80A9E7A7
  static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6) { N::Invoke<0xD190DDA2853B4257, void>(p0, p1, p2, p3, p4, p5, p6); } // 61E360B7E040D12E D26CAC68
  static void TASK_ACHIEVE_HEADING(uint32_t p0, float p1, uint32_t p2) { N::Invoke<0xDA74C6C73AFEC1F3, void>(p0, p1, p2); } // 93B93A37987F1F3D 0A0E9B42
  static void TASK_FLUSH_ROUTE() { N::Invoke<0x6FF338D505091D00, void>(); } // 841142A1376E9006 34219154
  static void TASK_EXTEND_ROUTE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xB257683F16A97A43, void>(p0, p1, p2); } // 1E7889778264843A 43271F69
  static void TASK_FOLLOW_POINT_ROUTE(uint32_t p0, float p1, uint32_t p2) { N::Invoke<0x45E132E6BDD57DC4, void>(p0, p1, p2); } // 595583281858626E B837C816
  static void TASK_GO_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, uint32_t p6) { N::Invoke<0xA3C87095904A382C, void>(p0, p1, p2, p3, p4, p5, p6); } // 6A071245EB0D1882 374827C2
  static void TASK_SMART_FLEE_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, bool p6, bool p7) { N::Invoke<0xF60985E3F774849A, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 94587F17E9C365D5 B2E686FC
  static void TASK_SMART_FLEE_PED(uint32_t p0, uint32_t p1, float p2, uint32_t p3, bool p4, bool p5) { N::Invoke<0xA859D289EEB2D72A, void>(p0, p1, p2, p3, p4, p5); } // 22B0D0E37CCB840D E52EB560
  static void TASK_REACT_AND_FLEE_PED(uint32_t p0, uint32_t p1) { N::Invoke<0x3A7E33F67D671817, void>(p0, p1); } // 72C896464915D1B1 8A632BD8
  static void TASK_SHOCKING_EVENT_REACT(uint32_t p0, uint32_t p1) { N::Invoke<0x84323C8E3C904072, void>(p0, p1); } // 452419CBD838065B 9BD00ACF
  static void TASK_WANDER_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6) { N::Invoke<0x3FA4EAFA569D808, void>(p0, p1, p2, p3, p4, p5, p6); } // E054346CA3A0F315 C6981FB9
  static void TASK_WANDER_STANDARD(uint32_t p0, float p1, uint32_t p2) { N::Invoke<0xB68382181B4C4177, void>(p0, p1, p2); } // BB9CE077274F6A1B AF59151A
  static void TASK_VEHICLE_PARK(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, bool p8) { N::Invoke<0x52AC38C099F0E2E2, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0F3E34E968EA374E 5C85FF90
  static void TASK_STEALTH_KILL(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4) { N::Invoke<0x4478749255C50A47, void>(p0, p1, p2, p3, p4); } // AA5DC05579D60BD9 0D64C2FA
  static void TASK_PLANT_BOMB(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0x47F7C734BD2CE357, void>(p0, p1, p2, p3, p4); } // 965FEC691D55E9BF 33457535
  static void TASK_FOLLOW_NAV_MESH_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8) { N::Invoke<0x3F07E364A21EBC20, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 15D3A79D4E44B913 FE4A10D9
  static void _0x76886ABF5A09CC94(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8, float p9, float p10, float p11) { N::Invoke<0x76886ABF5A09CC94, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 17F58B88D085DBAC 6BF6E296
  static void SET_PED_PATH_CAN_USE_CLIMBOVERS(uint32_t p0, bool p1) { N::Invoke<0x22FBA3B6C028D989, void>(p0, p1); } // 8E06A6FE76C9EFF4 B7B7D442
  static void SET_PED_PATH_CAN_USE_LADDERS(uint32_t p0, bool p1) { N::Invoke<0x93FFA00750A79F0D, void>(p0, p1); } // 77A5B103C87F476E 53A879EE
  static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(uint32_t p0, bool p1) { N::Invoke<0xAF5129FECA4F2FB3, void>(p0, p1); } // E361C5C71C431A4F 394B7AC9
  static void _0x39E6B9422C66D88(uint32_t p0, float p1) { N::Invoke<0x39E6B9422C66D88, void>(p0, p1); } // 88E32DB8C1A4AA4B 55E06443
  static void SET_PED_PATHS_WIDTH_PLANT(uint32_t p0, bool p1) { N::Invoke<0x5539FA8B525757E, void>(p0, p1); } // F35425A4204367EC 9C606EE3
  static void SET_PED_PATH_PREFER_TO_AVOID_WATER(uint32_t p0, bool p1) { N::Invoke<0x6BD2E45DDF8E881F, void>(p0, p1); } // 38FE1EC73743793C 0EA39A29
  static void SET_PED_PATH_AVOID_FIRE(uint32_t p0, bool p1) { N::Invoke<0xF91025A9DA5DF60A, void>(p0, p1); } // 4455517B28441E60 DCC5B934
  static void _0x9A82C218923EF8B6(float p0) { N::Invoke<0x9A82C218923EF8B6, void>(p0); } // 6C6B148586F934F7 2AFB14B8
  static uint32_t GET_NAVMESH_ROUTE_DISTANCE_REMAINING(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x4DF6F5FCDD26D405, uint32_t>(p0, p1, p2); } // C6F5C0BCDC74D62D D9281778
  static uint32_t GET_NAVMESH_ROUTE_RESULT(uint32_t p0) { return N::Invoke<0x5AB2085F8EE3E606, uint32_t>(p0); } // 632E831F382A0FA8 96491602
  static uint32_t _0xE4F5339B0E6F4B40() { return N::Invoke<0xE4F5339B0E6F4B40, uint32_t>(); } // 3E38E28A1D80DDF6
  static void TASK_GO_TO_COORD_ANY_MEANS(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, bool p6, uint32_t p7, float p8) { N::Invoke<0x35A120A011FD797, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 5BC448CB78FA3E88 F91DF93B
  static void _0x2A6FEBABC0830CA9(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { N::Invoke<0x2A6FEBABC0830CA9, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 1DD45F9ECFDB1BC9 094B75EF
  static void _0x5AD57569258490A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { N::Invoke<0x5AD57569258490A, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // B8ECD61F531A7B02 86DC03F9
  static void TASK_PLAY_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, uint32_t p5, uint32_t p6, float p7, bool p8, uint32_t p9, bool p10) { N::Invoke<0xEC0A546609840086, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // EA47FE3719165B94 5AB552C6
  static void _0xCC9E4F7F91DCEEA8(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, uint32_t p11, uint32_t p12, float p13, uint32_t p14, uint32_t p15) { N::Invoke<0xCC9E4F7F91DCEEA8, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 83CDB10EA29B370B 3DDEB0E6
  static void STOP_ANIM_TASK(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3) { N::Invoke<0xB7672D87B547201C, void>(p0, p1, p2, p3); } // 97FF36A1D40EA00A 2B520A57
  static void TASK_SCRIPTED_ANIMATION(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4, float p5) { N::Invoke<0x768EEA559F67C7FD, void>(p0, p1, p2, p3, p4, p5); } // 126EF75F1E17ABE5 FC2DCF47
  static void PLAY_ENTITY_SCRIPTED_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4, float p5) { N::Invoke<0x6E213F3DCF0CC4B5, void>(p0, p1, p2, p3, p4, p5); } // 77A1EEC547E7FCF1 02F72AE5
  static void STOP_ANIM_PLAYBACK(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x7292FF90BD27F729, void>(p0, p1, p2); } // EE08C992D238C5D1 E5F16398
  static void SET_ANIM_WEIGHT(uint32_t p0, float p1, uint32_t p2, uint32_t p3, bool p4) { N::Invoke<0x812C9571BF41711C, void>(p0, p1, p2, p3, p4); } // 207F1A47C0342F48 17229D98
  static void SET_ANIM_RATE(uint32_t p0, float p1, uint32_t p2, bool p3) { N::Invoke<0x21EFFE057FB7832F, void>(p0, p1, p2, p3); } // 032D49C5E359C847 6DB46584
  static void SET_ANIM_LOOPED(uint32_t p0, bool p1, uint32_t p2, bool p3) { N::Invoke<0x1BE0CA5D56BD30B7, void>(p0, p1, p2, p3); } // 70033C3CC29A1FF4 095D61A4
  static void _0x473C1DFC8AF8A9EB(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4, float p5, bool p6, bool p7) { N::Invoke<0x473C1DFC8AF8A9EB, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 8FBB6758B3B3E9EC 1582162C
  static uint32_t _0xB081DB5BC363F5EB() { return N::Invoke<0xB081DB5BC363F5EB, uint32_t>(); } // 3FA00D4F4641BFAE
  static bool _0x8050E0E02CA072A2(uint32_t p0) { return N::Invoke<0x8050E0E02CA072A2, bool>(p0); } // B8EBB1E9D3588C10 500B6805
  static float _0x3A14E40EB6F91876(uint32_t p0) { return N::Invoke<0x3A14E40EB6F91876, float>(p0); } // 47619ABE8B268C60 7B72AFD1
  static float _0x79EEB199FF3C3200(uint32_t p0) { return N::Invoke<0x79EEB199FF3C3200, float>(p0); } // 1EE0F68A7C25DEC6 EF8C3959
  static void TASK_VEHICLE_PLAY_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xF1D4D0F36FDE4539, void>(p0, p1, p2); } // 69F5C3BD0F3EBD89 2B28F598
  static void TASK_LOOK_AT_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0xE6D93A0484388DB3, void>(p0, p1, p2, p3, p4, p5, p6); } // 6FA46612594F7973 7B784DD8
  static void TASK_LOOK_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x8E759206778E571F, void>(p0, p1, p2, p3, p4); } // 69F4BE8C8CC4796C 991D6619
  static void TASK_CLEAR_LOOK_AT(uint32_t p0) { N::Invoke<0xCBA47B699F417E4D, void>(p0); } // 0F804F1DB19B9689 60EB4054
  static void OPEN_SEQUENCE_TASK(uint32_t *p0) { N::Invoke<0xB5DC017AFD430D1B, void>(p0); } // E8854A4326B9E12B ABA6923E
  static void CLOSE_SEQUENCE_TASK(uint32_t p0) { N::Invoke<0x6EE8A5CF9AC75F12, void>(p0); } // 39E72BC99E6360CB 1A7CEBD0
  static void TASK_PERFORM_SEQUENCE(uint32_t p0, uint32_t p1) { N::Invoke<0x8229311A391A4EC6, void>(p0, p1); } // 5ABA3986D90D8A3B 4D9FBD11
  static void CLEAR_SEQUENCE_TASK(uint32_t *p0) { N::Invoke<0x9F77DFFC61FCB68C, void>(p0); } // 3841422E9C488D8C 47ED03CE
  static void SET_SEQUENCE_TO_REPEAT(uint32_t p0, uint32_t p1) { N::Invoke<0xC3DFF4EEE866DBF6, void>(p0, p1); } // 58C70CF3A41E4AE7 CDDF1508
  static uint32_t GET_SEQUENCE_PROGRESS(uint32_t p0) { return N::Invoke<0xCE91B0C5B23E0134, uint32_t>(p0); } // 00A9010CFE1E3533 A3419909
  static bool GET_IS_TASK_ACTIVE(uint32_t p0, uint32_t p1) { return N::Invoke<0x7ECD7807CAEF4F14, bool>(p0, p1); } // B0760331C7AA4155 86FDDF55
  static uint32_t GET_SCRIPT_TASK_STATUS(uint32_t p0, uint32_t p1) { return N::Invoke<0xEC043AB2FEE0E94F, uint32_t>(p0, p1); } // 77F1BEB8863288D5 B2477B23
  static uint32_t _0xC6F1531F56379804(uint32_t p0) { return N::Invoke<0xC6F1531F56379804, uint32_t>(p0); } // 534AEBA6E5ED4CAB AFA914EF
  static void TASK_LEAVE_ANY_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x48367A1F7C9A1041, void>(p0, p1, p2); } // 504D54DF3F6F2247 DBDD79FA
  static void TASK_AIM_GUN_SCRIPTED(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0xC2AA0AE3AAEE938, void>(p0, p1, p2, p3); } // 7A192BE16D373D00 9D296BCD
  static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, bool p6, bool p7) { N::Invoke<0x73F7EDC0706A0721, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 8605AF0DE8B3A5AC FD517CE3
  static void _0x6A07493CAE8D58BA(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5) { N::Invoke<0x6A07493CAE8D58BA, void>(p0, p1, p2, p3, p4, p5); } // 9724FB59A3E72AD0 67E73525
  static uint32_t _0xBD5F98571DC7E007(uint32_t p0) { return N::Invoke<0xBD5F98571DC7E007, uint32_t>(p0); } // 3A8CADC7D37AACC5 249EB4EB
  static void TASK_AIM_GUN_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0xCDBB862D670BA90E, void>(p0, p1, p2, p3); } // 9B53BB6E8943AF53 BE32B3B6
  static void TASK_TURN_PED_TO_FACE_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xDE75E9DE5B6221E1, void>(p0, p1, p2); } // 5AD23D40115353AC 3C37C767
  static void TASK_AIM_GUN_AT_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4, bool p5, bool p6) { N::Invoke<0xC0E67684D7119EC2, void>(p0, p1, p2, p3, p4, p5, p6); } // 6671F3EEC681BDA1 FBF44AD3
  static void TASK_SHOOT_AT_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { N::Invoke<0xE111AC615DB26914, void>(p0, p1, p2, p3, p4, p5); } // 46A6CC01E0826106 601C22E3
  static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uint32_t p0, uint32_t p1) { N::Invoke<0x1DE8910EDFD23539, void>(p0, p1); } // 7AA80209BDA643EB BEAF8F67
  static void CLEAR_PED_TASKS(uint32_t p0) { N::Invoke<0xAC57FBF981AB03F4, void>(p0); } // E1EF3C1216AFF2CD DE3316AB
  static void CLEAR_PED_SECONDARY_TASK(uint32_t p0) { N::Invoke<0x1E61DAA6A0EEC652, void>(p0); } // 176CECF6F920D707 A635F451
  static void TASK_EVERYONE_LEAVE_VEHICLE(uint32_t p0) { N::Invoke<0x2703A6A8CAED739, void>(p0); } // 7F93691AB4B92272 C1971F30
  static void TASK_GOTO_ENTITY_OFFSET(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, uint32_t p6) { N::Invoke<0x896A419A31D7A17A, void>(p0, p1, p2, p3, p4, p5, p6); } // E39B4FF4FDEBDE27 1A17A85E
  static void TASK_GOTO_ENTITY_OFFSET_XY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, uint32_t p7) { N::Invoke<0x87FB7F2E50C7D2C7, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 338E7EF52B6095A9 BC1E3D0A
  static void TASK_TURN_PED_TO_FACE_COORD(uint32_t p0, float p1, float p2, float p3, uint32_t p4) { N::Invoke<0x211FA3DF75B31A84, void>(p0, p1, p2, p3, p4); } // 1DDA930A0AC38571 30463D73
  static void TASK_VEHICLE_TEMP_ACTION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xDD4FB99FF9DED807, void>(p0, p1, p2, p3); } // C429DCEEB339E129 0679DFB8
  static void TASK_VEHICLE_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, float p6, float p7, bool p8) { N::Invoke<0xD09813BDAA102212, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 659427E0EF36BCDE 20609E56
  static void TASK_VEHICLE_MISSION_PED_TARGET(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, float p6, float p7, bool p8) { N::Invoke<0x9C373E78BA27BAA4, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 9454528DF15D657A C81C4677
  static void TASK_VEHICLE_MISSION_COORS_TARGET(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8, float p9, bool p10) { N::Invoke<0xFF2E41BCADB4BDD3, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // F0AF20AA7731F8C3 6719C109
  static void TASK_VEHICLE_ESCORT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, uint32_t p5, float p6, uint32_t p7, float p8) { N::Invoke<0x3CCCE31CB8F3E53E, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0FA6E4B75F302400 9FDCB250
  static uint32_t _0x1B26509743D8871A() { return N::Invoke<0x1B26509743D8871A, uint32_t>(); } // FC545A9F0626E3B6
  static void TASK_VEHICLE_CHASE(uint32_t p0, uint32_t p1) { N::Invoke<0x7CA63949C26D0A29, void>(p0, p1); } // 3C08A8E30363B353 55634798
  static void TASK_VEHICLE_HELI_PROTECT(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4, float p5, uint32_t p6, uint32_t p7) { N::Invoke<0x4966BCE711064E46, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 1E09C32048FEFD1C 0CB415EE
  static void _0x43E39A7596DB53D2(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x43E39A7596DB53D2, void>(p0, p1, p2); } // CC665AAC360D31E7 2A83083F
  static void _0x30C3A9C4DCB8DDD1(uint32_t p0, float p1) { N::Invoke<0x30C3A9C4DCB8DDD1, void>(p0, p1); } // 639B642FACBE4EDD 04FD3EE7
  static void TASK_HELI_CHASE(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { N::Invoke<0x5BA5037866D3D3C8, void>(p0, p1, p2, p3, p4); } // AC83B1DB38D0ADA0 AC290A21
  static void TASK_PLANE_CHASE(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { N::Invoke<0x9FCD548B225A1823, void>(p0, p1, p2, p3, p4); } // 2D2386F273FF7A25 12FA1C28
  static void TASK_PLANE_LAND(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7) { N::Invoke<0xC223F8B730B4A33A, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // BF19721FA34D32C0 5F7E23EA
  static void TASK_HELI_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, float p8, float p9, float p10, uint32_t p11, uint32_t p12, float p13, uint32_t p14) { N::Invoke<0x59DFC08A31F08D05, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // DAD029E187A2BEB4 0C143E97
  static void TASK_PLANE_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, float p8, float p9, float p10, uint32_t p11, uint32_t p12) { N::Invoke<0x8276BF488762405A, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 23703CD154E83B88 1D007E65
  static void TASK_BOAT_MISSION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, float p4, float p5, float p6, uint32_t p7, float p8, uint32_t p9, float p10, uint32_t p11) { N::Invoke<0x9F50D3F7FDB2D584, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 15C86013127CE63F 5865B031
  static void TASK_DRIVE_BY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, uint32_t p7, bool p8, uint32_t p9) { N::Invoke<0xE9A858D330662DC7, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 2F8AF0E82773A171 2B84D1C4
  static void SET_DRIVEBY_TASK_TARGET(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { N::Invoke<0x7C965DF0F9C0AAC0, void>(p0, p1, p2, p3, p4, p5); } // E5B302114D8162EE DA6A6FC1
  static void _0x1700E1858C4E6FB7(uint32_t p0) { N::Invoke<0x1700E1858C4E6FB7, void>(p0); } // C35B5CDB2824CF69 9B76F7E6
  static bool _0xEE15333D996F6258(uint32_t p0) { return N::Invoke<0xEE15333D996F6258, bool>(p0); } // 8785E6E40C7A8818 B23F46E6
  static bool _0x1E7451EF0B77B3F1(uint32_t p0) { return N::Invoke<0x1E7451EF0B77B3F1, bool>(p0); } // DCFE42068FE0135A 500D9244
  static void _0x762AA1B4BF06CCA8(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { N::Invoke<0x762AA1B4BF06CCA8, void>(p0, p1, p2, p3, p4, p5); } // CCD892192C6D2BB9 98713C68
  static bool _0x781DE3BEC4109681(uint32_t p0) { return N::Invoke<0x781DE3BEC4109681, bool>(p0); } // A320EF046186FA3B 291E938C
  static void TASK_USE_MOBILE_PHONE(uint32_t p0, uint32_t p1) { N::Invoke<0xE2E6B3E5187DD69C, void>(p0, p1); } // BD2A8EC3AF4DE7DB 225A38C8
  static void TASK_USE_MOBILE_PHONE_TIMED(uint32_t p0, uint32_t p1) { N::Invoke<0xEBD837FADD98C7B2, void>(p0, p1); } // 5EE02954A14C69DB C99C19F5
  static void TASK_CHAT_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7) { N::Invoke<0xA697975DB03467E3, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 8C338E0263E4FD19 A2BE1821
  static void TASK_WARP_PED_INTO_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xF57092AA9D04B9A5, void>(p0, p1, p2); } // 9A7D091411C5F684 65D4A35D
  static void TASK_SHOOT_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x164444F49EF1FE97, void>(p0, p1, p2, p3); } // 08DA95E8298AE772 AC0631C9
  static void TASK_CLIMB(uint32_t p0, bool p1) { N::Invoke<0x3B9A2E42F099F70F, void>(p0, p1); } // 89D9FCC2435112F1 90847790
  static void TASK_CLIMB_LADDER(uint32_t p0, bool p1) { N::Invoke<0xD949233C5686F928, void>(p0, p1); } // B6C987F9285A3814 35BB4EE0
  static void CLEAR_PED_TASKS_IMMEDIATELY(uint32_t p0) { N::Invoke<0xCEBD1B99CF343672, void>(p0); } // AAA34F8A7CB32098 BC045625
  static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xBA9D0841C3991AA6, void>(p0, p1, p2, p3); } // 89221B16730234F0 FA60601B
  static void SET_NEXT_DESIRED_MOVE_STATE(uint32_t p0) { N::Invoke<0x7CB3215EE53F13C3, void>(p0); } // F1B9F16E89E2C93A 4E937D57
  static void SET_PED_DESIRED_MOVE_BLEND_RATIO(uint32_t p0, float p1) { N::Invoke<0xB317E9B67CA4E777, void>(p0, p1); } // 1E982AC8716912C5 C65FC712
  static uint32_t GET_PED_DESIRED_MOVE_BLEND_RATIO(uint32_t p0) { return N::Invoke<0x6D643C3F9C6475A0, uint32_t>(p0); } // 8517D4A6CA8513ED 5FEFAB72
  static void TASK_GOTO_ENTITY_AIMING(uint32_t p0, uint32_t p1, float p2, float p3) { N::Invoke<0xF9303F10CD08639C, void>(p0, p1, p2, p3); } // A9DA48FAB8A76C12 F1C493CF
  static void TASK_SET_DECISION_MAKER(uint32_t p0, uint32_t p1) { N::Invoke<0xF3B83508A8BDCE7, void>(p0, p1); } // EB8517DDA73720DA 830AD50C
  static void TASK_SET_SPHERE_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0xC300D93560D26B2D, void>(p0, p1, p2, p3, p4); } // 933C06518B52A9A4 9F3C5D6A
  static void TASK_CLEAR_DEFENSIVE_AREA(uint32_t p0) { N::Invoke<0x60729150755250D7, void>(p0); } // 95A6C46A31D1917D 7A05BF0D
  static void TASK_PED_SLIDE_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5) { N::Invoke<0x3992EA19833D4C7E, void>(p0, p1, p2, p3, p4, p5); } // D04FE6765D990A06 225380EF
  static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6) { N::Invoke<0x42F942232B00FA7B, void>(p0, p1, p2, p3, p4, p5, p6); } // 5A4A6A6D3DC64F52 38A995C1
  static uint32_t ADD_COVER_POINT(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5, uint32_t p6, bool p7) { return N::Invoke<0xE887BFB496769F95, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // D5C12A75C7B9497F A0AF0B98
  static void REMOVE_COVER_POINT(uint32_t p0) { N::Invoke<0xC681964D4B63AFB2, void>(p0); } // AE287C923D891715 0776888B
  static bool _0xBDF8888E8D204E71(float p0, float p1, float p2) { return N::Invoke<0xBDF8888E8D204E71, bool>(p0, p1, p2); } // A98B8E3C088E5A31 29F97A71
  static Vector3 _0x79F5828F532C5F8B(uint32_t p0) { return N::Invoke<0x79F5828F532C5F8B, Vector3>(p0); } // 594A1028FC2A3E85 C6B6CCC1
  static void TASK_COMBAT_PED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x247B2966C6C2A4C1, void>(p0, p1, p2, p3); } // F166E48407BAC484 CB0D8932
  static void TASK_COMBAT_PED_TIMED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x39FFBC4483BA1095, void>(p0, p1, p2, p3); } // 944F30DCB7096BDE F5CA2A45
  static void TASK_SEEK_COVER_FROM_POS(uint32_t p0, float p1, float p2, float p3, uint32_t p4, bool p5) { N::Invoke<0x3CB09372626A726B, void>(p0, p1, p2, p3, p4, p5); } // 75AC2B60386D89F2 83F18EE9
  static void TASK_SEEK_COVER_FROM_PED(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0x4F2B9803D4E71CDB, void>(p0, p1, p2, p3); } // 84D32B3BEC531324 C1EC907E
  static void TASK_SEEK_COVER_TO_COVER_POINT(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5, bool p6) { N::Invoke<0x60DA60C3C6F13F3D, void>(p0, p1, p2, p3, p4, p5, p6); } // D43D95C7A869447F 3D026B29
  static void TASK_SEEK_COVER_TO_COORDS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, bool p8) { N::Invoke<0x32F3BA3025BBEF0D, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 39246A6958EF072C FFFE754E
  static void TASK_PUT_PED_DIRECTLY_INTO_COVER(uint32_t p0, float p1, float p2, float p3, uint32_t p4, bool p5, float p6, bool p7, bool p8, uint32_t p9, bool p10) { N::Invoke<0x63B567F3939008D0, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 4172393E6BE1FECE C9F00E68
  static void TASK_EXIT_COVER(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { N::Invoke<0xB1D2969E8E180598, void>(p0, p1, p2, p3, p4); } // 79B258E397854D29 C829FAC9
  static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0x5BE268EEA70577CE, void>(p0, p1, p2, p3, p4, p5); } // 1C6CD14A876FFE39 79E1D27D
  static void TASK_TOGGLE_DUCK(uint32_t p0, uint32_t p1) { N::Invoke<0x383BD3A413F0EEF, void>(p0, p1); } // AC96609B9995EDF8 61CFBCBF
  static void TASK_GUARD_CURRENT_POSITION(uint32_t p0, float p1, float p2, bool p3) { N::Invoke<0xADF2D93E45C64741, void>(p0, p1, p2, p3); } // 4A58A47A72E3FCB4 2FB099E9
  static void _0x26852A07A81C64FA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { N::Invoke<0x26852A07A81C64FA, void>(p0, p1, p2, p3, p4, p5, p6); } // D2A207EEBDF9889B 7AF0133D
  static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7, float p8, float p9, float p10) { N::Invoke<0xC548DB31D2669A9D, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // C946FE14BE0EB5E2 86B76CB7
  static void TASK_STAND_GUARD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t *p5) { N::Invoke<0x47C890E6BB15D18, void>(p0, p1, p2, p3, p4, p5); } // AE032F8BBA959E90 D130F636
  static void SET_DRIVE_TASK_CRUISE_SPEED(uint32_t p0, float p1) { N::Invoke<0x4369A55DCA9625D1, void>(p0, p1); } // 5C9B84BD7D31D908 3CEC07B1
  static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(uint32_t p0, float p1) { N::Invoke<0x62E1AC14633FFF9D, void>(p0, p1); } // 404A5AA9B9F0B746 7FDF6131
  static void _0x98ED5A7433ACC92D(uint32_t p0, uint32_t p1) { N::Invoke<0x98ED5A7433ACC92D, void>(p0, p1); } // DACE1BE37D88AF67 59C5FAD7
  static void ADD_COVER_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9) { N::Invoke<0x1C5CE301ABC068C3, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 45C597097DD7CB81 3536946F
  static void REMOVE_ALL_COVER_BLOCKING_AREAS() { N::Invoke<0xAB52DEC65AB36D92, void>(); } // DB6708C0B46F56D8 CF9221A7
  static void TASK_START_SCENARIO_IN_PLACE(uint32_t p0, uint32_t *p1, uint32_t p2, bool p3) { N::Invoke<0x371C90C63129A983, void>(p0, p1, p2, p3); } // 142A02425FF02BD9 E50D6DDE
  static void TASK_START_SCENARIO_AT_POSITION(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, uint32_t p6, bool p7, bool p8) { N::Invoke<0x94BB2E27C219F070, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // FA4EFC79F69D4F07 AA2C4AC2
  static void TASK_USE_NEAREST_SCENARIO_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0x3BE6E1931460594, void>(p0, p1, p2, p3, p4, p5); } // 277F471BA9DB000B 9C50FBF0
  static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0xB9CCB1B9F8BDAE90, void>(p0, p1, p2, p3, p4, p5); } // 58E2E0F23F6B76C3 1BE9D65C
  static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0xA6D0F8A56436D220, void>(p0, p1, p2, p3, p4, p5); } // 9FDA1B3D7E7028B3 E32FFB22
  static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0x6B722A1FC6ED3F7C, void>(p0, p1, p2, p3, p4, p5); } // 97A28E63F0BA5631 BAB4C0AE
  static bool DOES_SCENARIO_EXIST_IN_AREA(float p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0xE08642374BA21D0D, bool>(p0, p1, p2, p3, p4); } // 5A59271FFADD33C1 FA7F5047
  static bool _0x04E39D17DBE597E54(float p0, float p1, float p2, uint32_t *p3, float p4, bool p5) { return N::Invoke<0x4E39D17DBE597E54, bool>(p0, p1, p2, p3, p4, p5); } // 0A9D0C2A3BBC86C1 0FB138A5
  static bool IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0x38EC498516026D7, bool>(p0, p1, p2, p3, p4); } // 788756D73AC2E07C 697FC008
  static bool _0x48E978B24D747113(uint32_t p0) { return N::Invoke<0x48E978B24D747113, bool>(p0); } // 295E3CCEC879CCD7 9BE9C691
  static void _0x7399206A9DF244B6(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x7399206A9DF244B6, void>(p0, p1, p2); } // 748040460F8DF5DC 1984A5D1
  static bool DOES_SCENARIO_GROUP_EXIST(uint32_t *p0) { return N::Invoke<0xD9CD5BC005208DE9, bool>(p0); } // F9034C136C9E00D3 5F072EB9
  static bool IS_SCENARIO_GROUP_ENABLED(uint32_t *p0) { return N::Invoke<0xD607451E86AE237, bool>(p0); } // 367A09DED4E05B99 90991122
  static void SET_SCENARIO_GROUP_ENABLED(uint32_t *p0, bool p1) { N::Invoke<0x5430610676C3EDD, void>(p0, p1); } // 02C8E5B49848664E 116997B1
  static void _0xED6215F03FE94AEE() { N::Invoke<0xED6215F03FE94AEE, void>(); } // DD902D0349AFAD3A BF55025D
  static void SET_EXCLUSIVE_SCENARIO_GROUP(uint32_t *p0) { N::Invoke<0x89D5B8B112E0D7BE, void>(p0); } // 535E97E1F7FC0C6A 59DB8F26
  static void RESET_EXCLUSIVE_SCENARIO_GROUP() { N::Invoke<0xCBA9F3D66C32D9BE, void>(); } // 4202BBCB8684563D 17F9DFE8
  static bool IS_SCENARIO_TYPE_ENABLED(uint32_t *p0) { return N::Invoke<0x5C90A8577C429AA0, bool>(p0); } // 3A815DB3EA088722 AE37E969
  static void SET_SCENARIO_TYPE_ENABLED(uint32_t *p0, bool p1) { N::Invoke<0xF81DFFDCEDAA4951, void>(p0, p1); } // EB47EC4E34FB7EE1 DB18E5DE
  static void _0x0BA3015D146EFDE5B() { N::Invoke<0xBA3015D146EFDE5B, void>(); } // 0D40EE2A7F2B2D6D F58FDEB4
  static bool IS_PED_ACTIVE_IN_SCENARIO(uint32_t p0) { return N::Invoke<0x548BA5F69EA895F7, bool>(p0); } // AA135F9482C82CC3 05038F1A
  static uint32_t _0x28A1E5528F3E8A1D() { return N::Invoke<0x28A1E5528F3E8A1D, uint32_t>(); } // 621C6E4729388E41
  static uint32_t _0x5115BA73CBAF8984() { return N::Invoke<0x5115BA73CBAF8984, uint32_t>(); } // 8FD89A6240813FD0
  static void TASK_COMBAT_HATED_TARGETS_IN_AREA(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0x2D31B27E6F350915, void>(p0, p1, p2, p3, p4, p5); } // 4CF5F55DAC3280A0 DF099E18
  static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(uint32_t p0, float p1, uint32_t p2) { N::Invoke<0xF266F4D5C3D0BAE2, void>(p0, p1, p2); } // 7BF835BB9E2698C8 2E7064E4
  static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(uint32_t p0, float p1, uint32_t p2, uint32_t p3) { N::Invoke<0x74D67C13D3370C61, void>(p0, p1, p2, p3); } // 2BBA30B854534A0C F127AD6A
  static void TASK_THROW_PROJECTILE(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x4FF396B0CD5F897C, void>(p0, p1, p2, p3); } // 7285951DBF6B5A51 F65C20A7
  static void TASK_SWAP_WEAPON(uint32_t p0, bool p1) { N::Invoke<0xF51A3E0D7156845, void>(p0, p1); } // A21C51255B205245 DAF4F8FC
  static void TASK_RELOAD_WEAPON(uint32_t p0, bool p1) { N::Invoke<0xA59DE0AD3479D83C, void>(p0, p1); } // 62D2916F56B9CD2D CA6E91FD
  static bool IS_PED_GETTING_UP(uint32_t p0) { return N::Invoke<0x8D60CA9F677F4AD, bool>(p0); } // 2A74E1D5F2F00EEC 320813E6
  static void TASK_WRITHE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x853518FFC918568F, void>(p0, p1, p2, p3); } // CDDC2B77CE54AC6E 0FDC54FC
  static bool IS_PED_IN_WRITHE(uint32_t p0) { return N::Invoke<0x43F230A2EC7A2B4C, bool>(p0); } // DEB6D52126E7D640 09E61921
  static void OPEN_PATROL_ROUTE(uint32_t *p0) { N::Invoke<0xD322713087350CD6, void>(p0); } // A36BFB5EE89F3D82 F33F83CA
  static void CLOSE_PATROL_ROUTE() { N::Invoke<0xB4D96C014CCD17CF, void>(); } // B043ECA801B8CBC1 67305E59
  static void ADD_PATROL_ROUTE_NODE(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { N::Invoke<0xD14268664591381D, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 8EDF950167586B7C 21B48F10
  static void ADD_PATROL_ROUTE_LINK(uint32_t p0, uint32_t p1) { N::Invoke<0x9C1008B9C67EDBE2, void>(p0, p1); } // 23083260DEC3A551 D8761BB3
  static void CREATE_PATROL_ROUTE() { N::Invoke<0xDFCC6E6692869DC3, void>(); } // AF8A443CCC8018DC 0A6C7864
  static void DELETE_PATROL_ROUTE(uint32_t *p0) { N::Invoke<0xDDDC8591239E3516, void>(p0); } // 7767DD9D65E91319 2A4E6706
  static void TASK_PATROL(uint32_t p0, uint32_t *p1, uint32_t p2, bool p3, bool p4) { N::Invoke<0xD62B753EF0EFAE9B, void>(p0, p1, p2, p3, p4); } // BDA5DF49D080FE4E B92E5AF6
  static void TASK_STAY_IN_COVER(uint32_t p0) { N::Invoke<0x8BA4BA057ADEE33B, void>(p0); } // E5DA8615A6180789 A27A9413
  static void _0xCAE9BA01C471691A(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xCAE9BA01C471691A, void>(p0, p1, p2, p3); } // 5CF0D8F9BBA0DD75 50779A2C
  static void ADD_VEHICLE_SUBTASK_ATTACK_PED(uint32_t p0, uint32_t p1) { N::Invoke<0x41D99CB1AF9D233F, void>(p0, p1); } // 85F462BADC7DA47F 80461113
  static void TASK_VEHICLE_SHOOT_AT_PED(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0xFBCEC9A3157E3FC4, void>(p0, p1, p2); } // 10AB107B887214D8 59677BA0
  static void TASK_VEHICLE_AIM_AT_PED(uint32_t p0, uint32_t p1) { N::Invoke<0x413CCCAD95E34444, void>(p0, p1); } // E41885592B08B097 920AE6DB
  static void TASK_VEHICLE_SHOOT_AT_COORD(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0xE804D18F80B7282B, void>(p0, p1, p2, p3, p4); } // 5190796ED39C9B6D A7AAA4D6
  static void TASK_VEHICLE_AIM_AT_COORD(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x16197725DCDCCA20, void>(p0, p1, p2, p3); } // 447C1E9EF844BC0F 010F47CE
  static void TASK_VEHICLE_GOTO_NAVMESH(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, uint32_t p6, float p7) { N::Invoke<0x2ED12A383DB1302F, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 195AEEB13CEFE2EE 55CF3BCD
  static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, float p9, float p10, bool p11, uint32_t p12, bool p13, uint32_t p14) { N::Invoke<0xA64E4B0EDBF0F2F9, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 11315AB3385B8AC0 1552DC91
  static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(uint32_t p0, float p1, float p2, float p3, uint32_t p4, float p5, bool p6, float p7, float p8, bool p9, uint32_t p10, bool p11, uint32_t p12, uint32_t p13) { N::Invoke<0xCDDB3BCC4A2E6A6C, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // B2A16444EAD9AE47 9BD52ABD
  static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, float p9, float p10, bool p11, uint32_t p12, uint32_t p13, uint32_t p14) { N::Invoke<0x9E2FA3E3FE44C0EF, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // A55547801EB331FC 3F91358E
  static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(uint32_t p0, uint32_t p1, float p2, float p3, float p4, float p5, bool p6, float p7, float p8, bool p9, bool p10, uint32_t p11) { N::Invoke<0x759569E7DAB5B303, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 04701832B739DCE5 D896CD82
  static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, bool p4, float p5, float p6, bool p7, bool p8, uint32_t p9) { N::Invoke<0x68D196451292305F, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 97465886D35210E9 68E36B7A
  static void SET_HIGH_FALL_TASK(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xC96A19040CBE557E, void>(p0, p1, p2, p3); } // 8C825BDC7741D37C BBB26172
  static void REQUEST_WAYPOINT_RECORDING(uint32_t *p0) { N::Invoke<0x909E9D811F9F1AAE, void>(p0); } // 9EEFB62EB27B5792 AFABFB5D
  static bool _0xB16E5DBDEC4BBDEB(uint32_t *p0) { return N::Invoke<0xB16E5DBDEC4BBDEB, bool>(p0); } // CB4E8BE8A0063C5D 87125F5D
  static void REMOVE_WAYPOINT_RECORDING(uint32_t *p0) { N::Invoke<0x932057F38C942D3B, void>(p0); } // FF1B8B4AA1C25DC8 624530B0
  static bool _0x8D1B4A2AD7F8BEDE(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x8D1B4A2AD7F8BEDE, bool>(p0, p1); } // 5343532C01A07234 F5F9B71E
  static uint32_t _0x2FC9E205CF5C0AA1(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x2FC9E205CF5C0AA1, uint32_t>(p0, p1, p2); } // 2FB897405C90B361 19266913
  static float _0x0069F9082C2AE815E1(uint32_t *p0, uint32_t p1) { return N::Invoke<0x69F9082C2AE815E1, float>(p0, p1); } // 005622AEBC33ACA9 C765633A
  static bool _0xB435026734C33E54(uint32_t *p0, float p1, float p2, float p3, uint32_t *p4) { return N::Invoke<0xB435026734C33E54, bool>(p0, p1, p2, p3, p4); } // B629A298081F876F C4CD35AF
  static void TASK_FOLLOW_WAYPOINT_RECORDING(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xD8BA6491440C0DA6, void>(p0, p1, p2, p3, p4); } // 0759591819534F7B ADF9904D
  static bool IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uint32_t p0) { return N::Invoke<0x5AF4A1178852EEA9, bool>(p0); } // E03B3F2D3DC59B64 85B7725F
  static uint32_t GET_PED_WAYPOINT_PROGRESS(uint32_t p0) { return N::Invoke<0xABEA7B5D247ED2E5, uint32_t>(p0); } // 2720AAA75001E094 3595B104
  static float GET_PED_WAYPOINT_DISTANCE(uint32_t p0) { return N::Invoke<0x8789D6DCB645357A, float>(p0); } // E6A877C64CAF1BC5 084B35B0
  static uint32_t SET_PED_WAYPOINT_ROUTE_OFFSET(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xED3E40275675563C, uint32_t>(p0, p1, p2, p3); } // ED98E10B0AFCE4B4 F867F747
  static float _0xB649C27FF9903353(uint32_t *p0, uint32_t p1) { return N::Invoke<0xB649C27FF9903353, float>(p0, p1); } // A5B769058763E497 E8422AC4
  static bool WAYPOINT_PLAYBACK_GET_IS_PAUSED(uint32_t p0) { return N::Invoke<0x4695D54A91E55FE2, bool>(p0); } // 701375A7D43F01CB A6BB5717
  static void WAYPOINT_PLAYBACK_PAUSE(uint32_t p0, bool p1, bool p2) { N::Invoke<0x969EF3C4ABE30A62, void>(p0, p1, p2); } // 0F342546AA06FED5 FE39ECF8
  static void WAYPOINT_PLAYBACK_RESUME(uint32_t p0, bool p1, uint32_t p2, uint32_t p3) { N::Invoke<0xC7B2F0526F0DF6DC, void>(p0, p1, p2, p3); } // 244F70C84C547D2D 50F392EF
  static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uint32_t p0, float p1, bool p2) { N::Invoke<0xC9E68931EC906C20, void>(p0, p1, p2); } // 7D7D2B47FA788E85 23E6BA96
  static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uint32_t p0) { N::Invoke<0xFCFC3241D0A6E059, void>(p0); } // 6599D834B12D0800 1BBB2CAC
  static void _0x4500B71DC61AE180(uint32_t *p0, bool p1, float p2, float p3) { N::Invoke<0x4500B71DC61AE180, void>(p0, p1, p2, p3); } // 5A353B8E6B1095B5 4DFD5FEC
  static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x453B15D823D2CFAE, void>(p0, p1, p2); } // 20E330937C399D29 75E60CF6
  static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(uint32_t p0, float p1, float p2, float p3, bool p4) { N::Invoke<0x8461035C8473FB4C, void>(p0, p1, p2, p3, p4); } // 8968400D900ED8B3 F120A34E
  static uint32_t _0xBB995EA440EBCBDB() { return N::Invoke<0xBB995EA440EBCBDB, uint32_t>(); } // E70BA7B90F8390DC
  static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5) { N::Invoke<0x34D65C1B546FC9EB, void>(p0, p1, p2, p3, p4, p5); } // 057A25CFCC9DB671 CDDB44D5
  static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(uint32_t p0) { N::Invoke<0x1C46F7A41A590025, void>(p0); } // 47EFA040EBB8E2EA 6D7CF40C
  static void ASSISTED_MOVEMENT_REQUEST_ROUTE(uint32_t *p0) { N::Invoke<0x97C897799D58CEBD, void>(p0); } // 817268968605947A 48262EDA
  static void ASSISTED_MOVEMENT_REMOVE_ROUTE(uint32_t *p0) { N::Invoke<0xB69371A672FD9100, void>(p0); } // 3548536485DD792B B3CEC06F
  static bool _0xAB34ECCF7740AE80(uint32_t *p0) { return N::Invoke<0xAB34ECCF7740AE80, bool>(p0); } // 60F9A4393A21F741 79B067AF
  static void _0x3D9936878BED0580(uint32_t *p0, uint32_t p1) { N::Invoke<0x3D9936878BED0580, void>(p0, p1); } // D5002D78B7162E1B 01CAAFCC
  static void _0x8A417D6C8C4192CA(float p0) { N::Invoke<0x8A417D6C8C4192CA, void>(p0); } // 13945951E16EF912 8FB923EC
  static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, float p7, bool p8, float p9) { N::Invoke<0xDA798D309313469E, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 3123FAA6DB1CF7ED 959818B6
  static bool IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uint32_t p0) { return N::Invoke<0xCFC1A4F15B873C8A, bool>(p0); } // F5134943EA29868C 80DD15DB
  static uint32_t GET_VEHICLE_WAYPOINT_PROGRESS(uint32_t p0) { return N::Invoke<0xFE338C7B84645E1C, uint32_t>(p0); } // 9824CFF8FC66E159 D3CCF64E
  static uint32_t GET_VEHICLE_WAYPOINT_TARGET_POINT(uint32_t p0) { return N::Invoke<0x6EF613202AB1A59E, uint32_t>(p0); } // 416B62AC8B9E5BBD 81049608
  static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uint32_t p0) { N::Invoke<0x89FB0EF23B1A43D3, void>(p0); } // 8A4E6AC373666BC5 7C00B415
  static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(uint32_t p0) { N::Invoke<0x31E4F8171165585E, void>(p0); } // DC04FCAA7839D492 BEB14C82
  static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uint32_t p0) { N::Invoke<0x9AF2F9DC66B66373, void>(p0); } // 5CEB25A7D2848963 923C3AA4
  static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uint32_t p0, float p1) { N::Invoke<0x83F30835EF61F3F5, void>(p0, p1); } // 121F0593E0A431D7 BE1E7BB4
  static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uint32_t p0, bool p1) { N::Invoke<0x9621E1F79C388756, void>(p0, p1); } // 90D2156198831D69 1B54FB6B
  static void TASK_FORCE_MOTION_STATE(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xE9448D32D8A6A9AF, void>(p0, p1, p2); } // 4F056E1AFFEF17AB CAD2EF77
  static void _0xB617E3659278EC5(uint32_t p0, uint32_t *p1, float p2, bool p3, uint32_t *p4, uint32_t p5) { N::Invoke<0xB617E3659278EC5, void>(p0, p1, p2, p3, p4, p5); } // 2D537BA194896636 6F5D215F
  static void _0x65199BC5A6EBF388(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, bool p10, uint32_t *p11, uint32_t p12) { N::Invoke<0x65199BC5A6EBF388, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // D5B35BEA41919ACB 71A5C5DB
  static bool _0x986A8632623AA9E8(uint32_t p0) { return N::Invoke<0x986A8632623AA9E8, bool>(p0); } // 921CE12C489C4C41 902656EB
  static bool _0xDFBE28317178DA1E(uint32_t p0) { return N::Invoke<0xDFBE28317178DA1E, bool>(p0); } // 30ED88D5E0C56A37 92FDBAE6
  static uint32_t _0x971382DF83C506A1(uint32_t p0, uint32_t p1) { return N::Invoke<0x971382DF83C506A1, uint32_t>(p0, p1); } // D01015C7316AE176 885724DE
  static uint32_t _0x4DAFAB20F963C63F() { return N::Invoke<0x4DAFAB20F963C63F, uint32_t>(); } // AB13A5565480B6D9
  static uint32_t _0x7149B74DB6212578(uint32_t p0) { return N::Invoke<0x7149B74DB6212578, uint32_t>(p0); } // 717E4D1F2048376D 96C0277B
  static void _0xB0B01341F5A2B7B5(uint32_t p0, uint32_t *p1, float p2) { N::Invoke<0xB0B01341F5A2B7B5, void>(p0, p1, p2); } // D5BB4025AE449A4E A79BE783
  static void _0x3FFCB55BE8DADAB6(uint32_t p0, uint32_t *p1, bool p2) { N::Invoke<0x3FFCB55BE8DADAB6, void>(p0, p1, p2); } // B0A6CFD2C69C1088 F3538041
  static bool _0xFACD778761DCFD2B(uint32_t p0, uint32_t *p1) { return N::Invoke<0xFACD778761DCFD2B, bool>(p0, p1); } // A7FFBA498E4AAF67 1EBB6F3D
  static bool _0xE8DFC0A1508CBEFC(uint32_t p0, uint32_t *p1) { return N::Invoke<0xE8DFC0A1508CBEFC, bool>(p0, p1); } // B4F47213DF45A64C 72FA5EF2
  static uint32_t _0x2EF75D01A729BE93(uint32_t p0) { return N::Invoke<0x2EF75D01A729BE93, uint32_t>(p0); } // 349CE7B56DAFD95C E9DAF877
  static uint32_t _0x1327716C7FF71429(uint32_t p0) { return N::Invoke<0x1327716C7FF71429, uint32_t>(p0); } // F133BBBE91E1691F D21639A8
  static uint32_t _0x1E2B735C728F7469(uint32_t p0) { return N::Invoke<0x1E2B735C728F7469, uint32_t>(p0); } // D4D8636C0199A939 E76A2353
  static uint32_t _0x98C90939E11FA795(uint32_t p0) { return N::Invoke<0x98C90939E11FA795, uint32_t>(p0); } // 24A2AD74FA9814E2 DD616893
  static bool IS_PED_STILL(uint32_t p0) { return N::Invoke<0xE6C76822956F684D, bool>(p0); } // AC29253EEF8F0180 09E3418D
  static bool IS_PED_WALKING(uint32_t p0) { return N::Invoke<0xC40D123602BB8, bool>(p0); } // DE4C184B2B9B071A 4B865C4A
  static bool IS_PED_RUNNING(uint32_t p0) { return N::Invoke<0x1048D0AFAF445C32, bool>(p0); } // C5286FFC176F28A2 E9A5578F
  static bool IS_PED_SPRINTING(uint32_t p0) { return N::Invoke<0x485BBA43A75711BE, bool>(p0); } // 57E457CD2C0FC168 4F3E0633
  static bool IS_PED_STRAFING(uint32_t p0) { return N::Invoke<0x2B12BB6C095B3C83, bool>(p0); } // E45B7F222DE47E09 EFEED13C
  static void TASK_SYNCHRONIZED_SCENE(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6, uint32_t p7, float p8, uint32_t p9) { N::Invoke<0x206610E40EE4D7D9, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // EEA929141F699854 4F217E7B
  static void _0xF51B7D6313BA80B1(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t p5, uint32_t p6, float p7, float p8) { N::Invoke<0xF51B7D6313BA80B1, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 2047C02158D6405A 4D210467
  static void _0x503B60E56BB31805(uint32_t p0, uint32_t p1) { N::Invoke<0x503B60E56BB31805, void>(p0, p1); } // E4973DBDBE6E44B3 F65F0F4F
  static void _0xF1B817899727F0E6(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t p5, float p6, float p7, float p8, float p9, float p10) { N::Invoke<0xF1B817899727F0E6, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 7AFE8FDC10BC07D2 1683FE66
  static void _0x1FC26631515B5F44(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x1FC26631515B5F44, void>(p0, p1, p2, p3); } // BB106883F5201FC4 6345EC80
  static void TASK_ARREST_PED(uint32_t p0, uint32_t p1) { N::Invoke<0x2D3DEA13FFBBDBD3, void>(p0, p1); } // F3B9A78A178572B1 BC0F153D
  static bool IS_PED_RUNNING_ARREST_TASK(uint32_t p0) { return N::Invoke<0x153C0CAD8E18FDAE, bool>(p0); } // 3DC52677769B4AE0 6942DB7A
  static uint32_t IS_PED_BEING_ARRESTED(uint32_t p0) { return N::Invoke<0x87AF94EA533AA9EA, uint32_t>(p0); } // 90A09F3A45FED688 5FF6C2ED
  static void UNCUFF_PED(uint32_t p0) { N::Invoke<0xAC635379DFFDE120, void>(p0); } // 67406F2C8F87FC4F A23A1D61
  static bool IS_PED_CUFFED(uint32_t p0) { return N::Invoke<0x7C40FC31170FDB6F, bool>(p0); } // 74E559B3BC910685 511CE741
}

namespace GAMEPLAY
{
  static uint32_t _0xF88FF6F7373BE689() { return N::Invoke<0xF88FF6F7373BE689, uint32_t>(); } // 8B3CA62B1EF19B62 4E9CA30A
  static uint32_t _0x261D91FA5B5168CA(uint32_t p0) { return N::Invoke<0x261D91FA5B5168CA, uint32_t>(p0); } // FEAD16FC8F9DFC0F 11A178B8
  static void SET_RANDOM_SEED(uint32_t p0) { N::Invoke<0x616C825EE5EBE8DD, void>(p0); } // 444D98F98C11F3EC DB3FEB5C
  static void SET_TIME_SCALE(float p0) { N::Invoke<0x1580B26E8449D082, void>(p0); } // 1D408577D440E81E A7F84694
  static void SET_MISSION_FLAG(bool p0) { N::Invoke<0xA81035D922E28F10, void>(p0); } // C4301E5121A0ED73 57592D52
  static bool GET_MISSION_FLAG() { return N::Invoke<0x4E6BA6FF244D94A8, bool>(); } // A33CDCCDA663159E 95115F97
  static void SET_RANDOM_EVENT_FLAG(bool p0) { N::Invoke<0xD50D943D0D4E5EF1, void>(p0); } // 971927086CFD2158 A77F31E8
  static uint32_t GET_RANDOM_EVENT_FLAG() { return N::Invoke<0x7BCE01926E77105A, uint32_t>(); } // D2D57F1D764117B1 794CC92C
  static uint32_t _0x65FA13F9CB4F9C97() { return N::Invoke<0x65FA13F9CB4F9C97, uint32_t>(); } // 24DA7D7667FD7B09
  static uint32_t _0x4A782776F0AECB02() { return N::Invoke<0x4A782776F0AECB02, uint32_t>(); } // 4DCDF92BF64236CD
  static uint32_t _0xE6030A63125DFFFC() { return N::Invoke<0xE6030A63125DFFFC, uint32_t>(); } // 31125FD509D9043F
  static uint32_t _0x1B3B7B7A61D73FE6() { return N::Invoke<0x1B3B7B7A61D73FE6, uint32_t>(); } // EBD3205A207939ED
  static uint32_t _0x174E3E28784C7E4() { return N::Invoke<0x174E3E28784C7E4, uint32_t>(); } // 97E7E2C04245115B
  static uint32_t _0xD50489FF193C026D() { return N::Invoke<0xD50489FF193C026D, uint32_t>(); } // EB078CA2B5E82ADD
  static uint32_t _0x72E8F5328BCDDFFA() { return N::Invoke<0x72E8F5328BCDDFFA, uint32_t>(); } // 703CC7F60CBB2B57
  static uint32_t _0x2DE5B510F25CE31D() { return N::Invoke<0x2DE5B510F25CE31D, uint32_t>(); } // 8951EB9C6906D3C8
  static uint32_t _0xE32AB35327A7E2E5() { return N::Invoke<0xE32AB35327A7E2E5, uint32_t>(); } // BA4B8D83BDC75551
  static uint32_t _0xF17006C4E026BF9B() { return N::Invoke<0xF17006C4E026BF9B, uint32_t>(); } // E8B9C0EC9E183F35
  static uint32_t _0x4F2CE8E787B36129() { return N::Invoke<0x4F2CE8E787B36129, uint32_t>(); } // 65D2EBB47E1CEC21
  static void _0x100D1872BDC04276(bool p0) { N::Invoke<0x100D1872BDC04276, void>(p0); } // 6F2135B6129620C1 8B2DE971
  static void _0x6E6414C740A74C4D(uint32_t *p0) { N::Invoke<0x6E6414C740A74C4D, void>(p0); } // 8D74E26F54B4E5C3 E77199F7
  static uint32_t _0x627A00405D8C1D2C() { return N::Invoke<0x627A00405D8C1D2C, uint32_t>(); } // B335F761606DB47C
  static uint32_t _0x15E8DE8507C72A78() { return N::Invoke<0x15E8DE8507C72A78, uint32_t>(); } // 564B884A05EC45A3 A8171E9E
  static uint32_t _0x9416832ECF606DE1() { return N::Invoke<0x9416832ECF606DE1, uint32_t>(); } // 711327CD09C8F162 353E8056
  static bool IS_PREV_WEATHER_TYPE(uint32_t *p0) { return N::Invoke<0x97E9CF937B6A7B23, bool>(p0); } // 44F28F86433B10A9 250ADA61
  static bool IS_NEXT_WEATHER_TYPE(uint32_t *p0) { return N::Invoke<0xDF94AC3FC45A62F4, bool>(p0); } // 2FAA3A30BEC0F25D 99CB167F
  static void SET_WEATHER_TYPE_PERSIST(uint32_t *p0) { N::Invoke<0x9FA1B3ACA28289, void>(p0); } // 704983DF373B198F C6C04C75
  static void SET_WEATHER_TYPE_NOW_PERSIST(const char *p0) { N::Invoke<0x336484E66DCC4360, void>(p0); } // ED712CA327900C8A C869FE97
  static void SET_WEATHER_TYPE_NOW(uint32_t *p0) { N::Invoke<0x3DEB4695E01D1114, void>(p0); } // 29B487C359E19889 361E9EAC
  static void _0xDD37DC2407389271(uint32_t *p0, float p1) { N::Invoke<0xDD37DC2407389271, void>(p0, p1); } // FB5045B7C42B75BF 386F0D25
  static void SET_RANDOM_WEATHER_TYPE() { N::Invoke<0xAB30A46C353049D9, void>(); } // 8B05F884CF7E8020 E7AA1BC9
  static void CLEAR_WEATHER_TYPE_PERSIST() { N::Invoke<0x3B89C082BD00A29F, void>(); } // CCC39339BEF76CF5 6AB757D8
  static void _0x4E8FE0C85EF3559F(uint32_t *p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x4E8FE0C85EF3559F, void>(p0, p1, p2); } // F3BBE884A14BB413 9A5C1D56
  static void _0x40C891C10D450E6F(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0x40C891C10D450E6F, void>(p0, p1, p2); } // 578C752848ECFA0C 5CA74040
  static void SET_OVERRIDE_WEATHER(uint32_t *p0) { N::Invoke<0xFFEFAF075ADD4EF6, void>(p0); } // A43D5C6FE51ADBEF D9082BB5
  static void CLEAR_OVERRIDE_WEATHER() { N::Invoke<0x7BECC267192BA449, void>(); } // 338D2E3477711050 7740EA4E
  static void _0x475CB470B4BF0B4(float p0) { N::Invoke<0x475CB470B4BF0B4, void>(p0); } // B8F87EAD7533B176 625181DC
  static void _0x245B5A16B4E6173C(float p0) { N::Invoke<0x245B5A16B4E6173C, void>(p0); } // C3EAD29AB273ECE8 BEBBFDC8
  static void _0xAD5257EB1C7AE39E(float p0) { N::Invoke<0xAD5257EB1C7AE39E, void>(p0); } // A7A1127490312C36 6926AB03
  static void _0x89B3F037B4EF7003(float p0) { N::Invoke<0x89B3F037B4EF7003, void>(p0); } // 31727907B2C43C55 D447439D
  static void _0x6915FDAD9F6B2812(float p0) { N::Invoke<0x6915FDAD9F6B2812, void>(p0); } // 405591EC8FD9096D 584E9C59
  static void _0x5ED284EDB79637B3(float p0) { N::Invoke<0x5ED284EDB79637B3, void>(p0); } // F751B16FB32ABC1D 5656D578
  static void _0xA90D42A2C1FBD96B(float p0) { N::Invoke<0xA90D42A2C1FBD96B, void>(p0); } // B3E6360DDE733E82 0DE40C28
  static void _0x4BDC98449D05E627(float p0) { N::Invoke<0x4BDC98449D05E627, void>(p0); } // 7C9C0B1EEB1F9072 98C9138B
  static void _0xB85F18796358B2D7(float p0) { N::Invoke<0xB85F18796358B2D7, void>(p0); } // 6216B116083A7CB4 FB1A9CDE
  static void _0xBC0CBB0293B27D53(float p0) { N::Invoke<0xBC0CBB0293B27D53, void>(p0); } // 9F5E6BB6B34540DA 1C0CAE89
  static void _0x386D039174AA7A5B(float p0) { N::Invoke<0x386D039174AA7A5B, void>(p0); } // B9854DFDE0D833D6 4671AC2E
  static void _0xC608F1406A121628(float p0) { N::Invoke<0xC608F1406A121628, void>(p0); } // C54A08C85AE4D410 DA02F415
  static void _0xECC6C081457CF47E(float p0) { N::Invoke<0xECC6C081457CF47E, void>(p0); } // A8434F1DFF41D6E7 5F3DDEC0
  static void _0xEA14183C36D8FC89(float p0) { N::Invoke<0xEA14183C36D8FC89, void>(p0); } // C3C221ADDDE31A11 63A89684
  static void SET_WIND(float p0) { N::Invoke<0xEDBB28CCF29B4ECF, void>(p0); } // AC3A74E8384A9919 C6294698
  static void SET_WIND_SPEED(float p0) { N::Invoke<0x9F216AE622456E4A, void>(p0); } // EE09ECEDBABE47FC 45705F94
  static float GET_WIND_SPEED() { return N::Invoke<0x92886C7E72809BA0, float>(); } // A8CF1CC0AFCD3F12 098F0F3C
  static void SET_WIND_DIRECTION(float p0) { N::Invoke<0x7425778D35697636, void>(p0); } // EB0F4468467B4528 381AEEE9
  static Vector3 GET_WIND_DIRECTION() { return N::Invoke<0x65B4FBF36880F8D1, Vector3>(); } // 1F400FEF721170DA 89499A0D
  static uint32_t _0x6DDF2EAD88B11D11() { return N::Invoke<0x6DDF2EAD88B11D11, uint32_t>(); } // 643E26EA6E024D92
  static float GET_RAIN_LEVEL() { return N::Invoke<0xCD0D0E179CF41499, float>(); } // 96695E368AD855F3 C9F67F28
  static float GET_SNOW_LEVEL() { return N::Invoke<0xA9F11163AAF2FDA4, float>(); } // C5868A966E5BE3AE 1B09184F
  static void _0xE1FCD40D97BAD639() { N::Invoke<0xE1FCD40D97BAD639, void>(); } // F6062E089251C898 DF38165E
  static uint32_t _0x9EBAE00C182A048F() { return N::Invoke<0x9EBAE00C182A048F, uint32_t>(); } // 2DEAAC8F8EA7FE7
  static void _0x8E0D22C2778B564F(uint32_t *p0) { N::Invoke<0x8E0D22C2778B564F, void>(p0); } // 11B56FBBF7224868 8727A4C5
  static void _0xA065BC0AFD0770EA(uint32_t *p0, float p1) { N::Invoke<0xA065BC0AFD0770EA, void>(p0, p1); } // FC4842A34657BFCB ED88FC61
  static void _0x9FC7460787DD3C17(uint32_t *p0, float p1) { N::Invoke<0x9FC7460787DD3C17, void>(p0, p1); } // A74802FB8D0B7814 C9FA6E07
  static void _0x644864EF9B512DC4() { N::Invoke<0x644864EF9B512DC4, void>(); } // 957E790EA1727B64 2D7787BC
  static uint32_t _0xCD51B33391056B53() { return N::Invoke<0xCD51B33391056B53, uint32_t>(); } // F36199225D6D8C86
  static uint32_t _0x567C56ACEBE845C7() { return N::Invoke<0x567C56ACEBE845C7, uint32_t>(); } // 20AC25E781AE4A84
  static uint32_t GET_GAME_TIMER() { return N::Invoke<0xF976C624234A4AA8, uint32_t>(); } // 9CD27B0045628463 A4EA0691
  static float GET_FRAME_TIME() { return N::Invoke<0x94B2D2AEAA1D886E, float>(); } // 15C40837039FFAF7 96374262
  static uint32_t _0x73E6C0F0FEBFBA64() { return N::Invoke<0x73E6C0F0FEBFBA64, uint32_t>(); } // E599A503B3837E1B
  static uint32_t GET_FRAME_COUNT() { return N::Invoke<0xE3B6F359045B979E, uint32_t>(); } // FC8202EFC642E6F2 B477A015
  static float GET_RANDOM_FLOAT_IN_RANGE(float p0, float p1) { return N::Invoke<0x1E9A2D3AF075537, float>(p0, p1); } // 313CE5879CEB6FCD 0562C4D0
  static uint32_t GET_RANDOM_INT_IN_RANGE(uint32_t p0, uint32_t p1) { return N::Invoke<0x4D3E68F73B727E49, uint32_t>(p0, p1); } // D53343AA4FB7DD28 4051115B
  static bool GET_GROUND_Z_FOR_3D_COORD(float p0, float p1, float p2, float *p3) { return N::Invoke<0xBC5E1C3D489E93FD, bool>(p0, p1, p2, p3); } // C906A7DAB05C8D2B A1BFD5E0
  static uint32_t _0xF542824EC07F7AF7(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0xF542824EC07F7AF7, uint32_t>(p0, p1, p2, p3, p4); } // 8BDC7BFC57A81E76 64D91CED
  static float ASIN(float p0) { return N::Invoke<0x5F68F8D34FA0DED4, float>(p0); } // C843060B5765DCE7 998E5CAD
  static float ACOS(float p0) { return N::Invoke<0xA545696CB0A4D4F5, float>(p0); } // 1D08B970013C34B6 F4038776
  static float TAN(float p0) { return N::Invoke<0x7DC0D9AF1600D077, float>(p0); } // 632106CC96E82E91 D320CE5E
  static float ATAN(float p0) { return N::Invoke<0xF2AD27348AC2306, float>(p0); } // A9D1795CD5043663 7A03CC8E
  static float ATAN2(float p0, float p1) { return N::Invoke<0x1E7EBED5BB2C078C, float>(p0, p1); } // 8927CBF9D22261A4 2508AC81
  static float GET_DISTANCE_BETWEEN_COORDS(float p0, float p1, float p2, float p3, float p4, float p5, bool p6) { return N::Invoke<0x8FE221761D524CFE, float>(p0, p1, p2, p3, p4, p5, p6); } // F1B760881820C952 F698765E
  static float GET_ANGLE_BETWEEN_2D_VECTORS(float p0, float p1, float p2, float p3) { return N::Invoke<0x6C63551083F1AB3E, float>(p0, p1, p2, p3); } // 186FC4BE848E1C92 DBF75E58
  static float GET_HEADING_FROM_VECTOR_2D(float p0, float p1) { return N::Invoke<0xA75239A5F28CBA62, float>(p0, p1); } // 2FFB6B224F4B2926 D209D52B
  static float _0xDDCFC98811DA3C2E(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9) { return N::Invoke<0xDDCFC98811DA3C2E, float>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 7F8F6405F4777AF6 89459F0A
  static Vector3 _0x14E7CD238FB397F8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return N::Invoke<0x14E7CD238FB397F8, Vector3>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 21C235BC64831E5A CAECF37E
  static bool _0xB5133CADD1DD14B0(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, uint32_t *p12) { return N::Invoke<0xB5133CADD1DD14B0, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // F56DFB7B61BE7276 C6CC812C
  static void SET_BIT(uint32_t *p0, uint32_t p1) { N::Invoke<0x3DBE2A7AF9E71C82, void>(p0, p1); } // 933D6A9EEC1BACD0 4EFE7E6B
  static void CLEAR_BIT(uint32_t *p0, uint32_t p1) { N::Invoke<0xCD27BF29FB9012E2, void>(p0, p1); } // E80492A9AC099A93 8BC9E618
  static uint32_t GET_HASH_KEY(const char *p0) { return N::Invoke<0x3BA42EA02A10243D, uint32_t>(p0); } // D24D37CC275948CC 98EFF6F1
  static void _0xBD49D1444E891DA3(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t *p9, uint32_t *p10, uint32_t *p11, uint32_t *p12) { N::Invoke<0xBD49D1444E891DA3, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // F2F6A2FA49278625 87B92190
  static bool IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9, bool p10, uint32_t p11, bool p12) { return N::Invoke<0x3765E7D72FF74383, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // A61B4DF533DCB56E C013972F
  static bool IS_POSITION_OCCUPIED(float p0, float p1, float p2, float p3, bool p4, bool p5, bool p6, bool p7, bool p8, uint32_t p9, bool p10) { return N::Invoke<0x440C528C2E8EE43C, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // ADCDE75E1C60F32D 452E8D9E
  static bool IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return N::Invoke<0x4C336ED2E0D0C118, bool>(p0, p1, p2, p3, p4, p5, p6); } // E54E209C35FFA18D C161558D
  static void CLEAR_AREA(float p0, float p1, float p2, float p3, bool p4, bool p5, bool p6, bool p7) { N::Invoke<0x4BCBC9058A5CECE1, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // A56F01F3765B93A0 854E9AB8
  static void _0x2E23F348DA42E891(float p0, float p1, float p2, float p3, bool p4, bool p5, bool p6, bool p7) { N::Invoke<0x2E23F348DA42E891, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 957838AAF91BD12D 20E4FFD9
  static void CLEAR_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, bool p4, bool p5, bool p6, bool p7, bool p8) { N::Invoke<0x407F91A831576A66, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 01C7B9B38428AEB6 63320F3C
  static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, bool p9, bool p10, bool p11) { N::Invoke<0xA9F8B7FE33AD0C93, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 11DB3500F042A8AA F11A3018
  static void CLEAR_AREA_OF_OBJECTS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x2F36A13C15BE17D7, void>(p0, p1, p2, p3, p4); } // DD9B9B385AAC7F5B BB720FE7
  static void CLEAR_AREA_OF_PEDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xAB97C8EA78D4E7DF, void>(p0, p1, p2, p3, p4); } // BE31FD6CE464AC59 25BE7FA8
  static void CLEAR_AREA_OF_COPS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xFD19596BB0697987, void>(p0, p1, p2, p3, p4); } // 04F8FC8FCF58F88D 95C53824
  static void CLEAR_AREA_OF_PROJECTILES(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x13196E39740F8C20, void>(p0, p1, p2, p3, p4); } // 0A1CB9094635D1A6 18DB5434
  static uint32_t _0xC9887125C94B38A6() { return N::Invoke<0xC9887125C94B38A6, uint32_t>(); } // 7EC6F9A478A6A512
  static void SET_SAVE_MENU_ACTIVE(bool p0) { N::Invoke<0xB7C6FD37EA7D88D3, void>(p0); } // C9BF75D28165FF77 F5CCF164
  static uint32_t _0x94911FEF1F198241() { return N::Invoke<0x94911FEF1F198241, uint32_t>(); } // 397BAA01068BAA96 39771F21
  static void SET_CREDITS_ACTIVE(bool p0) { N::Invoke<0x7253108886369394, void>(p0); } // B938B7E6D3C0620C EC2A0ECF
  static void _0xA82778ED2F1B9B21(bool p0) { N::Invoke<0xA82778ED2F1B9B21, void>(p0); } // B51B9AB9EF81868C 75B06B5A
  static uint32_t _0x03B4AC578D9CD137C() { return N::Invoke<0x3B4AC578D9CD137C, uint32_t>(); } // 075F1D57402C93BA 2569C9A7
  static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(uint32_t *p0) { N::Invoke<0xD530A1AEC901B9D1, void>(p0); } // 9DC711BC69C548DF 9F861FD4
  static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { N::Invoke<0x44E747EFAA4C6724, void>(); } // 9243BAC96D64C050 878486CE
  static uint32_t ADD_HOSPITAL_RESTART(float p0, float p1, float p2, float p3, uint32_t p4) { return N::Invoke<0xD9F9D5E410D3F3D2, uint32_t>(p0, p1, p2, p3, p4); } // 1F464EF988465A81 4F3E3104
  static void DISABLE_HOSPITAL_RESTART(uint32_t p0, bool p1) { N::Invoke<0xCC8D845F6BB3A065, void>(p0, p1); } // C8535819C450EBA8 09F49C72
  static uint32_t ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, uint32_t p4) { return N::Invoke<0xC3307C75A0214AF4, uint32_t>(p0, p1, p2, p3, p4); } // 452736765B31FC4B E96C29FE
  static void DISABLE_POLICE_RESTART(uint32_t p0, bool p1) { N::Invoke<0x8998CC70E162BD8F, void>(p0, p1); } // 23285DED6EBD7EA3 0A280324
  static uint32_t _0x81FE9804AEAA18AE() { return N::Invoke<0x81FE9804AEAA18AE, uint32_t>(); } // 706B5EDCAA7FA663
  static uint32_t _0x2595E999F26B558E() { return N::Invoke<0x2595E999F26B558E, uint32_t>(); } // A2716D40842EAF79
  static void _0x3C36C32948C4DBFC(bool p0) { N::Invoke<0x3C36C32948C4DBFC, void>(p0); } // 2C2B3493FBF51C71 296574AE
  static void IGNORE_NEXT_RESTART(bool p0) { N::Invoke<0x4797CB606B635C06, void>(p0); } // 21FFB63D8C615361 DA13A4B6
  static void _0x42A126915DFEBF75(bool p0) { N::Invoke<0x42A126915DFEBF75, void>(p0); } // 4A18E01DF2C87B86 C9F6F0BC
  static void _0x25DD4707BD613079(bool p0) { N::Invoke<0x25DD4707BD613079, void>(p0); } // 1E0B4DC0D990A4E7 CB074B9D
  static void SET_FADE_IN_AFTER_DEATH_ARREST(bool p0) { N::Invoke<0x842A97A1C98339FF, void>(p0); } // DA66D2796BA33F12 ACDE6985
  static void SET_FADE_IN_AFTER_LOAD(bool p0) { N::Invoke<0x2D57F6762642A79, void>(p0); } // F3D78F59DFE18D79 6E00EB0B
  static uint32_t REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, uint32_t *p4, uint32_t p5, uint32_t p6) { return N::Invoke<0x4ED96CF8D7C3BB7F, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // C0714D0A7EEECA54 39C1849A
  static void SET_SAVE_HOUSE(uint32_t p0, bool p1, bool p2) { N::Invoke<0x5318436D5404C335, void>(p0, p1, p2); } // 4F548CABEAE553BC C3240BB4
  static uint32_t OVERRIDE_SAVE_HOUSE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return N::Invoke<0x76F555D0F18C34D2, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 1162EA8AE9D24EEA 47436C12
  static uint32_t _0xD2E03BAB98C16744(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xD2E03BAB98C16744, uint32_t>(p0, p1, p2, p3); } // A4A0065E39C9F25C C4D71AB4
  static void DO_AUTO_SAVE() { N::Invoke<0xDA15B9DE46315DF1, void>(); } // 50EEAAD86232EE55 54C44B1A
  static bool _0xA37DF7DAA4017CC6() { return N::Invoke<0xA37DF7DAA4017CC6, bool>(); } // 6E04F06094C87047 A8546914
  static bool IS_AUTO_SAVE_IN_PROGRESS() { return N::Invoke<0x15AE84EA690067BF, bool>(); } // 69240733738C19A0 36F75399
  static uint32_t _0x50E8BE7396CF4A30() { return N::Invoke<0x50E8BE7396CF4A30, uint32_t>(); } // 2107A3773771186D 78350773
  static void _0x06DC06E4836AD71AD() { N::Invoke<0x6DC06E4836AD71AD, void>(); } // 06462A961E94B67C 5A45B11A
  static void BEGIN_REPLAY_STATS(uint32_t p0, uint32_t p1) { N::Invoke<0x6E055A4B0EFC0A03, void>(p0, p1); } // E0E500246FF73D66 17F4F44D
  static void _0x7160BCAC681232B2(uint32_t p0) { N::Invoke<0x7160BCAC681232B2, void>(p0); } // 69FE6DC87BD2A5E9 81216EE0
  static void END_REPLAY_STATS() { N::Invoke<0xF68C2FF686BD6204, void>(); } // A23E821FBDF8A5F2 CB570185
  static uint32_t _0x17A6DFACDB7D97FF() { return N::Invoke<0x17A6DFACDB7D97FF, uint32_t>(); } // D642319C54AADEB6 C58250F1
  static uint32_t _0xD0448F8C0E2239C6() { return N::Invoke<0xD0448F8C0E2239C6, uint32_t>(); } // 5B1F2E327B6B6FE1 50C39926
  static uint32_t _0xE906ACFF18EEFCCC() { return N::Invoke<0xE906ACFF18EEFCCC, uint32_t>(); } // 2B626A0150E4D449 710E5D1E
  static uint32_t _0xFF3845B0D94BFB89() { return N::Invoke<0xFF3845B0D94BFB89, uint32_t>(); } // DC9274A7EF6B2867 C7BD1AF0
  static uint32_t _0x1AA3B3C5D8DD60B7(uint32_t p0) { return N::Invoke<0x1AA3B3C5D8DD60B7, uint32_t>(p0); } // 8098C8D6597AAE18 22BE2423
  static void CLEAR_REPLAY_STATS() { N::Invoke<0x62C5C94888EF3195, void>(); } // 1B1AB132A16FDA55 C47DFF02
  static bool _0xB9E146B3A93572F7() { return N::Invoke<0xB9E146B3A93572F7, bool>(); } // 72DE52178C291CB5 F62B3C48
  static bool _0xE02B82C7A5462F37() { return N::Invoke<0xE02B82C7A5462F37, bool>(); } // 44A0BDC559B35F6E 3589452B
  static uint32_t _0xB68CE13C4BA7CFC1() { return N::Invoke<0xB68CE13C4BA7CFC1, uint32_t>(); } // EB2104E905C6F2E9
  static uint32_t _0x75994C43D2EB94BB() { return N::Invoke<0x75994C43D2EB94BB, uint32_t>(); } // 2B5E102E4A42F2BF 144AAF22
  static bool IS_MEMORY_CARD_IN_USE() { return N::Invoke<0x96B42C5AFF2F25F9, bool>(); } // 8A75CE2956274ADD 40CE4DFD
  static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, bool p7, uint32_t p8, uint32_t p9, bool p10, bool p11, float p12) { N::Invoke<0xEB1CBB6A08981A01, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 867654CBC7606F2C CB7415AC
  static void _0x678013669F4DFF5(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { N::Invoke<0x678013669F4DFF5, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // E3A7742E0B7A2F8B 52ACCB7B
  static uint32_t _0x3C700A81FEF45F8E() { return N::Invoke<0x3C700A81FEF45F8E, uint32_t>(); } // BFE5756E7407064A
  static void GET_MODEL_DIMENSIONS(uint32_t p0, Vector3 *p1, Vector3 *p2) { N::Invoke<0xB72AA272E2B242A6, void>(p0, p1, p2); } // 03E8D3D5F549087A 91ABB8E0
  static void SET_FAKE_WANTED_LEVEL(uint32_t p0) { N::Invoke<0xDD361D9B8B427B1C, void>(p0); } // 1454F2448DE30163 85B1C9FA
  static uint32_t _0x97E826B0580A564A() { return N::Invoke<0x97E826B0580A564A, uint32_t>(); } // 4C9296CBCD1B971E 0022A430
  static uint32_t IS_BIT_SET(uint32_t p0, uint32_t p1) { return N::Invoke<0x61D8FEAF64881CDA, uint32_t>(p0, p1); } // A921AA820C25702F 902E26AC
  static void USING_MISSION_CREATOR(bool p0) { N::Invoke<0x8825846BE74B0F57, void>(p0); } // F14878FC50BEC6EE 20AB0B6B
  static void _0xF64F3951AA71FBBF(bool p0) { N::Invoke<0xF64F3951AA71FBBF, void>(p0); } // DEA36202FC3382DF 082BA6F2
  static void SET_MINIGAME_IN_PROGRESS(bool p0) { N::Invoke<0x48840068BEF14F82, void>(p0); } // 19E00D7322C6F85B 348B9046
  static uint32_t IS_MINIGAME_IN_PROGRESS() { return N::Invoke<0x6D1105B605F9B478, uint32_t>(); } // 2B4A15E44DE0F478 53A95E13
  static bool IS_THIS_A_MINIGAME_SCRIPT() { return N::Invoke<0x6B9BEBD7B097ABB2, bool>(); } // 7B30F65D7B710098 7605EF6F
  static uint32_t IS_SNIPER_INVERTED() { return N::Invoke<0x5566230901EC73EC, uint32_t>(); } // 61A23B7EDA9BDA24 5C3BF51B
  static bool _0xE8E4E737136ABCAE() { return N::Invoke<0xE8E4E737136ABCAE, bool>(); } // D3D15555431AB793 BAF17315
  static uint32_t GET_PROFILE_SETTING(uint32_t p0) { return N::Invoke<0x227FB8F9C772BAFB, uint32_t>(p0); } // C488FF2356EA7791 D374BEBC
  static uint32_t ARE_STRINGS_EQUAL(uint32_t p0, uint32_t p1) { return N::Invoke<0xA858564DC37EED5E, uint32_t>(p0, p1); } // 0C515FAB3FF9EA92 877C0BC5
  static uint32_t COMPARE_STRINGS(uint32_t *p0, uint32_t *p1, bool p2, uint32_t p3) { return N::Invoke<0x8D4F2EF5200D89CB, uint32_t>(p0, p1, p2, p3); } // 1E34710ECD4AB0EB FE25A58F
  static uint32_t ABSI(uint32_t p0) { return N::Invoke<0xEC8415598F0CAF4B, uint32_t>(p0); } // F0D31AD191A74F87 B44677C5
  static float ABSF(float p0) { return N::Invoke<0x75E01E8585722F89, float>(p0); } // 73D57CFFDD12C355 AF6F6E0B
  static bool IS_SNIPER_BULLET_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0xA6F6064678460049, bool>(p0, p1, p2, p3, p4, p5); } // FEFCF11B01287125 0483715C
  static bool IS_PROJECTILE_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, bool p6) { return N::Invoke<0xEE93FF4158B54B09, bool>(p0, p1, p2, p3, p4, p5, p6); } // 5270A8FBC098C3F8 78E1A557
  static bool IS_PROJECTILE_TYPE_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, bool p7) { return N::Invoke<0x876E2901E525BE19, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2E0DC353342C4A6D 2B73BCF6
  static bool IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, bool p8) { return N::Invoke<0xD6478E72C9640744, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // F0BC12401061DEA0 D1AE2681
  static bool _0x7EA638DAA99BFE28(float p0, float p1, float p2, uint32_t p3, float p4, bool p5) { return N::Invoke<0x7EA638DAA99BFE28, bool>(p0, p1, p2, p3, p4, p5); } // 34318593248C8FB2 BE81F1E2
  static uint32_t _0x6EEE1DB5C6B17C8C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return N::Invoke<0x6EEE1DB5C6B17C8C, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 8D7A43EC6A5FEA45 1A40454B
  static uint32_t _0x6A06C2FF2915A3A9(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0x6A06C2FF2915A3A9, uint32_t>(p0, p1, p2, p3, p4); } // DFB4138EEFED7B81 6BDE5CE4
  static uint32_t _0x2409FBDFB6F61EB8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x2409FBDFB6F61EB8, uint32_t>(p0, p1, p2, p3, p4, p5); } // 82FDE6A57EE4EE44 507BC6F7
  static bool IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7) { return N::Invoke<0xD4ED1C6612EABD8B, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // 1A8B5F3C01E2B477 E2DB58F7
  static bool IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0x982F2F40B035E77, bool>(p0, p1, p2, p3, p4); } // 3F2023999AD51C1F B54F46CA
  static bool IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, bool p6) { return N::Invoke<0xE929D27A2ED34DF8, bool>(p0, p1, p2, p3, p4, p5, p6); } // DE0F6D7450D37351 AB73ED26
  static bool HAS_BULLET_IMPACTED_IN_AREA(float p0, float p1, float p2, float p3, bool p4, bool p5) { return N::Invoke<0x90782A0CBF77A844, bool>(p0, p1, p2, p3, p4, p5); } // 9870ACFB89A90995 902BC7D9
  static bool HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7) { return N::Invoke<0xEBB9572B341B3A2F, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // DC8C5D7CFEAB8394 2C2618CC
  static uint32_t IS_ORBIS_VERSION() { return N::Invoke<0xA09FDB4B3C001CAB, uint32_t>(); } // A72BC0B675B1519E 40282018
  static uint32_t IS_DURANGO_VERSION() { return N::Invoke<0x5D64B4BDB6FCA4F0, uint32_t>(); } // 4D982ADB1978442D 46FB06A5
  static uint32_t IS_XBOX360_VERSION() { return N::Invoke<0x2F4E1FF400251C08, uint32_t>(); } // F6201B4DAF662A9D 24005CC8
  static uint32_t IS_PS3_VERSION() { return N::Invoke<0x9763C0E44A644CB2, uint32_t>(); } // CCA1072C29D096C2 4C0D5303
  static uint32_t IS_PC_VERSION() { return N::Invoke<0x80AD636AD4184F2B, uint32_t>(); } // 48AF36444B965238 4D5D9EE3
  static uint32_t IS_AUSSIE_VERSION() { return N::Invoke<0xBED94C55366FC08, uint32_t>(); } // 9F1935CA1F724008 944BA1DC
  static bool IS_STRING_NULL(bool p0) { return N::Invoke<0xD504011E20D63A81, bool>(p0); } // F22B6C47C6EAB066 8E71E00F
  static uint32_t IS_STRING_NULL_OR_EMPTY(uint32_t p0) { return N::Invoke<0x8FA72E132AAFA62F, uint32_t>(p0); } // CA042B6957743895 42E9F2CA
  static bool STRING_TO_INT(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xCC7361D116CBD916, bool>(p0, p1); } // 5A5F40FE637EB584 590A8160
  static void SET_BITS_IN_RANGE(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x7CCE15D3BB10A0F7, void>(p0, p1, p2, p3); } // 8EF07E15701D61ED 32094719
  static uint32_t GET_BITS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x33B60B13F4D7A754, uint32_t>(p0, p1, p2); } // 53158863FCC0893A CA03A1E5
  static uint32_t ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, uint32_t p15, uint32_t p16) { return N::Invoke<0x4A249A9E5CAAF96D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 1A992DA297A4630C B630E5FF
  static uint32_t ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, uint32_t p17, uint32_t p18) { return N::Invoke<0xE8ADEC5282D991EE, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // BBE5D803A5360CBF B9B7E777
  static void DELETE_STUNT_JUMP(uint32_t p0) { N::Invoke<0xB154884BEC8C90C5, void>(p0); } // DC518000E39DAE1F 840CB5DA
  static void ENABLE_STUNT_JUMP_SET(uint32_t p0) { N::Invoke<0x907ABD9C21183099, void>(p0); } // E369A5783B866016 9D1E7785
  static void DISABLE_STUNT_JUMP_SET(uint32_t p0) { N::Invoke<0xDFE913E05B28F77B, void>(p0); } // A5272EBEDD4747F6 644C9FA4
  static void _0xE83F1004CF3A02E(bool p0) { N::Invoke<0xE83F1004CF3A02E, void>(p0); } // D79185689F8FD5DF 3C806A2D
  static bool IS_STUNT_JUMP_IN_PROGRESS() { return N::Invoke<0x46C8195C64F14258, bool>(); } // 7A3F19700A4D0525 F477D0B1
  static bool _0x56D6A1F4811E2F9A() { return N::Invoke<0x56D6A1F4811E2F9A, bool>(); } // 2272B0A1343129F4 021636EE
  static uint32_t _0xCA7B0D7685599630() { return N::Invoke<0xCA7B0D7685599630, uint32_t>(); } // 996DD1E1E02F1008 006F9BA2
  static uint32_t _0x2D2DE24873A62FEE() { return N::Invoke<0x2D2DE24873A62FEE, uint32_t>(); } // 6856EC3D35C81EA4
  static void CANCEL_STUNT_JUMP() { N::Invoke<0xCDA654FAE03C06F9, void>(); } // E6B7B0ACD4E4B75E F43D9821
  static void SET_GAME_PAUSED(bool p0) { N::Invoke<0x1757405122DE8566, void>(p0); } // 577D1284D6873711 8230FF6C
  static void SET_THIS_SCRIPT_CAN_BE_PAUSED(bool p0) { N::Invoke<0xB43679BBB30F1391, void>(p0); } // AA391C728106F7AF A0C3CE29
  static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bool p0) { N::Invoke<0x952F8F1F0AE0C407, void>(p0); } // B98236CAAECEF897 D06F1720
  static bool _0x0695803D9947A1969(uint32_t p0, uint32_t p1) { return N::Invoke<0x695803D9947A1969, bool>(p0, p1); } // 071E2A839DE82D90 FF6191E1
  static uint32_t _0x8957F2D4DA9D6F68() { return N::Invoke<0x8957F2D4DA9D6F68, uint32_t>(); } // 557E43C447E700A8
  static void _0x4DE32C0390C17D15(uint32_t p0) { N::Invoke<0x4DE32C0390C17D15, void>(p0); } // 9BAE5AD2508DF078 721B2492
  static void _0x1CD86B48C55CAB17(uint32_t p0) { N::Invoke<0x1CD86B48C55CAB17, void>(p0); } // C5F0A8EBD3F361CE E202879D
  static uint32_t IS_FRONTEND_FADING() { return N::Invoke<0x4D82B9EA3B0EA296, uint32_t>(); } // 7EA2B6AF97ECA6ED 8FF6232C
  static void POPULATE_NOW() { N::Invoke<0xFE4CD40B43ECEDD9, void>(); } // 7472BB270D7B4F3E 72C20700
  static uint32_t GET_INDEX_OF_CURRENT_LEVEL() { return N::Invoke<0x85D4D9CD3B4EADCA, uint32_t>(); } // CBAD6729F7B1F4FC 6F203C6E
  static void SET_GRAVITY_LEVEL(uint32_t p0) { N::Invoke<0xEAF2311B13C121CB, void>(p0); } // 740E14FAD5842351 2D833F4A
  static void START_SAVE_DATA(uint32_t *p0, uint32_t p1, bool p2) { N::Invoke<0x99253BD323A46059, void>(p0, p1, p2); } // A9575F812C6A7997 881A694D
  static void STOP_SAVE_DATA() { N::Invoke<0x53A77ED77DEA40DD, void>(); } // 74E20C9145FB66FD 3B1C07C8
  static uint32_t _0xF1EEAFFD5B786A7A(bool p0) { return N::Invoke<0xF1EEAFFD5B786A7A, uint32_t>(p0); } // A09F896CE912481F 9EF0BC64
  static void REGISTER_INT_TO_SAVE(uint32_t *p0, uint32_t *p1) { N::Invoke<0x977B2E8A28033DFD, void>(p0, p1); } // 34C9EE5986258415 B930956F
  static uint32_t _0xF4EAF9F73AF732F5() { return N::Invoke<0xF4EAF9F73AF732F5, uint32_t>(); } // A735353C77334EA0
  static void _0x5082BF5A5BE1B7B9(uint32_t *p0, uint32_t *p1) { N::Invoke<0x5082BF5A5BE1B7B9, void>(p0, p1); } // 10C2FA78D0E128A1 9B38374A
  static void REGISTER_FLOAT_TO_SAVE(uint32_t *p0, uint32_t *p1) { N::Invoke<0xC82D12B00BF6D66C, void>(p0, p1); } // 7CAEC29ECB5DFEBB DB06F7AD
  static void REGISTER_BOOL_TO_SAVE(uint32_t *p0, uint32_t *p1) { N::Invoke<0x29E79CF64145D110, void>(p0, p1); } // C8F4131414C835A1 5417E0E0
  static void REGISTER_TEXT_LABEL_TO_SAVE(uint32_t *p0, uint32_t *p1) { N::Invoke<0xBB7EFF684140010E, void>(p0, p1); } // EDB1232C5BEAE62F 284352C4
  static void _0x22ADD068A5DB4E6E(uint32_t *p0, uint32_t *p1) { N::Invoke<0x22ADD068A5DB4E6E, void>(p0, p1); } // 6F7794F28C6B2535 E2089749
  static void _0xE5FCC604EDF3BF29(uint32_t *p0, uint32_t *p1) { N::Invoke<0xE5FCC604EDF3BF29, void>(p0, p1); } // 48F069265A0E4BEC F91B8C33
  static void _0xE6F891FD2C1A8813(uint32_t *p0, uint32_t *p1) { N::Invoke<0xE6F891FD2C1A8813, void>(p0, p1); } // 8269816F6CFD40F8 74E8FAD9
  static void _0x3E84FA70388C8A67(uint32_t *p0, uint32_t *p1) { N::Invoke<0x3E84FA70388C8A67, void>(p0, p1); } // FAA457EF263E8763 6B4335DD
  static void _0xF581D0B98CD00612(uint32_t *p0, uint32_t p1, uint32_t *p2) { N::Invoke<0xF581D0B98CD00612, void>(p0, p1, p2); } // BF737600CDDBEADD FB45728E
  static void STOP_SAVE_STRUCT() { N::Invoke<0x56A9EE8CD73E2317, void>(); } // EB1774DF12BB9F12 C2624A28
  static void _0x4B995FFCAEFDA732(uint32_t *p0, uint32_t p1, uint32_t *p2) { N::Invoke<0x4B995FFCAEFDA732, void>(p0, p1, p2); } // 60FE567DF1B1AF9D 893A342C
  static void STOP_SAVE_ARRAY() { N::Invoke<0xBC67DCCE1939FA39, void>(); } // 04456F95153C6BE4 0CAD8217
  static void _0xB8265112BB26591B(uint32_t p0, uint32_t p1) { N::Invoke<0xB8265112BB26591B, void>(p0, p1); } // DC0F817884CDD856 0B710A51
  static void _0xC7993238F8B1178B(uint32_t p0, uint32_t p1) { N::Invoke<0xC7993238F8B1178B, void>(p0, p1); } // 9B2BD3773123EA2F E0F0684F
  static uint32_t _0x45955CC2535A00C8(uint32_t p0) { return N::Invoke<0x45955CC2535A00C8, uint32_t>(p0); } // EB4A0C2D56441717 3CE5BF6B
  static bool CREATE_INCIDENT(uint32_t p0, float p1, float p2, float p3, uint32_t p4, float p5, uint32_t *p6) { return N::Invoke<0xCFC0C6BFDE352A2C, bool>(p0, p1, p2, p3, p4, p5, p6); } // 3F892CAF67444AE7 FC5FF7B3
  static bool CREATE_INCIDENT_WITH_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2, float p3, uint32_t *p4) { return N::Invoke<0x79BF6C1D53D948FF, bool>(p0, p1, p2, p3, p4); } // 05983472F0494E60 BBC35B03
  static void DELETE_INCIDENT(uint32_t p0) { N::Invoke<0x2D6CAA14834DECE1, void>(p0); } // 556C1AA270D5A207 212BD0DC
  static bool IS_INCIDENT_VALID(uint32_t p0) { return N::Invoke<0xA5C8455272A08BBF, bool>(p0); } // C8BC6461E629BEAA 31FD0BA4
  static void _0x4645DD2E9053D97E(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x4645DD2E9053D97E, void>(p0, p1, p2); } // B08B85D860E7BA3C 0242D88E
  static void _0xCB9B128F3C348120(uint32_t p0, float p1) { N::Invoke<0xCB9B128F3C348120, void>(p0, p1); } // D261BA3E7E998072 1F38102E
  static uint32_t FIND_SPAWN_POINT_IN_DIRECTION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return N::Invoke<0x11EB5294B4925536, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 6874E2190B0C1972 71AEFD77
  static uint32_t _0xAF60799C85D2A340(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return N::Invoke<0xAF60799C85D2A340, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 67F6413D3220E18D 42BF09B3
  static uint32_t _0xE7A135B0A7D1DE95() { return N::Invoke<0xE7A135B0A7D1DE95, uint32_t>(); } // 1327E2FE9746BAEE
  static void _0xED00A57A53A87144(uint32_t p0, bool p1) { N::Invoke<0xED00A57A53A87144, void>(p0, p1); } // B129E447A2EDA4BF FBDBE374
  static uint32_t _0x525720CD7AEAD85D() { return N::Invoke<0x525720CD7AEAD85D, uint32_t>(); } // 32C7A7E8C43A1F80
  static uint32_t _0x62D46C00A6C519C3() { return N::Invoke<0x62D46C00A6C519C3, uint32_t>(); } // E6869BECDD8F2403
  static void ENABLE_TENNIS_MODE(uint32_t p0, bool p1, bool p2) { N::Invoke<0xCE1E0884D80F4726, void>(p0, p1, p2); } // 28A04B411933F8A6 0BD3F9EC
  static bool IS_TENNIS_MODE(uint32_t p0) { return N::Invoke<0x377EE3F61D8E12B2, bool>(p0); } // 5D5479D115290C3F 04A947BA
  static void _0xD5853A15AB570B76(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, bool p5) { N::Invoke<0xD5853A15AB570B76, void>(p0, p1, p2, p3, p4, p5); } // E266ED23311F24D4 C20A7D2B
  static bool _0x62FA6671DD0BA53E(uint32_t p0) { return N::Invoke<0x62FA6671DD0BA53E, bool>(p0); } // 17DF68D720AA77F8 8501E727
  static bool _0x5AEA7198B0FC89AC(uint32_t p0) { return N::Invoke<0x5AEA7198B0FC89AC, bool>(p0); } // 19BFED045C647C49 1A332D2D
  static uint32_t _0x33749C5D66EE4080() { return N::Invoke<0x33749C5D66EE4080, uint32_t>(); } // E95B0C7D5BA3B96B
  static void _0xE508EBCE35DE5055(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5) { N::Invoke<0xE508EBCE35DE5055, void>(p0, p1, p2, p3, p4, p5); } // 8FA9C42FC5D7C64B 0C8865DF
  static void _0x6F3520F9937648F6(uint32_t p0, uint32_t *p1, float p2) { N::Invoke<0x6F3520F9937648F6, void>(p0, p1, p2); } // 54F157E0336A3822 49F977A9
  static void _0xF2D917FD145E0BD8(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xF2D917FD145E0BD8, void>(p0, p1, p2); } // D10F442036302D50 6F009E33
  static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { N::Invoke<0x29410FDCB6E9CEE0, void>(); } // 77A84429DD9F0A15 DA65ECAA
  static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { N::Invoke<0x1D357F813F6CD280, void>(p0); } // 6FE601A64180D423 6283BE32
  static uint32_t _0xDFC56F55AA554A5B() { return N::Invoke<0xDFC56F55AA554A5B, uint32_t>(); } // EB2DB0CAD13154B3
  static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(uint32_t p0, float p1) { N::Invoke<0xF53DECA815E812D3, void>(p0, p1); } // 44F7CBC1BEB3327D ABADB709
  static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(uint32_t p0, float p1) { N::Invoke<0x41508CCA819003ED, void>(p0, p1); } // 48838ED9937A15D1 1C996BCD
  static uint32_t _0x9D88055DF28AFF2A(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return N::Invoke<0x9D88055DF28AFF2A, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 918C7B2D2FF3928B F557BAF9
  static uint32_t _0x6EB257D9D47E7DFA() { return N::Invoke<0x6EB257D9D47E7DFA, uint32_t>(); } // 2D4259F1FEB81DA9
  static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uint32_t p0) { N::Invoke<0x7E9D95E705C0BC54, void>(p0); } // 264AC28B01B353A5 A8D2FB92
  static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { N::Invoke<0xAB8E4C087AFBAF06, void>(); } // AC7BFD5C1D83EA75 9A17F835
  static void _0x3A8E4ED9E47E9468() { N::Invoke<0x3A8E4ED9E47E9468, void>(); } // D9F692D349249528 E0C9307E
  static void _0x18E530BE5381D832(uint32_t p0, uint32_t p1) { N::Invoke<0x18E530BE5381D832, void>(p0, p1); } // E532EC1A63231B4F A0D8C749
  static void _0xD3E8DA8836BAE239(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xD3E8DA8836BAE239, void>(p0, p1, p2); } // B8721407EE9C3FF6 24A4E0B2
  static void _0xA3B698C66AC447B6() { N::Invoke<0xA3B698C66AC447B6, void>(); } // B3CD58CCA6CDA852 66C3C59C
  static void _0xBCA5E613960DE570(bool p0) { N::Invoke<0xBCA5E613960DE570, void>(p0); } // 2587A48BC88DFADF D9660339
  static void _0x305C306CE618614(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6, uint32_t *p7, uint32_t *p8, uint32_t *p9, uint32_t *p10, uint32_t p11) { N::Invoke<0x305C306CE618614, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // CA78CFA0366592FE D2688412
  static void DISPLAY_ONSCREEN_KEYBOARD(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6, uint32_t p7) { N::Invoke<0xA5310BCC49AEE75B, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 00DC833F2568DBF6 AD99F2CE
  static uint32_t UPDATE_ONSCREEN_KEYBOARD() { return N::Invoke<0x807035052B6EC8A1, uint32_t>(); } // 0CF2B696BBF945AE 23D0A1CE
  static uint32_t GET_ONSCREEN_KEYBOARD_RESULT() { return N::Invoke<0xB5C311A32D6D7A09, uint32_t>(); } // 8362B09B91893647 44828FB3
  static void _0x78D7229F1827FA5E(uint32_t p0) { N::Invoke<0x78D7229F1827FA5E, void>(p0); } // 3ED1438C1F5C6612 3301EA47
  static void _0x4701C156DA1B94B5(uint32_t p0, bool p1) { N::Invoke<0x4701C156DA1B94B5, void>(p0, p1); } // A6A12939F16D85BE 42B484ED
  static void _0x2C5CC0AC66859B07(uint32_t p0, bool p1) { N::Invoke<0x2C5CC0AC66859B07, void>(p0, p1); } // 1EAE0A6E978894A2 8F60366E
  static void SET_EXPLOSIVE_AMMO_THIS_FRAME(uint32_t p0) { N::Invoke<0x9D3C19440954B0A5, void>(p0); } // A66C71C98D5F2CFB 2EAFA1D1
  static void SET_FIRE_AMMO_THIS_FRAME(uint32_t p0) { N::Invoke<0xC2BBDC5E9309A521, void>(p0); } // 11879CDD803D30F4 7C18FC8A
  static void SET_EXPLOSIVE_MELEE_THIS_FRAME(uint32_t p0) { N::Invoke<0x450DD675420E0A85, void>(p0); } // FF1BED81BFDC0FE0 96663D56
  static void SET_SUPER_JUMP_THIS_FRAME(uint32_t p0) { N::Invoke<0x2955DFEB27F45F56, void>(p0); } // 57FFF03E423A4C0B 86745EF3
  static uint32_t _0x8969EF94F09C8981() { return N::Invoke<0x8969EF94F09C8981, uint32_t>(); } // 6FDDF453C0C756EC C3C10FCC
  static void _0x314F35CE26024EE0() { N::Invoke<0x314F35CE26024EE0, void>(); } // FB00CA71DA386228 054EC103
  static uint32_t _0x85B80D0F84A3F70C() { return N::Invoke<0x85B80D0F84A3F70C, uint32_t>(); } // 5AA3BEFA29F03AD4 46B5A15C
  static uint32_t _0x11BD6C11125EF2F5() { return N::Invoke<0x11BD6C11125EF2F5, uint32_t>(); } // E3D969D2785FFB5E
  static void _0x924D98FC7B72864B() { N::Invoke<0x924D98FC7B72864B, void>(); } // C0AA53F866B3134D 5D209F25
  static void _0x076E2F28DE64D527F(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x76E2F28DE64D527F, void>(p0, p1, p2, p3); } // 0A60017F841A54F2 2D33F15A
  static void _0x6F29EA7281B233B5() { N::Invoke<0x6F29EA7281B233B5, void>(); } // 1FF6BF9A63E5757F DF99925C
  static void _0xC517EF42E38E9632(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xC517EF42E38E9632, void>(p0, p1, p2, p3); } // 1BB299305C3E8C13 A27F4472
  static bool _0xAE597E6C5BE7707A(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xAE597E6C5BE7707A, bool>(p0, p1, p2); } // 8EF5573A1F801A5C 07FF553F
  static uint32_t _0xCE55354CDEF952CA() { return N::Invoke<0xCE55354CDEF952CA, uint32_t>(); } // 92790862E36C2ADA
  static uint32_t _0xD7183F20F3992F74() { return N::Invoke<0xD7183F20F3992F74, uint32_t>(); } // C7DB36C24634F52B
  static uint32_t _0x23C559F1B8D216F4() { return N::Invoke<0x23C559F1B8D216F4, uint32_t>(); } // 437138B6A830166A
  static uint32_t _0xC6CADE42DFBA85D7() { return N::Invoke<0xC6CADE42DFBA85D7, uint32_t>(); } // 37DEB0AA183FB6D8
  static uint32_t _0x8B0CC69E748468C6() { return N::Invoke<0x8B0CC69E748468C6, uint32_t>(); } // EA2F2061875EED90
  static uint32_t _0xFD63661D6AA055DB() { return N::Invoke<0xFD63661D6AA055DB, uint32_t>(); } // 3BBBD13E5041A79E
  static uint32_t _0x7468A705C2566909() { return N::Invoke<0x7468A705C2566909, uint32_t>(); } // A049A5BE0F04F2F8
  static uint32_t _0x5627BDB7EA576884() { return N::Invoke<0x5627BDB7EA576884, uint32_t>(); } // 4750FC27570311EC
  static uint32_t _0xD7D7E78E4DFE2792() { return N::Invoke<0xD7D7E78E4DFE2792, uint32_t>(); } // 1B2366C3F2A5C8DF
  static uint32_t _0x432683E7BCAFA32C() { return N::Invoke<0x432683E7BCAFA32C, uint32_t>(); } // EB6891F03362FB12
  static uint32_t _0x3DF39E633286D26A() { return N::Invoke<0x3DF39E633286D26A, uint32_t>(); } // 14832BF2ABA53FC5
  static uint32_t _0x33CD855E2953414C() { return N::Invoke<0x33CD855E2953414C, uint32_t>(); } // C79AE21974B01FB2
  static uint32_t _0x12A658EE372CFDC1() { return N::Invoke<0x12A658EE372CFDC1, uint32_t>(); } // 684A41975F077262
  static uint32_t _0x42354FE1A3EC2C6E() { return N::Invoke<0x42354FE1A3EC2C6E, uint32_t>(); } // ABB2FA71C83A1B72
  static uint32_t _0xB823AC4803B00219() { return N::Invoke<0xB823AC4803B00219, uint32_t>(); } // 4EBB7E87AA0DBED4
  static uint32_t _0x9A8063600A1AA728() { return N::Invoke<0x9A8063600A1AA728, uint32_t>(); } // 9689123E3F213AA5
  static uint32_t _0xA4712179B1F92207() { return N::Invoke<0xA4712179B1F92207, uint32_t>(); } // 9D8D44ADBBA61EF2
  static uint32_t _0xAE4453D3A59415AA() { return N::Invoke<0xAE4453D3A59415AA, uint32_t>(); } // 23227DF0B2115469
  static uint32_t _0xE6BC404A1178AB93() { return N::Invoke<0xE6BC404A1178AB93, uint32_t>(); } // D10282B6E3751BA0
}

namespace AUDIO
{
  static void PLAY_PED_RINGTONE(uint32_t *p0, uint32_t p1, bool p2) { N::Invoke<0x667C1EAAF1741A67, void>(p0, p1, p2); } // F9E56683CA8E11A5 1D530E47
  static bool IS_PED_RINGTONE_PLAYING(uint32_t p0) { return N::Invoke<0x1D2BB0F375C29D1D, bool>(p0); } // 1E8E5E20937E3137 FE576EE4
  static void STOP_PED_RINGTONE(uint32_t p0) { N::Invoke<0xD4924B65C3BCFBC7, void>(p0); } // 6C5AE23EFA885092 FEEA107C
  static bool IS_MOBILE_PHONE_CALL_ONGOING() { return N::Invoke<0x49BDC46D7CAD9C63, bool>(); } // 7497D2CE2C30D24C 4ED1400A
  static bool _0xF42948753083C236() { return N::Invoke<0xF42948753083C236, bool>(); } // C8B1B2425604CDD0 16FB88B5
  static void CREATE_NEW_SCRIPTED_CONVERSATION() { N::Invoke<0xB814CCC0CCC87419, void>(); } // D2C91A0B572AAE56 B2BC25F8
  static void ADD_LINE_TO_CONVERSATION(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3, uint32_t p4, bool p5, bool p6, bool p7, bool p8, uint32_t p9, bool p10, bool p11, bool p12) { N::Invoke<0xC1D3AA9DE9FCCFD0, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // C5EF963405593646 96CD0513
  static void ADD_PED_TO_CONVERSATION(uint32_t p0, uint32_t p1, uint32_t *p2) { N::Invoke<0x6A8E870139B81348, void>(p0, p1, p2); } // 95D9F4BC443956E7 F8D5EB86
  static void _0x8D10FA54F3CDDE0(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x8D10FA54F3CDDE0, void>(p0, p1, p2, p3); } // 33E3C6C6F2F0B506 73C6F979
  static void _0xD9B4268D0D22D2EE(uint32_t p0, uint32_t p1) { N::Invoke<0xD9B4268D0D22D2EE, void>(p0, p1); } // 892B6AB8F33606F5 88203DDA
  static void SET_MICROPHONE_POSITION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x3782E4067068B9F6, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // B6AE90EDDE95C762 AD7BB191
  static void _0x04A84EFFEEDAAA6BF(bool p0) { N::Invoke<0x4A84EFFEEDAAA6BF, void>(p0); } // 0B568201DD99F0EB 1193ED6E
  static uint32_t _0x1B53A0040B5942D1() { return N::Invoke<0x1B53A0040B5942D1, uint32_t>(); } // 61631F5DF50D1C34
  static void START_SCRIPT_PHONE_CONVERSATION(bool p0, bool p1) { N::Invoke<0x36A1202C8C770A36, void>(p0, p1); } // 252E5F915EABB675 38E42D07
  static void PRELOAD_SCRIPT_PHONE_CONVERSATION(bool p0, bool p1) { N::Invoke<0x23AF4496DB87EB2C, void>(p0, p1); } // 6004BCB0E226AAEA 9ACB213A
  static void START_SCRIPT_CONVERSATION(bool p0, bool p1, bool p2, bool p3) { N::Invoke<0x95ADEEB592B34654, void>(p0, p1, p2, p3); } // 6B17C62C9635D2DC E5DE7D9D
  static void PRELOAD_SCRIPT_CONVERSATION(bool p0, bool p1, bool p2, bool p3) { N::Invoke<0x7675AEFFF45A2D65, void>(p0, p1, p2, p3); } // 3B3CAD6166916D87 DDF5C579
  static void START_PRELOADED_CONVERSATION() { N::Invoke<0x79ECA4CB34D47493, void>(); } // 23641AFE870AF385 A170261B
  static bool _0x9CCB2EF32A491B02() { return N::Invoke<0x9CCB2EF32A491B02, bool>(); } // E73364DB90778FFA 336F3D35
  static bool IS_SCRIPTED_CONVERSATION_ONGOING() { return N::Invoke<0xF611D1BB58990143, bool>(); } // 16754C556D2EDE3D CB8FD96F
  static bool IS_SCRIPTED_CONVERSATION_LOADED() { return N::Invoke<0x36526C5391F2F6CF, bool>(); } // DF0D54BE7A776737 E1870EA9
  static uint32_t GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return N::Invoke<0xB578A5EEDCABA08F, uint32_t>(); } // 480357EE890C295A 9620E41F
  static void PAUSE_SCRIPTED_CONVERSATION(bool p0) { N::Invoke<0x6F0E5D34471BD5CD, void>(p0); } // 8530AD776CD72B12 E2C9C6F8
  static void RESTART_SCRIPTED_CONVERSATION() { N::Invoke<0xA2A4AD85BA2F7ADD, void>(); } // 9AEB285D1818C9AC 6CB24B56
  static uint32_t STOP_SCRIPTED_CONVERSATION(bool p0) { return N::Invoke<0xD858EC6FECDB4B3F, uint32_t>(p0); } // D79DEEFB53455EBA AB77DA7D
  static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { N::Invoke<0xD2E9649AA1893F13, void>(); } // 9663FE6B7A61EB00 85C98304
  static void INTERRUPT_CONVERSATION(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x3B8F9A5D5B590EA7, void>(p0, p1, p2); } // A018A12E5C5C2FA6 F3A67AF3
  static uint32_t _0x391592D009F50A9F() { return N::Invoke<0x391592D009F50A9F, uint32_t>(); } // 8A694D7A68F8DC38
  static uint32_t _0x4D6D780E6C70D72E(uint32_t *p0) { return N::Invoke<0x4D6D780E6C70D72E, uint32_t>(p0); } // AA19F5572C38B564 B58B8FF3
  static void _0x2895339F9D70AFFF(bool p0) { N::Invoke<0x2895339F9D70AFFF, void>(p0); } // B542DE8C3D1CB210 789D8C6C
  static void REGISTER_SCRIPT_WITH_AUDIO(uint32_t p0) { N::Invoke<0xD19A0D6084034A69, void>(p0); } // C6ED9D5092438D91 A6203643
  static void UNREGISTER_SCRIPT_WITH_AUDIO() { N::Invoke<0x21FEE1ED00A9086E, void>(); } // A8638BE228D4751A 66728EFE
  static bool REQUEST_MISSION_AUDIO_BANK(uint32_t *p0, bool p1) { return N::Invoke<0x2814C9DD448753C1, bool>(p0, p1); } // 7345BDD95E62E0F2 916E37CA
  static bool REQUEST_AMBIENT_AUDIO_BANK(uint32_t *p0, bool p1) { return N::Invoke<0x6C900C4DB868DED9, bool>(p0, p1); } // FE02FFBED8CA9D99 23C88BC7
  static bool REQUEST_SCRIPT_AUDIO_BANK(uint32_t *p0, bool p1) { return N::Invoke<0xF08CFB68522305B2, bool>(p0, p1); } // 2F844A8B08D76685 21322887
  static uint32_t HINT_AMBIENT_AUDIO_BANK(uint32_t p0, uint32_t p1) { return N::Invoke<0xA046EDDEA035A8DE, uint32_t>(p0, p1); } // 8F8C0E370AE62F5C F1850DDC
  static uint32_t HINT_SCRIPT_AUDIO_BANK(uint32_t p0, uint32_t p1) { return N::Invoke<0x3DDFFF1EA0A0D9B3, uint32_t>(p0, p1); } // FB380A29641EC31A 41FA0E51
  static void RELEASE_MISSION_AUDIO_BANK() { N::Invoke<0x7502EEC72228C5E2, void>(); } // 0EC92A1BF0857187 8E8824C7
  static void RELEASE_AMBIENT_AUDIO_BANK() { N::Invoke<0x8522425DBC299765, void>(); } // 65475A218FFAA93D 8C938784
  static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(uint32_t *p0) { N::Invoke<0x3C20F43BE034109, void>(p0); } // 77ED170667F50170 16707ABC
  static void RELEASE_SCRIPT_AUDIO_BANK() { N::Invoke<0xEE6010D5E324610F, void>(); } // 7A2D8AD0A9EB9C3F 22F865E5
  static void _0x990713D1BE85B2B1() { N::Invoke<0x990713D1BE85B2B1, void>(); } // 19AF7ED9B9D23058 A58BBF4F
  static uint32_t _0x71CA0D191DCFE9D9() { return N::Invoke<0x71CA0D191DCFE9D9, uint32_t>(); } // 9AC92EED5E4793AB
  static uint32_t GET_SOUND_ID() { return N::Invoke<0xCA225EEF4090469C, uint32_t>(); } // 430386FE9BF80B45 6AE0AD56
  static void RELEASE_SOUND_ID(uint32_t p0) { N::Invoke<0x71EA2F1D0184D8C7, void>(p0); } // 353FC880830B88FA 9C080899
  static void PLAY_SOUND(uint32_t p0, const char *p1, const char *p2, bool p3, uint32_t p4, bool p5) { N::Invoke<0x88DC35B34477782D, void>(p0, p1, p2, p3, p4, p5); } // 7FF4944CC209192D B6E1917F
  static void PLAY_SOUND_FRONTEND(uint32_t p0, const char *p1, const char *p2, bool p3) { N::Invoke<0x84795EA8F54230A1, void>(p0, p1, p2, p3); } // 67C540AA08E4A6F5 2E458F74
  static void _0xBF3C64DCF9D3C57C(uint32_t *p0, uint32_t *p1) { N::Invoke<0xBF3C64DCF9D3C57C, void>(p0, p1); } // CADA5A0D0702381E C70E6CFA
  static void PLAY_SOUND_FROM_ENTITY(uint32_t p0, const char *p1, uint32_t p2, const char *p3, bool p4, uint32_t p5) { N::Invoke<0xC4E6094A4C954E29, void>(p0, p1, p2, p3, p4, p5); } // E65F427EB70AB1ED 95AE00F8
  static void PLAY_SOUND_FROM_COORD(uint32_t p0, const char *p1, float p2, float p3, float p4, const char *p5, bool p6, uint32_t p7, bool p8) { N::Invoke<0xE89B40A4D255370C, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 8D8686B622B88120 CAD3E2D5
  static void STOP_SOUND(uint32_t p0) { N::Invoke<0x5B438162CCD91A71, void>(p0); } // A3B0C41BA5CC0BB5 CD7F4030
  static uint32_t GET_NETWORK_ID_FROM_SOUND_ID(uint32_t p0) { return N::Invoke<0x11BD7D6459923D36, uint32_t>(p0); } // 2DE3F0A134FFBC0D 2576F610
  static uint32_t _0xECFAB34EFB322D47(uint32_t p0) { return N::Invoke<0xECFAB34EFB322D47, uint32_t>(p0); } // 75262FD12D0A1C84 D064D4DC
  static void SET_VARIABLE_ON_SOUND(uint32_t p0, uint32_t *p1, float p2) { N::Invoke<0xBEDE361A5937FE10, void>(p0, p1, p2); } // AD6B3148A78AE9B6 606EE5FA
  static void SET_VARIABLE_ON_STREAM(uint32_t *p0, float p1) { N::Invoke<0xE78DBAFDD3CAED08, void>(p0, p1); } // 2F9D3834AEB9EF79 F67BB44C
  static void OVERRIDE_UNDERWATER_STREAM(uint32_t *p0, bool p1) { N::Invoke<0xE8D589E2F1734D77, void>(p0, p1); } // F2A9CDABCEA04BD6 9A083B7E
  static void _0xA6C06A579A23C158(uint32_t *p0, float p1) { N::Invoke<0xA6C06A579A23C158, void>(p0, p1); } // 733ADF241531E5C2 62D026BE
  static bool HAS_SOUND_FINISHED(uint32_t p0) { return N::Invoke<0x75354D2F4439D94B, bool>(p0); } // FCBDCE714A7C88E5 E85AEC2E
  static void _0xF3E45A7DABC97254(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xF3E45A7DABC97254, void>(p0, p1, p2); } // 8E04FEDD28D42462 5C57B85D
  static void _0x203F3DF275DC4B46(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x203F3DF275DC4B46, void>(p0, p1, p2); } // C6941B4A3A8FBBB9 444180DB
  static void _0xD5197208E9370D3D(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, bool p4) { N::Invoke<0xD5197208E9370D3D, void>(p0, p1, p2, p3, p4); } // 3523634255FC3318 8386AE28
  static void _0x5A7738470AE681BD(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4, uint32_t *p5) { N::Invoke<0x5A7738470AE681BD, void>(p0, p1, p2, p3, p4, p5); } // ED640017ED337E45 A1A1402E
  static void OVERRIDE_TREVOR_RAGE(uint32_t *p0) { N::Invoke<0xC24471631F5213E9, void>(p0); } // 13AD665062541A7E 05B9B5CF
  static void RESET_TREVOR_RAGE() { N::Invoke<0x63081B71C289B05D, void>(); } // E78503B10C4314E0 E80CF0D4
  static void SET_PLAYER_ANGRY(uint32_t p0, bool p1) { N::Invoke<0x166E81403919FB3B, void>(p0, p1); } // EA241BB04110F091 782CA58D
  static void PLAY_PAIN(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x6204CDD58E47662C, void>(p0, p1, p2); } // BC9AE166038A5CEC 874BD6CB
  static uint32_t _0x3EDB2742EAD97E67() { return N::Invoke<0x3EDB2742EAD97E67, uint32_t>(); } // CE4AC0439F607045
  static void _0x2F10B86CB2D11845(uint32_t *p0) { N::Invoke<0x2F10B86CB2D11845, void>(p0); } // D01005D2BA2EB778 59A3A17D
  static void _0xA4E4B566C4B0517A(uint32_t *p0) { N::Invoke<0xA4E4B566C4B0517A, void>(p0); } // DDC635D5B3262C56 0E387BFE
  static void SET_AMBIENT_VOICE_NAME(uint32_t p0, uint32_t *p1) { N::Invoke<0x454E090239AFF6E8, void>(p0, p1); } // 6C8065A3B780185B BD2EA1A1
  static uint32_t _0x682EDC860574D255() { return N::Invoke<0x682EDC860574D255, uint32_t>(); } // 40CF0D12D142A9E8
  static uint32_t _0xB9C7A02AC80BBD00() { return N::Invoke<0xB9C7A02AC80BBD00, uint32_t>(); } // 7CDC8C3B89F661B3
  static uint32_t _0x8F9C130C0937F8AF() { return N::Invoke<0x8F9C130C0937F8AF, uint32_t>(); } // A5342D390CDA41D6
  static uint32_t _0x51C4E2057FE4A140() { return N::Invoke<0x51C4E2057FE4A140, uint32_t>(); } // 7A73D05A607734C7
  static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uint32_t p0) { N::Invoke<0x7416091E97852604, void>(p0); } // B8BEC0CA6F0EDB0F BB8E64BF
  static bool IS_AMBIENT_SPEECH_PLAYING(uint32_t p0) { return N::Invoke<0x135ED76D25C24E67, bool>(p0); } // 9072C8B49907BFAD 1972E8AA
  static bool IS_SCRIPTED_SPEECH_PLAYING(uint32_t p0) { return N::Invoke<0xCE9BBF479F2EC6F1, bool>(p0); } // CC9AA18DCC7084F4 2C653904
  static bool IS_ANY_SPEECH_PLAYING(uint32_t p0) { return N::Invoke<0x17E998AB655366FD, bool>(p0); } // 729072355FA39EC9 2B74A6D6
  static bool _0xB5A57318FFBC236D(uint32_t p0, uint32_t *p1, bool p2) { return N::Invoke<0xB5A57318FFBC236D, bool>(p0, p1, p2); } // 49B99BF3FDA89A7A 8BD5F11E
  static bool IS_PED_IN_CURRENT_CONVERSATION(uint32_t p0) { return N::Invoke<0x5117626A8E215F91, bool>(p0); } // 049E937F18F4020C 7B2F0743
  static void SET_PED_IS_DRUNK(uint32_t p0, bool p1) { N::Invoke<0x5FFD5ABB6E7B7D77, void>(p0, p1); } // 95D2D383D5396B8A D2EA77A3
  static void _0xE5953937DCBCEE8B(uint32_t p0, uint32_t p1, uint32_t *p2) { N::Invoke<0xE5953937DCBCEE8B, void>(p0, p1, p2); } // EE066C7006C49C0A 498849F3
  static bool _0xD2488E49719DF9DB(uint32_t p0) { return N::Invoke<0xD2488E49719DF9DB, bool>(p0); } // C265DF9FB44A9FBD 0CBAF2EF
  static void SET_ANIMAL_MOOD(uint32_t p0, uint32_t p1) { N::Invoke<0xC5FD718D5684FE18, void>(p0, p1); } // CC97B29285B1DC3B 3EA7C6CB
  static uint32_t IS_MOBILE_PHONE_RADIO_ACTIVE() { return N::Invoke<0x2E5E69D878ECEF32, uint32_t>(); } // B35CE999E8EF317E 6E502A5B
  static void SET_MOBILE_PHONE_RADIO_STATE(bool p0) { N::Invoke<0xAC59D39EFAF00536, void>(p0); } // BF286C554784F3DF E1E0ED34
  static uint32_t GET_PLAYER_RADIO_STATION_INDEX() { return N::Invoke<0xDA23B3063FF99093, uint32_t>(); } // E8AF77C4C06ADC93 1C4946AC
  static uint32_t GET_PLAYER_RADIO_STATION_NAME() { return N::Invoke<0x239941A4653E1C66, uint32_t>(); } // F6D733C32076AD03 D909C107
  static uint32_t GET_RADIO_STATION_NAME(uint32_t p0) { return N::Invoke<0xD29594461A8F01D6, uint32_t>(p0); } // B28ECA15046CA8B9 3DF493BC
  static uint32_t GET_PLAYER_RADIO_STATION_GENRE() { return N::Invoke<0x8A1F558BE9B21030, uint32_t>(); } // A571991A7FE6CCEB 872CF0EA
  static uint32_t IS_RADIO_RETUNING() { return N::Invoke<0xCF6C791C18F498FC, uint32_t>(); } // A151A7394A214E65 CF29097B
  static uint32_t _0xF88ECDFB8A74C695() { return N::Invoke<0xF88ECDFB8A74C695, uint32_t>(); } // 626A247D2405330
  static void _0x19EEF8CD4811DB7C() { N::Invoke<0x19EEF8CD4811DB7C, void>(); } // FF266D1D0EB1195D 53DB6994
  static void _0x78B28F9BFE0AE2CD() { N::Invoke<0x78B28F9BFE0AE2CD, void>(); } // DD6BCF9E94425DF9 D70ECC80
  static void SET_RADIO_TO_STATION_NAME(uint32_t *p0) { N::Invoke<0xE1B4A5D6719B9563, void>(p0); } // C69EDA28699D5107 7B36E35E
  static void SET_VEH_RADIO_STATION(uint32_t p0, uint32_t *p1) { N::Invoke<0xAEB769DB49B3E4FC, void>(p0, p1); } // 1B9C0099CB942AC6 E391F55F
  static void _0x1F775627A8A38B0E(uint32_t p0) { N::Invoke<0x1F775627A8A38B0E, void>(p0); } // C1805D05E6D4FE10 7ABB89D2
  static void SET_EMITTER_RADIO_STATION(uint32_t *p0, uint32_t *p1) { N::Invoke<0xD7889E76BE75AE9A, void>(p0, p1); } // ACF57305B12AF907 87431585
  static void SET_STATIC_EMITTER_ENABLED(uint32_t *p0, bool p1) { N::Invoke<0x9692E4714D73176, void>(p0, p1); } // 399D2D3B33F1B8EB 91F72E92
  static void SET_RADIO_TO_STATION_INDEX(uint32_t p0) { N::Invoke<0x970C64DA3A16E5A4, void>(p0); } // A619B168B8A8570F 1D82766D
  static void SET_FRONTEND_RADIO_ACTIVE(bool p0) { N::Invoke<0x280C0197875D4BE2, void>(p0); } // F7F26C6E9CC9EBB8 B1172075
  static void UNLOCK_MISSION_NEWS_STORY(uint32_t p0) { N::Invoke<0x4F724E65A4FC9C95, void>(p0); } // B165AB7C248B2DC1 CCD9ABE4
  static uint32_t GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(uint32_t p0) { return N::Invoke<0x7BFB8237CDA34B7E, uint32_t>(p0); } // 66E49BF55B4B1874 27305D37
  static uint32_t GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return N::Invoke<0xBFB5EA9DFC42F714, uint32_t>(); } // 50B196FC9ED6545B A2B88CA7
  static void PLAY_END_CREDITS_MUSIC(bool p0) { N::Invoke<0x3C3CF9585BBC5C62, void>(p0); } // CD536C4D33DCC900 8E88B3CC
  static void SKIP_RADIO_FORWARD() { N::Invoke<0xAEC745E686B8ADA2, void>(); } // 6DDBBDD98E2E9C25 10D36630
  static void FREEZE_RADIO_STATION(uint32_t *p0) { N::Invoke<0x6A09643814E7DD76, void>(p0); } // 344F393B027E38C3 286BF543
  static void UNFREEZE_RADIO_STATION(uint32_t *p0) { N::Invoke<0xA5E980B551FF6FEA, void>(p0); } // FC00454CF60B91DD 4D46202C
  static void SET_RADIO_AUTO_UNFREEZE(bool p0) { N::Invoke<0x766F515AB149D510, void>(p0); } // C1AA9F53CE982990 A40196BF
  static void SET_INITIAL_PLAYER_STATION(uint32_t *p0) { N::Invoke<0x8BA0066A046AC184, void>(p0); } // 88795F13FACDA88D 9B069233
  static void SET_USER_RADIO_CONTROL_ENABLED(bool p0) { N::Invoke<0xD1D0138E08D59865, void>(p0); } // 19F21E63AE6EAE4E 52E054CE
  static void SET_RADIO_TRACK(uint32_t *p0, uint32_t *p1) { N::Invoke<0xBDA335A1DA573BDC, void>(p0, p1); } // B39786F201FEE30B 76E96212
  static void SET_VEHICLE_RADIO_LOUD(uint32_t p0, bool p1) { N::Invoke<0xE2519ECBDF6A0ECC, void>(p0, p1); } // BB6F1CAEC68B0BCE 8D9EDD99
  static bool _0x0DD36C5E94CBBB739(uint32_t p0) { return N::Invoke<0xDD36C5E94CBBB739, bool>(p0); } // 032A116663A4D5AC CBA99F4A
  static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bool p0) { N::Invoke<0x362E33D1FE9C483E, void>(p0); } // 1098355A16064BB3 990085F0
  static bool _0x6F5A26ADB9932A86() { return N::Invoke<0x6F5A26ADB9932A86, bool>(); } // 109697E2FFBAC8A1 46B0C696
  static bool _0x595679AF074E035() { return N::Invoke<0x595679AF074E035, bool>(); } // 5F43D83FD6738741 2A3E5E8B
  static void SET_VEHICLE_RADIO_ENABLED(uint32_t p0, bool p1) { N::Invoke<0x3F60DDB36F3654A8, void>(p0, p1); } // 3B988190C0AA6C0B 6F812CAB
  static void _0xAA4A22817808DAD2(uint32_t *p0, uint32_t *p1, bool p2) { N::Invoke<0xAA4A22817808DAD2, void>(p0, p1, p2); } // 4E404A9361F75BB2 128C3873
  static void _0x8CDF71FFF4B6D801(uint32_t *p0) { N::Invoke<0x8CDF71FFF4B6D801, void>(p0); } // 1654F24A88A8E3FE 1D766976
  static uint32_t _0xF4104DC1D045E11D() { return N::Invoke<0xF4104DC1D045E11D, uint32_t>(); } // F1620ECB50E01DE7 CC91FCF5
  static uint32_t FIND_RADIO_STATION_INDEX(uint32_t p0) { return N::Invoke<0x21764E19392B5CFE, uint32_t>(p0); } // 8D67489793FF428B ECA1512F
  static void _0x4771739E66CD5E61(uint32_t *p0, bool p1) { N::Invoke<0x4771739E66CD5E61, void>(p0, p1); } // 774BD811F656A122 B1FF7137
  static void _0x2D5DCDC0B3DD6C87(float p0) { N::Invoke<0x2D5DCDC0B3DD6C87, void>(p0); } // 2C96CDB04FCA358E C8B514E2
  static void _0x0E66682505810019E(uint32_t *p0, uint32_t *p1) { N::Invoke<0xE66682505810019E, void>(p0, p1); } // 031ACB6ABA18C729 BE998184
  static void _0xF51471FE2B1E3642(uint32_t p0, bool p1) { N::Invoke<0xF51471FE2B1E3642, void>(p0, p1); } // F3365489E0DD50F9 8AFC488D
  static void SET_AMBIENT_ZONE_STATE(uint32_t *p0, bool p1, bool p2) { N::Invoke<0x29DEF50C16608986, void>(p0, p1, p2); } // BDA07E5950085E46 2849CAC9
  static void CLEAR_AMBIENT_ZONE_STATE(uint32_t *p0, bool p1) { N::Invoke<0x26A97F79290DFB3F, void>(p0, p1); } // 218DD44AAAC964FF CDFF3C82
  static void SET_AMBIENT_ZONE_LIST_STATE(uint32_t *p0, bool p1, bool p2) { N::Invoke<0x423F9DB6EF5D698E, void>(p0, p1, p2); } // 9748FA4DE50CCE3E BF80B412
  static void CLEAR_AMBIENT_ZONE_LIST_STATE(uint32_t *p0, bool p1) { N::Invoke<0x706F5545ADBAF4D6, void>(p0, p1); } // 120C48C614909FA4 38B9B8D4
  static void SET_AMBIENT_ZONE_STATE_PERSISTENT(uint32_t *p0, bool p1, bool p2) { N::Invoke<0x5860C94BA023F898, void>(p0, p1, p2); } // 1D6650420CEC9D3B C1FFB672
  static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(uint32_t *p0, bool p1, bool p2) { N::Invoke<0xBA7E29B25EE2D1D9, void>(p0, p1, p2); } // F3638DAE8C4045E1 5F5A2605
  static bool IS_AMBIENT_ZONE_ENABLED(uint32_t *p0) { return N::Invoke<0x5E8D1C4D53630349, bool>(p0); } // 01E2817A479A7F9B BFABD872
  static void SET_CUTSCENE_AUDIO_OVERRIDE(uint32_t *p0) { N::Invoke<0x43282CB4349F17FF, void>(p0); } // 3B4BF5F0859204D9 CE1332B7
  static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(uint32_t *p0, float p1) { N::Invoke<0x48AF400AC99F4C55, void>(p0, p1); } // BCC29F935ED07688 D63CF33A
  static uint32_t PLAY_POLICE_REPORT(uint32_t *p0, float p1) { return N::Invoke<0xAF922A0CB6DC60D9, uint32_t>(p0, p1); } // DFEBD56D9BD1EB16 3F277B62
  static uint32_t _0xB06637B20A689CC8() { return N::Invoke<0xB06637B20A689CC8, uint32_t>(); } // B4F90FAF7670B16F
  static void BLIP_SIREN(uint32_t p0) { N::Invoke<0xC651F895D732F7C1, void>(p0); } // 1B9025BDA76822B6 C0EB6924
  static void OVERRIDE_VEH_HORN(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0x9C0DB8E8C69D1045, void>(p0, p1, p2); } // 3CDC1E622CCE0356 2ACAB783
  static bool IS_HORN_ACTIVE(uint32_t p0) { return N::Invoke<0xE581A7568317E7CC, bool>(p0); } // 9D6BFC12B05C6121 20E2BDD0
  static void SET_AGGRESSIVE_HORNS(bool p0) { N::Invoke<0x6A8D4C93653D78F7, void>(p0); } // 395BF71085D1B1D9 01D6EABE
  static void _0x06F980A781A1DE0DF(uint32_t p0) { N::Invoke<0x6F980A781A1DE0DF, void>(p0); } // 02E93C796ABD3A97 3C395AEE
  static void _0xFB9D31D4CA78EE75(bool p0, bool p1) { N::Invoke<0xFB9D31D4CA78EE75, void>(p0, p1); } // 58BB377BEC7CD5F4 8CE63FA1
  static bool IS_STREAM_PLAYING() { return N::Invoke<0x400B74729E9D703A, bool>(); } // D11FA52EB849D978 F1F51A14
  static uint32_t GET_STREAM_PLAY_TIME() { return N::Invoke<0x34AC882350A579D3, uint32_t>(); } // 4E72BBDBCA58A3DB B4F0AD56
  static bool LOAD_STREAM(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xDBB45AE299F05694, bool>(p0, p1); } // 1F1F957154EC51DF 0D89599D
  static bool LOAD_STREAM_WITH_START_OFFSET(uint32_t *p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x8E0D5F2F4814C0D, bool>(p0, p1, p2); } // 59C16B79F53B3712 E5B5745C
  static void _0xFB33005C1B324065(uint32_t p0) { N::Invoke<0xFB33005C1B324065, void>(p0); } // 89049DD63C08B5D1 A1D7FABE
  static void PLAY_STREAM_FROM_VEHICLE(uint32_t p0) { N::Invoke<0x967D899F0B1B3209, void>(p0); } // B70374A758007DFA F8E4BDA2
  static void PLAY_STREAM_FROM_OBJECT(uint32_t p0) { N::Invoke<0x38E6710D4C686EC, void>(p0); } // EBAA9B64D76356FD C5266BF7
  static void PLAY_STREAM_FRONTEND() { N::Invoke<0xEC2AFF7D95998446, void>(); } // 58FCE43488F9F5F4 2C2A16BC
  static void SPECIAL_FRONTEND_EQUAL(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x637E22A95F4846EE, void>(p0, p1, p2); } // 21442F412E8DE56B 6FE5D865
  static void STOP_STREAM() { N::Invoke<0x6B08A54AEE3B5574, void>(); } // A4718A1419D18151 D1E364DE
  static void STOP_PED_SPEAKING(uint32_t p0, bool p1) { N::Invoke<0x5466EB7A3FD9AFF0, void>(p0, p1); } // 9D64D7405520E3D3 FF92B49D
  static void DISABLE_PED_PAIN_AUDIO(uint32_t p0, bool p1) { N::Invoke<0x3F0B2A719AA26306, void>(p0, p1); } // A9A41C1E940FB0E8 3B8E2D5F
  static bool IS_AMBIENT_SPEECH_DISABLED(uint32_t p0) { return N::Invoke<0x6A55A66588AE4BE7, bool>(p0); } // 932C2D096A2C3FFF 109D1F89
  static void SET_SIREN_WITH_NO_DRIVER(uint32_t p0, bool p1) { N::Invoke<0x9DC63CEAD84F841E, void>(p0, p1); } // 1FEF0683B96EBCF2 77182D58
  static void _0x5730797ADE792C9D(uint32_t p0) { N::Invoke<0x5730797ADE792C9D, void>(p0); } // 9C11908013EA4715 DE8BA3CD
  static void SET_HORN_ENABLED(uint32_t p0, bool p1) { N::Invoke<0x77C02CC66B7C4FC1, void>(p0, p1); } // 76D683C108594D0E 6EB92D05
  static void SET_AUDIO_VEHICLE_PRIORITY(uint32_t p0, uint32_t p1) { N::Invoke<0x803E485B9D8C7F03, void>(p0, p1); } // E5564483E407F914 271A9766
  static void _0x6875306F1B152679(uint32_t p0, float p1) { N::Invoke<0x6875306F1B152679, void>(p0, p1); } // 9D3AF56E94C9AE98 2F0A16D1
  static void USE_SIREN_AS_HORN(uint32_t p0, bool p1) { N::Invoke<0xA005D67CF48BAD39, void>(p0, p1); } // FA932DE350266EF8 C6BC16F3
  static void _0xB8EDA65F05A30490(uint32_t p0, uint32_t *p1) { N::Invoke<0xB8EDA65F05A30490, void>(p0, p1); } // 4F0C413926060B38 33B0B007
  static void _0xD7FBA3E5DBF6E969(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xD7FBA3E5DBF6E969, void>(p0, p1, p2); } // F1F8157B8C3F171C 1C0C5E4C
  static uint32_t _0x6065496AA8180B88() { return N::Invoke<0x6065496AA8180B88, uint32_t>(); } // D2DCCD8E16E20997
  static bool _0xAC4AC4D2E7CD7F9C(uint32_t p0) { return N::Invoke<0xAC4AC4D2E7CD7F9C, bool>(p0); } // 5DB8010EE71FDEF2 6E660D3F
  static void _0x8E20ACD2DDD93C53(uint32_t p0, float p1) { N::Invoke<0x8E20ACD2DDD93C53, void>(p0, p1); } // 59E7B488451F4D3A 23BE6432
  static void _0x05D8602755A7C846D(uint32_t p0, float p1) { N::Invoke<0x5D8602755A7C846D, void>(p0, p1); } // 01BB4D577D38BD9E E81FAC68
  static void _0x9D6C14F8334C4DE6(uint32_t p0, bool p1) { N::Invoke<0x9D6C14F8334C4DE6, void>(p0, p1); } // 1C073274E065C6D2 9365E042
  static void _0xE6A84D57CBE18468(uint32_t p0, bool p1) { N::Invoke<0xE6A84D57CBE18468, void>(p0, p1); } // 2BE4BC731D039D5A 2A60A90E
  static void SET_VEHICLE_BOOST_ACTIVE(uint32_t p0, bool p1) { N::Invoke<0x806E2325769059A0, void>(p0, p1); } // 4A04DE7CAB2739A1 072F15F2
  static void _0x31043EC3B32E1D25(uint32_t p0, bool p1) { N::Invoke<0x31043EC3B32E1D25, void>(p0, p1); } // 6FDDAD856E36988A 934BE749
  static void _0x0125BAD28FAAC349C(uint32_t p0, bool p1) { N::Invoke<0x125BAD28FAAC349C, void>(p0, p1); } // 06C0023BED16DD6B E61110A2
  static void PLAY_VEHICLE_DOOR_OPEN_SOUND(uint32_t p0, uint32_t p1) { N::Invoke<0x3850023B9A7EE6C4, void>(p0, p1); } // 3A539D52857EA82D 84930330
  static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(uint32_t p0, uint32_t p1) { N::Invoke<0xC29CA290B98414AD, void>(p0, p1); } // 62A456AA4769EF34 BA2CF407
  static void _0x555900455FEB7BC3(uint32_t p0, bool p1) { N::Invoke<0x555900455FEB7BC3, void>(p0, p1); } // C15907D667F7CFB2 563B635D
  static bool IS_GAME_IN_CONTROL_OF_MUSIC() { return N::Invoke<0x40EB152F6C9334B4, bool>(); } // 6D28DC1671E334FD 7643170D
  static void SET_GPS_ACTIVE(bool p0) { N::Invoke<0xF8B709AC39E9307D, void>(p0); } // 3BD3F52BA9B1E4E8 0FC3379A
  static void PLAY_MISSION_COMPLETE_AUDIO(uint32_t *p0) { N::Invoke<0xFC652D72B5D199DB, void>(p0); } // B138AAB8A70D3C69 3033EA1D
  static bool IS_MISSION_COMPLETE_PLAYING() { return N::Invoke<0x9FFA46B0957AE2F4, bool>(); } // 19A30C23F5827F8A 939982A1
  static uint32_t _0x46000C1AB19A9335() { return N::Invoke<0x46000C1AB19A9335, uint32_t>(); } // 6F259F82D873B8B8 CBE09AEC
  static void _0xD80B51CD79AEBDA3(bool p0) { N::Invoke<0xD80B51CD79AEBDA3, void>(p0); } // F154B8D1775B2DEC D2858D8A
  static bool START_AUDIO_SCENE(uint32_t *p0) { return N::Invoke<0xD56AC40382654643, bool>(p0); } // 013A80FC08F6E4F2 E48D757B
  static void STOP_AUDIO_SCENE(uint32_t *p0) { N::Invoke<0xAB5C0FE0C680BC7F, void>(p0); } // DFE8422B3B94E688 A08D8C58
  static void STOP_AUDIO_SCENES() { N::Invoke<0x19F31E6D3E4C9A05, void>(); } // BAC7FC81A75EC1A1 F6C7342A
  static bool IS_AUDIO_SCENE_ACTIVE(uint32_t *p0) { return N::Invoke<0xA2A45E58AC3DF6C5, bool>(p0); } // B65B60556E2A9225 ACBED05C
  static void SET_AUDIO_SCENE_VARIABLE(uint32_t *p0, uint32_t *p1, float p2) { N::Invoke<0xA17E2149BA8DF25, void>(p0, p1, p2); } // EF21A9EF089A2668 19BB3CE8
  static void _0x3EE911D23DA6B908(uint32_t p0) { N::Invoke<0x3EE911D23DA6B908, void>(p0); } // A5F377B175A699C5 E812925D
  static void _0x182B7266FFDC76F3(uint32_t p0, uint32_t *p1, float p2) { N::Invoke<0x182B7266FFDC76F3, void>(p0, p1, p2); } // 153973AB99FE8980 2BC93264
  static void _0x66685ABDD5A8BFC3(uint32_t p0, float p1) { N::Invoke<0x66685ABDD5A8BFC3, void>(p0, p1); } // 18EB48CFC41F2EA0 308ED0EC
  static bool AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return N::Invoke<0x13FF890394E23178, bool>(); } // 845FFC3A4FEEFA3E 86E995D1
  static bool PREPARE_MUSIC_EVENT(uint32_t *p0) { return N::Invoke<0x6DBAEBEF2111B0C1, bool>(p0); } // 1E5185B72EF5158A 534A5C1C
  static bool CANCEL_MUSIC_EVENT(uint32_t *p0) { return N::Invoke<0x12B3DEDD1DB99EFA, bool>(p0); } // 5B17A90291133DA5 89FF942D
  static bool TRIGGER_MUSIC_EVENT(uint32_t *p0) { return N::Invoke<0xF74C93D9036BCC1E, bool>(p0); } // 706D57B0F50DA710 B6094948
  static bool _0xD534AFABDF4AC57D() { return N::Invoke<0xD534AFABDF4AC57D, bool>(); } // A097AB275061FB21 2705C4D5
  static uint32_t GET_MUSIC_PLAYTIME() { return N::Invoke<0x33DE4B75D15F2C0B, uint32_t>(); } // E7A0D23DC414507B D633C809
  static void _0x36E33591C92518D8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x36E33591C92518D8, void>(p0, p1, p2, p3); } // FBE20329593DEC9D 53FC3FEC
  static void _0x565CFFC884617084() { N::Invoke<0x565CFFC884617084, void>(); } // B32209EFFDC04913 E6B033BF
  static void _0xF3641112E4F24922(bool p0, uint32_t p1) { N::Invoke<0xF3641112E4F24922, void>(p0, p1); } // 70B8EC8FC108A634 95050CAD
  static void _0xA3ACBDF2A1548B6D(float p0, float p1) { N::Invoke<0xA3ACBDF2A1548B6D, void>(p0, p1); } // 149AEE66F0CB3A99 E64F97A0
  static uint32_t _0xBBD65EF4B181340B() { return N::Invoke<0xBBD65EF4B181340B, uint32_t>(); } // 8BF907833BE275DE
  static void _0x0CD5897B34BE54B8D() { N::Invoke<0xCD5897B34BE54B8D, void>(); } // 062D5EAD4DA2FA6A D87AF337
  static bool PREPARE_ALARM(uint32_t *p0) { return N::Invoke<0x56775AA79E85CAD9, bool>(p0); } // 9D74AE343DB65533 084932E8
  static void START_ALARM(uint32_t *p0, bool p1) { N::Invoke<0xB2FB4B4EB898466F, void>(p0, p1); } // 0355EF116C4C97B2 703F524B
  static void STOP_ALARM(uint32_t *p0, bool p1) { N::Invoke<0xA6765DB2EFC1926A, void>(p0, p1); } // A1CADDCD98415A41 F987BE8C
  static void STOP_ALL_ALARMS(bool p0) { N::Invoke<0xF93C5C74D0546E0C, void>(p0); } // 2F794A877ADD4C92 C3CB9DC6
  static bool IS_ALARM_PLAYING(uint32_t *p0) { return N::Invoke<0xFCD3C46AD5E80137, bool>(p0); } // 226435CB96CCFC8C 9D8E1D23
  static uint32_t GET_VEHICLE_DEFAULT_HORN(uint32_t p0) { return N::Invoke<0x8E192C1B63F18E0B, uint32_t>(p0); } // 02165D55000219AC E84ABC19
  static uint32_t _0xAD3EDAE3AE62C61C(uint32_t p0) { return N::Invoke<0xAD3EDAE3AE62C61C, uint32_t>(p0); } // ACB5DCCA1EC76840 FD4B5B3B
  static void RESET_PED_AUDIO_FLAGS(uint32_t p0) { N::Invoke<0x2BD0B4BBDE0B9B78, void>(p0); } // F54BB7B61036F335 DF720C86
  static void _0x405D0EE42A53BA75(uint32_t p0, bool p1) { N::Invoke<0x405D0EE42A53BA75, void>(p0, p1); } // D2CC78CD3D0B50F9 C307D531
  static uint32_t _0xF4ABD0270A70ADC7() { return N::Invoke<0xF4ABD0270A70ADC7, uint32_t>(); } // BF4DC1784BE94DFA
  static uint32_t _0x42DDE3E087AD5FD3() { return N::Invoke<0x42DDE3E087AD5FD3, uint32_t>(); } // 75773E11BA459E90
  static uint32_t _0xBF19020668AD102E() { return N::Invoke<0xBF19020668AD102E, uint32_t>(); } // D57AAAE0E2214D11
  static void _0x287F3721C5E57891(bool p0) { N::Invoke<0x287F3721C5E57891, void>(p0); } // 552369F549563AD5 13EB5861
  static void _0x55078F067C43C5C6(uint32_t p0, bool p1) { N::Invoke<0x55078F067C43C5C6, void>(p0, p1); } // 43FA0DFC5DF87815 7BED1872
  static void SET_AUDIO_FLAG(uint32_t *p0, bool p1) { N::Invoke<0xD6A45BF901B17F77, void>(p0, p1); } // B9EFD5C25018725A 1C09C9E0
  static uint32_t PREPARE_SYNCHRONIZED_AUDIO_EVENT(uint32_t p0, uint32_t p1) { return N::Invoke<0xB7AAB54842083023, uint32_t>(p0, p1); } // C7ABCACA4985A766 E1D91FD0
  static bool PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(uint32_t p0, uint32_t *p1) { return N::Invoke<0x39035B2820434406, bool>(p0, p1); } // 029FE7CD1B7E2E75 7652DD49
  static bool PLAY_SYNCHRONIZED_AUDIO_EVENT(uint32_t p0) { return N::Invoke<0xA67A0F09FDA9FA9A, bool>(p0); } // 8B2FD4560E55DD2D 507F3241
  static bool STOP_SYNCHRONIZED_AUDIO_EVENT(uint32_t p0) { return N::Invoke<0x34EB122D21F1F393, bool>(p0); } // 92D6A88E64A94430 ADEED2B4
  static void _0xCB9AD34915200957(uint32_t *p0, float p1, float p2, float p3) { N::Invoke<0xCB9AD34915200957, void>(p0, p1, p2, p3); } // C8EDE9BDBCCBA6D4 55A21772
  static void _0x106072F6E092CB05(uint32_t *p0, uint32_t p1) { N::Invoke<0x106072F6E092CB05, void>(p0, p1); } // 950A154B8DAB6185 A17F9AB0
  static void _0x39A3D11A21B19E6(uint32_t p0) { N::Invoke<0x39A3D11A21B19E6, void>(p0); } // 12561FCBB62D5B9C 62B43677
  static void _0x0214E3023C5BD22B9(uint32_t *p0, uint32_t *p1) { N::Invoke<0x214E3023C5BD22B9, void>(p0, p1); } // 044DBAD7A7FA2BE5 8AD670EC
  static void _0x1FF21428E29781B9(uint32_t *p0) { N::Invoke<0x1FF21428E29781B9, void>(p0); } // B4BBFD9CD8B3922B D24B4D0C
  static void _0x8A93349309E7D3B1() { N::Invoke<0x8A93349309E7D3B1, void>(); } // E4E6DD5566D28C82 7262B5BA
  static uint32_t _0x7BBEB89420B0A8AC() { return N::Invoke<0x7BBEB89420B0A8AC, uint32_t>(); } // 3A48AB4445D499BE 93A44A1F
  static void _0x79CEDFFDBE4D40DA(uint32_t p0) { N::Invoke<0x79CEDFFDBE4D40DA, void>(p0); } // 4ADA3F19BE4A6047 13777A0B
  static void _0x0FE27BB2473CC260D() { N::Invoke<0xFE27BB2473CC260D, void>(); } // 0150B6FF25A9E2E5 1134F68B
  static void _0xFBDB191CDEEC29D6(bool p0) { N::Invoke<0xFBDB191CDEEC29D6, void>(p0); } // BEF34B1D9624D5DD E0047BFD
  static uint32_t _0x584596EB8C0008BD() { return N::Invoke<0x584596EB8C0008BD, uint32_t>(); } // 806058BBDC136E06
  static uint32_t _0x97EF0D819F7E82DC() { return N::Invoke<0x97EF0D819F7E82DC, uint32_t>(); } // 544810ED9DB6BBE6
  static uint32_t _0xD14FF83575E3F1C6() { return N::Invoke<0xD14FF83575E3F1C6, uint32_t>(); } // 5B50ABB1FE3746F4
}

namespace CUTSCENE
{
  static void REQUEST_CUTSCENE(uint32_t *p0, uint32_t p1) { N::Invoke<0xFF5665416E4C22D1, void>(p0, p1); } // 7A86743F475D9E09 B5977853
  static void _0xC25755924A02755B(uint32_t *p0, uint32_t p1, uint32_t p2) { N::Invoke<0xC25755924A02755B, void>(p0, p1, p2); } // C23DE0E91C30B58C D98F656A
  static void REMOVE_CUTSCENE() { N::Invoke<0xCB0201F0BA3841A2, void>(); } // 440AF51A3462B86F 8052F533
  static uint32_t HAS_CUTSCENE_LOADED() { return N::Invoke<0x6715FA5BFE2185EB, uint32_t>(); } // C59F528E9AB9F339 F9998582
  static bool HAS_THIS_CUTSCENE_LOADED(uint32_t *p0) { return N::Invoke<0x9ED959C675F03EA5, bool>(p0); } // 228D3D94F8A11C3C 3C5619F2
  static void _0x4275D92AAF73C757(uint32_t p0) { N::Invoke<0x4275D92AAF73C757, void>(p0); } // 8D9DF6ECA8768583 25A2CABC
  static bool _0xFC241F94E52E147B() { return N::Invoke<0xFC241F94E52E147B, bool>(); } // B56BBBCC2955D9CB DD8878E9
  static bool _0x72EB6AD3BF1D3D73(uint32_t p0) { return N::Invoke<0x72EB6AD3BF1D3D73, bool>(p0); } // 71B74D2AE19338D0 7B93CDAA
  static void _0x71B4FB76F2209FB7(uint32_t *p0, uint32_t p1, uint32_t p2) { N::Invoke<0x71B4FB76F2209FB7, void>(p0, p1, p2); } // 4C61C75BEE8184C2 47DB08A9
  static uint32_t _0xEDCC95998DBD2F58() { return N::Invoke<0xEDCC95998DBD2F58, uint32_t>(); } // 6A3524161C502BA
  static uint32_t _0x7451960194A46A0C() { return N::Invoke<0x7451960194A46A0C, uint32_t>(); } // A1C996C2A744262E
  static uint32_t _0x4E20D27963FEA1A7() { return N::Invoke<0x4E20D27963FEA1A7, uint32_t>(); } // D00D76A7DFC9D852
  static uint32_t _0xBD261034FF789F43() { return N::Invoke<0xBD261034FF789F43, uint32_t>(); } // ABC54DE641DC0FC
  static void START_CUTSCENE(uint32_t p0) { N::Invoke<0x840BBE26C6CF7321, void>(p0); } // 186D5CB5E7B0FF7B 210106F6
  static void START_CUTSCENE_AT_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xB9862CE2B2CCD38F, void>(p0, p1, p2, p3); } // 1C9ADDA3244A1FBF 58BEA436
  static void STOP_CUTSCENE(bool p0) { N::Invoke<0x1C47B5C2A22D6BEA, void>(p0); } // C7272775B4DC786E 5EE84DC7
  static void STOP_CUTSCENE_IMMEDIATELY() { N::Invoke<0x5054C17F460F49B, void>(); } // D220BDD222AC4A1E F528A2AD
  static void SET_CUTSCENE_ORIGIN(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xC2EC89E18EE66AAB, void>(p0, p1, p2, p3, p4); } // B812B3FD1C01CF27 B0AD7792
  static uint32_t _0xC1AF465E382762E2() { return N::Invoke<0xC1AF465E382762E2, uint32_t>(); } // 11883F41211432A
  static uint32_t GET_CUTSCENE_TIME() { return N::Invoke<0x1DC0ADACDA6BCF59, uint32_t>(); } // E625BEABBAFFDAB9 53F5B5AB
  static uint32_t GET_CUTSCENE_TOTAL_DURATION() { return N::Invoke<0x7D6533E35F3FF3, uint32_t>(); } // EE53B14A19E480D4 0824EBE8
  static uint32_t WAS_CUTSCENE_SKIPPED() { return N::Invoke<0x1E6F5D7A6EA04E5F, uint32_t>(); } // 40C8656EDAEDD569 C9B6949D
  static bool HAS_CUTSCENE_FINISHED() { return N::Invoke<0xE072F36CB31E9FEB, bool>(); } // 7C0A893088881D57 5DED14B4
  static uint32_t IS_CUTSCENE_ACTIVE() { return N::Invoke<0x22A3749598D2337A, uint32_t>(); } // 991251AFC3981F84 CCE2FE9D
  static bool IS_CUTSCENE_PLAYING() { return N::Invoke<0x3574DD38C5FAC832, bool>(); } // D3C2E180A40F031E A3A78392
  static uint32_t GET_CUTSCENE_SECTION_PLAYING() { return N::Invoke<0x62F2CF09430D7CC2, uint32_t>(); } // 49010A6A396553D8 1026F0D6
  static uint32_t GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(uint32_t *p0, uint32_t p1) { return N::Invoke<0xF31BB8BDF5CB9BE6, uint32_t>(p0, p1); } // 0A2E9FDB9A8C62F6 1D09ABC7
  static uint32_t _0xCF90D33387FEC8AE() { return N::Invoke<0xCF90D33387FEC8AE, uint32_t>(); } // 583DF8E3D4AFBD98 5AE68AE6
  static uint32_t _0x1898C9BF201A5250() { return N::Invoke<0x1898C9BF201A5250, uint32_t>(); } // 4CEBC1ED31E8925E
  static void REGISTER_ENTITY_FOR_CUTSCENE(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xD8A140AE0ECFC725, void>(p0, p1, p2, p3, p4); } // E40C1C56DF95C2E8 7CBC3EC7
  static uint32_t GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(uint32_t *p0, uint32_t p1) { return N::Invoke<0x4F8762C0F3A9A716, uint32_t>(p0, p1); } // C0741A26499654CD 46D18755
  static uint32_t _0xDB62606A9AD036EE() { return N::Invoke<0xDB62606A9AD036EE, uint32_t>(); } // 7F96F23FA9B73327
  static void SET_CUTSCENE_TRIGGER_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x391FA3E5DFF9DF17, void>(p0, p1, p2, p3, p4, p5); } // 9896CE4721BE84BA 9D76D9DE
  static bool CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(uint32_t *p0, uint32_t p1) { return N::Invoke<0xEBC5C93675CFFEC3, bool>(p0, p1); } // 645D0B458D8E17B5 55C30B26
  static bool CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(uint32_t *p0, uint32_t p1) { return N::Invoke<0xE51BB3F5E8E1C156, bool>(p0, p1); } // 4C6A6451C79E4662 8FF5D3C4
  static bool CAN_SET_EXIT_STATE_FOR_CAMERA(bool p0) { return N::Invoke<0xE9C39255A62A3323, bool>(p0); } // B2CBCD0930DFB420 EDAE6C02
  static void _0x8801332725A366AF(bool p0) { N::Invoke<0x8801332725A366AF, void>(p0); } // C61B86C9F61EB404 35721A08
  static void SET_CUTSCENE_FADE_VALUES(bool p0, bool p1, bool p2, bool p3) { N::Invoke<0x156E29031C8EC3E7, void>(p0, p1, p2, p3); } // 8093F23ABACCC7D4 D19EF0DD
  static uint32_t _0x889006E2EE739868() { return N::Invoke<0x889006E2EE739868, uint32_t>(); } // 20746F7B1032A3C7
  static uint32_t _0x2EE0D2960A2CFA72() { return N::Invoke<0x2EE0D2960A2CFA72, uint32_t>(); } // 6EE9048FD080382
  static uint32_t _0x9FD74BBA3650C4CD() { return N::Invoke<0x9FD74BBA3650C4CD, uint32_t>(); } // A0FE76168A189DDB
  static void _0x388C258BA02628B9(bool p0) { N::Invoke<0x388C258BA02628B9, void>(p0); } // 2F137B508DE238F2 8338DA1D
  static void _0x461F068C51CDC4E9(bool p0) { N::Invoke<0x461F068C51CDC4E9, void>(p0); } // E36A98D8AB3D3C66 04377C10
  static bool _0xC9968F29C059A8CB() { return N::Invoke<0xC9968F29C059A8CB, bool>(); } // 5EDEF0CF8C1DAB3C DBD88708
  static void _0xACC5025D8C5F98EF(bool p0) { N::Invoke<0xACC5025D8C5F98EF, void>(p0); } // 41FAA8FB2ECE8720 28D54A7F
  static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { N::Invoke<0x24E27580AAD69BBE, void>(); } // 2131046957F31B04 B60CFBB9
  static void SET_CUTSCENE_PED_COMPONENT_VARIATION(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x71D9E46EE013306A, void>(p0, p1, p2, p3, p4); } // BA01E7B6DEEFBBC9 6AF994A1
  static void _0x73BF98B7ABF75689(uint32_t *p0, uint32_t p1, uint32_t p2) { N::Invoke<0x73BF98B7ABF75689, void>(p0, p1, p2); } // 2A56C06EBEF2B0D9 1E7DA95E
  static bool DOES_CUTSCENE_ENTITY_EXIST(uint32_t *p0, uint32_t p1) { return N::Invoke<0x1A75325DA413F43E, bool>(p0, p1); } // 499EF20C5DB25C59 58E67409
  static void _0x022E9DDFB4FFC88B9(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x22E9DDFB4FFC88B9, void>(p0, p1, p2, p3, p4); } // 0546524ADE2E9723 22E9A9DE
  static bool _0x8D11AFBC57C8B08E() { return N::Invoke<0x8D11AFBC57C8B08E, bool>(); } // 708BDD8CD795B043 4315A7C5
}

namespace INTERIOR
{
  static uint32_t GET_INTERIOR_GROUP_ID(uint32_t p0) { return N::Invoke<0x47747D43BC10F33E, uint32_t>(p0); } // E4A84ABF135EF91A 09D6376F
  static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x33FFDAA28CBF43FC, Vector3>(p0, p1, p2, p3); } // 9E3B3E6D66F6E22F 7D8F26A1
  static uint32_t IS_INTERIOR_SCENE() { return N::Invoke<0x332341B01881B470, uint32_t>(); } // BC72B5D7A1CBD54D 55226C13
  static uint32_t IS_VALID_INTERIOR(bool p0) { return N::Invoke<0x93AF5BB44F9A2E1B, uint32_t>(p0); } // 26B0E73D7EAAF4D3 39C0B635
  static void CLEAR_ROOM_FOR_ENTITY(uint32_t p0) { N::Invoke<0x848295D8262450A4, void>(p0); } // B365FC0C4E27FFA7 7DDADB92
  static void FORCE_ROOM_FOR_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x4FB409E797BB414A, void>(p0, p1, p2); } // 52923C4710DD9907 10BD4435
  static uint32_t GET_ROOM_KEY_FROM_ENTITY(uint32_t p0) { return N::Invoke<0x2F6F43E0A4EC1C98, uint32_t>(p0); } // 47C2A06D4F5F424B E4ACF8C3
  static uint32_t GET_KEY_FOR_ENTITY_IN_ROOM(uint32_t p0) { return N::Invoke<0xB3CFD94645403D35, uint32_t>(p0); } // 399685DB942336BC 91EA80EF
  static uint32_t GET_INTERIOR_FROM_ENTITY(uint32_t p0) { return N::Invoke<0xB9F7014CB27D77C7, uint32_t>(p0); } // 2107BA504071A6BB 5C644614
  static void _0x1DABDFC179E87118(uint32_t p0, uint32_t p1) { N::Invoke<0x1DABDFC179E87118, void>(p0, p1); } // 82EBB79E258FA2B7 E645E162
  static void _0x15B4BAF3431688E3(uint32_t p0, uint32_t p1) { N::Invoke<0x15B4BAF3431688E3, void>(p0, p1); } // 920D853F3E17F1DA D79803B5
  static void _0x61E61086CE1663DB(uint32_t *p0) { N::Invoke<0x61E61086CE1663DB, void>(p0); } // AF348AFCB575A441 1F6B4B13
  static void _0xA6C3E32498BA8BDF(uint32_t p0) { N::Invoke<0xA6C3E32498BA8BDF, void>(p0); } // 405DC2AEF6AF95B9 0E9529CC
  static uint32_t _0x34044DE72CAFF6FA() { return N::Invoke<0x34044DE72CAFF6FA, uint32_t>(); } // A6575914D2A0B450 4FF3D3F5
  static void _0x89011B262105DDA9() { N::Invoke<0x89011B262105DDA9, void>(); } // 23B59D8912F94246 617DC75D
  static uint32_t GET_INTERIOR_AT_COORDS(float p0, float p1, float p2) { return N::Invoke<0x9C1CBD99573D4312, uint32_t>(p0, p1, p2); } // B0F7F8663821D9C3 A17FBF37
  static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uint32_t p0, uint32_t *p1) { N::Invoke<0x21C9E7C18E403D73, void>(p0, p1); } // 3F6167F351168730 A2A73564
  static void _0x336B61FFB9019E71(uint32_t p0) { N::Invoke<0x336B61FFB9019E71, void>(p0); } // 2CA429C029CCF247 3ADA414E
  static void UNPIN_INTERIOR(uint32_t p0) { N::Invoke<0x8DCA7E3E525E5911, void>(p0); } // 261CCE7EED010641 FCFF792A
  static bool IS_INTERIOR_READY(uint32_t p0) { return N::Invoke<0xB5D4753FD7641AB7, bool>(p0); } // 6726BDCCC1932F0E E1EF6450
  static uint32_t _0xB1A39DB1E2929ED1() { return N::Invoke<0xB1A39DB1E2929ED1, uint32_t>(); } // 4C2330E61D3DEB56
  static uint32_t _0x09C3273B36FEFD46F(float p0, float p1, float p2, uint32_t *p3) { return N::Invoke<0x9C3273B36FEFD46F, uint32_t>(p0, p1, p2, p3); } // 05B7A89BD78797FC 96525B06
  static uint32_t _0x441333E895F14F5() { return N::Invoke<0x441333E895F14F5, uint32_t>(); } // F0F77ADB9F67E79D
  static bool _0xCA97BCE0621BFD25(float p0, float p1, float p2) { return N::Invoke<0xCA97BCE0621BFD25, bool>(p0, p1, p2); } // EEA5AC2EDA7C33E8 7762249C
  static uint32_t GET_INTERIOR_FROM_COLLISION(float p0, float p1, float p2) { return N::Invoke<0xDD8967DDC05E1C1B, uint32_t>(p0, p1, p2); } // EC4CF9FCB29A4424 7ED33DC1
  static void _0x6D43802190E4B6DC(uint32_t p0, uint32_t *p1) { N::Invoke<0x6D43802190E4B6DC, void>(p0, p1); } // 55E86AF2712B36A1 C80A5DDF
  static void _0xC42E13CCC0E4D216(uint32_t p0, uint32_t *p1) { N::Invoke<0xC42E13CCC0E4D216, void>(p0, p1); } // 420BD37289EEE162 DBA768A1
  static bool _0xFF309D90AE93DDE1(uint32_t p0, uint32_t *p1) { return N::Invoke<0xFF309D90AE93DDE1, bool>(p0, p1); } // 35F7DD45E8C0A16D 39A3CC6F
  static void REFRESH_INTERIOR(uint32_t p0) { N::Invoke<0x37F4E82E5B10AADF, void>(p0); } // 41F37C3427C75AE0 9A29ACE6
  static void _0xEA4000C5CA260D6C(uint32_t p0) { N::Invoke<0xEA4000C5CA260D6C, void>(p0); } // A97F257D0151A6AB 1F375B4C
  static void DISABLE_INTERIOR(uint32_t p0, bool p1) { N::Invoke<0xB43380B6DF46326C, void>(p0, p1); } // 6170941419D7D8EC 093ADEA5
  static bool IS_INTERIOR_DISABLED(uint32_t p0) { return N::Invoke<0x6F3B287B8AE5AD76, bool>(p0); } // BC5115A5A939DD15 81F34C71
  static void CAP_INTERIOR(uint32_t p0, bool p1) { N::Invoke<0x8168B60B6214872B, void>(p0, p1); } // D9175F941610DB54 34E735A6
  static bool IS_INTERIOR_CAPPED(uint32_t p0) { return N::Invoke<0x7344CEFAB219FF96, bool>(p0); } // 92BAC8ACF88CEC26 18B17C80
  static void _0x9CED2B9288BE2AB8(bool p0) { N::Invoke<0x9CED2B9288BE2AB8, void>(p0); } // 9E6542F0CE8E70A3 5EF9C5C2
}

namespace CAM
{
  static void RENDER_SCRIPT_CAMS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x92931D2249E68921, void>(p0, p1, p2, p3, p4); } // 07E5B515DB0636FC 74337969
  static void _0x28D21A983751927B(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x28D21A983751927B, void>(p0, p1, p2); } // C819F3CBB62BF692 D3C08183
  static uint32_t CREATE_CAM(const char *p0, bool p1) { return N::Invoke<0x7A7435490ED9AAB, uint32_t>(p0, p1); } // C3981DCE61D9E13F E9BF2A7D
  static uint32_t CREATE_CAM_WITH_PARAMS(uint32_t *p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, uint32_t p9) { return N::Invoke<0x690E3D6DDF30CA95, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // B51194800B257161 23B02F15
  static uint32_t CREATE_CAMERA(uint32_t p0, bool p1) { return N::Invoke<0x2EA8060B4AF80E86, uint32_t>(p0, p1); } // 5E3CF89C6BCCA67D 5D6739AE
  static uint32_t CREATE_CAMERA_WITH_PARAMS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, uint32_t p9) { return N::Invoke<0x75089805E99EDC28, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 6ABFA3E16460F22D 0688BE9A
  static void DESTROY_CAM(uint32_t p0, bool p1) { N::Invoke<0x44151B6071157DDD, void>(p0, p1); } // 865908C81A2C22E9 C39302BD
  static void DESTROY_ALL_CAMS(bool p0) { N::Invoke<0x11AC2A4AC27BC796, void>(p0); } // 8E5FB15663F79120 10C151CE
  static bool DOES_CAM_EXIST(uint32_t p0) { return N::Invoke<0x17D71902CA06091B, bool>(p0); } // A7A932170592B50E 1EF89DC0
  static void SET_CAM_ACTIVE(uint32_t p0, bool p1) { N::Invoke<0x6F430D0F1783A56E, void>(p0, p1); } // 026FB97D0A425F84 064659C2
  static bool IS_CAM_ACTIVE(uint32_t p0) { return N::Invoke<0xB44AF0EB1FA3729D, bool>(p0); } // DFB2B516207D3534 4B58F177
  static bool IS_CAM_RENDERING(uint32_t p0) { return N::Invoke<0xA9AF865CDD15DFF4, bool>(p0); } // 02EC0AF5C5A49B7A 6EC6B5B2
  static uint32_t GET_RENDERING_CAM() { return N::Invoke<0xF273B3D1FB46A918, uint32_t>(); } // 5234F9F10919EABA 0FCF4DF1
  static Vector3 GET_CAM_COORD(uint32_t p0) { return N::Invoke<0x2F56B555AF6CFAB5, Vector3>(p0); } // BAC038F7459AE5AE 7C40F09C
  static Vector3 GET_CAM_ROT(uint32_t p0, uint32_t p1) { return N::Invoke<0x67BE89D490EA2935, Vector3>(p0, p1); } // 7D304C1C955E3E12 DAC84C9F
  static float GET_CAM_FOV(uint32_t p0) { return N::Invoke<0xC4B19FC1E15DB1C2, float>(p0); } // C3330A45CCCDB26A D6E9FCF5
  static float GET_CAM_NEAR_CLIP(uint32_t p0) { return N::Invoke<0x5E4F38C3CDBD0E21, float>(p0); } // C520A34DAFBF24B1 CFCD35EE
  static float GET_CAM_FAR_CLIP(uint32_t p0) { return N::Invoke<0xD0620C0419DB3984, float>(p0); } // B60A9CFEB21CA6AA 09F119B8
  static float GET_CAM_FAR_DOF(uint32_t p0) { return N::Invoke<0x4F46F4EB58AF6ACD, float>(p0); } // 255F8DAFD540D397 98C5CCE9
  static void SET_CAM_PARAMS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { N::Invoke<0x6F713DCD73DFF545, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // BFD8727AEA3CCEBA 2167CEBF
  static void SET_CAM_COORD(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xEEA9AFA5E9078090, void>(p0, p1, p2, p3); } // 4D41783FB745E42E 7A8053AF
  static void SET_CAM_ROT(uint32_t p0, float p1, float p2, float p3, uint32_t p4) { N::Invoke<0x46AA97C6CB72D170, void>(p0, p1, p2, p3, p4); } // 85973643155D0B07 EE38B3C1
  static void SET_CAM_FOV(uint32_t p0, float p1) { N::Invoke<0x435B97ECA622D5B0, void>(p0, p1); } // B13C14F66A00D047 D3D5D74F
  static void SET_CAM_NEAR_CLIP(uint32_t p0, float p1) { N::Invoke<0x80EA879A2C86EFE7, void>(p0, p1); } // C7848EFCCC545182 46DB13B1
  static void SET_CAM_FAR_CLIP(uint32_t p0, float p1) { N::Invoke<0x8342C17436A136FB, void>(p0, p1); } // AE306F2A904BF86E 0D23E381
  static void SET_CAM_MOTION_BLUR_STRENGTH(uint32_t p0, float p1) { N::Invoke<0x7A33B37C9FF5E596, void>(p0, p1); } // 6F0F77FBA9A8F2E6 FD6E0D67
  static void SET_CAM_NEAR_DOF(uint32_t p0, float p1) { N::Invoke<0xF14BCFACF533B69C, void>(p0, p1); } // 3FA4BF0A7AB7DE2C F28254DF
  static void SET_CAM_FAR_DOF(uint32_t p0, float p1) { N::Invoke<0x646E27A5B70ACF92, void>(p0, p1); } // EDD91296CD01AEE0 58515E8E
  static void SET_CAM_DOF_STRENGTH(uint32_t p0, float p1) { N::Invoke<0xAE34D14E1FD1B0D8, void>(p0, p1); } // 5EE29B4D7D5DF897 3CC4EB3F
  static void SET_CAM_DOF_PLANES(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0x1CA1C0300912FC86, void>(p0, p1, p2, p3, p4); } // 3CF48F6F96E749DC AD6C2B8F
  static void _0x5381DDC3D8280E2E(uint32_t p0, bool p1) { N::Invoke<0x5381DDC3D8280E2E, void>(p0, p1); } // 16A96863A17552BB 8306C256
  static void _0xCE45D35E11FA87AD() { N::Invoke<0xCE45D35E11FA87AD, void>(); } // A13B0222F3D94A94 8BBF2950
  static uint32_t _0x165FDB7058656561() { return N::Invoke<0x165FDB7058656561, uint32_t>(); } // F55E4046F6F831DC
  static uint32_t _0x2EEAA774A6164A98() { return N::Invoke<0x2EEAA774A6164A98, uint32_t>(); } // E111A7C0D200CBC5
  static uint32_t _0xFB316F4E5748D313() { return N::Invoke<0xFB316F4E5748D313, uint32_t>(); } // 7DD234D6F3914C5B
  static uint32_t _0x1FF2ECCA30F6D4E4() { return N::Invoke<0x1FF2ECCA30F6D4E4, uint32_t>(); } // C669EEA5D031B7DE
  static uint32_t _0x1CEDC693A9629701() { return N::Invoke<0x1CEDC693A9629701, uint32_t>(); } // C3654A441402562D
  static uint32_t _0xA9D6DAE1D17D0723() { return N::Invoke<0xA9D6DAE1D17D0723, uint32_t>(); } // 2C654B4943BDDF7C
  static void ATTACH_CAM_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5) { N::Invoke<0x4BEA87701970868, void>(p0, p1, p2, p3, p4, p5); } // FEDB7D269E8C60E3 AD7C45F6
  static void ATTACH_CAM_TO_PED_BONE(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, bool p6) { N::Invoke<0x58F32532D161F8D0, void>(p0, p1, p2, p3, p4, p5, p6); } // 61A3DBA14AB7F411 506BB35C
  static void DETACH_CAM(uint32_t p0) { N::Invoke<0x622BD70540C4C213, void>(p0); } // A2FABBE87F4BAD82 F4FBF14A
  static void SET_CAM_INHERIT_ROLL_VEHICLE(uint32_t p0, uint32_t p1) { N::Invoke<0x8AFA6856BA760400, void>(p0, p1); } // 45F1DE9C34B93AE6 E4BD5342
  static void POINT_CAM_AT_COORD(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xE63012B76B7664C3, void>(p0, p1, p2, p3); } // F75497BB865F0803 914BC21A
  static void POINT_CAM_AT_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5) { N::Invoke<0x93C2314254F245A2, void>(p0, p1, p2, p3, p4, p5); } // 5640BFF86B16E8DC 7597A0F7
  static void POINT_CAM_AT_PED_BONE(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, bool p6) { N::Invoke<0x69988B5C3D08A33C, void>(p0, p1, p2, p3, p4, p5, p6); } // 68B2B5F33BA63C41 09F47049
  static void STOP_CAM_POINTING(uint32_t p0) { N::Invoke<0xF6C122F2314BFF27, void>(p0); } // F33AB75780BA57DE 5435F6A5
  static void _0xDE016C411BFC750B(uint32_t p0, bool p1) { N::Invoke<0xDE016C411BFC750B, void>(p0, p1); } // 8C1DC7770C51DC8D 0C74F9AF
  static void _0xD05AADAD809CEFD6(uint32_t p0, bool p1) { N::Invoke<0xD05AADAD809CEFD6, void>(p0, p1); } // 661B5C8654ADD825 E1A0B2F1
  static uint32_t _0x8CB99388437C694E() { return N::Invoke<0x8CB99388437C694E, uint32_t>(); } // A2767257A320FC82
  static void _0xD790AEF806B0F225(uint32_t p0, bool p1) { N::Invoke<0xD790AEF806B0F225, void>(p0, p1); } // 271017B9BA825366 43220969
  static void SET_CAM_DEBUG_NAME(uint32_t p0, uint32_t p1) { N::Invoke<0xD4750A8677850B13, void>(p0, p1); } // 1B93E0107865DD40 9B00DF3F
  static void ADD_CAM_SPLINE_NODE(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x1EC72C0BB06772BC, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 8609C75EC438FB3B AD3C7EAA
  static void _0x0BE827E16FCCA4B4E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xBE827E16FCCA4B4E, void>(p0, p1, p2, p3); } // 0A9F2A468B328E74 30510511
  static void _0x0EEE12718D946EB54(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xEEE12718D946EB54, void>(p0, p1, p2, p3); } // 0FB82563989CF4FB BA6C085B
  static void _0xDF77C37858D54623(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xDF77C37858D54623, void>(p0, p1, p2); } // 609278246A29CA34 B4737F03
  static void SET_CAM_SPLINE_PHASE(uint32_t p0, float p1) { N::Invoke<0x64FD08DFA2AC8CBD, void>(p0, p1); } // 242B5874F0A4E052 F0AED233
  static float GET_CAM_SPLINE_PHASE(uint32_t p0) { return N::Invoke<0x55A8B07B40EAC42E, float>(p0); } // B5349E36C546509A 39784DD9
  static float GET_CAM_SPLINE_NODE_PHASE(uint32_t p0) { return N::Invoke<0x10196C8A24DD9D64, float>(p0); } // D9D0E694C8282C96 7B9522F6
  static void SET_CAM_SPLINE_DURATION(uint32_t p0, uint32_t p1) { N::Invoke<0xD6C9677D422277F9, void>(p0, p1); } // 1381539FEE034CDA 3E91FC8A
  static void _0x869DEED457FDB98D(uint32_t p0, uint32_t p1) { N::Invoke<0x869DEED457FDB98D, void>(p0, p1); } // D1B0F412F109EA5D 15E141CE
  static uint32_t GET_CAM_SPLINE_NODE_INDEX(uint32_t p0) { return N::Invoke<0xC5931ECA01CDE2D4, uint32_t>(p0); } // B22B17DF858716A6 F8AEB6BD
  static void _0x7227E150A51E3A64(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { N::Invoke<0x7227E150A51E3A64, void>(p0, p1, p2, p3); } // 83B8201ED82A9A2D 21D275DA
  static void _0x9F6B55E2BFAF15C8(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0x9F6B55E2BFAF15C8, void>(p0, p1, p2); } // A6385DEB180F319F A3BD9E94
  static void OVERRIDE_CAM_SPLINE_VELOCITY(uint32_t p0, uint32_t p1, float p2, float p3) { N::Invoke<0x4684C4CB1FEB48D9, void>(p0, p1, p2, p3); } // 40B62FA033EB0346 326A17E2
  static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(uint32_t p0, uint32_t p1, float p2, float p3) { N::Invoke<0x228497A92AE29FBB, void>(p0, p1, p2, p3); } // 7DCF7C708D292D55 633179E6
  static void _0x7ADFB22184236121(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x7ADFB22184236121, void>(p0, p1, p2); } // 7BF1A54AE67AC070 C90B2DDC
  static bool IS_CAM_SPLINE_PAUSED(uint32_t p0) { return N::Invoke<0x7FFE0087864AF30F, bool>(p0); } // 0290F35C0AD97864 60B34FF5
  static void SET_CAM_ACTIVE_WITH_INTERP(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xB09853C2B8C94A37, void>(p0, p1, p2, p3, p4); } // 9FBDA379383A52A4 7983E7F0
  static bool IS_CAM_INTERPOLATING(uint32_t p0) { return N::Invoke<0xCDDB35288EE2C72C, bool>(p0); } // 036F97C908C2B52C 7159CB5D
  static void SHAKE_CAM(uint32_t p0, uint32_t *p1, float p2) { N::Invoke<0xB98DF10F1936BD70, void>(p0, p1, p2); } // 6A25241C340D3822 1D4211B0
  static void ANIMATED_SHAKE_CAM(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, float p4) { N::Invoke<0x6915FF493995442D, void>(p0, p1, p2, p3, p4); } // A2746EEAE3E577CD E1168767
  static bool IS_CAM_SHAKING(uint32_t p0) { return N::Invoke<0xFC044F5A8CA9782F, bool>(p0); } // 6B24BFE83A2BE47B 0961FD9B
  static void SET_CAM_SHAKE_AMPLITUDE(uint32_t p0, float p1) { N::Invoke<0xE2C04E90396EAF08, void>(p0, p1); } // D93DB43B82BC0D00 60FF6382
  static void STOP_CAM_SHAKING(uint32_t p0, bool p1) { N::Invoke<0x60A59DBF922B3037, void>(p0, p1); } // BDECF64367884AC3 40D0EB87
  static void _0xBD2C64AB088BFF85(uint32_t *p0, float p1) { N::Invoke<0xBD2C64AB088BFF85, void>(p0, p1); } // F4C8CF9E353AFECA 2B0F05CD
  static void _0x812B333ABA2FB102(uint32_t *p0, uint32_t *p1, uint32_t *p2, float p3) { N::Invoke<0x812B333ABA2FB102, void>(p0, p1, p2, p3); } // C2EAE3FB8CDBED31 CB75BD9C
  static bool _0x1306ADA2FB1E2138() { return N::Invoke<0x1306ADA2FB1E2138, bool>(); } // C912AF078AF19212 6AEFE6A5
  static void _0xB31F99508794D61C(bool p0) { N::Invoke<0xB31F99508794D61C, void>(p0); } // 1C9D7949FA533490 26FCFB96
  static bool PLAY_CAM_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, uint32_t p10) { return N::Invoke<0xF39E2EDBF605630A, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 9A2D0FB2E7852392 BCEFB87E
  static bool IS_CAM_PLAYING_ANIM(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x76EDD01A37BDDA44, bool>(p0, p1, p2); } // C90621D8A0CEECF2 B998CB49
  static void SET_CAM_ANIM_CURRENT_PHASE(uint32_t p0, float p1) { N::Invoke<0x1A09CDB7B105C698, void>(p0, p1); } // 4145A4C44FF3B5A6 3CB1D17F
  static float GET_CAM_ANIM_CURRENT_PHASE(uint32_t p0) { return N::Invoke<0xB2850E51622B8C8B, float>(p0); } // A10B2DB49E92A6B0 345F72D0
  static bool PLAY_SYNCHRONIZED_CAM_ANIM(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0xB754DFF4436CE5FF, bool>(p0, p1, p2, p3); } // E32EFE9AB4A9AA0C 9458459E
  static void _0x8335F79B5636B220(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x8335F79B5636B220, void>(p0, p1, p2, p3); } // 503F5920162365B2 56F9ED27
  static void _0x2765884D8FED9CBA(uint32_t p0, float p1) { N::Invoke<0x2765884D8FED9CBA, void>(p0, p1); } // F9D02130ECDD1D77 71570DBA
  static void _0x45CD07593C5459F2(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x45CD07593C5459F2, void>(p0, p1, p2, p3); } // C91C6C55199308CA 60B345DE
  static void _0xEE0966B0F1226875(uint32_t p0) { N::Invoke<0xEE0966B0F1226875, void>(p0); } // C8B5C4A79CC18B94 44473EFC
  static bool _0x5EEC7B1AE687C584(uint32_t p0) { return N::Invoke<0x5EEC7B1AE687C584, bool>(p0); } // 5C48A1D6E3B33179 DA931D65
  static bool IS_SCREEN_FADED_OUT() { return N::Invoke<0xC2C705ED6124A7C2, bool>(); } // B16FCE9DDC7BA182 9CAA05FA
  static bool IS_SCREEN_FADED_IN() { return N::Invoke<0x8D4100BAA46EE198, bool>(); } // 5A859503B0C08678 4F37276D
  static bool IS_SCREEN_FADING_OUT() { return N::Invoke<0xF468278E75CA2341, bool>(); } // 797AC7CB535BA28F 79275A57
  static bool IS_SCREEN_FADING_IN() { return N::Invoke<0xC17F446CF864854D, bool>(); } // 5C544BC6C57AC575 C7C82800
  static void DO_SCREEN_FADE_IN(uint32_t p0) { N::Invoke<0x662E87A876F1069D, void>(p0); } // D4E8E24955024033 66C1BDEE
  static void DO_SCREEN_FADE_OUT(uint32_t p0) { N::Invoke<0x7C69A4879766A867, void>(p0); } // 891B5B39AC6302AF 89D01805
  static void SET_WIDESCREEN_BORDERS(bool p0, uint32_t p1) { N::Invoke<0xFA65E7A36F8CCF0A, void>(p0, p1); } // DCD4EA924F42D01A 1A75DC9A
  static Vector3 GET_GAMEPLAY_CAM_COORD() { return N::Invoke<0xD51D48ADA03E62C7, Vector3>(); } // 14D6F5678D8F1B37 9388CF79
  static Vector3 GET_GAMEPLAY_CAM_ROT(uint32_t p0) { return N::Invoke<0x11EE076BE3DC10C8, Vector3>(p0); } // 837765A25378F0BB 13A010B5
  static uint32_t GET_GAMEPLAY_CAM_FOV() { return N::Invoke<0x9F39A4E08B211E73, uint32_t>(); } // 65019750A0324133 4D6B3BFA
  static void _0xB3A2E1E33B288962(float p0) { N::Invoke<0xB3A2E1E33B288962, void>(p0); } // 487A82C650EB7799 A6E73135
  static void _0x06D88DBBBECD37E5A(float p0) { N::Invoke<0x6D88DBBBECD37E5A, void>(p0); } // 0225778816FDC28C 1126E37C
  static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return N::Invoke<0xEC3EBDC776EBC105, float>(); } // 743607648ADD4587 CAF839C2
  static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float p0) { N::Invoke<0xBE5E0E5A454F4D6A, void>(p0); } // B4EC2312F4E5B1F1 20C6217C
  static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return N::Invoke<0xA38424C4D1A35716, float>(); } // 3A6867B4845BEDA2 FC5A4946
  static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float p0, float p1) { N::Invoke<0x77CB1AAAF31275BE, void>(p0, p1); } // 6D0858B8EDFD2B7D 6381B963
  static uint32_t _0xA9BF832396751ADB() { return N::Invoke<0xA9BF832396751ADB, uint32_t>(); } // 103991D4A307D472
  static uint32_t _0xB27C8D61506D9E62() { return N::Invoke<0xB27C8D61506D9E62, uint32_t>(); } // 759E13EBC1C15C5A
  static uint32_t _0x5F80A122A2D28802() { return N::Invoke<0x5F80A122A2D28802, uint32_t>(); } // 469F2ECDEC046337
  static void SHAKE_GAMEPLAY_CAM(uint32_t *p0, float p1) { N::Invoke<0xF1C274C08D24D634, void>(p0, p1); } // FD55E49555E017CF F2EFE660
  static bool IS_GAMEPLAY_CAM_SHAKING() { return N::Invoke<0xD0FDF77C380EC475, bool>(); } // 016C090630DF1F89 3457D681
  static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float p0) { N::Invoke<0xF78764690DB8F559, void>(p0); } // A87E00932DB4D85D 9219D44A
  static void STOP_GAMEPLAY_CAM_SHAKING(bool p0) { N::Invoke<0xB3BE5EAE7F48BADE, void>(p0); } // 0EF93E9F3D08C178 FD569E4E
  static void _0x75A789F1BD4FCEC9(uint32_t p0) { N::Invoke<0x75A789F1BD4FCEC9, void>(p0); } // 8BBACBF51DA047A8 7D3007A2
  static bool IS_GAMEPLAY_CAM_RENDERING() { return N::Invoke<0x59CDBA417E0AD083, bool>(); } // 39B5D1B10383F0C8 0EF276DA
  static bool _0xE6898C981186359C() { return N::Invoke<0xE6898C981186359C, bool>(); } // 3044240D2E0FA842 C0B00C20
  static bool _0xB1408EC766262EB5() { return N::Invoke<0xB1408EC766262EB5, bool>(); } // 705A276EBFF3133D 60C23785
  static void _0xFA78E5A30E979FA6(bool p0) { N::Invoke<0xFA78E5A30E979FA6, void>(p0); } // DB90C6CCA48940F1 20BFF6E5
  static void _0x5315EC07622F03D4() { N::Invoke<0x5315EC07622F03D4, void>(); } // EA7F0AD7E9BA676F A61FF9AC
  static bool IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return N::Invoke<0x17883A5D027318C8, bool>(); } // 70FDA869F3317EA9 33C83F17
  static void _0x2469B2635578E3C4(uint32_t p0) { N::Invoke<0x2469B2635578E3C4, void>(p0); } // 2AED6301F67007D5 2701A9AD
  static void _0x9197C40714B02BBF(uint32_t p0) { N::Invoke<0x9197C40714B02BBF, void>(p0); } // 49482F9FCD825AAA C4736ED3
  static uint32_t _0x5401ACAABF7E8FCB() { return N::Invoke<0x5401ACAABF7E8FCB, uint32_t>(); } // FD3151CD37EA2245
  static void _0x9CF747CB24FAE16E() { N::Invoke<0x9CF747CB24FAE16E, void>(); } // DD79DF9F4D26E1C9 6B0E9D57
  static bool IS_SPHERE_VISIBLE(float p0, float p1, float p2, float p3) { return N::Invoke<0x23A9305227426F8B, bool>(p0, p1, p2, p3); } // E33D59DA70B58FDF DD1329E2
  static bool IS_FOLLOW_PED_CAM_ACTIVE() { return N::Invoke<0xF4E548FF0E09C05C, bool>(); } // C6D3D26810C8E0F9 9F9E856C
  static bool SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(uint32_t *p0, uint32_t p1) { return N::Invoke<0x62138B1571E297C7, bool>(p0, p1); } // 44A113DD6FFC48D1 1425F6AC
  static void _0xE9096DC7FFFD5750(bool p0, bool p1) { N::Invoke<0xE9096DC7FFFD5750, void>(p0, p1); } // 271401846BD26E92 8DC53629
  static void _0xFA48C1A7973849AF() { N::Invoke<0xFA48C1A7973849AF, void>(); } // C8391C309684595A 1F9DE6E4
  static void _0xCDB39AECC4D67E79(float p0, float p1) { N::Invoke<0xCDB39AECC4D67E79, void>(p0, p1); } // 8F993D26E0CA5E8E 749909AC
  static void _0x41D4442B07A0FF5F(float p0, float p1) { N::Invoke<0x41D4442B07A0FF5F, void>(p0, p1); } // A516C198B7DCA1E1 FA3A16E7
  static void _0xB6893C15800757D3(float p0, float p1) { N::Invoke<0xB6893C15800757D3, void>(p0, p1); } // DF2E1F7742402E81 77340650
  static void _0x325321DAA8D5D727(uint32_t p0, uint32_t p1) { N::Invoke<0x325321DAA8D5D727, void>(p0, p1); } // E9EA16D6E54CDCA4 4B22C5CB
  static uint32_t _0xE9B5EE42D44EAC1C() { return N::Invoke<0xE9B5EE42D44EAC1C, uint32_t>(); } // DE2EF5DA284CC8DF
  static uint32_t _0x8C3EC449F7948B8A() { return N::Invoke<0x8C3EC449F7948B8A, uint32_t>(); } // 59424BD75174C9B1
  static uint32_t GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return N::Invoke<0xC243F8FF770AE73C, uint32_t>(); } // 33E6C8EFD0CD93E9 57583DF1
  static uint32_t GET_FOLLOW_PED_CAM_VIEW_MODE() { return N::Invoke<0x25A5D05A7AF9563B, uint32_t>(); } // 8D4D46230B2C353A A65FF946
  static void SET_FOLLOW_PED_CAM_VIEW_MODE(uint32_t p0) { N::Invoke<0x86A38958F477BE80, void>(p0); } // 5A4F9EDF1673F704 495DBE8D
  static bool IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return N::Invoke<0xEE3FEF5CB30FDBA9, bool>(); } // CBBDE6D335D6D496 8DD49B77
  static void _0xD41BDABD54E48753(bool p0) { N::Invoke<0xD41BDABD54E48753, void>(p0); } // 91EF6EE6419E5B97 9DB5D391
  static void _0x98EC954FE074A36E(bool p0, bool p1) { N::Invoke<0x98EC954FE074A36E, void>(p0, p1); } // 9DFE13ECDC1EC196 92302899
  static uint32_t GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return N::Invoke<0xCFCDD75CC6F54408, uint32_t>(); } // EE82280AB767B690 8CD67DE3
  static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(uint32_t p0) { N::Invoke<0x7152968414A8007F, void>(p0); } // 19464CB6E4078C8A 8F55EBBE
  static uint32_t GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return N::Invoke<0x16F52C789EC7346D, uint32_t>(); } // A4FF579AC0E3AAAE A4B4DB03
  static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(uint32_t p0) { N::Invoke<0xEC3C683F5F7BA0D3, void>(p0); } // AC253D7842768F48 C4FBBBD3
  static uint32_t _0xD686D61A57BCB6E7(uint32_t p0) { return N::Invoke<0xD686D61A57BCB6E7, uint32_t>(p0); } // EE778F8C7E1142E2 F3B148A6
  static void _0x22272191749E9762(uint32_t p0, uint32_t p1) { N::Invoke<0x22272191749E9762, void>(p0, p1); } // 2A2173E46DAECD12 1DEBCB45
  static uint32_t _0xCF4F7FBD80ABE315() { return N::Invoke<0xCF4F7FBD80ABE315, uint32_t>(); } // 19CAFA3C87F7C2FF
  static bool IS_AIM_CAM_ACTIVE() { return N::Invoke<0xC0C709777CCE070F, bool>(); } // 68EDDA28A5976D07 C24B4F6F
  static bool _0xD5979F74CBEDC68E() { return N::Invoke<0xD5979F74CBEDC68E, bool>(); } // 74BD83EA840F6BC9 8F320DE4
  static bool IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return N::Invoke<0x4B1DB7F8007D3A8E, bool>(); } // 5E346D934122613F D6280468
  static void _0xF3166D03A5924568() { N::Invoke<0xF3166D03A5924568, void>(); } // 1A31FE0049E542F6 1BAA7182
  static float _0x673D1AF84EDA28A5() { return N::Invoke<0x673D1AF84EDA28A5, float>(); } // 7EC52CC40597D170 33951005
  static void _0xE42C2201C11C1279(float p0) { N::Invoke<0xE42C2201C11C1279, void>(p0); } // 70894BD0915C5BCA 9F4AF763
  static void _0x9AE219F565919413(float p0, float p1) { N::Invoke<0x9AE219F565919413, void>(p0, p1); } // CED08CBE8EBB97C7 68BA0730
  static void _0xD2444D47D59146BF(float p0, float p1) { N::Invoke<0xD2444D47D59146BF, void>(p0, p1); } // 2F7F2B26DD3F18EE 2F29F0D5
  static void _0xA6CD9F1462874FC8(float p0, float p1) { N::Invoke<0xA6CD9F1462874FC8, void>(p0, p1); } // BCFC632DB7673BF0 76DAC96C
  static void _0x0859D6CCBF11D8802(float p0) { N::Invoke<0x859D6CCBF11D8802, void>(p0); } // 0AF7B437918103B3 0E21069D
  static void _0xA5833EEA42807168(float p0) { N::Invoke<0xA5833EEA42807168, void>(p0); } // 42156508606DE65E 71E9C63E
  static void _0xF3A8D52F48EF53FA(bool p0) { N::Invoke<0xF3A8D52F48EF53FA, void>(p0); } // 4008EDF7D6E48175 D1EEBC45
  static Vector3 _0xCAED01C16CFFE43C() { return N::Invoke<0xCAED01C16CFFE43C, Vector3>(); } // A200EB1EE790F448 9C84BDA0
  static Vector3 _0x15625E41D8D33E1D(uint32_t p0) { return N::Invoke<0x15625E41D8D33E1D, Vector3>(p0); } // 5B4E4C817FCC2DFB 1FFBEFC5
  static Vector3 _0x1A62084802F2B69D(uint32_t p0, uint32_t p1) { return N::Invoke<0x1A62084802F2B69D, Vector3>(p0, p1); } // 26903D9CD1175F2C ACADF916
  static float _0xBCB9DCF2C76D747C() { return N::Invoke<0xBCB9DCF2C76D747C, float>(); } // 80EC114669DAEFF4 721B763B
  static float _0xAF23629CA4B541E1(uint32_t p0) { return N::Invoke<0xAF23629CA4B541E1, float>(p0); } // 5F35F6732C3FBBA0 23E3F106
  static float _0xB2AEC196DF712795() { return N::Invoke<0xB2AEC196DF712795, float>(); } // D0082607100D7193 457AE195
  static float _0x745FBEA28E665938() { return N::Invoke<0x745FBEA28E665938, float>(); } // DFC8CBC606FDB0FC 46CB3A49
  static float _0x3D0251A6132F0FC7() { return N::Invoke<0x3D0251A6132F0FC7, float>(); } // A03502FC581F7D9B 19297A7A
  static float _0x4D786F8A3025A3E3() { return N::Invoke<0x4D786F8A3025A3E3, float>(); } // 9780F32BCAF72431 F24777CA
  static float _0xD232C78BB405F36E() { return N::Invoke<0xD232C78BB405F36E, float>(); } // 162F9D995753DC19 38992E83
  static void SET_GAMEPLAY_COORD_HINT(float p0, float p1, float p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x372F870A74439808, void>(p0, p1, p2, p3, p4, p5, p6); } // D51ADCD2D8BC0FB3 F27483C9
  static void SET_GAMEPLAY_PED_HINT(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x799F50B736831F50, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 2B486269ACD548D3 7C27343E
  static void SET_GAMEPLAY_VEHICLE_HINT(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x70D9C3801B5CF3F9, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // A2297E18F3E71C2E 2C9A11D8
  static void _0x350B8A2B3249C3B0(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x350B8A2B3249C3B0, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 83E87508A2CA2AC6 2ED5E2F8
  static void SET_GAMEPLAY_ENTITY_HINT(uint32_t p0, float p1, float p2, float p3, bool p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { N::Invoke<0x5272DA4DFB8755D, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 189E955A8313E298 66C32306
  static bool IS_GAMEPLAY_HINT_ACTIVE() { return N::Invoke<0x4DA2E12E0157B5A3, bool>(); } // E520FF1AD2785B40 AD8DA205
  static void STOP_GAMEPLAY_HINT(bool p0) { N::Invoke<0xD1C3C2B4975D8AC, void>(p0); } // F46C581C61718916 1BC28B7B
  static void _0xC3217D5D3D14D874(uint32_t p0) { N::Invoke<0xC3217D5D3D14D874, void>(p0); } // CCD078C2665D2973 CAFEE798
  static uint32_t _0x16F8D6216A83987C() { return N::Invoke<0x16F8D6216A83987C, uint32_t>(); } // 247ACBC4ABBC9D1C
  static uint32_t _0x3D73FF90660B4215() { return N::Invoke<0x3D73FF90660B4215, uint32_t>(); } // BF72910D0F26F025
  static void SET_GAMEPLAY_HINT_FOV(float p0) { N::Invoke<0x4307004F998C4882, void>(p0); } // 513403FB9C56211F 96FD173B
  static void _0x7F5316ECFD8DA1CC(float p0) { N::Invoke<0x7F5316ECFD8DA1CC, void>(p0); } // F8BDBF3D573049A1 72E8CD3A
  static void _0x873110DD0F490654(float p0) { N::Invoke<0x873110DD0F490654, void>(p0); } // D1F8363DFAD03848 79472AE3
  static void _0x7CE63C7D0D4300F8(float p0) { N::Invoke<0x7CE63C7D0D4300F8, void>(p0); } // 5D7B620DAE436138 FC7464A0
  static void _0xA26DC501FE9CCF6E(float p0) { N::Invoke<0xA26DC501FE9CCF6E, void>(p0); } // C92717EF615B6704 3554AA0E
  static void GET_IS_MULTIPLAYER_BRIEF(bool p0) { N::Invoke<0x7F7472EAD5D217FD, void>(p0); } // E3433EADAAF7EE40 2F0CE859
  static void SET_CINEMATIC_BUTTON_ACTIVE(bool p0) { N::Invoke<0x2E98407DE29E0D76, void>(p0); } // 51669F7D1FB53D9F 3FBC5D00
  static bool IS_CINEMATIC_CAM_RENDERING() { return N::Invoke<0x7053BA28C218E98, bool>(); } // B15162CB5826E9E8 80471AD9
  static void SHAKE_CINEMATIC_CAM(uint32_t *p0, float p1) { N::Invoke<0x8C565956B6F9E723, void>(p0, p1); } // DCE214D9ED58F3CF 61815F31
  static bool IS_CINEMATIC_CAM_SHAKING() { return N::Invoke<0xCED9A2EF4ECBCD16, bool>(); } // BBC08F6B4CB8FF0A 8376D939
  static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { N::Invoke<0x6B5EA708EBD7C0EF, void>(p0); } // C724C701C30B2FE7 67510C4B
  static void STOP_CINEMATIC_CAM_SHAKING(bool p0) { N::Invoke<0xD6F8F4C71896F304, void>(p0); } // 2238E588E588A6D7 71C12904
  static void _0xCEC2C1A952E78932() { N::Invoke<0xCEC2C1A952E78932, void>(); } // ADFF1B2A555F5FBA 5AC6DAC9
  static void _0xC8A31C46006AC0E6() { N::Invoke<0xC8A31C46006AC0E6, void>(); } // 62ECFCFDEE7885D6 837F8581
  static void _0xE4D93F952ACE6D39() { N::Invoke<0xE4D93F952ACE6D39, void>(); } // 9E4CFFF989258472 65DDE8AF
  static void _0x34D2702FC9C10B64() { N::Invoke<0x34D2702FC9C10B64, void>(); } // F4F2C0D4EE209E20 D75CDD75
  static bool _0xE99F2BF3E6C9CA20() { return N::Invoke<0xE99F2BF3E6C9CA20, bool>(); } // CA9D2AA3E326D720 96A07066
  static uint32_t _0xB4559880093FB79E() { return N::Invoke<0xB4559880093FB79E, uint32_t>(); } // 4F32C0D5A90A9B40
  static void CREATE_CINEMATIC_SHOT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xEDF9069E09C7144E, void>(p0, p1, p2, p3); } // 741B0129D4560F31 AC494E35
  static bool IS_CINEMATIC_SHOT_ACTIVE(uint32_t p0) { return N::Invoke<0x9CC987147BD7A557, bool>(p0); } // CC9F3371A7C28BC9 A4049042
  static void STOP_CINEMATIC_SHOT(uint32_t p0) { N::Invoke<0xCF819C8AB535C79, void>(p0); } // 7660C6E75D3A078E D78358C5
  static void _0x5485AD3A89149EF5(bool p0) { N::Invoke<0x5485AD3A89149EF5, void>(p0); } // A41BCD7213805AAC FBB85E02
  static void _0x45C08B49FC5C68C4() { N::Invoke<0x45C08B49FC5C68C4, void>(); } // DC9DA9E8789F5246 4938C82F
  static void SET_CINEMATIC_MODE_ACTIVE(bool p0) { N::Invoke<0xF449FACE51E9CED4, void>(p0); } // DCF0754AC3D6FD4E 2009E747
  static bool _0xB78322EEDE75AABE() { return N::Invoke<0xB78322EEDE75AABE, bool>(); } // 1F2300CB7FA7B7F6 6739AD55
  static uint32_t _0x65C671B5F3251D24() { return N::Invoke<0x65C671B5F3251D24, uint32_t>(); } // 17FCA7199A530203
  static void STOP_CUTSCENE_CAM_SHAKING() { N::Invoke<0xBF05A639D420CED, void>(); } // DB629FFD9285FA06 F07D603D
  static uint32_t _0xD6140515D4C2A8F0() { return N::Invoke<0xD6140515D4C2A8F0, uint32_t>(); } // 324C5AA411DA7737
  static void _0x6FB658F7CAA71C57(float p0) { N::Invoke<0x6FB658F7CAA71C57, void>(p0); } // 12DED8CA53D47EA5 067BA6F5
  static uint32_t _0x738284E79AD465F(float p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8) { return N::Invoke<0x738284E79AD465F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 89215EC747DF244A FD99BE2B
  static void _0x148BE90CB6E7D636() { N::Invoke<0x148BE90CB6E7D636, void>(); } // 5A43C76F7FC7BA5F E206C450
  static void _0x5F3C6DA9E6C7C9AB(uint32_t p0) { N::Invoke<0x5F3C6DA9E6C7C9AB, void>(p0); } // 80C8B1846639BB19 B06CCD38
  static uint32_t _0x353E636C0F6E8F96() { return N::Invoke<0x353E636C0F6E8F96, uint32_t>(); } // 5C41E6BABC9E2112
  static uint32_t _0xC600358708904B0C() { return N::Invoke<0xC600358708904B0C, uint32_t>(); } // 21E253A7F8DA5DFB
  static uint32_t _0x9D3B6E6475D2D218() { return N::Invoke<0x9D3B6E6475D2D218, uint32_t>(); } // 11FA5D3479C7DD47
  static uint32_t _0x3D9ACBB48FD4AD3A() { return N::Invoke<0x3D9ACBB48FD4AD3A, uint32_t>(); } // EAF0FA793D05C592
  static uint32_t _0xAE34A0C3FADEF96D() { return N::Invoke<0xAE34A0C3FADEF96D, uint32_t>(); } // 8BFCEB5EA1B161B6
}

namespace WEAPON
{
  static void ENABLE_LASER_SIGHT_RENDERING(bool p0) { N::Invoke<0x1252B91DF30E2326, void>(p0); } // C8B46D7727D864AA E3438955
  static uint32_t _0x050E2C6565C68F1C9(uint32_t p0) { return N::Invoke<0x50E2C6565C68F1C9, uint32_t>(p0); } // 0DB57B41EC1DB083 324FA47A
  static uint32_t GET_WEAPONTYPE_MODEL(uint32_t p0) { return N::Invoke<0xB1E0BCECCDBB84FF, uint32_t>(p0); } // F46CDC33180FDA94 44E1C269
  static uint32_t GET_WEAPONTYPE_SLOT(uint32_t p0) { return N::Invoke<0x3D065250ED61F7CA, uint32_t>(p0); } // 4215460B9B8B7FA0 2E3759AF
  static uint32_t GET_WEAPONTYPE_GROUP(uint32_t p0) { return N::Invoke<0xF648048E6825DAC3, uint32_t>(p0); } // C3287EE3050FB74C 5F2DE833
  static void SET_CURRENT_PED_WEAPON(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xA000D03DB5B545F, void>(p0, p1, p2); } // ADF692B254977C0C B8278882
  static bool GET_CURRENT_PED_WEAPON(uint32_t p0, uint32_t *p1, bool p2) { return N::Invoke<0xAE0CD3052D6ED1ED, bool>(p0, p1, p2); } // 3A87E44BB9A01D54 B0237302
  static uint32_t _0xC802AF773B8A86E9(uint32_t p0) { return N::Invoke<0xC802AF773B8A86E9, uint32_t>(p0); } // 3B390A939AF0B5FC 5D73CD20
  static uint32_t GET_BEST_PED_WEAPON(uint32_t p0, bool p1) { return N::Invoke<0x6B9DE622102854B0, uint32_t>(p0, p1); } // 8483E98E8B888AE2 B998D444
  static bool SET_CURRENT_PED_VEHICLE_WEAPON(uint32_t p0, uint32_t p1) { return N::Invoke<0x514C9C7B73B44C49, bool>(p0, p1); } // 75C55983C2C39DAA 8E6F2AF1
  static bool GET_CURRENT_PED_VEHICLE_WEAPON(uint32_t p0, uint32_t *p1) { return N::Invoke<0x12EA6B1882056F26, bool>(p0, p1); } // 1017582BCD3832DC F26C5D65
  static bool IS_PED_ARMED(uint32_t p0, uint32_t p1) { return N::Invoke<0x73741D3DABB81B29, bool>(p0, p1); } // 475768A975D5AD17 0BFC892C
  static bool IS_WEAPON_VALID(uint32_t p0) { return N::Invoke<0x577AED7A4A7B313C, bool>(p0); } // 937C71165CF334B3 38CA2954
  static bool HAS_PED_GOT_WEAPON(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x99A28335809E4B6C, bool>(p0, p1, p2); } // 8DECB02F88F428BC 43D2FA82
  static bool _0xF0BCA5AA42062B2A(uint32_t p0) { return N::Invoke<0xF0BCA5AA42062B2A, bool>(p0); } // B80CA294F2F26749 02A32CB0
  static uint32_t GET_PED_WEAPONTYPE_IN_SLOT(uint32_t p0, uint32_t p1) { return N::Invoke<0x844EDB06A8B25065, uint32_t>(p0, p1); } // EFFED78E9011134D 9BC64E16
  static uint32_t GET_AMMO_IN_PED_WEAPON(uint32_t p0, uint32_t p1) { return N::Invoke<0x5B6F0BD6BBB2050, uint32_t>(p0, p1); } // 015A522136D7F951 0C755733
  static void ADD_AMMO_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x26ABA9F6929FC315, void>(p0, p1, p2); } // 78F0424C34306220 7F0580C7
  static void SET_PED_AMMO(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x5E9FB5BCBCC5552E, void>(p0, p1, p2); } // 14E56BC5B5DB6A19 BF90DF1A
  static void SET_PED_INFINITE_AMMO(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0x278C9D6141B17BA8, void>(p0, p1, p2); } // 3EDCB0505123623B 9CB8D278
  static void _0x149174181F6271F0(uint32_t p0, bool p1) { N::Invoke<0x149174181F6271F0, void>(p0, p1); } // 183DADC6AA953186 5A5E3B67
  static void GIVE_WEAPON_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2, bool p3, bool p4) { N::Invoke<0x3F9EDC2D18464273, void>(p0, p1, p2, p3, p4); } // BF0FD6E56C964FCB C4D88A85
  static void GIVE_DELAYED_WEAPON_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0x22E3FB128E67BC05, void>(p0, p1, p2, p3); } // B282DC6EBD803C75 5868D20D
  static void REMOVE_ALL_PED_WEAPONS(uint32_t p0, bool p1) { N::Invoke<0xD924F18058446351, void>(p0, p1); } // F25DF915FA38C5F3 A44CE817
  static void REMOVE_WEAPON_FROM_PED(uint32_t p0, uint32_t p1) { N::Invoke<0xD419CF589B371044, void>(p0, p1); } // 4899CB088EDF59B8 9C37F220
  static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(uint32_t p0, bool p1) { N::Invoke<0xB0CAF046D7045AFD, void>(p0, p1); } // 6F6981D2253C208F 00CFD6E9
  static void SET_PED_CURRENT_WEAPON_VISIBLE(uint32_t p0, bool p1, bool p2, bool p3) { N::Invoke<0x6ABB53110C862972, void>(p0, p1, p2, p3); } // 0725A4CCFDED9A70 00BECD77
  static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(uint32_t p0, bool p1) { N::Invoke<0x8A38A8CE1C66FD26, void>(p0, p1); } // 476AE72C1D19D1A8 8A444056
  static bool HAS_PED_BEEN_DAMAGED_BY_WEAPON(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x26C9ECBDBBD7083F, bool>(p0, p1, p2); } // 2D343D2219CD027A CDFBBCC6
  static void CLEAR_PED_LAST_WEAPON_DAMAGE(uint32_t p0) { N::Invoke<0xF9656291E97A14E1, void>(p0); } // 0E98F88A24C5F4B8 52C68832
  static bool HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xEA4A2F1853D39672, bool>(p0, p1, p2); } // 131D401334815E94 6DAABB39
  static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(uint32_t p0) { N::Invoke<0xE265BF17546FED93, void>(p0); } // AC678E40BE7C74D2 CEC2732B
  static void SET_PED_DROPS_WEAPON(uint32_t p0) { N::Invoke<0x45ACB0F4EFEF8566, void>(p0); } // 6B7513D9966FBEC0 3D3329FA
  static void SET_PED_DROPS_INVENTORY_WEAPON(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0xA7A2591469596B1C, void>(p0, p1, p2, p3, p4, p5); } // 208A1888007FC0E6 81FFB874
  static uint32_t GET_MAX_AMMO_IN_CLIP(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0x3F1546B19E6B4594, uint32_t>(p0, p1, p2); } // A38DCFFCEA8962FA 6961E2A4
  static bool GET_AMMO_IN_CLIP(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x283DC9F21B8978CB, bool>(p0, p1, p2); } // 2E1202248937775C 73C100C3
  static bool SET_AMMO_IN_CLIP(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x3390F439BECE0939, bool>(p0, p1, p2); } // DCD2A934D65CB497 A54B0B10
  static bool GET_MAX_AMMO(uint32_t p0, uint32_t p1, int *p2) { return N::Invoke<0x2A292A04D839BF3D, bool>(p0, p1, p2); } // DC16122C7A20C933 0B294796
  static void SET_PED_AMMO_BY_TYPE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x9BD32B3007178D18, void>(p0, p1, p2); } // 5FD1E1F011E76D7E 311C52BB
  static uint32_t GET_PED_AMMO_BY_TYPE(uint32_t p0, uint32_t p1) { return N::Invoke<0x3C5580898397C891, uint32_t>(p0, p1); } // 39D22031557946C1 54077C4D
  static void SET_PED_AMMO_TO_DROP(uint32_t p0, uint32_t p1) { N::Invoke<0x395B0BA0616F847C, void>(p0, p1); } // A4EFEF9440A5B0EF 2386A307
  static void _0x497AA8F1AEB81ABD(float p0) { N::Invoke<0x497AA8F1AEB81ABD, void>(p0); } // E620FD3512A04F18 D6460EA2
  static uint32_t _0x46876FC049FB1DBA(uint32_t p0, uint32_t p1) { return N::Invoke<0x46876FC049FB1DBA, uint32_t>(p0, p1); } // 7FEAD38B326B9F74 09337863
  static bool GET_PED_LAST_WEAPON_IMPACT_COORD(uint32_t p0, Vector3* p1) { return N::Invoke<0x12AA7FF0D68549E2, uint32_t>(p0, p1); } // 6C4D0409BA1A2BC2 9B266079
  static void SET_PED_GADGET(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x2D8ABC8CC825C578, void>(p0, p1, p2); } // D0D7B1E680ED4A1A 8A256D0A
  static bool _0xCB79AB67F7DF0E8F(uint32_t p0, uint32_t p1) { return N::Invoke<0xCB79AB67F7DF0E8F, bool>(p0, p1); } // F731332072F5156C 8DDD0B5B
  static uint32_t GET_SELECTED_PED_WEAPON(uint32_t p0) { return N::Invoke<0x38C3C5CBC068F495, uint32_t>(p0); } // 0A6DB4965674D243 D240123E
  static void EXPLODE_PROJECTILES(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x85391B0CBADC9125, void>(p0, p1, p2); } // FC4BD125DE7611E4 35A0B955
  static void REMOVE_ALL_PROJECTILES_OF_TYPE(uint32_t p0, bool p1) { N::Invoke<0xA20D0F9030F8682A, void>(p0, p1); } // FC52E0F37E446528 A5F89919
  static float _0x9E72A131A3CFE4(uint32_t p0) { return N::Invoke<0x9E72A131A3CFE4, float>(p0); } // 840F03E9041E2C9C 3612110D
  static float _0xECB505237A71C614(uint32_t p0) { return N::Invoke<0xECB505237A71C614, float>(p0); } // 814C9D19DFD69679 B2B2BBAA
  static bool HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xCA0F57DC6B4F6FDF, bool>(p0, p1, p2, p3); } // 717C8481234E3B88 A57E2E80
  static void GIVE_WEAPON_COMPONENT_TO_PED(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xA5D38CA437E6AE76, void>(p0, p1, p2); } // D966D51AA5B28BB9 3E1E286D
  static void REMOVE_WEAPON_COMPONENT_FROM_PED(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xC79B464835F5D0AC, void>(p0, p1, p2); } // 1E8BE90C74FB4C09 412AA00D
  static bool HAS_PED_GOT_WEAPON_COMPONENT(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xC2AA32EA0F5ABE8C, bool>(p0, p1, p2); } // C593212475FAE340 DC0FC145
  static bool IS_PED_WEAPON_COMPONENT_ACTIVE(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x633078AE081FDFFC, bool>(p0, p1, p2); } // 0D78DE0572D3969E 7565FB19
  static bool _0x4880C41280A56CE8(uint32_t p0) { return N::Invoke<0x4880C41280A56CE8, bool>(p0); } // 8C0D57EA686FAD87 82EEAF0F
  static bool MAKE_PED_RELOAD(uint32_t p0) { return N::Invoke<0x828E3F61759785DA, bool>(p0); } // 20AE33F3AC9C0033 515292C2
  static void REQUEST_WEAPON_ASSET(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x75EC07FC3A76FA6B, void>(p0, p1, p2); } // 5443438F033E29C3 65D139A5
  static bool HAS_WEAPON_ASSET_LOADED(uint32_t p0) { return N::Invoke<0xC35CCF23F0A1E055, bool>(p0); } // 36E353271F0E90EE 1891D5BB
  static void REMOVE_WEAPON_ASSET(uint32_t p0) { N::Invoke<0x59A935DC5B1115A0, void>(p0); } // AA08EF13F341C8FC 2C0DFE3C
  static uint32_t CREATE_WEAPON_OBJECT(uint32_t p0, uint32_t p1, float p2, float p3, float p4, bool p5, float p6) { return N::Invoke<0xE7097371671ECEE, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 9541D3CF0D398F36 62F5987F
  static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uint32_t p0, uint32_t p1) { N::Invoke<0xA37DD53A77EFC004, void>(p0, p1); } // 33E179436C0B31DB F7612A37
  static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(uint32_t p0, uint32_t p1) { N::Invoke<0xFA9FC2CC12F12E2, void>(p0, p1); } // F7D82B0D66777611 A6E7ED3C
  static bool HAS_WEAPON_GOT_WEAPON_COMPONENT(uint32_t p0, uint32_t p1) { return N::Invoke<0xCCFDA3E6DB3292FD, bool>(p0, p1); } // 76A18844E743BF91 1D368510
  static void GIVE_WEAPON_OBJECT_TO_PED(uint32_t p0, uint32_t p1) { N::Invoke<0xC4FA9391A7820F4C, void>(p0, p1); } // B1FA61371AF7C4B7 639AF3EF
  static bool _0xB54A90CFB6499CC0(uint32_t p0, uint32_t p1) { return N::Invoke<0xB54A90CFB6499CC0, bool>(p0, p1); } // 5CEE3DF569CECAB0 B1817BAA
  static uint32_t GET_WEAPON_OBJECT_FROM_PED(uint32_t p0, bool p1) { return N::Invoke<0x835BADE44D15B89F, uint32_t>(p0, p1); } // CAE1DC9A0E22A16D DF939A38
  static void SET_PED_WEAPON_TINT_INDEX(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x707D1AA75102B121, void>(p0, p1, p2); } // 50969B9B89ED5738 EB2A7B23
  static uint32_t GET_PED_WEAPON_TINT_INDEX(uint32_t p0, uint32_t p1) { return N::Invoke<0x539EF466D1E3CB3E, uint32_t>(p0, p1); } // 2B9EEDC07BD06B9F 3F9C90A7
  static void SET_WEAPON_OBJECT_TINT_INDEX(uint32_t p0, uint32_t p1) { N::Invoke<0x222A503B1ACC8E1B, void>(p0, p1); } // F827589017D4E4A9 44ACC1DA
  static uint32_t GET_WEAPON_OBJECT_TINT_INDEX(uint32_t p0) { return N::Invoke<0x2D7FEB764471741F, uint32_t>(p0); } // CD183314F7CD2E57 D91D9576
  static uint32_t GET_WEAPON_TINT_COUNT(uint32_t p0) { return N::Invoke<0x66A8A449029FCEF9, uint32_t>(p0); } // 5DCF6C5CAB2E9BF7 99E4EAAB
  static bool GET_WEAPON_HUD_STATS(uint32_t p0, uint32_t *p1) { return N::Invoke<0x57AB88AE53E6FE34, bool>(p0, p1); } // D92C739EE34C9EBA A9AD3D98
  static bool GET_WEAPON_COMPONENT_HUD_STATS(uint32_t p0, uint32_t *p1) { return N::Invoke<0xB6ECA79DB72D60DF, bool>(p0, p1); } // B3CAF387AE12E9F8 BB5498F4
  static uint32_t _0x3984B0569B2A2DAA() { return N::Invoke<0x3984B0569B2A2DAA, uint32_t>(); } // 3133B907D8B32053
  static uint32_t GET_WEAPON_CLIP_SIZE(uint32_t p0) { return N::Invoke<0x4FA0109B5AFB0E0B, uint32_t>(p0); } // 583BE370B1EC6EB4 8D515E66
  static void _0xB0CE2F58410F3E67(uint32_t p0, float p1, float p2) { N::Invoke<0xB0CE2F58410F3E67, void>(p0, p1, p2); } // 8378627201D5497D B4F44C6E
  static uint32_t _0x6548EE09EBE6F07B(uint32_t p0, float p1) { return N::Invoke<0x6548EE09EBE6F07B, uint32_t>(p0, p1); } // B4C8D77C80C0421E EC2E5304
  static void _0x5D4DF1B72809D988(uint32_t p0) { N::Invoke<0x5D4DF1B72809D988, void>(p0); } // 48164DBB970AC3F0 E3BD00F9
  static bool _0xB6CDBC1E2904184A(uint32_t p0) { return N::Invoke<0xB6CDBC1E2904184A, bool>(p0); } // 65F0C5AE05943EC7 BAF7BFBE
  static bool SET_WEAPON_SMOKEGRENADE_ASSIGNED(uint32_t p0) { return N::Invoke<0x494ECCA83F6C66DA, bool>(p0); } // 4B7620C47217126C 76876154
  static uint32_t _0xDF504A84E9A42333(uint32_t p0) { return N::Invoke<0xDF504A84E9A42333, uint32_t>(p0); } // CEA66DAD478CD39B B0127EA7
  static void SET_WEAPON_ANIMATION_OVERRIDE(uint32_t p0, uint32_t p1) { N::Invoke<0x46D38CEA39E3DD6B, void>(p0, p1); } // 1055AC3A667F09D9 A5DF7484
  static uint32_t GET_WEAPON_DAMAGE_TYPE(uint32_t p0) { return N::Invoke<0x4671ADA807544C7C, uint32_t>(p0); } // 3BE0BB12D25FB305 013AFC13
  static void _0x58E3A84D0B120543(uint32_t p0) { N::Invoke<0x58E3A84D0B120543, void>(p0); } // E4DCEC7FD5B739A5 64646F1D
  static bool _0xE0D0E26CD5C29692(uint32_t p0) { return N::Invoke<0xE0D0E26CD5C29692, bool>(p0); } // BC7BE5ABC0879F74 135E7AD4
}

namespace ITEMSET
{
  static uint32_t CREATE_ITEMSET(bool p0) { return N::Invoke<0x95F5931B4A4A5A4F, uint32_t>(p0); } // 35AD299F50D91B24 0A113B2C
  static void DESTROY_ITEMSET(uint32_t p0) { N::Invoke<0x2EC9C57FB0F87740, void>(p0); } // DE18220B1C183EDA 83CE1A4C
  static bool IS_ITEMSET_VALID(uint32_t p0) { return N::Invoke<0x7EB3F4AFF5E5629C, bool>(p0); } // B1B1EA596344DFAB D201FC29
  static bool ADD_TO_ITEMSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x9C10EF90C142040A, bool>(p0, p1); } // E3945201F14637DD 6B0FE61B
  static void REMOVE_FROM_ITEMSET(uint32_t p0, uint32_t p1) { N::Invoke<0xB84BEE9EC8BFE9E9, void>(p0, p1); } // 25E68244B0177686 A9565228
  static uint32_t GET_ITEMSET_SIZE(uint32_t p0) { return N::Invoke<0x3A30E959081412C4, uint32_t>(p0); } // D9127E83ABF7C631 2B31F41A
  static uint32_t GET_INDEXED_ITEM_IN_ITEMSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x55A47F6E3AD65F26, uint32_t>(p0, p1); } // 7A197E2521EE2BAB 3F712874
  static bool IS_IN_ITEMSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x911210B40CE6E4B5, bool>(p0, p1); } // 2D0FC594D1E9C107 0D4B9730
  static void CLEAN_ITEMSET(uint32_t p0) { N::Invoke<0x7019C59DA53362F8, void>(p0); } // 41BC0D722FC04221 919A4858
}

namespace STREAMING
{
  static void LOAD_ALL_OBJECTS_NOW() { N::Invoke<0x61D7DE7855BA322D, void>(); } // BD6E84632DD4CB3F C9DBDA90
  static void LOAD_SCENE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xACF6EF3086F35588, void>(p0, p1, p2); } // 4448EB75B4904BDB B72403F5
  static bool NETWORK_UPDATE_LOAD_SCENE() { return N::Invoke<0x59A32924D04EF9E2, bool>(); } // C4582015556D1C46 C76E023C
  static void NETWORK_STOP_LOAD_SCENE() { N::Invoke<0x3853D49231A8D913, void>(); } // 64E630FAF5F60F44 24857907
  static uint32_t IS_NETWORK_LOADING_SCENE() { return N::Invoke<0x74231FFA566BF8EB, uint32_t>(); } // 41CA5A33160EA4AB 6DCFC021
  static void SET_INTERIOR_ACTIVE(uint32_t p0, uint32_t p1) { N::Invoke<0x588A2342FBF483D3, void>(p0, p1); } // E37B76C387BE28ED E1013910
  static void REQUEST_MODEL(uint32_t p0) { N::Invoke<0xCBE6AC5010E5CE5C, void>(p0); } // 963D27A58DF860AC FFF1B500
  static void _0x1208BFE48A0795A8(uint32_t p0) { N::Invoke<0x1208BFE48A0795A8, void>(p0); } // A0261AEF7ACFC51E 48CEB6B4
  static bool HAS_MODEL_LOADED(uint32_t p0) { return N::Invoke<0xD291857D0C9C7FEC, bool>(p0); } // 98A4EB5D89A0C952 62BFDB37
  static void _0x5A970C3A7A1E6FDA(uint32_t p0, uint32_t *p1) { N::Invoke<0x5A970C3A7A1E6FDA, void>(p0, p1); } // 8A7A40100EDFEC58 939243FB
  static void SET_MODEL_AS_NO_LONGER_NEEDED(uint32_t p0) { N::Invoke<0xFF467904A8A12BBE, void>(p0); } // E532F5D78798DAAB AE0F069E
  static bool IS_MODEL_IN_CDIMAGE(uint32_t p0) { return N::Invoke<0xEC55223EB53BF03, bool>(p0); } // 35B9E0803292B641 1094782F
  static bool IS_MODEL_VALID(uint32_t p0) { return N::Invoke<0x95D2CAFD0847126E, bool>(p0); } // C0296A2EDF545E92 AF8F8E9D
  static bool IS_MODEL_A_VEHICLE(uint32_t p0) { return N::Invoke<0x4E583EB6802F4DA9, bool>(p0); } // 19AAC8F07BFEC53E FFFC85D4
  static void REQUEST_COLLISION_AT_COORD(float p0, float p1, float p2) { N::Invoke<0x153283B8BB8F15AB, void>(p0, p1, p2); } // 07503F7948F491A7 CD9805E7
  static void REQUEST_COLLISION_FOR_MODEL(uint32_t p0) { N::Invoke<0x6D7EB68BCA6E62DB, void>(p0); } // 923CB32A3B874FCB 3930C042
  static bool HAS_COLLISION_FOR_MODEL_LOADED(uint32_t p0) { return N::Invoke<0x9F5185AF5BCEE3AD, bool>(p0); } // 22CCA434E368F03A 41A094F8
  static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float p0, float p1, float p2) { N::Invoke<0xB9DEC413FDB9493F, void>(p0, p1, p2); } // C9156DC11411A9EA C2CC1DF2
  static bool _0xF9A4710AC2279D8E(uint32_t *p0) { return N::Invoke<0xF9A4710AC2279D8E, bool>(p0); } // 2DA49C3B79856961 CD31C872
  static void REQUEST_ANIM_DICT(uint32_t *p0) { N::Invoke<0x395C5D98343F0040, void>(p0); } // D3BD40951412FEF6 DCA96950
  static bool HAS_ANIM_DICT_LOADED(uint32_t *p0) { return N::Invoke<0xCE40391AB65FE305, bool>(p0); } // D031A9162D01088C 05E6763C
  static void REMOVE_ANIM_DICT(uint32_t *p0) { N::Invoke<0xA878656BC39BBC51, void>(p0); } // F66A602F829E2A06 0AE050B5
  static void REQUEST_ANIM_SET(uint32_t *p0) { N::Invoke<0xC47168D93A3B223B, void>(p0); } // 6EA47DAE7FAD0EED 2988B3FC
  static bool HAS_ANIM_SET_LOADED(uint32_t *p0) { return N::Invoke<0xB3E0182D84120379, bool>(p0); } // C4EA073D86FB29B0 4FFF397D
  static void REMOVE_ANIM_SET(uint32_t *p0) { N::Invoke<0xD0522F98C595B73F, void>(p0); } // 16350528F93024B3 D04A817A
  static void REQUEST_CLIP_SET(uint32_t *p0) { N::Invoke<0x4554A56FA4AB29D4, void>(p0); } // D2A71E1A77418A49 546C627A
  static bool HAS_CLIP_SET_LOADED(uint32_t *p0) { return N::Invoke<0x7283AF7715BF497C, bool>(p0); } // 318234F4F3738AF3 230D5455
  static void REMOVE_CLIP_SET(uint32_t *p0) { N::Invoke<0x36A51C16EAE930C6, void>(p0); } // 01F73A131C18CD94 1E21F7AA
  static void REQUEST_IPL(uint32_t *p0) { N::Invoke<0x601E476BBE5247E8, void>(p0); } // 41B4893843BBDB74 3B70D1DB
  static void REMOVE_IPL(uint32_t *p0) { N::Invoke<0xF5C0693050707613, void>(p0); } // EE6C5AD3ECE0A82D DF7CBD36
  static bool IS_IPL_ACTIVE(uint32_t *p0) { return N::Invoke<0x70AE5EB0F832620B, bool>(p0); } // 88A741E44A2B3495 B2C33714
  static void SET_STREAMING(bool p0) { N::Invoke<0x45B3203E024F2BC0, void>(p0); } // 6E0C692677008888 27EF6CB2
  static void SET_GAME_PAUSES_FOR_STREAMING(bool p0) { N::Invoke<0x6AE9435516202E12, void>(p0); } // 717CD6E6FAEBBEDC 9211A28A
  static void SET_REDUCE_PED_MODEL_BUDGET(bool p0) { N::Invoke<0xA589B5F4D7EAEE6D, void>(p0); } // 77B5F9A36BF96710 AFCB2B86
  static void SET_REDUCE_VEHICLE_MODEL_BUDGET(bool p0) { N::Invoke<0x31C604AB6DA96DB8, void>(p0); } // 80C527893080CCF3 CDB4FB7E
  static void SET_DITCH_POLICE_MODELS(uint32_t p0) { N::Invoke<0x9170954EA4850E64, void>(p0); } // 42CBE54462D92634 3EA7FCE4
  static uint32_t GET_NUMBER_OF_STREAMING_REQUESTS() { return N::Invoke<0x5B75812E50CF3504, uint32_t>(); } // 4060057271CEBC89 C2EE9A02
  static void REQUEST_PTFX_ASSET() { N::Invoke<0x903BC66D86D2CC1E, void>(); } // 944955FB2A3935C8 2C649263
  static bool HAS_PTFX_ASSET_LOADED() { return N::Invoke<0x9B3E74864C634DA, bool>(); } // CA7D9B86ECA7481B 3EFF96BE
  static void REMOVE_PTFX_ASSET() { N::Invoke<0x7E0FE22DC929277C, void>(); } // 88C6814073DD4A73 C10F178C
  static void _REQUEST_PTFX_ASSET_BY_NAME(const char *p0) { N::Invoke<0xCF907E5AC65B038E, void>(p0); } // B80D8756B4668AB6 CFEA19A9
  static bool _HAS_PTFX_ASSET_LOADED(const char *p0) { return N::Invoke<0x173B323AC0CDFE9F, bool>(p0); } // 8702416E512EC454 9ACC6446
  static uint32_t _0xC57291EE3BD8D707() { return N::Invoke<0xC57291EE3BD8D707, uint32_t>(); } // 5F61EBBE1A00F96D
  static void SET_VEHICLE_POPULATION_BUDGET(uint32_t p0) { N::Invoke<0x71BAB41E12C3DD96, void>(p0); } // CB9E1EB3BE2AF4E9 1D56993C
  static void SET_PED_POPULATION_BUDGET(uint32_t p0) { N::Invoke<0xEC7A879C0E3A5901, void>(p0); } // 8C95333CFC3340F3 D2D026CD
  static void CLEAR_FOCUS() { N::Invoke<0x82421251EA167F9A, void>(); } // 31B73D1EA9F01DA2 34D91E7A
  static void _0x8141B97DE35EAF42(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x8141B97DE35EAF42, void>(p0, p1, p2, p3, p4, p5); } // BB7454BAFF08FE25 14680A60
  static void SET_FOCUS_ENTITY(uint32_t p0) { N::Invoke<0xA9E50DAA51C8EE4D, void>(p0); } // 198F77705FA0931D 18DB04AC
  static bool IS_ENTITY_FOCUS(uint32_t p0) { return N::Invoke<0x47673CA46C94CD3, bool>(p0); } // 2DDFF3FB9075D747 B456D707
  static uint32_t _0xDEC4BB9C64BB7C50() { return N::Invoke<0xDEC4BB9C64BB7C50, uint32_t>(); } // 811381EF5062FEC
  static void _0xEC53C2033B9406B2(uint32_t *p0, bool p1) { N::Invoke<0xEC53C2033B9406B2, void>(p0, p1); } // AF12610C644A35C9 403CD434
  static void _0x34E90427DB2C9C3D(uint32_t p0) { N::Invoke<0x34E90427DB2C9C3D, void>(p0); } // 4E52E752C76E7E7A A07BAEB9
  static uint32_t _0x67C7B526372AB1F7(float p0, float p1, float p2, float p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x67C7B526372AB1F7, uint32_t>(p0, p1, p2, p3, p4, p5); } // 219C7B8D53E429FD 10B6AB36
  static uint32_t _0x14EF80A973C10A00(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8) { return N::Invoke<0x14EF80A973C10A00, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 1F3F018BC3AFA77C 72344191
  static uint32_t _0x01B3D59C23288231C(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6) { return N::Invoke<0x1B3D59C23288231C, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 0AD9710CEE2F590F C0157255
  static void _0x1484CB72453DE620(uint32_t p0) { N::Invoke<0x1484CB72453DE620, void>(p0); } // 1EE7D8DF4425F053 E80F8ABE
  static uint32_t _0x8F23802DAAA26B2(uint32_t p0) { return N::Invoke<0x8F23802DAAA26B2, uint32_t>(p0); } // 7D41E9D2D17C5B2D 1B3521F4
  static uint32_t _0x0B6507CA6AC51E37A(uint32_t p0) { return N::Invoke<0xB6507CA6AC51E37A, uint32_t>(p0); } // 07C313F94746702C 42CFE9C0
  static uint32_t _0x61D9862E3903D16D() { return N::Invoke<0x61D9862E3903D16D, uint32_t>(); } // BC9823AB80A3DCAC 56253356
  static bool NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7) { return N::Invoke<0x47EB1A81EF7F6F5E, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // 212A8D0D2BABFAC2 DF9C38B6
  static bool _0xE24944560D6F19ED(float p0, float p1, float p2, float p3, uint32_t p4) { return N::Invoke<0xE24944560D6F19ED, bool>(p0, p1, p2, p3, p4); } // ACCFB4ACF53551B0 FA037FEB
  static void NEW_LOAD_SCENE_STOP() { N::Invoke<0x5DE91777B624B339, void>(); } // C197616D221FF4A4 7C05B1F6
  static uint32_t IS_NEW_LOAD_SCENE_ACTIVE() { return N::Invoke<0x9DBF5ADC61595373, uint32_t>(); } // A41A05B6CB741B85 AD234B7F
  static bool IS_NEW_LOAD_SCENE_LOADED() { return N::Invoke<0x96D96D592BE19BEA, bool>(); } // 01B8247A7A8B9AD1 3ECD839F
  static bool _0xC9499AE176FB8484() { return N::Invoke<0xC9499AE176FB8484, bool>(); } // 71E7B2E657449AAD EAA51103
  static void START_PLAYER_SWITCH(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xAA0990E3ED8437B7, void>(p0, p1, p2, p3); } // FAA23F2CBA159D67 0829E975
  static void STOP_PLAYER_SWITCH() { N::Invoke<0x83FAAF48B0EAACD, void>(); } // 95C0A5BBDC189AA1 2832C010
  static bool STOP_PLAYER_REMAIN_ARCADE() { return N::Invoke<0xA4ADA92842355D33, bool>(); } // D9D2CFFF49FAB35F 56135ACC
  static uint32_t GET_PLAYER_SWITCH_TYPE() { return N::Invoke<0x4B08838D3C4A40AA, uint32_t>(); } // B3C94A90D9FC9E62 280DC015
  static uint32_t GET_IDEAL_PLAYER_SWITCH_TYPE(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0xC434CEA3FC2359D6, uint32_t>(p0, p1, p2, p3, p4, p5); } // B5D7B26B45720E05 D5A450F1
  static uint32_t GET_PLAYER_SWITCH_STATE() { return N::Invoke<0x34F66A7928F4DB93, uint32_t>(); } // 470555300D10B2A5 39A0E1F2
  static uint32_t GET_PLAYER_SHORT_SWITCH_STATE() { return N::Invoke<0x2621CD022E5AE115, uint32_t>(); } // 20F898A5D9782800 9B7BA38F
  static void _0xA48A247910A6E571(uint32_t p0) { N::Invoke<0xA48A247910A6E571, void>(p0); } // 5F2013F8BC24EE69 F0BD420D
  static uint32_t _0xB8BD521D1F906F0() { return N::Invoke<0xB8BD521D1F906F0, uint32_t>(); } // 78C0D93253149435 02BA7AC2
  static void _0x7B207D72D37EFC3B(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { N::Invoke<0x7B207D72D37EFC3B, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // C208B673CE446B61 47352E14
  static void _0x04B2180FC9D0403E3(uint32_t *p0) { N::Invoke<0x4B2180FC9D0403E3, void>(p0); } // 0FDE9DBFC0A6BC65 279077B0
  static void _0x9821FE0266D686EE() { N::Invoke<0x9821FE0266D686EE, void>(); } // 43D1680C6D19A8E9 55CB21F9
  static void _0xBAA0FE55E638D8C3() { N::Invoke<0xBAA0FE55E638D8C3, void>(); } // 74DE2E8739086740 1084F2F4
  static void _0xD3744FCA4815EF13() { N::Invoke<0xD3744FCA4815EF13, void>(); } // 8E2A065ABDAE6994 5B1E995D
  static void _0xEC81B96DF33239D6() { N::Invoke<0xEC81B96DF33239D6, void>(); } // AD5FDF34B81BFE79 4B4B9A13
  static bool _0x7EA7AE481A42E95B() { return N::Invoke<0x7EA7AE481A42E95B, bool>(); } // DFA80CB25D0A19B3 408F7148
  static uint32_t _0xD1A49DC0C3367AA2() { return N::Invoke<0xD1A49DC0C3367AA2, uint32_t>(); } // D4793DFF3AF2ABCD
  static uint32_t _0x7E69C11FBC31BB7() { return N::Invoke<0x7E69C11FBC31BB7, uint32_t>(); } // BD605B8E0E18B3BB
  static void _0x98CD59A753CE3353(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x98CD59A753CE3353, void>(p0, p1, p2); } // AAB3200ED59016BC FB4D062D
  static void _0x50A980784ED86151(uint32_t p0) { N::Invoke<0x50A980784ED86151, void>(p0); } // D8295AF639FD9CB8 2349373B
  static uint32_t _0x4159BF001E3FDB57() { return N::Invoke<0x4159BF001E3FDB57, uint32_t>(); } // 933BBEEB8C61B5F4 74C16879
  static uint32_t SET_PLAYER_INVERTED_UP() { return N::Invoke<0x38F612E131929D5E, uint32_t>(); } // 08C2D6C52A3104BB 569847E3
  static uint32_t _0xF84FF9E4D5625A38() { return N::Invoke<0xF84FF9E4D5625A38, uint32_t>(); } // 5B48A06DD0E792A5 C7A3D279
  static bool DESTROY_PLAYER_IN_PAUSE_MENU() { return N::Invoke<0x215578C9201B6757, bool>(); } // 5B74EA8CFD5E3E7E 90F64284
  static uint32_t _0x437CD632F20746A6() { return N::Invoke<0x437CD632F20746A6, uint32_t>(); } // 1E9057A74FD73E23
  static float _0x0E120A70D33D04E8F() { return N::Invoke<0xE120A70D33D04E8F, float>(); } // 0C15B0E443B2349D 7154B6FD
  static void _0xF07E710BE9E8FA84(float p0) { N::Invoke<0xF07E710BE9E8FA84, void>(p0); } // A76359FC80B2438E E5612C1A
  static void _0x3F6C995B1DADBAF1(float p0, float p1, float p2, float p3) { N::Invoke<0x3F6C995B1DADBAF1, void>(p0, p1, p2, p3); } // BED8CA5FF5E04113 9CD6A451
  static void _0xC0848C98549523E1() { N::Invoke<0xC0848C98549523E1, void>(); } // 472397322E92A856 4267DA87
  static void _0x627D032C7FD0BB74(bool p0) { N::Invoke<0x627D032C7FD0BB74, void>(p0); } // 40AEFD1A244741F2 9FA4AF99
  static uint32_t _0x833272B9D3BC279E() { return N::Invoke<0x833272B9D3BC279E, uint32_t>(); } // 3F1A106BDA7DD3E
  static void _0xE39FA13E1C637A9B(uint32_t *p0, uint32_t *p1) { N::Invoke<0xE39FA13E1C637A9B, void>(p0, p1); } // 95A7DABDDBB78AE7 9EF0A9CF
  static void _0x707B7EF2E06745C8() { N::Invoke<0x707B7EF2E06745C8, void>(); } // 63EB2B972A218CAC F2CDD6A8
  static bool _0x250FD8B8660C7A40() { return N::Invoke<0x250FD8B8660C7A40, bool>(); } // FB199266061F820A 17B0A1CD
  static void _0xD458EE4B388EE1C8() { N::Invoke<0xD458EE4B388EE1C8, void>(); } // F4A0DADB70F57FA6 3DA7AA5D
  static uint32_t _0x831491EBBA34B785() { return N::Invoke<0x831491EBBA34B785, uint32_t>(); } // 5068F488DDB54DD8 DAB4BAC0
  static void PREFETCH_SRL(uint32_t *p0) { N::Invoke<0x49A88368098E3AF9, void>(p0); } // 3D245789CE12982C 37BE2FBB
  static bool IS_SRL_LOADED() { return N::Invoke<0xD55927A4FADD9827, bool>(); } // D0263801A4C5B0BB 670FA2A6
  static void BEGIN_SRL() { N::Invoke<0x3643AABED08C4088, void>(); } // 9BADDC94EF83B823 24F49427
  static void END_SRL() { N::Invoke<0x9975B5F03D59921, void>(); } // 0A41540E63C9EE17 1977C56A
  static void SET_SRL_TIME(float p0) { N::Invoke<0xDFAE00CBF55AE6B, void>(p0); } // A74A541C6884E7B8 30F8A487
  static void _0xBDC951C5BD3951E7(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xBDC951C5BD3951E7, void>(p0, p1, p2, p3, p4, p5); } // EF39EE20C537E98C 814D0752
  static void _0xF29329109BCC55BA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xF29329109BCC55BA, void>(p0, p1, p2, p3); } // BEB2D9A1D9A8F55A 62F02485
  static void _0xBD0C284DA80A605E(bool p0) { N::Invoke<0xBD0C284DA80A605E, void>(p0); } // 20C6C7E4EB082A7F A6459CAA
  static void _0x82ED31759BCD6119(uint32_t p0) { N::Invoke<0x82ED31759BCD6119, void>(p0); } // F8155A7F03DDFC8E F8F515E4
  static void SET_HD_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xD94E4A9B2B83CDFC, void>(p0, p1, p2, p3); } // B85F26619073E775 80BAA035
  static void CLEAR_HD_AREA() { N::Invoke<0x5559EDE4C3EF42B, void>(); } // CE58B1CFB9290813 7CAC6FA0
  static void _0xD948D88317029FFF() { N::Invoke<0xD948D88317029FFF, void>(); } // B5A4DB34FE89B88A E243B2AF
  static void _0x4523BEBE9D55295D() { N::Invoke<0x4523BEBE9D55295D, void>(); } // CCE26000E9A6FAD7 897A510F
  static bool _0x0265B2A3EBA9AC5FE(uint32_t p0) { return N::Invoke<0x265B2A3EBA9AC5FE, bool>(p0); } // 0BC3144DEB678666 C0E83320
  static void _0x76EBB880B0AD78AD(uint32_t p0) { N::Invoke<0x76EBB880B0AD78AD, void>(p0); } // F086AD9354FAC3A3 1C576388
  static float _0x2EC45570AA762A15() { return N::Invoke<0x2EC45570AA762A15, float>(); } // 3D3D8B3BE5A83D35 3E9C4CBE
}

namespace SCRIPT
{
  static void REQUEST_SCRIPT(const char *p0) { N::Invoke<0x38797C3918FDD596, void>(p0); } // 6EB5F71AA68F2E8E E26B2666
  static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char *p0) { N::Invoke<0xDD83BEFDE8CC91AD, void>(p0); } // C90D2DCACD56184C 6FCB7795
  static bool HAS_SCRIPT_LOADED(const char *p0) { return N::Invoke<0x4C903C3B660A5023, bool>(p0); } // E6CC9F3BA0FB9EF1 5D67F751
  static bool DOES_SCRIPT_EXIST(const char *p0) { return N::Invoke<0x44285C38000518F, bool>(p0); } // FC04745FBE67C19A DEAB87AB
  static void _0x9BDCCBFB569D44D3(uint32_t p0) { N::Invoke<0x9BDCCBFB569D44D3, void>(p0); } // D62A67D26D9653E6 1C68D9DC
  static void _0x369C9F8CD6971E4B(uint32_t p0) { N::Invoke<0x369C9F8CD6971E4B, void>(p0); } // C5BC038960E9DB27 96C26F66
  static bool _0xCF2008EE76BCB924(uint32_t p0) { return N::Invoke<0xCF2008EE76BCB924, bool>(p0); } // 5F0F0C783EB16C04 06674818
  static uint32_t _0xFAD122EC7DC6249F() { return N::Invoke<0xFAD122EC7DC6249F, uint32_t>(); } // F86AA3C56BA31381
  static void TERMINATE_THREAD(uint32_t p0) { N::Invoke<0xA123AC95E71752A2, void>(p0); } // C8B189ED9138BCD4 253FD520
  static bool IS_THREAD_ACTIVE(uint32_t p0) { return N::Invoke<0xB86C2D2B0CB3E42E, bool>(p0); } // 46E9AE36D8FA6417 78D7A5A0
  static uint32_t _0x06AC6E47ABFB4EB1D(uint32_t p0) { return N::Invoke<0x6AC6E47ABFB4EB1D, uint32_t>(p0); } // 05A42BA9FC8DA96B BE7ACD89
  static void _0x94332074A0B773EB() { N::Invoke<0x94332074A0B773EB, void>(); } // DADFADA5A20143A8 BB4E2F66
  static uint32_t _0x455695D60DCAF0EC() { return N::Invoke<0x455695D60DCAF0EC, uint32_t>(); } // 30B4FA1C82DD4B9F 1E28B28F
  static uint32_t GET_ID_OF_THIS_THREAD() { return N::Invoke<0xF682120D0C324317, uint32_t>(); } // C30338E8088E2E21 DE524830
  static void TERMINATE_THIS_THREAD() { N::Invoke<0x883793591E631A3B, void>(); } // 1090044AD1DA76FA 3CD9CBB7
  static uint32_t _0x25531002BCF0D968(uint32_t p0) { return N::Invoke<0x25531002BCF0D968, uint32_t>(p0); } // 2C83A9DA6BFFC4F9 029D3841
  static uint32_t GET_THIS_SCRIPT_NAME() { return N::Invoke<0x3ED5FA3F61EC9E68, uint32_t>(); } // 442E0A7EDE4A738A A40FD5D9
  static uint32_t _0xADB26EA48763F7() { return N::Invoke<0xADB26EA48763F7, uint32_t>(); } // 8A1C8B1738FFE87E 2BEE1F45
  static uint32_t GET_NUMBER_OF_EVENTS(uint32_t p0) { return N::Invoke<0xB301423C53556EA6, uint32_t>(p0); } // 5F92A689A06620AA A3525D60
  static bool GET_EVENT_EXISTS(uint32_t p0, uint32_t p1) { return N::Invoke<0x289D054E2E18C82E, bool>(p0, p1); } // 936E6168A9BCEDB5 A1B447B5
  static uint32_t GET_EVENT_AT_INDEX(uint32_t p0, uint32_t p1) { return N::Invoke<0xAAB64DCC229F922F, uint32_t>(p0, p1); } // D8F66A3A60C62153 B49C1442
  static bool GET_EVENT_DATA(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3) { return N::Invoke<0x6EDD33D6B8546C95, bool>(p0, p1, p2, p3); } // 2902843FCD2B2D79 4280F92F
  static void TRIGGER_SCRIPT_EVENT(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3) { N::Invoke<0x16EC6B18501E56BB, void>(p0, p1, p2, p3); } // 5AE99C571D5BBE5D 54763B35
  static void SHUTDOWN_LOADING_SCREEN() { N::Invoke<0x49BF644F14C1491D, void>(); } // 078EBE9809CCD637 A2826D17
  static void SET_NO_LOADING_SCREEN(bool p0) { N::Invoke<0x8311E913E07031CD, void>(p0); } // 5262CC1995D07E09 C8055034
  static uint32_t _0xBDB6BD580ED1F954() { return N::Invoke<0xBDB6BD580ED1F954, uint32_t>(); } // 18C1270EA7F199BC
  static void _0xF4A688A05D995730() { N::Invoke<0xF4A688A05D995730, void>(); } // B1577667C3708F9B B03BCCDF
  static uint32_t _0x33B128D2BF12A04C() { return N::Invoke<0x33B128D2BF12A04C, uint32_t>(); } // 836B62713E0534CA
  static uint32_t _0x192BE909816B5AB1() { return N::Invoke<0x192BE909816B5AB1, uint32_t>(); } // 760910B49D2B98EA
  static uint32_t _0xD2186872F67E27A7() { return N::Invoke<0xD2186872F67E27A7, uint32_t>(); } // 75B18E49607874C7
  static uint32_t _0x83182CF137E50012() { return N::Invoke<0x83182CF137E50012, uint32_t>(); } // 107E5CC7CA942BC1
  static uint32_t _0xD25DA514C69D23B5() { return N::Invoke<0xD25DA514C69D23B5, uint32_t>(); } // 9D5A25BADB742ACD
  static uint32_t _0xA2F79414CD5A0422() { return N::Invoke<0xA2F79414CD5A0422, uint32_t>(); } // DC2BACD920D0A0DD
  static uint32_t _0xE604CEC852735D70() { return N::Invoke<0xE604CEC852735D70, uint32_t>(); } // F6F1EBBC4E1D5E6
  static uint32_t _0x33624F881360C3F3() { return N::Invoke<0x33624F881360C3F3, uint32_t>(); } // 22E21FBCFC88C149
  static uint32_t _0x6EA8146CF4749EB4() { return N::Invoke<0x6EA8146CF4749EB4, uint32_t>(); } // 829CD22E043A2577
}

namespace UI
{
  static void _0x18BCFA6B2DA7EB4E(uint32_t *p0) { N::Invoke<0x18BCFA6B2DA7EB4E, void>(p0); } // ABA17D7CE615ADBF CB7C8994
  static void _0x395CE507EF66CF4B(uint32_t p0) { N::Invoke<0x395CE507EF66CF4B, void>(p0); } // BD12F8228410D9B4 903F5EE4
  static void _0x5561EBF2C1FBF8B6() { N::Invoke<0x5561EBF2C1FBF8B6, void>(); } // 10D373323E5B9C0D 94119534
  static void _0xA707C7A7B797DA6B() { N::Invoke<0xA707C7A7B797DA6B, void>(); } // C65AB383CD91DF98 71077FBD
  static bool _0xEFB40E8240A711CE() { return N::Invoke<0xEFB40E8240A711CE, bool>(); } // D422FCC5F239A915 B8B3A5D0
  static uint32_t _0xB59E653B1686E99E() { return N::Invoke<0xB59E653B1686E99E, uint32_t>(); } // B2A592B04648A9CB
  static uint32_t _0x5E4A77E0494BE1EB() { return N::Invoke<0x5E4A77E0494BE1EB, uint32_t>(); } // 9245E81072704B8A
  static uint32_t _0xD58155239E9DC61A() { return N::Invoke<0xD58155239E9DC61A, uint32_t>(); } // AAE7CE1D63167423
  static uint32_t _0xA7813A277B2BC757() { return N::Invoke<0xA7813A277B2BC757, uint32_t>(); } // 8DB8CFFD58B62552
  static uint32_t _0x883F126C8762AB62() { return N::Invoke<0x883F126C8762AB62, uint32_t>(); } // 98215325A695E78A
  static uint32_t _0x736C52B16C58C1B8() { return N::Invoke<0x736C52B16C58C1B8, uint32_t>(); } // 3D9ACB1EB139E702
  static uint32_t _0xFB098710939D3770() { return N::Invoke<0xFB098710939D3770, uint32_t>(); } // 632B2940C67F4EA9
  static void _0xDE31817B699BCA3(bool p0) { N::Invoke<0xDE31817B699BCA3, void>(p0); } // 6F1554B0CC2089FA A7C8594B
  static void _0x1C15F329053D4B85(float p0) { N::Invoke<0x1C15F329053D4B85, void>(p0); } // 55598D21339CB998 1DA7E41A
  static void _0x82035095C3F201ED() { N::Invoke<0x82035095C3F201ED, void>(); } // 25F87B30C382FCA7 1E63088A
  static void _0xCDAB94FDF12511FC() { N::Invoke<0xCDAB94FDF12511FC, void>(); } // A8FDB297A8D25FBA 5205C6F5
  static void _0x183A54D9B60DAC36(uint32_t p0) { N::Invoke<0x183A54D9B60DAC36, void>(p0); } // BE4390CB40B3E627 ECA8ACB9
  static void _0x6FB9103CC3E6B3DB() { N::Invoke<0x6FB9103CC3E6B3DB, void>(); } // A13C11E1B5C06BFC 520FCB6D
  static void _0xEAD6B0A09A0BB7C5() { N::Invoke<0xEAD6B0A09A0BB7C5, void>(); } // 583049884A2EEE3C C8BAB2F2
  static void _0x3CD3516D9FBE0424() { N::Invoke<0x3CD3516D9FBE0424, void>(); } // FDB423997FA30340 4D0449C6
  static void _0x5DC2C7ED9A68FCEF() { N::Invoke<0x5DC2C7ED9A68FCEF, void>(); } // E1CD1E48E025E661 D3F40140
  static uint32_t _0xD41FA6DD673E6AC0() { return N::Invoke<0xD41FA6DD673E6AC0, uint32_t>(); } // A9CBFD40B3FA3010 C5223796
  static void _0x4C92FF4485E03D2A() { N::Invoke<0x4C92FF4485E03D2A, void>(); } // D4438C0564490E63 709B4BCB
  static void _0x5D65EFFF2FFE0608() { N::Invoke<0x5D65EFFF2FFE0608, void>(); } // B695E2CD0A2DA9EE 4A4A40A4
  static uint32_t _0xD2765452333C7D51() { return N::Invoke<0xD2765452333C7D51, uint32_t>(); } // 82352748437638CA 294405D4
  static void _0xB01BFB8612CEA579() { N::Invoke<0xB01BFB8612CEA579, void>(); } // 56C8B608CFD49854 F881AB87
  static void _0x4F68572E44F0E9CF() { N::Invoke<0x4F68572E44F0E9CF, void>(); } // ADED7F5748ACAFE6 1D6859CA
  static uint32_t _0xE76E1348DFF385BD() { return N::Invoke<0xE76E1348DFF385BD, uint32_t>(); } // 92F0DA1E27DB96DC
  static void _0x19702D001410D1BE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x19702D001410D1BE, void>(p0, p1, p2, p3); } // 17430B918701C342 CF14D7F2
  static void _0xC980ADD93BC3E78F(uint32_t p0) { N::Invoke<0xC980ADD93BC3E78F, void>(p0); } // 17AD8C9706BDD88A 24A97AF8
  static void _0xED5105D2131B11AC(bool p0) { N::Invoke<0xED5105D2131B11AC, void>(p0); } // 4A0C7C9BB10ABB36 44018EDB
  static void _0x145409952EA5A7A2() { N::Invoke<0x145409952EA5A7A2, void>(); } // FDD85225B2DEA55E A4524B23
  static void _0x6E4578705BE0AFC6() { N::Invoke<0x6E4578705BE0AFC6, void>(); } // FDEC055AB549E328 AFA1148B
  static void _0xD829FDA59E30C7FC() { N::Invoke<0xD829FDA59E30C7FC, void>(); } // 80FE4F3AB4E1B62A 3CD4307C
  static uint32_t _0xDC5620906D5D9A61() { return N::Invoke<0xDC5620906D5D9A61, uint32_t>(); } // BAE4F9B97CD43B30
  static uint32_t _0x44F609A2056E59D2() { return N::Invoke<0x44F609A2056E59D2, uint32_t>(); } // 317EBA71D7543F52
  static void _0x82FD00B995993186(const char *p0) { N::Invoke<0x82FD00B995993186, void>(p0); } // 202709F4C58A0424 574EE85C
  static uint32_t _0x9E9520CAFF9A8532(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0x9E9520CAFF9A8532, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 2B7E9A4EAAA93C89 ED130FA1
  static uint32_t _0x54BCC5519168683(uint32_t *p0, uint32_t *p1, bool p2, uint32_t p3, uint32_t *p4, uint32_t *p5) { return N::Invoke<0x54BCC5519168683, uint32_t>(p0, p1, p2, p3, p4, p5); } // 1CCD9A37359072CF E7E3C98B
  static uint32_t _0x7C35FF67A95E5FFB() { return N::Invoke<0x7C35FF67A95E5FFB, uint32_t>(); } // C6F580E4C94926AC
  static uint32_t _0x7DF7D8CEBE0F2926(uint32_t *p0, uint32_t *p1, bool p2, uint32_t p3, uint32_t *p4, uint32_t *p5, float p6) { return N::Invoke<0x7DF7D8CEBE0F2926, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 1E6611149DB3DB6B 0EB382B7
  static uint32_t _0x22D0B3D34BF20D61(uint32_t *p0, uint32_t *p1, bool p2, uint32_t p3, uint32_t *p4, uint32_t *p5, float p6, uint32_t *p7) { return N::Invoke<0x22D0B3D34BF20D61, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 5CBF7BADE20DB93E 3E807FE3
  static uint32_t _0x2982461319CBCD94(uint32_t *p0, uint32_t *p1, bool p2, uint32_t p3, uint32_t *p4, uint32_t *p5, float p6, uint32_t *p7, uint32_t p8) { return N::Invoke<0x2982461319CBCD94, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 531B84E7DA981FB6 DEB491C8
  static uint32_t _0x81489E3284B071C0(bool p0, bool p1) { return N::Invoke<0x81489E3284B071C0, uint32_t>(p0, p1); } // 2ED7843F8F801023 08F7AF78
  static uint32_t _0x893E37DFDAAA6F9(bool p0, bool p1) { return N::Invoke<0x893E37DFDAAA6F9, uint32_t>(p0, p1); } // 44FA03975424A0EE 57B8D0D4
  static uint32_t _0xA3456638E48FDE3B(bool p0, bool p1) { return N::Invoke<0xA3456638E48FDE3B, uint32_t>(p0, p1); } // 378E809BF61EC840 02BCAF9B
  static uint32_t _0xB2EF298704F6DA8D(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t *p4) { return N::Invoke<0xB2EF298704F6DA8D, uint32_t>(p0, p1, p2, p3, p4); } // AA295B6F28BD587D 02DED2B8
  static uint32_t _0x92CF09F49B3277D8(bool p0, bool p1, uint32_t *p2, uint32_t p3, bool p4, bool p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return N::Invoke<0x92CF09F49B3277D8, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 97C9E4E7024A8F2C A9CCEF66
  static uint32_t _0x7F8D4EA046A08C62(bool p0, bool p1, uint32_t *p2, uint32_t p3, bool p4, bool p5, uint32_t p6, uint32_t *p7, uint32_t p8, uint32_t p9, uint32_t p10) { return N::Invoke<0x7F8D4EA046A08C62, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 137BC35589E34E1E 88B9B909
  static uint32_t _0x400DD45C8B29B277(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x400DD45C8B29B277, uint32_t>(p0, p1, p2); } // 33EE12743CCD6343 E05E7052
  static uint32_t _0x7A9FD59A22A1F4CD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x7A9FD59A22A1F4CD, uint32_t>(p0, p1, p2, p3); } // C8F3AAF93D0600BF 4FA43BA4
  static uint32_t _0x49E0CDA63068535D(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x49E0CDA63068535D, uint32_t>(p0, p1, p2, p3, p4, p5); } // 7AE0589093A2E088 8C90D22F
  static uint32_t _0xFB892ED59D0C8A8C(bool p0, bool p1) { return N::Invoke<0xFB892ED59D0C8A8C, uint32_t>(p0, p1); } // F020C96915705B3A 8E319AB8
  static uint32_t _0xC1A40C8C18533209() { return N::Invoke<0xC1A40C8C18533209, uint32_t>(); } // 8EFCCF6EC66D85E4
  static uint32_t _0x1C84E07E49A72135(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, uint32_t *p4, uint32_t p5) { return N::Invoke<0x1C84E07E49A72135, uint32_t>(p0, p1, p2, p3, p4, p5); } // B6871B0555B02996 5E93FBFA
  static uint32_t _0xA13C1E679402533A() { return N::Invoke<0xA13C1E679402533A, uint32_t>(); } // D202B92CBF1D816F
  static uint32_t _0xE775AB8A066F8914() { return N::Invoke<0xE775AB8A066F8914, uint32_t>(); } // DD6CB2CCE7C2735C
  static void _0x328FE98BE3FE17FC(uint32_t *p0) { N::Invoke<0x328FE98BE3FE17FC, void>(p0); } // B87A37EEB7FAA67D F42C43C7
  static void _0x6719DEAA365F81B2(uint32_t p0, bool p1) { N::Invoke<0x6719DEAA365F81B2, void>(p0, p1); } // 9D77056A530643F6 38F82261
  static void _0x228B04C8B6530A66(uint32_t *p0) { N::Invoke<0x228B04C8B6530A66, void>(p0); } // 853648FD1063A213 DD524A11
  static bool _0x3EDC7EA7BB2A109E() { return N::Invoke<0x3EDC7EA7BB2A109E, bool>(); } // 8A9BA1AB3E237613 672EFB45
  static void _SET_TEXT_ENTRY(const char *p0) { N::Invoke<0x55B01783B33A78F6, void>(p0); } // 25FBB336DF1804CB 3E35563E
  static void _DRAW_TEXT(float x, float y) { N::Invoke<0x268B3979E044050D, void>(x,y); } // CD015E5BB0D96A57 6F8350CE
  static void _0xD43D59AFE59F450F(uint32_t *p0) { N::Invoke<0xD43D59AFE59F450F, void>(p0); } // 54CE8AC98E120CAB 51E7A037
  static float _0x9B0FAD4ADFA5E05C(bool p0) { return N::Invoke<0x9B0FAD4ADFA5E05C, float>(p0); } // 85F061DA64ED2F67 D12A643A
  static void _0xC323F622DE9BE0FE(const char *p0) { N::Invoke<0xC323F622DE9BE0FE, void>(p0); } // 521FB041D93DD0E4 94B82066
  static uint32_t _0xDF5D8D7B0F3B38AF(float p0, float p1) { return N::Invoke<0xDF5D8D7B0F3B38AF, uint32_t>(p0, p1); } // 9040DFB09BE75706 AA318785
  static void _0x1ACC22C365D06AAE(uint32_t *p0) { N::Invoke<0x1ACC22C365D06AAE, void>(p0); } // 8509B634FBE7DA11 B245FC10
  static void _0x9F84D1B39B1E5B59(uint32_t p0, bool p1, bool p2, uint32_t p3) { N::Invoke<0x9F84D1B39B1E5B59, void>(p0, p1, p2, p3); } // 238FFE5C7B0498A6 B59B530D
  static void _0x074C587863BEFBDD0(uint32_t *p0) { N::Invoke<0x74C587863BEFBDD0, void>(p0); } // 0A24DA3A41B718F5 00E20F2D
  static bool _0x5D488553935013A9(uint32_t p0) { return N::Invoke<0x5D488553935013A9, bool>(p0); } // 10BDDBFC529428DD F63A13EC
  static void _0x900AC0BD5F16D935(uint32_t *p0) { N::Invoke<0x900AC0BD5F16D935, void>(p0); } // F9113A30DE5C6670 F4C211F6
  static void _0x3BF044F0B5B79140(uint32_t p0) { N::Invoke<0x3BF044F0B5B79140, void>(p0); } // BC38B49BCB83BC9B E8E59820
  static void _0xD5A675030FF01A94(uint32_t *p0) { N::Invoke<0xD5A675030FF01A94, void>(p0); } // 23D69E0465570028 0E103475
  static void _0x8B05F7688AA9FA38(bool p0) { N::Invoke<0x8B05F7688AA9FA38, void>(p0); } // CFDBDF5AE59BA0F4 2944A6C5
  static void _0x89BCDA7A12663C4(uint32_t *p0) { N::Invoke<0x89BCDA7A12663C4, void>(p0); } // E124FA80A759019C 550665AE
  static void _0x4F4DD0BEF0CEA6C1() { N::Invoke<0x4F4DD0BEF0CEA6C1, void>(); } // FCC75460ABA29378 67785AF2
  static void _0x646050BAB8B37326(uint32_t *p0) { N::Invoke<0x646050BAB8B37326, void>(p0); } // 8F9EE5687F8EECCD BF855650
  static void _0x9C54F77A60B586A5(uint32_t p0) { N::Invoke<0x9C54F77A60B586A5, void>(p0); } // A86911979638106F 6E7FDA1C
  static void ADD_TEXT_COMPONENT_INTEGER(uint32_t p0) { N::Invoke<0x844339A27F0F1508, void>(p0); } // 03B504CF259931BC FE272A57
  static void ADD_TEXT_COMPONENT_FLOAT(float p0, uint32_t p1) { N::Invoke<0x10568BB0829CD13A, void>(p0, p1); } // E7DCB5B874BCD96E 24D78013
  static void _0x923B18EB34FC2117(uint32_t *p0) { N::Invoke<0x923B18EB34FC2117, void>(p0); } // C63CD5D2920ACBE7 DCE05406
  static void _0x64364D07891B307F(uint32_t p0) { N::Invoke<0x64364D07891B307F, void>(p0); } // 17299B63C7683A2B 150E03B6
  static void _0x636705FA7EAFAC3C(uint32_t p0) { N::Invoke<0x636705FA7EAFAC3C, void>(p0); } // 80EAD8E2E1D5D52E 5DE98F0A
  static void _ADD_TEXT_COMPONENT_STRING(const char *p0) { N::Invoke<0xD1F22DD7F7363AB6, void>(p0); } // 6C188BE134E074AA 27A244D8
  static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(uint32_t p0, uint32_t p1) { N::Invoke<0x5D89BC4A497AE832, void>(p0, p1); } // 1115F16B8AB9E8BF 135B3CD0
  static void _0x096A7C8F7793B505A(uint32_t p0, uint32_t p1) { N::Invoke<0x96A7C8F7793B505A, void>(p0, p1); } // 0E4C749FF9DE9CC4 12929BDF
  static void _0xB4E4F8C9F997D80D(uint32_t *p0, uint32_t p1) { N::Invoke<0xB4E4F8C9F997D80D, void>(p0, p1); } // 761B77454205A61D 65E1D404
  static void _0x1201038CD82B87B1(uint32_t *p0) { N::Invoke<0x1201038CD82B87B1, void>(p0); } // 94CF4AC034C9C986 C736999E
  static void _0xA61713D07D196CBB(uint32_t *p0) { N::Invoke<0xA61713D07D196CBB, void>(p0); } // 5F68520888E69014 0829A799
  static void _0xF51CF48922F85ED5(uint32_t p0) { N::Invoke<0xF51CF48922F85ED5, void>(p0); } // 39BBF623FC803EAC 6F1A1901
  static uint32_t _0x46BB6E4FA2EE3230(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x46BB6E4FA2EE3230, uint32_t>(p0, p1, p2); } // 169BD9382084C8C0 34A396EE
  static uint32_t _0xC7702C7B197D175D(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xC7702C7B197D175D, uint32_t>(p0, p1, p2, p3); } // B2798643312205C5 0183A66C
  static uint32_t _0x96C58477F1C53A5F(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x96C58477F1C53A5F, uint32_t>(p0, p1, p2); } // CE94AEBA5D82908A FA6373BB
  static uint32_t _0xB0EEA0615087D74B(uint32_t *p0) { return N::Invoke<0xB0EEA0615087D74B, uint32_t>(p0); } // 7B5280EBA9840C72 95C4B5AD
  static void CLEAR_PRINTS() { N::Invoke<0x3DF5706BBD8F5B5B, void>(); } // CC33FA791322B9D9 216CB1C5
  static void CLEAR_BRIEF() { N::Invoke<0x27A59FE147B9A5B1, void>(); } // 9D292F73ADBD9313 9F75A929
  static void CLEAR_ALL_HELP_MESSAGES() { N::Invoke<0x5B981062CA8FDAF5, void>(); } // 6178F68A87A4D3A0 9E5D9198
  static void CLEAR_THIS_PRINT(uint32_t *p0) { N::Invoke<0xAD91AFD429036CAB, void>(p0); } // CF708001E1E536DD 06878327
  static void CLEAR_SMALL_PRINTS() { N::Invoke<0xFA93C1D3FBECB64C, void>(); } // 2CEA2839313C09AC A869A238
  static bool DOES_TEXT_BLOCK_EXIST(uint32_t *p0) { return N::Invoke<0x58D5A4D3355119FE, bool>(p0); } // 1C7302E725259789 96F74838
  static void REQUEST_ADDITIONAL_TEXT(uint32_t *p0, uint32_t p1) { N::Invoke<0x481B0AD01AC057F7, void>(p0, p1); } // 71A78003C8E71424 9FA9175B
  static void _0x49A00D0E4A3DA61(uint32_t *p0, uint32_t p1) { N::Invoke<0x49A00D0E4A3DA61, void>(p0, p1); } // 6009F9F1AE90D8A6 F4D27EBE
  static bool HAS_ADDITIONAL_TEXT_LOADED(uint32_t p0) { return N::Invoke<0x6C741637F73EA9EC, bool>(p0); } // 02245FE4BED318B8 B0E56045
  static void CLEAR_ADDITIONAL_TEXT(uint32_t p0, bool p1) { N::Invoke<0x474B54D6F301DDF, void>(p0, p1); } // 2A179DF17CCF04CD 518141E0
  static bool IS_STREAMING_ADDITIONAL_TEXT(uint32_t p0) { return N::Invoke<0x41BC53892C2AAF91, bool>(p0); } // 8B6817B71B85EBF0 F079E4EB
  static bool HAS_THIS_ADDITIONAL_TEXT_LOADED(uint32_t *p0, uint32_t p1) { return N::Invoke<0xF19EAF66744B8113, bool>(p0, p1); } // ADBF060E2B30C5BC 80A52040
  static bool IS_MESSAGE_BEING_DISPLAYED() { return N::Invoke<0x44057438DAE1BD45, bool>(); } // 7984C03AA5CC2F41 6A77FE8D
  static bool DOES_TEXT_LABEL_EXIST(uint32_t *p0) { return N::Invoke<0xD177A95825B53731, bool>(p0); } // AC09CA973C564252 6ECAE560
  static uint32_t GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(uint32_t *p0) { return N::Invoke<0x15618931CEED653C, uint32_t>(p0); } // 801BD273D3A23F74 A4CA7BE5
  static uint32_t GET_LENGTH_OF_LITERAL_STRING(uint32_t *p0) { return N::Invoke<0x23955AB7E3D629F7, uint32_t>(p0); } // F030907CCBB8A9FD 99379D55
  static uint32_t _0xADEF3A7482FE658C(uint32_t *p0) { return N::Invoke<0xADEF3A7482FE658C, uint32_t>(p0); } // 43E4111189E54F0E 7DBC0764
  static uint32_t GET_STREET_NAME_FROM_HASH_KEY(uint32_t p0) { return N::Invoke<0x7E119C8E89A4021, uint32_t>(p0); } // D0EF8A959B8A4CB9 1E8E310C
  static bool IS_HUD_PREFERENCE_SWITCHED_ON() { return N::Invoke<0x974C1CCCC7E4638, bool>(); } // 1930DFA731813EC4 C3BC1B4F
  static bool IS_RADAR_PREFERENCE_SWITCHED_ON() { return N::Invoke<0xBFFACB91870B158B, bool>(); } // 9EB6522EA68F22FE 14AEAA28
  static bool IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return N::Invoke<0x45C61809C43FF0B3, bool>(); } // AD6DACA4BA53E0A4 63BA19F5
  static void DISPLAY_HUD(bool p0) { N::Invoke<0x330ABD0F05E764BB, void>(p0); } // A6294919E56FF02A D10E4E31
  static void _0xC6F233EDA17699E6() { N::Invoke<0xC6F233EDA17699E6, void>(); } // 7669F9E39DC17063 C380AC85
  static void _0x2BB4B0E9A252D47D() { N::Invoke<0x2BB4B0E9A252D47D, void>(); } // 402F9ED62087E898 C47AB1B0
  static void DISPLAY_RADAR(bool p0) { N::Invoke<0x255259988FBEFACC, void>(p0); } // A0EBB943C300E693 52816BD4
  static uint32_t IS_HUD_HIDDEN() { return N::Invoke<0x5A55AE4A2A300EDF, uint32_t>(); } // A86478C6958735C5 40BADA1D
  static uint32_t IS_RADAR_HIDDEN() { return N::Invoke<0x25C455B54D545ED8, uint32_t>(); } // 157F93B036700462 1AB3B954
  static uint32_t _0x43A8F2054E532005() { return N::Invoke<0x43A8F2054E532005, uint32_t>(); } // AF754F20EB5CD51A
  static void SET_BLIP_ROUTE(uint32_t p0, bool p1) { N::Invoke<0x43F7D508C655CBA3, void>(p0, p1); } // 4F7D8A9BFB0B43E9 3E160C90
  static void SET_BLIP_ROUTE_COLOUR(uint32_t p0, uint32_t p1) { N::Invoke<0xCCCD2A249D585AF2, void>(p0, p1); } // 837155CD2F63DA09 DDE7C65C
  static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(bool p0) { N::Invoke<0xBE8CEC04E54B5E4A, void>(p0); } // 60296AF4BA14ABC5 B58B25BD
  static void _0xE7BF499D7E13D331(bool p0) { N::Invoke<0xE7BF499D7E13D331, void>(p0); } // 57D760D55F54E071 9854485F
  static void RESPONDING_AS_TEMP(float p0) { N::Invoke<0xF4FE3FEBD475D819, void>(p0); } // BD12C5EEE184C337 DCA3F423
  static void SET_RADAR_ZOOM(uint32_t p0) { N::Invoke<0xCB213D9A785B441C, void>(p0); } // 096EF57A0C999BBA 2A50D1A6
  static void _0xB1676EBA656FC712(uint32_t p0, float p1) { N::Invoke<0xB1676EBA656FC712, void>(p0, p1); } // F98E4B3E56AFC7B1 25EC28C0
  static void _0x6C79836FB9930A7B(float p0) { N::Invoke<0x6C79836FB9930A7B, void>(p0); } // CB7CC0D58405AD41 09CF1CE5
  static void _0xB689139A82C20C0B() { N::Invoke<0xB689139A82C20C0B, void>(); } // D2049635DEB9C375 E8D3A910
  static void GET_HUD_COLOUR(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { N::Invoke<0x761F331974F836D5, void>(p0, p1, p2, p3, p4); } // 7C9C91AB74A0360F 63F66A0B
  static void _0x361C6B9BE8C5AC93(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x361C6B9BE8C5AC93, void>(p0, p1, p2, p3); } // D68A5FF8A3A89874 0E41E45C
  static void _0x99D1B978927DD031(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x99D1B978927DD031, void>(p0, p1, p2, p3); } // 16A304E6CB2BFAB9 6BE3ACA8
  static void _0x6F7F7711FCFF2CB7(uint32_t p0, uint32_t p1) { N::Invoke<0x6F7F7711FCFF2CB7, void>(p0, p1); } // 1CCC708F0F850613 3B216749
  static void _0x9AFC102D24B14B80(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x9AFC102D24B14B80, void>(p0, p1, p2, p3, p4); } // F314CF4F0211894E F6E7E92B
  static void FLASH_ABILITY_BAR(uint32_t p0) { N::Invoke<0xA364DC6B934133C5, void>(p0); } // 02CFBA0C9E9275CE 3648960D
  static void SET_ABILITY_BAR_VALUE(float p0, float p1) { N::Invoke<0xE6186D687467003E, void>(p0, p1); } // 9969599CCFF5D85E 24E53FD8
  static void FLASH_WANTED_DISPLAY(bool p0) { N::Invoke<0x3EB8E92373AECBC0, void>(p0); } // A18AFB39081B6A1F 629F866B
  static uint32_t _0x69A71E9012E7645E() { return N::Invoke<0x69A71E9012E7645E, uint32_t>(); } // BA8D65C1C65702E5
  static float _0xD7F1FEE5545495C5(float p0, int p1) { return N::Invoke<0xD7F1FEE5545495C5, float>(p0, p1); } // DB88A37483346780 3330175B
  static void SET_TEXT_SCALE(float p0, float p1) { N::Invoke<0x8F290D3FB4225BC6, void>(p0, p1); } // 07C837F9A01C34C9 B6E15B23
  static void SET_TEXT_COLOUR(int p0, int p1, int p2, int p3) { N::Invoke<0xAF24EA89F4EF8594, void>(p0, p1, p2, p3); } // BE6B23FFA53FB442 E54DD2C8
  static void SET_TEXT_CENTRE(bool p0) { N::Invoke<0x5FEA64228C897E30, void>(p0); } // C02F4DBFB51D988B E26D39A1
  static void SET_TEXT_RIGHT_JUSTIFY(bool p0) { N::Invoke<0xF8EC5D9294FA5C74, void>(p0); } // 6B3C4650BC8BEE47 45B60520
  static void _0x5E9A172D8EF0C9ED(bool p0) { N::Invoke<0x5E9A172D8EF0C9ED, void>(p0); } // 4E096588B13FFECA 68CDFA60
  static void SET_TEXT_WRAP(float p0, float p1) { N::Invoke<0xD49409263C7DA1DD, void>(p0, p1); } // 63145D9C883A1A70 6F60AB54
  static void SET_TEXT_LEADING(bool p0) { N::Invoke<0xBB04D9A85B7BE7A2, void>(p0); } // A50ABC31E3CDFAFF 98CE21D4
  static void SET_TEXT_PROPORTIONAL(uint32_t p0) { N::Invoke<0x490F3793DD1437E4, void>(p0); } // 038C1F517D7FDCF8 F49D8A08
  static void SET_TEXT_FONT(int p0) { N::Invoke<0x8DD7836CF491E098, void>(p0); } // 66E0276CC5F6B9DA 80BC530D
  static void SET_TEXT_DROP_SHADOW() { N::Invoke<0x1DA0BC03A951E360, void>(); } // 1CA3E9EAC9D93E5E E2A11511
  static void SET_TEXT_DROPSHADOW(int p0, int p1, int p2, int p3, int p4) { N::Invoke<0x74F2ECA031310618, void>(p0, p1, p2, p3, p4); } // 465C84BC39F1C351 E6587517
  static void SET_TEXT_OUTLINE() { N::Invoke<0x76EEC181CF2707D6, void>(); } // 2513DFB0FB8400FE C753412F
  static void SET_TEXT_EDGE(int p0, int p1, int p2, int p3, int p4) { N::Invoke<0xC7BC69AA9DAF5D69, void>(p0, p1, p2, p3, p4); } // 441603240D202FA6 3F1A5DAB
  static void SET_TEXT_RENDER_ID(uint32_t p0) { N::Invoke<0x24A6BECBE7FB7072, void>(p0); } // 5F15302936E07111 C5C3B7F3
  static uint32_t GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return N::Invoke<0xE4DC0BC078803F6C, uint32_t>(); } // 52F0982D7FD156B6 8188935F
  static bool REGISTER_NAMED_RENDERTARGET(uint32_t *p0, bool p1) { return N::Invoke<0xE3FDC10D25BBBCBC, bool>(p0, p1); } // 57D9C12635E25CE3 FAE5D6F0
  static bool IS_NAMED_RENDERTARGET_REGISTERED(uint32_t *p0) { return N::Invoke<0xBB59C64F638475F4, bool>(p0); } // 78DCDC15C9F116B4 284057F5
  static bool RELEASE_NAMED_RENDERTARGET(uint32_t *p0) { return N::Invoke<0x9BDB594F5771D83A, bool>(p0); } // E9F6FFE837354DD4 D3F6C892
  static void LINK_NAMED_RENDERTARGET(uint32_t p0) { N::Invoke<0xE40E107E34572484, void>(p0); } // F6C09E276AEB3F2D 6844C4B9
  static uint32_t GET_NAMED_RENDERTARGET_RENDER_ID(uint32_t *p0) { return N::Invoke<0x396E111E5411D0EE, uint32_t>(p0); } // 1A6478B61C6BDC3B F9D7A401
  static bool IS_NAMED_RENDERTARGET_LINKED(uint32_t p0) { return N::Invoke<0x29AAA721DD70EB9, bool>(p0); } // 113750538FA31298 8B52601F
  static void CLEAR_HELP(bool p0) { N::Invoke<0x4A4C1A1BC79EFE8F, void>(p0); } // 8DFCED7A656F8802 E6D85741
  static bool IS_HELP_MESSAGE_ON_SCREEN() { return N::Invoke<0xA325E5426CD8AC07, bool>(); } // DAD37F45428801AE 4B3C9CA9
  static bool _0xC08EE9D523D26E14() { return N::Invoke<0xC08EE9D523D26E14, bool>(); } // 214CD562A939246A 812CBE0E
  static bool IS_HELP_MESSAGE_BEING_DISPLAYED() { return N::Invoke<0xBB51CB7A4D14453D, bool>(); } // 4D79439A6B55AC67 A65F262A
  static bool IS_HELP_MESSAGE_FADING_OUT() { return N::Invoke<0x4325F9ACF9C85AD9, bool>(); } // 327EDEEEAC55C369 3E50AE92
  static uint32_t _0xADC39FDF03F9D8CA() { return N::Invoke<0xADC39FDF03F9D8CA, uint32_t>(); } // 4A9923385BDB9DAD 87871CE0
  static uint32_t _GET_BLIP_INFO_ID_ITERATOR() { return N::Invoke<0x138F9DA1F3442BA3, uint32_t>(); } // 186E5D252FA50E7D B9827942
  static uint32_t GET_NUMBER_OF_ACTIVE_BLIPS() { return N::Invoke<0x4271E34D4C5FBF5D, uint32_t>(); } // 9A3FF3DE163034E8 144020FA
  static uint32_t GET_NEXT_BLIP_INFO_ID(uint32_t p0) { return N::Invoke<0xEB6533503AE8CA5E, uint32_t>(p0); } // 14F96AA50D6FBEA7 9356E92F
  static uint32_t GET_FIRST_BLIP_INFO_ID(uint32_t p0) { return N::Invoke<0x3AF3E336702C148C, uint32_t>(p0); } // 1BEDE233E6CD2A1F 64C0273D
  static Vector3 GET_BLIP_INFO_ID_COORD(uint32_t p0) { return N::Invoke<0xC4C0B7F25966C4C, Vector3>(p0); } // FA7C7F0AADF25D09 B7374A66
  static uint32_t GET_BLIP_INFO_ID_DISPLAY(uint32_t p0) { return N::Invoke<0xD1708366330943C, uint32_t>(p0); } // 1E314167F701DC3B D0FC19F4
  static uint32_t GET_BLIP_INFO_ID_TYPE(uint32_t p0) { return N::Invoke<0xF0F6309B76A8474C, uint32_t>(p0); } // BE9B0959FFD0779B 501D7B4E
  static uint32_t GET_BLIP_INFO_ID_ENTITY_INDEX(uint32_t p0) { return N::Invoke<0x7BBE8D79E8CB52E9, uint32_t>(p0); } // 4BA4E2553AFEDC2C A068C40B
  static uint32_t GET_BLIP_INFO_ID_PICKUP_INDEX(uint32_t p0) { return N::Invoke<0x5EFE230EE2438209, uint32_t>(p0); } // 9B6786E4C03DD382 86913D37
  static uint32_t GET_BLIP_FROM_ENTITY(uint32_t p0) { return N::Invoke<0x2194B07471B5E552, uint32_t>(p0); } // BC8DBDCA2436F7E8 005A2A47
  static uint32_t ADD_BLIP_FOR_RADIUS(float p0, float p1, float p2, float p3) { return N::Invoke<0x8C16986DEC165499, uint32_t>(p0, p1, p2, p3); } // 46818D79B1F7499A 4626756C
  static uint32_t ADD_BLIP_FOR_ENTITY(uint32_t p0) { return N::Invoke<0xB6F075D13B917FBE, uint32_t>(p0); } // 5CDE92C702A8FCE7 30822554
  static uint32_t ADD_BLIP_FOR_PICKUP(uint32_t p0) { return N::Invoke<0x200CF8FFC0E56B0C, uint32_t>(p0); } // BE339365C863BD36 16693C3A
  static uint32_t ADD_BLIP_FOR_COORD(float p0, float p1, float p2) { return N::Invoke<0x7BFA7BEBF46363DE, uint32_t>(p0, p1, p2); } // 5A039BB0BCA604B6 C6F43D0E
  static void _0x92FB7F5843708CE6(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x92FB7F5843708CE6, void>(p0, p1, p2, p3, p4); } // 72DD432F3CDFC0EE BF25E7B2
  static void _0x57BDC7F38FF5F720(bool p0) { N::Invoke<0x57BDC7F38FF5F720, void>(p0); } // 60734CC207C9833C E7E1E32B
  static void SET_BLIP_COORDS(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x2F81977123174F1A, void>(p0, p1, p2, p3); } // AE2AF67E9D9AF65D 680A34D4
  static Vector3 GET_BLIP_COORDS(uint32_t p0) { return N::Invoke<0xDEC21C0D420A9EFF, Vector3>(p0); } // 586AFE3FF72D996E EF6FF47B
  static void SET_BLIP_SPRITE(uint32_t p0, uint32_t p1) { N::Invoke<0x1DF6D56C47E7482, void>(p0, p1); } // DF735600A4696DAF 8DBBB0B9
  static uint32_t GET_BLIP_SPRITE(uint32_t p0) { return N::Invoke<0x4672A001CF8D53E4, uint32_t>(p0); } // 1FC877464A04FC4F 72FF2E73
  static void SET_BLIP_NAME_FROM_TEXT_FILE(uint32_t p0, uint32_t *p1) { N::Invoke<0x2B271F66198227B7, void>(p0, p1); } // EAA0FFE120D92784 AC8A5461
  static void SET_BLIP_NAME_TO_PLAYER_NAME(uint32_t p0, uint32_t p1) { N::Invoke<0xC03F7B514FC6591E, void>(p0, p1); } // 127DE7B20C60A6A3 03A0B8F9
  static void SET_BLIP_ALPHA(uint32_t p0, uint32_t p1) { N::Invoke<0x80882386D3DF8627, void>(p0, p1); } // 45FF974EEE1C8734 A791FCCD
  static uint32_t GET_BLIP_ALPHA(uint32_t p0) { return N::Invoke<0x714F1BB644001893, uint32_t>(p0); } // 970F608F0EE6C885 297AF6C8
  static void SET_BLIP_FADE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xDD0B37CC1B62475F, void>(p0, p1, p2); } // 2AEE8F8390D2298C A5999031
  static void SET_BLIP_ROTATION(uint32_t p0, uint32_t p1) { N::Invoke<0x7660EFF89E3C012A, void>(p0, p1); } // F87683CDF73C3F6E 6B8F44FE
  static void SET_BLIP_FLASH_TIMER(uint32_t p0, uint32_t p1) { N::Invoke<0x221C6713AAED6143, void>(p0, p1); } // D3CD6FD297AE87CC 8D5DF611
  static void SET_BLIP_FLASH_INTERVAL(uint32_t p0, uint32_t p1) { N::Invoke<0x5C378F024EA622FB, void>(p0, p1); } // AA51DB313C010A7E EAF67377
  static void SET_BLIP_COLOUR(uint32_t p0, uint32_t p1) { N::Invoke<0xEDB3DD98D55452E4, void>(p0, p1); } // 03D7FB09E75D6B7E BB3C5A41
  static void SET_BLIP_SECONDARY_COLOUR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x8ED7D82D582CF41B, void>(p0, p1, p2, p3); } // 14892474891E09EB C6384D32
  static uint32_t GET_BLIP_COLOUR(uint32_t p0) { return N::Invoke<0xD623E5BF8A42FDB2, uint32_t>(p0); } // DF729E8D20CF7327 DD6A1E54
  static uint32_t GET_BLIP_HUD_COLOUR(uint32_t p0) { return N::Invoke<0x5E4CAE505FE210EB, uint32_t>(p0); } // 729B5F1EFBC0AAEE E88B4BC2
  static bool IS_BLIP_SHORT_RANGE(uint32_t p0) { return N::Invoke<0x8807F37EDB4E0B6E, bool>(p0); } // DA5F8727EB75B926 1226765A
  static bool IS_BLIP_ON_MINIMAP(uint32_t p0) { return N::Invoke<0xC7F5EBCDE64628FA, bool>(p0); } // E41CA53051197A27 258CBA3A
  static bool _0xCC92332182B4F40D(uint32_t p0) { return N::Invoke<0xCC92332182B4F40D, bool>(p0); } // DD2238F57B977751 3E47F357
  static void _0xAE1265C58534EC25(uint32_t p0, bool p1) { N::Invoke<0xAE1265C58534EC25, void>(p0, p1); } // 54318C915D27E4CE 43996428
  static void SET_BLIP_HIGH_DETAIL(uint32_t p0, bool p1) { N::Invoke<0xA61B82C284FFE820, void>(p0, p1); } // E2590BC29220CEBB D5842BFF
  static void SET_BLIP_AS_MISSION_CREATOR_BLIP(uint32_t p0, bool p1) { N::Invoke<0xB628C24ECEF4D08B, void>(p0, p1); } // 24AC0137444F9FD5 802FB686
  static bool IS_MISSION_CREATOR_BLIP(uint32_t p0) { return N::Invoke<0xC9A8A5EE51B81E78, bool>(p0); } // 26F49BF3381D933D 24ACC4E9
  static uint32_t DISABLE_BLIP_NAME_FOR_VAR() { return N::Invoke<0x4CF90E476945B4D1, uint32_t>(); } // 5C90988E7C8E1AF4 FFD7476C
  static bool _0x1A37753105D027E2() { return N::Invoke<0x1A37753105D027E2, bool>(); } // 4167EFE0527D706E C5EB849A
  static void _0xB098C276E1253ABF(bool p0) { N::Invoke<0xB098C276E1253ABF, void>(p0); } // F1A6C18B35BCADE6 A2CAAB4F
  static void SET_BLIP_FLASHES(uint32_t p0, bool p1) { N::Invoke<0xE344B71AFE01D194, void>(p0, p1); } // B14552383D39CE3E C0047F15
  static void SET_BLIP_FLASHES_ALTERNATE(uint32_t p0, bool p1) { N::Invoke<0xAC7B42E07198FE25, void>(p0, p1); } // 2E8D9498C56DD0D1 1A81202B
  static bool IS_BLIP_FLASHING(uint32_t p0) { return N::Invoke<0xF1D3F36D61E6F618, bool>(p0); } // A5E41FD83AD6CEF0 52E111D7
  static void SET_BLIP_AS_SHORT_RANGE(uint32_t p0, bool p1) { N::Invoke<0xBC48AF3329DE187E, void>(p0, p1); } // BE8BE4FE60E27B72 5C67725E
  static void SET_BLIP_SCALE(uint32_t p0, float p1) { N::Invoke<0x1D8833C0F155BFE7, void>(p0, p1); } // D38744167B2FA257 1E6EC434
  static void SET_BLIP_PRIORITY(uint32_t p0, uint32_t p1) { N::Invoke<0xAE9EE75C62A1DACD, void>(p0, p1); } // AE9FC9EF6A9FAC79 CE87DA6F
  static void SET_BLIP_DISPLAY(uint32_t p0, uint32_t p1) { N::Invoke<0xE5432F1BF1E5646B, void>(p0, p1); } // 9029B2F3DA924928 2B521F91
  static void SET_BLIP_CATEGORY(uint32_t p0, uint32_t p1) { N::Invoke<0x345FCB7A69800F7D, void>(p0, p1); } // 234CDD44D996FD9A EF72F533
  static void REMOVE_BLIP(uint32_t *p0) { N::Invoke<0xA0A65B537B1F11EC, void>(p0); } // 86A652570E5F25DD D8C3C1CD
  static void SET_BLIP_AS_FRIENDLY(uint32_t p0, uint32_t p1) { N::Invoke<0x109908E4511B0839, void>(p0, p1); } // 6F6F290102C02AB4 F290CFD8
  static void PULSE_BLIP(uint32_t p0) { N::Invoke<0x6ACCC0A48DFAFA52, void>(p0); } // 742D6FD43115AF73 44253855
  static void SHOW_NUMBER_ON_BLIP(uint32_t p0, uint32_t p1) { N::Invoke<0xB47394D0FE1BF41B, void>(p0, p1); } // A3C0B359DCB848B6 7BFC66C6
  static void HIDE_NUMBER_ON_BLIP(uint32_t p0) { N::Invoke<0xC3D5293FB2FE3EBB, void>(p0); } // 532CFF637EF80148 0B6D610D
  static void _0x847FC5384ABAF1A7(uint32_t p0, bool p1) { N::Invoke<0x847FC5384ABAF1A7, void>(p0, p1); } // 75A16C3DA34F1245 1D99F676
  static void _0xDEA3C4CE7D6663CC(uint32_t p0, bool p1) { N::Invoke<0xDEA3C4CE7D6663CC, void>(p0, p1); } // 74513EA3E505181E 3DCF0092
  static void _0xD248A6DE305F5B80(uint32_t p0, bool p1) { N::Invoke<0xD248A6DE305F5B80, void>(p0, p1); } // 5FBCA48327B914DF D1C3D71B
  static void _0x22C2C3DB1A362E11(uint32_t p0, bool p1) { N::Invoke<0x22C2C3DB1A362E11, void>(p0, p1); } // B81656BC81FE24D1 8DE82C15
  static void _0xC91A6E910A31B021(uint32_t p0, bool p1) { N::Invoke<0xC91A6E910A31B021, void>(p0, p1); } // 23C3EB807312F01A 4C8F02B4
  static void _0x5F733FEC450FAFEC(uint32_t p0, bool p1) { N::Invoke<0x5F733FEC450FAFEC, void>(p0, p1); } // DCFB5D4DB8BF367E ABBE1E45
  static void _0x235FEEC8D1179CD8(uint32_t p0, bool p1) { N::Invoke<0x235FEEC8D1179CD8, void>(p0, p1); } // C4278F70131BAA6D 6AA6A1CC
  static void _0x38E62F7828D181F(uint32_t p0, bool p1) { N::Invoke<0x38E62F7828D181F, void>(p0, p1); } // 2B6D467DAB714E8D C575F0BC
  static void _0x30967BF372C58139(uint32_t p0, bool p1) { N::Invoke<0x30967BF372C58139, void>(p0, p1); } // 25615540D894B814 40E25DB8
  static bool DOES_BLIP_EXIST(uint32_t p0) { return N::Invoke<0xD361727124133DF3, bool>(p0); } // A6DB27D19ECBB7DA AE92DD96
  static void SET_WAYPOINT_OFF() { N::Invoke<0xF74507C0BFCA6440, void>(); } // A7E4E2D361C2627F B3496E1B
  static void _0x9CD638CE5CB60A6D() { N::Invoke<0x9CD638CE5CB60A6D, void>(); } // D8E694757BCEA8E9 62BABF2C
  static void REFRESH_WAYPOINT() { N::Invoke<0x88096D244FFF53D1, void>(); } // 81FA173F170560D1 B395D753
  static bool IS_WAYPOINT_ACTIVE() { return N::Invoke<0xD17658F84F9E1A04, bool>(); } // 1DD1F58F493F1DA5 5E4DF47B
  static void SET_NEW_WAYPOINT(float p0, float p1) { N::Invoke<0x484FAA0C13114090, void>(p0, p1); } // FE43368D2AA4F2FC 8444E1F0
  static void SET_BLIP_BRIGHT(uint32_t p0, uint32_t p1) { N::Invoke<0x525905916066BA6B, void>(p0, p1); } // B203913733F27884 72BEE6DF
  static void SET_BLIP_SHOW_CONE(uint32_t p0, bool p1) { N::Invoke<0xE99390D652EA3E1C, void>(p0, p1); } // 13127EC3665E8EE1 FF545AD8
  static void _0xA0A741D787B8D1D5(uint32_t p0) { N::Invoke<0xA0A741D787B8D1D5, void>(p0); } // C594B315EDF2D4AF 41B0D022
  static uint32_t SET_MINIMAP_COMPONENT(uint32_t p0, uint32_t p1) { return N::Invoke<0x46FE69C22EF78F9F, uint32_t>(p0, p1); } // 75A9A10948D1DEA6 419DCDC4
  static uint32_t _0x828AA97AE68296D3() { return N::Invoke<0x828AA97AE68296D3, uint32_t>(); } // 60E892BA4F5BDCA4
  static uint32_t GET_MAIN_PLAYER_BLIP_ID() { return N::Invoke<0x2A0DDB06C714A7E0, uint32_t>(); } // DCD4EC3F419D02FA AB93F020
  static uint32_t _0x749257123BB86DC3() { return N::Invoke<0x749257123BB86DC3, uint32_t>(); } // 41350B4FC28E3941
  static void HIDE_LOADING_ON_FADE_THIS_FRAME() { N::Invoke<0xB9127039E1155CEF, void>(); } // 4B0311D3CDC4648F 35087963
  static void SET_RADAR_AS_INTERIOR_THIS_FRAME(uint32_t p0, float p1, float p2, uint32_t p3, uint32_t p4) { N::Invoke<0x8A1C826B6011F96F, void>(p0, p1, p2, p3, p4); } // 59E727A1C9D3E31A 6F2626E1
  static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { N::Invoke<0xE4326822B6D2AD23, void>(); } // E81B7D2A3DAB2D81 39ABB10E
  static void _0x875CB94BF67CED69(float p0, float p1) { N::Invoke<0x875CB94BF67CED69, void>(p0, p1); } // 77E2DD177910E1CF 54E75C7D
  static uint32_t _0x2C35BEC417DC285C() { return N::Invoke<0x2C35BEC417DC285C, uint32_t>(); } // 9049FE339D5F6F6F 199DED14
  static void _0x82D64BFBA6F7D119() { N::Invoke<0x82D64BFBA6F7D119, void>(); } // 5FBAE526203990C9 1A4318F7
  static void _0xC7ADF9E3A5C038B9() { N::Invoke<0xC7ADF9E3A5C038B9, void>(); } // 20FE7FDFEEAD38C0 CE36E3FE
  static void _0x22269D54BE40EDDC() { N::Invoke<0x22269D54BE40EDDC, void>(); } // 6D14BFDC33B34F55 334EFD46
  static void SET_WIDESCREEN_FORMAT(uint32_t p0) { N::Invoke<0x7BCBD4B160BC9240, void>(p0); } // C3B07BA00A83B0F1 F016E08F
  static void DISPLAY_AREA_NAME(bool p0) { N::Invoke<0x1FE21009C68A1E4C, void>(p0); } // 276B6CE369C33678 489FDD41
  static void DISPLAY_CASH(bool p0) { N::Invoke<0xF58B91E49213E693, void>(p0); } // 96DEC8D5430208B7 0049DF83
  static uint32_t _0x2E97F57AB7822257() { return N::Invoke<0x2E97F57AB7822257, uint32_t>(); } // 170F541E1CADD1DE
  static uint32_t _0x2E29F4145DC9591A() { return N::Invoke<0x2E29F4145DC9591A, uint32_t>(); } // 772DF77852C2E30
  static void DISPLAY_AMMO_THIS_FRAME(bool p0) { N::Invoke<0x36CA8D8C98192CF4, void>(p0); } // A5E78BA2B1331C55 60693CEE
  static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { N::Invoke<0x471873B3BE686969, void>(); } // 73115226F4814E62 BC6C73CB
  static void HIDE_HUD_AND_RADAR_THIS_FRAME() { N::Invoke<0xDCB93E7DEB1CC3F, void>(); } // 719FF505F097FD20 B75D4AD2
  static void _0xB96FE7C54712BB7(bool p0) { N::Invoke<0xB96FE7C54712BB7, void>(p0); } // E67C6DFD386EA5E7 5476B9FD
  static void _0xC1A4879108C6BD61() { N::Invoke<0xC1A4879108C6BD61, void>(); } // C2D15BEF167E27BC F4F3C796
  static void _0x84B994EED631E3E3() { N::Invoke<0x84B994EED631E3E3, void>(); } // 95CF81BD06EE1887 7BFFE82F
  static void SET_MULTIPLAYER_BANK_CASH() { N::Invoke<0xF2A46914FCB65CCA, void>(); } // DD21B55DF695CD0A 2C842D03
  static void REMOVE_MULTIPLAYER_BANK_CASH() { N::Invoke<0xAE01AFBC628C0D4C, void>(); } // C7C6789AA1CFEDD0 728B4EF4
  static void SET_MULTIPLAYER_HUD_CASH(uint32_t p0, uint32_t p1) { N::Invoke<0xABBB431CD25723EC, void>(p0, p1); } // FD1D220394BCB824 A8DB435E
  static void REMOVE_MULTIPLAYER_HUD_CASH() { N::Invoke<0xB3207C39486BF10D, void>(); } // 968F270E39141ECA 07BF4A7D
  static void HIDE_HELP_TEXT_THIS_FRAME() { N::Invoke<0x834A2283A5D3A788, void>(); } // D46923FC481CA285 F3807BED
  static void DISPLAY_HELP_TEXT_THIS_FRAME(uint32_t *p0, bool p1) { N::Invoke<0xD43B1BB61E829561, void>(p0, p1); } // 960C9FF8F616E41C 18E3360A
  static void _0x9100FC746CFA42CC(bool p0) { N::Invoke<0x9100FC746CFA42CC, void>(p0); } // EB354E5376BC81A7 1EFFB02A
  static void _0x0C89590ED39145134() { N::Invoke<0xC89590ED39145134, void>(); } // 0AFC4AF510774B47 B26FED2B
  static uint32_t _0x8DA04BE2123D1FA8() { return N::Invoke<0x8DA04BE2123D1FA8, uint32_t>(); } // A48931185F0536FE 22E9F555
  static void _0xAB9BBDB124328A1C(uint32_t p0) { N::Invoke<0xAB9BBDB124328A1C, void>(p0); } // 72C1056D678BB7D8 83B608A0
  static uint32_t _0x67CA6386FD4A3F3A() { return N::Invoke<0x67CA6386FD4A3F3A, uint32_t>(); } // A13E93403F26C812
  static void _0x7DAA4197B4D2BF0(bool p0) { N::Invoke<0x7DAA4197B4D2BF0, void>(p0); } // 14C9FDCC41F81F63 E70D1F43
  static void SET_GPS_FLAGS(uint32_t p0, float p1) { N::Invoke<0x88F9FBE498E45109, void>(p0, p1); } // 5B440763A4C8D15B 60539BAB
  static void CLEAR_GPS_FLAGS() { N::Invoke<0xC7AF1DA2B14B2283, void>(); } // 21986729D6A3A830 056AFCE6
  static void _0xF30928F9EF2D6315(bool p0) { N::Invoke<0xF30928F9EF2D6315, void>(p0); } // 1EAC5F91BCBC5073 FB9BABF5
  static void CLEAR_GPS_RACE_TRACK() { N::Invoke<0x7BE4A76B87C50D85, void>(); } // 7AA5B4CE533C858B 40C59829
  static void _0xC4A5D3BB4C3D3AB9(uint32_t p0, bool p1, bool p2) { N::Invoke<0xC4A5D3BB4C3D3AB9, void>(p0, p1, p2); } // DB34E8D56FC13B08 7F93799B
  static void _0x93E18AEF194CE163(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x93E18AEF194CE163, void>(p0, p1, p2); } // 311438A071DD9B1A EEBDFE55
  static void _0xC16F6689A7DBE551(bool p0, uint32_t p1, uint32_t p2) { N::Invoke<0xC16F6689A7DBE551, void>(p0, p1, p2); } // 900086F371220B6F DA0AF00E
  static void _0xAF71A49FDA517305() { N::Invoke<0xAF71A49FDA517305, void>(); } // E6DE0561D9232A64 CF2E3E24
  static void _0x7E3DA46CE25B6D18(uint32_t p0, bool p1, bool p2) { N::Invoke<0x7E3DA46CE25B6D18, void>(p0, p1, p2); } // 3D3D15AF7BCAAF83 C3DCBEDB
  static void _0x170343993A3352C5(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x170343993A3352C5, void>(p0, p1, p2); } // A905192A6781C41B FE485135
  static void _0x215D5A45803F79DC(bool p0) { N::Invoke<0x215D5A45803F79DC, void>(p0); } // 3DDA37128DD1ACA8 E87CBE4C
  static void _0xE824F7271760B02() { N::Invoke<0xE824F7271760B02, void>(); } // 67EEDEA1B9BAFD94 0D9969E4
  static void CLEAR_GPS_PLAYER_WAYPOINT() { N::Invoke<0x91DAD8C1643D4D5A, void>(); } // FF4FB7C8CDFA3DA7 0B9C7FC2
  static void SET_GPS_FLASHES(bool p0) { N::Invoke<0xE97E144C74A00905, void>(p0); } // 320D0E0D936A0E9B E991F733
  static uint32_t _0x15524A24DF13AD18() { return N::Invoke<0x15524A24DF13AD18, uint32_t>(); } // 7B21E0BB01E8224A
  static void FLASH_MINIMAP_DISPLAY() { N::Invoke<0x2EFA6B02E866355A, void>(); } // F2DD778C22B15BDA B8359952
  static void _0xF6F144824FA2BE83(uint32_t p0) { N::Invoke<0xF6F144824FA2BE83, void>(p0); } // 6B1DE27EE78E6A19 79A6CAF6
  static void TOGGLE_STEALTH_RADAR(bool p0) { N::Invoke<0x8269440C7866A5B8, void>(p0); } // 6AFDFB93754950C7 C68D47C4
  static void KEY_HUD_COLOUR(bool p0, uint32_t p1) { N::Invoke<0x672D376470B6757D, void>(p0, p1); } // 1A5CD7752DD28CD3 D5BFCADB
  static void SET_MISSION_NAME(bool p0, uint32_t *p1) { N::Invoke<0xAABDA3B6E57B068A, void>(p0, p1); } // 5F28ECF5FC84772F 68DCAE10
  static void _0x4081A600A2C8F827(bool p0, uint32_t *p1) { N::Invoke<0x4081A600A2C8F827, void>(p0, p1); } // E45087D85F468BC2 8D9A1734
  static void _0xF1079458D323C454(bool p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6, uint32_t *p7, uint32_t *p8) { N::Invoke<0xF1079458D323C454, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 817B86108EB94E51 D2161E77
  static void SET_MINIMAP_BLOCK_WAYPOINT(bool p0) { N::Invoke<0xFDC8825960BE275C, void>(p0); } // 58FADDED207897DC A41C3B62
  static void _0x98BB94CE67283ADA(bool p0) { N::Invoke<0x98BB94CE67283ADA, void>(p0); } // 9133955F1A2DA957 02F5F1D1
  static void _0xB182AC07FE761D52(bool p0) { N::Invoke<0xB182AC07FE761D52, void>(p0); } // F8DEE0A5600CBB93 D8D77733
  static float _0x9E398CF68DAC5B00() { return N::Invoke<0x9E398CF68DAC5B00, float>(); } // E0130B41D3CF4574 A4098ACC
  static bool _0x616B30750598DE38(float p0, float p1, float p2) { return N::Invoke<0x616B30750598DE38, bool>(p0, p1, p2); } // 6E31B91145873922 65B705F6
  static uint32_t _0x17651D50748751E5() { return N::Invoke<0x17651D50748751E5, uint32_t>(); } // 62E849B7EB28E770
  static void _0x0D21CC32C600DEF89(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xD21CC32C600DEF89, void>(p0, p1, p2); } // 0923DBF87DFF735E E010F081
  static void _0x6876AA8265E2FE18(uint32_t p0) { N::Invoke<0x6876AA8265E2FE18, void>(p0); } // 71BDB63DBAF8DA59 5133A750
  static void _0x2322D02156FBA3F2() { N::Invoke<0x2322D02156FBA3F2, void>(); } // 35EDD5B2E3FF01C0 20FD3E87
  static void LOCK_MINIMAP_ANGLE(bool p0) { N::Invoke<0xAA609466F47F9ED0, void>(p0); } // 299FAEBB108AE05B DEC733E4
  static void UNLOCK_MINIMAP_ANGLE() { N::Invoke<0x465FDAA9130F8F45, void>(); } // 8183455E16C42E3A 742043F9
  static void LOCK_MINIMAP_POSITION(float p0, float p1) { N::Invoke<0x76F422FE758FB5D7, void>(p0, p1); } // 1279E861A329E73F B9632A91
  static void UNLOCK_MINIMAP_POSITION() { N::Invoke<0x573535E36A62454, void>(); } // 3E93E06DB8EF1F30 5E8E6F54
  static void _0xC24747147A4F1DE3(float p0) { N::Invoke<0xC24747147A4F1DE3, void>(p0); } // D201F3FF917A506D 0308EDF6
  static void _0xBF032A862E60BA6C(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xBF032A862E60BA6C, void>(p0, p1, p2); } // 3F5CC444DCAAA8F2 7FB6FB2A
  static void _0x1E9706A18BCA60E6(uint32_t p0) { N::Invoke<0x1E9706A18BCA60E6, void>(p0); } // 975D66A0BC17064C F07D8CEF
  static void _0x08DE076CFFF4BC07A(uint32_t p0) { N::Invoke<0x8DE076CFFF4BC07A, void>(p0); } // 06A320535F5F0248 827F14DE
  static void _0xA9D1BCCD3A625DAE(bool p0, bool p1) { N::Invoke<0xA9D1BCCD3A625DAE, void>(p0, p1); } // 231C8F89D0539D8F 08EB83D2
  static bool IS_HUD_COMPONENT_ACTIVE(uint32_t p0) { return N::Invoke<0xC7F3C9E82B405F1E, bool>(p0); } // BC4C9EA5391ECC0D 6214631F
  static bool IS_SCRIPTED_HUD_COMPONENT_ACTIVE(uint32_t p0) { return N::Invoke<0x6E41FB92A34F9483, bool>(p0); } // DD100EB17A94FF65 2B86F382
  static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(uint32_t p0) { N::Invoke<0x39987759D6C2EBBF, void>(p0); } // E374C498D8BADC14 31ABA127
  static bool _0x065AFFA04D9E38C76(uint32_t p0) { return N::Invoke<0x65AFFA04D9E38C76, bool>(p0); } // 09C0403ED9A751C2 E8C8E535
  static void HIDE_HUD_COMPONENT_THIS_FRAME(uint32_t p0) { N::Invoke<0xD9E638F7F8DCAA60, void>(p0); } // 6806C51AD12B83B8 DB2D0762
  static void SHOW_HUD_COMPONENT_THIS_FRAME(uint32_t p0) { N::Invoke<0x4EF7AADF2CD572A6, void>(p0); } // 0B4DF1FA60C0E664 95E1546E
  static void _0xD7635149595C854C() { N::Invoke<0xD7635149595C854C, void>(); } // A4DEDE28B1814289 52746FE1
  static void RESET_RETICULE_VALUES() { N::Invoke<0x4852CC7102421294, void>(); } // 12782CE0A636E9F0 BE27AA3F
  static void RESET_HUD_COMPONENT_VALUES(uint32_t p0) { N::Invoke<0x7DD2AC90262DCE82, void>(p0); } // 450930E616475D0D D15B46DA
  static void SET_HUD_COMPONENT_POSITION(uint32_t p0, float p1, float p2) { N::Invoke<0x5FB5A2E05EF61B42, void>(p0, p1, p2); } // AABB1F56E2A17CED 2F3A0D15
  static Vector3 GET_HUD_COMPONENT_POSITION(uint32_t p0) { return N::Invoke<0x8ECDD105EBC8FBAA, Vector3>(p0); } // 223CA69A8C4417FD 080DCED6
  static void _0xADB29B38DD8FAD3C() { N::Invoke<0xADB29B38DD8FAD3C, void>(); } // B57D8DD645CFA2CF 5BBCC934
  static uint32_t _0x61EA0326067B832D(float p0, float p1, float p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0x61EA0326067B832D, uint32_t>(p0, p1, p2, p3, p4); } // F9904D11F1ACBEC3 FE9A39F8
  static void _0xACA52C0D9E6758DC() { N::Invoke<0xACA52C0D9E6758DC, void>(); } // 523A590C1A3CC0D3 10DE5150
  static void _0x6F322BD2CC40DA48() { N::Invoke<0x6F322BD2CC40DA48, void>(); } // EE4C0E6DBC6F2C6F 67649EE0
  static uint32_t _0xF896651DB1B4DB26() { return N::Invoke<0xF896651DB1B4DB26, uint32_t>(); } // 9135584D09A3437E 9D2C94FA
  static bool _0xB583BEF8A2D14AAF(uint32_t p0) { return N::Invoke<0xB583BEF8A2D14AAF, bool>(p0); } // 2432784ACA090DA4 45472FD5
  static void _0xB7EA46F28381F55E(uint32_t p0, float p1, float p2) { N::Invoke<0xB7EA46F28381F55E, void>(p0, p1, p2); } // 7679CC1BCEBE3D4C 198F32D7
  static void _0xE07CD8C540C9722D(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0xE07CD8C540C9722D, void>(p0, p1, p2, p3); } // 784BA7E0ECEB4178 93045157
  static void _0xF914B8DF951A923(uint32_t p0, uint32_t p1, float p2, float p3) { N::Invoke<0xF914B8DF951A923, void>(p0, p1, p2, p3); } // B094BC1DB4018240 18B012B7
  static void _0x6343EDC03B72A678(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x6343EDC03B72A678, void>(p0, p1, p2, p3, p4, p5); } // 788E7FD431BD67F1 97852A82
  static void CLEAR_FLOATING_HELP(uint32_t p0, bool p1) { N::Invoke<0xDB8E6614BEC7977E, void>(p0, p1); } // 50085246ABD3FEFA B181F88F
  static void _CREATE_PED_HEAD_DISPLAY_2(uint32_t p0, const char* *p1, bool p2, bool p3, const char *p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { N::Invoke<0xF55905207DDCE4B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // F55905207DDCE4B C969F2D0
  static bool _ARE_HEAD_DISPLAYS_READY() { return N::Invoke<0x46119117C732580, bool>(); } // 46119117C732580 EFD2564A
  static uint32_t _CREATE_PED_HEAD_DISPLAY(uint32_t p0, const char *p1, bool p2, bool p3, const char *p4, uint32_t p5) { return N::Invoke<0xC0C3ADAA5E2742A8, uint32_t>(p0, p1, p2, p3, p4, p5); } // C0C3ADAA5E2742A8 F5CD2AA4
  static void _DELETE_HEAD_DISPLAY(uint32_t p0) { N::Invoke<0xB16A30FAC740F372, uint32_t>(p0); } // B16A30FAC740F372 3D081FE4
  static bool _IS_HEAD_DISPLAY_ID_VALID(uint32_t p0) { return N::Invoke<0x78D2B86B27D417FE, bool>(p0); } // 78D2B86B27D417FE 60118951
  static bool ADD_TREVOR_RANDOM_MODIFIER(uint32_t p0) { return N::Invoke<0x4B4B2CA8617C20C1, bool>(p0); } // 4B4B2CA8617C20C1 63959059
  static void _SET_HEAD_DISPLAY_FLAG(uint32_t p0, uint32_t p1, BOOL p2) { N::Invoke<0x1794D34117D18C4, uint32_t>(p0, p1, p2); } // 1794D34117D18C4 D41DF479
  static void _SET_HEAD_DISPLAY_UNKNWON1(uint32_t p0, BOOL p1) { N::Invoke<0x4CB5F83CD5B8333, uint32_t>(p0, p1); } // 4CB5F83CD5B8333 767DED29
  static void _SET_HEAD_DISPLAY_VISIBLE(uint32_t p0, BOOL p1) { N::Invoke<0x2395A5BAA8CCB54, uint32_t>(p0, p1); } // 2395A5BAA8CCB54 B01A5434
  static void _SET_HEAD_DISPLAY_UNKNWON2(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x75868EF4D5C8A90B, uint32_t>(p0, p1, p2); } // 75868EF4D5C8A90B 7E3AA40A
  static void _SET_HEAD_DISPLAY_UNKNWON3(uint32_t p0, uint32_t p1) { N::Invoke<0x7298EA23DA5180D5, uint32_t>(p0, p1); } // 7298EA23DA5180D5 5777EC77
  static void _SET_HEAD_DISPLAY_ALPHA(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x7B0C1FCDD1359963, uint32_t>(p0, p1, p2); } // 7B0C1FCDD1359963 F4418611
  static bool _SET_HEAD_DISPLAY_WANTED_LEVEL(uint32_t p0, uint32_t p1) { return N::Invoke<0xFB17463B0E8EFACF, uint32_t>(p0, p1); } // FB17463B0E8EFACF 0EBB003F
  static bool _SET_HEAD_DISPLAY_STRING(uint32_t p0, const char *p1) { return N::Invoke<0x7156A173B1B5DC67, uint32_t>(p0, p1); } // 7156A173B1B5DC67 627A559B
  static bool _GET_HEAD_DISPLAY_UNKNWON1(uint32_t p0) { return N::Invoke<0x10220B72586ADF4E, bool>(p0); } // 10220B72586ADF4E F11414C4
  static void _SET_HEAD_DISPLAY_UNKNWON5(uint32_t p0, uint32_t *p1) { N::Invoke<0x8734BB476A33A3F2, uint32_t>(p0, p1); } // 8734BB476A33A3F2 939218AB
  static uint32_t _0x028B0B9FAE91FC125() { return N::Invoke<0x28B0B9FAE91FC125, uint32_t>(); } // 01A358D9128B7A86 AB5B7C18
  static uint32_t GET_CURRENT_WEBSITE_ID() { return N::Invoke<0xCFDAF1A342ABD988, uint32_t>(); } // 97D47996FC48CBAD 42A55B14
  static uint32_t _0x160F30A19B8C7963(uint32_t p0) { return N::Invoke<0x160F30A19B8C7963, uint32_t>(p0); } // E3B05614DCE1D014 D217EE7E
  static uint32_t _0xCDE78AC9C2E8D13C() { return N::Invoke<0xCDE78AC9C2E8D13C, uint32_t>(); } // B99C4E4D9499DF29
  static uint32_t _0xD6FF24431E0986B() { return N::Invoke<0xD6FF24431E0986B, uint32_t>(); } // AF42195A42C63BBA
  static void SET_WARNING_MESSAGE(uint32_t *p0, uint32_t p1, uint32_t *p2, bool p3, uint32_t p4, uint32_t *p5, uint32_t *p6, bool p7) { N::Invoke<0x7B1776B3B53F8D74, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 7B1776B3B53F8D74 BE699BDE
  static void _0xDC38CC1E35B6A5D7(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, bool p4, uint32_t p5, uint32_t *p6, uint32_t *p7, bool p8) { N::Invoke<0xDC38CC1E35B6A5D7, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // DC38CC1E35B6A5D7 2DB9EAB5
  static void SET_DANCE_MAPPERS(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, bool p4, uint32_t p5, uint32_t p6, uint32_t *p7, uint32_t *p8, bool p9) { N::Invoke<0x701919482C74B5AB, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 701919482C74B5AB 749929D3
  static uint32_t _0xC5A80A9E096D529() { return N::Invoke<0xC5A80A9E096D529, uint32_t>(); } // C5A80A9E096D529
  static uint32_t _0x25251DA4142FF55() { return N::Invoke<0x25251DA4142FF55, uint32_t>(); } // DAF87174BE7454FF
  static uint32_t _0xF45E4FC229984058() { return N::Invoke<0xF45E4FC229984058, uint32_t>(); } // 6EF54AB721DC6242
  static bool _0xDAF2549B28FDF97C() { return N::Invoke<0xDAF2549B28FDF97C, bool>(); } // E18B138FABC53103 94C834AD
  static void _0xD7294662960BC935() { N::Invoke<0xD7294662960BC935, void>(); } // 7792424AA0EAC32E 2F9A309C
  static void _0xBAFA44AE50C80A20(bool p0) { N::Invoke<0xBAFA44AE50C80A20, void>(p0); } // 5354C5BA2EA868A4 E4FD20D8
  static void _0x53CFDB990DA71C3E(uint32_t p0) { N::Invoke<0x53CFDB990DA71C3E, void>(p0); } // 1EAE6DD17B7A5EFA 13E7A5A9
  static uint32_t _0x939D790A0F52FFC3(float p0, float p1, float p2) { return N::Invoke<0x939D790A0F52FFC3, uint32_t>(p0, p1, p2); } // 551DF99658DB6EE8 786CA0A2
  static void _0x7075A1DC41588A03() { N::Invoke<0x7075A1DC41588A03, void>(); } // 2708FC083123F9FF CBEC9369
  static uint32_t _0x1E71C40BC87F5A79() { return N::Invoke<0x1E71C40BC87F5A79, uint32_t>(); } // 1121BFA1A1A522A8 3F4AFB13
  static void _0x63103FA92DB96A32(bool p0) { N::Invoke<0x63103FA92DB96A32, void>(p0); } // 82CEDC33687E1F50 2F28F0A6
  static void _0xB5FD622C93F7F27F() { N::Invoke<0xB5FD622C93F7F27F, void>(); } // 211C4EF450086857 801D0D86
  static void _0x7722857C13F16F8() { N::Invoke<0x7722857C13F16F8, void>(); } // BF4F34A85CA2970C 317775DF
  static void ACTIVATE_FRONTEND_MENU(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0xD3059E5D109BEB2B, void>(p0, p1, p2); } // EF01D36B9C9D0C7B 01D83872
  static void RESTART_FRONTEND_MENU(uint32_t p0, uint32_t p1) { N::Invoke<0x5E69E57D5EE8C815, void>(p0, p1); } // 10706DC6AD2D49C0 B07DAF98
  static uint32_t _0x951FD06749BEF574() { return N::Invoke<0x951FD06749BEF574, uint32_t>(); } // 2309595AD6145265 33D6868F
  static void SET_PAUSE_MENU_ACTIVE(bool p0) { N::Invoke<0xA50E3E96348933D, void>(p0); } // DF47FC56C71569CF 1DCD878E
  static void DISABLE_FRONTEND_THIS_FRAME() { N::Invoke<0xB27B75CF7FE04D35, void>(); } // 6D3465A73092F0E6 D86A029E
  static void _0x3BDB0147E3085DB4() { N::Invoke<0x3BDB0147E3085DB4, void>(); } // BA751764F0821256 7F349900
  static void _0x95A29F105741D0C3() { N::Invoke<0x95A29F105741D0C3, void>(); } // CC3FDDED67BCFC63 630CD8EE
  static void SET_FRONTEND_ACTIVE(bool p0) { N::Invoke<0x703307F9E1D0B307, void>(p0); } // 745711A75AB09277 81E1AD32
  static bool IS_PAUSE_MENU_ACTIVE() { return N::Invoke<0xBB02FD0C8166DE6D, bool>(); } // B0034A223497FFCB D3600591
  static uint32_t _0x710674C29CCC824A() { return N::Invoke<0x710674C29CCC824A, uint32_t>(); } // 2F057596F2BD0061 C85C4487
  static uint32_t GET_PAUSE_MENU_STATE() { return N::Invoke<0x3821D11074DB6AF2, uint32_t>(); } // 272ACD84970869C5 92F50134
  static uint32_t _0x7B5EA69E94AD1091() { return N::Invoke<0x7B5EA69E94AD1091, uint32_t>(); } // 5BFF36D6ED83E0AE
  static bool IS_PAUSE_MENU_RESTARTING() { return N::Invoke<0x3061F5773BD4FBDF, bool>(); } // 1C491717107431C7 3C4CF4D9
  static void _0xBE8E3C185B25CC6(uint32_t p0) { N::Invoke<0xBE8E3C185B25CC6, void>(p0); } // 2162C446DFDF38FD 2DFD35C7
  static void _0x92275A60C4894E73(uint32_t p0) { N::Invoke<0x92275A60C4894E73, void>(p0); } // 77F16B447824DA6C 0A89336C
  static void _0x481BDECF0423B436() { N::Invoke<0x481BDECF0423B436, void>(); } // CDCA26E80FAECB8F C84BE309
  static void _0x65B395215242FC26(uint32_t p0) { N::Invoke<0x65B395215242FC26, void>(p0); } // DD564BDD0472C936 9FE8FD5E
  static void OBJECT_DECAL_TOGGLE(uint32_t p0) { N::Invoke<0x54693641958ECCD4, void>(p0); } // 444D8CF241EC25C5 0029046E
  static bool _0xA10DCB07986BC5C3(uint32_t p0) { return N::Invoke<0xA10DCB07986BC5C3, bool>(p0); } // 84698AB38D0C6636 C51BC42F
  static bool _0x645256968F6461DF() { return N::Invoke<0x645256968F6461DF, bool>(); } // 2A25ADC48F87841F 016D7AF9
  static uint32_t _0x97064503409CC5F6() { return N::Invoke<0x97064503409CC5F6, uint32_t>(); } // DE03620F8703A9DF
  static uint32_t _0xEE698F32A5EF8FD9() { return N::Invoke<0xEE698F32A5EF8FD9, uint32_t>(); } // 359AF31A4B52F5ED
  static uint32_t _0xA82673CDB154C5B8() { return N::Invoke<0xA82673CDB154C5B8, uint32_t>(); } // 13C4B962653A5280
  static uint32_t _0xB35B2C2F9FAC68E5() { return N::Invoke<0xB35B2C2F9FAC68E5, uint32_t>(); } // C8E1071177A23BE5
  static void ENABLE_DEATHBLOOD_SEETHROUGH(uint32_t p0) { N::Invoke<0x3CAF82D57F002B28, void>(p0); } // 4895BDEA16E7C080 15B24768
  static void _0x17740B6494D7819C(bool p0, uint32_t p1, uint32_t p2) { N::Invoke<0x17740B6494D7819C, void>(p0, p1, p2); } // C78E239AC5B2DDB9 6C67131A
  static void _0x428DBE4976192837(bool p0) { N::Invoke<0x428DBE4976192837, void>(p0); } // F06EBB91A81E09E3 11D09737
  static bool _0xD5319BA880C2F84C() { return N::Invoke<0xD5319BA880C2F84C, bool>(); } // 3BAB9A4E4F2FF5C7 D3BF3ABD
  static void _0x7FB1C4BFB97A00C0() { N::Invoke<0x7FB1C4BFB97A00C0, void>(); } // EC9264727EEC0F28 C06B763D
  static void _0xA4525B118F3DFA6B() { N::Invoke<0xA4525B118F3DFA6B, void>(); } // 14621BB1DF14E2B2 B9392CE7
  static bool _0x50A7BE9CD05AD5C1() { return N::Invoke<0x50A7BE9CD05AD5C1, bool>(); } // 66E7CB63C97B7D20 92DAFA78
  static uint32_t _0xB28B82C182621B53() { return N::Invoke<0xB28B82C182621B53, uint32_t>(); } // 593FEAE1F73392D4 22CA9F2A
  static uint32_t _0x24D1C24D76CED44E() { return N::Invoke<0x24D1C24D76CED44E, uint32_t>(); } // 4E3CD0EF8A489541 DA7951A2
  static uint32_t _0x780CA25DAF50F3BB() { return N::Invoke<0x780CA25DAF50F3BB, uint32_t>(); } // F284AC67940C6812 7D95AFFF
  static uint32_t _0xEC7CB33300ACE653() { return N::Invoke<0xEC7CB33300ACE653, uint32_t>(); } // 2E22FEFA0100275E 96863460
  static uint32_t _0xA5A33195F1646DE2() { return N::Invoke<0xA5A33195F1646DE2, uint32_t>(); } // CF54F20DE43879C
  static void _0x9785E055AFBC6AFC(uint32_t *p0, uint32_t *p1) { N::Invoke<0x9785E055AFBC6AFC, void>(p0, p1); } // 36C1451A88A09630 8543AAC8
  static void _0x5F93BED9D86A6FD4(uint32_t *p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x5F93BED9D86A6FD4, void>(p0, p1, p2); } // 7E17BE53E1AAABAF 6025AA2F
  static bool _0x8423D71411FAF4EB(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x8423D71411FAF4EB, bool>(p0, p1, p2); } // A238192F33110615 46794EB2
  static bool SET_USERIDS_UIHIDDEN(uint32_t p0, uint32_t *p1) { return N::Invoke<0x414C7B1D56573AB6, bool>(p0, p1); } // EF4CED81CEBEDC6D 4370999E
  static uint32_t _0x795D17E7A8CD8C49() { return N::Invoke<0x795D17E7A8CD8C49, uint32_t>(); } // CA6B2F7CE32AB653
  static bool _0x7277A34366A4F19F(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x7277A34366A4F19F, bool>(p0, p1, p2, p3); } // 90A6526CF0381030 D6CC4766
  static uint32_t _0x73408F0AFB953057() { return N::Invoke<0x73408F0AFB953057, uint32_t>(); } // 24A49BEAF468DC90
  static bool _0x3D4470BA1B125B1C(uint32_t p0, uint32_t *p1) { return N::Invoke<0x3D4470BA1B125B1C, bool>(p0, p1); } // 5FBD7095FE7AE57F 51972B04
  static uint32_t _0x7D3111CEDE916824() { return N::Invoke<0x7D3111CEDE916824, uint32_t>(); } // 8F08017F9D7C47BD
  static bool _0x0EADB0FBC4CD9EE39(uint32_t p0, uint32_t *p1) { return N::Invoke<0xEADB0FBC4CD9EE39, bool>(p0, p1); } // 052991E59076E4E4 D43BB56D
  static void CLEAR_PED_IN_PAUSE_MENU() { N::Invoke<0x8093233B188174FE, void>(); } // 5E62BE5DC58E9E06 28058ACF
  static void GIVE_PED_TO_PAUSE_MENU(uint32_t p0, uint32_t p1) { N::Invoke<0xD1F971E0ADC8AF70, void>(p0, p1); } // AC0BFBDC3BE00E14 2AD2C9CE
  static void _0x8F236A4DCA8B39F3(bool p0) { N::Invoke<0x8F236A4DCA8B39F3, void>(p0); } // 3CA6050692BC61B0 127310EB
  static void _0xFD6F800BAE08A8A9(bool p0) { N::Invoke<0xFD6F800BAE08A8A9, void>(p0); } // ECF128344E9FF9F1 8F45D327
  static void _0x89DC48C7C26889B0() { N::Invoke<0x89DC48C7C26889B0, void>(); } // 805D7CBB36FD6C4C 19FCBBB2
  static bool _0x6B8C3FD0D5DD4926() { return N::Invoke<0x6B8C3FD0D5DD4926, bool>(); } // F13FE2A80C05C561 850690FF
  static uint32_t _0xFFDDCE3C8DC39841() { return N::Invoke<0xFFDDCE3C8DC39841, uint32_t>(); } // 6F72CD94F7B5B68C 9D4934F4
  static void _0xC470E7BE34B3B971() { N::Invoke<0xC470E7BE34B3B971, void>(); } // 75D3691713C3B05A 57218529
  static void _0xC79FC4EABCA4F9BD() { N::Invoke<0xC79FC4EABCA4F9BD, void>(); } // D2B32BE3FC1626C6 5F86AA39
  static void _0x4F5CF636B241140(uint32_t *p0) { N::Invoke<0x4F5CF636B241140, void>(p0); } // 9E778248D6685FE0 7AD67C95
  static uint32_t _0xBB6A8F38D35B8445() { return N::Invoke<0xBB6A8F38D35B8445, uint32_t>(); } // C406BE343FC4B9AF D4DA14EF
  static uint32_t _0x8ECF4F8AE5EC92D8() { return N::Invoke<0x8ECF4F8AE5EC92D8, uint32_t>(); } // 1185A8087587322C
  static uint32_t _0xCA5788E5D7FCBBB7() { return N::Invoke<0xCA5788E5D7FCBBB7, uint32_t>(); } // 8817605C2BA76200
  static uint32_t _0x3C69EB5D44CA09F0() { return N::Invoke<0x3C69EB5D44CA09F0, uint32_t>(); } // B118AF58B5F332A1
  static uint32_t _0xA7F59A616615936E() { return N::Invoke<0xA7F59A616615936E, uint32_t>(); } // 1AC8F4AD40E22127
  static uint32_t _0xCF23672F716D7721() { return N::Invoke<0xCF23672F716D7721, uint32_t>(); } // 1DB21A44B09E8BA3
  static void _0x38194339C47A347D(bool p0) { N::Invoke<0x38194339C47A347D, void>(p0); } // CEF214315D276FD1 FF06772A
  static void _0xADAC7AEDE592E5FF(uint32_t p0, bool p1) { N::Invoke<0xADAC7AEDE592E5FF, void>(p0, p1); } // D30C50DF888D58B5 96C4C4DD
  static bool _0xF9A4CF70DB92FFF6(uint32_t p0) { return N::Invoke<0xF9A4CF70DB92FFF6, bool>(p0); } // 15B8ECF844EE67ED 3BE1257F
  static void _0x84A6F440181ACC23(uint32_t p0, uint32_t p1) { N::Invoke<0x84A6F440181ACC23, void>(p0, p1); } // E52B8E7F85D39A08 D8E31B1A
  static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(uint32_t p0, bool p1) { N::Invoke<0x9F23324EC3A61137, void>(p0, p1); } // 3EED80DFF7325CAA 872C2CFB
  static void _0x089B93927F67D1769(uint32_t p0, bool p1) { N::Invoke<0x89B93927F67D1769, void>(p0, p1); } // 0C4BBF625CA98C4E FFDF46F0
  static void _0x5A510F8866FE43EA(uint32_t p0, float p1) { N::Invoke<0x5A510F8866FE43EA, void>(p0, p1); } // 97C65887D4B37FA9 F9DC2AF7
  static uint32_t _0xD45FE2149D749B3(uint32_t p0) { return N::Invoke<0xD45FE2149D749B3, uint32_t>(p0); } // 7CD934010E115C2C 06349065
  static uint32_t _0x793BA2783243F773(uint32_t p0) { return N::Invoke<0x793BA2783243F773, uint32_t>(p0); } // 56176892826A4FE8 CA52CF43
  static uint32_t _0x4F22D0DA5AA9476D() { return N::Invoke<0x4F22D0DA5AA9476D, uint32_t>(); } // A277800A9EAE340E
  static uint32_t _0x897C29B98D2C4A2() { return N::Invoke<0x897C29B98D2C4A2, uint32_t>(); } // 2632482FD6B9AB87
  static uint32_t _0x812411DCD1935E16() { return N::Invoke<0x812411DCD1935E16, uint32_t>(); } // 808519373FD336A3
  static uint32_t _0x29EA8AA5CA4695A0() { return N::Invoke<0x29EA8AA5CA4695A0, uint32_t>(); } // 4655F9D075D0AE5
}

namespace GRAPHICS
{
  static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(uint32_t p0) { N::Invoke<0x6BA9FD874495918A, void>(p0); } // 175B6BFC15CDD0C5 1418CA37
  static void DRAW_DEBUG_LINE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x428FCEDAB4D8C227, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 7FDFADE676AA3CB0 ABF783AB
  static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { N::Invoke<0x5F8C0F598573E93, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // D8B9A8AC5608FF94 E8BFF632
  static void DRAW_DEBUG_SPHERE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x6B7CE8468EF50BAB, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // AAD68E1AB39DA632 304D0EEF
  static void DRAW_DEBUG_BOX(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0xF6127D1DE2EBCB3E, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 083A2CA4F2E573BD 8524A848
  static void _0x4EBF37F1F2BE49CC(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x4EBF37F1F2BE49CC, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 73B1189623049839 B6DF3709
  static void DRAW_DEBUG_TEXT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x1D354C128EBBE84E, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 3903E216620488E8 269B006F
  static void DRAW_DEBUG_TEXT_2D(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0x9C64F97D3F9CCA97, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // A3BB2E9555C05A8F 528B973B
  static void DRAW_LINE(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x845D3C1816C12B24, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 6B7256074AE34680 B3426BCC
  static void DRAW_POLY(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { N::Invoke<0x7C906BA88CFAF018, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // AC26716048436851 ABD19253
  static void _0x800746F993F0A9B4(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x800746F993F0A9B4, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // D3A9971CADAC7252 CD4D9DD5
  static void _0xCDA4507E6EFCDDB(bool p0) { N::Invoke<0xCDA4507E6EFCDDB, void>(p0); } // 23BA6B0C2AD7B0D3 C44C2F44
  static bool _0x896EFD6787A4FA76() { return N::Invoke<0x896EFD6787A4FA76, bool>(); } // 1DD2139A9A20DCE8 BA9AD458
  static uint32_t _0x137263016733C0FD() { return N::Invoke<0x137263016733C0FD, uint32_t>(); } // 90A78ECAA4E78453 ADBBA287
  static void _0x0196C1A356588DD48() { N::Invoke<0x196C1A356588DD48, void>(); } // 0A46AF8A78DC5E0A 9E553002
  static bool _0xA1640BB1376C9899(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xA1640BB1376C9899, bool>(p0, p1, p2, p3); } // 4862437A486F91B0 56C1E488
  static uint32_t _0x112CC37ABCFB532B(uint32_t *p0) { return N::Invoke<0x112CC37ABCFB532B, uint32_t>(p0); } // 1670F8D05056F257 226B08EA
  static bool _0xA2168DB211AB0146() { return N::Invoke<0xA2168DB211AB0146, bool>(); } // 7FA5D82B8F58EC06 1F3CADB0
  static uint32_t _0x8E117BAA6F396547() { return N::Invoke<0x8E117BAA6F396547, uint32_t>(); } // 5B0316762AFD4A64 A9DC8558
  static void _0xF5F0E07FA56CB6C2() { N::Invoke<0xF5F0E07FA56CB6C2, void>(); } // 346EF3ECAAAB149E 88EAF398
  static bool _0xAD61A0D1BAA8BBFE() { return N::Invoke<0xAD61A0D1BAA8BBFE, bool>(); } // A67C35C56EB1BD9D 47B0C137
  static uint32_t MELEE_SEETHROUGH_SKIPPED() { return N::Invoke<0x6F0CB58B6DB82155, uint32_t>(); } // 0D6CA79EEEBD8CA3 65376C9B
  static void _0xAAFD8D273DA4C304() { N::Invoke<0xAAFD8D273DA4C304, void>(); } // D801CC02177FA3F1 9CBA682A
  static uint32_t _0x2C74F08101B1C2DB() { return N::Invoke<0x2C74F08101B1C2DB, uint32_t>(); } // 1BBC135A4D25EDDE
  static uint32_t _0x3E8A766FEC679390(uint32_t p0) { return N::Invoke<0x3E8A766FEC679390, uint32_t>(p0); } // 3DEC726C25A11BAC 3B15D33C
  static uint32_t _0x0AB50E21A4AEE25C5() { return N::Invoke<0xAB50E21A4AEE25C5, uint32_t>(); } // 0C0C4E81E1AC60A0 EC5D0317
  static bool _0xCAAD27647F24E07C(uint32_t p0) { return N::Invoke<0xCAAD27647F24E07C, bool>(p0); } // 759650634F07B6B4 25D569EB
  static uint32_t _0x985B1F2F278B1110(uint32_t p0) { return N::Invoke<0x985B1F2F278B1110, uint32_t>(p0); } // CB82A0BF0E3E3265 CFCDC518
  static void _0xD1C4DEF84114A0EA() { N::Invoke<0xD1C4DEF84114A0EA, void>(); } // 6A12D88881435DCA 108F36CC
  static void _0xF228D122DDE60FF6(bool p0, uint32_t p1) { N::Invoke<0xF228D122DDE60FF6, void>(p0, p1); } // 1072F115DAB0717E E9F2B68F
  static uint32_t GET_MAXIMUM_NUMBER_OF_PHOTOS() { return N::Invoke<0x3E50D1C7A457E0ED, uint32_t>(); } // 34D23450F028B0BF 727AA63F
  static uint32_t _0x34902F6101E02583() { return N::Invoke<0x34902F6101E02583, uint32_t>(); } // DC54A7AF8B3A14EF 239272BD
  static uint32_t _0x8AB089A8C6D05C26() { return N::Invoke<0x8AB089A8C6D05C26, uint32_t>(); } // 473151EBC762C6DA 21DBF0C9
  static uint32_t _0x7B543A46F61EDB11(uint32_t p0) { return N::Invoke<0x7B543A46F61EDB11, uint32_t>(p0); } // 2A893980E96B659A 199FABF0
  static uint32_t _0xB6EB2C2CB96040D7(uint32_t p0) { return N::Invoke<0xB6EB2C2CB96040D7, uint32_t>(p0); } // F5BED327CEA362B1 596B900D
  static void _0xFDD88F7A47904AE7() { N::Invoke<0xFDD88F7A47904AE7, void>(); } // 4AF92ACD3141D96C C9EF81ED
  static uint32_t _0x582E661A4506828E(uint32_t p0) { return N::Invoke<0x582E661A4506828E, uint32_t>(p0); } // E791DF1F73ED2C8B 9D84554C
  static uint32_t _0x2AC460AF1B51B2EF(uint32_t p0) { return N::Invoke<0x2AC460AF1B51B2EF, uint32_t>(p0); } // EC72C258667BE5EA 9C106AD9
  static uint32_t _0xB1750848490A12B4(uint32_t p0) { return N::Invoke<0xB1750848490A12B4, uint32_t>(p0); } // 40AFB081F8ADD4EE 762E5C5F
  static uint32_t _0xA857F31BE182312C() { return N::Invoke<0xA857F31BE182312C, uint32_t>(); } // F49E9A9716A04595
  static void DRAW_LIGHT_WITH_RANGE(float p0, float p1, float p2, uint32_t p3, uint32_t p4, uint32_t p5, float p6, float p7) { N::Invoke<0x28ACAFB3A95CA7D9, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // F2A1B2771A01DBD4 6A396E9A
  static void DRAW_SPOT_LIGHT(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, float p9, float p10, float p11, float p12, float p13) { N::Invoke<0xD7DD9D04729ACCDD, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // D0F64B265C8C8B33 BDBC410C
  static void _0xCED07345ADC597CD(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8, float p9, float p10, float p11, float p12, float p13, uint32_t p14) { N::Invoke<0xCED07345ADC597CD, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 5BCA583A583194DB 32BF9598
  static void _0xA8DBEE4E858BDDCC(float p0) { N::Invoke<0xA8DBEE4E858BDDCC, void>(p0); } // C9B18B4619F48F7B 93628786
  static uint32_t _0xA315118F294C9904() { return N::Invoke<0xA315118F294C9904, uint32_t>(); } // DEADC0DEDEADC0DE
  static void DRAW_MARKER(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13, uint32_t p14, uint32_t p15, uint32_t p16, bool p17, bool p18, uint32_t p19, bool p20, uint32_t *p21, uint32_t *p22, bool p23) { N::Invoke<0x4F390C719D267402, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23); } // 28477EC23D892089 48D84A02
  static uint32_t CREATE_CHECKPOINT(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { return N::Invoke<0x7071B27329D1D1F7, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0134F0835AB6BFCB F541B690
  static void _0x74CA264D09508BD5(uint32_t p0, float p1) { N::Invoke<0x74CA264D09508BD5, void>(p0, p1); } // 4B5B4DA5D79F1943 80151CCF
  static void SET_CHECKPOINT_CYLINDER_HEIGHT(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x7D680F994E42D835, void>(p0, p1, p2, p3); } // 2707AAE9D9297D89 FF0F9B22
  static void SET_CHECKPOINT_RGBA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xB51199C40AB67929, void>(p0, p1, p2, p3, p4); } // 7167371E8AD747F7 EF9C8CB3
  static void _0xBEFD6AD8026C8E77(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xBEFD6AD8026C8E77, void>(p0, p1, p2, p3, p4); } // B9EA40907C680580 A5456DBB
  static void _0x66555DABC55918CA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x66555DABC55918CA, void>(p0, p1, p2, p3, p4, p5, p6); } // F51D36185993515D 20EABD0F
  static void _0xDBA93290ABCCC836(uint32_t p0) { N::Invoke<0xDBA93290ABCCC836, void>(p0); } // 615D3925E87A3B26 1E3A3126
  static void DELETE_CHECKPOINT(uint32_t p0) { N::Invoke<0x7D8A50215F755A70, void>(p0); } // F5ED37F54CD4D52E B66CF3CA
  static void _0x2C60BA5D2749BC8B(bool p0) { N::Invoke<0x2C60BA5D2749BC8B, void>(p0); } // 22A249A53034450A 932FDB81
  static void _0xC45C67030F9898CC(bool p0) { N::Invoke<0xC45C67030F9898CC, void>(p0); } // DC459CFA0CCE245B 7E946E87
  static void REQUEST_STREAMED_TEXTURE_DICT(uint32_t *p0, bool p1) { N::Invoke<0x685EB3667D702B92, void>(p0, p1); } // DFA2EF8E04127DD5 4C9B035F
  static bool HAS_STREAMED_TEXTURE_DICT_LOADED(uint32_t *p0) { return N::Invoke<0x31920D7070131373, bool>(p0); } // 0145F696AAAAD2E4 3F436EEF
  static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uint32_t *p0) { N::Invoke<0xB6A951E6C2922F87, void>(p0); } // BE2CACCF5A8AA805 F07DDA38
  static void DRAW_RECT(float p0, float p1, float p2, float p3, int p4, int p5, int p6, int p7) { N::Invoke<0x545012F14516B7DC, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // 3A618A217E5154F0 DD2BFC77
  static void _0xED73E1F1A255F54E(bool p0) { N::Invoke<0xED73E1F1A255F54E, void>(p0); } // C6372ECD45D73BCD F8FBCC25
  static void _0x70F78D7490C1013(uint32_t p0) { N::Invoke<0x70F78D7490C1013, void>(p0); } // 61BB1D9B3A95D802 ADF81D24
  static void _0xF44A12A4047C7C0C(bool p0, uint32_t p1) { N::Invoke<0xF44A12A4047C7C0C, void>(p0, p1); } // B8A850F20A067EB6 228A2598
  static void _0x5B8A72A0C65F3377() { N::Invoke<0x5B8A72A0C65F3377, void>(); } // E3A3DB414A373DAB 3FE33BD6
  static void _0xBC1C1140DB6D4E5C(float p0, float p1, float p2, float p3) { N::Invoke<0xBC1C1140DB6D4E5C, void>(p0, p1, p2, p3); } // F5A2C681787E579D 76C641E4
  static uint32_t _0x21734E5EF7E6EAD2() { return N::Invoke<0x21734E5EF7E6EAD2, uint32_t>(); } // 6DD8F5AA635EB4B2
  static float _0x50136A6732A35B54() { return N::Invoke<0x50136A6732A35B54, float>(); } // BAF107B6BB2C97F0 3F0D1A6F
  static void DRAW_SPRITE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10) { N::Invoke<0x23546A353B2D8470, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // E7FFAE5EBF23D890 1FEC16B0
  static uint32_t ADD_ENTITY_ICON(uint32_t p0, uint32_t *p1) { return N::Invoke<0xA50BB1E007C49DB6, uint32_t>(p0, p1); } // 9CD43EEE12BF4DD0 F3027D21
  static void SET_ENTITY_ICON_VISIBILITY(uint32_t p0, bool p1) { N::Invoke<0x20589A84B2681072, void>(p0, p1); } // E0E8BEECCA96BA31 D1D2FD52
  static void SET_ENTITY_ICON_COLOR(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x1F298A2384ADC13C, void>(p0, p1, p2, p3, p4); } // 1D5F595CCAE2E238 6EE1E946
  static void SET_DRAW_ORIGIN(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x45D4D211A74BF155, void>(p0, p1, p2, p3); } // AA0008F3BBB8F416 E10198D5
  static void CLEAR_DRAW_ORIGIN() { N::Invoke<0x246AE65A8A3953B0, void>(); } // FF0B610F6BE0D7AF DD76B263
  static void ATTACH_TV_AUDIO_TO_ENTITY(uint32_t p0) { N::Invoke<0xEA75A8248D29A0B1, void>(p0); } // 845BAD77CC770633 784944DB
  static void SET_TV_AUDIO_FRONTEND(bool p0) { N::Invoke<0x56923E4D0D3E587, void>(p0); } // 113D2C5DC57E1774 2E0DFA35
  static uint32_t LOAD_MOVIE_MESH_SET(uint32_t *p0) { return N::Invoke<0xC63DE9DBF1142552, uint32_t>(p0); } // B66064452270E8F1 9627905C
  static void RELEASE_MOVIE_MESH_SET(uint32_t p0) { N::Invoke<0x8EC9D969ACC9F81E, void>(p0); } // EB119AA014E89183 4FA5501D
  static uint32_t _0x8EE113F661600791(uint32_t p0) { return N::Invoke<0x8EE113F661600791, uint32_t>(p0); } // 9B6E70C5CEEF4EEB 9D5D9B38
  static void GET_SCREEN_RESOLUTION(int *p0, int *p1) { N::Invoke<0xF11D9F31BB92168A, void>(p0, p1); } // 888D57E407E63624 29F3572F
  static uint32_t _0x78DDF81F469CB01D() { return N::Invoke<0x78DDF81F469CB01D, uint32_t>(); } // 873C9F3104101DD3
  static uint32_t _0x52696228E705571E() { return N::Invoke<0x52696228E705571E, uint32_t>(); } // F1307EF624A80D87
  static uint32_t _0x22DC4083586C59ED() { return N::Invoke<0x22DC4083586C59ED, uint32_t>(); } // B2EBE8CBC58B90E9
  static bool GET_IS_WIDESCREEN() { return N::Invoke<0xF10900B9F5120CA, bool>(); } // 30CF4BDA4FCB1905 EC717AEF
  static bool GET_IS_HIDEF() { return N::Invoke<0x48D3C3F34328B8BB, bool>(); } // 84ED31191CC5D2C9 1C340359
  static uint32_t _0x9F9A89E44F916840() { return N::Invoke<0x9F9A89E44F916840, uint32_t>(); } // EFABC7722293DA7C
  static void SET_NIGHTVISION(bool p0) { N::Invoke<0xF53D5E6CD565E923, void>(p0); } // 18F621F7A5B1F85D D1E5565F
  static uint32_t _0x2EF6E38E4D08A1CF() { return N::Invoke<0x2EF6E38E4D08A1CF, uint32_t>(); } // 35FB78DC42B7BD21
  static uint32_t _0x3B38C9E2CD147710() { return N::Invoke<0x3B38C9E2CD147710, uint32_t>(); } // 2202A3F42C8E5F79 62619061
  static uint32_t _0x1DCF56A472637FD() { return N::Invoke<0x1DCF56A472637FD, uint32_t>(); } // EF398BEEE4EF45F9
  static void SET_NOISEOVERIDE(bool p0) { N::Invoke<0x7014A901C58C99A7, void>(p0); } // E787BF1C5CF823C9 D576F5DD
  static void SET_NOISINESSOVERIDE(float p0) { N::Invoke<0x45648205B6DBF7FA, void>(p0); } // CB6A7C3BB17A0C67 046B62D9
  static bool _0xDB39618306E15461(float p0, float p1, float p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0xDB39618306E15461, bool>(p0, p1, p2, p3, p4); } // 34E82F05DF2974F5 1F950E4B
  static Vector3 GET_TEXTURE_RESOLUTION(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x63A8F87EFE6A0289, Vector3>(p0, p1); } // 35736EE65BD00C11 096DAA4D
  static void _0x9CF34E9211C26211(float p0) { N::Invoke<0x9CF34E9211C26211, void>(p0); } // E2892E7E55D7073A 455F1084
  static void SET_FLASH(float p0, float p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xA923D2134B4FAF96, void>(p0, p1, p2, p3, p4); } // 0AB84296FED9CFC6 7E55A1EE
  static void _0x9C5F776D213D0667() { N::Invoke<0x9C5F776D213D0667, void>(); } // 3669F1B198DCAA4F 0DCC0B8B
  static void _0x66DC587849288AAD(bool p0) { N::Invoke<0x66DC587849288AAD, void>(p0); } // 1268615ACE24D504 AA2A0EAF
  static uint32_t _0x13835674C7F81D3F() { return N::Invoke<0x13835674C7F81D3F, uint32_t>(); } // C35A6D07C93802B2
  static uint32_t CREATE_TRACKED_POINT() { return N::Invoke<0xF93F5137D30B83C5, uint32_t>(); } // E2C9439ED45DEA60 3129C31A
  static void SET_TRACKED_POINT_INFO(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0x66B44E3DC3B17FC3, void>(p0, p1, p2, p3, p4); } // 164ECBB3CF750CB0 28689AA4
  static uint32_t IS_TRACKED_POINT_VISIBLE(uint32_t p0) { return N::Invoke<0x4F18063187932928, uint32_t>(p0); } // C45CCDAAC9221CA8 0BFC4F64
  static void DESTROY_TRACKED_POINT(uint32_t p0) { N::Invoke<0x4E170D2FB0D218D0, void>(p0); } // B25DC90BAD56CA42 14AC675F
  static uint32_t _0xE3F4EDF18E6D3135() { return N::Invoke<0xE3F4EDF18E6D3135, uint32_t>(); } // BE197EAA669238F4
  static uint32_t _0x9F4CF92F8CA02D68() { return N::Invoke<0x9F4CF92F8CA02D68, uint32_t>(); } // 61F95E5BB3E0A8C6
  static uint32_t _0x69F2920076C65EBA() { return N::Invoke<0x69F2920076C65EBA, uint32_t>(); } // AE51BC858F32BA66
  static uint32_t _0x17E93DCAD08898DE() { return N::Invoke<0x17E93DCAD08898DE, uint32_t>(); } // 649C97D52332341A
  static uint32_t _0x314915A031B25E35() { return N::Invoke<0x314915A031B25E35, uint32_t>(); } // 2C42340F916C5930
  static uint32_t _0x477790818E316E6E() { return N::Invoke<0x477790818E316E6E, uint32_t>(); } // 14FC5833464340A8
  static uint32_t _0xA14F583527F01AE4() { return N::Invoke<0xA14F583527F01AE4, uint32_t>(); } // 218BA067D249DEA
  static uint32_t _0xA3C8CE0F5A70F7B3() { return N::Invoke<0xA3C8CE0F5A70F7B3, uint32_t>(); } // 1612C45F9E3E0D44
  static uint32_t _0x8A6378AFB48BCE3A() { return N::Invoke<0x8A6378AFB48BCE3A, uint32_t>(); } // 5DEBD9C4DC995692
  static uint32_t _0x31EA28546239EB62() { return N::Invoke<0x31EA28546239EB62, uint32_t>(); } // 6D955F6A9E0295B1
  static uint32_t _0x1A15797D7222B9D0() { return N::Invoke<0x1A15797D7222B9D0, uint32_t>(); } // 302C91AB2D477F7E
  static void _0x056D29F96CA2CFAC2() { N::Invoke<0x56D29F96CA2CFAC2, void>(); } // 03FC694AE06C5A20 48F16186
  static uint32_t _0x56E1BED9378089F() { return N::Invoke<0x56E1BED9378089F, uint32_t>(); } // D2936CAB8B58FCBD
  static void _0x91B48F84D0BA74F4(float p0) { N::Invoke<0x91B48F84D0BA74F4, void>(p0); } // 5F0F3F56635809EF 13D4ABC0
  static void _0x2F7B7F11BFA91858(float p0) { N::Invoke<0x2F7B7F11BFA91858, void>(p0); } // 5E9DAF5A20F15908 D2157428
  static void _0x5136348C9D261DE9(float p0) { N::Invoke<0x5136348C9D261DE9, void>(p0); } // 36F6626459D91457 C07C64C9
  static void _0xDA6A2AC41AC1A31(bool p0) { N::Invoke<0xDA6A2AC41AC1A31, void>(p0); } // 80ECBC0C856D3B0B FE903D0F
  static uint32_t _0x73B5CB51D47B2FC2() { return N::Invoke<0x73B5CB51D47B2FC2, uint32_t>(); } // 25FC3E33A31AD0C9
  static void _0x5A899C81470E0A8B(uint32_t *p0) { N::Invoke<0x5A899C81470E0A8B, void>(p0); } // B11D94BC55F41932 DE10BA1F
  static uint32_t _0x9EC66FB007926486() { return N::Invoke<0x9EC66FB007926486, uint32_t>(); } // 27CB772218215325
  static void _0xB97C35D1E3075527(bool p0) { N::Invoke<0xB97C35D1E3075527, void>(p0); } // 6DDBF9DFFC4AC080 9F470BE3
  static void _0x2A8F1AD08719510B(bool p0) { N::Invoke<0x2A8F1AD08719510B, void>(p0); } // D39D13C9FEBF0511 4A124267
  static void _0x088E2A0798E62EE30(float p0) { N::Invoke<0x88E2A0798E62EE30, void>(p0); } // 02AC28F3A01FA04A B19B2764
  static void _0x01BC45407BA383C04(bool p0) { N::Invoke<0x1BC45407BA383C04, void>(p0); } // 0AE73D8DF3A762B2 342FA2B4
  static void _0x473F5BAF845F059F(bool p0) { N::Invoke<0x473F5BAF845F059F, void>(p0); } // A51C4B86B71652AE 5D3BFFC9
  static void _0x9417BA52DA2D514(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8) { N::Invoke<0x9417BA52DA2D514, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 312342E1A4874F3F D9653728
  static void _0xCF6213ACDC45391C(float p0, float p1, float p2) { N::Invoke<0xCF6213ACDC45391C, void>(p0, p1, p2); } // 2485D34E50A22E84 72BA8A14
  static void _0x39A32BF6ADF18776(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { N::Invoke<0x39A32BF6ADF18776, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 12995F2E53FFA601 804F444C
  static void _0xE2279CC67FF94F4D(uint32_t p0, uint32_t p1) { N::Invoke<0xE2279CC67FF94F4D, void>(p0, p1); } // DBAA5EC848BA2D46 BB1A1294
  static void _0x338298CD25420E76(bool p0) { N::Invoke<0x338298CD25420E76, void>(p0); } // C0416B061F2B7E5E 1A1A72EF
  static void _0xB468C1E2C1B10752(uint32_t p0, float p1, float p2, float p3, float p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { N::Invoke<0xB468C1E2C1B10752, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // B1BB03742917A5D6 3BB12B75
  static void _0x38ED63CBE2605429(float p0, float p1, float p2, float p3, float p4) { N::Invoke<0x38ED63CBE2605429, void>(p0, p1, p2, p3, p4); } // 9CFDD90B2B844BF7 4EA70FB4
  static void _0x0E431BB222891DA4B(bool p0) { N::Invoke<0xE431BB222891DA4B, void>(p0); } // 06F761EA47C1D3ED 0D830DC7
  static float _0x8F7D0A20AA4AB6D8() { return N::Invoke<0x8F7D0A20AA4AB6D8, float>(); } // A4819F5E23E2FFAD A08B46AD
  static Vector3 _0xB7776811D2BB4130(uint32_t p0) { return N::Invoke<0xB7776811D2BB4130, Vector3>(p0); } // A4664972A9B8F8BA ECD470F0
  static void SET_SEETHROUGH(bool p0) { N::Invoke<0xF3598251A407E6CC, void>(p0); } // 7E08924259E08CE0 74D4995C
  static uint32_t _0x2A1D41D4A54FCF77() { return N::Invoke<0x2A1D41D4A54FCF77, uint32_t>(); } // 44B80ABAB9D80BD3 1FE547F2
  static uint32_t _0x6B7C4B29A493B14A() { return N::Invoke<0x6B7C4B29A493B14A, uint32_t>(); } // 70A64C0234EF522C
  static void _0xB2CBFE353440CF17(uint32_t p0, float p1) { N::Invoke<0xB2CBFE353440CF17, void>(p0, p1); } // D7D0B00177485411 654F0287
  static void _0xAB7EEF3EB27804E3(float p0) { N::Invoke<0xAB7EEF3EB27804E3, void>(p0); } // B3C641F3630BF6DA F6B837F0
  static float _0x862C769A6453B034() { return N::Invoke<0x862C769A6453B034, float>(); } // E59343E9E96529E7 D906A3A9
  static void _0x6D3924BD726B8F3E(bool p0) { N::Invoke<0x6D3924BD726B8F3E, void>(p0); } // E63D7C6EECECB66B D34A6CBA
  static void _0xDD3B62EEE458AF30(uint32_t p0) { N::Invoke<0xDD3B62EEE458AF30, void>(p0); } // E3E2C1B4C59DBC77 D8CC7221
  static bool _0x6B7FB6A615559EA(float p0) { return N::Invoke<0x6B7FB6A615559EA, bool>(p0); } // A328A24AAA6B7FDC 5604B890
  static bool _0x3970ED8539C5C98D(float p0) { return N::Invoke<0x3970ED8539C5C98D, bool>(p0); } // EFACC8AEF94430D5 46617502
  static void _0x72976CDDA1F5BCEE() { N::Invoke<0x72976CDDA1F5BCEE, void>(); } // DE81239437E8C5A8 DB7AECDA
  static float IS_PARTICLE_FX_DELAYED_BLINK() { return N::Invoke<0xD611F2C9075F679D, float>(); } // 5CCABFFCA31DDE33 EA432A94
  static bool _0x7626713868831C3F() { return N::Invoke<0x7626713868831C3F, bool>(); } // 7B226C785A52A0A9 926B8734
  static void _0x897404EB55F42812(bool p0) { N::Invoke<0x897404EB55F42812, void>(p0); } // DFC252D8A3E15AB7 30ADE541
  static uint32_t _0xFAA55C2BB8498905() { return N::Invoke<0xFAA55C2BB8498905, uint32_t>(); } // EB3DAC2C86001E5E
  static void _0x5A9FD1B70064B323() { N::Invoke<0x5A9FD1B70064B323, void>(); } // E1C8709406F2C41C 0113EAE4
  static void _0x9BB1107705A05418() { N::Invoke<0x9BB1107705A05418, void>(); } // 851CD923176EBA7C DCBA251B
  static void _0x773732DA9B0D7CF8(bool p0, bool p1, float p2, float p3, float p4, float p5) { N::Invoke<0x773732DA9B0D7CF8, void>(p0, p1, p2, p3, p4, p5); } // BA3D65906822BED5 513D444B
  static bool _0x7BACFCD96F9E7AF4(bool p0) { return N::Invoke<0x7BACFCD96F9E7AF4, bool>(p0); } // 7AC24EAB6D74118D B2410EAB
  static uint32_t _0x2D37C1B5BFC1B3D1() { return N::Invoke<0x2D37C1B5BFC1B3D1, uint32_t>(); } // BCEDB009461DA156 5AB94128
  static bool _0x769682944C6C19BF(const char *p0, bool p1) { return N::Invoke<0x769682944C6C19BF, bool>(p0, p1); } // 27FEB5254759CDE3 D63FCB3E
  static bool START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char *p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9, bool p10) { return N::Invoke<0x6F50EB359FDCCDEF, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 25129531F77B9ED3 DD79D679
  static uint32_t _0x6E09D9CD363E3710() { return N::Invoke<0x6E09D9CD363E3710, uint32_t>(); } // F56B8137DF10135D
  static uint32_t START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, bool p10, bool p11, bool p12) { return N::Invoke<0x34FFC11E8AD10E0E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0E7E72961BA18619 53DAEF4E
  static uint32_t _0xEE231315BC96A10D(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, bool p10, bool p11, bool p12) { return N::Invoke<0xEE231315BC96A10D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // A41B6A43642AC2CF 161780C1
  static bool START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10, bool p11) { return N::Invoke<0x8BCDEA8221B6D08A, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0D53A3B8DA0809D2 9604DAD4
  static uint32_t _0xA9513ECB51D0CD91() { return N::Invoke<0xA9513ECB51D0CD91, uint32_t>(); } // C95EB1DB6E92113D
  static void _0x4A6FD8BBD9FD972C(float p0, float p1, float p2) { N::Invoke<0x4A6FD8BBD9FD972C, void>(p0, p1, p2); } // 26143A59EF48B262 7B689E20
  static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float p0) { N::Invoke<0x59DA99BF43B66385, void>(p0); } // 77168D722C58B2FC 497EAFF2
  static uint32_t _0xBEC45683E225C647() { return N::Invoke<0xBEC45683E225C647, uint32_t>(); } // 8CDE909A0370BB3A
  static uint32_t START_PARTICLE_FX_LOOPED_AT_COORD(const char *p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9, bool p10, bool p11) { return N::Invoke<0x3F2250BCCDDD976F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // E184F4F0DC5910E7 D348E3E6
  static uint32_t START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8, float p9, bool p10, bool p11, bool p12) { return N::Invoke<0x90FEA1BBBFEF166B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // F28DA9F38CD1787C F8FC196F
  static uint32_t START_PARTICLE_FX_LOOPED_ON_ENTITY(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10, bool p11) { return N::Invoke<0xB9B1EE085AEABF71, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 1AE42C1660FD6517 0D06FF62
  static uint32_t _0x707FE98E507B694() { return N::Invoke<0x707FE98E507B694, uint32_t>(); } // C6EB449E33977F0B
  static uint32_t _0xE343AFB41847074(const char *p0, uint32_t p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10, bool p11) { return N::Invoke<0xE343AFB41847074, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 6F60E89A7B64EE1D 110752B2
  static uint32_t _0x93C35F05B9681A93() { return N::Invoke<0x93C35F05B9681A93, uint32_t>(); } // DDE23F30CC5A0F03
  static void STOP_PARTICLE_FX_LOOPED(uint32_t p0, bool p1) { N::Invoke<0x9F5923D000431FF4, void>(p0, p1); } // 8F75998877616996 D245455B
  static void REMOVE_PARTICLE_FX(uint32_t p0, bool p1) { N::Invoke<0x931F7A629AC7E1A4, void>(p0, p1); } // C401503DFE8D53CF 6BA48C7E
  static void REMOVE_PARTICLE_FX_FROM_ENTITY(uint32_t p0) { N::Invoke<0xE1D0EA3F43D19F6A, void>(p0); } // B8FEAEEBCC127425 CEDE52E9
  static void REMOVE_PARTICLE_FX_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xAC2FF55967985A8, void>(p0, p1, p2, p3); } // DD19FA1C6D657305 7EB8F275
  static bool DOES_PARTICLE_FX_LOOPED_EXIST(uint32_t p0) { return N::Invoke<0xED36ED704A7BADAF, bool>(p0); } // 74AFEF0D2E1E409B CBF91D2A
  static void SET_PARTICLE_FX_LOOPED_OFFSETS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x6E729891A97DE, void>(p0, p1, p2, p3, p4, p5, p6); } // F7DDEBEC43483C43 641F7790
  static void SET_PARTICLE_FX_LOOPED_EVOLUTION(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x64FF112E4261C4A8, void>(p0, p1, p2); } // 5F0C4B5B1C393BE2 1CBC1373
  static void SET_PARTICLE_FX_LOOPED_COLOUR(uint32_t p0, float p1, float p2, float p3, bool p4) { N::Invoke<0x66EF66FAA0B87448, void>(p0, p1, p2, p3, p4); } // 7F8F65877F88783B 5219D530
  static void SET_PARTICLE_FX_LOOPED_ALPHA(uint32_t p0, float p1) { N::Invoke<0x6735033F50C34C82, void>(p0, p1); } // 726845132380142E 5ED49BE1
  static void SET_PARTICLE_FX_LOOPED_SCALE(uint32_t p0, float p1) { N::Invoke<0x28C5B36109EFBE55, void>(p0, p1); } // B44250AAA456492D 099B8B49
  static void _0x8C0266B536F279D(uint32_t p0, float p1) { N::Invoke<0x8C0266B536F279D, void>(p0, p1); } // DCB194B85EF7B541 233DE879
  static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(bool p0) { N::Invoke<0xBFA7DD5BAA27D9E3, void>(p0); } // EEC4047028426510 19EC0001
  static void _0x85E9D5AA8BE92173(uint32_t p0, bool p1) { N::Invoke<0x85E9D5AA8BE92173, void>(p0, p1); } // ACEE6F360FC1F6B6 6B125A02
  static void _0x83DA0F8A9E99AD65(uint32_t p0) { N::Invoke<0x83DA0F8A9E99AD65, void>(p0); } // 96EF97DAEB89BEF5 D938DEE0
  static uint32_t _0x380057872CF097CE() { return N::Invoke<0x380057872CF097CE, uint32_t>(); } // 2A251AA48B2B46DB
  static uint32_t _0xEA62961DE9950D17() { return N::Invoke<0xEA62961DE9950D17, uint32_t>(); } // 908311265D42A820
  static void SET_PARTICLE_FX_BLOOD_SCALE(bool p0) { N::Invoke<0xDAA2E8C54920A61F, void>(p0); } // 5F6DF3D92271E8A1 18136DE0
  static void SET_CAMERA_ENDTIME(bool p0) { N::Invoke<0xD768E81B28C868BD, void>(p0); } // D821490579791273 C61C75E9
  static void _0x89E7B07DF6088B7D(bool p0) { N::Invoke<0x89E7B07DF6088B7D, void>(p0); } // 9DCE1F0F78260875 CE8B8748
  static uint32_t _0x8A19D1A60FF04CD7() { return N::Invoke<0x8A19D1A60FF04CD7, uint32_t>(); } // 27E32866E9A5C416
  static uint32_t _0x2E55EFBF3E8D4A36() { return N::Invoke<0x2E55EFBF3E8D4A36, uint32_t>(); } // BB90E12CAC1DAB25
  static uint32_t _0x36F57E2F58DC1A37() { return N::Invoke<0x36F57E2F58DC1A37, uint32_t>(); } // CA4AE345A153D573
  static uint32_t _0x717748748FFF89F1() { return N::Invoke<0x717748748FFF89F1, uint32_t>(); } // 54E22EA2C1956A8D
  static uint32_t _0x1AB70C3BEBF0BDED() { return N::Invoke<0x1AB70C3BEBF0BDED, uint32_t>(); } // 949F397A288B28B3
  static uint32_t _0xE6A6C88CD85E3A42() { return N::Invoke<0xE6A6C88CD85E3A42, uint32_t>(); } // 9B079E5221D984D3
  static void _SET_PTFX_ASSET_NEXT_CALL(const char* name) { N::Invoke<0xC1A9BB4AB4377D0, void>(name); } // 6C38AF3693A69A91
  static uint32_t _0xD88972E26984A04F() { return N::Invoke<0xD88972E26984A04F, uint32_t>(); } // EA1E2D93F6F75ED9
  static uint32_t _0x9E60644385B460EE() { return N::Invoke<0x9E60644385B460EE, uint32_t>(); } // 89C8553DD3274AAE
  static uint32_t _0x5563A0D3F621412B() { return N::Invoke<0x5563A0D3F621412B, uint32_t>(); } // A46B73FAA3460AE1
  static uint32_t _0xD54912F6B2C5CA0C() { return N::Invoke<0xD54912F6B2C5CA0C, uint32_t>(); } // F78B803082D4386F
  static void WASH_DECALS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xC1923CD2A99ABE71, void>(p0, p1, p2, p3, p4); } // 9C30613D50A6ADEF DEECBC57
  static void WASH_DECALS_FROM_VEHICLE(uint32_t p0, float p1) { N::Invoke<0x309AD43ED9007CA9, void>(p0, p1); } // 5B712761429DBC14 2929F11A
  static void FADE_DECALS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x544A537C48F4AD84, void>(p0, p1, p2, p3, p4); } // D77EDADB0420E6E0 F81E884A
  static void REMOVE_DECALS_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x52DD7CA48EBAB1F0, void>(p0, p1, p2, p3); } // 5D6B2D4830A67C62 06A619A0
  static void REMOVE_DECALS_FROM_OBJECT(uint32_t p0) { N::Invoke<0x4C626D7AE9FC890D, void>(p0); } // CCF71CBDDF5B6CB9 8B67DCA7
  static void REMOVE_DECALS_FROM_OBJECT_FACING(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x2A70A4E31BF96773, void>(p0, p1, p2, p3); } // A6F6F70FDC6D144C F4999A55
  static void REMOVE_DECALS_FROM_VEHICLE(uint32_t p0) { N::Invoke<0xB64C52C36E05C792, void>(p0); } // E91F1B65F2B48D57 831D06CA
  static uint32_t ADD_DECAL(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, bool p17, bool p18, bool p19) { return N::Invoke<0xD98C0AB608C86922, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } // B302244A1839BDAD EAD0C412
  static uint32_t ADD_PETROL_DECAL(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x254E324F4284B60A, uint32_t>(p0, p1, p2, p3, p4, p5); } // 4F5212C7AD880DF8 1259DF42
  static void _0x428DE4537BEF6973(float p0) { N::Invoke<0x428DE4537BEF6973, void>(p0); } // 99AC7F0D8B9C893D E3938B0B
  static void _0xD4CEB3D43940A591(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xD4CEB3D43940A591, void>(p0, p1, p2, p3); } // 967278682CB6967A BAEC6ADD
  static void SET_CAMERA_CAMERA_FORWARD() { N::Invoke<0x98A1AE467F832B08, void>(); } // 0A123435A26C36CD CCCA6855
  static void REMOVE_DECAL(uint32_t p0) { N::Invoke<0xCC74D3FECA1F299D, void>(p0); } // ED3F346429CCD659 A4363188
  static bool IS_DECAL_ALIVE(uint32_t p0) { return N::Invoke<0x2E77ECAB357FA4D, bool>(p0); } // C694D74949CAFD0C CDD4A61A
  static float GET_DECAL_WASH_LEVEL(uint32_t p0) { return N::Invoke<0xE2A7A6BC8C694EE2, float>(p0); } // 323F647679A09103 054448EF
  static void _0xCCD2DC0354F10F8C() { N::Invoke<0xCCD2DC0354F10F8C, void>(); } // D9454B5752C857DC EAB6417C
  static void _0xD6DEA917AA2BD0E5() { N::Invoke<0xD6DEA917AA2BD0E5, void>(); } // 27CFB1B1E078CB2D C2703B88
  static void _0x91D6E7068525D028() { N::Invoke<0x91D6E7068525D028, void>(); } // 4B5CFC83122DF602 A706E84D
  static bool _0xEECD6636717FFA3(float p0, float p1, float p2, float p3) { return N::Invoke<0xEECD6636717FFA3, bool>(p0, p1, p2, p3); } // 2F09F7976C512404 242C6A04
  static void _0x867E767515A4AAAC(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x867E767515A4AAAC, void>(p0, p1, p2); } // 8A35C742130C6080 335695CF
  static void _0xBA584655AC23D805(uint32_t p0) { N::Invoke<0xBA584655AC23D805, void>(p0); } // B7ED70C49521A61D 7B786555
  static void MOVE_VEHICLE_DECALS(uint32_t p0, uint32_t p1) { N::Invoke<0xCD4C1D99D7DAEF08, void>(p0, p1); } // 84C8D7C2D30D3280 CE9E6CF2
  static bool _0x6D704D5FBB4AFE38(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13) { return N::Invoke<0x6D704D5FBB4AFE38, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 428BDCB9DA58DA53 12077738
  static void _0xA3682A5845B969C(uint32_t p0, uint32_t p1) { N::Invoke<0xA3682A5845B969C, void>(p0, p1); } // D2300034310557E4 667046A8
  static uint32_t _0x19973CB8923CD353(uint32_t p0, uint32_t p1) { return N::Invoke<0x19973CB8923CD353, uint32_t>(p0, p1); } // FE26117A5841B2FF 4F4D76E8
  static bool _0x0C0D8A6AB4509755B(uint32_t p0, uint32_t p1) { return N::Invoke<0xC0D8A6AB4509755B, bool>(p0, p1); } // 060D935D3981A275 6D58F73B
  static void _0x0CFE00B7A6C55BB77(bool p0) { N::Invoke<0xCFE00B7A6C55BB77, void>(p0); } // 0E4299C549F0D1F1 9BABCBA4
  static void _0x08997DA0100418A1E(bool p0) { N::Invoke<0x8997DA0100418A1E, void>(p0); } // 02369D5C8A51FDCF FDF6D8DA
  static void _0xC1E7E02CAF4DEC8(float p0) { N::Invoke<0xC1E7E02CAF4DEC8, void>(p0); } // 46D1A61A21F566FC 2056A015
  static void _0x11E961581C60D206(uint32_t *p0) { N::Invoke<0x11E961581C60D206, void>(p0); } // 2A2A52824DB96700 0F486429
  static void _0xA7E6D3CA2BA14E7A(float p0) { N::Invoke<0xA7E6D3CA2BA14E7A, void>(p0); } // 1600FD8CF72EBC12 D87CC710
  static void _0x6AE3A65448553ED8() { N::Invoke<0x6AE3A65448553ED8, void>(); } // EFB55E7C25D3B3BE E29EE145
  static uint32_t _0xBC99126059F136FA() { return N::Invoke<0xBC99126059F136FA, uint32_t>(); } // A44FF770DFBC5DAE
  static void DISABLE_VEHICLE_DISTANTLIGHTS(bool p0) { N::Invoke<0xF0DCFEF97D7E124A, void>(p0); } // C9F98AC1884E73A2 7CFAE36F
  static void _0x0E1EF6D0D0D911196(bool p0) { N::Invoke<0xE1EF6D0D0D911196, void>(p0); } // 03300B57FCAC6DDB 60F72371
  static uint32_t _0xE075C4A70AA39CF0() { return N::Invoke<0xE075C4A70AA39CF0, uint32_t>(); } // 98EDF76A7271E4F2
  static uint32_t _0xDE3EB4E74751D636() { return N::Invoke<0xDE3EB4E74751D636, uint32_t>(); } // AEEDAD1420C65CC0
  static uint32_t _0x273FBDA79416AC34() { return N::Invoke<0x273FBDA79416AC34, uint32_t>(); } // 4CC7F0FEA5283FE0
  static uint32_t _0x4C8B4B595ADBB955() { return N::Invoke<0x4C8B4B595ADBB955, uint32_t>(); } // D7021272EB0A451E
  static void SET_TIMECYCLE_MODIFIER(uint32_t *p0) { N::Invoke<0xC268078730F02686, void>(p0); } // 2C933ABF17A1DF41 A81F3638
  static void SET_TIMECYCLE_MODIFIER_STRENGTH(float p0) { N::Invoke<0x7181761BD8C2E2A2, void>(p0); } // 82E7FFCD5B2326B3 458F4F45
  static void SET_TRANSITION_TIMECYCLE_MODIFIER(uint32_t *p0, float p1) { N::Invoke<0x3D579EE31E433B6B, void>(p0, p1); } // 3BCF567485E1971C BB2BA72A
  static void _0x47C3E4FCF4BD1E53(float p0) { N::Invoke<0x47C3E4FCF4BD1E53, void>(p0); } // 1CBA05AE7BD7EE05 56345F6B
  static void CLEAR_TIMECYCLE_MODIFIER() { N::Invoke<0x8611FA16C57B4195, void>(); } // 0F07E7745A236711 8D8DF8EE
  static uint32_t GET_TIMECYCLE_MODIFIER_INDEX() { return N::Invoke<0xEF9CD83E2E2816E8, uint32_t>(); } // FDF3D97C674AFB66 594FEEC4
  static uint32_t _0x91796810B25FDA18() { return N::Invoke<0x91796810B25FDA18, uint32_t>(); } // 459FD2C8D0AB78BC 03C44E4B
  static void PUSH_TIMECYCLE_MODIFIER() { N::Invoke<0xC9DA17E17450CDFC, void>(); } // 58F735290861E6B4 7E082045
  static void POP_TIMECYCLE_MODIFIER() { N::Invoke<0x4A9054971CD84A59, void>(); } // 3C8938D7D872211E 79D7D235
  static void _0xD47995175D08C7DE(uint32_t *p0) { N::Invoke<0xD47995175D08C7DE, void>(p0); } // BBF327DED94E4DEB 85BA15A4
  static void _0x35475C55E4B25340(float p0) { N::Invoke<0x35475C55E4B25340, void>(p0); } // BDEB86F4D5809204 9559BB38
  static void _0x4C1B01F11BFDF31E(uint32_t *p0) { N::Invoke<0x4C1B01F11BFDF31E, void>(p0); } // BF59707B3E5ED531 554BA16E
  static void _0x4AF1E079B1DD4247(uint32_t *p0, uint32_t *p1) { N::Invoke<0x4AF1E079B1DD4247, void>(p0, p1); } // 1A8E2C8B9CF4549C E8F538B5
  static void _0xB0B9362C6F11C7E8(uint32_t p0) { N::Invoke<0xB0B9362C6F11C7E8, void>(p0); } // 15E33297C3E8DC60 805BAB08
  static void _0x22E16589E5408EEE(uint32_t *p0) { N::Invoke<0x22E16589E5408EEE, void>(p0); } // 5096FD9CCB49056D 908A335E
  static void _0x3914030D50832501() { N::Invoke<0x3914030D50832501, void>(); } // 92CCC17A7A2285DA 6776720A
  static uint32_t _0xE1E8A673840DB547() { return N::Invoke<0xE1E8A673840DB547, uint32_t>(); } // BB0527EC6341496D
  static uint32_t _0x8837BD4C5C3C83A7() { return N::Invoke<0x8837BD4C5C3C83A7, uint32_t>(); } // 2C328AF17210F009
  static uint32_t _0xF229F818FB224DAF() { return N::Invoke<0xF229F818FB224DAF, uint32_t>(); } // 2BF72AD5B41AA739
  static uint32_t REQUEST_SCALEFORM_MOVIE(uint32_t *p0) { return N::Invoke<0xAFBDE0BB5C885026, uint32_t>(p0); } // 11FE353CF9733E6F C67E3DCB
  static uint32_t _0x7B272A68AB32BF92(uint32_t *p0) { return N::Invoke<0x7B272A68AB32BF92, uint32_t>(p0); } // C514489CFB8AF806 7CC8057D
  static uint32_t _0x9DC03E762A3D8DF0() { return N::Invoke<0x9DC03E762A3D8DF0, uint32_t>(); } // BD06C611BB9048C2
  static bool HAS_SCALEFORM_MOVIE_LOADED(uint32_t p0) { return N::Invoke<0xE908465F9CDF4F1A, bool>(p0); } // 85F01B8D5B90570E DDFB6448
  static uint32_t _0x7AB91E7FAD3CCF01() { return N::Invoke<0x7AB91E7FAD3CCF01, uint32_t>(); } // C1C5D756FB5F337
  static bool _0x3BFDC6E1F211D4FC(uint32_t p0) { return N::Invoke<0x3BFDC6E1F211D4FC, bool>(p0); } // 8217150E1217EBFD 1DFE8D8A
  static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uint32_t *p0) { N::Invoke<0x86FF04BBB2EC839F, void>(p0); } // 1D132D614DD86811 5FED3BA1
  static void _0xFB7B0F31E496578D(uint32_t p0, bool p1) { N::Invoke<0xFB7B0F31E496578D, void>(p0, p1); } // 6D8EB211944DCE08 18C9DE8D
  static void DRAW_SCALEFORM_MOVIE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { N::Invoke<0x12C58B789779AA4, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 54972ADAF0294A93 48DA6A58
  static void _0x04A383EC377D451D0(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x4A383EC377D451D0, void>(p0, p1, p2, p3, p4); } // 0DF606929C105BE1 7B48E696
  static void _0x884A1FA977CF411B(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x884A1FA977CF411B, void>(p0, p1, p2, p3, p4, p5); } // CF537FDE4FBD4CE5 9C59FC06
  static void _0xA21979D200F559D2(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13) { N::Invoke<0xA21979D200F559D2, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 87D51D72255D4E78 C4F63A89
  static void _0x1FA28ED3F8C3A456(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, uint32_t p13) { N::Invoke<0x1FA28ED3F8C3A456, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 1CE592FDC749D6F5 899933C8
  static void _0xBEEABE099826EB55(uint32_t p0, uint32_t *p1) { N::Invoke<0xBEEABE099826EB55, void>(p0, p1); } // FBD96D87AC96D533 7AB77B57
  static void _0xD4BDFD69787F80FD(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6) { N::Invoke<0xD4BDFD69787F80FD, void>(p0, p1, p2, p3, p4, p5, p6); } // D0837058AE2E4BEE 557EDA1D
  static void _0x938962836F025CE2(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6) { N::Invoke<0x938962836F025CE2, void>(p0, p1, p2, p3, p4, p5, p6); } // 51BC1ED3CC44E8F7 91A7FCEB
  static void _0x22D1B33BDEBAE74A(uint32_t p0, uint32_t *p1, float p2, float p3, float p4, float p5, float p6, uint32_t *p7, uint32_t *p8, uint32_t *p9, uint32_t *p10, uint32_t *p11) { N::Invoke<0x22D1B33BDEBAE74A, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // EF662D8D57E290B1 6EAF56DE
  static bool _0x94719DC00506C475(uint32_t p0, uint32_t *p1) { return N::Invoke<0x94719DC00506C475, bool>(p0, p1); } // 98C494FD5BDFBFD5 5D66CE1E
  static bool _0xF48C88BD1F0007E8(uint32_t p0, uint32_t *p1) { return N::Invoke<0xF48C88BD1F0007E8, bool>(p0, p1); } // F6E48914C7A8694E 215ABBE8
  static bool _0xEDAB0C586C602260(uint32_t *p0) { return N::Invoke<0xEDAB0C586C602260, bool>(p0); } // AB58C27C2E6123C6 F6015178
  static bool _0x9C73B76A7F2108DC(uint32_t *p0) { return N::Invoke<0x9C73B76A7F2108DC, bool>(p0); } // B9449845F73F5E9C 5E219B67
  static void _0xA52FC2467E672B55() { N::Invoke<0xA52FC2467E672B55, void>(); } // C6796A8FFA375E53 02DBF2D7
  static uint32_t _0xD72C1C0D4A044A4() { return N::Invoke<0xD72C1C0D4A044A4, uint32_t>(); } // C50AA39A577AF886 2F38B526
  static bool _0xEB72DB563C7B7566(uint32_t p0) { return N::Invoke<0xEB72DB563C7B7566, bool>(p0); } // 768FF8961BA904D6 5CD7C3C0
  static uint32_t _0x88AE9F0292C2B117(uint32_t p0) { return N::Invoke<0x88AE9F0292C2B117, uint32_t>(p0); } // 2DE7EFA66B906036 2CFB0E6D
  static uint32_t SITTING_TV(uint32_t p0) { return N::Invoke<0xD6A92EF117E06539, uint32_t>(p0); } // E1E258829A885245 516862EB
  static void _0x876C5D0739031E15(uint32_t p0) { N::Invoke<0x876C5D0739031E15, void>(p0); } // C3D0841A0CC546A6 716777CB
  static void _0xA8F7908868900538(float p0) { N::Invoke<0xA8F7908868900538, void>(p0); } // D69736AAE04DB51A 9A01FFDA
  static void _0x5D559A5DDC88A4EF(bool p0) { N::Invoke<0x5D559A5DDC88A4EF, void>(p0); } // C58424BA936EB458 0D4AE8CB
  static void _0x44F4D219F8513945(uint32_t *p0) { N::Invoke<0x44F4D219F8513945, void>(p0); } // 80338406F3475E55 3AC9CB55
  static void _0x113A6F657EE871A3() { N::Invoke<0x113A6F657EE871A3, void>(); } // 362E2D3FE93A9959 386CE0B8
  static void _0xA4B4710FEB8225B8() { N::Invoke<0xA4B4710FEB8225B8, void>(); } // AE4E8157D9ECF087 2E80DB52
  static void _0x66576E79B8E81B87(uint32_t *p0) { N::Invoke<0x66576E79B8E81B87, void>(p0); } // BA7148484BD90365 4DAAD55B
  static void _0x3F8884039D21AA69(uint32_t *p0) { N::Invoke<0x3F8884039D21AA69, void>(p0); } // E83A3E3557A56640 CCBF0334
  static uint32_t _0xC6C1199D410DB606(uint32_t p0) { return N::Invoke<0xC6C1199D410DB606, uint32_t>(p0); } // 5E657EF1099EDD65 91A081A1
  static void _0x7FAE23EFF35AC4FF(uint32_t p0) { N::Invoke<0x7FAE23EFF35AC4FF, void>(p0); } // EC52C631A1831C03 83A9811D
  static void _0xB8D2A401C3795A5D(uint32_t p0) { N::Invoke<0xB8D2A401C3795A5D, void>(p0); } // 9304881D6F6537EA 7AF85862
  static bool _0x6D7831B570D0478A(uint32_t p0) { return N::Invoke<0x6D7831B570D0478A, bool>(p0); } // DF6E5987D2B4D140 79B43255
  static void _0xDE4DF525E7DE1DF3(uint32_t p0) { N::Invoke<0xDE4DF525E7DE1DF3, void>(p0); } // F44A5456AC3F4F97 03D87600
  static bool _0x72EF585C87482B92(uint32_t p0) { return N::Invoke<0x72EF585C87482B92, bool>(p0); } // D1C7CB175E012964 E9183D3A
  static void SET_TV_CHANNEL(uint32_t p0) { N::Invoke<0x43A7A48748D1849, void>(p0); } // BAABBB23EB6E484E 41A8A627
  static uint32_t GET_TV_CHANNEL() { return N::Invoke<0x621284AC8FD0C295, uint32_t>(); } // FC1E275A90D39995 6B96145A
  static void SET_TV_VOLUME(float p0) { N::Invoke<0xBC6BBC64C712F62D, void>(p0); } // 2982BF73F66E9DDC F3504F4D
  static float GET_TV_VOLUME() { return N::Invoke<0x75C910F11FAF0EB6, float>(); } // 2170813D3DD8661B 39555CF0
  static void DRAW_TV_CHANNEL(float p0, float p1, float p2, float p3, float p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { N::Invoke<0x22530A75D2E66DB1, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // FDDC2B4ED3C69DF0 8129EF89
  static void _0x918AE8F31DECBA85(uint32_t p0, uint32_t *p1, bool p2) { N::Invoke<0x918AE8F31DECBA85, void>(p0, p1, p2); } // F7B38B8305F1FE8B B262DE67
  static void _0x438AB20BC279B4E0(uint32_t p0, uint32_t *p1, uint32_t p2) { N::Invoke<0x438AB20BC279B4E0, void>(p0, p1, p2); } // 2201C576FACAEBE8 78C4DCBE
  static void _0x3CCD7CC885F83482(uint32_t p0) { N::Invoke<0x3CCD7CC885F83482, void>(p0); } // BEB3D46BB7F043C0 CBE7068F
  static bool _0x02100B583656B11C8(uint32_t p0) { return N::Invoke<0x2100B583656B11C8, bool>(p0); } // 0AD973CA1E077B60 4D1EB0FB
  static void _0xE82FD3DEBA285AFC(bool p0) { N::Invoke<0xE82FD3DEBA285AFC, void>(p0); } // 74C180030FDE4B69 796DE696
  static void _0xF522BE2842DE4AF0(uint32_t p0) { N::Invoke<0xF522BE2842DE4AF0, void>(p0); } // D1C55B110E4DF534 D99EC000
  static void ENABLE_MOVIE_SUBTITLES(bool p0) { N::Invoke<0xC756F1367BF62795, void>(p0); } // 873FA65C778AD970 C2DEBA3D
  static uint32_t _0xF7E6D453CC7FACAE() { return N::Invoke<0xF7E6D453CC7FACAE, uint32_t>(); } // D3A10FC7FD8D98CD E40A0F1A
  static bool _0x91EF294588FCE8E0(uint32_t *p0) { return N::Invoke<0x91EF294588FCE8E0, bool>(p0); } // F1CEA8A4198D8E9A 2E7D9B98
  static bool _0x2B5B5F84E7AD6B74(uint32_t *p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5) { return N::Invoke<0x2B5B5F84E7AD6B74, bool>(p0, p1, p2, p3, p4, p5); } // 98C4FE6EC34154CA 9A0E3BFE
  static void _0x1F2A7C118177358F() { N::Invoke<0x1F2A7C118177358F, void>(); } // 7A42B2E236E71415 431AA036
  static void _0xE5B2F1E0B6F2E6B3(bool p0) { N::Invoke<0xE5B2F1E0B6F2E6B3, void>(p0); } // 108BE26959A9D9BB 24A7A7F6
  static void _0x64E376505E694B48(bool p0) { N::Invoke<0x64E376505E694B48, void>(p0); } // A356990E161C9E65 A1CB6C94
  static void _0x33BB639B6F03CAFB(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { N::Invoke<0x33BB639B6F03CAFB, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 1C4FC5752BCD8E48 3B637AA7
  static void _0x9D6913AE50BA9388(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { N::Invoke<0x9D6913AE50BA9388, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 5CE62918F8D703C7 DF552973
  static void _0x8EEEED91D5DD768C(uint32_t *p0, uint32_t p1, bool p2) { N::Invoke<0x8EEEED91D5DD768C, void>(p0, p1, p2); } // 2206BF9A37B7F724 1D980479
  static void _0x033D978A3F3EC8BD3(uint32_t *p0) { N::Invoke<0x33D978A3F3EC8BD3, void>(p0); } // 068E835A1D0DC0E3 06BB5CDA
  static bool _0x683A2D790A3425CE(uint32_t *p0) { return N::Invoke<0x683A2D790A3425CE, bool>(p0); } // 36AD3E690DA5ACEB 089D5921
  static void _0xA18B52A0F825A53B() { N::Invoke<0xA18B52A0F825A53B, void>(); } // B4EDDC19532BFB85 4E6D875B
  static uint32_t _0x2BE09E3760E51B64() { return N::Invoke<0x2BE09E3760E51B64, uint32_t>(); } // D2209BE128B5418C
}

namespace STATS
{
  static uint32_t _0x93A68856243C04FA(uint32_t p0) { return N::Invoke<0x93A68856243C04FA, uint32_t>(p0); } // EB0A72181D4AA4AD 84BDD475
  static bool STAT_LOAD(uint32_t p0) { return N::Invoke<0xEE0CC2818C0729A1, bool>(p0); } // A651443F437B1CE6 9E5629F4
  static bool STAT_SAVE(uint32_t p0, bool p1, uint32_t p2) { return N::Invoke<0x79AABEA86A46061, bool>(p0, p1, p2); } // E07BCA305B82D2FD E10A7CA4
  static void _0x6332B422EDEB0AB0(uint32_t p0) { N::Invoke<0x6332B422EDEB0AB0, void>(p0); } // 5688585E6D563CD8 C62406A6
  static bool STAT_LOAD_PENDING(uint32_t p0) { return N::Invoke<0xD162360BA6A2DAEA, bool>(p0); } // A1750FFAFA181661 4E9AC983
  static bool STAT_SAVE_PENDING() { return N::Invoke<0xBEF35FC226ED9FD7, bool>(); } // 7D3A583856F2C5AC C3FD3822
  static bool _0x4B51F5CEBD70DA94() { return N::Invoke<0x4B51F5CEBD70DA94, bool>(); } // BBB6AD006F1BBEA3 A3407CA3
  static uint32_t STAT_DELETE_SLOT(uint32_t p0) { return N::Invoke<0x82B7369F7580459B, uint32_t>(p0); } // 49A49BED12794D70 2F171B94
  static bool _0x0E802DF20297BD521(uint32_t p0) { return N::Invoke<0xE802DF20297BD521, bool>(p0); } // 0D0A9F0E7BD91E3C 7A299C13
  static bool _0xF12A3702A73212B2(uint32_t p0) { return N::Invoke<0xF12A3702A73212B2, bool>(p0); } // 7F2C4CDF2E82DF4C 0BF0F4B2
  static uint32_t _0x25950CA14ECAECB1(uint32_t p0) { return N::Invoke<0x25950CA14ECAECB1, uint32_t>(p0); } // E496A53BA5F50A56 CE6B62B5
  static void _0x78D662AF7CFC00FF(bool p0) { N::Invoke<0x78D662AF7CFC00FF, void>(p0); } // F434A10BA01C37D0 CE7A2411
  static bool _0x671894F2EE31046E(uint32_t p0) { return N::Invoke<0x671894F2EE31046E, bool>(p0); } // 7E6946F68A38B74F 22804C20
  static void _0xACB4E33710F34876(uint32_t p0) { N::Invoke<0xACB4E33710F34876, void>(p0); } // A8733668D1047B51 395D18B1
  static bool _0x247C2938F7556B5F() { return N::Invoke<0x247C2938F7556B5F, bool>(); } // ECB41AC6AB754401 ED7000C8
  static uint32_t _0x450DD8560E441064() { return N::Invoke<0x450DD8560E441064, uint32_t>(); } // 9B4BD21D69B1E609
  static bool _0x4DA0D5B6BC9AB602() { return N::Invoke<0x4DA0D5B6BC9AB602, bool>(); } // C0E0D686DDFC6EAE 099FCC86
  static bool STAT_SET_INT(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0x96B68C67633472DC, bool>(p0, p1, p2); } // B3271D7AB655B441 C9CC1C5C
  static bool STAT_SET_FLOAT(uint32_t p0, float p1, bool p2) { return N::Invoke<0xCD9157C8F655290A, bool>(p0, p1, p2); } // 4851997F37FE9B3C 6CEA96F2
  static bool STAT_SET_BOOL(uint32_t p0, bool p1, bool p2) { return N::Invoke<0xD51A9EE025576399, bool>(p0, p1, p2); } // 4B33C4243DE0C432 55D79DFB
  static bool _0x7FC6BDA12A4C63F5(uint32_t p0, uint32_t *p1, bool p2) { return N::Invoke<0x7FC6BDA12A4C63F5, bool>(p0, p1, p2); } // 17695002FD8B2AE0 C1224AA7
  static bool STAT_SET_DATE(uint32_t p0, uint32_t *p1, uint32_t p2, bool p3) { return N::Invoke<0xFBBF733157EE9ABE, bool>(p0, p1, p2, p3); } // 2C29BFB64F4FCBE4 36BE807B
  static bool STAT_SET_STRING(uint32_t p0, uint32_t *p1, bool p2) { return N::Invoke<0x44311DAE17F82AA1, bool>(p0, p1, p2); } // A87B2335D12531D7 B1EF2E21
  static bool STAT_SET_POS(uint32_t p0, float p1, float p2, float p3, bool p4) { return N::Invoke<0x129A478A35CEE900, bool>(p0, p1, p2, p3, p4); } // DB283FDE680FE72E 1192C9A3
  static bool STAT_SET_MASKED_INT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, bool p4) { return N::Invoke<0xCA2BAAAF7DD1138A, bool>(p0, p1, p2, p3, p4); } // 7BBB1B54583ED410 2CBAA739
  static bool STAT_SET_USER_ID(uint32_t p0, uint32_t *p1, bool p2) { return N::Invoke<0xE2F55E0885F36EDE, bool>(p0, p1, p2); } // 8CDDF1E452BABE11 DBE78ED7
  static bool _0xE58D5A26147E8CDD(uint32_t p0, bool p1) { return N::Invoke<0xE58D5A26147E8CDD, bool>(p0, p1); } // C2F84B7F9C4D0C61 A286F015
  static bool STAT_GET_INT(uint32_t p0, int *p1, uint32_t p2) { return N::Invoke<0x55FFE396AA3CA77A, bool>(p0, p1, p2); } // 767FBC2AC802EF3D 1C6FE43E
  static bool STAT_GET_FLOAT(uint32_t p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0x3E6ED0C6CF9AA077, bool>(p0, p1, p2); } // D7AE6C9C9C6AC54C FCBDA612
  static bool STAT_GET_BOOL(uint32_t p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0xED5C4CADD81A8853, bool>(p0, p1, p2); } // 11B5E6D2AE73F48E 28A3DD2B
  static bool STAT_GET_DATE(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x8CD6BCAFEE2BEE66, bool>(p0, p1, p2, p3); } // 8B0FACEFC36C824B D762D16C
  static uint32_t STAT_GET_STRING(uint32_t p0, uint32_t p1) { return N::Invoke<0x219F85A5D3B5A223, uint32_t>(p0, p1); } // E50384ACC2C3DB74 10CE4BDE
  static bool STAT_GET_POS(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t p4) { return N::Invoke<0x418ABA8839451A73, bool>(p0, p1, p2, p3, p4); } // 350F82CCB186AA1B C846ECCE
  static bool STAT_GET_MASKED_INT(uint32_t p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0xCA43B0981764D75A, bool>(p0, p1, p2, p3, p4); } // 655185A06D9EEAAB E9D9B70F
  static uint32_t STAT_GET_USER_ID(uint32_t p0) { return N::Invoke<0xCABB8E92ADFFD687, uint32_t>(p0); } // 2365C388E393BBE2 E2E8B6BA
  static uint32_t _0xE4AE97D0D3BF8D6C(uint32_t p0) { return N::Invoke<0xE4AE97D0D3BF8D6C, uint32_t>(p0); } // 5473D4195058B2E4 1544B29F
  static bool _0xC9A14C1BB83E798A(uint32_t p0, uint32_t *p1) { return N::Invoke<0xC9A14C1BB83E798A, bool>(p0, p1); } // 69FF13266D7296DA 3507D253
  static void STAT_INCREMENT(uint32_t p0, float p1) { N::Invoke<0x2849EC95E9D69392, void>(p0, p1); } // 9B5A68C6489E9909 DFC5F71E
  static bool _0xB6BC25F70A121E9() { return N::Invoke<0xB6BC25F70A121E9, bool>(); } // 5A556B229A169402 46F21343
  static bool _0x4D4FA6DD490DB8D9() { return N::Invoke<0x4D4FA6DD490DB8D9, bool>(); } // B1D2BB1E1631F5B1 02F283CE
  static bool _0x17BA71D18F6461AA(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x17BA71D18F6461AA, bool>(p0, p1, p2); } // BED9F5693F34ED17 C4110917
  static void _0x2D5C7C5557AC5890(uint32_t p0) { N::Invoke<0x2D5C7C5557AC5890, void>(p0); } // 26D7399B9587FE89 343B27E2
  static void _0x831353F1F40A097C(uint32_t p0) { N::Invoke<0x831353F1F40A097C, void>(p0); } // A78B8FA58200DA56 E3247582
  static uint32_t _0x2E2EDB3B1CA99DB(uint32_t p0) { return N::Invoke<0x2E2EDB3B1CA99DB, uint32_t>(p0); } // E0E854F5280FB769 FD66A429
  static uint32_t _0xC33F84241C8331EF(uint32_t p0) { return N::Invoke<0xC33F84241C8331EF, uint32_t>(p0); } // F2D4B2FE415AAFC3 9B431236
  static uint32_t _0x903E709719C0C924(uint32_t p0) { return N::Invoke<0x903E709719C0C924, uint32_t>(p0); } // 7583B4BE4C5A41B5 347B4436
  static uint32_t _0x7977CBB09204D3E3(uint32_t p0) { return N::Invoke<0x7977CBB09204D3E3, uint32_t>(p0); } // 2CE056FF3723F00B 2C1D6C31
  static void _0x440FD8D333B6B64E(uint32_t p0, uint32_t p1) { N::Invoke<0x440FD8D333B6B64E, void>(p0, p1); } // 68F01422BE1D838F 24DD4929
  static uint32_t _0x3216D1FFC9DAD41E(uint32_t p0) { return N::Invoke<0x3216D1FFC9DAD41E, uint32_t>(p0); } // F4D8E7AC2A27758C DFC25D66
  static uint32_t _0xB5F1DB483A55394A(uint32_t p0) { return N::Invoke<0xB5F1DB483A55394A, uint32_t>(p0); } // 94F12ABF9C79E339 CA160BCC
  static uint32_t _0xA207790667DAE5A1(uint32_t p0, bool p1, bool p2, uint32_t p3) { return N::Invoke<0xA207790667DAE5A1, uint32_t>(p0, p1, p2, p3); } // 80C75307B1C42837 B5BF87B2
  static uint32_t _0xB5B79ECD20995F7D(uint32_t p0, bool p1, bool p2, uint32_t p3) { return N::Invoke<0xB5B79ECD20995F7D, uint32_t>(p0, p1, p2, p3); } // 61E111E323419E07 1F938864
  static uint32_t _0x2E32FF1D139F1210(uint32_t p0, bool p1, bool p2, uint32_t p3) { return N::Invoke<0x2E32FF1D139F1210, uint32_t>(p0, p1, p2, p3); } // C4BB08EE7907471E 3F8E893B
  static uint32_t _0x367FBA1BA3ED6492(uint32_t p0, bool p1, bool p2, uint32_t p3) { return N::Invoke<0x367FBA1BA3ED6492, uint32_t>(p0, p1, p2, p3); } // D16C2AD6B8E32854 FB93C5A2
  static uint32_t _0x6E59129DA6C486E4() { return N::Invoke<0x6E59129DA6C486E4, uint32_t>(); } // BA52FF538ED2BC71
  static uint32_t _0xC3F656700296BFE2() { return N::Invoke<0xC3F656700296BFE2, uint32_t>(); } // 2B4CDCA6F07FF3DA
  static bool STAT_GET_BOOL_MASKED(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x5C2F5514FB69DABE, bool>(p0, p1, p2); } // 10FE3F1B79F9B071 6ACE1B7D
  static bool STAT_SET_BOOL_MASKED(uint32_t p0, bool p1, uint32_t p2, bool p3) { return N::Invoke<0x3F6A3CBDC7B68B4A, bool>(p0, p1, p2, p3); } // 5BC62EC1937B9E5B 7842C4D6
  static void _0x42A9C5CCDC86E4D0(uint32_t *p0, uint32_t p1) { N::Invoke<0x42A9C5CCDC86E4D0, void>(p0, p1); } // 5009DFD741329729 61ECC465
  static void PLAYSTATS_NPC_INVITE(uint32_t *p0) { N::Invoke<0x1B8B3CE5AD7F14DB, void>(p0); } // 93054C88E6AA7C44 598C06F3
  static void PLAYSTATS_AWARD_XP(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x3568096DB3FEBF97, void>(p0, p1, p2); } // 46F917F6B4128FE4 8770017B
  static void PLAYSTATS_RANK_UP(uint32_t p0) { N::Invoke<0xFCC9E561041E87F3, void>(p0); } // C7F2DE41D102BFB4 56AFB9F5
  static void _0x0E9C8BC02F2BC010A() { N::Invoke<0xE9C8BC02F2BC010A, void>(); } // 098760C7461724CD 896CDF8D
  static void _0x53B471E359546EFA(uint32_t p0, uint32_t p1) { N::Invoke<0x53B471E359546EFA, void>(p0, p1); } // A071E0ED98F91286 1A66945F
  static void _0x5ED2509A037BCB27(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x5ED2509A037BCB27, void>(p0, p1, p2, p3, p4); } // C5BE134EC7BA96A0 C960E161
  static void PLAYSTATS_MISSION_STARTED(uint32_t *p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0x45BDED4C92C7BED2, void>(p0, p1, p2, p3); } // C19A2925C34D2231 3AAB699C
  static void PLAYSTATS_MISSION_OVER(uint32_t *p0, uint32_t p1, uint32_t p2, bool p3, bool p4, bool p5) { N::Invoke<0xA5DD6D136099F892, void>(p0, p1, p2, p3, p4, p5); } // 7C4BB33A8CED7324 5B90B5FF
  static void PLAYSTATS_MISSION_CHECKPOINT(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xE608EEE8E0ECC590, void>(p0, p1, p2, p3); } // C900596A63978C1D CDC52280
  static void _0x7D8C98CDE178AB1B(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x7D8C98CDE178AB1B, void>(p0, p1, p2, p3); } // 71862B1D855F32E1 AC2C7C63
  static void _0x2E5A2019426D5BD5(uint32_t p0, uint32_t p1, uint32_t p2, float p3) { N::Invoke<0x2E5A2019426D5BD5, void>(p0, p1, p2, p3); } // 121FB4DDDC2D5291 413539BC
  static void PLAYSTATS_RACE_CHECKPOINT(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x68917B1E78815D1D, void>(p0, p1, p2, p3, p4); } // 9C375C315099DDE4 580D5508
  static bool _0x2B1B2E96D0A31F96(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x2B1B2E96D0A31F96, bool>(p0, p1); } // 6DEE77AFF8C21BD1 489E27E7
  static void PLAYSTATS_MATCH_STARTED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x48A0E2120E6C39F3, void>(p0, p1, p2, p3, p4, p5, p6); } // BC80E22DED931E3D 2BDE85C1
  static void PLAYSTATS_SHOP_ITEM(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0x5C0519B01EF5DAC9, void>(p0, p1, p2, p3, p4); } // 176852ACAAC173D1 A4746384
  static void _0x87046317100E22FB(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x87046317100E22FB, void>(p0, p1, p2, p3, p4, p5); } // 1CAE5D2E3F9A07F0 6602CED6
  static uint32_t _0x6438973EDB5FF9B4() { return N::Invoke<0x6438973EDB5FF9B4, uint32_t>(); } // AFC7E5E075A96F46
  static void _0x2A3D782737F77576(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x2A3D782737F77576, void>(p0, p1, p2, p3); } // CB00196B31C39EB1 759E0EC9
  static void _0x251C2AEE344B797(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x251C2AEE344B797, void>(p0, p1, p2, p3); } // 2B69F5074C894811 62073DF7
  static void _0x7CD0D54A2E0DE26E(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x7CD0D54A2E0DE26E, void>(p0, p1, p2); } // 7EEC2A316C250073 30558CFD
  static void _0x65107341C7C72344(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { N::Invoke<0x65107341C7C72344, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // ADDD1C754E2E2914 06CE3692
  static void _0xC90C6CA3A1F613FC(uint32_t p0) { N::Invoke<0xC90C6CA3A1F613FC, void>(p0); } // 79AB33F0FBFAC40C 8D5C7B37
  static void _0x70E9569CCCC899FA(uint32_t p0, uint32_t p1) { N::Invoke<0x70E9569CCCC899FA, void>(p0, p1); } // DDF24D535060F811 37D152BB
  static void PLAYSTATS_FRIEND_ACTIVITY(uint32_t p0, uint32_t p1) { N::Invoke<0x996AAE283A2A8195, void>(p0, p1); } // 0F71DE29AB2258F1 D1FA1BDB
  static void PLAYSTATS_ODDJOB_DONE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x1B7A159B4B9FCB71, void>(p0, p1, p2); } // 69DEA3E9DB727B4C FE14A8EA
  static void PLAYSTATS_PROP_CHANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xF3E810922950FE10, void>(p0, p1, p2, p3); } // BA739D6D5A05D6E7 25740A1D
  static void PLAYSTATS_CLOTH_CHANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xFE9732FB3A3FB268, void>(p0, p1, p2, p3, p4); } // 34B973047A2268B9 3AFF9E58
  static void _0x6FB4C72F8D7410F7(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x6FB4C72F8D7410F7, void>(p0, p1, p2); } // E95C8A1875A02CA4 79716890
  static void PLAYSTATS_CHEAT_APPLIED(uint32_t *p0) { N::Invoke<0x7CECFE2848241F2, void>(p0); } // 6058665D72302D3F 345166F3
  static void _0x7E9EACA5CA053C2F(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x7E9EACA5CA053C2F, void>(p0, p1, p2, p3); } // F8C54A461C3E11DC 04181752
  static uint32_t _0xB1F49C6DE38473AF() { return N::Invoke<0xB1F49C6DE38473AF, uint32_t>(); } // F5BB8DAC426A52C0
  static void _0x5BE345AC9B290FAA(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0x5BE345AC9B290FAA, void>(p0, p1, p2, p3); } // A736CF7FB7C5BFF4 31002201
  static void _0xA0CB50CD87976698(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3) { N::Invoke<0xA0CB50CD87976698, void>(p0, p1, p2, p3); } // 14E0B2D1AD1044E0 DDD1F1F3
  static void _0x4E0B2BF0674F5668(uint32_t p0, uint32_t *p1) { N::Invoke<0x4E0B2BF0674F5668, void>(p0, p1); } // 90D0622866E80445 66FEB701
  static void _0xAC10EBACFAE00D6B(uint32_t p0) { N::Invoke<0xAC10EBACFAE00D6B, void>(p0); } // 5DA3A8DE8CB6226F 9E2B9522
  static uint32_t _0x3AC750B09D52CB79() { return N::Invoke<0x3AC750B09D52CB79, uint32_t>(); } // D1032E482629049E
  static uint32_t _0x5AAF8D512BB1AFB4() { return N::Invoke<0x5AAF8D512BB1AFB4, uint32_t>(); } // F4FF020A08BC8863
  static uint32_t _0x248AE4C09909A528() { return N::Invoke<0x248AE4C09909A528, uint32_t>(); } // 46326E13DA4E0546
  static uint32_t LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uint32_t p0, uint32_t p1) { return N::Invoke<0x58EE4806AFD82775, uint32_t>(p0, p1); } // 117B45156D7EFF2E 0A56EE34
  static uint32_t LEADERBOARDS_GET_COLUMN_ID(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x7A57F3BB7EF76571, uint32_t>(p0, p1, p2); } // C4B5467A1886EA7E 3821A334
  static uint32_t LEADERBOARDS_GET_COLUMN_TYPE(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x7799F677CAF2C5F4, uint32_t>(p0, p1, p2); } // BF4FEF46DB7894D3 6F2820F4
  static uint32_t LEADERBOARDS_READ_CLEAR_ALL() { return N::Invoke<0xC06FEC2AD5C285E5, uint32_t>(); } // A34CB6E6F0DF4A0B 233E058A
  static uint32_t LEADERBOARDS_READ_CLEAR(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x3A33388C03E8340C, uint32_t>(p0, p1, p2); } // 7CCE5C737A665701 7090012F
  static bool LEADERBOARDS_READ_PENDING(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x35CC2C6A1658C995, bool>(p0, p1, p2); } // AC392C8483342AC2 EEB8BF5C
  static bool _0xFF6D2DA74F295C25() { return N::Invoke<0xFF6D2DA74F295C25, bool>(); } // A31FD15197B192BD 1789437B
  static bool LEADERBOARDS_READ_SUCCESSFUL(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xD1FDB4A1469503ED, bool>(p0, p1, p2); } // 2FB19228983E832C 3AC5B2F1
  static bool LEADERBOARDS2_READ_FRIENDS_BY_ROW(uint32_t *p0, uint32_t *p1, uint32_t p2, bool p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x918B101666F9CB83, bool>(p0, p1, p2, p3, p4, p5); } // 918B101666F9CB83 BD91B136
  static bool LEADERBOARDS2_READ_BY_HANDLE(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x3702CC70B5362A08, bool>(p0, p1); } // C30713A383BFBF0E 6B553408
  static bool LEADERBOARDS2_READ_BY_ROW(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, uint32_t p4, uint32_t *p5, uint32_t p6) { return N::Invoke<0xA9CDB1E3F0A49883, bool>(p0, p1, p2, p3, p4, p5, p6); } // A9CDB1E3F0A49883 CA931F34
  static bool LEADERBOARDS2_READ_BY_RANK(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xA7757C96E72775B6, bool>(p0, p1, p2); } // BA2C7DB0C129449A 1B03F59F
  static bool LEADERBOARDS2_READ_BY_RADIUS(uint32_t *p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x3EB47927EDFE17C1, bool>(p0, p1, p2); } // 5CE587FB5A42C8C4 C5B7E685
  static bool LEADERBOARDS2_READ_BY_SCORE_INT(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x7B312103F427CF62, bool>(p0, p1, p2); } // 7EEC7E4F6984A16A AC020C18
  static bool LEADERBOARDS2_READ_BY_SCORE_FLOAT(uint32_t *p0, float p1, uint32_t p2) { return N::Invoke<0x4EA947E118DEB421, bool>(p0, p1, p2); } // E662C8B759D08F3C C678B29F
  static bool _0x40DBF7B821CC7547(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x40DBF7B821CC7547, bool>(p0, p1, p2); } // C38DC1E90D22547C 9BEC3401
  static uint32_t _0x71E7A18ECCE79711() { return N::Invoke<0x71E7A18ECCE79711, uint32_t>(); } // F1AE5DCDBFCA2721
  static bool _0xC03FD60C2003FE6D(uint32_t *p0) { return N::Invoke<0xC03FD60C2003FE6D, bool>(p0); } // A0F93D5465B3094D C977D6E2
  static void _0xCCA089DEAB09CC79() { N::Invoke<0xCCA089DEAB09CC79, void>(); } // 71B008056E5692D6 F2DB6A82
  static bool _0xA7C4FDD87B044F2A(uint32_t p0, uint32_t *p1) { return N::Invoke<0xA7C4FDD87B044F2A, bool>(p0, p1); } // 34770B9CE0E03B91 766A74FE
  static uint32_t _0x7CAEE5BB9B752C91(uint32_t p0, uint32_t p1) { return N::Invoke<0x7CAEE5BB9B752C91, uint32_t>(p0, p1); } // 88578F6EC36B4A3A 6B90E730
  static float _0xF424952424F0F373(uint32_t p0, uint32_t p1) { return N::Invoke<0xF424952424F0F373, float>(p0, p1); } // 38491439B6BA7F7D 509A286F
  static bool LEADERBOARDS2_WRITE_DATA(uint32_t *p0) { return N::Invoke<0xF742066C63650FC1, bool>(p0); } // AE2206545888AE49 5F9DF634
  static void _0x0D01F5BCE1469E115(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0xD01F5BCE1469E115, void>(p0, p1, p2); } // 0BCA1D2C47B0D269 7524E27B
  static void _0x18C84767C4F08A7F(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x18C84767C4F08A7F, void>(p0, p1, p2); } // 2E65248609523599 1C5CCC3A
  static bool LEADERBOARDS_CACHE_DATA_ROW(uint32_t *p0) { return N::Invoke<0x219BD298A8A924D8, bool>(p0); } // B9BB18E2C40142ED 44F7D82B
  static void LEADERBOARDS_CLEAR_CACHE_DATA() { N::Invoke<0x1889384E08F6E7EA, void>(); } // D4B02A6B476E1FDC 87F498C1
  static void _0x95255F44EB97B2D3(uint32_t p0) { N::Invoke<0x95255F44EB97B2D3, void>(p0); } // 8EC74CEB042E7CFF 88AE9667
  static bool LEADERBOARDS_GET_CACHE_EXISTS(uint32_t p0) { return N::Invoke<0x6C286FA043711C53, bool>(p0); } // 9C51349BE6CDFE2C FC8A71F3
  static uint32_t LEADERBOARDS_GET_CACHE_TIME(uint32_t p0) { return N::Invoke<0x4B96B5ED065290BB, uint32_t>(p0); } // F04C1C27DA35F6C8 EDF02302
  static uint32_t _0xB2A318D4D5940F58(uint32_t p0) { return N::Invoke<0xB2A318D4D5940F58, uint32_t>(p0); } // 58A651CD201D89AD CE7CB520
  static bool LEADERBOARDS_GET_CACHE_DATA_ROW(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0xB6BDC9E1A1C3E62C, bool>(p0, p1, p2); } // 9120E8DBA3D69273 A11289EC
  static void _0x88300116A714168E(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x88300116A714168E, void>(p0, p1, p2); } // 11FF1C80276097ED 4AC39C6C
  static void _0x2DC85625A709DD07(uint32_t p0, float p1, uint32_t p2) { N::Invoke<0x2DC85625A709DD07, void>(p0, p1, p2); } // 30A6614C1F7799B8 3E69E7C3
  static void _0xA272A1759415F33B(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3) { N::Invoke<0xA272A1759415F33B, void>(p0, p1, p2, p3); } // 6483C25849031C4F 2FFD2FA5
  static bool _0x79D74854E24F70B7() { return N::Invoke<0x79D74854E24F70B7, bool>(); } // 5EAD2BF6484852E4 23D70C39
  static void _0x23924535B818952E() { N::Invoke<0x23924535B818952E, void>(); } // C141B8917E0017EC 0AD43306
  static void _0x7909860CD3EE04B1() { N::Invoke<0x7909860CD3EE04B1, void>(); } // B475F27C6A994D65 C7DE5C30
  static void _0xA9F2D14D7E99ABF5(uint32_t p0) { N::Invoke<0xA9F2D14D7E99ABF5, void>(p0); } // F1A1803D3476F215 A3DAC790
  static void _0xB5C5F2B3DB06F95D(uint32_t p0) { N::Invoke<0xB5C5F2B3DB06F95D, void>(p0); } // 38BAAA5DD4C9D19F 726FAE66
  static void _0xE91557824A90159E(uint32_t p0) { N::Invoke<0xE91557824A90159E, void>(p0); } // 55384438FC55AD8E F03895A4
  static void _0xB486BEEFB518B6B3(uint32_t p0, uint32_t p1) { N::Invoke<0xB486BEEFB518B6B3, void>(p0, p1); } // 723C1CE13FBFDB67 4C39CF10
  static void _0x047AAFCA3EF6CC8B8(uint32_t p0, uint32_t p1) { N::Invoke<0x47AAFCA3EF6CC8B8, void>(p0, p1); } // 0D01D20616FC73FB 2180AE13
  static void _0x9E6D44FDFA5DF0B6(uint32_t p0, float p1) { N::Invoke<0x9E6D44FDFA5DF0B6, void>(p0, p1); } // 428EAF89E24F6C36 EE292B91
  static void _0x0C1D4C87F0B074654() { N::Invoke<0xC1D4C87F0B074654, void>(); } // 047CBED6F6F8B63C A063CABD
  static bool _0x3D4070D942F47300(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x3D4070D942F47300, bool>(p0, p1); } // C980E62E33DF1D5C 62C19A3D
  static void _0x146793470817E2A6() { N::Invoke<0x146793470817E2A6, void>(); } // 6F361B8889A792A3 3B4EF322
  static uint32_t _0xE90852AC664DD455() { return N::Invoke<0xE90852AC664DD455, uint32_t>(); } // C847B43F369AC0B5
  static uint32_t _0x480A66636EF210BB() { return N::Invoke<0x480A66636EF210BB, uint32_t>(); } // A5C80D8E768A9E66
  static uint32_t _0x1788C6FAF16E2FA9() { return N::Invoke<0x1788C6FAF16E2FA9, uint32_t>(); } // 9A62EC95AE10E011
  static uint32_t _0x60A81FE9258263B9() { return N::Invoke<0x60A81FE9258263B9, uint32_t>(); } // 4C89FE2BDEB3F169
  static uint32_t _0xA8C893F0303A6582() { return N::Invoke<0xA8C893F0303A6582, uint32_t>(); } // C6E0E2616A7576BB
  static uint32_t _0xA2631D828508EF0() { return N::Invoke<0xA2631D828508EF0, uint32_t>(); } // 5BD5F255321C4AAF
  static uint32_t _0x9136C4E887DF9C9B() { return N::Invoke<0x9136C4E887DF9C9B, uint32_t>(); } // DEAAF77EB3687E97
  static bool _0xE5D4A9B95B93E1C7() { return N::Invoke<0xE5D4A9B95B93E1C7, bool>(); } // C70DDCE56D0D3A99 54E775E0
  static uint32_t _0x1A03783604001E2B(uint32_t *p0) { return N::Invoke<0x1A03783604001E2B, uint32_t>(p0); } // 886913BBEACA68C1 E3F0D62D
  static uint32_t _0x443784678659D783() { return N::Invoke<0x443784678659D783, uint32_t>(); } // 4FEF53183C3C6414
  static uint32_t _0x67E328DC8DD52BB() { return N::Invoke<0x67E328DC8DD52BB, uint32_t>(); } // 567384DFA67029E6
  static uint32_t _0xD78A87DAC78977CB() { return N::Invoke<0xD78A87DAC78977CB, uint32_t>(); } // 3270F67EED31FBC1
  static uint32_t _0x8E497BCEBDF1E728() { return N::Invoke<0x8E497BCEBDF1E728, uint32_t>(); } // CE5AA445ABA8DEE0
  static uint32_t _0x872F00BA8F3D9A60() { return N::Invoke<0x872F00BA8F3D9A60, uint32_t>(); } // 98E2BC1CA26287C3
  static uint32_t _0x3B3221684AB5F0FB() { return N::Invoke<0x3B3221684AB5F0FB, uint32_t>(); } // 629526ABA383BCAA
  static uint32_t _0x5FB6CF135D2E4B7B() { return N::Invoke<0x5FB6CF135D2E4B7B, uint32_t>(); } // B3DA2606774A8E2D
  static uint32_t _0x6C25B3CA27EB626F() { return N::Invoke<0x6C25B3CA27EB626F, uint32_t>(); } // DAC073C7901F9E15
  static uint32_t _0xFE90F059B3089E55() { return N::Invoke<0xFE90F059B3089E55, uint32_t>(); } // F6792800AC95350D
}

namespace BRAIN
{
  static void ADD_SCRIPT_TO_RANDOM_PED(uint32_t *p0, uint32_t p1, uint32_t p2, bool p3) { N::Invoke<0xFE6DB36FC14C573D, void>(p0, p1, p2, p3); } // 4EE5367468A65CCC ECC76C3D
  static void REGISTER_OBJECT_SCRIPT_BRAIN(uint32_t *p0, uint32_t p1, uint32_t p2, float p3, uint32_t p4, uint32_t p5) { N::Invoke<0x66D78CAA38292E75, void>(p0, p1, p2, p3, p4, p5); } // 0BE84C318BA6EC22 B6BCC608
  static bool IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uint32_t p0) { return N::Invoke<0xDBBE1D10A2F589A7, bool>(p0); } // CCBA154209823057 BA4CAA56
  static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(uint32_t *p0, float p1, uint32_t p2) { N::Invoke<0x4CE84E1CCD4720C3, void>(p0, p1, p2); } // 3CDC7136613284BD 725D91F7
  static bool IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return N::Invoke<0x3BCCCFB165E15A65, bool>(); } // C5042CC6F5E3D450 2CF305A0
  static void ENABLE_SCRIPT_BRAIN_SET(uint32_t p0) { N::Invoke<0x3696C889B162F611, void>(p0); } // 67AA4D73F0CFA86B 2765919F
  static void DISABLE_SCRIPT_BRAIN_SET(uint32_t p0) { N::Invoke<0xC4F1F647D0C3EFC2, void>(p0); } // 14D8518E9760F08F FBD13FAD
  static void _0x0B6A7F9E7B567BA80() { N::Invoke<0xB6A7F9E7B567BA80, void>(); } // 0B40ED49D7D6FF84 19B27825
  static void _0xAF1D44121BD120EF() { N::Invoke<0xAF1D44121BD120EF, void>(); } // 4D953DF78EBF8158 F3A3AB08
  static void _0x89A307800AC22308(uint32_t *p0) { N::Invoke<0x89A307800AC22308, void>(p0); } // 6D6840CEE8845831 949FE53E
  static void _0xA8AD4EA8635F3C1F(uint32_t *p0) { N::Invoke<0xA8AD4EA8635F3C1F, void>(p0); } // 6E91B04E08773030 29CE8BAA
}

namespace MOBILE
{
  static void CREATE_MOBILE_PHONE(uint32_t p0) { N::Invoke<0x91619E4FDBEF8436, void>(p0); } // A4E8E696C532FBC7 5BBC5E23
  static void DESTROY_MOBILE_PHONE() { N::Invoke<0x8F8805B248CD5B1F, void>(); } // 3BC861DF703E5097 1A65037B
  static void SET_MOBILE_PHONE_SCALE(float p0) { N::Invoke<0xC59170A87C7F8BAA, void>(p0); } // CBDD322A73D6D932 09BCF1BE
  static void SET_MOBILE_PHONE_ROTATION(float p0, float p1, float p2, uint32_t p3) { N::Invoke<0x21D2105CA1483300, void>(p0, p1, p2, p3); } // BB779C0CA917E865 209C28CF
  static void GET_MOBILE_PHONE_ROTATION(uint32_t p0, uint32_t p1) { N::Invoke<0x8FF29DE8F4EBF419, void>(p0, p1); } // 1CEFB61F193070AE 17A29F23
  static void SET_MOBILE_PHONE_POSITION(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x22FDA9F8AE4DE11C, void>(p0, p1, p2); } // 693A5C6D6734085B 841800B3
  static void GET_MOBILE_PHONE_POSITION(uint32_t p0) { N::Invoke<0x483F49444BC10CD1, void>(p0); } // 584FDFDA48805B86 B2E1E1A0
  static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(bool p0) { N::Invoke<0x3AF342428160A447, void>(p0); } // F511F759238A5122 29828690
  static uint32_t CAN_PHONE_BE_SEEN_ON_SCREEN() { return N::Invoke<0x350C8497AED6EB6C, uint32_t>(); } // C4E2813898C97A4B 5F978584
  static uint32_t _0xD3370B46DD5E27B0() { return N::Invoke<0xD3370B46DD5E27B0, uint32_t>(); } // 95C9E72F3D7DEC9B
  static uint32_t _0xC69D5A5AF2C9F93D() { return N::Invoke<0xC69D5A5AF2C9F93D, uint32_t>(); } // 44E44169EF70138E
  static void CELL_CAM_ACTIVATE(bool p0, bool p1) { N::Invoke<0xED2CDEF8B45664D, void>(p0, p1); } // FDE8F069C542D126 234C1AE9
  static void _0x09AA406ACF3A1D2B9(bool p0) { N::Invoke<0x9AA406ACF3A1D2B9, void>(p0); } // 015C49A93E3E086E 4479B304
  static void _0xAA9D747402357C45(bool p0) { N::Invoke<0xAA9D747402357C45, void>(p0); } // A2CCBE62CD4C91A4 C273BB4D
  static uint32_t _0x73754E8E47EF8F9E() { return N::Invoke<0x73754E8E47EF8F9E, uint32_t>(); } // 1B0B4AEED5B9B41C
  static uint32_t _0x409A00BE617B6F2() { return N::Invoke<0x409A00BE617B6F2, uint32_t>(); } // 53F4892D18EC90A4
  static uint32_t _0xF8545DBAF6FC3DC8() { return N::Invoke<0xF8545DBAF6FC3DC8, uint32_t>(); } // 3117D84EFA60F77B
  static uint32_t _0xACA62DD3FAB78014() { return N::Invoke<0xACA62DD3FAB78014, uint32_t>(); } // 15E69E2802C24B8D
  static uint32_t _0x28881257C25DDCA7() { return N::Invoke<0x28881257C25DDCA7, uint32_t>(); } // AC2890471901861C
  static uint32_t _0x13C1497FF29F2CC() { return N::Invoke<0x13C1497FF29F2CC, uint32_t>(); } // D6ADE981781FCA09
  static uint32_t _0x11C550F0F4303BA7() { return N::Invoke<0x11C550F0F4303BA7, uint32_t>(); } // F1E22DC13F5EEBAD
  static void _0x771E4741BA8ABCA6(float p0) { N::Invoke<0x771E4741BA8ABCA6, void>(p0); } // 466DA42C89865553 66DCD9D2
  static bool CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(uint32_t p0) { return N::Invoke<0xBECFD8F397FC0300, bool>(p0); } // 439E9BC95B7E7FBE BEA88097
  static void GET_MOBILE_PHONE_RENDER_ID(uint32_t *p0) { N::Invoke<0x662829E4D24DCE5D, void>(p0); } // B4A53E05F68B6FA1 88E4FECE
}

namespace APP
{
  static bool APP_DATA_VALID() { return N::Invoke<0xCA73A01756217EC9, bool>(); } // 846AA8E7D55EE5B6 72BDE002
  static uint32_t APP_GET_INT(uint32_t *p0) { return N::Invoke<0x70C6EACA983B6FF3, uint32_t>(p0); } // D3A58A12C77D9D4B 2942AAD2
  static float APP_GET_FLOAT(uint32_t *p0) { return N::Invoke<0xFEBCD98364B9719F, float>(p0); } // 1514FB24C02C2322 D87F3A1C
  static uint32_t APP_GET_STRING(uint32_t *p0) { return N::Invoke<0xC4BD4C66A4C26679, uint32_t>(p0); } // 749B023950D2311C 849CEB80
  static void APP_SET_INT(uint32_t *p0, uint32_t p1) { N::Invoke<0xB4E2418AF8C44161, void>(p0, p1); } // 607E8E3D3E4F9611 1B509C32
  static void APP_SET_FLOAT(uint32_t *p0, float p1) { N::Invoke<0xF77F7449AA188390, void>(p0, p1); } // 25D7687C68E0DAA4 F3076135
  static void APP_SET_STRING(uint32_t *p0, uint32_t *p1) { N::Invoke<0xA8E05C460762609D, void>(p0, p1); } // 3FF2FCEC4B7721B4 23DF19A8
  static void APP_SET_APP(uint32_t *p0) { N::Invoke<0xC5C78229AFEE6823, void>(p0); } // CFD0406ADAF90D2B 8BAC4146
  static void APP_SET_BLOCK(uint32_t *p0) { N::Invoke<0x36E74661AF56B42B, void>(p0); } // 262AB456A3D21F93 C2D54DD9
  static void APP_CLEAR_BLOCK() { N::Invoke<0xFE24248AD69CE856, void>(); } // 5FE1DF3342DB7DBA DAB86A18
  static void APP_CLOSE_APP() { N::Invoke<0x71F24E3C4A6A054, void>(); } // E41C65E07A5F05FC 03767C7A
  static void APP_CLOSE_BLOCK() { N::Invoke<0x65113407CCABB4C8, void>(); } // E8E3FCF72EAC0EF8 ED97B202
  static bool _0x744011153D5554F() { return N::Invoke<0x744011153D5554F, bool>(); } // 71EEE69745088DA0 D368BA15
  static bool APP_HAS_SYNCED_DATA(uint32_t *p0) { return N::Invoke<0x8DF7BAD5EE97F803, bool>(p0); } // CA52279A7271517F 1DE2A63D
  static void APP_SAVE_DATA() { N::Invoke<0xA79DC6E48DB016F9, void>(); } // 95C5D356CDA6E85F 84A3918D
  static uint32_t _0x343AB67BA4AB388A() { return N::Invoke<0x343AB67BA4AB388A, uint32_t>(); } // C9853A2BE3DED1A6 784D550B
  static bool APP_DELETE_APP_DATA(uint32_t *p0) { return N::Invoke<0x7F29D55CF5B1127F, bool>(p0); } // 44151AEA95C8A003 2A2FBD1C
}

namespace TIME
{
  static void SET_CLOCK_TIME(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xEBC6113420C4616D, void>(p0, p1, p2); } // 47C3B5848C3E45D8 26F6AF14
  static void PAUSE_CLOCK(bool p0) { N::Invoke<0xC0ECE64062B48246, void>(p0); } // 4055E40BD2DBEC1D B02D6124
  static void _0x1D54C3C00FBE70DD(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x1D54C3C00FBE70DD, void>(p0, p1, p2); } // C8CA9670B9D83B3B 57B8DA7C
  static void ADD_TO_CLOCK_TIME(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x7F71C140225F9EA, void>(p0, p1, p2); } // D716F30D8C8980E2 CC40D20D
  static uint32_t GET_CLOCK_HOURS() { return N::Invoke<0xE76C684D1C903A71, uint32_t>(); } // 25223CA6B4D20B7F 7EF8316F
  static uint32_t GET_CLOCK_MINUTES() { return N::Invoke<0x6F66CEDC24218A4, uint32_t>(); } // 13D2B8ADD79640F2 94AAC486
  static uint32_t GET_CLOCK_SECONDS() { return N::Invoke<0x2784A8234E9B4202, uint32_t>(); } // 494E97C2EF27C470 099C927E
  static void SET_CLOCK_DATE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x3EA9A7E631596580, void>(p0, p1, p2); } // B096419DF0D06CE7 96891C94
  static uint32_t GET_CLOCK_DAY_OF_WEEK() { return N::Invoke<0x8E6E09D762A68FB6, uint32_t>(); } // D972E4BD7AEB235F 84E4A289
  static uint32_t GET_CLOCK_DAY_OF_MONTH() { return N::Invoke<0xA277D6C04B4B44C8, uint32_t>(); } // 3D10BC92A4DB1D35 C7A5ACB7
  static uint32_t GET_CLOCK_MONTH() { return N::Invoke<0x1285C2DD1E4945FF, uint32_t>(); } // BBC72712E80257A1 3C48A3D5
  static uint32_t GET_CLOCK_YEAR() { return N::Invoke<0xCFC08A7C99F98C5B, uint32_t>(); } // 961777E64BDAF717 B8BECF15
  static uint32_t _0x9C0DC2E2BADFB107() { return N::Invoke<0x9C0DC2E2BADFB107, uint32_t>(); } // 2F8B4D1C595B11DB 3B74095C
  static void GET_POSIX_TIME(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5) { N::Invoke<0xE447A3C9003CA31C, void>(p0, p1, p2, p3, p4, p5); } // DA488F299A5B164E E15A5281
  static uint32_t _0xC37299817B9E621() { return N::Invoke<0xC37299817B9E621, uint32_t>(); } // 8117E09A19EEF4D3
  static void GET_LOCAL_TIME(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5) { N::Invoke<0x27FEA12221A1DA38, void>(p0, p1, p2, p3, p4, p5); } // 50C7A99057A69748 124BCFA2
}

namespace PATHFIND
{
  static void SET_ROADS_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { N::Invoke<0xE0988F7BD7BD3889, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // BF1A602B5BA52FEE EBC7B918
  static void SET_ROADS_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, bool p9) { N::Invoke<0x9598AFAD0FB9891E, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 1A5AA1208AF5DB59 BD088F4B
  static void SET_PED_PATHS_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x6FD48A66A577F6B3, void>(p0, p1, p2, p3, p4, p5, p6); } // 34F060F4BF92E018 2148EA84
  static uint32_t GET_SAFE_COORD_FOR_PED(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x3CDB52EABD2C9FC7, uint32_t>(p0, p1, p2, p3, p4, p5); } // B61C8E878A4199CA B370270A
  static uint32_t GET_CLOSEST_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0x2BFB65A3CE932C8D, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 240A18690AE96513 6F5F1E6C
  static uint32_t GET_CLOSEST_MAJOR_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x7ECBB9998D8E0FAB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 2EABE3B06F58C1BE 04B5F15B
  static uint32_t GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return N::Invoke<0x839399EDBB568AF1, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // FF071FB798B803B0 8BD5759B
  static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return N::Invoke<0x28360C2B9B86505E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // E50E52416CCF948B F125BFCC
  static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_ID(float p0, float p1, float p2, uint32_t p3, uint32_t p4, float p5, float p6) { return N::Invoke<0x9E39A8307E2B6503, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 22D7275A79FE8215 3F358BEA
  static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return N::Invoke<0x3D84F9AECFD58EB5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 80CA6A8B6C094CC4 7349C856
  static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float p0, float p1, float p2, uint32_t p3, uint32_t *p4, uint32_t *p5, uint32_t p6, float p7, float p8) { return N::Invoke<0x41EB80A253F99F2F, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 6448050E9C2A7207 C1AEB88D
  static uint32_t GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11) { return N::Invoke<0x49EE3DCC3B0D9124, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 45905BE8654AE067 928A4DEC
  static bool GET_VEHICLE_NODE_PROPERTIES(float p0, float p1, float p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0xC57DC64AD223F86E, bool>(p0, p1, p2, p3, p4); } // 0568566ACBB5DEDC CC90110B
  static bool IS_VEHICLE_NODE_ID_VALID(uint32_t p0) { return N::Invoke<0x5D626D890DCCBB00, bool>(p0); } // 1EAF30FCFBF5AF74 57DFB1EF
  static void GET_VEHICLE_NODE_POSITION(uint32_t p0, uint32_t p1) { N::Invoke<0x3810B8E4BE77F3FC, void>(p0, p1); } // 703123E5E7D429C2 E38E252D
  static bool _0x4E95ACB56D760DBC(uint32_t p0) { return N::Invoke<0x4E95ACB56D760DBC, bool>(p0); } // A2AE5C478B96E3B6 EE4B1219
  static bool _0xBF29019E61FCFC6F(uint32_t p0) { return N::Invoke<0xBF29019E61FCFC6F, bool>(p0); } // 4F5070AA58F69279 56737A3C
  static uint32_t GET_CLOSEST_ROAD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10) { return N::Invoke<0xD157439A5C52AA4E, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 132F52BBA570FE92 567B0E11
  static bool LOAD_ALL_PATH_NODES(bool p0) { return N::Invoke<0xA3EC3945492992B2, bool>(p0); } // 80E4A6EDDB0BE8D9 C66E28C3
  static void _0x89539C9F122EA3F4(bool p0) { N::Invoke<0x89539C9F122EA3F4, void>(p0); } // 228E5C6AD4D74BFD D6A3B458
  static bool _0x65AB4C5AAF640EB0(float p0, float p1, float p2, float p3) { return N::Invoke<0x65AB4C5AAF640EB0, bool>(p0, p1, p2, p3); } // F7B79A50B905A30D 86E80A17
  static bool _0x032BB0750E9174D6C(float p0, float p1, float p2, float p3) { return N::Invoke<0x32BB0750E9174D6C, bool>(p0, p1, p2, p3); } // 07FB139B592FA687 2CDA5012
  static void SET_ROADS_BACK_TO_ORIGINAL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x9A76FCB3181D8AAB, void>(p0, p1, p2, p3, p4, p5); } // 1EE7063B80FFC77C 86AC4A85
  static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0xF9A746F55BDEFFDD, void>(p0, p1, p2, p3, p4, p5, p6); } // 0027501B9F3B407E 9DB5D209
  static void _0x0D0EB5CCB272DDAAA(float p0) { N::Invoke<0xD0EB5CCB272DDAAA, void>(p0); } // 0B919E1FB47CC4E0 3C5085E4
  static void _0x6531E5E3F81DCAE8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x6531E5E3F81DCAE8, void>(p0, p1, p2, p3, p4, p5, p6); } // AA76052DDA9BFC3E D0F51299
  static void SET_PED_PATHS_BACK_TO_ORIGINAL(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0xC08AF3BB0A2FE69B, void>(p0, p1, p2, p3, p4, p5); } // E04B48F2CC926253 3F1ABDA4
  static uint32_t GET_RANDOM_VEHICLE_NODE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8) { return N::Invoke<0x39BC906A323E9E1D, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 93E0DB8440B73A7D AD1476EA
  static void GET_STREET_NAME_AT_COORD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { N::Invoke<0xB273AF9A7408FB95, void>(p0, p1, p2, p3, p4); } // 2EB41072B4C1E4C0 DEBEEFCF
  static uint32_t GENERATE_DIRECTIONS_TO_COORD(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0x19F6346FAC6834B7, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // F90125F1F79ECDF8 ED35C094
  static void SET_IGNORE_NO_GPS_FLAG(bool p0) { N::Invoke<0x9B517A356053EAB0, void>(p0); } // 72751156E7678833 B72CF194
  static void _0xDB5A661303CFA49A(bool p0) { N::Invoke<0xDB5A661303CFA49A, void>(p0); } // 1FC289A0C3FF470F 90DF7A4C
  static void SET_GPS_DISABLED_ZONE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x2F5F83D51B0C72E7, void>(p0, p1, p2, p3, p4, p5); } // DC20483CD3DD5201 720B8073
  static uint32_t _0xD366C962CE850FDE() { return N::Invoke<0xD366C962CE850FDE, uint32_t>(); } // BBB45C3CF5C8AA85 4B770634
  static bool _0x824DCD3A8B26D9DD() { return N::Invoke<0x824DCD3A8B26D9DD, bool>(); } // 869DAACBBE9FA006 286F82CC
  static uint32_t _0xE975CFA93E09C576(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0xE975CFA93E09C576, uint32_t>(p0, p1, p2, p3, p4); } // 16F46FB18C8009E4 F6422F9A
  static bool IS_POINT_ON_ROAD(float p0, float p1, float p2, uint32_t p3) { return N::Invoke<0xFB32C1533D77516D, bool>(p0, p1, p2, p3); } // 125BF4ABFC536B09 CF198055
  static uint32_t _0xD0060050DF39A7CC() { return N::Invoke<0xD0060050DF39A7CC, uint32_t>(); } // D3A6A0EF48823A8C
  static uint32_t _0xA1727C6469075630() { return N::Invoke<0xA1727C6469075630, uint32_t>(); } // D0BC1C6FB18EE154
  static uint32_t _0x96F534A0E6A7E722() { return N::Invoke<0x96F534A0E6A7E722, uint32_t>(); } // 2801D0012266DF07
  static void ADD_NAVMESH_REQUIRED_REGION(float p0, float p1, float p2) { N::Invoke<0xC47920984FEAECEF, void>(p0, p1, p2); } // 387EAD7EE42F6685 12B086EA
  static void REMOVE_NAVMESH_REQUIRED_REGIONS() { N::Invoke<0xBEC066E45E66285, void>(); } // 916F0A3CDEC3445E 637BB680
  static void DISABLE_NAVMESH_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x84A799362FA1219F, void>(p0, p1, p2, p3, p4, p5, p6); } // 4C8872D8CDBE1B8B 6E37F132
  static bool ARE_ALL_NAVMESH_REGIONS_LOADED() { return N::Invoke<0x3AC0C0048FD80F7A, bool>(); } // 8415D95B194A3AEA 34C4E789
  static bool IS_NAVMESH_LOADED_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x8138C32B482323F5, bool>(p0, p1, p2, p3, p4, p5); } // F813C7E63F9062A5 4C2BA99E
  static uint32_t _0x73EC3DA56D3FB398() { return N::Invoke<0x73EC3DA56D3FB398, uint32_t>(); } // 1708E8DD3FF8C65
  static uint32_t ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, uint32_t p8) { return N::Invoke<0x73E83232BB98D800, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // FCD5C8E06E502F5A 2952BA56
  static void UPDATE_NAVMESH_BLOCKING_OBJECT(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { N::Invoke<0xD67CED6C68C2C7D3, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 109E99373F290687 4E9776D0
  static void REMOVE_NAVMESH_BLOCKING_OBJECT(uint32_t p0) { N::Invoke<0x8939E31C143EF145, void>(p0); } // 46399A7895957C0E 098602B0
  static bool _0x049977BD3DD29F214(uint32_t p0) { return N::Invoke<0x49977BD3DD29F214, bool>(p0); } // 0EAEB0DB4B132399 4B67D7EE
  static float _0x89BDB3CBFB462F22(float p0, float p1) { return N::Invoke<0x89BDB3CBFB462F22, float>(p0, p1); } // 29C24BFBED8AB8FB 3FE8C5A0
  static float _0xDF609A62B8C63C61(float p0, float p1, float p2, float p3) { return N::Invoke<0xDF609A62B8C63C61, float>(p0, p1, p2, p3); } // 8ABE8608576D9CE3 3ED21C90
  static float _0x174FE026E5E3A404(float p0, float p1) { return N::Invoke<0x174FE026E5E3A404, float>(p0, p1); } // 336511A34F2E5185 A07C5B7D
  static float _0x1B636A9F4A19474F(float p0, float p1, float p2, float p3) { return N::Invoke<0x1B636A9F4A19474F, float>(p0, p1, p2, p3); } // 3599D741C9AC6310 76751DD4
  static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x473D9547087B09AE, float>(p0, p1, p2, p3, p4, p5); } // ADD95C7005C4A197 B114489B
}

namespace CONTROLS
{
  static bool IS_CONTROL_ENABLED(uint32_t p0, uint32_t p1) { return N::Invoke<0xF31E3F8B0F8BAB29, bool>(p0, p1); } // 1CEA6BFDF248E5D9 9174AF84
  static bool IS_CONTROL_PRESSED(uint32_t p0, uint32_t p1) { return N::Invoke<0xBD883E84B4B6E14E, bool>(p0, p1); } // F3A21BCD95725A4A 517A4384
  static bool IS_CONTROL_RELEASED(uint32_t p0, uint32_t p1) { return N::Invoke<0x985B3A911A49ABFC, bool>(p0, p1); } // 648EE3E7F38877DD 1F91A06E
  static bool IS_CONTROL_JUST_PRESSED(uint32_t p0, uint32_t p1) { return N::Invoke<0x58FC9C7DF8FE009B, bool>(p0, p1); } // 580417101DDB492F 4487F579
  static bool IS_CONTROL_JUST_RELEASED(uint32_t p0, uint32_t p1) { return N::Invoke<0xBAAAD6B2D22A26ED, bool>(p0, p1); } // 50F940259D3841E6 2314444B
  static uint32_t GET_CONTROL_VALUE(uint32_t p0, uint32_t p1) { return N::Invoke<0x995E5B5A14F2E170, uint32_t>(p0, p1); } // D95E79E8686D2C27 C526F3C6
  static float GET_CONTROL_NORMAL(uint32_t p0, uint32_t p1) { return N::Invoke<0x3A32FF422A47D4D2, float>(p0, p1); } // EC3C9B8D5327B563 5DE226A5
  static uint32_t _0xF7F41B053CB6A8F() { return N::Invoke<0xF7F41B053CB6A8F, uint32_t>(); } // 5B73C77D9EB66E24
  static float _0xD009084906064511(uint32_t p0, uint32_t p1) { return N::Invoke<0xD009084906064511, float>(p0, p1); } // 5B84D09CEC5209C5 C49343BB
  static uint32_t _0x71F42569AB4A62FC() { return N::Invoke<0x71F42569AB4A62FC, uint32_t>(); } // E8A25867FBA3B05E
  static bool IS_DISABLED_CONTROL_PRESSED(uint32_t p0, uint32_t p1) { return N::Invoke<0x25F05AE8FAE80806, bool>(p0, p1); } // E2587F8CBBD87B1D 32A93544
  static bool IS_DISABLED_CONTROL_JUST_PRESSED(uint32_t p0, uint32_t p1) { return N::Invoke<0x2AC213158CF29AE, bool>(p0, p1); } // 91AEF906BCA88877 EE6ABD32
  static bool IS_DISABLED_CONTROL_JUST_RELEASED(uint32_t p0, uint32_t p1) { return N::Invoke<0xF34A5B7A9ABA0975, bool>(p0, p1); } // 305C8DCD79DA8B0F D6A679E1
  static float GET_DISABLED_CONTROL_NORMAL(uint32_t p0, uint32_t p1) { return N::Invoke<0xAA8FAD2763B85102, float>(p0, p1); } // 11E65974A982637C 66FF4FAA
  static float _0xDA6E836529BF74AC(uint32_t p0, uint32_t p1) { return N::Invoke<0xDA6E836529BF74AC, float>(p0, p1); } // 4F8A26A890FD62FB F2A65A4C
  static uint32_t _0x4D5885EB193CEFF7(uint32_t p0) { return N::Invoke<0x4D5885EB193CEFF7, uint32_t>(p0); } // D7D22F5592AED8BA 0E8EF929
  static uint32_t _0x30E5EC01C9ACF9BC() { return N::Invoke<0x30E5EC01C9ACF9BC, uint32_t>(); } // A571D46727E2B718
  static uint32_t _0x6DA85361C794F2B1() { return N::Invoke<0x6DA85361C794F2B1, uint32_t>(); } // 13337B38DB572509
  static uint32_t _0x2A00B603860D2C54() { return N::Invoke<0x2A00B603860D2C54, uint32_t>(); } // FC695459D4D0E219
  static uint32_t _0xDEFE27F6AD31BDE4() { return N::Invoke<0xDEFE27F6AD31BDE4, uint32_t>(); } // 23F09EADC01449D6
  static uint32_t _0x585B724989D978() { return N::Invoke<0x585B724989D978, uint32_t>(); } // 6CD79468A1E595C6
  static uint32_t _0x0B588E50C18B98D3F(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xB588E50C18B98D3F, uint32_t>(p0, p1, p2); } // 0499D7B09FC9B407 3551727A
  static uint32_t _0xA493E672277131FE(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xA493E672277131FE, uint32_t>(p0, p1, p2); } // 80C2FD58D720C801 3EE71F6A
  static uint32_t _0x5147FAA338AB7B27() { return N::Invoke<0x5147FAA338AB7B27, uint32_t>(); } // 8290252FFF36ACB5
  static void _0x452724341A49CD8B(uint32_t p0) { N::Invoke<0x452724341A49CD8B, void>(p0); } // CB0360EFEFB2580D 7715C03B
  static void SET_PAD_SHAKE(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x5C68F3EBC8A92D55, void>(p0, p1, p2); } // 48B3886C1358D0D5 5D38BD2F
  static uint32_t _0x1D386DC387AF1DB0() { return N::Invoke<0x1D386DC387AF1DB0, uint32_t>(); } // 14D29BB12D47F68C
  static void STOP_PAD_SHAKE(uint32_t p0) { N::Invoke<0x26D5B88BC1FA1BAB, void>(p0); } // 38C16A305E8CDC8D 8F75657E
  static void _0x26E77FA00BD02C3C(uint32_t p0, uint32_t p1) { N::Invoke<0x26E77FA00BD02C3C, void>(p0, p1); } // F239400E16C23E08 7D65EB6E
  static uint32_t _0x5CF3C9118AB79AF0() { return N::Invoke<0x5CF3C9118AB79AF0, uint32_t>(); } // A0CEFCEA390AAB9B
  static bool IS_LOOK_INVERTED() { return N::Invoke<0xEEBA0A292090EE79, bool>(); } // 77B612531280010D 313434B2
  static uint32_t _0xC91404D4E0A94981() { return N::Invoke<0xC91404D4E0A94981, uint32_t>(); } // E1615EC03B3BB4FD
  static uint32_t _0xEBB57845870E2E01() { return N::Invoke<0xEBB57845870E2E01, uint32_t>(); } // BB41AFBBBC0A0287 81802053
  static uint32_t _0x17DC1E084CF1ACDD() { return N::Invoke<0x17DC1E084CF1ACDD, uint32_t>(); } // 59B9A7AF4C95133C
  static uint32_t _0x991FC1675F6DECBD() { return N::Invoke<0x991FC1675F6DECBD, uint32_t>(); } // F70731BACCFBB96
  static uint32_t _0x1A2F72143DF4C59F() { return N::Invoke<0x1A2F72143DF4C59F, uint32_t>(); } // FC859E2374407556
  static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(bool p0) { N::Invoke<0xAD368980E4E38C6B, void>(p0); } // 798FDEB5B1575088 A86BD91F
  static void SET_INPUT_EXCLUSIVE(uint32_t p0, uint32_t p1) { N::Invoke<0x756DDDAD8038AC9, void>(p0, p1); } // EDE476E5EE29EDB1 4E8E29E6
  static void DISABLE_CONTROL_ACTION(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x500F4CA776CEBD0A, void>(p0, p1, p2); } // FE99B66D079CF6BC 3800C0DC
  static void ENABLE_CONTROL_ACTION(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0xB7B9319D77D69AF2, void>(p0, p1, p2); } // 351220255D64C155 D2753551
  static void DISABLE_ALL_CONTROL_ACTIONS(uint32_t p0) { N::Invoke<0xB39A0108BE8483DE, void>(p0); } // 5F4B6931816E599B 16753CF4
  static void ENABLE_ALL_CONTROL_ACTIONS(uint32_t p0) { N::Invoke<0xF133F66F6761D77A, void>(p0); } // A5FFE9B05F199DE7 FC2F119F
  static bool _0xE9AD5BEA272D4AC8(uint32_t *p0) { return N::Invoke<0xE9AD5BEA272D4AC8, bool>(p0); } // 3D42B92563939375 D2C80B2E
  static bool _0x373E8B54D82039E9(uint32_t *p0) { return N::Invoke<0x373E8B54D82039E9, bool>(p0); } // 4683149ED1DDE7A1 BBFC9050
  static void _0x262D794F49C1A5EB() { N::Invoke<0x262D794F49C1A5EB, void>(); } // 643ED62D5EA3BEBD 42140FF9
  static void _0xD56126DC7330EEF3(uint32_t p0) { N::Invoke<0xD56126DC7330EEF3, void>(p0); } // 7F4724035FDCA1DD 2CEDE6C5
}

namespace DATAFILE
{
  static void _0xD58995F0ADECC553(uint32_t p0) { N::Invoke<0xD58995F0ADECC553, void>(p0); } // AD6875BBC0FC899C 621388FF
  static uint32_t _0x947C41B9738A3F2E() { return N::Invoke<0x947C41B9738A3F2E, uint32_t>(); } // 6CC86E78358D5119
  static uint32_t _0x8D24976EC2CA3A7C() { return N::Invoke<0x8D24976EC2CA3A7C, uint32_t>(); } // FCCAE5B92A830878
  static uint32_t _0x57F6FCAB78A7ABEA() { return N::Invoke<0x57F6FCAB78A7ABEA, uint32_t>(); } // 15FF52B809DB2353
  static uint32_t _0x15E7AE72C2FB8B30() { return N::Invoke<0x15E7AE72C2FB8B30, uint32_t>(); } // F8CC1EBE0B62E29F
  static bool _0x6619B43A54187875(uint32_t p0) { return N::Invoke<0x6619B43A54187875, bool>(p0); } // 22DA66936E0FFF37 B41064A4
  static bool _0x2D8466EC94F4E458(uint32_t p0) { return N::Invoke<0x2D8466EC94F4E458, bool>(p0); } // 8F5EA1C01D65A100 9DB63CFF
  static bool _0x3C71A103AF1391D5(uint32_t *p0, uint32_t p1, uint32_t *p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, bool p6) { return N::Invoke<0x3C71A103AF1391D5, bool>(p0, p1, p2, p3, p4, p5, p6); } // C84527E235FCA219 F09157B0
  static bool _0x47CE34C09C6E5B01(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, bool p4) { return N::Invoke<0x47CE34C09C6E5B01, bool>(p0, p1, p2, p3, p4); } // A5EFC3E847D60507 D96860FC
  static bool _0x7CA582E78942F762(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3, uint32_t *p4, uint32_t *p5, uint32_t *p6) { return N::Invoke<0x7CA582E78942F762, bool>(p0, p1, p2, p3, p4, p5, p6); } // 648E7A5434AF7969 459F2683
  static bool _0xABCA9621186215BC(uint32_t *p0, uint32_t *p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0xABCA9621186215BC, bool>(p0, p1, p2, p3, p4); } // 4645DE9980999E93 DBB83E2B
  static bool _0x249DF7F2462DF24D(uint32_t *p0, float p1, uint32_t *p2) { return N::Invoke<0x249DF7F2462DF24D, bool>(p0, p1, p2); } // 692D808C34A82143 BB6321BD
  static bool _0x21788DA28CA10E5C(uint32_t p0) { return N::Invoke<0x21788DA28CA10E5C, bool>(p0); } // A69AC4ADE82B57A4 E8D56DA2
  static bool _0xD817614FF53D2CFD(uint32_t p0, bool p1) { return N::Invoke<0xD817614FF53D2CFD, bool>(p0, p1); } // 9CB0BFA7A9342C3D CB6A351E
  static bool _0x35EC844747BD1B03(uint32_t p0) { return N::Invoke<0x35EC844747BD1B03, bool>(p0); } // 52818819057F2B40 A4D1B30E
  static bool _0x0BEB4BCAB2586C5DA(uint32_t p0) { return N::Invoke<0xBEB4BCAB2586C5DA, bool>(p0); } // 01095C95CD46B624 B8515B2F
  static bool _0xAD01E46EE8359F6D(uint32_t *p0) { return N::Invoke<0xAD01E46EE8359F6D, bool>(p0); } // C5238C011AF405E4 660C468E
  static void DATAFILE_CREATE() { N::Invoke<0x86B98DE94D370225, void>(); } // D27058A1CA2B13EE 95F8A221
  static void DATAFILE_DELETE() { N::Invoke<0x7C7D9E1147295314, void>(); } // 9AB9C1CFC8862DFB DEF31B0A
  static void _0x42B679850A5A9934() { N::Invoke<0x42B679850A5A9934, void>(); } // 2ED61456317B8178 4E03F632
  static void _0x2941B9A2515F6517() { N::Invoke<0x2941B9A2515F6517, void>(); } // C55854C7D7274882 F11F956F
  static uint32_t PRELOAD_FIND() { return N::Invoke<0x196C090B64F95927, uint32_t>(); } // 906B778CA1DC72B6 86DDF9C2
  static bool _0x9AEBCD68F7E99F9A(uint32_t *p0) { return N::Invoke<0x9AEBCD68F7E99F9A, bool>(p0); } // 83BCCE3224735F05 768CBB35
  static bool _0x6FB0FF5F24BAFFD5(uint32_t *p0) { return N::Invoke<0x6FB0FF5F24BAFFD5, bool>(p0); } // 4DFDD9EB705F8140 0B4087F7
  static bool _0x557C97BA9C4CE8E1() { return N::Invoke<0x557C97BA9C4CE8E1, bool>(); } // BEDB96A7584AA8CF 5DCD0796
  static void _0xB053C7D9066BCFA8(uint32_t *p0, uint32_t *p1, bool p2) { N::Invoke<0xB053C7D9066BCFA8, void>(p0, p1, p2); } // 35124302A556A325 9B29D99B
  static void _0xB701176DAD1CE489(uint32_t *p0, uint32_t *p1, uint32_t p2) { N::Invoke<0xB701176DAD1CE489, void>(p0, p1, p2); } // E7E035450A7948D5 EFCF554A
  static void _0x1E22AD0EEF53C7CA(uint32_t *p0, uint32_t *p1, float p2) { N::Invoke<0x1E22AD0EEF53C7CA, void>(p0, p1, p2); } // C27E1CC2D795105E E972CACF
  static void _0xCAFE10453B41DF86(uint32_t *p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xCAFE10453B41DF86, void>(p0, p1, p2); } // 8FF3847DADD8E30C D437615C
  static void _0x7978FE4A2F447580(uint32_t *p0, uint32_t *p1, float p2, float p3, float p4) { N::Invoke<0x7978FE4A2F447580, void>(p0, p1, p2, p3, p4); } // 4CD49B76338C7DEE 75FC6C3C
  static uint32_t _0x21B82249ACB846C2(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x21B82249ACB846C2, uint32_t>(p0, p1); } // A358F56F10732EE1 96A8E05F
  static uint32_t _0x326FA623570CA13A(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x326FA623570CA13A, uint32_t>(p0, p1); } // 5B11728527CA6E5F 03939B8D
  static bool _0xB3A8649C32ED90CE(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xB3A8649C32ED90CE, bool>(p0, p1); } // 1186940ED72FFEEC 8876C872
  static uint32_t _0x735007A4BFE76556(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x735007A4BFE76556, uint32_t>(p0, p1); } // 78F06F6B1FB5A80C A6C68693
  static float _0x0B7620056BA3ADCF9(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xB7620056BA3ADCF9, float>(p0, p1); } // 06610343E73B9727 A92C1AF4
  static uint32_t _0xD9FF36EDF58FE651(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xD9FF36EDF58FE651, uint32_t>(p0, p1); } // 3D2FD9E763B24472 942160EC
  static Vector3 _0xB9CCB29139D5107A(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xB9CCB29139D5107A, Vector3>(p0, p1); } // 46CD3CB66E0825CC E84A127A
  static uint32_t _0x5A2CEB52983CECFE(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x5A2CEB52983CECFE, uint32_t>(p0, p1); } // B6B9DDC412FCEEE2 C9C13D8D
  static uint32_t _0x2BD693D8CC2DF27D(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x2BD693D8CC2DF27D, uint32_t>(p0, p1); } // 7A983AA9DA2659ED 1F2F7D00
  static uint32_t _0x0786139F494F19CB3(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x786139F494F19CB3, uint32_t>(p0, p1); } // 031C55ED33227371 2678342A
  static void _0x643842C751B6F00C(uint32_t *p0, bool p1) { N::Invoke<0x643842C751B6F00C, void>(p0, p1); } // F8B0F5A43E928C76 08174B90
  static void _0xD20AF9A71F2E5FE7(uint32_t *p0, uint32_t p1) { N::Invoke<0xD20AF9A71F2E5FE7, void>(p0, p1); } // CABDB751D86FE93B F29C0B36
  static void _0xC0CBD3387AEB1E6(uint32_t *p0, float p1) { N::Invoke<0xC0CBD3387AEB1E6, void>(p0, p1); } // 57A995FD75D37F56 E4302123
  static void _0x543E6628C0127BA9(uint32_t *p0, uint32_t *p1) { N::Invoke<0x543E6628C0127BA9, void>(p0, p1); } // 2F0661C155AEEEAA F3C01350
  static void _0x289CA066B10B5673(uint32_t *p0, float p1, float p2, float p3) { N::Invoke<0x289CA066B10B5673, void>(p0, p1, p2, p3); } // 407F8D034F70F0C2 16F464B6
  static uint32_t _0x3A246948D8E8409D(uint32_t *p0) { return N::Invoke<0x3A246948D8E8409D, uint32_t>(p0); } // 6889498B3E19C797 C174C71B
  static bool _0x1AB42E452190C11E(uint32_t *p0, uint32_t p1) { return N::Invoke<0x1AB42E452190C11E, bool>(p0, p1); } // 50C1B2874E50C114 A2E5F921
  static uint32_t _0xE913F752727FD5C8(uint32_t *p0, uint32_t p1) { return N::Invoke<0xE913F752727FD5C8, uint32_t>(p0, p1); } // 3E5AE19425CD74BE BB120CFC
  static float FOCUS_USE_SPLINE(uint32_t *p0, uint32_t p1) { return N::Invoke<0xCCBB936CD7C5A191, float>(p0, p1); } // C0C527B525D7CFB5 08AD2CC2
  static uint32_t OVERIDE_TEXTURENAMES(uint32_t *p0, uint32_t p1) { return N::Invoke<0x18929D922A4FCF1B, uint32_t>(p0, p1); } // D3F2FFEB8D836F52 93F985A6
  static Vector3 _0x6C482A60A2924F25(uint32_t *p0, uint32_t p1) { return N::Invoke<0x6C482A60A2924F25, Vector3>(p0, p1); } // 8D2064E5B64A628A 80E3DA55
  static uint32_t _0xA7A0456A2B66D469(uint32_t *p0, uint32_t p1) { return N::Invoke<0xA7A0456A2B66D469, uint32_t>(p0, p1); } // 8B5FADCC4E3A145F ECE81278
  static uint32_t _0x073A0E0802EA47143(uint32_t *p0) { return N::Invoke<0x73A0E0802EA47143, uint32_t>(p0); } // 065DB281590CEA2D A8A21766
  static uint32_t _0x9ECC945812FC4A08(uint32_t *p0, uint32_t p1) { return N::Invoke<0x9ECC945812FC4A08, uint32_t>(p0, p1); } // 3A0014ADB172A3C5 FA2402C8
}

namespace FIRE
{
  static uint32_t START_SCRIPT_FIRE(float p0, float p1, float p2, uint32_t p3, bool p4) { return N::Invoke<0xA044C47C75E01FFA, uint32_t>(p0, p1, p2, p3, p4); } // 6B83617E04503888 E7529357
  static void REMOVE_SCRIPT_FIRE(uint32_t p0) { N::Invoke<0xE2112B348477C41D, void>(p0); } // 7FF548385680673F 6B21FE26
  static uint32_t START_ENTITY_FIRE(uint32_t p0) { return N::Invoke<0x888DE189078AE934, uint32_t>(p0); } // F6A9D9708F6F23DF 8928428E
  static void STOP_ENTITY_FIRE(uint32_t p0) { N::Invoke<0x146A47ED2C5B980, void>(p0); } // 7F0DD2EBBB651AFF CE8C9066
  static bool IS_ENTITY_ON_FIRE(uint32_t p0) { return N::Invoke<0xEF57771119A32DB2, bool>(p0); } // 28D3FED7190D3A0B 8C73E64F
  static uint32_t GET_NUMBER_OF_FIRES_IN_RANGE(float p0, float p1, float p2, float p3) { return N::Invoke<0xF97CA70F2DB85F21, uint32_t>(p0, p1, p2, p3); } // 50CAD495A460B305 654D93B7
  static void STOP_FIRE_IN_RANGE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0xB895F3A5E3A84693, void>(p0, p1, p2, p3); } // 056A8A219B8E829F 725C7205
  static uint32_t GET_CLOSEST_FIRE_POS(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x82EB1172B0FFC72F, uint32_t>(p0, p1, p2, p3); } // 352A9F6BCF90081F C4977B47
  static void ADD_EXPLOSION(float p0, float p1, float p2, uint32_t p3, float p4, bool p5, bool p6, float p7) { N::Invoke<0x593E9069AA8CC707, void>(p0, p1, p2, p3, p4, p5, p6, p7); } // E3AD2BDBAEE269AC 10AF5258
  static void ADD_OWNED_EXPLOSION(uint32_t p0, float p1, float p2, float p3, uint32_t p4, float p5, bool p6, bool p7, float p8) { N::Invoke<0xB90E808FA39547A7, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 172AA1B624FA1013 27EE0D67
  static void _0x74D42031A9977A6B(float p0, float p1, float p2, uint32_t p3, uint32_t p4, float p5, bool p6, bool p7, float p8) { N::Invoke<0x74D42031A9977A6B, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 36DD3FE58B5E5212 CF358946
  static uint32_t IS_EXPLOSION_IN_AREA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0x656425C603F673C9, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // 2E2EBA0EE7CED0E0 FB40075B
  static uint32_t _0xAF9A1ABF539EFBE9() { return N::Invoke<0xAF9A1ABF539EFBE9, uint32_t>(); } // 6070104B699B2EF4
  static bool IS_EXPLOSION_IN_SPHERE(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x6588804F7BCB1101, bool>(p0, p1, p2, p3, p4); } // AB0F816885B0E483 D455A7F3
  static bool IS_EXPLOSION_IN_ANGLED_AREA(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { return N::Invoke<0xE8AE70970F9FEB69, bool>(p0, p1, p2, p3, p4, p5, p6, p7); } // A079A6C51525DC4B 0128FED9
  static uint32_t _0x3C1A4586B2884E94(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { return N::Invoke<0x3C1A4586B2884E94, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 14BA4BA137AF6CEC AEC0D176
}

namespace DECISIONEVENT
{
  static void SET_DECISION_MAKER(uint32_t p0, uint32_t p1) { N::Invoke<0x4016A240221D4050, void>(p0, p1); } // B604A2942ADED0EE 19CEAC9E
  static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(uint32_t p0, uint32_t p1) { N::Invoke<0x672BD2EACF7286FE, void>(p0, p1); } // 4FC9381A7AEE8968 07ABD94D
  static void _0x8081B463AA928C27(uint32_t p0, uint32_t p1) { N::Invoke<0x8081B463AA928C27, void>(p0, p1); } // E42FCDFD0E4196F7 57506EA6
  static void _0xC487ACDF4DB3850E(uint32_t p0, uint32_t p1) { N::Invoke<0xC487ACDF4DB3850E, void>(p0, p1); } // D7CD9CF34F2C99E8 62A3161D
  static uint32_t ADD_SHOCKING_EVENT_AT_POSITION(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0x54FC3D63A1AF7A4, uint32_t>(p0, p1, p2, p3, p4); } // D9F8455409B525E9 0B30F779
  static uint32_t ADD_SHOCKING_EVENT_FOR_ENTITY(uint32_t p0, uint32_t p1, float p2) { return N::Invoke<0x769FF914868DA2BB, uint32_t>(p0, p1, p2); } // 7FD8F3BE76F89422 A81B5B71
  static bool IS_SHOCKING_EVENT_IN_SPHERE(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0xE38EA58EE20A1F1A, bool>(p0, p1, p2, p3, p4); } // 1374ABB7C15BAB92 2F98823E
  static bool REMOVE_SHOCKING_EVENT(uint32_t p0) { return N::Invoke<0x629852E07D36F649, bool>(p0); } // 2CDA538C44C6CCE5 F82D5A87
  static void REMOVE_ALL_SHOCKING_EVENTS(bool p0) { N::Invoke<0x68C135A763206156, void>(p0); } // EAABE8FDFA21274C 64DF6282
  static void _0xABB922B735B1AE9B() { N::Invoke<0xABB922B735B1AE9B, void>(); } // 340F1415B68AEADE A0CE89C8
  static void _0x45D88A2C351C0F89() { N::Invoke<0x45D88A2C351C0F89, void>(); } // 2F9A292AD0A3BD89 4CC674B5
  static void _0xD4AAD898916CA36C(uint32_t p0) { N::Invoke<0xD4AAD898916CA36C, void>(p0); } // 3FD2EC8BF1F1CF30 A0FDCB82
  static void _0xFB79FDADA15350FE() { N::Invoke<0xFB79FDADA15350FE, void>(); } // 5F3B7749C112D552 80340396
}

namespace ZONE
{
  static uint32_t GET_ZONE_AT_COORDS(float p0, float p1, float p2) { return N::Invoke<0x70E7DC016A3BCE02, uint32_t>(p0, p1, p2); } // 27040C25DE6CB2F4 C9018181
  static uint32_t _0xC20A0CF390344083(uint32_t *p0) { return N::Invoke<0xC20A0CF390344083, uint32_t>(p0); } // 98CD1D2934B76CC1 8EC68304
  static uint32_t GET_ZONE_POPSCHEDULE(uint32_t p0) { return N::Invoke<0x1791D68BE81FDBCB, uint32_t>(p0); } // 4334BC40AA0CB4BB 20AB2FC9
  static uint32_t GET_NAME_OF_ZONE(float p0, float p1, float p2) { return N::Invoke<0xE0F4D060DC66FA8E, uint32_t>(p0, p1, p2); } // CD90657D4C30E1CA 7875CE91
  static void SET_ZONE_ENABLED(uint32_t p0, uint32_t p1) { N::Invoke<0xCB270486B25A847A, void>(p0, p1); } // BA5ECEEA120E5611 04E21B03
  static uint32_t GET_ZONE_SCUMMINESS(uint32_t p0) { return N::Invoke<0xAD21C6801F78A71C, uint32_t>(p0); } // 5F7B268D15BA0739 B2FB5C4C
  static void _0x18F0CF3A83D7B33E(uint32_t p0, uint32_t p1) { N::Invoke<0x18F0CF3A83D7B33E, void>(p0, p1); } // 5F7D596BAC2E7777 3F0A3680
  static void _0x2CEB4AD79C7B5906(uint32_t p0) { N::Invoke<0x2CEB4AD79C7B5906, void>(p0); } // 5C0DE367AA0D911C 7A72A24E
  static uint32_t _0x23407968FA594DB9(float p0, float p1, float p2) { return N::Invoke<0x23407968FA594DB9, uint32_t>(p0, p1, p2); } // 7EE64D51E8498728 B5C5C99B
}

namespace ROPE
{
  static uint32_t ADD_ROPE(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, float p8, float p9, float p10, bool p11, bool p12, bool p13, float p14, bool p15, uint32_t *p16) { return N::Invoke<0xCEDB3DB364D4E9F4, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // E832D760399EB220 A592EC74
  static void DELETE_ROPE(uint32_t *p0) { N::Invoke<0x256A40788A3A4EA, void>(p0); } // 52B4829281364649 748D72AF
  static void DELETE_CHILD_ROPE(uint32_t p0) { N::Invoke<0xD3CB0CAB574196C7, void>(p0); } // AA5D6B1888E4DB20 B19B4706
  static bool DOES_ROPE_EXIST(uint32_t *p0) { return N::Invoke<0xC1C471D9F0CB910D, bool>(p0); } // FD5448BE3111ED96 66E4A3AC
  static void _0x791DDCF9AF7869A7(uint32_t *p0, bool p1) { N::Invoke<0x791DDCF9AF7869A7, void>(p0, p1); } // F159A63806BB5BA8 51523B8C
  static void LOAD_ROPE_DATA(uint32_t p0, uint32_t *p1) { N::Invoke<0xE2E7141D12BCA5DF, void>(p0, p1); } // CBB203C04D1ABD27 9E8F1644
  static void PIN_ROPE_VERTEX(uint32_t p0, uint32_t p1, float p2, float p3, float p4) { N::Invoke<0xDD5704566ED470A8, void>(p0, p1, p2, p3, p4); } // 2B320CF14146B69A AE1D101B
  static void UNPIN_ROPE_VERTEX(uint32_t p0, uint32_t p1) { N::Invoke<0x4EA6FFFA9B2C9DE9, void>(p0, p1); } // 4B5AE2EEE4A8F180 B30B552F
  static uint32_t GET_ROPE_VERTEX_COUNT(uint32_t p0) { return N::Invoke<0x1030B174F1D9E10B, uint32_t>(p0); } // 3655F544CD30F0B5 5131CD2C
  static void ATTACH_ENTITIES_TO_ROPE(uint32_t p0, uint32_t p1, uint32_t p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, uint32_t p10, uint32_t p11, uint32_t *p12, uint32_t *p13) { N::Invoke<0x5FA05DAA2F11913D, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 3D95EC8B6D940AC3 7508668F
  static void ATTACH_ROPE_TO_ENTITY(uint32_t p0, uint32_t p1, float p2, float p3, float p4, uint32_t p5) { N::Invoke<0xCB9E38D07F8AC84F, void>(p0, p1, p2, p3, p4, p5); } // 4B490A6832559A65 B25D9536
  static void DETACH_ROPE_FROM_ENTITY(uint32_t p0, uint32_t p1) { N::Invoke<0x339482E66F313F79, void>(p0, p1); } // BCF3026912A8647D 3E720BEE
  static void _0xBCB57097E14BD2F0(uint32_t p0) { N::Invoke<0xBCB57097E14BD2F0, void>(p0); } // C8D667EE52114ABA EAF291A0
  static void _0xE8BFE40EA4992B6B(uint32_t p0, uint32_t p1) { N::Invoke<0xE8BFE40EA4992B6B, void>(p0, p1); } // DC57A637A20006ED 80DB77A7
  static void _0xC4B10914E8DFFED8(uint32_t p0, bool p1) { N::Invoke<0xC4B10914E8DFFED8, void>(p0, p1); } // 36CCB9BE67B970FD C67D5CF6
  static bool _0xD623175288881516(uint32_t *p0) { return N::Invoke<0xD623175288881516, bool>(p0); } // 84DE3B5FB3E666F0 7A18BB9C
  static Vector3 GET_ROPE_LAST_VERTEX_COORD(uint32_t p0) { return N::Invoke<0xEA5A54772E6E2E5B, Vector3>(p0); } // 21BB0FBD3E217C2D 91F6848B
  static Vector3 GET_ROPE_VERTEX_COORD(uint32_t p0, uint32_t p1) { return N::Invoke<0x45217E2AE13CA818, Vector3>(p0, p1); } // EA61CA8E80F09E4D 84374452
  static void _0x1731EFEF9C6A5682(uint32_t p0) { N::Invoke<0x1731EFEF9C6A5682, void>(p0); } // 1461C72C889E343E 5187BED3
  static void _0x13593A32293B017D(uint32_t p0) { N::Invoke<0x13593A32293B017D, void>(p0); } // CB2D4AB84A19AA7C 46826B53
  static void _0xBDDB2F907355FAEA(uint32_t p0) { N::Invoke<0xBDDB2F907355FAEA, void>(p0); } // 538D1179EC1AA9A9 FC0DB4C3
  static void _0xBB965A14A8819BEC(uint32_t p0) { N::Invoke<0xBB965A14A8819BEC, void>(p0); } // FFF3A50779EFBBB3 2EEDB18F
  static void _0xEECF7FBCECFDBB7E(uint32_t p0) { N::Invoke<0xEECF7FBCECFDBB7E, void>(p0); } // 5389D48EFA2F079A 43E92628
  static void ROPE_LOAD_TEXTURES() { N::Invoke<0xAD25F191C2D4862B, void>(); } // 9B9039DBF2D258C1 BA97CE91
  static bool _0x2B3E5A9FFCAECA3F() { return N::Invoke<0x2B3E5A9FFCAECA3F, bool>(); } // F2D0E6A75CC05597 5FDC1047
  static void ROPE_UNLOAD_TEXTURES() { N::Invoke<0x92F78D0E1AD88096, void>(); } // 6CE36C35C1AC8163 584463E0
  static uint32_t _0x17DB9AE677159E77() { return N::Invoke<0x17DB9AE677159E77, uint32_t>(); } // 271C9D3ACA5D6409
  static void _0x6BD9FCE842024E2E(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12, uint32_t p13) { N::Invoke<0x6BD9FCE842024E2E, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // BC0CE682D4D05650 106BA127
  static void _0xFDA23F0FB8466733(uint32_t p0, bool p1, bool p2) { N::Invoke<0xFDA23F0FB8466733, void>(p0, p1, p2); } // B1B6216CA2E7B55E 7C6F7668
  static void _0xD5A375229EA0C787(uint32_t p0, uint32_t p1) { N::Invoke<0xD5A375229EA0C787, void>(p0, p1); } // B743F735C03D7810 686672DD
  static float _0xF4A6C19A72265069(uint32_t p0) { return N::Invoke<0xF4A6C19A72265069, float>(p0); } // 73040398DFF9A4A6 FD309DC8
  static void ROPE_FORCE_LENGTH(uint32_t p0, float p1) { N::Invoke<0xD69801FF65CC4DAF, void>(p0, p1); } // D009F759A723DB1B ABF3130F
  static void ROPE_RESET_LENGTH(uint32_t p0, bool p1) { N::Invoke<0x4F44BDD9DD44A1DF, void>(p0, p1); } // C16DE94D9BEA14A0 C8A423A3
  static void _0x4524D16B76927B50(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { N::Invoke<0x4524D16B76927B50, void>(p0, p1, p2, p3, p4, p5, p6); } // E37F721824571784 A2A5C9FE
  static void SET_DAMPING(uint32_t p0, uint32_t p1, float p2) { N::Invoke<0xB4B1BA73A75F5208, void>(p0, p1, p2); } // EEA3B200A6FEB65B CFB37773
  static void ACTIVATE_PHYSICS(uint32_t p0) { N::Invoke<0xC18E5D819BB888B, void>(p0); } // 710311ADF0E20730 031711B8
  static void _0x2C0D13B555386850(uint32_t p0, float p1, float p2, float p3) { N::Invoke<0x2C0D13B555386850, void>(p0, p1, p2, p3); } // D8FA3908D7B86904 59910AB2
  static Vector3 _0xBD58634EFC7D8DB0(uint32_t p0) { return N::Invoke<0xBD58634EFC7D8DB0, Vector3>(p0); } // 8214A4B5A7A33612 49A11F0D
  static void _0x28B16D290672BD40(uint32_t p0) { N::Invoke<0x28B16D290672BD40, void>(p0); } // BE520D9761FF811F A5B55421
  static void BREAK_ENTITY_GLASS(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, bool p10) { N::Invoke<0x58BDE5167AAC6009, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 2E648D16F6E308F3 D0E0402F
  static void SET_DISABLE_BREAKING(uint32_t p0, bool p1) { N::Invoke<0x4D9470D67663A76C, void>(p0, p1); } // 5CEC1A84620E7D5B EE77C326
  static uint32_t _0x26DE83C354F34CAD() { return N::Invoke<0x26DE83C354F34CAD, uint32_t>(); } // CC6E963682533882
  static void _0x0D7C58CF8463D1510(uint32_t p0, bool p1) { N::Invoke<0xD7C58CF8463D1510, void>(p0, p1); } // 01BA3AED21C16CFB 97269DC8
}

namespace WATER
{
  static bool GET_WATER_HEIGHT(float p0, float p1, float p2, uint32_t *p3) { return N::Invoke<0xB27F8CEA1C1CB3A6, bool>(p0, p1, p2, p3); } // F6829842C06AE524 D864E17C
  static bool GET_WATER_HEIGHT_NO_WAVES(float p0, float p1, float p2, uint32_t *p3) { return N::Invoke<0xAD7BE04AE98198AF, bool>(p0, p1, p2, p3); } // 8EE6B53CE13A9794 262017F8
  static uint32_t _0x48538B9EA42C034F(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6) { return N::Invoke<0x48538B9EA42C034F, uint32_t>(p0, p1, p2, p3, p4, p5, p6); } // FFA5D878809819DB AA4AE00C
  static uint32_t _0x41CAD76404DF0CCA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7) { return N::Invoke<0x41CAD76404DF0CCA, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7); } // 8974647ED222EA5F 4A962D55
  static uint32_t _0xB350E3504F18AE9E(float p0, float p1, float p2, uint32_t p3, uint32_t *p4) { return N::Invoke<0xB350E3504F18AE9E, uint32_t>(p0, p1, p2, p3, p4); } // 2B3451FA1E3142E2 4C71D143
  static void MODIFY_WATER(float p0, float p1, float p2, float p3) { N::Invoke<0x6E5E583337B2D562, void>(p0, p1, p2, p3); } // C443FD757C3BA637 C49E005A
  static uint32_t _0xF2D10B85A374AA6A() { return N::Invoke<0xF2D10B85A374AA6A, uint32_t>(); } // FDBF4CDBC07E1706
  static uint32_t _0x76125BC6295BCC83() { return N::Invoke<0x76125BC6295BCC83, uint32_t>(); } // B1252E3E59A82AAF
  static uint32_t _0x3BCEC403674CCBAC() { return N::Invoke<0x3BCEC403674CCBAC, uint32_t>(); } // B96B00E976BE977F
  static uint32_t _0x16FE3042FB1E17C8() { return N::Invoke<0x16FE3042FB1E17C8, uint32_t>(); } // 2B2A2CC86778B619
  static uint32_t _0xCEE30EED5028E5B2() { return N::Invoke<0xCEE30EED5028E5B2, uint32_t>(); } // 5E5E99285AE812DB
}

namespace WORLDPROBE
{
  static uint32_t _0x9400A3EC34709233(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8) { return N::Invoke<0x9400A3EC34709233, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 7EE9F5D83DD4F90E EFAF4BA6
  static uint32_t _0x76AC96FD8F95E946(float p0, float p1, float p2, float p3, float p4, float p5, uint32_t p6, uint32_t p7, uint32_t p8) { return N::Invoke<0x76AC96FD8F95E946, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 377906D8A31E5586 8251485D
  static uint32_t _0x0643CBFFDA91D4D9D(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x643CBFFDA91D4D9D, uint32_t>(p0, p1, p2); } // 052837721A854EC7 CEEAD94B
  static uint32_t _0x10C1AA389D3AB1F5(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, uint32_t p9, uint32_t p10, uint32_t p11, uint32_t p12) { return N::Invoke<0x10C1AA389D3AB1F5, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // FE466162C4401D18 249BC876
  static uint32_t _0xA9E107B3B2ABCE55(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xA9E107B3B2ABCE55, uint32_t>(p0, p1, p2); } // 37181417CE7C8900 13BC46C0
  static uint32_t _0x46668681EA3C2CF0(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { return N::Invoke<0x46668681EA3C2CF0, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 28579D1B8F8AAC80 591EA833
  static uint32_t _0x8272E1A38E356C6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, uint32_t p7, uint32_t p8, uint32_t p9) { return N::Invoke<0x8272E1A38E356C6, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // E6AC6C45FBE83004 4559460A
  static uint32_t _0xBA8684A76CC2961A() { return N::Invoke<0xBA8684A76CC2961A, uint32_t>(); } // FF6BE494C7987F34
  static uint32_t _0xBFABF77FCEA8BA3F(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0xBFABF77FCEA8BA3F, uint32_t>(p0, p1, p2, p3, p4); } // 3D87450E15D98694 F3C2875A
  static uint32_t _0x57DE6ED9CC51E26C(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x57DE6ED9CC51E26C, uint32_t>(p0, p1, p2, p3, p4, p5); } // 65287525D951F6BE 4301E10C
  static void _0x4CF3E8F2A18BEA95(uint32_t p0) { N::Invoke<0x4CF3E8F2A18BEA95, void>(p0); } // 2B3334BCA57CD799 EC2AAF06
}

namespace NETWORK
{
  static uint32_t _0x52D372934747F2B0() { return N::Invoke<0x52D372934747F2B0, uint32_t>(); } // FCA9373EF340AC0A
  static bool NETWORK_IS_SIGNED_IN() { return N::Invoke<0xA730AA29D1C70932, bool>(); } // 054354A99211EB96 ADD0B40F
  static bool NETWORK_IS_SIGNED_ONLINE() { return N::Invoke<0xE4B4CA22DBCFA69, bool>(); } // 1077788E268557C2 6E5BDCE2
  static uint32_t _0x15ADFB66D6CE78C0() { return N::Invoke<0x15ADFB66D6CE78C0, uint32_t>(); } // BD545D44CCE70597
  static uint32_t _0xD1F5C4172180392E() { return N::Invoke<0xD1F5C4172180392E, uint32_t>(); } // EBCAB9E5048434F4
  static uint32_t _0xDFDA2808EFCE872D() { return N::Invoke<0xDFDA2808EFCE872D, uint32_t>(); } // 74FB3E29E6D10FA9
  static uint32_t _0x54BA5C126C9F5DC0() { return N::Invoke<0x54BA5C126C9F5DC0, uint32_t>(); } // 7808619F31FF22DB
  static uint32_t _0x97D3E4DD829153DC() { return N::Invoke<0x97D3E4DD829153DC, uint32_t>(); } // A0FA4EC6A05DA44E
  static bool _0x72B3C5483AF02F51() { return N::Invoke<0x72B3C5483AF02F51, bool>(); } // 85443FF4C328F53B 3FB40673
  static uint32_t _0x7E51951701EA8C9C() { return N::Invoke<0x7E51951701EA8C9C, uint32_t>(); } // 8D11E61A4ABF49CC
  static bool NETWORK_IS_CLOUD_AVAILABLE() { return N::Invoke<0x5F65F01B2E04B349, bool>(); } // 9A4CF4F48AD77302 C7FF5AFC
  static bool _0xA4524458CE5990BF() { return N::Invoke<0xA4524458CE5990BF, bool>(); } // 67A5589628E0CFF6 66EC713F
  static bool _0xAB519D48E89D4814() { return N::Invoke<0xAB519D48E89D4814, bool>(); } // BA9775570DB788CF 358D1D77
  static bool NETWORK_IS_HOST() { return N::Invoke<0x581374CD956CD916, bool>(); } // 8DB296B814EDDA07 E46AC10F
  static uint32_t _0x60C57BB4784C90AA() { return N::Invoke<0x60C57BB4784C90AA, uint32_t>(); } // A306F470D1660581
  static uint32_t _0xB5BB4A60B941F31D() { return N::Invoke<0xB5BB4A60B941F31D, uint32_t>(); } // 4237E822315D8BA9
  static bool NETWORK_HAVE_ONLINE_PRIVILEGES() { return N::Invoke<0xBBF1B75F19D2AF94, bool>(); } // 25CB5A9F37BFD063 EF63BFDF
  static uint32_t _0xD44F5752F96E0941() { return N::Invoke<0xD44F5752F96E0941, uint32_t>(); } // 1353F87E89946207
  static bool _0xC91D05FCB0DA28F6(uint32_t p0) { return N::Invoke<0xC91D05FCB0DA28F6, bool>(p0); } // 72D918C99BCACC54 1F88819D
  static bool _0xA948986572BA242B(uint32_t p0, uint32_t p1) { return N::Invoke<0xA948986572BA242B, bool>(p0, p1); } // AEEF48CDF5B6CE7C 2D817A5E
  static uint32_t _0xBF939973F011C9B9() { return N::Invoke<0xBF939973F011C9B9, uint32_t>(); } // 78321BEA235FD8CD
  static bool _0xC63711FE8D9F440A(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xC63711FE8D9F440A, bool>(p0, p1, p2); } // 595F028698072DD9 BB54AA3D
  static uint32_t _0x1D85B30183285B97() { return N::Invoke<0x1D85B30183285B97, uint32_t>(); } // 83F28CE49FBBFFBA
  static uint32_t _0x25F8EC97D0710045() { return N::Invoke<0x25F8EC97D0710045, uint32_t>(); } // 76BF03FADBF154F5
  static uint32_t _0x8AFF49260615C795() { return N::Invoke<0x8AFF49260615C795, uint32_t>(); } // 9614B71F8ADB982B
  static uint32_t _0x8BE1B6A8AF84E85F() { return N::Invoke<0x8BE1B6A8AF84E85F, uint32_t>(); } // 5EA784D197556507
  static uint32_t _0x6C8E92D4F56B150E() { return N::Invoke<0x6C8E92D4F56B150E, uint32_t>(); } // A8ACB6459542A8C8
  static uint32_t _0x8BCAA6ACC61DF007() { return N::Invoke<0x8BCAA6ACC61DF007, uint32_t>(); } // 83FE8D7229593017
  static bool _0x1E296600C34BA193() { return N::Invoke<0x1E296600C34BA193, bool>(); } // 580CE4438479CC61 60E1FEDF
  static void NETWORK_BAIL() { N::Invoke<0xE3E004AF58906931, void>(); } // 95914459A87EBA28 87D79A04
  static void _0x72A449DF861CCD98() { N::Invoke<0x72A449DF861CCD98, void>(); } // 283B6062A2C01E9B 96E28FE2
  static bool _0xB1B150F16B4B82F4(uint32_t *p0) { return N::Invoke<0xB1B150F16B4B82F4, bool>(p0); } // AF50DA1A3F8B1BA4 A520B982
  static bool _0x7312F247C4673540() { return N::Invoke<0x7312F247C4673540, bool>(); } // 9747292807126EDA 05518C0F
  static bool NETWORK_CAN_ENTER_MULTIPLAYER() { return N::Invoke<0xEE19A033ABB7EEEE, bool>(); } // 7E782A910C362C25 4A23B9C9
  static uint32_t NETWORK_SESSION_ENTER(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x57E9A335D87D3C04, uint32_t>(p0, p1, p2, p3, p4, p5); } // 330ED4D05491934F 543CD2BE
  static bool _0xB5FC4ADFB510C91C(uint32_t p0, uint32_t p1, uint32_t p2, bool p3) { return N::Invoke<0xB5FC4ADFB510C91C, bool>(p0, p1, p2, p3); } // 2CFC76E0D087C994 4E53202A
  static bool _0x5F6784BECA53D0DE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, bool p4) { return N::Invoke<0x5F6784BECA53D0DE, bool>(p0, p1, p2, p3, p4); } // 94BC51E9449D917F D7624E6B
  static bool _0x38DC83FDA3896B7A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x38DC83FDA3896B7A, bool>(p0, p1, p2, p3); } // BE3E347A87ACEB82 3F75CC38
  static bool NETWORK_SESSION_HOST(uint32_t p0, uint32_t p1, bool p2) { return N::Invoke<0xC145DAA33405D124, bool>(p0, p1, p2); } // 6F3D4ED9BEE4E61D 6716460F
  static bool _0x809FA71A3B38EFA4(uint32_t p0, uint32_t p1) { return N::Invoke<0x809FA71A3B38EFA4, bool>(p0, p1); } // ED34C0C02C098BB7 8AC9EA19
  static bool NETWORK_SESSION_HOST_FRIENDS_ONLY(uint32_t p0, uint32_t p1) { return N::Invoke<0x9CDE54643F082129, bool>(p0, p1); } // B9CFD27A5D578D83 26864403
  static bool _0x20778865CB6946C4() { return N::Invoke<0x20778865CB6946C4, bool>(); } // FBCFA2EA2E206890 56E75FE4
  static bool _0x3CF738BBB9A8372B() { return N::Invoke<0x3CF738BBB9A8372B, bool>(); } // 74732C6CA90DA2B4 A95299B9
  static bool _0x56C339A17D4102E5() { return N::Invoke<0x56C339A17D4102E5, bool>(); } // F3929C2379B60CCE 3D2C1916
  static bool _0x64182B770CC5AF45() { return N::Invoke<0x64182B770CC5AF45, bool>(); } // CEF70AA5B3F89BA1 DB67785D
  static bool NETWORK_SESSION_END(bool p0, bool p1) { return N::Invoke<0xE3917E4D608D7D, bool>(p0, p1); } // A02E59562D711006 BCACBEA2
  static void NETWORK_SESSION_KICK_PLAYER(uint32_t p0) { N::Invoke<0x531AA7084B2B9A64, void>(p0); } // FA8904DC5F304220 1E20138A
  static bool _0x7D76E3EA9E082DD9(uint32_t p0) { return N::Invoke<0x7D76E3EA9E082DD9, bool>(p0); } // D6D09A6F32F49EF1 8A559D26
  static uint32_t _0x197559FB40270739() { return N::Invoke<0x197559FB40270739, uint32_t>(); } // 59DF79317F85A7E0
  static uint32_t _0x74B9283A24EF798E() { return N::Invoke<0x74B9283A24EF798E, uint32_t>(); } // FFE1E5B792D92B34
  static void _0x24E01D4C14E3F20E(uint32_t p0) { N::Invoke<0x24E01D4C14E3F20E, void>(p0); } // 49EC8030F5015F8B 3C3E2AB6
  static void _0x581E51DE9A868E89(uint32_t p0, uint32_t p1) { N::Invoke<0x581E51DE9A868E89, void>(p0, p1); } // 8B6A4DD0AF9CE215 5F29A7E0
  static uint32_t _0xA72830288D44B063(uint32_t p0) { return N::Invoke<0xA72830288D44B063, uint32_t>(p0); } // 56CE820830EF040B 36EAD960
  static void _0x80571E35A63416EB(uint32_t p0) { N::Invoke<0x80571E35A63416EB, void>(p0); } // CAE55F48D3D7875C 5BE529F7
  static void _0xC354BCDF219C192(uint32_t p0) { N::Invoke<0xC354BCDF219C192, void>(p0); } // F49ABC20D8552257 454C7B67
  static void _0xE365A413E4AB79B1(uint32_t p0) { N::Invoke<0xE365A413E4AB79B1, void>(p0); } // 4811BBAC21C5FCD5 E5961511
  static void _0xDFFFF8FA5D87115(bool p0) { N::Invoke<0xDFFFF8FA5D87115, void>(p0); } // 5539C3EBF104A53A AE396263
  static void _0xC956F5FBF50C5B4D(uint32_t p0) { N::Invoke<0xC956F5FBF50C5B4D, void>(p0); } // 702BC4D605522539 913FD7D6
  static void _0xE537E3D1B3ED07C(bool p0) { N::Invoke<0xE537E3D1B3ED07C, void>(p0); } // 3F52E880AAF6C8CA B3D9A67F
  static void _0xA0893682894A5DFA(uint32_t p0) { N::Invoke<0xA0893682894A5DFA, void>(p0); } // F1EEA2DDA9FFA69D 6CC062FC
  static void _0xD8EEE077FEF5D2EE() { N::Invoke<0xD8EEE077FEF5D2EE, void>(); } // 1153FA02A659051C 57F9BC83
  static void _0x959D08A2A2C7D17F(bool p0) { N::Invoke<0x959D08A2A2C7D17F, void>(p0); } // C19F6C8E7865A6FF F3768F90
  static void _0xE99A27946CE8E1D3(uint32_t *p0, uint32_t p1) { N::Invoke<0xE99A27946CE8E1D3, void>(p0, p1); } // 236406F60CF216D6 0EC62629
  static void _0x05E1485B5338AE56B() { N::Invoke<0x5E1485B5338AE56B, void>(); } // 058F43EC59A8631A 5E557307
  static void _0x41B5A23A4D978CAE(uint32_t *p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x41B5A23A4D978CAE, void>(p0, p1, p2); } // 6D03BFBD643B2A02 74E8C53E
  static void _0xCF25B7144365B6C4(uint32_t p0) { N::Invoke<0xCF25B7144365B6C4, void>(p0); } // 600F8CB31C7AAB6E 959E43A3
  static bool _0x6FEC4B4CC9D4DE3B(uint32_t p0) { return N::Invoke<0x6FEC4B4CC9D4DE3B, bool>(p0); } // E532D6811B3A4D2A 7771AB83
  static bool _0x71BCDC2206204346(uint32_t p0, float p1, float p2, float p3) { return N::Invoke<0x71BCDC2206204346, bool>(p0, p1, p2, p3); } // F7B2CFDE5C9F700D A13045D4
  static bool NETWORK_IS_FINDING_GAMERS() { return N::Invoke<0x8CDE360ECA8843ED, bool>(); } // DDDF64C91BFCF0AA A6DAA79F
  static bool _0xB6891F01E19730B4() { return N::Invoke<0xB6891F01E19730B4, bool>(); } // F9B83B77929D8863 BEDC4503
  static uint32_t NETWORK_GET_NUM_FOUND_GAMERS() { return N::Invoke<0xA5BAD8A85A0F188A, uint32_t>(); } // A1B043EE79A916FB F4B80C7E
  static bool NETWORK_GET_FOUND_GAMER(uint32_t *p0, uint32_t p1) { return N::Invoke<0x27E73373192A5767, bool>(p0, p1); } // 9DCFF2AFB68B3476 A08C9141
  static void NETWORK_CLEAR_FOUND_GAMERS() { N::Invoke<0xACC57E420A457028, void>(); } // 6D14CCEE1B40381A 6AA9A154
  static bool _0x529C216188DF4549(uint32_t *p0) { return N::Invoke<0x529C216188DF4549, bool>(p0); } // 85A0EF54A500882C 42BD0780
  static bool _0x6379315D56F34266() { return N::Invoke<0x6379315D56F34266, bool>(); } // 2CC848A861D01493 BEB98840
  static bool _0x20E7062F02164437() { return N::Invoke<0x20E7062F02164437, bool>(); } // 94A8394D150B013A 08029970
  static bool _0x73BC072354A109E4() { return N::Invoke<0x73BC072354A109E4, bool>(); } // 5AE17C6B0134B7F1 C871E745
  static bool _0x0B1D50F6D059F24C1(uint32_t *p0, uint32_t p1) { return N::Invoke<0xB1D50F6D059F24C1, bool>(p0, p1); } // 02A8BEC6FD9AF660 B5ABC4B4
  static void _0xC47C624A11F2C6E6() { N::Invoke<0xC47C624A11F2C6E6, void>(); } // 86E0660E4F5C956D 3F7EDBBD
  static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { N::Invoke<0x1B2E2A4CD0944394, void>(); } // C6F8AB8A4189CF3A 3D6360B5
  static void NETWORK_SESSION_CANCEL_INVITE() { N::Invoke<0x37674934F1DD2487, void>(); } // 2FBF47B1B36D36F9 20317535
  static void _0xFFE9E412D439BF63() { N::Invoke<0xFFE9E412D439BF63, void>(); } // A29177F7703B5644 3FD49D3B
  static bool NETWORK_HAS_PENDING_INVITE() { return N::Invoke<0xF8A03C31557ED686, bool>(); } // AC8C7B9B88C4A668 0C207D6E
  static uint32_t _0xE49B8EC0B318F452() { return N::Invoke<0xE49B8EC0B318F452, uint32_t>(); } // C42DD763159F3461 FBBAC350
  static bool _0xF6A0AC93A2A3865B() { return N::Invoke<0xF6A0AC93A2A3865B, bool>(); } // 62A0296C1BB1CEB3 0907A6BF
  static uint32_t _0x81DA40D94D4F5622() { return N::Invoke<0x81DA40D94D4F5622, uint32_t>(); } // 23DFB504655D0CE4 6A0BEA60
  static void NETWORK_SESSION_GET_INVITER(uint32_t *p0) { N::Invoke<0x703E2DF2988146F8, void>(p0); } // E57397B4A3429DD0 E9C6B3FD
  static bool _0x19A011A69A24FC4C() { return N::Invoke<0x19A011A69A24FC4C, bool>(); } // D313DE83394AF134 3EA9D44C
  static uint32_t _0x6D03B36B063CDF() { return N::Invoke<0x6D03B36B063CDF, uint32_t>(); } // BDB6F89C729CF388
  static void NETWORK_SUPPRESS_INVITE(bool p0) { N::Invoke<0x173F2A184D62D794, void>(p0); } // A0682D67EF1FBA3D 323DC78C
  static void NETWORK_BLOCK_INVITES(bool p0) { N::Invoke<0x705FA48E5697018F, void>(p0); } // 34F9E9049454A7A0 D156FD1A
  static uint32_t _0xEE98C7A3BB25382A() { return N::Invoke<0xEE98C7A3BB25382A, uint32_t>(); } // CFEB8AF24FC1D0BB
  static void _0x72ECBE6703E2ECCC() { N::Invoke<0x72ECBE6703E2ECCC, void>(); } // F814FEC6A19FD6E0 32B7A076
  static void _0x8A336F517BEF9569(bool p0) { N::Invoke<0x8A336F517BEF9569, void>(p0); } // 6B07B9CE4D390375 0FCE995D
  static void _0x6E761E21A4A8DB09(bool p0) { N::Invoke<0x6E761E21A4A8DB09, void>(p0); } // 7AC752103856FB20 A639DCA2
  static bool _0x199278F86069A256() { return N::Invoke<0x199278F86069A256, bool>(); } // 74698374C45701D2 70ED476A
  static void _0xEF4899DB4D75491() { N::Invoke<0xEF4899DB4D75491, void>(); } // 140E6A44870A11CE 50507BED
  static void NETWORK_SESSION_HOST_SINGLE_PLAYER(uint32_t p0) { N::Invoke<0xE9A83D3659E54BEF, void>(p0); } // C74C33FCA52856D5 F3B1CA85
  static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { N::Invoke<0xF0FEC28CF157A0CB, void>(); } // 3442775428FD2DAA C692F86A
  static uint32_t NETWORK_IS_GAME_IN_PROGRESS() { return N::Invoke<0xD95428C8AA1DBBF2, uint32_t>(); } // 10FAB35428CCC9D7 09B88E3E
  static bool NETWORK_IS_SESSION_ACTIVE() { return N::Invoke<0x1E4D433A48A6F7DC, bool>(); } // D83C2B94E7508980 715CB8C4
  static bool NETWORK_IS_IN_SESSION() { return N::Invoke<0xD5762A6870CA7430, bool>(); } // CA97246103B63917 4BC4105E
  static bool NETWORK_IS_SESSION_STARTED() { return N::Invoke<0x452817FC180A1B56, bool>(); } // 9DE624D2FC4B603F 9D854A37
  static bool NETWORK_IS_SESSION_BUSY() { return N::Invoke<0x7AF31E5812BF13B, bool>(); } // F4435D66A8E2905E 8592152D
  static bool NETWORK_CAN_SESSION_END() { return N::Invoke<0x15D7469B63A1F2A7, bool>(); } // 4EEBC3694E49C572 E1FCCDBA
  static void _0x3F93764742382AA9(bool p0) { N::Invoke<0x3F93764742382AA9, void>(p0); } // 271CC6AB59EBF9A5 7017257D
  static uint32_t _0xB8AEB705FE005986() { return N::Invoke<0xB8AEB705FE005986, uint32_t>(); } // BA416D68C631496A 4977AC28
  static void _0x41DA4911D6725B35(bool p0) { N::Invoke<0x41DA4911D6725B35, void>(p0); } // A73667484D7037C3 E6EEF8AF
  static void _0xAA5B5DFB4FED5F1E(uint32_t p0, uint32_t p1) { N::Invoke<0xAA5B5DFB4FED5F1E, void>(p0, p1); } // B4AB419E0D86ACAE 6BB93227
  static uint32_t _0x9D54D1B3B6AC4DB2() { return N::Invoke<0x9D54D1B3B6AC4DB2, uint32_t>(); } // 53AFD64C6758F2F9
  static void NETWORK_SESSION_VOICE_HOST() { N::Invoke<0x84F393FF709C6230, void>(); } // 9C1556705F864230 345C2980
  static void NETWORK_SESSION_VOICE_LEAVE() { N::Invoke<0xE0EAE35FBD38899, void>(); } // 6793E42BE02B575D E566C7DA
  static void _0xF8D4D87208452DBF(uint32_t *p0) { N::Invoke<0xF8D4D87208452DBF, void>(p0); } // ABD5E88B8A2D3DB2 9DFD89E6
  static void NETWORK_SET_KEEP_FOCUSPOINT(bool p0, uint32_t p1) { N::Invoke<0xDF11CF2E352E2FFB, void>(p0, p1); } // 7F8413B7FC2AA6B9 075321B5
  static void _0x3EE95D22EAE5A902(uint32_t p0) { N::Invoke<0x3EE95D22EAE5A902, void>(p0); } // 5B8ED3DB018927B1 6EFC2FD0
  static bool _0x734AE915F79C37CE() { return N::Invoke<0x734AE915F79C37CE, bool>(); } // 855BC38818F6F684 60AA4AA1
  static uint32_t _0x7C0AB05906BE47F() { return N::Invoke<0x7C0AB05906BE47F, uint32_t>(); } // B5D3453C98456528
  static bool _0xD2F7650899BABBF8() { return N::Invoke<0xD2F7650899BABBF8, bool>(); } // EF0912DDF7C4CB4B 132CA01E
  static bool NETWORK_SEND_TEXT_MESSAGE(const char *p0, uint64_t* p1) { return N::Invoke<0xE1C404578F35ECB9, bool>(p0, p1); } // 3A214F2EC889B100 AFFEA720
  static void NETWORK_SET_ACTIVITY_SPECTATOR(bool p0) { N::Invoke<0xF82E1F630503B034, void>(p0); } // 75138790B4359A74 FC9AD060
  static uint32_t NETWORK_IS_ACTIVITY_SPECTATOR() { return N::Invoke<0xE80CFBE8CE6466F8, uint32_t>(); } // 12103B9E0C9F92FB AF329720
  static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(uint32_t p0) { N::Invoke<0x1732494BD79FD922, void>(p0); } // 9D277B76D1D12222 74E0BC0A
  static uint32_t NETWORK_GET_ACTIVITY_PLAYER_NUM(bool p0) { return N::Invoke<0xA1518C9DF2C571A0, uint32_t>(p0); } // 73E2B500410DA5A2 31F951FD
  static uint32_t NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(uint32_t *p0) { return N::Invoke<0xBE22C00DCB67EBE2, uint32_t>(p0); } // 2763BBAA72A7BCB9 58F1DF7D
  static uint32_t NETWORK_HOST_TRANSITION(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0xA003619DFE231014, uint32_t>(p0, p1, p2, p3, p4, p5); } // A60BB5CE242BB254 146764FB
  static bool _0x30CE85004F919BBA(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x30CE85004F919BBA, bool>(p0, p1, p2, p3); } // 71FB0EBCD4915D56 2FF65C0B
  static bool _0x4811354204245ECC(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x4811354204245ECC, bool>(p0, p1, p2, p3); } // A091A5E44F0072E5 47D61C99
  static bool _0x60D338F516C6222A(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t *p4, uint32_t p5) { return N::Invoke<0x60D338F516C6222A, bool>(p0, p1, p2, p3, p4, p5); } // 9C4AB58491FDC98A 5CE60A11
  static bool _0x99290C7A9CA5BCDA() { return N::Invoke<0x99290C7A9CA5BCDA, bool>(); } // A06509A691D12BE4 0D7E5CF9
  static void _0x64E930151A0D95CF() { N::Invoke<0x64E930151A0D95CF, void>(); } // B13E88E655E5A3BC 36A5F2DA
  static uint32_t _0x3A84499399E5CE87() { return N::Invoke<0x3A84499399E5CE87, uint32_t>(); } // 6512765E3BE78C50
  static uint32_t _0xD90CB6C3CFBB4BFB() { return N::Invoke<0xD90CB6C3CFBB4BFB, uint32_t>(); } // DBD5D7E3C5BEC3B
  static uint32_t _0x84F044EC4BD14DCB() { return N::Invoke<0x84F044EC4BD14DCB, uint32_t>(); } // 5DC577201723960A
  static uint32_t _0xB7B470D7DF077F5C() { return N::Invoke<0xB7B470D7DF077F5C, uint32_t>(); } // 5A6AA44FF8E931E6
  static void _0xD88F70BCF3A9D8FC(bool p0) { N::Invoke<0xD88F70BCF3A9D8FC, void>(p0); } // 261E97AD7BCF3D40 7EF353E1
  static void _0x19F4C5FF6D3907F7(bool p0) { N::Invoke<0x19F4C5FF6D3907F7, void>(p0); } // 39917E1B4CB0F911 F60986FC
  static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(uint32_t *p0) { N::Invoke<0x3FFBF0BF806563CD, void>(p0); } // EF26739BCD9907D5 1DD01FE7
  static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { N::Invoke<0x58329107F470B57E, void>(); } // FB3272229A82C759 8BB336F7
  static bool NETWORK_INVITE_GAMERS_TO_TRANSITION(uint32_t *p0, uint32_t p1) { return N::Invoke<0x6333288B5F36B698, bool>(p0, p1); } // 4A595C32F77DFF76 5332E645
  static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(uint32_t *p0) { N::Invoke<0x46D7D97BBCA027C8, void>(p0); } // CA2C8073411ECDB6 17F1C69D
  static uint32_t NETWORK_LEAVE_TRANSITION() { return N::Invoke<0xFD2550E86ECD5E50, uint32_t>(); } // D23A1A815D21DB19 3A3599B7
  static bool NETWORK_LAUNCH_TRANSITION() { return N::Invoke<0xC9CA4D385D2067B0, bool>(); } // 2DCF46CB1A4F0884 E3570BA2
  static uint32_t _0xC63B6EF9F696DEF5() { return N::Invoke<0xC63B6EF9F696DEF5, uint32_t>(); } // A2E9C1AB8A92E8CD
  static void _0x82CA213FA367D98A() { N::Invoke<0x82CA213FA367D98A, void>(); } // EAA572036990CD1B B59D74CA
  static bool NETWORK_DO_TRANSITION_TO_GAME(bool p0, uint32_t p1) { return N::Invoke<0x7482B6A5E58FEAC3, bool>(p0, p1); } // 3E9BB38102A589B0 1B2114D2
  static bool NETWORK_DO_TRANSITION_TO_NEW_GAME(bool p0, uint32_t p1, bool p2) { return N::Invoke<0xDDD81BB432B11186, bool>(p0, p1, p2); } // 4665F51EFED00034 58AFBE63
  static bool NETWORK_DO_TRANSITION_TO_FREEMODE(uint32_t *p0, uint32_t p1, bool p2, uint32_t p3) { return N::Invoke<0xA9EC1E5F53E6342, bool>(p0, p1, p2, p3); } // 3AAD8B2FCA1E289F C7CB8ADF
  static bool NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(uint32_t *p0, uint32_t p1, uint32_t p2, bool p3, bool p4) { return N::Invoke<0x3A12EFDC4B720CB3, bool>(p0, p1, p2, p3, p4); } // 9E80A5BA8109F974 AD13375E
  static uint32_t NETWORK_IS_TRANSITION_TO_GAME() { return N::Invoke<0x1F983B24242B8980, uint32_t>(); } // 9D7696D8F4FA6CB7 17146B2B
  static uint32_t NETWORK_GET_TRANSITION_MEMBERS(uint32_t *p0, uint32_t p1) { return N::Invoke<0x9076887FD8B12099, uint32_t>(p0, p1); } // 73B000F7FBC55829 31F19263
  static void _0x3CD52ABD4A8D6C0C(uint32_t p0, uint32_t p1) { N::Invoke<0x3CD52ABD4A8D6C0C, void>(p0, p1); } // 521638ADA1BA0D18 CEE79711
  static void _0x81DAEAA09A320AD4(uint32_t p0, uint32_t *p1, bool p2) { N::Invoke<0x81DAEAA09A320AD4, void>(p0, p1, p2); } // EBEFC2E77084F599 E0C28DB5
  static bool NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3, bool p4) { return N::Invoke<0xCB681D685A344ECC, bool>(p0, p1, p2, p3, p4); } // 31D1D2B858D25E6B 468B0884
  static bool NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(uint32_t *p0) { return N::Invoke<0x84F5BEC0C7CBE89E, bool>(p0); } // 5728BB6D63E3FF1D 03383F57
  static bool NETWORK_IS_TRANSITION_HOST() { return N::Invoke<0xC81E947A9B8DB6C1, bool>(); } // 0B824797C9BF2159 0C0900BC
  static bool NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(uint32_t *p0) { return N::Invoke<0x50840D79564620AE, bool>(p0); } // 6B5C83BA3EFE6A10 0E2854C4
  static bool NETWORK_GET_TRANSITION_HOST(uint32_t *p0) { return N::Invoke<0x87A69D98991B1062, bool>(p0); } // 65042B9774C4435E 73098D40
  static uint32_t NETWORK_IS_IN_TRANSITION() { return N::Invoke<0x4EAB5B2233889408, uint32_t>(); } // 68049AEFF83D8F0A C3CDB626
  static uint32_t NETWORK_IS_TRANSITION_STARTED() { return N::Invoke<0x5EEC2C7CDF25271C, uint32_t>(); } // 53FA83401D9C07FE 7917E111
  static uint32_t NETWORK_IS_TRANSITION_BUSY() { return N::Invoke<0x5E1E03EEE25C3409, uint32_t>(); } // 520F3282A53D26B7 A357A2C6
  static uint32_t _0x3AB2B9170251C863() { return N::Invoke<0x3AB2B9170251C863, uint32_t>(); } // 292564C735375EDF 8262C70E
  static uint32_t _0x2AF95565CC9CCCB2() { return N::Invoke<0x2AF95565CC9CCCB2, uint32_t>(); } // C571D0E77D8BBC29
  static void _0x9DCBCE87AA2359FE() { N::Invoke<0x9DCBCE87AA2359FE, void>(); } // 2B3A8F7CA3A38FDE C71E607B
  static void _0xBE566F180F41C3FC() { N::Invoke<0xBE566F180F41C3FC, void>(); } // 43F4DBA69710E01E 82D32D07
  static bool _0x909ECF9DACCA3495() { return N::Invoke<0x909ECF9DACCA3495, bool>(); } // 37A4494483B9F5C9 C901AA9F
  static uint32_t _0x74AC9028492EF5D() { return N::Invoke<0x74AC9028492EF5D, uint32_t>(); } // C978FDA19692C2C
  static uint32_t _0x50B98204CB3F2D39() { return N::Invoke<0x50B98204CB3F2D39, uint32_t>(); } // D0A484CB2F829FBE
  static void _0x138BD4DEF8321312(uint32_t p0) { N::Invoke<0x138BD4DEF8321312, void>(p0); } // 30DE938B516F0AD2 CCA9C022
  static void _0x9703CAB6269F516B(uint32_t p0, uint32_t p1) { N::Invoke<0x9703CAB6269F516B, void>(p0, p1); } // EEEDA5E6D7080987 1E5F6AEF
  static void _0x9013F784A4987620(bool p0) { N::Invoke<0x9013F784A4987620, void>(p0); } // 973D76AA760A6CB6 0532DDD2
  static bool NETWORK_HAS_PLAYER_STARTED_TRANSITION(uint32_t p0) { return N::Invoke<0x857597190150575B, bool>(p0); } // 9AC9CCBFA8C29795 4ABD1E59
  static bool _0xAF0E4C98464E4A39(uint32_t p0) { return N::Invoke<0xAF0E4C98464E4A39, bool>(p0); } // 2615AA2A695930C1 CDEBCCE7
  static bool NETWORK_JOIN_TRANSITION(uint32_t p0) { return N::Invoke<0xAC9BB15E5D72D468, bool>(p0); } // 9D060B08CD63321A B054EC4B
  static bool _0xBCE0455A4726689B(uint32_t *p0) { return N::Invoke<0xBCE0455A4726689B, bool>(p0); } // 7284A47B3540E6CF 4F41DF6B
  static uint32_t _0x3FDC33BF02B383DB() { return N::Invoke<0x3FDC33BF02B383DB, uint32_t>(); } // 3F9990BF5F22759C
  static bool NETWORK_IS_ACTIVITY_SESSION() { return N::Invoke<0x971F0C5992C6780, bool>(); } // 05095437424397FA 577DAA8A
  static void _0x87503E0E47E86295(uint32_t p0) { N::Invoke<0x87503E0E47E86295, void>(p0); } // 4A9FDE3A5A6D0437 18F03AFD
  static bool _0xF891D11A51794EB3(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xF891D11A51794EB3, bool>(p0, p1, p2, p3); } // C3C7A6AFDB244624 8B99B72B
  static bool _0x89660F74ADF6E369(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x89660F74ADF6E369, bool>(p0, p1, p2, p3); } // C116FF9B4D488291 877C0E1C
  static uint32_t _0xA3407DF77EB0E6F1() { return N::Invoke<0xA3407DF77EB0E6F1, uint32_t>(); } // 1171A97A3D3981B6
  static uint32_t _0x5F0FBB285CAE0703(uint32_t p0) { return N::Invoke<0x5F0FBB285CAE0703, uint32_t>(p0); } // 742B58F723233ED9 5E832444
  static uint32_t _0x16413FF522F6F328() { return N::Invoke<0x16413FF522F6F328, uint32_t>(); } // CEFA968912D0F78D 3FDA00F3
  static bool NETWORK_ACCEPT_PRESENCE_INVITE(uint32_t p0) { return N::Invoke<0x408DB1789CFE30A5, bool>(p0); } // FA91550DF9318B22 E5DA4CED
  static bool _0x5A24372B5B3E4B26(uint32_t p0) { return N::Invoke<0x5A24372B5B3E4B26, bool>(p0); } // F0210268DB0974B1 93C665FA
  static uint32_t _0x9D850C06018F49E(uint32_t p0) { return N::Invoke<0x9D850C06018F49E, uint32_t>(p0); } // DFF09646E12EC386 D50DF46C
  static uint32_t _0x4BA54829D69C29D(uint32_t p0) { return N::Invoke<0x4BA54829D69C29D, uint32_t>(p0); } // 4962CC4AA2F345B7 19EC65D9
  static bool NETWORK_GET_PRESENCE_INVITE_HANDLE(uint32_t p0, uint32_t *p1) { return N::Invoke<0xE33C905B20D9505C, bool>(p0, p1); } // 38D5B0FEBB086F75 B2451429
  static uint32_t _0xAA61F9720822A7EE(uint32_t p0) { return N::Invoke<0xAA61F9720822A7EE, uint32_t>(p0); } // 26E1CD96B0903D60 C5E0C989
  static uint32_t _0xA312C1D458D0F1F5(uint32_t p0) { return N::Invoke<0xA312C1D458D0F1F5, uint32_t>(p0); } // 24409FC4C55CB22D A4302183
  static uint32_t _0xE81FCA21231F5F8A(uint32_t p0) { return N::Invoke<0xE81FCA21231F5F8A, uint32_t>(p0); } // D39B3FFF8FFDD5BF 51B2D848
  static uint32_t _0x5FBAB3D18A11B1B7(uint32_t p0) { return N::Invoke<0x5FBAB3D18A11B1B7, uint32_t>(p0); } // 728C4CC7920CD102 4677C656
  static bool _0xA294D4127E525BAC(uint32_t p0) { return N::Invoke<0xA294D4127E525BAC, bool>(p0); } // 3DBF2DF0AEB7D289 F5E3401C
  static bool _0x1450675C5E729280(uint32_t p0) { return N::Invoke<0x1450675C5E729280, bool>(p0); } // 8806CEBFABD3CE05 7D593B4C
  static bool _0xF94F8D000237823A() { return N::Invoke<0xF94F8D000237823A, bool>(); } // 76D9B976C4C09FDE E96CFE7D
  static bool _0x299B8C19B48DEABB() { return N::Invoke<0x299B8C19B48DEABB, bool>(); } // C88156EBB786F8D5 AB969F00
  static bool _0x7492CE68CF4208F6() { return N::Invoke<0x7492CE68CF4208F6, bool>(); } // 439BFDE3CD0610F6 3242F952
  static void _0x73169F47F6E2434E() { N::Invoke<0x73169F47F6E2434E, void>(); } // EBF8284D8CADEB53 9773F36A
  static void NETWORK_REMOVE_TRANSITION_INVITE(uint32_t *p0) { N::Invoke<0xCC7AA13AE665D7B9, void>(p0); } // 7524B431B2E6F7EE FDE84CB7
  static void _0xB11A8725DE11DA85() { N::Invoke<0xB11A8725DE11DA85, void>(); } // 726E0375C7A26368 F7134E73
  static void _0x7A3772DCF7C6E117() { N::Invoke<0x7A3772DCF7C6E117, void>(); } // F083835B70BA9BFE C47352E7
  static bool NETWORK_INVITE_GAMERS(uint32_t *p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0x9AD1DBFDA4A4D753, bool>(p0, p1, p2, p3); } // 9D80CD1D0E6327DE 52FB8074
  static bool _0xFABC83CAD970B4F2(uint32_t *p0) { return N::Invoke<0xFABC83CAD970B4F2, bool>(p0); } // 4D86CD31E8976ECE EC651BC0
  static bool NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(uint32_t *p0) { return N::Invoke<0x39C89794FF7547D6, bool>(p0); } // 74881E6BCAE2327C 72BA00CE
  static bool NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(uint32_t *p0) { return N::Invoke<0x120C5B476EA561A9, bool>(p0); } // 7206F674F2A3B1BB FD95899E
  static uint32_t _0x8CEA7DF8B56A0527() { return N::Invoke<0x8CEA7DF8B56A0527, uint32_t>(); } // 66F010A4B031A331
  static uint32_t _0x30784345827F9569() { return N::Invoke<0x30784345827F9569, uint32_t>(); } // 44B37CDCAE765AAE
  static void _0x0880E5DC8910002CB(uint32_t *p0, uint32_t *p1) { N::Invoke<0x880E5DC8910002CB, void>(p0, p1); } // 0D77A82DC2D0DA59 0808D4CC
  static bool FILLOUT_PM_PLAYER_LIST(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x906617497ABEF434, bool>(p0, p1, p2); } // CBBD7C4991B64809 CE40F423
  static bool FILLOUT_PM_PLAYER_LIST_WITH_NAMES(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xBDD5BCC9D584461E, bool>(p0, p1, p2, p3); } // 716B6DB9D1886106 B8DF604E
  static bool USING_NETWORK_WEAPONTYPE(uint32_t p0) { return N::Invoke<0x4E0E67DCA38E87, bool>(p0); } // E26CCFF8094D8C74 F49C1533
  static uint32_t _0x5ACBAAC643A8C5F1() { return N::Invoke<0x5ACBAAC643A8C5F1, uint32_t>(); } // 796A87B3B68D1F3D
  static bool _0xFA9B0DF15B5F4073() { return N::Invoke<0xFA9B0DF15B5F4073, bool>(); } // 2FC5650B0271CB57 A812B6CB
  static uint32_t _0x701BBF8113A5FD05() { return N::Invoke<0x701BBF8113A5FD05, uint32_t>(); } // 1ABCE5E7CBDA196
  static uint32_t _0x4A8107044486CDB9(uint32_t *p0, uint32_t p1) { return N::Invoke<0x4A8107044486CDB9, uint32_t>(p0, p1); } // 120364DE2845DAF8 F30E5814
  static bool _0xD24771C9305CBE3D() { return N::Invoke<0xD24771C9305CBE3D, bool>(); } // FD8B834A8BA05048 C6609191
  static bool _0xF3F7824D312A88E6(uint32_t *p0) { return N::Invoke<0xF3F7824D312A88E6, bool>(p0); } // 8DE9945BCC9AEC52 51367B34
  static uint32_t NETWORK_IS_IN_PARTY() { return N::Invoke<0xE6B2A39EDCAFDFA8, uint32_t>(); } // 966C2BC2A7FE3F30 F9D7D67D
  static uint32_t NETWORK_IS_PARTY_MEMBER(uint32_t p0) { return N::Invoke<0x91B8EA12DB5A5C26, uint32_t>(p0); } // 676ED266AADD31E0 1D0C929D
  static bool _0xA5151B1028F37C95() { return N::Invoke<0xA5151B1028F37C95, bool>(); } // 2BF66D2E7414F686 9156EFC0
  static bool _0xB6096E365D3716BC() { return N::Invoke<0xB6096E365D3716BC, bool>(); } // 14922ED3E38761F0 8FA6EE0E
  static void _0x60D205908A340F37() { N::Invoke<0x60D205908A340F37, void>(); } // FA2888E3833C8E96 7F70C15A
  static uint32_t _0x9F43E5947E742C43() { return N::Invoke<0x9F43E5947E742C43, uint32_t>(); } // 25D990F8E0E3F13C
  static void _0xD62FD9C106FD7370(uint32_t p0) { N::Invoke<0xD62FD9C106FD7370, void>(p0); } // 77FADDCBE3499DF7 8179C48A
  static void _0xB084459C8FC4F4A2(uint32_t p0) { N::Invoke<0xB084459C8FC4F4A2, void>(p0); } // F1B84178F8674195 41702C8A
  static uint32_t _0x5C795171BEE56D12() { return N::Invoke<0x5C795171BEE56D12, uint32_t>(); } // 599E4FA1F87EB5FF 208DD848
  static uint32_t _0x8C8B290549B85919(uint32_t p0, uint32_t p1) { return N::Invoke<0x8C8B290549B85919, uint32_t>(p0, p1); } // E30CF56F1EFA5F43 F9B6426D
  static bool NETWORK_PLAYER_IS_CHEATER() { return N::Invoke<0xA33FE9A284DEBCB6, bool>(); } // 655B91F1495A9090 A51DC214
  static uint32_t _0x5E6F2F8B23D1759D() { return N::Invoke<0x5E6F2F8B23D1759D, uint32_t>(); } // 172F75B6EE2233BA 1720ABA6
  static bool _0x9CA2BE3B1B25E1F6() { return N::Invoke<0x9CA2BE3B1B25E1F6, bool>(); } // 19D8DA0E5A68045A A19708E3
  static bool _0xCD538DB92E481E64(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xCD538DB92E481E64, bool>(p0, p1, p2); } // 46FB3ED415C7641C F9A51B92
  static bool _0x15EAF08C20144AD9(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x15EAF08C20144AD9, bool>(p0, p1, p2); } // EC5E3AF5289DCA81 4C2C6B6A
  static void _0xECFB570FE74C0DFB(uint32_t p0, uint32_t p1) { N::Invoke<0xECFB570FE74C0DFB, void>(p0, p1); } // E66C690248F11150 4818ACD0
  static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uint32_t p0, bool p1, uint32_t p2) { N::Invoke<0x4C2DEED020A287EF, void>(p0, p1, p2); } // 1CA59E306ECB80A5 470810ED
  static uint32_t _0x9F2729CB26037C3F() { return N::Invoke<0x9F2729CB26037C3F, uint32_t>(); } // D1110739EEADB592
  static bool NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return N::Invoke<0xD1738F09A13D367, bool>(); } // 2910669969E9535E D9BF6549
  static uint32_t _0xF0C172200951A9A() { return N::Invoke<0xF0C172200951A9A, uint32_t>(); } // A6C90FBC38E395EE CCD8C02D
  static uint32_t _0x6006E2AB72A77741() { return N::Invoke<0x6006E2AB72A77741, uint32_t>(); } // 18D0456E86604654 3E25A3C5
  static uint32_t NETWORK_GET_SCRIPT_STATUS() { return N::Invoke<0x2B79F83CAD49E762, uint32_t>(); } // 57D158647A6BFABF 2BE9235A
  static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(uint32_t *p0, uint32_t p1) { N::Invoke<0x661B032797391228, void>(p0, p1); } // 3E9B2F01C50DF595 DAF3B0AE
  static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(uint32_t *p0, uint32_t p1) { N::Invoke<0xEF4D8ADC6645E7F7, void>(p0, p1); } // 3364AA97340CA215 BE3D32B4
  static void _0xE2284AD135A9E2D4() { N::Invoke<0xE2284AD135A9E2D4, void>(); } // 64F62AFB081E260D A71A1D2A
  static bool _0x483A743E1339A51() { return N::Invoke<0x483A743E1339A51, bool>(); } // 5D10B3795F3FC886 0B739F53
  static uint32_t NETWORK_GET_PLAYER_INDEX(uint32_t p0) { return N::Invoke<0x6E852073107AE8FE, uint32_t>(p0); } // 24FB80D107371267 BE1C1506
  static uint32_t NETWORK_GET_PARTICIPANT_INDEX(uint32_t p0) { return N::Invoke<0xB62DE86EAE026A00, uint32_t>(p0); } // 1B84DF6AF2A46938 C4D91094
  static uint32_t _0xB53DE20B11FF02FE(uint32_t p0) { return N::Invoke<0xB53DE20B11FF02FE, uint32_t>(p0); } // 6C0E2E0125610278 40DBF464
  static uint32_t NETWORK_GET_NUM_CONNECTED_PLAYERS() { return N::Invoke<0xE175C83B2065112A, uint32_t>(); } // A4A79DD2D9600654 F7952E62
  static bool NETWORK_IS_PLAYER_CONNECTED(uint32_t p0) { return N::Invoke<0xC6B530D5751B117C, bool>(p0); } // 93DC1BE4E1ABE9D1 168EE2C2
  static uint32_t _0xB7E22652CC2A39C3() { return N::Invoke<0xB7E22652CC2A39C3, uint32_t>(); } // CF61D4B4702EE9EB F4F13B06
  static bool NETWORK_IS_PARTICIPANT_ACTIVE(uint32_t p0) { return N::Invoke<0xD0E2103B183CBA60, bool>(p0); } // 6FF8FF40B6357D45 4E2C348B
  static bool NETWORK_IS_PLAYER_ACTIVE(uint32_t p0) { return N::Invoke<0xB832D52B86777A35, bool>(p0); } // B8DFD30D6973E135 43657B17
  static bool NETWORK_IS_PLAYER_A_PARTICIPANT(uint32_t p0) { return N::Invoke<0xE0AA590C8D413E3F, bool>(p0); } // 3CA58F6CB7CBD784 B08B6992
  static bool NET_BUT() { return N::Invoke<0x2CCDE625E685C339, bool>(); } // 83CD99A1E6061AB5 6970BA94
  static uint32_t NETWORK_GET_HOST_OF_THIS_SCRIPT() { return N::Invoke<0x1045A3C91E014F8C, uint32_t>(); } // C7B4D79B01FA7A5C 89EA7B54
  static uint32_t NETWORK_GET_HOST_OF_SCRIPT(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x7ECD41540878264D, uint32_t>(p0, p1, p2); } // 1D6A14F1F9A736FC 9C95D0BB
  static void NETWORK_SET_MISSION_FINISHED() { N::Invoke<0x8090314541F52B37, void>(); } // 3B3D11CD9FFCDFC9 3083FAD7
  static bool NETWORK_IS_SCRIPT_ACTIVE(uint32_t *p0, uint32_t p1, bool p2, uint32_t p3) { return N::Invoke<0xE950C6ECABB8A1F2, bool>(p0, p1, p2, p3); } // 9D40DF90FAD26098 4A65250C
  static uint32_t _0x6E3AA1F0B24A2507(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x6E3AA1F0B24A2507, uint32_t>(p0, p1, p2); } // 3658E8CD94FC121A 8F7D9F46
  static uint32_t _0x4C1F8BFCBF665ECC() { return N::Invoke<0x4C1F8BFCBF665ECC, uint32_t>(); } // 638A3A81733086DB DB8B5D71
  static bool _0x50CA0D60AA0C576B(uint32_t p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0x50CA0D60AA0C576B, bool>(p0, p1, p2); } // 1AD5B71586B94820 CEA55F4C
  static void _0x83428269E589D8EC() { N::Invoke<0x83428269E589D8EC, void>(); } // 2302C0264EA58D31 8DCFE77D
  static void _0x5DCCF4E39237A7DF() { N::Invoke<0x5DCCF4E39237A7DF, void>(); } // 741A3D8380319A81 331D9A27
  static uint32_t PARTICIPANT_ID() { return N::Invoke<0x4A2E9345D452154D, uint32_t>(); } // 90986E8876CE0A83 9C35A221
  static uint32_t PARTICIPANT_ID_TO_INT() { return N::Invoke<0x9DCF1243D4AAD942, uint32_t>(); } // 57A3BDDAD8E5AA0A 907498B0
  static uint32_t NETWORK_GET_DESTROYER_OF_NETWORK_ID(uint32_t p0, uint32_t *p1) { return N::Invoke<0xDB209D16617B9D30, uint32_t>(p0, p1); } // 7A1ADEEF01740A24 4FCA6436
  static bool _0x34CC9E6A33706922(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x34CC9E6A33706922, bool>(p0, p1, p2); } // 4CACA84440FA26F6 28A45454
  static uint32_t NETWORK_GET_ENTITY_KILLER_OF_PLAYER(uint32_t p0, uint32_t *p1) { return N::Invoke<0x4E0031459A9C15D5, uint32_t>(p0, p1); } // 42B2DAA6B596F5F8 A7E7E04F
  static void NETWORK_RESURRECT_LOCAL_PLAYER(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { N::Invoke<0x9C32E5EB35C1F4AC, void>(p0, p1, p2, p3, p4, p5); } // EA23C49EAA83ACFB F1F9D4B4
  static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(uint32_t p0) { N::Invoke<0xA97BC2AA612D020B, void>(p0); } // 2D95C7E2D7E07307 FEA9B85C
  static bool NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return N::Invoke<0x6AD9A2E74580EFA1, bool>(); } // 8A8694B48715B000 8DE13B36
  static void _0xA8AC5B96A8581942(uint32_t p0, bool p1) { N::Invoke<0xA8AC5B96A8581942, void>(p0, p1); } // 9DD368BF06983221 8D27280E
  static void _0x670117EE933D3EA0(bool p0) { N::Invoke<0x670117EE933D3EA0, void>(p0); } // 524FF0AEFF9C3973 B72F086D
  static bool _0x7A26B8C1333C27B0(uint32_t p0) { return N::Invoke<0x7A26B8C1333C27B0, bool>(p0); } // B07D3185E11657A5 EDA68956
  static uint32_t NETWORK_GET_NETWORK_ID_FROM_ENTITY(uint32_t p0) { return N::Invoke<0xFB16D0E5BDC7C257, uint32_t>(p0); } // A11700682F3AD45C 9E35DAB6
  static uint32_t NETWORK_GET_ENTITY_FROM_NETWORK_ID(uint32_t p0) { return N::Invoke<0xADC2E4C3C87E6B02, uint32_t>(p0); } // CE4E5D9B0A4FF560 5B912C3F
  static bool _0xFD54DBFF23B29E98(uint32_t p0) { return N::Invoke<0xFD54DBFF23B29E98, bool>(p0); } // C7827959479DCC78 D7F934F4
  static bool NETWORK_GET_ENTITY_IS_LOCAL(uint32_t p0) { return N::Invoke<0x9ACF2D423F8B5749, bool>(p0); } // 0991549DE4D64762 813353ED
  static void _0x09E9AC75C2C553464(uint32_t p0) { N::Invoke<0x9E9AC75C2C553464, void>(p0); } // 06FAACD625D80CAA 31A630A4
  static void _0x1AA0A83000D74922(uint32_t p0) { N::Invoke<0x1AA0A83000D74922, void>(p0); } // 7368E683BB9038D6 5C645F64
  static bool NETWORK_DOES_NETWORK_ID_EXIST(uint32_t p0) { return N::Invoke<0x3D8BF0E3847B29E0, bool>(p0); } // 38CE16C96BD11344 B8D2C99E
  static bool NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uint32_t p0) { return N::Invoke<0xB8C2D6B33E64EA14, bool>(p0); } // 18A47D074708FD68 1E2E3177
  static bool NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uint32_t p0) { return N::Invoke<0x1301764D6FF2BC45, bool>(p0); } // A670B3662FAFFBD0 9262A60A
  static bool NETWORK_HAS_CONTROL_OF_NETWORK_ID(uint32_t p0) { return N::Invoke<0xC6EE326730271D0C, bool>(p0); } // 4D36070FE0215186 92E77D21
  static bool NETWORK_REQUEST_CONTROL_OF_ENTITY(uint32_t p0) { return N::Invoke<0x9705E19F502858A3, bool>(p0); } // B69317BF5E782347 A05FEBD7
  static bool NETWORK_REQUEST_CONTROL_OF_DOOR(uint32_t p0) { return N::Invoke<0xB1736597F4F6E120, bool>(p0); } // 870DDFD5A4A796E4 F60DAAF6
  static bool NETWORK_HAS_CONTROL_OF_ENTITY(uint32_t p0) { return N::Invoke<0xFE0D96A75DA37EB0, bool>(p0); } // 01BF60A500E28887 005FD797
  static bool NETWORK_HAS_CONTROL_OF_PICKUP(uint32_t p0) { return N::Invoke<0xA00DF0C8355ADE8F, bool>(p0); } // 5BC9495F0B3B6FA6 F7784FC8
  static bool NETWORK_HAS_CONTROL_OF_DOOR(uint32_t p0) { return N::Invoke<0x67BE91BDDF4BD8A, bool>(p0); } // CB3C68ADB06195DF 136326EC
  static uint32_t _0xAECBCD61F0D89E88() { return N::Invoke<0xAECBCD61F0D89E88, uint32_t>(); } // C01E93FAC20C3346
  static uint32_t VEH_TO_NET(uint32_t p0) { return N::Invoke<0x61B4CBE0A0FF746E, uint32_t>(p0); } // B4C94523F023419C F17634EB
  static uint32_t PED_TO_NET(uint32_t p0) { return N::Invoke<0x522900D6F6631F0E, uint32_t>(p0); } // 0EDEC3C276198689 86A0B759
  static uint32_t OBJ_TO_NET(uint32_t p0) { return N::Invoke<0xE552D459248217B5, uint32_t>(p0); } // 99BFDC94A603E541 1E05F29F
  static uint32_t NET_TO_VEH(uint32_t p0) { return N::Invoke<0xDACD0CF3BB366AB6, uint32_t>(p0); } // 367B936610BA360C 7E02FAEA
  static uint32_t NET_TO_PED(uint32_t p0) { return N::Invoke<0xE6286B95AEF7B8C2, uint32_t>(p0); } // BDCD95FC216A8B3E 87717DD4
  static uint32_t NET_TO_OBJ(uint32_t p0) { return N::Invoke<0x9F00512086D0A86F, uint32_t>(p0); } // D8515F5FEA14CB3F 27AA14D8
  static uint32_t NET_TO_ENT(uint32_t p0) { return N::Invoke<0x3CB82CF6E610C2A9, uint32_t>(p0); } // BFFEAB45A9A9094A 5E149683
  static void NETWORK_GET_LOCAL_HANDLE(uint32_t *p0, uint32_t p1) { N::Invoke<0x2F8919586947AAB, void>(p0, p1); } // E86051786B66CD8E 08023B16
  static void NETWORK_HANDLE_FROM_USER_ID(uint32_t *p0, uint32_t *p1, uint32_t p2) { N::Invoke<0x647D3161EDE06005, void>(p0, p1, p2); } // DCD51DD8F87AEC5C 74C2C1B7
  static void NETWORK_HANDLE_FROM_MEMBER_ID(uint32_t *p0, uint32_t *p1, uint32_t p2) { N::Invoke<0xF966A5BE3BFC269, void>(p0, p1, p2); } // A0FD21BED61E5C4C 9BFC9FE2
  static void NETWORK_HANDLE_FROM_PLAYER(uint32_t p0, uint64_t *p1, uint32_t p2) { N::Invoke<0xD7D678636A21203, void>(p0, p1, p2); } // 388EB2B86C73B6B3 D3498917
  static uint32_t _0x5DAE13F383297C37() { return N::Invoke<0x5DAE13F383297C37, uint32_t>(); } // BC1D768F2F5D6C05
  static uint32_t _0x4E0ABDC5E37E173C() { return N::Invoke<0x4E0ABDC5E37E173C, uint32_t>(); } // 58575AC3CF2CA8EC
  static void NETWORK_HANDLE_FROM_FRIEND(uint32_t p0, uint32_t *p1, uint32_t p2) { N::Invoke<0x100D1FD15D71008F, void>(p0, p1, p2); } // D45CB817D7E177D2 3B0BB3A3
  static bool NETWORK_GAMERTAG_FROM_HANDLE_START(uint32_t *p0) { return N::Invoke<0x19B3D9D0FD08C05D, bool>(p0); } // 9F0C0A981D73FA56 EBA00C2A
  static bool NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return N::Invoke<0x8044140AF1814A05, bool>(); } // B071E27958EF4CF0 F000828E
  static bool NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return N::Invoke<0x7050CAF84FC5229E, bool>(); } // FD00798DBA7523DD 89C2B5EA
  static uint32_t NETWORK_GET_GAMERTAG_FROM_HANDLE(uint32_t *p0) { return N::Invoke<0xB912BC555C457096, uint32_t>(p0); } // 426141162EBE5CDB A18A1B26
  static uint32_t _0x266EE17B3F43CFCB() { return N::Invoke<0x266EE17B3F43CFCB, uint32_t>(); } // D66C9E72B3CC4982
  static uint32_t _0xD63DA6A2E971E11C() { return N::Invoke<0xD63DA6A2E971E11C, uint32_t>(); } // 58CC181719256197
  static bool NETWORK_ARE_HANDLES_THE_SAME(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x8CBC243FE3F15719, bool>(p0, p1); } // 57DBA049E110F217 45975AE3
  static bool NETWORK_IS_HANDLE_VALID(uint32_t *p0, uint32_t p1) { return N::Invoke<0xC9BC4B1CA2991FB3, bool>(p0, p1); } // 6F79B93B0A8E4133 F0996C6E
  static uint32_t NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uint32_t *p0) { return N::Invoke<0x3A0FA4556F0B1BB9, uint32_t>(p0); } // CE5F689CF5A0A49D 2E96EF1E
  static uint32_t NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(uint32_t *p0) { return N::Invoke<0xC2CEC356504FEA3, uint32_t>(p0); } // C82630132081BB6F 62EF0A63
  static bool NETWORK_IS_GAMER_IN_MY_SESSION(uint32_t *p0) { return N::Invoke<0xC082A14929264FAD, bool>(p0); } // 0F10B05DDF8D16E9 59127716
  static void NETWORK_SHOW_PROFILE_UI(uint32_t *p0) { N::Invoke<0x5F782679B51A1633, void>(p0); } // 859ED1CEA343FCA8 F00A20B0
  static uint32_t NETWORK_PLAYER_GET_NAME(uint32_t p0) { return N::Invoke<0x54196AFC53E10C36, uint32_t>(p0); } // 7718D2E2060837D2 CE48F260
  static uint32_t _0x315E0F0E6CC07B1F(uint32_t p0, uint32_t *p1) { return N::Invoke<0x315E0F0E6CC07B1F, uint32_t>(p0, p1); } // 4927FC39CD0869A0 4EC0D983
  static bool NETWORK_PLAYER_IS_ROCKSTAR_DEV(uint32_t p0) { return N::Invoke<0x71616108F549B30D, bool>(p0); } // 544ABDDA3B409B6D F6659045
  static bool _0xC29FA77E033D27B9(uint32_t p0) { return N::Invoke<0xC29FA77E033D27B9, bool>(p0); } // 565E430DB3B05BEC D265B049
  static bool NETWORK_IS_INACTIVE_PROFILE(uint32_t *p0) { return N::Invoke<0x5F0BFD4AC2653B4A, bool>(p0); } // 7E58745504313A2E 95481343
  static uint32_t NETWORK_GET_MAX_FRIENDS() { return N::Invoke<0xC26730AED2311B5A, uint32_t>(); } // AFEBB0D5D8F687D2 048171BC
  static uint32_t NETWORK_GET_FRIEND_COUNT() { return N::Invoke<0x67DB4596177F1772, uint32_t>(); } // 203F1CFD823B27A4 A396ACDE
  static uint32_t NETWORK_GET_FRIEND_NAME(uint32_t p0) { return N::Invoke<0xA67F0A084B59AEA0, uint32_t>(p0); } // E11EBBB2A783FE8B 97420B6D
  static uint32_t _0x12F21CEA57728570() { return N::Invoke<0x12F21CEA57728570, uint32_t>(); } // 4164F227D052E293
  static bool NETWORK_IS_FRIEND_ONLINE(uint32_t *p0) { return N::Invoke<0xB49A8202BE01069, bool>(p0); } // 425A44533437B64D E0A42430
  static uint32_t _0xADB93294A40CA459() { return N::Invoke<0xADB93294A40CA459, uint32_t>(); } // 87EB7A3FFCB314DB
  static bool NETWORK_IS_FRIEND_IN_SAME_TITLE(uint32_t *p0) { return N::Invoke<0xAB850D7FE5B0F83E, bool>(p0); } // 2EA9A3BEDF3F17B8 C54365C2
  static bool NETWORK_IS_FRIEND_IN_MULTIPLAYER(uint32_t *p0) { return N::Invoke<0xA3A0B42746D2006D, bool>(p0); } // 57005C18827F3A28 400BDDD9
  static bool NETWORK_IS_FRIEND(uint32_t *p0) { return N::Invoke<0x8EF73C99D8AA61C0, bool>(p0); } // 1A24A179F9B31654 2DA4C282
  static uint32_t NETWORK_IS_PENDING_FRIEND(uint32_t p0) { return N::Invoke<0xE4D7B1FA0D634EA2, uint32_t>(p0); } // 0BE73DA6984A6E33 5C85FF81
  static bool NETWORK_IS_ADDING_FRIEND() { return N::Invoke<0x8A7E759BB699483E, bool>(); } // 6EA101606F6E4D81 BB7EC8C4
  static bool NETWORK_ADD_FRIEND(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x3C74BD5F07A7A73F, bool>(p0, p1); } // 8E02D73914064223 20E5B3EE
  static uint32_t CLEAR_PLAYER_BAILED_FROM_PLAYERICLE(uint32_t p0) { return N::Invoke<0xC141A1B8E0252D2A, uint32_t>(p0); } // BAD8F2A42B844821 94AE7172
  static uint32_t _0x8BA60D9E3B5CB149() { return N::Invoke<0x8BA60D9E3B5CB149, uint32_t>(); } // 1B857666604B1A74
  static bool GET_OBJ_ENTITY(uint32_t p0) { return N::Invoke<0x1185F8F24900CAB1, bool>(p0); } // 82377B65E943F72D B802B671
  static bool NETWORK_CAN_SET_WAYPOINT() { return N::Invoke<0x4A71D8A268A3247E, bool>(); } // C927EC229934AF60 009E68F3
  static uint32_t _0xAD8588ED7B4BA3BD(uint32_t p0) { return N::Invoke<0xAD8588ED7B4BA3BD, uint32_t>(p0); } // B309EBEA797E001F 5C0AB2A9
  static bool _0x7EC6E93DA61BAB1D() { return N::Invoke<0x7EC6E93DA61BAB1D, bool>(); } // 26F07DD83A5F7F98 9A176B6E
  static bool NETWORK_HAS_HEADSET() { return N::Invoke<0xB70341F3B6C85A66, bool>(); } // E870F9F1F7B4F1FA A7DC5657
  static void _0xA473588D48246688(bool p0) { N::Invoke<0xA473588D48246688, void>(p0); } // 7D395EA61622E116 5C05B7E1
  static uint32_t _0x4EC36E4165F585C() { return N::Invoke<0x4EC36E4165F585C, uint32_t>(); } // C0D2AF00BCC234CA
  static bool NETWORK_GAMER_HAS_HEADSET(uint32_t *p0) { return N::Invoke<0x9B37C1A497F85694, bool>(p0); } // F2FD55CB574BCC55 D036DA4A
  static bool NETWORK_IS_GAMER_TALKING(uint32_t *p0) { return N::Invoke<0x8F37FEA40E8E02DA, bool>(p0); } // 71C33B22606CD88A 99B58DBC
  static bool NETWORK_CAN_COMMUNICATE_WITH_GAMER(uint32_t *p0) { return N::Invoke<0xF6C8136A93AD52F9, bool>(p0); } // A150A4F065806B1F D05EB7F6
  static bool NETWORK_IS_GAMER_MUTED_BY_ME(uint32_t *p0) { return N::Invoke<0x2FC544E0D579DD81, bool>(p0); } // CE60DE011B6C7978 001B4046
  static bool _0xA43BF634D54F8620(uint32_t *p0) { return N::Invoke<0xA43BF634D54F8620, bool>(p0); } // DF02A2C93F1F26DA 7685B333
  static bool _0x6A271D2286C50CF3(uint32_t *p0) { return N::Invoke<0x6A271D2286C50CF3, bool>(p0); } // E944C4F5AF1B5883 3FDCC8D7
  static bool _0xC1A697B1A3BB1FE5(uint32_t *p0) { return N::Invoke<0xC1A697B1A3BB1FE5, bool>(p0); } // 15337C7C268A27B2 D19B312C
  static uint32_t _0xAE62E3288AAFD6C5() { return N::Invoke<0xAE62E3288AAFD6C5, uint32_t>(); } // B57A49545BA53CE7
  static uint32_t _0x57CE5A7AE74AE2DE() { return N::Invoke<0x57CE5A7AE74AE2DE, uint32_t>(); } // CCA4318E1AB03F1F
  static uint32_t _0x1AB1773D050A2896() { return N::Invoke<0x1AB1773D050A2896, uint32_t>(); } // 7DD29D5E22763F1
  static uint32_t _0x976E3115F7E98C57() { return N::Invoke<0x976E3115F7E98C57, uint32_t>(); } // 135F9B7B7ADD2185
  static bool NETWORK_IS_PLAYER_TALKING(uint32_t p0) { return N::Invoke<0x7326943B92733EC5, bool>(p0); } // 031E11F3D447647E DA9FD9DB
  static bool NETWORK_PLAYER_HAS_HEADSET(uint32_t p0) { return N::Invoke<0x8861B7F6B89737F1, bool>(p0); } // 3FB99A8B08D18FD6 451FB6B6
  static bool NETWORK_IS_PLAYER_MUTED_BY_ME(uint32_t p0) { return N::Invoke<0xB0C4CAFF6BE27E8A, bool>(p0); } // 8C71288AE68EDE39 7A21050E
  static bool NETWORK_AM_I_MUTED_BY_PLAYER(uint32_t p0) { return N::Invoke<0x619AC52B0FAF6C91, bool>(p0); } // 9D6981DFC91A8604 E128F2B0
  static bool NETWORK_IS_PLAYER_BLOCKED_BY_ME(uint32_t p0) { return N::Invoke<0x7867A93EFB6C9999, bool>(p0); } // 57AF1F8E27483721 AE4F4560
  static bool NETWORK_AM_I_BLOCKED_BY_PLAYER(uint32_t p0) { return N::Invoke<0x9CB70611C2B13B0F, bool>(p0); } // 87F395D957D4353D 953EF45E
  static float NETWORK_GET_PLAYER_LOUDNESS(uint32_t p0) { return N::Invoke<0xE1E19A9CF9183A4B, float>(p0); } // 21A1684A25C2867F F2F67014
  static void NETWORK_SET_TALKER_PROXIMITY(float p0) { N::Invoke<0xFB1E654E8FB3D849, void>(p0); } // CBF12D65F95AD686 67555C66
  static float NETWORK_GET_TALKER_PROXIMITY() { return N::Invoke<0x985BE22066D160C2, float>(); } // 84F0F13120B4E098 19991ADD
  static void NETWORK_SET_VOICE_ACTIVE(bool p0) { N::Invoke<0x872B4562A25B7351, void>(p0); } // BABEC9E69A91C57B 8011247F
  static void _0x1FA6F4D53173332B(bool p0) { N::Invoke<0x1FA6F4D53173332B, void>(p0); } // CFEB46DCD7D8D5EB 1A3EA6CD
  static void _0xD77A549BB3363CE3(bool p0) { N::Invoke<0xD77A549BB3363CE3, void>(p0); } // AF66059A131AA269 CAB21090
  static void NETWORK_SET_TEAM_ONLY_CHAT(bool p0) { N::Invoke<0x2F85B5C939CC3065, void>(p0); } // D5B4883AC32F24C3 3813019A
  static void _0x6B4418098AC665C1(uint32_t p0, uint32_t p1) { N::Invoke<0x6B4418098AC665C1, void>(p0, p1); } // 6F697A66CE78674E C8CC9E75
  static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(bool p0) { N::Invoke<0xDF7D01D2FC2E846C, void>(p0); } // 70DA3BF8DACD3210 A0FD42D3
  static void _0x9670A2A631CECE0B(bool p0) { N::Invoke<0x9670A2A631CECE0B, void>(p0); } // 3C5C1E2C2FF814B1 C9DDA85B
  static uint32_t _0x34ECBDE3D60DA93F() { return N::Invoke<0x34ECBDE3D60DA93F, uint32_t>(); } // 9D7AFCBF21C51712
  static void _0x19379600FEEACC5C(bool p0) { N::Invoke<0x19379600FEEACC5C, void>(p0); } // F46A1E03E8755980 D33AFF79
  static void _0x2E5132C6FB4341EB(bool p0) { N::Invoke<0x2E5132C6FB4341EB, void>(p0); } // 6A5D89D7769A40D8 4FFEFE43
  static void _0x5FF769DCD0927090(uint32_t p0, bool p1) { N::Invoke<0x5FF769DCD0927090, void>(p0, p1); } // 3039AE5AD2C9C0C4 74EE2D8B
  static uint32_t _0x3F22B647F0AA9146() { return N::Invoke<0x3F22B647F0AA9146, uint32_t>(); } // 97DD4C5944CC2E6A
  static void _0x3FA48B7B772BB64B(bool p0) { N::Invoke<0x3FA48B7B772BB64B, void>(p0); } // 57B192B4D4AD23D5 2F98B405
  static void _0x63E4EA31C83F74E8(uint32_t p0, uint32_t p1) { N::Invoke<0x63E4EA31C83F74E8, void>(p0, p1); } // DDF73E2B1FEC5AB4 95F1C60D
  static void _0x064F4DFCD147D0B88(bool p0) { N::Invoke<0x64F4DFCD147D0B88, void>(p0); } // 0FF2862B61A58AF9 1BCD3DDF
  static void NETWORK_SET_VOICE_CHANNEL(uint32_t p0) { N::Invoke<0x2F19459692DCD579, void>(p0); } // EF6212C2EFEF1A23 3974879F
  static void _0x2D69690B1A33F30C() { N::Invoke<0x2D69690B1A33F30C, void>(); } // E036A705F989E049 9ECF722A
  static void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x316E5F1CDD67AAF5, void>(p0, p1, p2); } // DBD2056652689917 F1E84832
  static void _0x7C6F918A4E3148A() { N::Invoke<0x7C6F918A4E3148A, void>(); } // F03755696450470C 7F9B9052
  static void _0x8D32EB47FCEB114B(uint32_t p0) { N::Invoke<0x8D32EB47FCEB114B, void>(p0); } // 5E3AA4CA2B6FB0EE 7BBEA8CF
  static void _0x6C06F37FCF560A5B(uint32_t p0) { N::Invoke<0x6C06F37FCF560A5B, void>(p0); } // CA575C391FEA25CC E797A4B6
  static void _0x1AF6FB829A26BBE5(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0x1AF6FB829A26BBE5, void>(p0, p1, p2); } // ADB57E5B663CCA8B 92268BB5
  static uint32_t _0x1B3FC52C6D531434() { return N::Invoke<0x1B3FC52C6D531434, uint32_t>(); } // 5FCF4D7069B09026
  static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { N::Invoke<0xC5EA1E7F03CFA48D, void>(); } // 593850C16A36B692 92B7351C
  static void NETWORK_SET_FRIENDLY_FIRE_OPTION(bool p0) { N::Invoke<0x3DD000A6AF075873, void>(p0); } // F808475FA571D823 6BAF95FA
  static void NETWORK_SET_RICH_PRESENCE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { N::Invoke<0x25A20EA9824CF18A, void>(p0, p1, p2, p3); } // 1DCCACDCFC569362 932A6CED
  static void _0xE910527B20D11CBB(uint32_t p0, uint32_t p1) { N::Invoke<0xE910527B20D11CBB, void>(p0, p1); } // 3E200C2BCF4164EB 017E6777
  static uint32_t _0x6250FFF942FD28E1() { return N::Invoke<0x6250FFF942FD28E1, uint32_t>(); } // 5ED0356A0CE3A34F E1F86C6A
  static void _0xB6F9C97516E168BC(uint32_t p0, float p1, float p2, float p3, bool p4, bool p5) { N::Invoke<0xB6F9C97516E168BC, void>(p0, p1, p2, p3, p4, p5); } // 9769F811D1785B03 BE6A30C3
  static void _0x75E9DCB3F5E4F122(uint32_t p0, bool p1) { N::Invoke<0x75E9DCB3F5E4F122, void>(p0, p1); } // BF22E0F32968E967 22E03AD0
  static void _0xEFA969247D61F973(uint32_t p0) { N::Invoke<0xEFA969247D61F973, void>(p0); } // 715135F4B82AC90D CEAE5AFC
  static bool _0x48005FE1241D4091() { return N::Invoke<0x48005FE1241D4091, bool>(); } // 579CCED0265D4896 F5F4BD95
  static bool NETWORK_CLAN_PLAYER_IS_ACTIVE(uint32_t *p0) { return N::Invoke<0x39606F3949DA3895, bool>(p0); } // B124B57F571D8F18 AB8319A3
  static bool NETWORK_CLAN_PLAYER_GET_DESC(uint32_t *p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x96899C28EF61DCA9, bool>(p0, p1, p2); } // EEE6EACBE8874FBA 6EE4A282
  static uint32_t _0xCFD44BE3BA4E2AF0(uint32_t p0, uint32_t p1) { return N::Invoke<0xCFD44BE3BA4E2AF0, uint32_t>(p0, p1); } // 7543BB439F63792B 54E79E9C
  static void _0x8F29D351C9ECC53A(uint32_t *p0, uint32_t p1, uint32_t *p2) { N::Invoke<0x8F29D351C9ECC53A, void>(p0, p1, p2); } // F45352426FF3A4F0 F633805A
  static uint32_t _0x3515CC2BCA7599FE() { return N::Invoke<0x3515CC2BCA7599FE, uint32_t>(); } // 1F471B79ACC90BEF 807B3450
  static bool _0xC0811AEED5C2A6E2(uint32_t *p0, uint32_t p1) { return N::Invoke<0xC0811AEED5C2A6E2, bool>(p0, p1); } // 48DE78AF2C8885B8 3369DD1F
  static bool NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(uint32_t *p0) { return N::Invoke<0x4304CE1CBC945F1D, bool>(p0); } // A989044E70010ABE 8E8CB520
  static bool NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(uint32_t *p0) { return N::Invoke<0xAB83A861D90BB2E, bool>(p0); } // 5B9E023DC6EBEDC0 1FDB590F
  static bool _0x396315A816CCA854() { return N::Invoke<0x396315A816CCA854, bool>(); } // B3F64A6A91432477 83ED8E08
  static bool _0x3BA5F5E48DF60E4D(uint32_t *p0) { return N::Invoke<0x3BA5F5E48DF60E4D, bool>(p0); } // BB6E6FEE99D866B2 40202867
  static uint32_t NETWORK_CLAN_GET_MEMBERSHIP_COUNT(uint32_t *p0) { return N::Invoke<0x87473ECC351A3688, uint32_t>(p0); } // AAB11F6C4ADBC2C1 25924010
  static bool NETWORK_CLAN_GET_MEMBERSHIP_VALID(uint32_t *p0, uint32_t p1) { return N::Invoke<0xA17DF63BD937E9B0, bool>(p0, p1); } // 48A59CF88D43DF0E 48914F6A
  static bool NETWORK_CLAN_GET_MEMBERSHIP(uint32_t *p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0x3C7466FF00C70785, bool>(p0, p1, p2); } // C8BC2011F67B3411 CDC4A590
  static uint32_t NETWORK_CLAN_JOIN(uint32_t p0) { return N::Invoke<0xFEC3F98A9ACCA04D, uint32_t>(p0); } // 9FAAA4F4FC71F87F 79C916C5
  static bool _0xB7FC404738586251(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xB7FC404738586251, bool>(p0, p1); } // 729E3401F0430686 BDA90BAC
  static bool _0xD1E4ECD1113E5923(uint32_t p0, uint32_t *p1) { return N::Invoke<0xD1E4ECD1113E5923, bool>(p0, p1); } // 2B51EDBEFC301339 8E952B12
  static bool _0x13DB6DE3708B150F() { return N::Invoke<0x13DB6DE3708B150F, bool>(); } // C32EA7A2F6CA7557 966C90FD
  static bool _0xAAB782F753BC4B9A(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xAAB782F753BC4B9A, bool>(p0, p1); } // 5835D9CD92E83184 BA672146
  static bool _0x5473A0E2455A373E(uint32_t p0) { return N::Invoke<0x5473A0E2455A373E, bool>(p0); } // 13518FF1C6B28938 7963FA4D
  static bool _0x19138D3E8320455E(uint32_t p0, uint32_t *p1) { return N::Invoke<0x19138D3E8320455E, bool>(p0, p1); } // A134777FF7F33331 88B13CDC
  static void _0x6F267ECCFC0358E6(uint32_t p0) { N::Invoke<0x6F267ECCFC0358E6, void>(p0); } // 113E6E3E50E286B0 D6E3D5EA
  static uint32_t _0x336B2E2EFA871654() { return N::Invoke<0x336B2E2EFA871654, uint32_t>(); } // 9AA46BADAD0E27ED E22445DA
  static void _0x03868218C4B476992() { N::Invoke<0x3868218C4B476992, void>(); } // 042E4B70B93E6054 455DDF5C
  static bool _0xE1171EA39F998140(uint32_t *p0, uint32_t p1) { return N::Invoke<0xE1171EA39F998140, bool>(p0, p1); } // CE86D8191B762107 89DB0EC7
  static uint32_t _0xDA1850DF9CF8319C() { return N::Invoke<0xDA1850DF9CF8319C, uint32_t>(); } // B5074DB804E28CE7 A4EF02F3
  static uint32_t _0xBCECE10CFB2488E6() { return N::Invoke<0xBCECE10CFB2488E6, uint32_t>(); } // 5B4F04F19376A0BA 068A054E
  static bool _0xF566158F1DE04233(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xF566158F1DE04233, bool>(p0, p1); } // C080FF658B2E41DA 9B8631EB
  static void SET_NETWORK_ID_CAN_MIGRATE(uint32_t p0, bool p1) { N::Invoke<0x7C1E12119F5A5526, void>(p0, p1); } // 299EEB23175895FC 47C8E5FF
  static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(uint32_t p0, bool p1) { N::Invoke<0x9459531F5B8A4A2F, void>(p0, p1); } // E05E81A888FA63C8 68D486B2
  static void _0x90DE6356BC9973E8(uint32_t p0, uint32_t p1, bool p2) { N::Invoke<0x90DE6356BC9973E8, void>(p0, p1, p2); } // A8A024587329F36A 4D15FDB1
  static void NETWORK_SET_ENTITY_CAN_BLEND(uint32_t p0, bool p1) { N::Invoke<0x87A8028C4D053F26, void>(p0, p1); } // D830567D88A1E873 DE8C0DB8
  static void _0x7A984B75CEE57B50(uint32_t p0, bool p1) { N::Invoke<0x7A984B75CEE57B50, void>(p0, p1); } // F1CA12B18AEF5298 09CBC4B0
  static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(uint32_t p0, bool p1, bool p2) { N::Invoke<0x85BE1625FC7D4532, void>(p0, p1, p2); } // A6928482543022B4 199E75EF
  static uint32_t _0x8FB62FAEF6D8AC96() { return N::Invoke<0x8FB62FAEF6D8AC96, uint32_t>(); } // AAA553E7DD28A457
  static void _0x2FB8A67D014ABA96(uint32_t p0, bool p1) { N::Invoke<0x2FB8A67D014ABA96, void>(p0, p1); } // 3FA36981311FA4FF 00AE4E17
  static bool _0x555782BF9C00FA3E(uint32_t p0) { return N::Invoke<0x555782BF9C00FA3E, bool>(p0); } // A1607996431332DF EA5176C0
  static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(bool p0, bool p1) { N::Invoke<0xCE7A6A0D338BC2C3, void>(p0, p1); } // D1065D68947E7B6E 59F3479B
  static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(bool p0) { N::Invoke<0x92A9EE374F4560B0, void>(p0); } // E5F773C1A1D9D168 764F6222
  static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(bool p0) { N::Invoke<0xD70702505BD9D3A7, void>(p0); } // 7619364C82D3BF14 324B56DB
  static void SET_PLAYER_INVISIBLE_LOCALLY(uint32_t p0, bool p1) { N::Invoke<0x8A764796435A89A, void>(p0, p1); } // 12B37D54667DB0B8 18227209
  static void SET_PLAYER_VISIBLE_LOCALLY(uint32_t p0, bool p1) { N::Invoke<0x11D3771DDEF0AE90, void>(p0, p1); } // FAA10F1FAFB11AF2 BA2BB4B4
  static void FADE_OUT_LOCAL_PLAYER(bool p0) { N::Invoke<0x341B81CE859F7C97, void>(p0); } // 416DBD4CD6ED8DD2 8FA7CEBD
  static void NETWORK_FADE_OUT_ENTITY(uint32_t p0, bool p1, bool p2) { N::Invoke<0xA877A08A60C4D171, void>(p0, p1, p2); } // DE564951F95E09ED 47EDEE56
  static void NETWORK_FADE_IN_ENTITY(uint32_t p0, bool p1) { N::Invoke<0x74186D5C974AECC0, void>(p0, p1); } // 1F4ED342ACEFE62D 9B9FCD02
  static uint32_t _0x5D61C6640A93D181() { return N::Invoke<0x5D61C6640A93D181, uint32_t>(); } // 631DC5DFF4B110E3
  static uint32_t _0xB71F91F6466562FE() { return N::Invoke<0xB71F91F6466562FE, uint32_t>(); } // 422F32CC7E56ABAD
  static bool IS_PLAYER_IN_CUTSCENE(uint32_t p0) { return N::Invoke<0x8ADD07741F4E0AF7, bool>(p0); } // E73092F4157CD126 E0A619BD
  static void SET_ENTITY_VISIBLE_IN_CUTSCENE(uint32_t p0, bool p1, bool p2) { N::Invoke<0x4232121619A485D5, void>(p0, p1, p2); } // E0031D3C8F36AB82 DBFB067B
  static void SET_ENTITY_LOCALLY_INVISIBLE(uint32_t p0) { N::Invoke<0xD6FA3AE4648B8068, void>(p0); } // E135A9FF3F5D05D8 51ADCC5F
  static void SET_ENTITY_LOCALLY_VISIBLE(uint32_t p0) { N::Invoke<0xBA3B32E4478CF2DD, void>(p0); } // 241E289B5C059EDC 235A57B3
  static bool IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(uint32_t p0) { return N::Invoke<0x4C72419D28A7CADF, bool>(p0); } // 6E192E33AD436366 597063BA
  static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(uint32_t p0, bool p1) { N::Invoke<0x8DB2CC0993EFA656, void>(p0, p1); } // D45B1FFCCD52FF19 95D07BA5
  static bool IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return N::Invoke<0xE28C4F98434AE296, bool>(p0, p1, p2, p3); } // D82CF8E64C8729D8 23C5274E
  static bool IS_SPHERE_VISIBLE_TO_PLAYER(uint32_t p0, float p1, float p2, float p3, float p4) { return N::Invoke<0xEDACD0E59C5E7D93, bool>(p0, p1, p2, p3, p4); } // DC3A310219E5DA62 E9FCFB32
  static void RESERVE_NETWORK_MISSION_OBJECTS(uint32_t p0) { N::Invoke<0x91AADFDC8448CBD, void>(p0); } // 4E5C93BD0C32FBF8 391DF4F3
  static void RESERVE_NETWORK_MISSION_PEDS(uint32_t p0) { N::Invoke<0x31C8FBE30948E037, void>(p0); } // B60FEBA45333D36F 54998C37
  static void RESERVE_NETWORK_MISSION_VEHICLES(uint32_t p0) { N::Invoke<0xB5C67549F1765883, void>(p0); } // 76B02E21ED27A469 5062875E
  static bool CAN_REGISTER_MISSION_OBJECTS(uint32_t p0) { return N::Invoke<0xAD902020E597F2AC, bool>(p0); } // 800DD4721A8B008B 7F85DFDE
  static bool CAN_REGISTER_MISSION_PEDS(uint32_t p0) { return N::Invoke<0x743224EE855B1894, bool>(p0); } // BCBF4FEF9FA5D781 CCAA5CE9
  static bool CAN_REGISTER_MISSION_VEHICLES(uint32_t p0) { return N::Invoke<0x4BB625F7911DD339, bool>(p0); } // 7277F1F2E085EE74 818B6830
  static bool CAN_REGISTER_MISSION_ENTITIES(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xDD4EF4723F36D8F0, bool>(p0, p1, p2, p3); } // 69778E7564BADE6D 83794008
  static uint32_t GET_NUM_RESERVED_MISSION_OBJECTS(bool p0) { return N::Invoke<0xACD63093CA24A31E, uint32_t>(p0); } // AA81B5F10BC43AC2 16A80CD6
  static uint32_t GET_NUM_RESERVED_MISSION_PEDS(bool p0) { return N::Invoke<0x3688EAE35B68185, uint32_t>(p0); } // 1F13D5AE5CB17E17 6C25975C
  static uint32_t GET_NUM_RESERVED_MISSION_VEHICLES(bool p0) { return N::Invoke<0xBF3ED7A1FCC41A0B, uint32_t>(p0); } // CF3A965906452031 A9A308F3
  static uint32_t _0xAD4FE4090EA9E3BE(bool p0) { return N::Invoke<0xAD4FE4090EA9E3BE, uint32_t>(p0); } // 12B6281B6C6706C0 603FA104
  static uint32_t _0x134CB4C8912CA9A2(bool p0) { return N::Invoke<0x134CB4C8912CA9A2, uint32_t>(p0); } // CB215C4B56A7FAE7 D8FEC4F8
  static uint32_t _0x0A75012549D00203C(bool p0) { return N::Invoke<0xA75012549D00203C, uint32_t>(p0); } // 0CD9AB83489430EA 20527695
  static uint32_t _0x4C3FBCD592D8EF54() { return N::Invoke<0x4C3FBCD592D8EF54, uint32_t>(); } // C7BE335216B5EC7C 8687E285
  static uint32_t _0x0A574F8D18497967() { return N::Invoke<0xA574F8D18497967, uint32_t>(); } // 0C1F7D49C39D2289 744AC008
  static uint32_t _0x07FF4CC54A37B4678() { return N::Invoke<0x7FF4CC54A37B4678, uint32_t>(); } // 0AFCE529F69B21FF C3A12135
  static uint32_t _0x7DE670D1201C775() { return N::Invoke<0x7DE670D1201C775, uint32_t>(); } // A72835064DD63E4C 6A036061
  static uint32_t GET_NETWORK_TIME() { return N::Invoke<0xFACC0E85E40AD425, uint32_t>(); } // 7A5487FE9FAA6B48 998103C2
  static uint32_t _0x49BD9731DF21C969() { return N::Invoke<0x49BD9731DF21C969, uint32_t>(); } // 89023FBBF9200E9F 98AA48E5
  static bool _0xB2A39761793E1452() { return N::Invoke<0xB2A39761793E1452, bool>(); } // 46718ACEEDEAFC84 4538C4A2
  static uint32_t GET_TIME_OFFSET(uint32_t p0, uint32_t p1) { return N::Invoke<0x27BE5673BC364722, uint32_t>(p0, p1); } // 017008CCDAD48503 2E079AE6
  static uint32_t _0xB140E4D25861508C(uint32_t p0, uint32_t p1) { return N::Invoke<0xB140E4D25861508C, uint32_t>(p0, p1); } // CB2CF5148012C8D0 50EF8FC6
  static uint32_t _0xBAAA7FC3F886D297(uint32_t p0, uint32_t p1) { return N::Invoke<0xBAAA7FC3F886D297, uint32_t>(p0, p1); } // DE350F8651E4346C BBB6DF61
  static uint32_t _0x72BC399AFD40817A(bool p0, uint32_t p1) { return N::Invoke<0x72BC399AFD40817A, uint32_t>(p0, p1); } // F5BC95857BD6D512 8B4D1C06
  static uint32_t GET_TIME_DIFFERENCE(uint32_t p0, uint32_t p1) { return N::Invoke<0x88702B74B95C046D, uint32_t>(p0, p1); } // A2C6FC031D46FFF0 5666A837
  static uint32_t _0x88EB896A03FC2C52(uint32_t p0) { return N::Invoke<0x88EB896A03FC2C52, uint32_t>(p0); } // 9E23B1777A927DAD 8218944E
  static uint32_t _0x116C811902B474B3() { return N::Invoke<0x116C811902B474B3, uint32_t>(); } // 9A73240B49945C76 F2FDF2E0
  static void _0x936F93A8369D8BC6(uint32_t p0, uint32_t *p1) { N::Invoke<0x936F93A8369D8BC6, void>(p0, p1); } // AC97AF97FA68E5D5 BB7CCE49
  static void NETWORK_SET_IN_SPECTATOR_MODE(bool p0, uint32_t p1) { N::Invoke<0x88C9E2C8752CBE32, void>(p0, p1); } // 423DE3854BB50894 5C4C8458
  static void _0xB6A417B12550774(bool p0, uint32_t p1, bool p2) { N::Invoke<0xB6A417B12550774, void>(p0, p1, p2); } // 419594E137637120 54058F5F
  static void _0xA699C3AF2BDE18AF(bool p0) { N::Invoke<0xA699C3AF2BDE18AF, void>(p0); } // FC18DB55AE19E046 A7E36020
  static void _0x912FEB1C460CB841(bool p0, uint32_t p1) { N::Invoke<0x912FEB1C460CB841, void>(p0, p1); } // 5C707A667DF8B9FA 64235620
  static bool NETWORK_IS_IN_SPECTATOR_MODE() { return N::Invoke<0xC1828A36977095F3, bool>(); } // 048746E388762E11 3EAD9DB8
  static void NETWORK_SET_IN_MP_CUTSCENE(bool p0, bool p1) { N::Invoke<0xA33B68FDAA8C4B25, void>(p0, p1); } // 9CA5DE655269FEC4 8434CB43
  static uint32_t NETWORK_IS_IN_MP_CUTSCENE() { return N::Invoke<0x47245DD35A0EDC7B, uint32_t>(); } // 6CC27C9FA2040220 4BB33316
  static bool NETWORK_IS_PLAYER_IN_MP_CUTSCENE(uint32_t p0) { return N::Invoke<0x389712B76BCB5899, bool>(p0); } // 63F9EE203C3619F2 56F961E4
  static void SET_NETWORK_VEHICLE_RESPOT_TIMER(uint32_t p0, uint32_t p1) { N::Invoke<0xEDFF1CE1C50D51C1, void>(p0, p1); } // EC51713AB6EC36E8 2C30912D
  static void _0x2E7630E0E3EC734E(uint32_t p0, bool p1) { N::Invoke<0x2E7630E0E3EC734E, void>(p0, p1); } // 6274C4712850841E EA235081
  static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(bool p0) { N::Invoke<0x86C8D7FA3535C5CB, void>(p0); } // 5FFE9B4144F9712F 4DD46DAE
  static uint32_t _0xEAE3C165B183732E() { return N::Invoke<0xEAE3C165B183732E, uint32_t>(); } // 21D04D7BC538C146
  static uint32_t _0xB846FEC1FCE28FD5() { return N::Invoke<0xB846FEC1FCE28FD5, uint32_t>(); } // 77758139EC9B66C7
  static uint32_t NETWORK_CREATE_SYNCHRONISED_SCENE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7, uint32_t p8, uint32_t p9) { return N::Invoke<0xE9581057DA227F4B, uint32_t>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 7CD6BC4C2BBDD526 B06FE3FE
  static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6, uint32_t p7, float p8, uint32_t p9) { N::Invoke<0x864A7869C9418424, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 742A637471BCECD9 B386713E
  static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, float p4, float p5, uint32_t p6) { N::Invoke<0x44F22276168E5495, void>(p0, p1, p2, p3, p4, p5, p6); } // F2404D68CBC855FA 10DD636C
  static void _0xA8E062ECBBC738B(uint32_t p0, uint32_t *p1, uint32_t *p2) { N::Invoke<0xA8E062ECBBC738B, void>(p0, p1, p2); } // CF8BD3B0BD6D42D7 BFFE8B5C
  static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0xC47E09BE9449A547, void>(p0, p1, p2); } // 478DCBD2A98B705A 3FE5B222
  static void NETWORK_START_SYNCHRONISED_SCENE(uint32_t p0) { N::Invoke<0x1CF38F11D5249AB4, void>(p0); } // 9A1B3FCDB36C8697 A9DFDC40
  static void NETWORK_STOP_SYNCHRONISED_SCENE(uint32_t p0) { N::Invoke<0x1EA2868A4D844B2A, void>(p0); } // C254481A4574CB2F 97B1CDF6
  static uint32_t _0x0BF636E78B6E9E404(uint32_t p0) { return N::Invoke<0xBF636E78B6E9E404, uint32_t>(p0); } // 02C40BF885C567B6 16AED87B
  static uint32_t _0xF9CEEBA16C62DFDC() { return N::Invoke<0xF9CEEBA16C62DFDC, uint32_t>(); } // C9B43A33D09CADA7
  static uint32_t _0x8812B208B8CA0B42(uint32_t p0, uint32_t p1) { return N::Invoke<0x8812B208B8CA0B42, uint32_t>(p0, p1); } // FB1F9381E80FA13F 0679CE71
  static bool _0x16CF59103F382765(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, uint32_t p8) { return N::Invoke<0x16CF59103F382765, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 5A6FFA2433E2F14C C62E77B3
  static bool _0x5B974B672AF66EA9(uint32_t p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, uint32_t p11) { return N::Invoke<0x5B974B672AF66EA9, bool>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 4BA92A18502BCA61 74D6B13C
  static uint32_t _0x193CE735823BDA6E(uint32_t *p0) { return N::Invoke<0x193CE735823BDA6E, uint32_t>(p0); } // 3C891A251567DFCE 90700C7D
  static void _0x606319450BD18268() { N::Invoke<0x606319450BD18268, void>(); } // FB8F2A6F3DF08CBE 44BFB619
  static void NETWORK_GET_RESPAWN_RESULT(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x2842F2EB42EB3295, void>(p0, p1, p2); } // 371EA43692861CF1 DDFE9FBC
  static uint32_t _0xCBE564E4FA008C3C(uint32_t p0) { return N::Invoke<0xCBE564E4FA008C3C, uint32_t>(p0); } // 6C34F1208B8923FD 03287FD2
  static void _0xE29A6C6381A0B53B() { N::Invoke<0xE29A6C6381A0B53B, void>(); } // 17E0198B3882C2CB 408A9436
  static void _0xB5807FD5FA730B52(uint32_t p0, uint32_t p1) { N::Invoke<0xB5807FD5FA730B52, void>(p0, p1); } // FB680D403909DC70 FFB2ADA1
  static void NETWORK_END_TUTORIAL_SESSION() { N::Invoke<0xCE839D35225BADA4, void>(); } // D0AFAFF5A51D72F7 BA57E53E
  static bool NETWORK_IS_IN_TUTORIAL_SESSION() { return N::Invoke<0x1965D5FB1AA96228, bool>(); } // ADA24309FE08DACF 34DD7B28
  static bool _0x91FFBEACAAC1D550() { return N::Invoke<0x91FFBEACAAC1D550, bool>(); } // B37E4E6A2388CA7B 755A2B3E
  static bool _0xB802AAE006746FDB() { return N::Invoke<0xB802AAE006746FDB, bool>(); } // 35F0B98A8387274D A003C40B
  static uint32_t _0xAA7FFE7562363CFF(uint32_t p0) { return N::Invoke<0xAA7FFE7562363CFF, uint32_t>(p0); } // 3B39236746714134 5E1020CC
  static bool _0x73AB522FB7F2E420(uint32_t p0, uint32_t p1) { return N::Invoke<0x73AB522FB7F2E420, bool>(p0, p1); } // 9DE986FC9A87C474 E66A0B40
  static void _0x3A04B58CE30703B7(uint32_t p0, bool p1) { N::Invoke<0x3A04B58CE30703B7, void>(p0, p1); } // BBDF066252829606 72052DB3
  static bool _0xBDB378C87628C9CE(uint32_t p0) { return N::Invoke<0xBDB378C87628C9CE, bool>(p0); } // 919B3C98ED8292F9 B0313590
  static void NETWORK_OVERRIDE_CLOCK_TIME(uint32_t p0, uint32_t p1, uint32_t p2) { N::Invoke<0x560E1B5BC4BF589, void>(p0, p1, p2); } // E679E3E06E363892 C077BCD6
  static void _0x875F7BA4E4200153() { N::Invoke<0x875F7BA4E4200153, void>(); } // D972DF67326F966E C4AEAF49
  static bool _0x6EB8E49A563B3891() { return N::Invoke<0x6EB8E49A563B3891, bool>(); } // D7C95D322FF57522 2465296D
  static uint32_t NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x9482A010973A1A26, uint32_t>(p0, p1, p2, p3, p4, p5); } // 494C8FB299290269 51030E5B
  static uint32_t _0x67209B8AD84CB0C0() { return N::Invoke<0x67209B8AD84CB0C0, uint32_t>(); } // 376C6375BA60293A
  static uint32_t _0x989621D0464A02CB(float p0, float p1, float p2, float p3, float p4, float p5) { return N::Invoke<0x989621D0464A02CB, uint32_t>(p0, p1, p2, p3, p4, p5); } // 25B99872D588A101 4C2C2B12
  static bool NETWORK_REMOVE_ENTITY_AREA(uint32_t p0) { return N::Invoke<0xC83780D1DB4D60EE, bool>(p0); } // 93CF869BAA0C4874 EAB97F25
  static bool _0xFE94B5FB48D07EA1(uint32_t p0) { return N::Invoke<0xFE94B5FB48D07EA1, bool>(p0); } // E64A3CA08DFA37A9 69956127
  static bool _0x96AD82F98DD1B558(uint32_t p0) { return N::Invoke<0x96AD82F98DD1B558, bool>(p0); } // 4DF7CFFF471A7FB1 CB1CD6D3
  static bool _0x6C3BF7236FBC142A(uint32_t p0) { return N::Invoke<0x6C3BF7236FBC142A, bool>(p0); } // 4A2D4E8BF4265B0F C6D53AA0
  static void _0x19D01F2541CA6CD4(uint32_t p0, bool p1) { N::Invoke<0x19D01F2541CA6CD4, void>(p0, p1); } // 2B1813ABA29016C5 155465EE
  static bool _0xCB725C700B0BD08D() { return N::Invoke<0xCB725C700B0BD08D, bool>(); } // 924426BFFD82E915 29532731
  static uint32_t _0x3CDED49BD0CD0EB() { return N::Invoke<0x3CDED49BD0CD0EB, uint32_t>(); } // 8132C0EB8B2B3293
  static void _0xF65721167CEE3C83() { N::Invoke<0xF65721167CEE3C83, void>(); } // 42FB3B532D526E6C D760CAD5
  static uint32_t _0x508C8E576E015CEC() { return N::Invoke<0x508C8E576E015CEC, uint32_t>(); } // 467C11ED88B7D28
  static uint32_t _0xCDB42C3ED6170EB7() { return N::Invoke<0xCDB42C3ED6170EB7, uint32_t>(); } // 10BD227A753B0D84 231CFD12
  static bool NETWORK_DOES_TUNABLE_EXIST(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xED1B1D306533181E, bool>(p0, p1); } // 85E5F8B9B898B20A 9FCE9C9A
  static bool _0xE06E281CC0B401A6(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xE06E281CC0B401A6, bool>(p0, p1, p2); } // 8BE1146DFD5D4468 E4B3726A
  static bool _0xCF5CE7800A8EE7C5(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xCF5CE7800A8EE7C5, bool>(p0, p1, p2); } // E5608CA7BC163A5F 41E8912A
  static bool _0xFB2C5A2F48AF9B0C(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xFB2C5A2F48AF9B0C, bool>(p0, p1); } // AA6A47A573ABB75A 8A04E1FE
  static uint32_t _0x715C99A9B4D0842D() { return N::Invoke<0x715C99A9B4D0842D, uint32_t>(); } // A25E006B36719774
  static uint32_t _0x9348D52B6AF69B60() { return N::Invoke<0x9348D52B6AF69B60, uint32_t>(); } // A18393089C05E49C
  static uint32_t _0xE3C42D67C46758BF() { return N::Invoke<0xE3C42D67C46758BF, uint32_t>(); } // B2AD5D29A99D4B26
  static uint32_t _0xD24BDA92FB7EC2A0() { return N::Invoke<0xD24BDA92FB7EC2A0, uint32_t>(); } // 2CC08CD70B8596AE
  static uint32_t _0xF892B86005EC8290() { return N::Invoke<0xF892B86005EC8290, uint32_t>(); } // 48176D1596785BA5
  static uint32_t _0xFC63DEF2327C3B5C() { return N::Invoke<0xFC63DEF2327C3B5C, uint32_t>(); } // 6080A56EE7025230
  static uint32_t _0x71FE210603F89B9D() { return N::Invoke<0x71FE210603F89B9D, uint32_t>(); } // E4E53E1419D81127
  static uint32_t _0x7BEBDB94A54C399A() { return N::Invoke<0x7BEBDB94A54C399A, uint32_t>(); } // 40FCE03E50E8DBE8
  static uint32_t _0xC38AB0CDE29645A0() { return N::Invoke<0xC38AB0CDE29645A0, uint32_t>(); } // 972BC203BBC4C4D5
  static uint32_t _0xC018BD2276FF7073() { return N::Invoke<0xC018BD2276FF7073, uint32_t>(); } // EA16B69D93D71A45
  static uint32_t _0x22480867B827DDA0() { return N::Invoke<0x22480867B827DDA0, uint32_t>(); } // 26CADD4DEFFE5B04
  static uint32_t _0xEE05397E7E271E12() { return N::Invoke<0xEE05397E7E271E12, uint32_t>(); } // 8DE5415F2AB98622
  static uint32_t _0xA760402EEFEC2991() { return N::Invoke<0xA760402EEFEC2991, uint32_t>(); } // C7420099936CE286
  static uint32_t _0x457057613FD92A33() { return N::Invoke<0x457057613FD92A33, uint32_t>(); } // 81829520ECAD1A4E
  static uint32_t _0x3765E8FB007F536C() { return N::Invoke<0x3765E8FB007F536C, uint32_t>(); } // B68B7037D4D30186
  static uint32_t _0xDFEF63DBFB851F55() { return N::Invoke<0xDFEF63DBFB851F55, uint32_t>(); } // D8C9C5726D5AAE1F
  static uint32_t _0x1A8D52961399BA01(uint32_t p0) { return N::Invoke<0x1A8D52961399BA01, uint32_t>(p0); } // 187382F8A3E0A6C3 A78571CA
  static uint32_t _0x650D7CDF8D696F01() { return N::Invoke<0x650D7CDF8D696F01, uint32_t>(); } // 7DB53B37A2F211A0 053BB329
  static void NETWORK_RESET_BODY_TRACKER() { N::Invoke<0x5B90B317A42EC17C, void>(); } // 72433699B4E6DD64 3914463F
  static uint32_t _0xCBFD8C03A7CECA89() { return N::Invoke<0xCBFD8C03A7CECA89, uint32_t>(); } // D38C4A6D047C019D 17CBC608
  static bool _0xD38A15EFF8976ABA(uint32_t p0) { return N::Invoke<0xD38A15EFF8976ABA, bool>(p0); } // 2E0BF682CC778D49 BFAA349B
  static bool _0x075619AF961130C0B(uint32_t p0, uint32_t p1) { return N::Invoke<0x75619AF961130C0B, bool>(p0, p1); } // 0EDE326D47CD0F3E BEB7281A
  static uint32_t NETWORK_EXPLODE_VEHICLE(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x3CF71355C7CD09A, uint32_t>(p0, p1, p2, p3); } // 301A42153C9AD707 0E1B38AE
  static void _0x42AF104DD530B138(uint32_t p0) { N::Invoke<0x42AF104DD530B138, void>(p0); } // CD71A4ECAB22709E BC54371B
  static void _0x774265231FBBB6E1(uint32_t p0, float p1, float p2, float p3, float p4) { N::Invoke<0x774265231FBBB6E1, void>(p0, p1, p2, p3, p4); } // A7E30DE9272B6D49 644141C5
  static uint32_t _0xA985756BF21E14F6() { return N::Invoke<0xA985756BF21E14F6, uint32_t>(); } // 407091CF6037118E
  static void NETWORK_SET_PROPERTY_ID(uint32_t p0) { N::Invoke<0x9E04FFB9BC778DF3, void>(p0); } // 1775961C2FBBCB5C 5A74E873
  static void _0x2FFDCFFCA8794BA1() { N::Invoke<0x2FFDCFFCA8794BA1, void>(); } // C2B82527CA77053E 38BC35C8
  static void _0x2A6BDDC3B9EDC6C6(uint32_t p0) { N::Invoke<0x2A6BDDC3B9EDC6C6, void>(p0); } // 367EF5E2F439B4C6 53C9563C
  static void _0x948CB9AA983BC9A2(bool p0) { N::Invoke<0x948CB9AA983BC9A2, void>(p0); } // 94538037EE44F5CF 6B97075B
  static uint32_t _0x88E38FC151EBB956() { return N::Invoke<0x88E38FC151EBB956, uint32_t>(); } // BD0BE0BFC927EAC1
  static uint32_t _0x7B32E73C14C34BDE() { return N::Invoke<0x7B32E73C14C34BDE, uint32_t>(); } // 237D5336A9A54108
  static uint32_t _0x5DC326BB1B615276() { return N::Invoke<0x5DC326BB1B615276, uint32_t>(); } // 99B72C7ABDE5C910
  static uint32_t _0xB0AC4B9E75C18C3() { return N::Invoke<0xB0AC4B9E75C18C3, uint32_t>(); } // F2EAC213D5EA0623 965EA007
  static uint32_t _0x9C225E21E8BA6113() { return N::Invoke<0x9C225E21E8BA6113, uint32_t>(); } // EA14EEF5B7CD2C30 EEFC8A55
  static void _0x685B935AF14CD7BD(uint32_t p0) { N::Invoke<0x685B935AF14CD7BD, void>(p0); } // B606E6CC59664972 866D1B67
  static bool _0xF63CC5259EE95491() { return N::Invoke<0xF63CC5259EE95491, bool>(); } // 1D4DC17C38FEAFF0 ED4A272F
  static uint32_t _0x34228D9CD039464F(uint32_t p0) { return N::Invoke<0x34228D9CD039464F, uint32_t>(p0); } // 662635855957C411 4ACF110C
  static uint32_t _0x9144C894D38C7E15(uint32_t p0) { return N::Invoke<0x9144C894D38C7E15, uint32_t>(p0); } // B4271092CA7EDF48 1AA3A0D5
  static uint32_t _0xFAD7AB48319C66DC(uint32_t p0) { return N::Invoke<0xFAD7AB48319C66DC, uint32_t>(p0); } // CA94551B50B4932C 37877757
  static uint32_t _0x85840D3E433A2C13(uint32_t p0) { return N::Invoke<0x85840D3E433A2C13, uint32_t>(p0); } // 2A7776C709904AB0 1CF89DA5
  static uint32_t _0x161F3984BD562DAC(uint32_t p0, uint32_t p1) { return N::Invoke<0x161F3984BD562DAC, uint32_t>(p0, p1); } // 6F44CBF56D79FAC0 16E53875
  static void _0x4C5E3FF6C6706702(uint32_t p0, uint32_t p1) { N::Invoke<0x4C5E3FF6C6706702, void>(p0, p1); } // 58C21165F6545892 365C50EE
  static bool _0xC7DB3B0FD27ABAAD() { return N::Invoke<0xC7DB3B0FD27ABAAD, bool>(); } // 2EAC52B4019E2782 25E2DBA9
  static void SET_STORE_ENABLED(bool p0) { N::Invoke<0x8A1FDF55065D5DE0, void>(p0); } // 9641A9FF718E9C5E C1F6443B
  static bool _0xB8BDA9D998920252(uint32_t p0) { return N::Invoke<0xB8BDA9D998920252, bool>(p0); } // A2F952104FC6DD4B 1FDC75DC
  static void _0x4510D4C580CA4CD6() { N::Invoke<0x4510D4C580CA4CD6, void>(); } // 72D0706CD6CCDB58 CA7A0A49
  static uint32_t _0x44DE035E2E87760A(uint32_t p0) { return N::Invoke<0x44DE035E2E87760A, uint32_t>(p0); } // 722F5D28B61C5EA8 44A58B0A
  static bool _0xB67050B59E08385A() { return N::Invoke<0xB67050B59E08385A, bool>(); } // 883D79C4071E18B3 D32FA11F
  static void _0x983F5BC954DB24C1() { N::Invoke<0x983F5BC954DB24C1, void>(); } // 265635150FB0D82E A7FA70AE
  static void _0xAB5C67FA11BB7F1B() { N::Invoke<0xAB5C67FA11BB7F1B, void>(); } // 444C4525ECE0A4B9 CC7DCE24
  static bool _0x4BA442FB764A510B() { return N::Invoke<0x4BA442FB764A510B, bool>(); } // 59328EB08C5CEB2B 70F6D3AD
  static uint32_t _0x5867C64919BFE2BA() { return N::Invoke<0x5867C64919BFE2BA, uint32_t>(); } // FAE628F1E9ADB239
  static uint32_t _0x5A1B17ACE2B7B307(uint32_t *p0) { return N::Invoke<0x5A1B17ACE2B7B307, uint32_t>(p0); } // C64DED7EF0D2FE37 2B7B57B3
  static bool _0xA862A1BE5F233BCE(uint32_t p0) { return N::Invoke<0xA862A1BE5F233BCE, bool>(p0); } // 4C61B39930D045DA BAF52DD8
  static bool _0x28B66938B2AE0496(uint32_t p0) { return N::Invoke<0x28B66938B2AE0496, bool>(p0); } // 3A3D5568AF297CD5 9B9AFFF1
  static void _0x3FC82BA4056A34B8() { N::Invoke<0x3FC82BA4056A34B8, void>(); } // 4F18196C8D38768D C38E9DB0
  static bool _0x2ADDDC2FB61551AC() { return N::Invoke<0x2ADDDC2FB61551AC, bool>(); } // C7ABAC5DE675EE3B 32A4EB22
  static uint32_t _0x01B02BE08E36D3C01() { return N::Invoke<0x1B02BE08E36D3C01, uint32_t>(); } // 0B0CC10720653F3B 9262744C
  static uint32_t _0x1ECA36576A268BC8() { return N::Invoke<0x1ECA36576A268BC8, uint32_t>(); } // 8B0C2964BA471961
  static uint32_t _0x94BC6040E52B7BA4() { return N::Invoke<0x94BC6040E52B7BA4, uint32_t>(); } // 88B588B41FF7868E
  static uint32_t _0x976BF460D0D2FFD7() { return N::Invoke<0x976BF460D0D2FFD7, uint32_t>(); } // 67FC09BC554A75E5
  static uint32_t _0x369844F61CC4DA30() { return N::Invoke<0x369844F61CC4DA30, uint32_t>(); } // 966DD84FB6A46017
  static bool _0xEF48CE618399AF0A(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xEF48CE618399AF0A, bool>(p0, p1); } // 152D90E4C1B4738A 08243B79
  static bool _0x2EE36F43F9228A24() { return N::Invoke<0x2EE36F43F9228A24, bool>(); } // 9FEDF86898F100E9 798D6C27
  static bool _0xE0FD1EBD790BBCEA() { return N::Invoke<0xE0FD1EBD790BBCEA, bool>(); } // 5E24341A7F92A74B E69E8D0D
  static bool _0x6E6501F88E9E24CE() { return N::Invoke<0x6E6501F88E9E24CE, bool>(); } // 24E4E51FC16305F9 742075FE
  static uint32_t _0xA5C07493FF6F9640() { return N::Invoke<0xA5C07493FF6F9640, uint32_t>(); } // FBC5E768C7A77A6A CE569932
  static uint32_t _0xE23C76304BDB44B6() { return N::Invoke<0xE23C76304BDB44B6, uint32_t>(); } // C55A0B40FFB1ED23 82146BE9
  static void _0x67ED9B0C7C50FEBB() { N::Invoke<0x67ED9B0C7C50FEBB, void>(); } // 17440AA15D1D3739 133FF2D5
  static bool _0xBF6236234355282B(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0xBF6236234355282B, bool>(p0, p1, p2, p3, p4, p5); } // 9BF438815F5D96EA CBA7242F
  static uint32_t _0x29BF8373C402ED() { return N::Invoke<0x29BF8373C402ED, uint32_t>(); } // 692D58DF40657E8C
  static bool _0x4E56D47D52C10EF8(uint32_t *p0, bool p1, uint32_t *p2) { return N::Invoke<0x4E56D47D52C10EF8, bool>(p0, p1, p2); } // 158EC424F35EC469 DED82A6E
  static uint32_t _0x38635CF209AB0BD0() { return N::Invoke<0x38635CF209AB0BD0, uint32_t>(); } // C7397A83F7A2A462
  static bool _0xBA80CD088DDFCFC2(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t p3) { return N::Invoke<0xBA80CD088DDFCFC2, bool>(p0, p1, p2, p3); } // 6D4CB481FAC835E8 40CF0783
  static bool _0x6F87CA81E2BBFCCC(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0x6F87CA81E2BBFCCC, bool>(p0, p1, p2, p3); } // D5A4B59980401588 4609D596
  static bool _0xE1305A745E39AF0(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0xE1305A745E39AF0, bool>(p0, p1, p2, p3); } // 3195F8DD0D531052 4C2C0D1F
  static bool _0x651A15ADDEAAA78E(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0x651A15ADDEAAA78E, bool>(p0, p1, p2, p3); } // F9E1CCAE8BA4C281 9EFBD5D1
  static bool _0xAB475505E1428537(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0xAB475505E1428537, bool>(p0, p1, p2, p3, p4); } // 9F6E2821885CAEE2 A6D8B798
  static bool _0x516A844C03E48DF(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t *p3, uint32_t *p4) { return N::Invoke<0x516A844C03E48DF, bool>(p0, p1, p2, p3, p4); } // 678BB03C1A3BD51E 67E74842
  static bool SET_BALANCE_ADD_MACHINE(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xA61931BBBFCC780B, bool>(p0, p1); } // 815E5E3073DA1D67 E123C7AC
  static bool SET_BALANCE_ADD_MACHINES(uint32_t *p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0xA694CE2B5354872, bool>(p0, p1, p2); } // B8322EEB38BE7C26 22C33603
  static bool _0x7027052F8758E0DF(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0x7027052F8758E0DF, bool>(p0, p1, p2, p3); } // A7862BC5ED1DFD7E 37F5BD93
  static bool _0xAE13AE0E296441DF(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0xAE13AE0E296441DF, bool>(p0, p1, p2, p3); } // 97A770BEEF227E2B 1CFB3F51
  static bool _0x65E25ECD593B2233(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3) { return N::Invoke<0x65E25ECD593B2233, bool>(p0, p1, p2, p3); } // 5324A0E3E4CE3570 87D1E6BD
  static void _0xC6C784D63815B00A() { N::Invoke<0xC6C784D63815B00A, void>(); } // E9B99B6853181409 021D5A94
  static bool _0xD29595708422F4D4() { return N::Invoke<0xD29595708422F4D4, bool>(); } // D53ACDBEF24A46E8 4908A514
  static bool _0x0118305AAC4F7F183() { return N::Invoke<0x118305AAC4F7F183, bool>(); } // 02ADA21EA2F6918F 50296140
  static bool _0xBEE8C71E71338165() { return N::Invoke<0xBEE8C71E71338165, bool>(); } // 941E5306BCD7C2C7 3970B0DA
  static bool _0x7EBE83FC4C47BF6F() { return N::Invoke<0x7EBE83FC4C47BF6F, bool>(); } // C87E740D9F3872CC C1487110
  static uint32_t _0xE539AD9EC07706EB() { return N::Invoke<0xE539AD9EC07706EB, uint32_t>(); } // EDF7F927136C224B CC2356E3
  static uint32_t _0x2F037182EFEE8D06() { return N::Invoke<0x2F037182EFEE8D06, uint32_t>(); } // E0A6138401BCB837 2DE69817
  static uint32_t _0x250D5FF638374F91() { return N::Invoke<0x250D5FF638374F91, uint32_t>(); } // 769951E2455E2EB5 81BD8D3B
  static uint32_t _0x5E214320D47062E2() { return N::Invoke<0x5E214320D47062E2, uint32_t>(); } // 3A17A27D75C74887 8E1D8F78
  static void _0x44FD6BA447D0EA3F() { N::Invoke<0x44FD6BA447D0EA3F, void>(); } // BA96394A0EECFA65 0D35DD93
  static uint32_t _0x9779D6EFA6730EA4(uint32_t p0) { return N::Invoke<0x9779D6EFA6730EA4, uint32_t>(p0); } // CD67AD041A394C9C 8F3137E6
  static uint32_t _0x9963590A51CECFAC() { return N::Invoke<0x9963590A51CECFAC, uint32_t>(); } // 584770794D758C18
  static uint32_t _0x2BF70139BE04229B() { return N::Invoke<0x2BF70139BE04229B, uint32_t>(); } // 8C8D2739BA44AF0F
  static uint32_t _0x6F39B7BEEDD65FEA(uint32_t p0) { return N::Invoke<0x6F39B7BEEDD65FEA, uint32_t>(p0); } // 703F12425ECA8BF5 B9137BA7
  static bool _0x843FAF7ECFB47C2F(uint32_t p0) { return N::Invoke<0x843FAF7ECFB47C2F, bool>(p0); } // AEAB987727C5A8A4 9FEEAA9C
  static uint32_t _0x71FB3ECF515AB0A8(uint32_t p0) { return N::Invoke<0x71FB3ECF515AB0A8, uint32_t>(p0); } // A7BAB11E7C9C6C5A 5E8A7559
  static uint32_t _0xCC6691CC3D08D95F(uint32_t p0) { return N::Invoke<0xCC6691CC3D08D95F, uint32_t>(p0); } // 55AA95F481D694D2 331AEABF
  static uint32_t _0x64371B1989342625(uint32_t p0) { return N::Invoke<0x64371B1989342625, uint32_t>(p0); } // C0173D6BFF4E0348 0E5E8E5C
  static uint32_t _0x1614D9CD7987D17(uint32_t p0) { return N::Invoke<0x1614D9CD7987D17, uint32_t>(p0); } // BF09786A7FCAB582 A5A0C695
  static uint32_t _0x43765D2EC7278730(uint32_t p0) { return N::Invoke<0x43765D2EC7278730, uint32_t>(p0); } // 7CF0448787B23758 91534C6E
  static uint32_t _0xBFA6A1DFF7408348(uint32_t p0, uint32_t p1) { return N::Invoke<0xBFA6A1DFF7408348, uint32_t>(p0, p1); } // BAF6BABF9E7CCC13 744A9EA5
  static void _0x2C40C9D5FF056ADE(uint32_t p0, uint32_t *p1) { N::Invoke<0x2C40C9D5FF056ADE, void>(p0, p1); } // CFD115B373C0DF63 A19A238D
  static uint32_t _0x683BB5D2B038C81F(uint32_t p0, uint32_t p1) { return N::Invoke<0x683BB5D2B038C81F, uint32_t>(p0, p1); } // 37025B27D9B658B1 FF7D44E6
  static uint32_t _0xC8C1B7724A93B1B0() { return N::Invoke<0xC8C1B7724A93B1B0, uint32_t>(); } // 1D610EB0FEA716D9
  static uint32_t _0x613E04ED22D1EA9A() { return N::Invoke<0x613E04ED22D1EA9A, uint32_t>(); } // 7FCC39C46C3C03BD
  static uint32_t _0xF62F0B0627612D8A(uint32_t p0) { return N::Invoke<0xF62F0B0627612D8A, uint32_t>(p0); } // 32DD916F3F7C9672 A2C5BD9D
  static bool _0x3B0539D7CA329244(uint32_t p0) { return N::Invoke<0x3B0539D7CA329244, bool>(p0); } // 3054F114121C21EA A850DDE1
  static bool _0x6C149DB72682371(uint32_t p0) { return N::Invoke<0x6C149DB72682371, bool>(p0); } // A9240A96C74CCA13 8F6754AE
  static uint32_t _0x10C481A7180DAEA4(uint32_t p0, uint32_t p1) { return N::Invoke<0x10C481A7180DAEA4, uint32_t>(p0, p1); } // 1ACCFBA3D8DAB2EE 1E34953F
  static uint32_t _0x53D3F1D904EB8CFD(uint32_t p0, uint32_t p1) { return N::Invoke<0x53D3F1D904EB8CFD, uint32_t>(p0, p1); } // 759299C5BB31D2A9 771FE190
  static uint32_t _0xA0D37214D4BE85BC(uint32_t p0, uint32_t p1) { return N::Invoke<0xA0D37214D4BE85BC, uint32_t>(p0, p1); } // 87E5C46C187FE0AE 3276D9D3
  static uint32_t _0x56DBAA8CF60DF437(uint32_t p0, uint32_t p1) { return N::Invoke<0x56DBAA8CF60DF437, uint32_t>(p0, p1); } // 4E548C0D7AE39FF9 41A0FB02
  static bool _0xD2542B3A6499CD38(uint32_t p0) { return N::Invoke<0xD2542B3A6499CD38, bool>(p0); } // 70EA8DA57840F9BE 11DC0F27
  static bool _0xC67B6C8F541D4198(uint32_t p0) { return N::Invoke<0xC67B6C8F541D4198, bool>(p0); } // 993CBE59D350D225 0DEB3F5A
  static uint32_t _0x171DF6A0C07FB3DC(uint32_t p0, uint32_t p1) { return N::Invoke<0x171DF6A0C07FB3DC, uint32_t>(p0, p1); } // 171DF6A0C07FB3DC 84315226
  static uint32_t _0x7FD2990AF016795E(uint32_t *p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4) { return N::Invoke<0x7FD2990AF016795E, uint32_t>(p0, p1, p2, p3, p4); } // 7FD2990AF016795E 38FC2EEB
  static uint32_t _0x4FF9F024FD32E6C2(uint32_t p0) { return N::Invoke<0x4FF9F024FD32E6C2, uint32_t>(p0); } // 5E0165278F6339EE 1C4F9FDB
  static bool _0xE16EFE9713A6D3DE(uint32_t p0) { return N::Invoke<0xE16EFE9713A6D3DE, bool>(p0); } // 2D5DC831176D0114 A69AE16C
  static bool _0xA92F8628189E75D7(uint32_t p0) { return N::Invoke<0xA92F8628189E75D7, bool>(p0); } // EBFA8D50ADDC54C4 F50BC67A
  static bool _0x94CCC01E5F279942(uint32_t p0) { return N::Invoke<0x94CCC01E5F279942, bool>(p0); } // 162C23CA83ED0A62 B3BBD241
  static uint32_t _0x2C1BD81BDB0413A8(uint32_t p0, uint32_t p1) { return N::Invoke<0x2C1BD81BDB0413A8, uint32_t>(p0, p1); } // 40F7E66472DF3E5C 70A2845C
  static bool _0x9A42AFF66E5078C6(uint32_t p0) { return N::Invoke<0x9A42AFF66E5078C6, bool>(p0); } // 5A34CD9C3C5BEC44 346B506C
  static void _0x5006646B0A94A36D() { N::Invoke<0x5006646B0A94A36D, void>(); } // 68103E2247887242 0095DB71
  static bool _0xC783B2D6A5C277CB(uint32_t *p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xC783B2D6A5C277CB, bool>(p0, p1, p2); } // 1DE0F5F50D723CAA AD334B40
  static bool _0x68FC37BD2D66AD3B(uint32_t *p0, bool p1, uint32_t *p2) { return N::Invoke<0x68FC37BD2D66AD3B, bool>(p0, p1, p2); } // 274A1519DFC1094F 980D45D7
  static bool _0x5179477A404730F4(uint32_t *p0, bool p1, uint32_t *p2) { return N::Invoke<0x5179477A404730F4, bool>(p0, p1, p2); } // D05D1A6C74DA3498 48CCC328
  static bool _0x7AEBFA66997BD979() { return N::Invoke<0x7AEBFA66997BD979, bool>(); } // 45E816772E93A9DB 8E664EFD
  static bool _0xD9D6605097CCCDF4() { return N::Invoke<0xD9D6605097CCCDF4, bool>(); } // 299EF3C576773506 611E0BE2
  static bool _0x5476FD804980B34C() { return N::Invoke<0x5476FD804980B34C, bool>(); } // 793FF272D5B365F4 F0211AC1
  static uint32_t _0x58E65C18F1DC3FF7() { return N::Invoke<0x58E65C18F1DC3FF7, uint32_t>(); } // 5A0A3D1A186A5508 1F0DD8AF
  static void _0xC13829D2B382C248() { N::Invoke<0xC13829D2B382C248, void>(); } // A1E5E0204A6FCC70 405ECA16
  static bool _0xF9AD04DCF8EBEC10(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xF9AD04DCF8EBEC10, bool>(p0, p1); } // B746D20B17F2A229 9567392B
  static bool _0x15661C14C9EAB7F2() { return N::Invoke<0x15661C14C9EAB7F2, bool>(); } // 63B406D7884BFA95 F79FFF3C
  static bool _0x43B037C40D85373A() { return N::Invoke<0x43B037C40D85373A, bool>(); } // 4D02279C83BE69FE A7F3F82B
  static uint32_t _0xC953DE1C979F7864() { return N::Invoke<0xC953DE1C979F7864, uint32_t>(); } // 597F8DBA9B206FC7 410C61D1
  static bool _0xE28CFF18502EA4E(uint32_t p0) { return N::Invoke<0xE28CFF18502EA4E, bool>(p0); } // 5CAE833B0EE0C500 0D4F845D
  static void _0x6436BDEACFB0495D() { N::Invoke<0x6436BDEACFB0495D, void>(); } // 61A885D3F7CFEE9A E13C1F7F
  static void _0x6D5993A0867993BC(bool p0) { N::Invoke<0x6D5993A0867993BC, void>(p0); } // F98DDE0A8ED09323 213C6D36
  static void _0xA9A185532649B33E(bool p0) { N::Invoke<0xA9A185532649B33E, void>(p0); } // FD75DABC0957BF33 511E6F50
  static bool _0xF7D85F23727065AA(uint32_t p0) { return N::Invoke<0xF7D85F23727065AA, bool>(p0); } // F53E48461B71EECB B4668B23
  static bool _0x017BD2BC9EC8FF721(uint32_t *p0, uint32_t p1, uint32_t p2) { return N::Invoke<0x17BD2BC9EC8FF721, bool>(p0, p1, p2); } // 098AB65B9ED9A9EC 30B51753
  static bool _0x3240E3C70DDA9474() { return N::Invoke<0x3240E3C70DDA9474, bool>(); } // DC48473142545431 02DAD93F
  static bool _0x0FD61A954794984BA(uint32_t p0) { return N::Invoke<0xFD61A954794984BA, bool>(p0); } // 0AE1F1653B554AB9 2D947814
  static bool _0x5BF1C0FDA139383B() { return N::Invoke<0x5BF1C0FDA139383B, bool>(); } // 62B9FEC9A11F10EF 37A28C26
  static bool _0xF1C6F9E767A5DEE8() { return N::Invoke<0xF1C6F9E767A5DEE8, bool>(); } // A75E2B6733DA5142 11E8B5CD
  static bool _0x4798C6069A872EC2() { return N::Invoke<0x4798C6069A872EC2, bool>(); } // 43865688AE10F0D7 429AEAB3
  static uint32_t TEXTURE_DOWNLOAD_REQUEST(uint32_t *p0, uint32_t *p1, uint32_t *p2, bool p3) { return N::Invoke<0xF167A5ADFC667948, uint32_t>(p0, p1, p2, p3); } // 16160DA74A8E74A2 AD546CC3
  static uint32_t _0x0CE3B4D02B7A92D26(uint32_t *p0, uint32_t *p1, bool p2) { return N::Invoke<0xCE3B4D02B7A92D26, uint32_t>(p0, p1, p2); } // 0B203B4AFDE53A4F 1856D008
  static uint32_t _0x4FB34A5068894285(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t *p4, bool p5) { return N::Invoke<0x4FB34A5068894285, uint32_t>(p0, p1, p2, p3, p4, p5); } // 308F96458B7087CC 68C9AF69
  static void TEXTURE_DOWNLOAD_RELEASE(uint32_t p0) { N::Invoke<0x23C292E9407BA5C3, void>(p0); } // 487EB90B98E9FB19 EE8D9E70
  static bool _0xF98CD24814CF850B(uint32_t p0) { return N::Invoke<0xF98CD24814CF850B, bool>(p0); } // 5776ED562C134687 E4547765
  static uint32_t TEXTURE_DOWNLOAD_GET_NAME(uint32_t p0) { return N::Invoke<0xBBFC293A49773E04, uint32_t>(p0); } // 3448505B6E35262D A40EF65A
  static uint32_t _0xFE7079FA4E8435E8(uint32_t p0) { return N::Invoke<0xFE7079FA4E8435E8, uint32_t>(p0); } // 8BD6C6DEA20E82C6 03225BA3
  static bool _0xFB0BBF0CC2ED72E9() { return N::Invoke<0xFB0BBF0CC2ED72E9, bool>(); } // 60EDD13EB3AC1FF3 4DEBC227
  static bool _0x9BF8E98D9B3F5A54() { return N::Invoke<0x9BF8E98D9B3F5A54, bool>(); } // EFFB25453D8600F9 5C065D55
  static bool _0x159065C2913B4494() { return N::Invoke<0x159065C2913B4494, bool>(); } // 66B59CFFD78467AF 0CA1167F
  static bool _0x19070185D75DF222() { return N::Invoke<0x19070185D75DF222, bool>(); } // 606E4D3E3CCCF3EB 424C6E27
  static bool _0xEC2B31743D652C31() { return N::Invoke<0xEC2B31743D652C31, bool>(); } // 8020A73847E0CA7D D3BBE42F
  static bool _0xEBCDDFA755C5351E() { return N::Invoke<0xEBCDDFA755C5351E, bool>(); } // A0AD7E2AF5349F61 BDBB5948
  static bool _0x96DFA37778AF8612() { return N::Invoke<0x96DFA37778AF8612, bool>(); } // 5F91D5D0B36AA310 97287D68
  static bool _0x9EAC9983022E6FF4() { return N::Invoke<0x9EAC9983022E6FF4, bool>(); } // 422D396F80A96547 C6EA802E
  static bool _0xEFDDEF6F89C7D852(uint32_t p0) { return N::Invoke<0xEFDDEF6F89C7D852, bool>(p0); } // A699957E60D80214 FD261E30
  static bool _0xB44392005E092A22(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xB44392005E092A22, bool>(p0, p1, p2); } // C22912B1D85F26B1 8570DD34
  static uint32_t _0xFA66FD5789959E48() { return N::Invoke<0xFA66FD5789959E48, uint32_t>(); } // 593570C289A77688
  static uint32_t _0x9785D134CB2612F6() { return N::Invoke<0x9785D134CB2612F6, uint32_t>(); } // 91B87C55093DE351
  static uint32_t _0x7D162B3706F5713C() { return N::Invoke<0x7D162B3706F5713C, uint32_t>(); } // 36391F397731595D
  static uint32_t _0xC0950B9461B63079() { return N::Invoke<0xC0950B9461B63079, uint32_t>(); } // DEB2B99A1AF1A2A6
  static void _0xEA10D24F8D8A9217() { N::Invoke<0xEA10D24F8D8A9217, void>(); } // 9465E683B12D3F6B 273C6180
  static void _0xD1A3BECA9203A5A9() { N::Invoke<0xD1A3BECA9203A5A9, void>(); } // B7C7F6AD6424304B 371BBA08
  static void _0x6C912BA9B35A9F3F(bool p0) { N::Invoke<0x6C912BA9B35A9F3F, void>(p0); } // C505036A35AFD01B A100CC97
  static void _0x767B987327A45DE0(uint32_t p0, bool p1) { N::Invoke<0x767B987327A45DE0, void>(p0, p1); } // 267C78C60E806B9A BB2D33D3
  static uint32_t _0xA77A2F3C94F99323() { return N::Invoke<0xA77A2F3C94F99323, uint32_t>(); } // 6BFF5F84102DF80A
  static uint32_t _0x4AB930244460BF2() { return N::Invoke<0x4AB930244460BF2, uint32_t>(); } // 5C497525F803486B
  static uint32_t _0xC6B51ABA90A91F9C() { return N::Invoke<0xC6B51ABA90A91F9C, uint32_t>(); } // 6FB7BB3607D27FA2
  static uint32_t _0x6B59AA13AC812986() { return N::Invoke<0x6B59AA13AC812986, uint32_t>(); } // 45A83257ED02D9BC
  static uint32_t _0x43B4FFCFED9E629D() { return N::Invoke<0x43B4FFCFED9E629D, uint32_t>(); } // 16D3D49902F697BB
  static uint32_t _0x26861E4FE0FD85D() { return N::Invoke<0x26861E4FE0FD85D, uint32_t>(); } // D414BE129BB81B32
  static uint32_t _0xB294CFF80EA67F76() { return N::Invoke<0xB294CFF80EA67F76, uint32_t>(); } // E3A041ED6AC2B45
  static uint32_t _0x5FEB50ECA6DD9B24() { return N::Invoke<0x5FEB50ECA6DD9B24, uint32_t>(); } // 350C23949E43686C
  static uint32_t _0x97F815C108E479B0() { return N::Invoke<0x97F815C108E479B0, uint32_t>(); } // FF8FCF9FFC458A1C
  static uint32_t _0x120310548ED80B0E() { return N::Invoke<0x120310548ED80B0E, uint32_t>(); } // 3765C3A3E8192E10
  static uint32_t _0xDA764F19651463C5() { return N::Invoke<0xDA764F19651463C5, uint32_t>(); } // 52C1EADAF7B10302
  static uint32_t _0x882D9298D195234F() { return N::Invoke<0x882D9298D195234F, uint32_t>(); } // AEDF1BC1C133D6E3
  static uint32_t _0xD35E7A9354D9F1C2() { return N::Invoke<0xD35E7A9354D9F1C2, uint32_t>(); } // 2555CF7DA5473794
  static uint32_t _0xEDA449040F5BBACF() { return N::Invoke<0xEDA449040F5BBACF, uint32_t>(); } // 6FD992C4A1C1B986
}

namespace NETWORKCASH
{
  static void _0x1FF571B9157EE8D(uint32_t p0, uint32_t p1) { N::Invoke<0x1FF571B9157EE8D, void>(p0, p1); } // 3DA5ECD1A56CBA6D 66DA9935
  static void NETWORK_DELETE_CHARACTER(uint32_t p0, bool p1, bool p2) { N::Invoke<0xE4E716428D186C37, void>(p0, p1, p2); } // 05A50AF38947EB8D A9F7E9C3
  static uint32_t _0x428CCAD918959149() { return N::Invoke<0x428CCAD918959149, uint32_t>(); } // FB2456B2040A6A67
  static void _0x80CF7744FA465DBE(uint32_t p0) { N::Invoke<0x80CF7744FA465DBE, void>(p0); } // A921DED15FDF28F5 19F0C471
  static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(uint32_t p0, uint32_t *p1) { N::Invoke<0xB79C30FF82F0D089, void>(p0, p1); } // FB18DF9CB95E0105 C6047FDB
  static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(uint32_t p0, uint32_t *p1) { N::Invoke<0x18502B2FD4934538, void>(p0, p1); } // 56A3B51944C50598 4ED71C1A
  static bool _0x3CDF164C92BCDE6D() { return N::Invoke<0x3CDF164C92BCDE6D, bool>(); } // 1C2473301B1C66BA A27B9FE8
  static void _0x3C2373FD72F7B502(uint32_t p0, uint32_t *p1, uint32_t *p2, bool p3) { N::Invoke<0x3C2373FD72F7B502, void>(p0, p1, p2, p3); } // F9C812CD7C46E817 07C92F21
  static uint32_t _0x113ABD14FB7B863() { return N::Invoke<0x113ABD14FB7B863, uint32_t>(); } // 18B7AE224B087E26
  static bool _0xDDAF2DF64E40BF0E(uint32_t p0, bool p1, bool p2) { return N::Invoke<0xDDAF2DF64E40BF0E, bool>(p0, p1, p2); } // 81404F3DC124FE5B 8474E6F0
  static bool _0x81CD3917E8426670(uint32_t p0) { return N::Invoke<0x81CD3917E8426670, bool>(p0); } // 3A54E33660DED67F E3802533
  static uint32_t _0xA096DBD65BE8F9DF() { return N::Invoke<0xA096DBD65BE8F9DF, uint32_t>(); } // C62DD18375C99130
  static uint32_t _0x546BA02120FE73ED() { return N::Invoke<0x546BA02120FE73ED, uint32_t>(); } // CD0F5B5D932AE473
  static void NETWORK_EARN_FROM_PICKUP(uint32_t p0) { N::Invoke<0x14EB8BD17B652FEB, void>(p0); } // ED1517D3AF17C698 70A0ED62
  static void _0x6FC4139E8B076EB5(uint32_t p0) { N::Invoke<0x6FC4139E8B076EB5, void>(p0); } // A03D4ACE0A3284CE 33C20BC4
  static void _0xAD3D2665CCF516BE(uint32_t p0) { N::Invoke<0xAD3D2665CCF516BE, void>(p0); } // F514621E8EA463D0 30B3EC0A
  static void _0xB64682EA5A91F1C4(uint32_t p0) { N::Invoke<0xB64682EA5A91F1C4, void>(p0); } // B1CC1B9EC3007A2A EAF04923
  static void NETWORK_EARN_FROM_BETTING(uint32_t p0, uint32_t *p1) { N::Invoke<0xB8026A1998D6CCF6, void>(p0, p1); } // 827A5BA1A44ACA6D A0F7F07C
  static void NETWORK_EARN_FROM_JOB(uint32_t p0, uint32_t *p1) { N::Invoke<0x236F604FB0A40861, void>(p0, p1); } // B2CC4836834E8A98 0B6997FC
  static void _0x3F9BAC1B16A279E2(uint32_t p0, uint32_t *p1) { N::Invoke<0x3F9BAC1B16A279E2, void>(p0, p1); } // 61326EE6DF15B0CA 5E81F55C
  static void _0xED9DC6C19B789496(uint32_t p0, uint32_t *p1, bool p2) { N::Invoke<0xED9DC6C19B789496, void>(p0, p1, p2); } // 2B171E6B2F64D8DF 2BEFB6C4
  static void NETWORK_EARN_FROM_BOUNTY(uint32_t p0, uint32_t *p1, uint32_t *p2, uint32_t p3) { N::Invoke<0x650865A1683F7638, void>(p0, p1, p2, p3); } // 131BB5DA15453ACF 127F2DAE
  static void _0x2B85201A5F74DFC9(uint32_t p0, uint32_t p1) { N::Invoke<0x2B85201A5F74DFC9, void>(p0, p1); } // F92A014A634442D6 F11FC458
  static void NETWORK_EARN_FROM_HOLDUPS(uint32_t p0) { N::Invoke<0xD9FAAB133DEA223D, void>(p0); } // 45B8154E077D9E4D E6B90E9C
  static void NETWORK_EARN_FROM_PROPERTY(uint32_t p0, uint32_t p1) { N::Invoke<0xF082DA8AACD681A7, void>(p0, p1); } // 849648349D77F5C5 9BE4F7E1
  static void _0xE80D3EE0F2EADEBD(uint32_t p0, uint32_t p1) { N::Invoke<0xE80D3EE0F2EADEBD, void>(p0, p1); } // 515B4A22E4D3C6D7 866004A8
  static void _0xAB9B3424CF655F60(uint32_t p0) { N::Invoke<0xAB9B3424CF655F60, void>(p0); } // 4337511FA8221D36 CC068380
  static void NETWORK_EARN_FROM_ROCKSTAR(uint32_t p0) { N::Invoke<0x709E9C93EC5ED91, void>(p0); } // 02CE1D6AC0FC73EA 5A3733CC
  static void NETWORK_EARN_FROM_VEHICLE(uint32_t p0, uint32_t p1) { N::Invoke<0xE290EBF203F47, void>(p0, p1); } // B539BD8A4C1EECF8 F803589D
  static void _0x107CE9A6E8598A7F(uint32_t p0, uint32_t p1) { N::Invoke<0x107CE9A6E8598A7F, void>(p0, p1); } // 3F4D00167E41E0AD 96B8BEE8
  static uint32_t _0x3CDC87B9F44F0712() { return N::Invoke<0x3CDC87B9F44F0712, uint32_t>(); } // 6EA318C91C1A8786
  static uint32_t _0xEAF709C81D231C15() { return N::Invoke<0xEAF709C81D231C15, uint32_t>(); } // FB6DB092FBAE29E6
  static uint32_t _0xB47DF60B3E47A9EE() { return N::Invoke<0xB47DF60B3E47A9EE, uint32_t>(); } // 6816FB4416760775
  static bool _0xD2C51FB6128E84C0(uint32_t p0, bool p1, bool p2, bool p3, uint32_t p4) { return N::Invoke<0xD2C51FB6128E84C0, bool>(p0, p1, p2, p3, p4); } // AB3CAA6B422164DA 5AA379D9
  static uint32_t _0x778171EDB0B0E48E() { return N::Invoke<0x778171EDB0B0E48E, uint32_t>(); } // 7303E27CC6532080
  static void NETWORK_BUY_ITEM(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, bool p4, uint32_t *p5, uint32_t p6, uint32_t p7, uint32_t p8, bool p9) { N::Invoke<0xE7EB9FEEDAA96E59, void>(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // F0077C797F66A355 A07B6368
  static void NETWORK_SPENT_TAXI(uint32_t p0, bool p1, bool p2) { N::Invoke<0x9B839B7143174CEF, void>(p0, p1, p2); } // 17C3A7D31EAE39F9 1F3DB3E3
  static void _0xB75FD9FD92CF5413(uint32_t p0, bool p1, bool p2) { N::Invoke<0xB75FD9FD92CF5413, void>(p0, p1, p2); } // 5FD5ED82CBBE9989 BE70849B
  static void _0xDA63A3F8369D53C9(uint32_t p0, bool p1, bool p2) { N::Invoke<0xDA63A3F8369D53C9, void>(p0, p1, p2); } // AFE08B35EC0C9EAE 451A2644
  static void _0xBB7AEB1776F6998F(uint32_t p0, uint32_t *p1, bool p2, bool p3) { N::Invoke<0xBB7AEB1776F6998F, void>(p0, p1, p2, p3); } // 9346E14F2AF74D46 224A3488
  static void NETWORK_SPENT_BETTING(uint32_t p0, uint32_t p1, uint32_t *p2, bool p3, bool p4) { N::Invoke<0x23924D69EA14501C, void>(p0, p1, p2, p3, p4); } // 1C436FD11FFA692F F8A07513
  static void _0xF059C5210EEBF5D5(uint32_t p0, bool p1, uint32_t p2, bool p3) { N::Invoke<0xF059C5210EEBF5D5, void>(p0, p1, p2, p3); } // EE99784E4467689C 8957038E
  static void NETWORK_BUY_HEALTHCARE(uint32_t p0, bool p1, bool p2) { N::Invoke<0xF9FE8BEA10CEF491, void>(p0, p1, p2); } // D9B067E55253E3DD 832150E5
  static void NETWORK_BUY_AIRSTRIKE(uint32_t p0, bool p1, bool p2) { N::Invoke<0xFBE819C513537631, void>(p0, p1, p2); } // 763B4BD305338F19 40470683
  static uint32_t _0x4CD4D4629AB3067() { return N::Invoke<0x4CD4D4629AB3067, uint32_t>(); } // A3EDDAA42411D3B9
  static void _0x34D60A7B0A6708EC(uint32_t p0, bool p1, bool p2) { N::Invoke<0x34D60A7B0A6708EC, void>(p0, p1, p2); } // 81AA4610E3FD3A69 047547D4
  static void NETWORK_SPENT_AMMO_DROP(uint32_t p0, bool p1, bool p2) { N::Invoke<0x4884ACE40C107FB4, void>(p0, p1, p2); } // B162DC95C0A3317B 4B643076
  static void NETWORK_BUY_BOUNTY(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0xCEC9FA0E742FF9C5, void>(p0, p1, p2, p3); } // 7B718E197453F2D9 CB89CBE0
  static void NETWORK_BUY_PROPERTY(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0x9FCCC2372AF47C44, void>(p0, p1, p2, p3); } // 650A08A280870AF6 7D479AAB
  static uint32_t _0x3A03AE366233D9A4() { return N::Invoke<0x3A03AE366233D9A4, uint32_t>(); } // 75AF80E61248EEBD
  static void NETWORK_SPENT_HELI_PICKUP(uint32_t p0, bool p1, bool p2) { N::Invoke<0xE7F22FDA5A24DE10, void>(p0, p1, p2); } // 7BF1D73DB2ECA492 27EEBCAB
  static void NETWORK_SPENT_BOAT_PICKUP(uint32_t p0, bool p1, bool p2) { N::Invoke<0x5287EBA22D40FD9A, void>(p0, p1, p2); } // 524EE43A37232C00 B241CABD
  static void _0x9EA538C085A0CBD0(uint32_t p0, bool p1, bool p2) { N::Invoke<0x9EA538C085A0CBD0, void>(p0, p1, p2); } // A6DD8458CE24012C DE7D398C
  static void NETWORK_SPENT_CASH_DROP(uint32_t p0, bool p1, bool p2) { N::Invoke<0xB27DE344F77251C3, void>(p0, p1, p2); } // 289016EC778D60E0 87BD1D11
  static void _0x9AD5F7A9399F7EDA(uint32_t p0, bool p1, bool p2) { N::Invoke<0x9AD5F7A9399F7EDA, void>(p0, p1, p2); } // E404BFB981665BF0 E792C4A5
  static void _0x8118A007BA66D5AA(uint32_t p0, bool p1, bool p2) { N::Invoke<0x8118A007BA66D5AA, void>(p0, p1, p2); } // 995A65F15F581359 E6AAA0D5
  static void _0x8600FF19E5FEBF49(uint32_t p0, bool p1, bool p2) { N::Invoke<0x8600FF19E5FEBF49, void>(p0, p1, p2); } // E7B80E2BF9D80BD6 99CF02C4
  static void NETWORK_SPENT_BUY_WANTEDLEVEL(uint32_t p0, uint32_t *p1, bool p2, bool p3) { N::Invoke<0x9D396A1182EC927D, void>(p0, p1, p2, p3); } // E1B13771A843C4F6 E7CB4F95
  static void _0x2732AD1B3B7B9AC6(uint32_t p0, bool p1, bool p2) { N::Invoke<0x2732AD1B3B7B9AC6, void>(p0, p1, p2); } // A628A745E2275C5D 20DDCF2F
  static void _0x1CDE21ABC6B951E5(uint32_t p0, bool p1, bool p2) { N::Invoke<0x1CDE21ABC6B951E5, void>(p0, p1, p2); } // 6E176F1B18BC0637 2F7836E2
  static void NETWORK_SPENT_CARWASH(uint32_t p0, uint32_t p1, uint32_t p2, bool p3, bool p4) { N::Invoke<0x8AC761BC12E50F8, void>(p0, p1, p2, p3, p4); } // EC03C719DB2F4306 8283E028
  static void NETWORK_SPENT_CINEMA(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0x2D9617C46CBEED90, void>(p0, p1, p2, p3); } // 6B38ECB05A63A685 1100CAF5
  static void NETWORK_SPENT_TELESCOPE(uint32_t p0, bool p1, bool p2) { N::Invoke<0xBE3FE11E83295EB, void>(p0, p1, p2); } // 7FE61782AD94CC09 AE7FF044
  static void NETWORK_SPENT_HOLDUPS(uint32_t p0, bool p1, bool p2) { N::Invoke<0xE2763147830124B7, void>(p0, p1, p2); } // D9B86B9872039763 1B3803B1
  static void _0xC3DF83382D6BA7BD(uint32_t p0, bool p1, bool p2) { N::Invoke<0xC3DF83382D6BA7BD, void>(p0, p1, p2); } // 6D3A430D1A809179 7E97C92C
  static uint32_t _0x6433886B3EA7E878() { return N::Invoke<0x6433886B3EA7E878, uint32_t>(); } // CA230C9682556CF1
  static void _0x595D032642CAB7C9(uint32_t p0, bool p1, bool p2) { N::Invoke<0x595D032642CAB7C9, void>(p0, p1, p2); } // B21B89501CFAC79E 78436D07
  static void _0xAB9797B49949A570(uint32_t p0, bool p1, bool p2) { N::Invoke<0xAB9797B49949A570, void>(p0, p1, p2); } // 812F5488B1B2A299 5AEE2FC1
  static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(uint32_t p0, uint32_t p1, uint32_t *p2, bool p3, bool p4) { N::Invoke<0xA61C21F6F50100E0, void>(p0, p1, p2, p3, p4); } // 9FF28D88C766E3E8 4E665BB2
  static void NETWORK_SPENT_CALL_PLAYER(uint32_t p0, uint32_t *p1, bool p2, bool p3) { N::Invoke<0x9C7CF4B68145F109, void>(p0, p1, p2, p3); } // ACDE7185B374177C 1A89B5FC
  static void NETWORK_SPENT_BOUNTY(uint32_t p0, bool p1, bool p2) { N::Invoke<0xDB872C4B72F80C18, void>(p0, p1, p2); } // 29B260B84947DFCC 3401FC96
  static void _0x80D435EF8A833C56(uint32_t p0, bool p1, bool p2) { N::Invoke<0x80D435EF8A833C56, void>(p0, p1, p2); } // 6A445B64ED7ABEB5 54198922
  static uint32_t _0x39E29FE174C94D15() { return N::Invoke<0x39E29FE174C94D15, uint32_t>(); } // 9B5016A6433A68C5
  static uint32_t _0x41DCD44C1252DD10(uint32_t p0, uint32_t p1) { return N::Invoke<0x41DCD44C1252DD10, uint32_t>(p0, p1); } // 20194D48EAEC9A41 C5D8B1E9
  static void _0x7CE95A977BD9557F(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0x7CE95A977BD9557F, void>(p0, p1, p2, p3); } // 7C99101F7FCE2EE5 3D96A21C
  static void _0x27129F179B18E953(uint32_t p0, bool p1, bool p2) { N::Invoke<0x27129F179B18E953, void>(p0, p1, p2); } // D5BB406F4E04019F 2E51C61C
  static void _0x74F159901D7AA2FB(uint32_t p0, bool p1, bool p2) { N::Invoke<0x74F159901D7AA2FB, void>(p0, p1, p2); } // 8204DA7934DF3155 D57A5125
  static uint32_t _0x84AC02F1C6E67AD1() { return N::Invoke<0x84AC02F1C6E67AD1, uint32_t>(); } // 9D26502BB97BFE62
  static uint32_t _0xF8F510DD63660608() { return N::Invoke<0xF8F510DD63660608, uint32_t>(); } // D987F2489969668C
  static void _0x96CD36BAF0A29413(uint32_t p0, uint32_t p1, bool p2, bool p3) { N::Invoke<0x96CD36BAF0A29413, void>(p0, p1, p2, p3); } // 8A7B3952DD64D2B5 D9622D64
  static uint32_t _0xAC091704D6F9775A() { return N::Invoke<0xAC091704D6F9775A, uint32_t>(); } // 7C4FCCD2E4DEB394
  static uint32_t _0x2C1C165A51F5821F() { return N::Invoke<0x2C1C165A51F5821F, uint32_t>(); } // 28F174A67B8D0C2F
  static uint32_t _0x67F16E47B5610AAF() { return N::Invoke<0x67F16E47B5610AAF, uint32_t>(); } // 76EF28DA05EA395A 16184FB5
  static uint32_t _0x5A1D7FBA416DF110(uint32_t p0) { return N::Invoke<0x5A1D7FBA416DF110, uint32_t>(p0); } // A40F9C2623F6A8B5 4F5B781C
  static uint32_t _0xE9F02F4EB9632856() { return N::Invoke<0xE9F02F4EB9632856, uint32_t>(); } // 5CBAD97E059E1B94 ADF8F882
  static uint32_t _0x30C8A717A786856D() { return N::Invoke<0x30C8A717A786856D, uint32_t>(); } // 5D1E75F91C07DEE5
  static uint32_t _0x7502A8FEE8D414AB() { return N::Invoke<0x7502A8FEE8D414AB, uint32_t>(); } // 4F54F3B6C202FB4E
  static uint32_t _0xF0EA191B0724FF17() { return N::Invoke<0xF0EA191B0724FF17, uint32_t>(); } // F9B10B529DCFB33B
  static uint32_t _0x3809EE5EAB82CFA1() { return N::Invoke<0x3809EE5EAB82CFA1, uint32_t>(); } // A6FA3979BED01B81
  static uint32_t _0xDB9010DFB34676DE() { return N::Invoke<0xDB9010DFB34676DE, uint32_t>(); } // 700AF71AE615E6DD
  static uint32_t _0xBFAAD52E34637D38() { return N::Invoke<0xBFAAD52E34637D38, uint32_t>(); } // ED5AB8860415BABA
  static uint32_t _0x386880DD187A9BD1() { return N::Invoke<0x386880DD187A9BD1, uint32_t>(); } // A31FD6A0865B6D14
  static uint32_t _0xFC1F829F3E833222() { return N::Invoke<0xFC1F829F3E833222, uint32_t>(); } // DC18531D7019A535
  static uint32_t _0xF3D630AF200746FB() { return N::Invoke<0xF3D630AF200746FB, uint32_t>(); } // 13A8DE2FD77D04F3
  static uint32_t _0xCB5E70444AAD11F2() { return N::Invoke<0xCB5E70444AAD11F2, uint32_t>(); } // 8E8EEADFD0DC4A0
  static uint32_t NETWORK_CAN_RECEIVE_PLAYER_CASH(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xD8CAAEFC44292B1E, uint32_t>(p0, p1, p2, p3); } // 5D17BE59D2123284 41F5F10E
  static uint32_t _0x8F73CC6E0A376E39() { return N::Invoke<0x8F73CC6E0A376E39, uint32_t>(); } // EA560AC9EEB1E19B
  static uint32_t _0x56549C0F3B2AE925(uint32_t p0) { return N::Invoke<0x56549C0F3B2AE925, uint32_t>(p0); } // F70EFA14FE091429 8B755993
  static bool _0x679C259D41AE5A56(uint32_t p0) { return N::Invoke<0x679C259D41AE5A56, bool>(p0); } // E260E0BB9CD995AC 8F266745
  static uint32_t _0x814B79DBBCB98520(uint32_t p0) { return N::Invoke<0x814B79DBBCB98520, uint32_t>(p0); } // E154B48B68EF72BC 531E4892
  static uint32_t _0x7A9501011DB6895(uint32_t p0) { return N::Invoke<0x7A9501011DB6895, uint32_t>(p0); } // 6FCF8DDEA146C45B B96C7ABE
}

namespace DLC1
{
  static uint32_t _0xAA1DFDAF98DA3254(uint32_t p0) { return N::Invoke<0xAA1DFDAF98DA3254, uint32_t>(p0); } // 278F76C3B0A8F109 71D0CF3E
  static bool _0xEAC18B18FFAB93BC(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0xEAC18B18FFAB93BC, bool>(p0, p1, p2); } // FF56381874F82086 2E9D628C
  static void INIT_SHOP_PED_COMPONENT(uint32_t *p0) { N::Invoke<0x16CF56B9CED4C26, void>(p0); } // 1E8C308FD312C036 B818C7FC
  static void INIT_SHOP_PED_PROP(uint32_t *p0) { N::Invoke<0x62F34DA8BFDDE029, void>(p0); } // EB0A2B758F7B850F F5659E50
  static uint32_t _0x765684370AAF9AF8(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0x765684370AAF9AF8, uint32_t>(p0, p1, p2, p3); } // 50F457823CE6EB5F C937FF3D
  static uint32_t _0x8B119055718A4BE6(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4, uint32_t p5) { return N::Invoke<0x8B119055718A4BE6, uint32_t>(p0, p1, p2, p3, p4, p5); } // 9BDF59818B1E38C1 594E862C
  static void GET_SHOP_PED_QUERY_COMPONENT(uint32_t p0, uint32_t *p1) { N::Invoke<0xC40101F04AFB5C6D, void>(p0, p1); } // 249E310B2D920699 C0718904
  static void GET_SHOP_PED_COMPONENT(uint32_t p0, uint32_t *p1) { N::Invoke<0xFCAEA25EDE75812, void>(p0, p1); } // 74C0E2A57EC66760 B39677C5
  static void GET_SHOP_PED_QUERY_PROP(uint32_t p0, uint32_t *p1) { N::Invoke<0xFBAB26A1FE2B440A, void>(p0, p1); } // DE44A00999B2837D 1D3C1466
  static uint32_t _0xC1411E9CDC18228E() { return N::Invoke<0xC1411E9CDC18228E, uint32_t>(); } // 5D5CAFF661DDF6FC
  static uint32_t _0x0D10BF675CBE79756(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xD10BF675CBE79756, uint32_t>(p0, p1, p2, p3); } // 0368B3A838070348 C8A4BF12
  static uint32_t _0xE41CAAF2BE648006(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) { return N::Invoke<0xE41CAAF2BE648006, uint32_t>(p0, p1, p2, p3); } // 5D6160275CAEC8DD 7D876DC0
  static uint32_t _0xE6140197413A5F77(uint32_t p0) { return N::Invoke<0xE6140197413A5F77, uint32_t>(p0); } // C17AD0E5752BECDA 159751B4
  static void _0xFD2E9A61D26D5F93(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { N::Invoke<0xFD2E9A61D26D5F93, void>(p0, p1, p2, p3, p4); } // 6E11F282F11863B6 E4FF7103
  static uint32_t _0x852356FD10955BB9(uint32_t p0) { return N::Invoke<0x852356FD10955BB9, uint32_t>(p0); } // C6B9DB42C04DD8C3 CE70F183
  static uint32_t _0x207203274FCAE87C() { return N::Invoke<0x207203274FCAE87C, uint32_t>(); } // 17568A8182D98A6
  static void GET_FORCED_COMPONENT(uint32_t p0, uint32_t p1, uint32_t *p2, uint32_t *p3, uint32_t *p4) { N::Invoke<0x970ECF30E9EF8E6F, void>(p0, p1, p2, p3, p4); } // 6C93ED8C2F74859B 382C70BE
  static uint32_t _0xF8447C6DC48D870() { return N::Invoke<0xF8447C6DC48D870, uint32_t>(); } // E1CA84EBF72E691D
  static uint32_t _0xD9CFD2CE14D8A9BC(uint32_t p0, uint32_t p1, uint32_t p2) { return N::Invoke<0xD9CFD2CE14D8A9BC, uint32_t>(p0, p1, p2); } // 341DE7ED1D2A1BFD 8E2C7FD5
  static uint32_t _0x907A60ED99070489(uint32_t p0, uint32_t p1) { return N::Invoke<0x907A60ED99070489, uint32_t>(p0, p1); } // F3FBE2D50A6A8C28 1ECD23E7
  static void GET_SHOP_PED_QUERY_OUTFIT(uint32_t p0, uint32_t *p1) { N::Invoke<0x31C74BFD03FE74C3, void>(p0, p1); } // 6D793F03A631FE56 2F8013A1
  static void _0x26B75F16F9847D7F(uint32_t p0, uint32_t *p1) { N::Invoke<0x26B75F16F9847D7F, void>(p0, p1); } // B7952076E444979D CAFE9209
  static uint32_t _0x0B485BCF6D39F22B3(uint32_t p0) { return N::Invoke<0xB485BCF6D39F22B3, uint32_t>(p0); } // 073CA26B079F956E 2798F56F
  static bool _0x71DC6C016B32FEA2(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x71DC6C016B32FEA2, bool>(p0, p1, p2); } // A9F9C2E0FDE11CBB 6641A864
  static bool _0xEEC23EAA7B8F7831(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0xEEC23EAA7B8F7831, bool>(p0, p1, p2); } // 19F2A026EDF0013F 818534AC
  static uint32_t _0x4FC8D240D0A0F8E5() { return N::Invoke<0x4FC8D240D0A0F8E5, uint32_t>(); } // A7A866D21CD2329B 8EAF9CF6
  static uint32_t GET_DLC_VEHICLE_MODEL(uint32_t p0) { return N::Invoke<0x72735B4DB6C14EE1, uint32_t>(p0); } // ECC01B7C5763333C A2201E09
  static bool GET_DLC_VEHICLE_DATA(uint32_t p0, uint32_t *p1) { return N::Invoke<0x10E2F747F94CA7D, bool>(p0, p1); } // 33468EDC08E371F6 CF428FA4
  static uint32_t GET_DLC_VEHICLE_FLAGS(uint32_t p0) { return N::Invoke<0xB3E61EDD39F041F, uint32_t>(p0); } // 5549EE11FA22FCF2 AB12738C
  static uint32_t _0x2611EF4947AA943C() { return N::Invoke<0x2611EF4947AA943C, uint32_t>(); } // EE47635F352DA367 2B757E6C
  static bool GET_DLC_WEAPON_DATA(uint32_t p0, uint32_t *p1) { return N::Invoke<0x82A3D8743B8B79C0, bool>(p0, p1); } // 79923CD21BECE14E D88EC8EA
  static uint32_t _0xB2C0362098CB97C(uint32_t p0) { return N::Invoke<0xB2C0362098CB97C, uint32_t>(p0); } // 405425358A7D61FE 476B23A9
  static bool GET_DLC_WEAPON_COMPONENT_DATA(uint32_t p0, uint32_t p1, uint32_t *p2) { return N::Invoke<0x47BF2221B5382C2A, bool>(p0, p1, p2); } // 6CF598A2957C2BF8 4B83FCAF
  static bool _0x33C8EAC2E4509403(uint32_t p0) { return N::Invoke<0x33C8EAC2E4509403, bool>(p0); } // D4D7B033C3AA243C 06396058
  static bool _0x09145BCE598642314(uint32_t p0) { return N::Invoke<0x9145BCE598642314, bool>(p0); } // 0564B9FF9631B82C 35BCA844
  static uint32_t _0xF63266F5CAB1CD08(uint32_t p0) { return N::Invoke<0xF63266F5CAB1CD08, uint32_t>(p0); } // C098810437312FFF 59352658
}

namespace DLC2
{
  static uint32_t _0x774B7E95E5892030() { return N::Invoke<0x774B7E95E5892030, uint32_t>(); } // 241FCA5B1AA14F75
  static bool IS_DLC_PRESENT(uint32_t p0) { return N::Invoke<0xFBD0BD8E550E0625, bool>(p0); } // 812595A0644CE1DE 1F321943
  static uint32_t _0xFF191F289DBE0826() { return N::Invoke<0xFF191F289DBE0826, uint32_t>(); } // F2E07819EF1A5289 881B1FDB
  static uint32_t _0xA1B16BEDA324097F() { return N::Invoke<0xA1B16BEDA324097F, uint32_t>(); } // 9489659372A81585 C2169164
  static uint32_t _0x8DFFECC7653AF0A8() { return N::Invoke<0x8DFFECC7653AF0A8, uint32_t>(); } // A213B11DFF526300 F79A97F5
  static uint32_t _0xB07282DFA0766DC3() { return N::Invoke<0xB07282DFA0766DC3, uint32_t>(); } // 8D30F648014A92B5 F69B729C
  static bool _0x7E6E244632305904() { return N::Invoke<0x7E6E244632305904, bool>(); } // 10D0A8F259E93EC9 517B601B
  static uint32_t _0xAF7E3364891E45C2(uint32_t p0, uint32_t p1) { return N::Invoke<0xAF7E3364891E45C2, uint32_t>(p0, p1); } // 46E2B844905BC5F0 6087C10C
  static uint32_t _0x83E54013C981B0D4() { return N::Invoke<0x83E54013C981B0D4, uint32_t>(); } // D7C10C4A637992C9
  static uint32_t _0xC1F119804DDBD63E() { return N::Invoke<0xC1F119804DDBD63E, uint32_t>(); } // 888C3502DBBEEF5
}

namespace DECORATOR
{
  static bool _0xEF4F1DE626450A9(uint32_t p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0xEF4F1DE626450A9, bool>(p0, p1, p2); } // 95AED7B8E39ECAA4 BBAEEF94
  static bool _0x2A2AF8EC19CD5CF5(uint32_t p0, uint32_t *p1, bool p2) { return N::Invoke<0x2A2AF8EC19CD5CF5, bool>(p0, p1, p2); } // 6B1E8E2ED1335B71 8E101F5C
  static uint32_t _0x81D98A9750B21166() { return N::Invoke<0x81D98A9750B21166, uint32_t>(); } // 211AB1DD8D0F363A
  static bool _0x0D88478BF58FAE749(uint32_t p0, uint32_t *p1, uint32_t p2) { return N::Invoke<0xD88478BF58FAE749, bool>(p0, p1, p2); } // 0CE3AA5E1CA19E10 DB718B21
  static bool _0x44A72A39C7AE7EDD(uint32_t p0, uint32_t *p1) { return N::Invoke<0x44A72A39C7AE7EDD, bool>(p0, p1); } // DACE671663F2F5DB DBCE51E0
  static uint32_t _0x30AAA48E56755B0() { return N::Invoke<0x30AAA48E56755B0, uint32_t>(); } // 6524A2F114706F43
  static uint32_t _0xB98156B7389A5A3F(uint32_t p0, uint32_t *p1) { return N::Invoke<0xB98156B7389A5A3F, uint32_t>(p0, p1); } // A06C969B02A97298 DDDE59B5
  static bool _0x0D665B29FEC987319(uint32_t p0, uint32_t *p1) { return N::Invoke<0xD665B29FEC987319, bool>(p0, p1); } // 05661B80A8C9165F 74EF9C40
  static bool _0x00D9C66E899F04C833(uint32_t p0, uint32_t *p1) { return N::Invoke<0xD9C66E899F04C833, bool>(p0, p1); } // 00EE9F297C738720 E0E2640B
  static void _0xD28F3B77F040264C(uint32_t *p0, uint32_t p1) { N::Invoke<0xD28F3B77F040264C, void>(p0, p1); } // 9FD90732F56403CE 68BD42A9
  static bool _0x2F5CF849AAF443C(uint32_t *p0, uint32_t p1) { return N::Invoke<0x2F5CF849AAF443C, bool>(p0, p1); } // 4F14F9F870D6FBC8 7CF0971D
  static void _0xF827E84964E1F05D() { N::Invoke<0xF827E84964E1F05D, void>(); } // A9D14EEA259F9248 7F3F1C02
}

namespace UNK_SC
{
  static uint32_t _0x05A065FD7D484F6D3() { return N::Invoke<0x5A065FD7D484F6D3, uint32_t>(); } // 03A93FF1A2CA0864 6BE5DF29
  static uint32_t _0xB61576413088514A(uint32_t p0) { return N::Invoke<0xB61576413088514A, uint32_t>(p0); } // BB8EA16ECBC976C4 5ECF955D
  static bool _0x53CAD294E3679BE8(uint32_t p0) { return N::Invoke<0x53CAD294E3679BE8, bool>(p0); } // 93028F1DB42BFD08 D1ED1D48
  static bool _0x27C9311CF33D424C(uint32_t p0) { return N::Invoke<0x27C9311CF33D424C, bool>(p0); } // 2C015348CF19CA1D 19EE0CCB
  static bool SC_INBOX_MESSAGE_GET_DATA_INT(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xF56FFBFFB7F444B6, bool>(p0, p1, p2); } // A00EFE4082C4056E 88068C7C
  static uint32_t _0xEBE517BDB405752D() { return N::Invoke<0xEBE517BDB405752D, uint32_t>(); } // FFE5C16F402D851D
  static bool SC_INBOX_MESSAGE_GET_DATA_STRING(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0x21BD5A21CEB536F9, bool>(p0, p1, p2); } // 7572EF42FC6A9B6D 15607620
  static bool _0xD48B375996764F41(uint32_t p0) { return N::Invoke<0xD48B375996764F41, bool>(p0); } // 9A2C8064B6C1E41A EBE420A4
  static uint32_t _0x2DDA4DD69F75469C(uint32_t p0) { return N::Invoke<0x2DDA4DD69F75469C, uint32_t>(p0); } // F3E31D16CBDCB304 2C959AF9
  static void _0x2E98D16CDABF17BB(uint32_t *p0) { N::Invoke<0x2E98D16CDABF17BB, void>(p0); } // DA024BDBD600F44A 0B9A3512
  static void _0xA4CDEBF6B6E48AE0(uint32_t *p0) { N::Invoke<0xA4CDEBF6B6E48AE0, void>(p0); } // A68D3D229F4F3B06 75324674
  static bool SC_INBOX_MESSAGE_GET_UGCDATA(uint32_t p0, uint32_t *p1) { return N::Invoke<0x4F796105569EE198, bool>(p0, p1); } // 69D82604A1A5A254 88CA3BFC
  static bool _0x3759EBC033D70D61(uint32_t *p0) { return N::Invoke<0x3759EBC033D70D61, bool>(p0); } // 6AFD2CD753FEEF83 628F489B
  static bool _0x6B54A5F5C8E5F852(uint32_t p0, uint32_t *p1) { return N::Invoke<0x6B54A5F5C8E5F852, bool>(p0, p1); } // 87E0052F08BD64E6 AB3346B5
  static uint32_t _0x9F94CBB9AE336D41() { return N::Invoke<0x9F94CBB9AE336D41, uint32_t>(); } // 40ADDCBAFA1018A
  static uint32_t _0x4011801F68B1A5C2() { return N::Invoke<0x4011801F68B1A5C2, uint32_t>(); } // 16DA8172459434AA
  static uint32_t _0xA971574792EB07E1() { return N::Invoke<0xA971574792EB07E1, uint32_t>(); } // 4737980E8A283806
  static uint32_t _0xF02B8CD9796B77C3() { return N::Invoke<0xF02B8CD9796B77C3, uint32_t>(); } // 44ACA259D67651DB
  static void _0x283F65B9F7FFF473(uint32_t *p0) { N::Invoke<0x283F65B9F7FFF473, void>(p0); } // 2330C12A7A605D16 9A703A2B
  static void _0x80963FEB3A23786E() { N::Invoke<0x80963FEB3A23786E, void>(); } // 55DF6DB45179236E D094F11A
  static void _0xC86CA07C8B94AAA(uint32_t *p0) { N::Invoke<0xC86CA07C8B94AAA, void>(p0); } // 116FB94DC4B79F17 AF3C081B
  static void _0x2DBBC201E29D17ED(bool p0) { N::Invoke<0x2DBBC201E29D17ED, void>(p0); } // BFA0A56A817C6C7D 2FB9F53C
  static uint32_t _0xC3938B032D1D9A73() { return N::Invoke<0xC3938B032D1D9A73, uint32_t>(); } // BC1CC91205EC8D6E 6C5738AB
  static uint32_t _0xE504BE0FBA18C659() { return N::Invoke<0xE504BE0FBA18C659, uint32_t>(); } // DF649C4E9AFDD788 468668F0
  static bool _0xF973FBF57064BF2C(uint32_t p0, uint32_t p1) { return N::Invoke<0xF973FBF57064BF2C, bool>(p0, p1); } // 1F1E9682483697C7 90C74343
  static uint32_t _0xB41F24495959D559() { return N::Invoke<0xB41F24495959D559, uint32_t>(); } // C4C4575F62534A24
  static bool _0x5A787CFC4FBE7CF6(uint32_t p0, uint32_t *p1) { return N::Invoke<0x5A787CFC4FBE7CF6, bool>(p0, p1); } // 287F1F75D2803595 3ACE6D6B
  static uint32_t _0xFFFFFFFF85488C49() { return N::Invoke<0xFFFFFFFF85488C49, uint32_t>(); } // FFFFFFFF85488C49
  static uint32_t _0x467F4CAA() { return N::Invoke<0x467F4CAA, uint32_t>(); } // 467F4CAA
  static uint32_t _0xFFFFFFFFEB2D93B3() { return N::Invoke<0xFFFFFFFFEB2D93B3, uint32_t>(); } // FFFFFFFFEB2D93B3
  static bool _0xFA2B7282B8204F3A(uint32_t p0, float p1) { return N::Invoke<0xFA2B7282B8204F3A, bool>(p0, p1); } // 487912FD248EFDDF 579B4510
  static uint32_t _0xB61D8CD51DBF0000() { return N::Invoke<0xB61D8CD51DBF0000, uint32_t>(); } // C85A7127E7AD02AA
  static uint32_t _0x7097ECC77268A548() { return N::Invoke<0x7097ECC77268A548, uint32_t>(); } // A770C8EEC6FB2AC5
  static bool _0x40341C7F6FA063CB(uint32_t *p0) { return N::Invoke<0x40341C7F6FA063CB, bool>(p0); } // 8416FE4E4629D7D7 DF45B2A7
  static uint32_t _0xE90A7D6CA22C5377() { return N::Invoke<0xE90A7D6CA22C5377, uint32_t>(); } // 7FFCBFEE44ECFABF
  static uint32_t _0xE5204026B51D6504() { return N::Invoke<0xE5204026B51D6504, uint32_t>(); } // 2D874D4AE612A65F
  static bool _0xBA75E6BA58CAED6D(uint32_t *p0, uint32_t *p1) { return N::Invoke<0xBA75E6BA58CAED6D, bool>(p0, p1); } // 75632C5ECD7ED843 DF084A6B
  static bool _0xC4CFCD0FB869C13(uint32_t p0) { return N::Invoke<0xC4CFCD0FB869C13, bool>(p0); } // 1753344C770358AE FFED3676
  static uint32_t _0x548F24F67E9D3A7(uint32_t p0) { return N::Invoke<0x548F24F67E9D3A7, uint32_t>(p0); } // 82E4A58BABC15AE7 A796D7A7
  static uint32_t _0xBE8ACB9C59400B04(uint32_t p0) { return N::Invoke<0xBE8ACB9C59400B04, uint32_t>(p0); } // 85535ACF97FC0969 09497F31
  static uint32_t _0xE5CB5657EB648F29(uint32_t p0) { return N::Invoke<0xE5CB5657EB648F29, uint32_t>(p0); } // 930DE22F07B1CCE3 4D8A6521
  static bool _0x3C4225789B58B0F6(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x3C4225789B58B0F6, bool>(p0, p1); } // F6BAAAF762E1BF40 7AA36406
  static bool _0xAA78540A16CE631B(uint32_t p0) { return N::Invoke<0xAA78540A16CE631B, bool>(p0); } // F22CA0FD74B80E7A F379DCE4
  static uint32_t _0xAE53CB94C418DB1C(uint32_t p0) { return N::Invoke<0xAE53CB94C418DB1C, uint32_t>(p0); } // 9237E334F6E43156 65D84665
  static uint32_t _0xD6CCA8FEB2BAA1C0() { return N::Invoke<0xD6CCA8FEB2BAA1C0, uint32_t>(); } // 700569DBA175A77C
  static uint32_t _0x73A8C79A616EDD6F() { return N::Invoke<0x73A8C79A616EDD6F, uint32_t>(); } // 1D4446A62D35B0D0
  static uint32_t _0xD8213D36C6414125() { return N::Invoke<0xD8213D36C6414125, uint32_t>(); } // 2E89990DDFF670C3
  static uint32_t _0xA02CB2388FFDE7DD() { return N::Invoke<0xA02CB2388FFDE7DD, uint32_t>(); } // D0EE05FE193646EA
  static uint32_t _0xFA7A8C56420D5FC5() { return N::Invoke<0xFA7A8C56420D5FC5, uint32_t>(); } // 1989C6E6F67E76A8
  static uint32_t _0xBCC6F44D1DA3A93C() { return N::Invoke<0xBCC6F44D1DA3A93C, uint32_t>(); } // 7C61676E5BB52CD
  static uint32_t _0x226105F79ED710CE() { return N::Invoke<0x226105F79ED710CE, uint32_t>(); } // 8147FFF6A718E1AD
  static uint32_t _0x1ED54F2EC21D3DFB() { return N::Invoke<0x1ED54F2EC21D3DFB, uint32_t>(); } // F73393BAC7E6730
  static uint32_t _0xED9FFE5676CBB3E2() { return N::Invoke<0xED9FFE5676CBB3E2, uint32_t>(); } // D302E99EDF0449CF
  static uint32_t _0x881D13399D2F57A5() { return N::Invoke<0x881D13399D2F57A5, uint32_t>(); } // 5C4EBFFA98BDB41C
  static bool _0x158FF047B5E1602F() { return N::Invoke<0x158FF047B5E1602F, bool>(); } // FF8F3A92B75ED67A C96456BA
  static uint32_t _0xDDA3E71397ABE078() { return N::Invoke<0xDDA3E71397ABE078, uint32_t>(); } // 4ED9C8D6DA297639
  static uint32_t _0x874AF20D14D67D3E() { return N::Invoke<0x874AF20D14D67D3E, uint32_t>(); } // 710BCDA8071EDED1
  static uint32_t _0x9B3CB879708E78A5() { return N::Invoke<0x9B3CB879708E78A5, uint32_t>(); } // 50A8A36201DBF83E
  static uint32_t _0x918E65455799919() { return N::Invoke<0x918E65455799919, uint32_t>(); } // 9DE5D2F723575ED0
  static uint32_t _0x956D19926BB164F3() { return N::Invoke<0x956D19926BB164F3, uint32_t>(); } // C2C97EA97711D1AE
  static uint32_t _0xD136C94990C369FD() { return N::Invoke<0xD136C94990C369FD, uint32_t>(); } // 450819D8CF90C416
  static uint32_t _0x200BD0C04B9D4202(uint32_t *p0) { return N::Invoke<0x200BD0C04B9D4202, uint32_t>(p0); } // 4A7D6E727F941747 8E7AEEB7
  static uint32_t _0xA9A7C7BDC4AA37F0() { return N::Invoke<0xA9A7C7BDC4AA37F0, uint32_t>(); } // E75A4A2E5E316D86
  static uint32_t _0x1EC8AAA94F354986() { return N::Invoke<0x1EC8AAA94F354986, uint32_t>(); } // 2570E26BE63964E3
  static uint32_t _0xFED185662A86D0CD() { return N::Invoke<0xFED185662A86D0CD, uint32_t>(); } // 1D12A56FC95BE92E
  static uint32_t _0x4C9135D6269B86D6() { return N::Invoke<0x4C9135D6269B86D6, uint32_t>(); } // 33DF47CC0642061B
  static uint32_t _0x45B27DAFD1047D7() { return N::Invoke<0x45B27DAFD1047D7, uint32_t>(); } // A468E0BE12B12C70
  static bool _0xF881F91655D8F5E3(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xF881F91655D8F5E3, bool>(p0, p1, p2); } // 8CC469AB4D349B7C E778B2A7
  static uint32_t _0xD0678DCE4A800AC4() { return N::Invoke<0xD0678DCE4A800AC4, uint32_t>(); } // C5A35C73B68F3C49
  static bool _0xD198BC289D0F2E55(uint32_t p0, uint32_t *p1, uint32_t *p2) { return N::Invoke<0xD198BC289D0F2E55, bool>(p0, p1, p2); } // 699E4A5C8C893A18 CE7D50A8
  static bool _0x643A897B5633DCAB(uint32_t p0, uint32_t *p1) { return N::Invoke<0x643A897B5633DCAB, bool>(p0, p1); } // 19853B5B17D77BCA D26CCA46
  static bool _0x9DA9EA1CE59903D3(uint32_t p0) { return N::Invoke<0x9DA9EA1CE59903D3, bool>(p0); } // 6BFB12CE158E3DD4 24D84334
  static bool _0x5A258266A5D0BA37(uint32_t p0, uint32_t p1) { return N::Invoke<0x5A258266A5D0BA37, bool>(p0, p1); } // FE4C1D0D3B9CC17E 8A023024
  static bool _0x1A2866BE5E9877C3() { return N::Invoke<0x1A2866BE5E9877C3, bool>(); } // D8122C407663B995 1C65B038
  static bool _0x949EE73B9619A6AB() { return N::Invoke<0x949EE73B9619A6AB, bool>(); } // 3001BEF2FECA3680 4D4C37B3
  static bool _0x47A74873CD94D2C(uint32_t *p0, uint32_t *p1) { return N::Invoke<0x47A74873CD94D2C, bool>(p0, p1); } // 92DA6E70EF249BD1 AED95A6F
  static void _0x686EA3473144AC63() { N::Invoke<0x686EA3473144AC63, void>(); } // 675721C9F644D161 486867E6
  static uint32_t _0xA3F6500A63C8CF54() { return N::Invoke<0xA3F6500A63C8CF54, uint32_t>(); } // 198D161F458ECC7F
  static uint32_t _0xFD223E6B868B6E52() { return N::Invoke<0xFD223E6B868B6E52, uint32_t>(); } // 225798743970412B
  static uint32_t _0xC38BFF40021AF7B0() { return N::Invoke<0xC38BFF40021AF7B0, uint32_t>(); } // 418DC16FAE452C1C
}

namespace UNK
{
  static uint32_t _0xA6E1A44FB9E16C16() { return N::Invoke<0xA6E1A44FB9E16C16, uint32_t>(); } // F2CA003F167E21D2 106C8317
  static bool _0x8849932B9B95A837() { return N::Invoke<0x8849932B9B95A837, bool>(); } // EF7D17BC6C85264C D87F3A9E
  static void _0xBAAAD72367127DBF(bool p0) { N::Invoke<0xBAAAD72367127DBF, void>(p0); } // B0C56BD3D808D863 C0B971EA
  static bool _0x7FE3D7B52975AA5A() { return N::Invoke<0x7FE3D7B52975AA5A, bool>(); } // 8AA464D4E0F6ACCD 94BCAC7C
  static void _0x176DCB904478615C(bool p0) { N::Invoke<0x176DCB904478615C, void>(p0); } // FC309E94546FCDB5 7D90EEE5
  static bool _0x534FF77E97E4DDFF() { return N::Invoke<0x534FF77E97E4DDFF, bool>(); } // C6DC823253FBB366 734CFEDA
  static void _0xE2E70F189D00A6F5(bool p0) { N::Invoke<0xE2E70F189D00A6F5, void>(p0); } // C7E7181C09F33B69 8C227332
  static void _0x58DB02A283E5EEA4(bool p0) { N::Invoke<0x58DB02A283E5EEA4, void>(p0); } // FA1E0E893D915215 5C350D78
}

namespace UNK1
{
  static uint32_t _0x2F48D79FB2EB0A39() { return N::Invoke<0x2F48D79FB2EB0A39, uint32_t>(); } // 48621C9FCA3EBD28
  static uint32_t _0xE697661E50E44C07() { return N::Invoke<0xE697661E50E44C07, uint32_t>(); } // 81CBAE94390F9F89
  static uint32_t _0x8E96B18BFCA8AA0C() { return N::Invoke<0x8E96B18BFCA8AA0C, uint32_t>(); } // 13B350B8AD0EEE10
  static uint32_t _0x47B990AE184F491B() { return N::Invoke<0x47B990AE184F491B, uint32_t>(); } // 293220DA1B46CEBC
  static uint32_t _0xC0B91B09CAEBF5AE() { return N::Invoke<0xC0B91B09CAEBF5AE, uint32_t>(); } // 208784099002BC30
  static uint32_t _0x882182119EAE9ABF() { return N::Invoke<0x882182119EAE9ABF, uint32_t>(); } // EB2D525B57F42B40
  static uint32_t _0xDA165DAF4BA384C2() { return N::Invoke<0xDA165DAF4BA384C2, uint32_t>(); } // F854439EFBB3B583
  static uint32_t _0x9871B9F47D2318AE() { return N::Invoke<0x9871B9F47D2318AE, uint32_t>(); } // AF66DCEE6609B148
  static uint32_t _0x3A1068DE0F4910A0() { return N::Invoke<0x3A1068DE0F4910A0, uint32_t>(); } // 66972397E0757E7A
  static uint32_t _0xBB610EFF211F4F74() { return N::Invoke<0xBB610EFF211F4F74, uint32_t>(); } // C3AC2FFF9612AC81
  static uint32_t _0x2DAF1B9AD39829E1() { return N::Invoke<0x2DAF1B9AD39829E1, uint32_t>(); } // 71A5197D6AFC8B3
  static uint32_t _0x6326B6695C9EB0B1() { return N::Invoke<0x6326B6695C9EB0B1, uint32_t>(); } // 88BB3507ED41A240
  static uint32_t _0x8F132BBDA381F0EA() { return N::Invoke<0x8F132BBDA381F0EA, uint32_t>(); } // 644546EC5287471B
  static uint32_t _0xBCA771AC3E1639D() { return N::Invoke<0xBCA771AC3E1639D, uint32_t>(); } // 1897CA71995A90B4
  static uint32_t _0x7578E9D04899FDA() { return N::Invoke<0x7578E9D04899FDA, uint32_t>(); } // DF4B952F7D381B95
  static uint32_t _0xD9F6CB45B1269A5B() { return N::Invoke<0xD9F6CB45B1269A5B, uint32_t>(); } // 4282E08174868BE3
  static uint32_t _0x7D7D0B6D7D622DD2() { return N::Invoke<0x7D7D0B6D7D622DD2, uint32_t>(); } // 33D47E85B476ABCD
}

namespace UNK2
{
  static uint32_t _0x968399323B2AB7E2() { return N::Invoke<0x968399323B2AB7E2, uint32_t>(); } // 7E2BD3EF6C205F09
  static uint32_t _0xFD9A44D9D38B33D2() { return N::Invoke<0xFD9A44D9D38B33D2, uint32_t>(); } // 95AB8B5C992C7B58
  static uint32_t _0x362326B645DF33A5() { return N::Invoke<0x362326B645DF33A5, uint32_t>(); } // 5AD3932DAEB1E5D3
  static uint32_t _0x5843449093047170() { return N::Invoke<0x5843449093047170, uint32_t>(); } // E058175F8EAFE79A
  static uint32_t _0x1D8AAAA3F95F4429() { return N::Invoke<0x1D8AAAA3F95F4429, uint32_t>(); } // 3353D13F09307691
  static uint32_t _0x8A1E58E3D68B1FFC() { return N::Invoke<0x8A1E58E3D68B1FFC, uint32_t>(); } // 49DA8145672B2725
}

namespace UNK3
{
  static uint32_t _0xCA4DCC64D1E3A15E() { return N::Invoke<0xCA4DCC64D1E3A15E, uint32_t>(); } // BD4D7EAF8A30F637
  static uint32_t _0xAA61C8EE6E2DDCA2() { return N::Invoke<0xAA61C8EE6E2DDCA2, uint32_t>(); } // 247F0F73A182EA0B
  static uint32_t _0x8685E0829D91880() { return N::Invoke<0x8685E0829D91880, uint32_t>(); } // C27009422FCCA88D
  static uint32_t _0xF1C99748F5FBF6A0() { return N::Invoke<0xF1C99748F5FBF6A0, uint32_t>(); } // 3C4487461E9B0DCB
  static uint32_t _0x2E7B34DA6A03511() { return N::Invoke<0x2E7B34DA6A03511, uint32_t>(); } // 2B949A1E6AEC8F6A
  static uint32_t _0xC5F1039E65761FD() { return N::Invoke<0xC5F1039E65761FD, uint32_t>(); } // 85F6C9ABA1DE2BCF
  static uint32_t _0xF05A76EF166C9B1D() { return N::Invoke<0xF05A76EF166C9B1D, uint32_t>(); } // 357B152EF96C30B6
  static uint32_t _0x977B13EDA5ACABD2() { return N::Invoke<0x977B13EDA5ACABD2, uint32_t>(); } // CF38DAFBB49EDE5E
  static uint32_t _0x567364002FC140F7() { return N::Invoke<0x567364002FC140F7, uint32_t>(); } // E3E5A7C64CA2C6ED
  static uint32_t _0x129D3BE3C8408296() { return N::Invoke<0x129D3BE3C8408296, uint32_t>(); } // 395CB47B022E62C
  static uint32_t _0x957AE9E6D002CCBF() { return N::Invoke<0x957AE9E6D002CCBF, uint32_t>(); } // A135AC892A58FC07
  static uint32_t _0xEF0D0784D1C506C1() { return N::Invoke<0xEF0D0784D1C506C1, uint32_t>(); } // 72EB7BA9B69BF6AB
  static uint32_t _0x40DAD32D9F054E37() { return N::Invoke<0x40DAD32D9F054E37, uint32_t>(); } // 170910093218C8B9
  static uint32_t _0x3343808374A8476D() { return N::Invoke<0x3343808374A8476D, uint32_t>(); } // C13C38E47EA5DF31
  static uint32_t _0x5C2F44EAEA6674B9() { return N::Invoke<0x5C2F44EAEA6674B9, uint32_t>(); } // B24F0944DA203D9E
  static uint32_t _0x96C5C825F251E5CD() { return N::Invoke<0x96C5C825F251E5CD, uint32_t>(); } // 74A0FD0688F1EE45
  static uint32_t _0x65992421FBB0C3BF() { return N::Invoke<0x65992421FBB0C3BF, uint32_t>(); } // 2F41D51BA3BCD1F1
  static uint32_t _0xE44D5F7B9ECB1B3D() { return N::Invoke<0xE44D5F7B9ECB1B3D, uint32_t>(); } // 810E8431C0614BF9
  static uint32_t _0xAD00441CA7E37F84() { return N::Invoke<0xAD00441CA7E37F84, uint32_t>(); } // 35A1B3E1D1315CFA
  static uint32_t _0xE1B86B9F942F7C95() { return N::Invoke<0xE1B86B9F942F7C95, uint32_t>(); } // 897433D292B44130
  static uint32_t _0xF256D78CD08C63F2() { return N::Invoke<0xF256D78CD08C63F2, uint32_t>(); } // 279F08B1A4B29B7E
  static uint32_t _0xCEBF7A17B05CC993() { return N::Invoke<0xCEBF7A17B05CC993, uint32_t>(); } // A65568121DF2EA26
  static uint32_t _0xD9479776A4CCE6E1() { return N::Invoke<0xD9479776A4CCE6E1, uint32_t>(); } // F30980718C8ED876
  static uint32_t _0xDA6D8DECEBA1F666() { return N::Invoke<0xDA6D8DECEBA1F666, uint32_t>(); } // 27F76CC6C55AD30E
  static uint32_t _0x49A6E634E8A102DF() { return N::Invoke<0x49A6E634E8A102DF, uint32_t>(); } // E1A0450ED46A7812
  static uint32_t _0xB76AB231270A606() { return N::Invoke<0xB76AB231270A606, uint32_t>(); } // 39BE7CEA8D9CC8E6
  static uint32_t _0x92B90704D2F9B3AF() { return N::Invoke<0x92B90704D2F9B3AF, uint32_t>(); } // 3C5FD37B5499582E
  static uint32_t _0x185C3EB8FA1F5445() { return N::Invoke<0x185C3EB8FA1F5445, uint32_t>(); } // E2A99A9B524BEFFF
  static uint32_t _0xAC3D5162415A97A9() { return N::Invoke<0xAC3D5162415A97A9, uint32_t>(); } // 51F1A8E48C3D2F6D
  static uint32_t _0x77F27B2AF5BFC4B4() { return N::Invoke<0x77F27B2AF5BFC4B4, uint32_t>(); } // A6D923DFFC9BD89
  static uint32_t _0xA71D76DAE522B75A() { return N::Invoke<0xA71D76DAE522B75A, uint32_t>(); } // 112CEF1615A1139F
  static uint32_t _0x9EDC88AC0EDB0A3E() { return N::Invoke<0x9EDC88AC0EDB0A3E, uint32_t>(); } // D47A2C1BA117471D
  static uint32_t _0x78D488110EB8F8CC() { return N::Invoke<0x78D488110EB8F8CC, uint32_t>(); } // C2F7FE5309181C7D
  static uint32_t _0xA2D66EDFAD0C1CD1() { return N::Invoke<0xA2D66EDFAD0C1CD1, uint32_t>(); } // 23789E777D14CE44
  static uint32_t _0xEE9F682D3B1FC8EE() { return N::Invoke<0xEE9F682D3B1FC8EE, uint32_t>(); } // 350AA5EBC03D3BD2
  static uint32_t _0x27D4717A2C720BB() { return N::Invoke<0x27D4717A2C720BB, uint32_t>(); } // 498C1E05CE5F7877
  static uint32_t _0x44F2635C5B5A13CF() { return N::Invoke<0x44F2635C5B5A13CF, uint32_t>(); } // 9507D4271988E1AE
}

namespace SYSTEM
{
  static uint32_t _0x4EDE34FBADD967A6() { return N::Invoke<0x4EDE34FBADD967A6, uint32_t>(); } // 4EDE34FBADD967A6
  static int START_NEW_SCRIPT(const char* name, int stack) { return N::Invoke<0xE81651AD79516E48, int>(name, stack); } // E81651AD79516E48 3F166D0E
  static uint32_t _0xB8BA7F44DF1575E1() { return N::Invoke<0xB8BA7F44DF1575E1, uint32_t>(); } // B8BA7F44DF1575E1
  static uint32_t _0xEB1C67C3A5333A92() { return N::Invoke<0xEB1C67C3A5333A92, uint32_t>(); } // EB1C67C3A5333A92
  static uint32_t _0xC4BB298BD441BE78() { return N::Invoke<0xC4BB298BD441BE78, uint32_t>(); } // C4BB298BD441BE78
  static uint32_t _0x83666F9FB8FEBD4B() { return N::Invoke<0x83666F9FB8FEBD4B, uint32_t>(); } // 83666F9FB8FEBD4B
  static uint32_t _0xC9D9444186B5A374() { return N::Invoke<0xC9D9444186B5A374, uint32_t>(); } // C9D9444186B5A374
  static uint32_t _0xC1B1E9A034A63A62() { return N::Invoke<0xC1B1E9A034A63A62, uint32_t>(); } // C1B1E9A034A63A62
  static uint32_t _0x5AE11BC36633DE4E() { return N::Invoke<0x5AE11BC36633DE4E, uint32_t>(); } // 5AE11BC36633DE4E
  static uint32_t _0x50597EE2() { return N::Invoke<0x50597EE2, uint32_t>(); } // 50597EE2
  static uint32_t _0xBADBFA3B172435F() { return N::Invoke<0xBADBFA3B172435F, uint32_t>(); } // BADBFA3B172435F
  static uint32_t _0xD0FFB162F40A139C() { return N::Invoke<0xD0FFB162F40A139C, uint32_t>(); } // D0FFB162F40A139C
  static uint32_t _0x71D93B57D07F9804() { return N::Invoke<0x71D93B57D07F9804, uint32_t>(); } // 71D93B57D07F9804
  static uint32_t _0xE3621CC40F31FE2E() { return N::Invoke<0xE3621CC40F31FE2E, uint32_t>(); } // E3621CC40F31FE2E
  static uint32_t _0x652D2EEEF1D3E62C() { return N::Invoke<0x652D2EEEF1D3E62C, uint32_t>(); } // 652D2EEEF1D3E62C
  static uint32_t _0xA8CEACB4F35AE058() { return N::Invoke<0xA8CEACB4F35AE058, uint32_t>(); } // A8CEACB4F35AE058
  static uint32_t _0x2A488C176D52CCA5() { return N::Invoke<0x2A488C176D52CCA5, uint32_t>(); } // 2A488C176D52CCA5
  static uint32_t _0xB7A628320EFF8E47() { return N::Invoke<0xB7A628320EFF8E47, uint32_t>(); } // B7A628320EFF8E47
  static uint32_t _0xEDD95A39E5544DE8() { return N::Invoke<0xEDD95A39E5544DE8, uint32_t>(); } // EDD95A39E5544DE8
  static uint32_t _0x97EF1E5BCE9DC075() { return N::Invoke<0x97EF1E5BCE9DC075, uint32_t>(); } // 97EF1E5BCE9DC075
  static uint32_t _0xF34EE736CF047844() { return N::Invoke<0xF34EE736CF047844, uint32_t>(); } // F34EE736CF047844
  static uint32_t _0x11E019C8F43ACC8A() { return N::Invoke<0x11E019C8F43ACC8A, uint32_t>(); } // 11E019C8F43ACC8A
  static uint32_t _0xF2DB717A73826179() { return N::Invoke<0xF2DB717A73826179, uint32_t>(); } // F2DB717A73826179
  static uint32_t _0xBBDA792448DB5A89() { return N::Invoke<0xBBDA792448DB5A89, uint32_t>(); } // BBDA792448DB5A89
}