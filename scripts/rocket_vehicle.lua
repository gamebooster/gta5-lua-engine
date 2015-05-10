require "inputs"

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

local weapons = {
  "WEAPON_ASSAULTSHOTGUN",
  "VEHICLE_WEAPON_PLAYER_LASER",
  "VEHICLE_WEAPON_ENEMY_LASER",
  "WEAPON_BALL",
  "WEAPON_SNOWBALL",
  "WEAPON_FIREWORK",
  "VEHICLE_WEAPON_TANK",
  "WEAPON_PASSENGER_ROCKET"
}

local weapon_index = 1
local weapon_hash = gameplay.GET_HASH_KEY(weapons[weapon_index])

function OnScriptTick()
  local vehicle_id = ped.GET_VEHICLE_PED_IS_IN(player.PLAYER_PED_ID(), 0)
  if vehicle_id == 0 then return end
  
  SetupText()
  DrawString("weapon_index " .. weapon_index, 0.02, 0.05)
  
  if streaming._HAS_DLC_PTFX_LOADED("scr_carsteal4") == 0 then
    streaming._REQUEST_DLC_PTFX("scr_carsteal4")
    return
  end
  

  if vehicle.IS_VEHICLE_DRIVEABLE(vehicle_id, 0) == 1 then
    controls.DISABLE_CONTROL_ACTION(0, INPUT_VEH_MOVE_DOWN_ONLY, 1)
    controls.DISABLE_CONTROL_ACTION(0, INPUT_SCRIPT_PAD_RIGHT, 1)
    controls.DISABLE_CONTROL_ACTION(0, INPUT_VEH_FLY_YAW_RIGHT, 1)
    controls.DISABLE_CONTROL_ACTION(0, INPUT_VEH_PASSENGER_AIM, 1)
    
    if controls.IS_DISABLED_CONTROL_JUST_RELEASED(0, INPUT_SCRIPT_PAD_RIGHT) == 1 then
      weapon_index = weapon_index + 1
      if weapon_index > #weapons then weapon_index = 1 end
      weapon_hash = gameplay.GET_HASH_KEY(weapons[weapon_index])
    end
    
    if controls.IS_DISABLED_CONTROL_PRESSED(0, INPUT_VEH_MOVE_DOWN_ONLY) == 1 then
      local start_vector = Vector(0,0,0)
      start_vector.x = 0.6826
      start_vector.y = 1.6707
      start_vector.z = 0.3711
      
      local end_vector = Vector(0,0,0)
      end_vector.x = start_vector.x
      end_vector.y = start_vector.y + 10
      end_vector.z = start_vector.z - 0.1
      

      local offset_1 = entity.GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(player.PLAYER_PED_ID(), start_vector.x, start_vector.y, start_vector.z)
      local offset_2 = entity.GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(player.PLAYER_PED_ID(), end_vector.x, end_vector.y, end_vector.z)

      gameplay.SHOOT_SINGLE_BULLET_BETWEEN_COORDS(offset_1.x, offset_1.y, offset_1.z, offset_2.x, offset_2.y, offset_2.z, 15, 1, weapon_hash, player.PLAYER_PED_ID(), 1, 1, -1)
      offset_1.z = offset_1.z + 0.2
      offset_2.z = offset_2.z + 0.2
      gameplay.SHOOT_SINGLE_BULLET_BETWEEN_COORDS(offset_1.x, offset_1.y, offset_1.z, offset_2.x, offset_2.y, offset_2.z, 15, 1, weapon_hash, player.PLAYER_PED_ID(), 1, 1, -1)

      graphics._SET_PTFX_LOAD_NAME("scr_carsteal4")
      graphics.START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_car_muzzle_flash", vehicle_id, start_vector.x, start_vector.y, start_vector.z, 0, 0, 90, 1.0, 0, 0, 0) 

      graphics._SET_PTFX_LOAD_NAME("scr_carsteal4")
      graphics.START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal5_car_muzzle_flash", vehicle_id, start_vector.x - 1.35, start_vector.y, start_vector.z, 0, 0, 90, 1.0, 0, 0, 0) 
      
      if player.IS_PLAYER_PLAYING(player.PLAYER_ID()) == 1 then
        if player.IS_SPECIAL_ABILITY_ACTIVE(player.PLAYER_ID()) == 1 then
          audio.PLAY_SOUND_FROM_COORD(-1, "FRANKLIN_GUN_MASTER", offset_1.x, offset_1.y, offset_1.z, 0, 0, 0, 0)
        else
          audio.PLAY_SOUND_FROM_COORD(-1, "JB700_GUN_PLAYER_MASTER", offset_1.x, offset_1.y, offset_1.z, 0, 0, 0, 0)
        end
      end
    end
  end
end

function OnDrawTick()
end

function Initialize()
end