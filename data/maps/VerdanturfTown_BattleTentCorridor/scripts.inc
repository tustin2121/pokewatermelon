VerdanturfTown_BattleTentCorridor_MapScripts:: @ 820208A
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_MapScript2_202090
	.byte 0

VerdanturfTown_BattleTentCorridor_MapScript2_202090: @ 8202090
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_20209A
	.2byte 0

VerdanturfTown_BattleTentCorridor_EventScript_20209A:: @ 820209A
	lockall
	setvar VAR_TEMP_0, 1
	applymovement 1, VerdanturfTown_BattleTentCorridor_Movement_2020DE
	applymovement EVENT_OBJ_ID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_2020DE
	waitmovement 0
	opendoor 2, 1
	waitdooranim
	applymovement 1, VerdanturfTown_BattleTentCorridor_Movement_2020E4
	applymovement EVENT_OBJ_ID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_2020E3
	waitmovement 0
	closedoor 2, 1
	waitdooranim
	setvar VAR_0x8006, 0
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 255, 6, 5
	waitstate
	releaseall
	end

VerdanturfTown_BattleTentCorridor_Movement_2020DE: @ 82020DE
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

VerdanturfTown_BattleTentCorridor_Movement_2020E3: @ 82020E3
	walk_up

VerdanturfTown_BattleTentCorridor_Movement_2020E4: @ 82020E4
	walk_up
	set_invisible
	step_end

VerdanturfTown_BattleTentCorridor_Text_2020E7: @ 82020E7
	.i18n 4780

VerdanturfTown_BattleTentCorridor_Text_2021C4: @ 82021C4
	.i18n 4781

VerdanturfTown_BattleTentCorridor_Text_202251: @ 8202251
	.i18n 4782

VerdanturfTown_BattleTentCorridor_Text_2022D6: @ 82022D6
	.i18n 4783

