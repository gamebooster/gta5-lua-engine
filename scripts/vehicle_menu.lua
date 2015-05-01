local vehicle_list = require 'vehicles'
local spawn_car = ""

function FilterTable(func, tbl)
     local newtbl= {}
     for i,v in pairs(tbl) do
         if func(v) then
	     table.insert(newtbl, v)
         end
     end
     return newtbl
 end
 
local vehicle_filter = gui.Filter("")

local selected_vehicle_index = 0
local change_color = false


local primary_color = gui.Color()
local secondary_color = gui.Color()

function OnScriptTick()
  if change_color then
    local vehicle_id = ped.GET_VEHICLE_PED_IS_IN(player.PLAYER_PED_ID(), 1)
	if vehicle_id > 0 then
      vehicle.SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehicle_id, math.floor(primary_color.r * 255), math.floor(primary_color.g * 255), math.floor(primary_color.b * 255))
	  vehicle.SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehicle_id, math.floor(secondary_color.r * 255), math.floor(secondary_color.g * 255), math.floor(secondary_color.b * 255))
	end
  end

  if spawn_car and wants_car then
    local id = player.PLAYER_PED_ID()
	local hash = gameplay.GET_HASH_KEY(spawn_car)
	if hash > 0 and id > 0 then
	  streaming.REQUEST_MODEL(hash)
	  if streaming.HAS_MODEL_LOADED(hash) then
	    local vec = entity.GET_ENTITY_COORDS(id, 1)
		local vehicle_id = vehicle.CREATE_VEHICLE(hash, vec.x, vec.y + 5, vec.z, 0, 0, 0)
		ai.TASK_WARP_PED_INTO_VEHICLE(player.PLAYER_PED_ID(), vehicle_id, -1)
	  end
	end
  end

  wants_car = false
  change_color = false
end

function OnDrawTick()
  if gui.TreeNode("Vehicle") then
  	vehicle_filter:Draw("Filter", -1)

	local filtered_list = vehicle_list
	if vehicle_filter:IsActive() then
	  filtered_list = FilterTable(function(v) return vehicle_filter:PassFilter(v) end, vehicle_list)
	end

    selected_vehicle_index = gui.ListBox("Car", selected_vehicle_index, filtered_list)
	gui.TextLabel("selected", "" .. selected_vehicle_index)
	spawn_car = filtered_list[selected_vehicle_index + 1]
	
    if gui.Button("Spawn Car") then
	  wants_car = true
	end
	
	if gui.ColorEdit3("primary", primary_color) or gui.ColorEdit3("secondary", secondary_color) then
	  change_color = true
	end
	
	gui.TreePop()
  end
end

function Initialize()
end