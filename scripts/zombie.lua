require 'keycodes'

local weapons = {
"weapon_advancedrifle", "weapon_appistol", "weapon_assaultrifle",
"weapon_assaultshotgun", "weapon_assaultsmg", "weapon_ball", "weapon_bat",
"weapon_bottle", "weapon_briefcase", "weapon_briefcase_02", "weapon_bullpuprifle",
"weapon_bullpupshotgun", "weapon_bzgas", "weapon_carbinerifle", "weapon_combatmg",
"weapon_combatpistol", "weapon_crowbar", "weapon_dagger", "weapon_digiscanner",
"weapon_fireextinguisher", "weapon_firework",
"weapon_flare", "weapon_golfclub", "weapon_grenade", "weapon_grenadelauncher",
"weapon_grenadelauncher_smoke", "weapon_gusenberg",
"weapon_hammer", "weapon_hatchet ", "weapon_railgun ", "weapon_heavypistol",
"weapon_heavyshotgun", "weapon_heavysniper", "weapon_hominglauncher", "weapon_knife",
"weapon_marskmanrifle", "weapon_microsmg", "weapon_mg", "--weapon_minigun", "weapon_molotov",
"weapon_musket", "weapon_nightstick", "weapon_petrolcan", "weapon_pistol", "weapon_pistol50",
"weapon_proxmine", "weapon_pumpshotgun", "weapon_sawnoffshotgun", "weapon_smg", "weapon_smokegrenade",
"weapon_sniperrifle", "weapon_snowball", "weapon_snspistol", "weapon_specialcarbine",
"weapon_stickybomb", "weapon_stinger", "weapon_stungun", "weapon_remotesniper", "weapon_rpg",
"weapon_vintagepistol"
}

local spawn_zombies = false
local counter = 0

local displays = {}
local MAX_PLAYERS = 32

local spawned_peds = {}
local spawn_count = 5

function OnScriptTick()
  if spawn_zombies then
    ped.SET_CREATE_RANDOM_COPS(1)

    for i = 0, 32, 1 do
      if player.GET_PLAYER_PED(i) > 0  then
        player.SET_ALL_RANDOM_PEDS_FLEE(i, 1)
        local skin_hash = gameplay.GET_HASH_KEY("u_m_y_zombie_01")
        local player_ped = player.GET_PLAYER_PED(i)

        streaming.REQUEST_MODEL(skin_hash)
        if streaming.HAS_MODEL_LOADED(skin_hash) == 0 then
          return
        end
        for spawn_i = 0 , spawn_count , 1 do
          local spawn_position = entity.GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(player_ped, gameplay.GET_RANDOM_FLOAT_IN_RANGE(5, 20), gameplay.GET_RANDOM_FLOAT_IN_RANGE(5, 20), gameplay.GET_RANDOM_FLOAT_IN_RANGE(0, 1))
          spawned_peds[spawn_i] =  ped.CREATE_PED( 26, skin_hash, spawn_position.x, spawn_position.y, spawn_position.z, 0, 1, 1)
          ped.SET_PED_CAN_SWITCH_WEAPON(spawned_peds[spawn_i],1)
          --ped.CLONE_PED(spawned_peds[spawn_i], 1, 0, 1)
          --ped.SET_PED_RANDOM_COMPONENT_VARIATION(spawned_peds[spawn_i], 0);
          ped.SET_PED_DIES_WHEN_INJURED(spawned_peds[spawn_i], 0);
          ped.SET_PED_AS_ENEMY(spawned_peds[spawn_i], 1);
          weapon.GIVE_DELAYED_WEAPON_TO_PED(spawned_peds[spawn_i], gameplay.GET_HASH_KEY(weapons[gameplay.GET_RANDOM_INT_IN_RANGE(1, #weapons - 1)]), 999, 1)
          ai.TASK_COMBAT_PED(spawned_peds[spawn_i], player_ped, 1, 1)
          entity.SET_ENTITY_INVINCIBLE(spawned_peds[spawn_i], 1)
        end
        --streaming.SET_MODEL_AS_NO_LONGER_NEEDED(skin_hash)
      end
    end
  end
  
  spawn_zombies = false
end

function OnDrawTick()
  if gui.TreeNode("Zombie") then

    changed, spawn_count = gui.SliderInt("spawn_count", spawn_count, 0, 20)
	
	  if gui.Button("Spawn()") then
	    spawn_zombies = true
	  end
	
	  gui.TreePop()
  end
end

function Initialize()
end