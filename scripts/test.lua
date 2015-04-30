require "keycodes"
require "vehicles"

local players = {}
local MAX_PLAYERS = 32
local wanted_level = false
local wants_car = false
local wants_into_car = false
local wants_money = false
local explode_car = false
local explode_near_car = false
local warp_near_car = false
local last_vehicle_id = 0

local vehicle_list = { "besra", "coquette2", "miljet", "swift", "barracks3", "boxville4", "casco", "dinghy3", "enduro", "gburrito2", "guardian", "hydra", "insurgent", "insurgent2", "kuruma", "kuruma2", "lectro", "mule3", "savage", "slamvan2", "tanker2", "technical", "trash2", "valkyrie", "velum2", "asea", "banshee", "barracks2", "blista", "btype", "buccaner", "buffalo3", "burrito2", "burrito5", "carbonizzare", "cargobob", "cargobob2", "cargobob3", "cargoplane", "daemon", "dodo", "fusilade", "futo", "gresley", "lazer", "mesa3", "miljet", "peyote", "police2", "policeb", "primo", "rapidgt", "ruiner", "sadler", "sandking", "sandking2", "schwarzer", "sheriff", "submersible", "submersible2", "suntrap", "surge", "warrener", "boxville", "boxville2", "boxville3", "boxville4", "buccaner", "bullet", "buzzard", "cargobob", "cargobob2", "cogcabrio", "dilettante", "dinghy", "dinghy2", "dubsta", "dump", "emperor3", "exemplar", "felon", "firetruk", "fq2", "fusilade", "futo", "gresley", "habanero", "hakuchou", "hexer", "issi2", "jackal", "jetmax", "kalahari", "lazer", "manana", "massacro2", "mesa", "mesa3", "monroe", "mule", "pbus", "pcj", "peyote", "phantom", "phoenix", "picador", "police2", "police3", "polmav", "predator", "poptrailer", "rancherxl2", "regina", "rentalbus", "riot", "romero", "ruffian", "rumpo", "sadler", "sanchez", "sanchez2", "sandking", "sandking2", "scrap", "seakark", "serrano", "sheriff", "sheriff2", "skylift", "sovereign", "speedo2", "stingergt", "sultan", "suntrap", "superd", "sufer2", "thrust", "tiptruck2", "tornado", "tornado2", "tornado3", "tornado4", "tourbus", "towtruck", "tractor", "tractor2", "trailersmall", "trash", "voodoo2", "washington", "zentorno", "zion", "zion2", "ztype" }
local spawn_car = ""

local selected_vehicle_index = 0


local change_color = false
local primary_color = gui.Color()
local secondary_color = gui.Color()

primary_color.r = 255;

function OnScriptTick()
  if gui.KeyPressed(KEY_8) then
    wants_car = true
  end  
  if gui.KeyPressed(KEY_9) then
    explode_near_car = true
  end
  
  if change_color then
    local vehicle_id = ped.GET_VEHICLE_PED_IS_IN(player.PLAYER_PED_ID(), 1)
	if vehicle_id > 0 then
      vehicle.SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehicle_id, math.floor(primary_color.r * 255), math.floor(primary_color.g * 255), math.floor(primary_color.b * 255))
	  vehicle.SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehicle_id, math.floor(secondary_color.r * 255), math.floor(secondary_color.g * 255), math.floor(secondary_color.b * 255))
	end
  end
  
  if gui.KeyPressed(KEY_DELETE) then
          ai.TASK_WARP_PED_INTO_VEHICLE(player.PLAYER_PED_ID(), last_vehicle_id, -1)
    --local flags = 64 | 0x10000 | 2048 | 1 | 2 | 4 | 32 | 16 | 8
	--local vec = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
	--local vehicle_id = vehicle.GET_CLOSEST_VEHICLE(vec.x, vec.y, vec.z, 100, 0, flags)
	
	--ai.TASK_WARP_PED_INTO_VEHICLE(player.PLAYER_PED_ID(), vehicle_id, -1)
  end

  if spawn_car and wants_car then
    --test.SendTextMessage(player.PLAYER_ID())
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
  
  if explode_near_car then
	local flags = 64 | 0x10000 | 2048 | 1 | 2 | 4 | 32 | 16 | 8
	local vec = entity.GET_ENTITY_COORDS(player.PLAYER_PED_ID(), 1)
	local vehicle_id = vehicle.GET_CLOSEST_VEHICLE(vec.x, vec.y, vec.z, 100, 0, flags)
	
	network.NETWORK_EXPLODE_VEHICLE(vehicle_id, 1, 0, 0)
  end

  for i = 0, MAX_PLAYERS, 1 do
    if player.GET_PLAYER_PED(i) > 0 then
      players[i].active = true
      players[i].name = player.GET_PLAYER_NAME(i)
	  players[i].vehicle = ped.GET_VEHICLE_PED_IS_IN(player.GET_PLAYER_PED(i), 1)

      if players[i].selected and wanted_level then
	    --ai`.CLEAR_PED_TASKS_IMMEDIATELY(player.GET_PLAYER_PED(i))
        player.SET_WANTED_LEVEL(i, 5, 0)
	    player.SET_WANTED_LEVEL_NOW(i, 5)
      end
	  
	  if players[i].selected and explode_car then
	    network.NETWORK_EXPLODE_VEHICLE(ped.GET_VEHICLE_PED_IS_IN(player.GET_PLAYER_PED(i), 1), 1, 0, 0)
      end
	  if players[i].selected and wants_into_car then
	    last_vehicle_id = ped.GET_VEHICLE_PED_IS_IN(player.GET_PLAYER_PED(i), 1)
        ai.CLEAR_PED_TASKS_IMMEDIATELY(player.GET_PLAYER_PED(i))
        --max_seats = vehicle.GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehicle_id)
        --existing = vehicle.GET_VEHICLE_NUMBER_OF_PASSENGERS(vehicle_id)
		--chosen = vehicle.IS_VEHICLE_SEAT_FREE(vehicle_id, -1)
        ai.TASK_WARP_PED_INTO_VEHICLE(player.PLAYER_PED_ID(), last_vehicle_id, -1)
	  end
	  if players[i].selected and wants_money then
	if player.GET_PLAYER_PED(i) > 0 then
	  local vec = entity.GET_ENTITY_COORDS(player.GET_PLAYER_PED(i), 1)
	  local hash_money = gameplay.GET_HASH_KEY("PICKUP_MONEY_CASE")
	  local hash = 0xAEB74C05
	  streaming.REQUEST_MODEL(hash)
	  if streaming.HAS_MODEL_LOADED(hash) then
	    object.CREATE_AMBIENT_PICKUP(hash_money, vec.x, vec.y, vec.z, 0, 40000, hash, 0, 1)
		--networkcash._0x4337511FA8221D36(2000)
	  end
	end
  end
    else
     players[i].active = false
    end
  end
  
  wanted_level = false
  wants_money = false
  wants_into_car = false
  wants_car = false
  explode_car = false
  explode_near_car = false
  change_color = false
end

 function FilterTable(func, tbl)
     local newtbl= {}
     for i,v in pairs(tbl) do
         if func(v) then
	     table.insert(newtbl, v)
         end
     end
     return newtbl
 end

local players_filter = gui.Filter("")
local vehicle_filter = gui.Filter("")

function VehicleFilter(v) return vehicle_filter:PassFilter(v) end

function OnDrawTick()
  if gui.TreeNode("Players") then
    if gui.Button("Set Wanted Level") then
	  wanted_level = true
	end
	gui.SameLine()
	if gui.Button("Spawn into car") then
	  wants_into_car = true
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
  if gui.TreeNode("Self") then
  	vehicle_filter:Draw("Filter", -1)

	local filtered_list = vehicle_list
	if vehicle_filter:IsActive() then
	  filtered_list = FilterTable(VehicleFilter, vehicle_list)
	end
	
    selected_vehicle_index = gui.ListBox("Car", selected_vehicle_index, filtered_list)
	gui.TextLabel("selected", "" .. selected_vehicle_index)
	spawn_car = filtered_list[selected_vehicle_index + 1]
	
    if gui.Button("Spawn Car") then
	  wants_car = true
	end
	if gui.Button("Explode near car") then
	  explode_near_car = true
	end
	
	if gui.ColorEdit3("primary", primary_color) or gui.ColorEdit3("secondary", secondary_color) then
	  change_color = true
	end
	
	gui.TreePop()
  end
  if gui.TreeNode("Test") then
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