local MAX_PLAYERS = 32
local player_count = 0
local head_ups = {}

local flags = {
  NAME = 0,
  BIG_BAR = 1,
  HEALTH_BAR = 2,
  WIFI_SIGNAL = 4,
  FLAG = 5,
  FORBIDDEN = 6,
  STAR = 7,
  STEERING_WHEEL = 8,
  HEADSET = 9,
  DOT = 10,
  WHITE_NAME = 11,
  DOWN_ARROW = 12,
  BRIEFCASE = 13,
  PERSON = 14,
  RANK = 15,
  TALKING = 16
}

function OnScriptTick()
  for head_i,head_display in pairs(head_ups) do
    if ui._IS_HEAD_DISPLAY_ID_VALID(head_display.id) == 0 then
      table.remove(head_ups, head_i)
    else
      ui._SET_HEAD_DISPLAY_STRING(head_display.id, head_display.player_name)
      ui._SET_HEAD_DISPLAY_FLAG(head_display.id, flags.NAME, 1)
      ui._SET_HEAD_DISPLAY_FLAG(head_display.id, flags.HEALTH_BAR, 1)
    end
  end

  
  for i = 0, MAX_PLAYERS, 1 do
    if player.GET_PLAYER_PED(i) > 0 then
      
      local ped_id = player.GET_PLAYER_PED(i)
      
      if ui.GET_BLIP_FROM_ENTITY(ped_id) == 0 and ped_id ~= player.PLAYER_PED_ID() then
        local head_display_id = ui._CREATE_PED_HEAD_DISPLAY(ped_id, "", 0, 0, "", 0)
        if ui._IS_HEAD_DISPLAY_ID_VALID(head_display_id) == 1 then
          table.insert(head_ups, { id = head_display_id, player_name = player.GET_PLAYER_NAME(i) })
        end
      
        if ped_id ~= player.PLAYER_PED_ID() then
          local blip_id = ui.ADD_BLIP_FOR_ENTITY(ped_id)
          gui.AddLog("blip_id " .. blip_id)
          ui.SET_BLIP_SPRITE(blip_id, 1)
          ui.SET_BLIP_SCALE(blip_id, 1)
          ui.SET_BLIP_PRIORITY(blip_id, 13)
          ui.SET_BLIP_NAME_TO_PLAYER_NAME(blip_id, i)
          ui.SET_BLIP_ALPHA(blip_id, 255)
        end
      end
    end
  end
end

function OnDrawTick()
end

function Initialize()

end