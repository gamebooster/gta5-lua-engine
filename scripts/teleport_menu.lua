require 'keycodes'

local BLIP_WAYPOINT = 8

local want_teleport = false

local current_position = nil

function OnScriptTick()
  current_position = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)

  if want_teleport then
	local blip_id = ui.GET_FIRST_BLIP_INFO_ID(BLIP_WAYPOINT)
	if blip_id > 0 then
	  local target = ui.GET_BLIP_INFO_ID_COORD(blip_id)
	  --streaming.LOAD_SCENE(target.x, target.y, target.z)
	  
	  entity.SET_ENTITY_COORDS(player.PLAYER_PED_ID(), target.x, target.y, 1000, 1, 1, 1, 1)
	  local new_z = gameplay.GET_GROUND_Z_FOR_3D_COORD(target.x, target.y, 1000)
	  entity.SET_ENTITY_COORDS(player.PLAYER_PED_ID(), target.x, target.y, new_z, 1, 1, 1, 1)
	end
  end
  
  want_teleport = false
end

function OnDrawTick()
  if gui.TreeNode("Teleport") then
    gui.Text(current_position.x .. " " .. current_position.y .. " " .. current_position.z)
  
	if gui.Button("Teleport") then
	  want_teleport = true
	end
	
	gui.TreePop()
  end
end

function Initialize()
end