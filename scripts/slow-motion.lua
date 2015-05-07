require 'keycodes'

local smt_toggle_key_code = 89

local smt_time_scale = .1
local smt_aim_time_scale = .15
local smt_vehicle_time_scale = .25
local smt_multi_time_scale = false -- Whether to use different time scales when in vehicles and when aiming

local smt_smooth_transition = true -- Whether to use a transition when changing time
local smt_transition_speed = .05

local slowMotionToggle = {}
local justToggled = false

local active = false
local currentTimeScale = 1

--- original author: sakratt

function ApplyForceToEntity(ped_id, x, y)
  entity.APPLY_FORCE_TO_ENTITY(ped_id, 1, 0, x,y ,0,0,0,0,1,1,1,0,1)
end

function OnScriptTick()
	local player_ped = player.PLAYER_PED_ID()
	if not entity.DOES_ENTITY_EXIST(player_ped) then return end

	if gui.KeyPressed(KEY_J) then
	  player.SET_PLAYER_INVINCIBLE(player.PLAYER_ID(), 1)
	  ai.CLEAR_PED_TASKS(player.PLAYER_PED_ID())
      ped.SET_PED_TO_RAGDOLL_WITH_FALL(player.PLAYER_PED_ID(), 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0)
	  ApplyForceToEntity(player.PLAYER_PED_ID(), 0, 10)
	end
	
	if gui.KeyPressed(KEY_S) then
		if not justToggled then
			active = not active
		end
		justToggled = true
	else
		justToggled = false
	end
	
	local targetTimeScale = 1
	if active then
		targetTimeScale = smt_time_scale
		if smt_multi_time_scale then
			if player.IS_PLAYER_FREE_AIMING(player_ped) then
				targetTimeScale = smt_aim_time_scale
			elseif ped.IS_PED_IN_ANY_VEHICLE(player_ped, false) then
				targetTimeScale = smt_vehicle_time_scale
			end
		end	
	end

	if smt_smooth_transition then
		if active then
			if currentTimeScale > targetTimeScale then
				currentTimeScale = currentTimeScale - smt_transition_speed
				if currentTimeScale < targetTimeScale then
					currentTimeScale = targetTimeScale
					slowDown = false
				end
			end
		else
			if currentTimeScale < targetTimeScale then
				currentTimeScale = currentTimeScale + smt_transition_speed
				if currentTimeScale > targetTimeScale then
					currentTimeScale = targetTimeScale
				end
			end
		end
	else
		currentTimeScale = targetTimeScale
	end
	
	gameplay.SET_TIME_SCALE(currentTimeScale)
	
end

function OnDrawTick()
end

function Initialize()
end