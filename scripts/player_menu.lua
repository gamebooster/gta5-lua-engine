local players = {}
local MAX_PLAYERS = 32

local players_filter = gui.Filter("")

local wanted_level = 0
local change_wanted_level = false
local wants_into_car = false
local wants_money = false
local explode_car = false
local wants_teleport_to = false

function OnScriptTick()
  for i = 0, MAX_PLAYERS, 1 do
    if player.GET_PLAYER_PED(i) > 0 then
      players[i].active = true
      players[i].name = player.GET_PLAYER_NAME(i)
	  players[i].vehicle = ped.GET_VEHICLE_PED_IS_IN(player.GET_PLAYER_PED(i), 1)

      if players[i].selected and change_wanted_level then
        player.SET_WANTED_LEVEL(i, wanted_level, 0)
	    player.SET_WANTED_LEVEL_NOW(i, wanted_level)
      end
	  
	  if players[i].selected and explode_car then
	  	local ped_id = player.GET_PLAYER_PED(i)
		local blip_id = ui.ADD_BLIP_FOR_ENTITY(ped_id)
		ui.SET_BLIP_SPRITE(blip_id, 2)
		ui.SET_BLIP_SCALE(blip_id, 0.7)
		ui.SET_BLIP_PRIORITY(blip_id, 13);
		ui.SET_BLIP_NAME_TO_PLAYER_NAME(blip_id, i);
		ui.SET_BLIP_ALPHA(blip_id, 255);
	    --network.NETWORK_EXPLODE_VEHICLE(ped.GET_VEHICLE_PED_IS_IN(player.GET_PLAYER_PED(i), 1), 1, 0, 0)
      end

	  if players[i].selected and wants_teleport_to then
	    local vec = entity.GET_ENTITY_COORDS(player.GET_PLAYER_PED(i), 1)
        entity.SET_ENTITY_COORDS(player.PLAYER_PED_ID(), vec.x, vec.y, vec.z, 1, 1, 1, 1)
	  end
	  
	  if players[i].selected and wants_into_car then
	    local last_vehicle_id = ped.GET_VEHICLE_PED_IS_IN(player.GET_PLAYER_PED(i), 1)
        ai.CLEAR_PED_TASKS_IMMEDIATELY(player.GET_PLAYER_PED(i))
        --max_seats = vehicle.GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehicle_id)
        --existing = vehicle.GET_VEHICLE_NUMBER_OF_PASSENGERS(vehicle_id)
		--chosen = vehicle.IS_VEHICLE_SEAT_FREE(vehicle_id, -1)
        ai.TASK_WARP_PED_INTO_VEHICLE(player.PLAYER_PED_ID(), last_vehicle_id, -1)
	  end

	  if players[i].selected and wants_money then
	    local vec = entity.GET_ENTITY_COORDS(player.GET_PLAYER_PED(i), 1)
	    local hash_money = gameplay.GET_HASH_KEY("PICKUP_MONEY_CASE")
	    local hash_money_bag = gameplay.GET_HASH_KEY("prop_money_bag_01")
	    streaming.REQUEST_MODEL(hash_money_bag)
	    if streaming.HAS_MODEL_LOADED(hash_money_bag) then
	      object.CREATE_AMBIENT_PICKUP(hash_money, vec.x, vec.y, vec.z, 0, 40000, hash_money_bag, 0, 1)
	    end
	  end
    else
     players[i].active = false
    end
  end
  
  change_wanted_level = false
  wants_money = false
  wants_into_car = false
  explode_car = false
  wants_teleport_to = false
end

function OnDrawTick()
  if gui.TreeNode("Players") then
    changed, wanted_level = gui.SliderInt("Wanted Level", wanted_level, 0, 6)
    if gui.Button("Set Wanted Level") then
	  change_wanted_level = true
	end
	gui.SameLine()
	if gui.Button("Spawn into car") then
	  wants_into_car = true
	end
	gui.SameLine()
	if gui.Button("Teleport to") then
	  wants_teleport_to = true
	end
	gui.SameLine()
    if gui.Button("Spawn Money") then
	  wants_money = true
	end
	gui.SameLine()
	if gui.Button("Explode car") then
	  explode_car = true
	end
	players_filter:Draw("Filter", -1)
	for i = 0, MAX_PLAYERS, 1 do
	  if players[i].active and players_filter:PassFilter(players[i].name) and gui.Selectable(players[i].name .. " " .. tostring(players[i].vehicle), players[i].selected) then
	    players[i].selected = not players[i].selected
	  end
	end
	gui.TreePop()
  end
end

function Initialize()
  for i = 0, MAX_PLAYERS, 1 do
    players[i] = {}
	players[i].name = ""
	players[i].selected = false
	players[i].active = false
  end
end