require 'keycodes'

local explode_near_car = false
local warp_into_car = false

function OnScriptTick()
  if gui.KeyPressed(KEY_0) then
    warp_into_car = true
  end
  if gui.KeyPressed(KEY_9) then
    explode_near_car = true
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
end

function OnDrawTick()
  if gui.TreeNode("Test") then

	if gui.Button("Explode near car") then
	  explode_near_car = true
	end
	
	if gui.Button("Warp into near car") then
	  warp_into_car = true
	end
	
	gui.TreePop()
  end
end

function Initialize()
end