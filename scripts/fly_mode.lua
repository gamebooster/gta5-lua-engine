require "keycodes"

local parachute_id = "GADGET_PARACHUTE"

-- org author chileno

function ApplyForceToEntity(ped_id, x, y)
  entity.APPLY_FORCE_TO_ENTITY(ped_id, 1, 0, x,y ,0,0,0,0,1,1,1,0,1)
end

function OnScriptTick()
  if gui.KeyPressed(KEY_H) then
      local hash = gameplay.GET_HASH_KEY(parachute_id)
	  weapon.GIVE_DELAYED_WEAPON_TO_PED(player.PLAYER_PED_ID(), hash, 1, 1)
      player.SET_PLAYER_INVINCIBLE(player.PLAYER_ID(), 1)
	  ai.CLEAR_PED_TASKS(player.PLAYER_PED_ID())
      ped.SET_PED_TO_RAGDOLL_WITH_FALL(player.PLAYER_PED_ID(), 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0)
	  ApplyForceToEntity(player.PLAYER_PED_ID(), 0, 10)
  end
  
  if entity.IS_ENTITY_IN_AIR(player.PLAYER_PED_ID()) == 1 and ped.IS_PED_RAGDOLL(player.PLAYER_PED_ID()) == 0 then  
    if gui.KeyPressed(KEY_W) then
	  ApplyForceToEntity(player.PLAYER_PED_ID(), 3, 0)
	end
	if gui.KeyPressed(KEY_S) then
	  ApplyForceToEntity(player.PLAYER_PED_ID(), 3, 6)
	end
	if gui.KeyPressed(KEY_LSHIFT) then
	  ApplyForceToEntity(player.PLAYER_PED_ID(), 6, 0)
	end
  end
end

function OnDrawTick()
end

function Initialize()

end