require "keycodes"


--- org author mafins

function SetupText()

	ui.SET_TEXT_FONT(0)
	ui.SET_TEXT_SCALE(0.4, 0.4)
	ui.SET_TEXT_COLOUR(255, 255, 255, 255)
	ui.SET_TEXT_WRAP(0.0, 1.0)
	ui.SET_TEXT_CENTRE(0)
	ui.SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0)
	ui.SET_TEXT_EDGE(0, 0, 0, 0, 0)
	ui.SET_TEXT_OUTLINE()
end
function DrawString(text, x, y)
	ui._SET_TEXT_ENTRY("STRING")
	ui._ADD_TEXT_COMPONENT_STRING(text)
	ui._DRAW_TEXT(x, y)
end

local grav_target_locked = false
local grav_entity = 0
local grav_partfx = 0

function GetCoordsFromCam(distance)	
    local rot = cam.GET_GAMEPLAY_CAM_ROT(2)
	local coord = cam.GET_GAMEPLAY_CAM_COORD()

    local tZ = rot.z * 0.0174532924;
    local tX = rot.x * 0.0174532924;
    local num = math.abs(math.cos(tX));

    coord.x = coord.x + (-math.sin(tZ)) * (num + distance)
    coord.y = coord.y + (math.cos(tZ)) * (num + distance)
    coord.z = coord.z + math.sin(tX) * 8

	return coord
end

function GetDirectionFromCam()	
    local rot = cam.GET_GAMEPLAY_CAM_ROT(2)
	local coord = cam.GET_GAMEPLAY_CAM_COORD()

    local tZ = rot.z * 0.0174532924;
    local tX = rot.x * 0.0174532924;
    local num = math.abs(math.cos(tX));

    coord.x = (-math.sin(tZ)) * (num)
    coord.y = (math.cos(tZ)) * (num)
    coord.z = math.sin(tX)

	return coord
end

function RequestControlEntity(entity)
	local tick = 0

	while network.NETWORK_HAS_CONTROL_OF_ENTITY(entity) == 0 and tick <= 12 do
		network.NETWORK_REQUEST_CONTROL_OF_ENTITY(entity)
		tick = tick + 1
	end
  return entity
end

local stungun_hash = gameplay.GET_HASH_KEY("weapon_stungun")

function OnScriptTick()
  if gui.KeyPressed(KEY_6) then
	  if hash ~= 0 then
	    weapon.GIVE_DELAYED_WEAPON_TO_PED(player.PLAYER_PED_ID(), stungun_hash, 1, 1)
	  end
	end
  
  if player.IS_PLAYER_FREE_AIMING(player.PLAYER_ID()) == 0 then
	  grav_target_locked = false
    return
	end

	local changed, temp_weapon = weapon.GET_CURRENT_PED_WEAPON(player.PLAYER_PED_ID(), 1)
  if stungun_hash ~= temp_weapon then return end

  if grav_target_locked == false then
	  got_entity, grav_entity = player._GET_AIMED_ENTITY(player.PLAYER_ID())
    if grav_entity == 0 then return end
    grav_target_locked = true
	end

  if entity.IS_ENTITY_A_PED(grav_entity) == 1 and ped.IS_PED_IN_ANY_VEHICLE(grav_entity, 1) == 1 then
		grav_entity = ped.GET_VEHICLE_PED_IS_IN(grav_entity, 0)
  end
	  
	if network.NETWORK_HAS_CONTROL_OF_ENTITY(RequestControlEntity(grav_entity)) == 0 then return end
  
  local coords = GetCoordsFromCam(6)

  -- if graphics.DOES_PARTICLE_FX_LOOPED_EXIST(grav_partfx) == 0 then	
    -- streaming.REQUEST_PTFX_ASSET()
    -- if streaming.HAS_PTFX_ASSET_LOADED() == 1 then
    
      -- grav_partfx = graphics.START_PARTICLE_FX_LOOPED_AT_COORD("scr_drug_traffic_flare_L", coords.x, coords.y, coords.z, 0.0, 0.0, 0.0, 0.5, 0, 0, 0, 0)
      -- graphics.SET_PARTICLE_FX_LOOPED_COLOUR(grav_partfx, 1.0, 0.84, 0.0, 0)
    -- end
  -- end


  if entity.IS_ENTITY_A_VEHICLE(grav_entity) then
    entity.SET_ENTITY_HEADING(grav_entity, entity.GET_ENTITY_HEADING(player.PLAYER_PED_ID()) + 90.0)
  end

  entity.SET_ENTITY_COORDS_NO_OFFSET(grav_entity, coords.x, coords.y, coords.z, 0, 0, 0);
  
  --entity.APPLY_FORCE_TO_ENTITY(grav_entity, 1, math.random(0, 1), math.random(0, 1), math.random(0, 1), 0, 0, 0, 0, 1, 1, 1, 0, 1)
  
  if ped.IS_PED_SHOOTING(player.PLAYER_PED_ID()) == 1 then
    audio.PLAY_SOUND_FROM_ENTITY(-1, "Foot_Swish", grav_entity, "docks_heist_finale_2a_sounds", 0, 0)
    entity.SET_ENTITY_HEADING(grav_entity, entity.GET_ENTITY_HEADING(player.PLAYER_PED_ID()))
    local direction = GetDirectionFromCam()
    entity.APPLY_FORCE_TO_ENTITY(grav_entity, 1, 0, 150 + math.abs(direction.y) * 50, direction.z * 130, 0, 0, 0, 0, 1, 1, 1, 0, 1)
    grav_target_locked = false
    system.WAIT(500)
  end

	-- elseif graphics.DOES_PARTICLE_FX_LOOPED_EXIST(grav_partfx) == 1 then
		-- graphics.STOP_PARTICLE_FX_LOOPED(grav_partfx, 0)
		--graphics.REMOVE_PARTICLE_FX(grav_partfx, 0)
		--streaming.REMOVE_PTFX_ASSET()
	-- end
end

function OnDrawTick()
end

function Initialize()

end