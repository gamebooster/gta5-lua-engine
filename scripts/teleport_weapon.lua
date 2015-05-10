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
  -- if player.IS_PLAYER_FREE_AIMING(player.PLAYER_ID()) == 0 then
	 -- grav_target_locked = false
   -- return
	-- end
if ped.IS_PED_SHOOTING(player.PLAYER_PED_ID()) == 1 then
     local success, coords = weapon.GET_PED_LAST_WEAPON_IMPACT_COORD(player.PLAYER_PED_ID())
     if success then
      --``` success, coords = weapon.GET_PED_LAST_WEAPON_IMPACT_COORD(player.PLAYER_PED_ID())
       gui.AddLog("coords" .. coords.x .. " " .. coords.y .. " " .. coords.z)
      --local new_z = gameplay.GET_GROUND_Z_FOR_3D_COORD(coords.x, coords.y, 1000)
      --entity.SET_ENTITY_COORDS_NO_OFFSET(player.PLAYER_PED_ID(), coords.x, coords.y, new_z, 0, 0, 0)
    end
    end
  
      --  SetupText()
      --DrawString("coords" .. coords.x .. " " .. coords.y .. " " .. coords.z, 0.1, 0.1)
  
  -- if ped.IS_PED_SHOOTING(player.PLAYER_PED_ID()) == 1 then
    -- local success, coords = weapon.GET_PED_LAST_WEAPON_IMPACT_COORD(player.PLAYER_PED_ID())
    -- if success then
      -- local new_z = gameplay.GET_GROUND_Z_FOR_3D_COORD(coords.x, coords.y, 1000)
      -- SetupText()
      -- DrawString("coords" .. coords.x .. " " .. coords.y .. " " .. new_z, 0.2, 0.1)
      -- entity.SET_ENTITY_COORDS_NO_OFFSET(player.PLAYER_PED_ID(), coords.x, coords.y, new_z, 0, 0, 0)
    -- end
  -- end
end

function OnDrawTick()
end

function Initialize()

end