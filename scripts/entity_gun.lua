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

local spawn_car = "ambulance"

function OnScriptTick()
    
  if ped.IS_PED_SHOOTING(player.PLAYER_PED_ID()) == 1 then
    local id = player.PLAYER_PED_ID()
	  local hash = gameplay.GET_HASH_KEY(spawn_car)
	  if hash > 0 and id > 0 then
	    streaming.REQUEST_MODEL(hash)
	    if streaming.HAS_MODEL_LOADED(hash) then
	      local coords = GetCoordsFromCam(6)
		    local vehicle_id = vehicle.CREATE_VEHICLE(hash, coords.x, coords.y, coords.z, 0, 1, 0)
		
		    local net_id = network.VEH_TO_NET(vehicle_id)
		    network.SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(net_id, 1)
        audio.PLAY_SOUND_FROM_ENTITY(-1, "Foot_Swish", vehicle_id, "docks_heist_finale_2a_sounds", 0, 0)
        entity.SET_ENTITY_HEADING(vehicle_id, entity.GET_ENTITY_HEADING(player.PLAYER_PED_ID()))
        if network.NETWORK_HAS_CONTROL_OF_ENTITY(RequestControlEntity(vehicle_id)) == 0 then return end
        local direction = GetDirectionFromCam()
        entity.APPLY_FORCE_TO_ENTITY(vehicle_id, 1, 0, 150 + math.abs(direction.y) * 50, direction.z * 130, 0, 0, 0, 0, 1, 1, 1, 0, 1)
        system.WAIT(10)
	  end
	end
  end
end

function OnDrawTick()
end

function Initialize()

end