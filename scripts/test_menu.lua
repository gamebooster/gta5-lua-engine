require 'keycodes'

local explode_near_car = false
local warp_into_car = false

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

local give_weapons = false

function OnScriptTick()
  -- if gui.KeyPressed(KEY_0) then
    -- warp_into_car = true
  -- end
  -- if gui.KeyPressed(KEY_9) then
    -- explode_near_car = true
  -- end

  if give_weapons then
    for i, weapon_name in pairs(weapons) do
	  local hash = gameplay.GET_HASH_KEY(weapon_name)
	  if hash ~= 0 then
	    weapon.GIVE_DELAYED_WEAPON_TO_PED(player.PLAYER_PED_ID(), hash, 999, 1)
	  end
	end
  end
  
  if warp_into_car then
  	local flags = 64 | 0x10000 | 2048 | 1 | 2 | 4 | 32 | 16 | 8
  	local vec = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
	local vehicle_id = vehicle.GET_CLOSEST_VEHICLE(vec.x, vec.y, vec.z, 100, 0, flags)
    ai.TASK_WARP_PED_INTO_VEHICLE(player.PLAYER_PED_ID(), vehicle_id, -1)
  end
 
  if explode_near_car then
	local flags = 64 | 0x10000 | 2048 | 1 | 2 | 4 | 32 | 16 | 8
	local vec = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
	local vehicle_id = vehicle.GET_CLOSEST_VEHICLE(vec.x, vec.y, vec.z, 100, 0, flags)
	
	network.NETWORK_EXPLODE_VEHICLE(vehicle_id, 1, 0, 0)
  end
  
  explode_near_car = false
  warp_into_car = false
  give_weapons = false
end

function OnDrawTick()
  if gui.TreeNode("Test") then

	if gui.Button("Explode near car") then
	  explode_near_car = true
	end
	
	if gui.Button("Warp into near car") then
	  warp_into_car = true
	end
	
	if gui.Button("Give Weapons") then
	  give_weapons = true
	end
	
	gui.TreePop()
  end
end

function Initialize()
end