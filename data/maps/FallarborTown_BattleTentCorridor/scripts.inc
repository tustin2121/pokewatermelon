FallarborTown_BattleTentCorridor_MapScripts:: @ 82006A7
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentCorridor_MapScript2_2006AD
	.byte 0

FallarborTown_BattleTentCorridor_MapScript2_2006AD: @ 82006AD
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentCorridor_EventScript_2006B7
	.2byte 0

FallarborTown_BattleTentCorridor_EventScript_2006B7:: @ 82006B7
	lockall
	setvar VAR_TEMP_0, 1
	applymovement 1, FallarborTown_BattleTentCorridor_Movement_2006FB
	applymovement EVENT_OBJ_ID_PLAYER, FallarborTown_BattleTentCorridor_Movement_2006FB
	waitmovement 0
	opendoor 2, 1
	waitdooranim
	applymovement 1, FallarborTown_BattleTentCorridor_Movement_200701
	applymovement EVENT_OBJ_ID_PLAYER, FallarborTown_BattleTentCorridor_Movement_200700
	waitmovement 0
	closedoor 2, 1
	waitdooranim
	setvar VAR_0x8006, 0
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM, 255, 4, 4
	waitstate
	releaseall
	end

FallarborTown_BattleTentCorridor_Movement_2006FB: @ 82006FB
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

FallarborTown_BattleTentCorridor_Movement_200700: @ 8200700
	walk_up

FallarborTown_BattleTentCorridor_Movement_200701: @ 8200701
	walk_up
	set_invisible
	step_end

FallarborTown_BattleTentCorridor_Text_200704: @ 8200704
	.i18n 2220

FallarborTown_BattleTentCorridor_Text_200791: @ 8200791
	.i18n 2221

FallarborTown_BattleTentCorridor_Text_200802: @ 8200802
	.i18n 2222

FallarborTown_BattleTentCorridor_Text_200876: @ 8200876
	.i18n 2223

