local players = {}
local MAX_PLAYERS = 32
local wanted_level = false
local wants_car = false

function OnScriptTick()
  if wants_car then
    local id = player.PLAYER_PED_ID()
	local hash = 0x2B6DC64A
	if id > 0 then
	  streaming.REQUEST_MODEL(hash)
	  if streaming.HAS_MODEL_LOADED(hash) then
	    local vec = entity.GET_ENTITY_COORDS(id, 1)
		vehicle.CREATE_VEHICLE(hash, vec.x, vec.y + 5, vec.z, 0, 1, 0)
	  end
	end
  end
  
  wants_car = false

 for i = 0, MAX_PLAYERS, 1 do
  if player.GET_PLAYER_PED(i) > 0 then
    players[i].name = player.GET_PLAYER_NAME(i)
    if players[i].selected and wanted_level then
      player.SET_WANTED_LEVEL(i, 0, 1)
	  player.SET_WANTED_LEVEL_NOW(i, 0)
	  wanted_level = false
    end
   end
 end
end

function OnDrawTick()
  if gui.TreeNode("Players") then
    if gui.Button("Set Wanted Level") then
	  wanted_level = true
	end
	for i = 0, MAX_PLAYERS, 1 do
	  if gui.Selectable(players[i].name, players[i].selected) then
	    players[i].selected = not players[i].selected
	  end
	end
	gui.TreePop()
  end
  if gui.TreeNode("Spawn") then
    if gui.Button("Spawn Car") then
	  wants_car = true
	end
	gui.TreePop()
  end
end

function Initialize()
  for i = 0, MAX_PLAYERS, 1 do
    players[i] = {}
	players[i].name = ""
	players[i].selected = false
  end
end