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

function OnScriptTick()
  is_host = network.NETWORK_IS_HOST()

  if gui.KeyPressed(KEY_0) then
    player.SET_PLAYER_INVINCIBLE(player.PLAYER_ID(), 1)
    --test.SendTextMessage(player.PLAYER_ID(), '<img src="img://ClanTexture17801373_2/ClanTexture17801373_2">')
	--counter = counter + 1
  end
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
  
  if test_overlay or gui.KeyPressed(KEY_1) then
  gameplay.SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1)
    --network_id = network.PARTICIPANT_ID_TO_INT()
	
	for i = 0, 32, 1 do
      if player.GET_PLAYER_PED(i) > 0 and ui._ARE_HEAD_DISPLAYS_READY() then
	  
	  	local ped_id = player.GET_PLAYER_PED(i)
		
		if ui.GET_BLIP_FROM_ENTITY(ped_id) == 0 then
			local blip_id = ui.ADD_BLIP_FOR_ENTITY(ped_id)
			ui.SET_BLIP_SPRITE(blip_id, 1)
			ui.SET_BLIP_SCALE(blip_id, 1)
			ui.SET_BLIP_PRIORITY(blip_id, 13);
			ui.SET_BLIP_NAME_TO_PLAYER_NAME(blip_id, i);
			ui.SET_BLIP_ALPHA(blip_id, 255);
		end

	    local network_id = ui._CREATE_PED_HEAD_DISPLAY(player.GET_PLAYER_PED(i), "", 0, 0, "", 0)
		ui._SET_HEAD_DISPLAY_STRING(network_id, player.GET_PLAYER_NAME(i))
		ui._SET_HEAD_DISPLAY_FLAG(network_id, 0, 1)
	    displays[i].active = ui._IS_HEAD_DISPLAY_ID_VALID(network_id)
		displays[i].head_id = network_id
	  end
	end
  end
  
  if want_resurrect then
    local vec = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
    network.NETWORK_RESURRECT_LOCAL_PLAYER(vec.x, vec.y, vec.z, 0, 0, 1, 1);
    --ped.REVIVE_INJURED_PED(player.PLAYER_PED_ID())
    --ped.RESURRECT_PED(player.PLAYER_PED_ID())
    ----entity.SET_ENTITY_HEALTH(player.PLAYER_PED_ID(), 1000)
    --player.SET_PLAYER_INVINCIBLE(player.PLAYER_ID(), 1)
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
	if changed or display_text then
	  display_text = true
	  gui.Text(tostring(changed) .. " " .. slider_counter)
	end

	if gui.Button("Explode near car") then
	  explode_near_car = true
	end
	
	if gui.Button("test_overlay") then
	  test_overlay = true
	end
	
	for i = 0, MAX_PLAYERS, 1 do
	  if gui.Selectable(tostring(i) .. " " .. tostring(displays[i].head_id), displays[i].selected) then
	    displays[i].selected = not displays[i].selected
	  end
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

  for i = 0, MAX_PLAYERS, 1 do
    displays[i] = {}
	displays[i].selected = false
  end
end