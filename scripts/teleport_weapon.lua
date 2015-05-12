require "keycodes"

function OnScriptTick()
  -- if player.IS_PLAYER_FREE_AIMING(player.PLAYER_ID()) == false then
   -- return
  -- end
  if ped.IS_PED_SHOOTING(player.PLAYER_PED_ID()) then
   local success, x, y, z, w = weapon.GET_PED_LAST_WEAPON_IMPACT_COORD(player.PLAYER_PED_ID())
   if success then
    --gui.AddLog("coords: " .. x .. " " .. y .. " " .. z .. " " .. w)
    local new_z = gameplay.GET_GROUND_Z_FOR_3D_COORD(x, y, 1000)
    entity.SET_ENTITY_COORDS_NO_OFFSET(player.PLAYER_PED_ID(), x, y, new_z, 0, 0, 0)
    end
  end
end

function OnDrawTick()
end

function Initialize()

end