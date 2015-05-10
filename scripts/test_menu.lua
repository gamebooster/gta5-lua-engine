require 'keycodes'

local explode_near_car = false
local warp_into_car = false
local want_resurrect = false

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
local counter = 0

local test_overlay = false

local is_host = false

local displays = {}
local MAX_PLAYERS = 32

function GetCoordsBeforePed(distance)	
  local coords = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
  local forward = entity.GET_ENTITY_FORWARD_VECTOR(player.PLAYER_PED_ID())


  coords.x = coords.x + forward.x * distance
  coords.y = coords.y + forward.y * distance

	return coords
end

function OnScriptTick()
  is_host = network.NETWORK_IS_HOST()

  if gui.KeyPressed(KEY_0) then
    player.SET_PLAYER_INVINCIBLE(player.PLAYER_ID(), 1)
    --test.SendTextMessage(player.PLAYER_ID(), '<img src="img://ClanTexture17801373_2/ClanTexture17801373_2">')
	--counter = counter + 1
  end

  if give_weapons then
    for i, weapon_name in pairs(weapons) do
	  local hash = gameplay.GET_HASH_KEY(weapon_name)
	  if hash ~= 0 then
	    weapon.GIVE_DELAYED_WEAPON_TO_PED(player.PLAYER_PED_ID(), hash, 999, 1)
      weapon.SET_PED_INFINITE_AMMO(player.PLAYER_PED_ID(), 1, hash)
      weapon.SET_AMMO_IN_CLIP(player.PLAYER_PED_ID(), hash, 100);
      weapon._0x149174181F6271F0(player.PLAYER_PED_ID(), 1)
	  end
	end
  end
  
  if test_overlay or gui.KeyPressed(KEY_1) then
  
    -- network._0xE365A413E4AB79B1(0)
    -- network._0xDFFFF8FA5D87115(0)
    -- network._0xC956F5FBF50C5B4D(1)
  
    network.NETWORK_SET_FRIENDLY_FIRE_OPTION(1)
    local vec = GetCoordsBeforePed(5)
        for i = 0, 32, 1 do
      if player.GET_PLAYER_PED(i) > 0 then
              ped.SET_CAN_ATTACK_FRIENDLY(player.GET_PLAYER_PED(i), 1, 0)
      end
      end
    for i = 0, 32, 1 do
      if player.GET_PLAYER_PED(i) > 0 and player.PLAYER_PED_ID() ~= player.GET_PLAYER_PED(i) then
        --ai.CLEAR_PED_TASKS_IMMEDIATELY(player.GET_PLAYER_PED(i))
        entity.SET_ENTITY_COLLISION(player.GET_PLAYER_PED(i), 1, 0);
        entity.FREEZE_ENTITY_POSITION(player.GET_PLAYER_PED(i), 0);
        ped.SET_PED_CAN_BE_TARGETTED(player.GET_PLAYER_PED(i), 1);
        local vec = entity.GET_ENTITY_COORDS(player.GET_PLAYER_PED(i), 1)
        fire.ADD_EXPLOSION(vec.x + 1, vec.y, vec.z, 1, 19, 0, 1, 0)
        fire.ADD_EXPLOSION(vec.x + 1, vec.y, vec.z, 13, 19, 0, 1, 0)
        fire.ADD_EXPLOSION(vec.x + 1, vec.y, vec.z, 41, 19, 0, 1, 0)
        fire.ADD_EXPLOSION(vec.x + 1, vec.y, vec.z, 42, 19, 0, 1, 0)
        fire.ADD_EXPLOSION(vec.x + 1, vec.y, vec.z, 3, 19, 0, 1, 0)
        fire.ADD_EXPLOSION(vec.x + 1, vec.y, vec.z, 12, 19, 0, 1, 0)
        fire.START_ENTITY_FIRE(player.GET_PLAYER_PED(i))
      end
    end
  end
  
  if want_resurrect then
    local vec = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
    network.NETWORK_RESURRECT_LOCAL_PLAYER(vec.x, vec.y, vec.z, 0, 0, 1, 1);
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
  want_resurrect = false
  test_overlay = false
end

local slider_counter = 0
local changed = false
local display_text = false

function OnDrawTick()
  if gui.BeginOverlay("Overlay", true, 10, 10, 0.3) then
    gui.Text("ishost: " .. tostring(is_host))
	gui.End()
  end

  if gui.TreeNode("Test") then
  
    changed, slider_counter = gui.SliderInt("test", slider_counter, 0, 10)

	if gui.Button("Explode near car") then
	  explode_near_car = true
	end
	
	if gui.Button("test_overlay") then
	  test_overlay = true
	end
	
	if gui.Button("Warp into near car") then
	  warp_into_car = true
	end
	
	if gui.Button("Give Weapons") then
	  give_weapons = true
	end
	
	if gui.Button("Resurrect") then
	  want_resurrect = true
	end
	
	gui.TreePop()
  end
end

function Initialize()
end