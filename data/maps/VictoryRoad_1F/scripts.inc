VictoryRoad_1F_MapScripts:: @ 8235D7A
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
	.byte 0

VictoryRoad_1F_OnTransition: @ 8235D80
	compare VAR_VICTORY_ROAD_1F_STATE, 1
	call_if_eq VictoryRoad_1F_EventScript_235D97
	compare VAR_VICTORY_ROAD_1F_STATE, 2
	call_if_eq VictoryRoad_1F_EventScript_235DA3
	end

VictoryRoad_1F_EventScript_235D97:: @ 8235D97
	setobjectxyperm 4, 2, 24
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_235DA3:: @ 8235DA3
	setobjectxyperm 4, 3, 24
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_235DAF:: @ 8235DAF
	lockall
	setvar VAR_0x8008, 1
	addobject 4
	applymovement 4, VictoryRoad_1F_Movement_235E15
	waitmovement 0
	goto VictoryRoad_1F_EventScript_235DE1
	end

VictoryRoad_1F_EventScript_235DC8:: @ 8235DC8
	lockall
	setvar VAR_0x8008, 2
	addobject 4
	applymovement 4, VictoryRoad_1F_Movement_235E21
	waitmovement 0
	goto VictoryRoad_1F_EventScript_235DE1
	end

VictoryRoad_1F_EventScript_235DE1:: @ 8235DE1
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox VictoryRoad_1F_Text_235EE6, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_1, VictoryRoad_1F_Text_235FFC
	msgbox VictoryRoad_1F_Text_236020, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	copyobjectxytoperm 4
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
	releaseall
	end

VictoryRoad_1F_Movement_235E15: @ 8235E15
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

VictoryRoad_1F_Movement_235E21: @ 8235E21
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

VictoryRoad_1F_EventScript_235E2C:: @ 8235E2C
	msgbox VictoryRoad_1F_Text_236020, MSGBOX_NPC
	end

VictoryRoad_1F_EventScript_235E35:: @ 8235E35
	trainerbattle_single TRAINER_WALLY_3, VictoryRoad_1F_Text_236073, VictoryRoad_1F_Text_2360DA
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq VictoryRoad_1F_EventScript_235E5C
	msgbox VictoryRoad_1F_Text_2360FE, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_235E5C:: @ 8235E5C
	trainerbattle_rematch TRAINER_WALLY_3, VictoryRoad_1F_Text_236073, VictoryRoad_1F_Text_2360DA
	msgbox VictoryRoad_1F_Text_2360FE, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_235E73:: @ 8235E73
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_236184, VictoryRoad_1F_Text_2361CB
	msgbox VictoryRoad_1F_Text_2361E5, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_235E8A:: @ 8235E8A
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_236248, VictoryRoad_1F_Text_236290
	msgbox VictoryRoad_1F_Text_2362A4, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_235EA1:: @ 8235EA1
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_2362EE, VictoryRoad_1F_Text_236336
	msgbox VictoryRoad_1F_Text_236356, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_235EB8:: @ 8235EB8
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_236390, VictoryRoad_1F_Text_2363C4
	msgbox VictoryRoad_1F_Text_2363D5, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_235ECF:: @ 8235ECF
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_236468, VictoryRoad_1F_Text_2364A7
	msgbox VictoryRoad_1F_Text_2364BB, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_Text_235EE6: @ 8235EE6
	.i18n 4819

VictoryRoad_1F_Text_235FFC: @ 8235FFC
	.i18n 4820

VictoryRoad_1F_Text_236020: @ 8236020
	.i18n 4821

VictoryRoad_1F_Text_236073: @ 8236073
	.i18n 4822

VictoryRoad_1F_Text_2360DA: @ 82360DA
	.i18n 4823

VictoryRoad_1F_Text_2360FE: @ 82360FE
	.i18n 4824

VictoryRoad_1F_Text_236184: @ 8236184
	.i18n 4825

VictoryRoad_1F_Text_2361CB: @ 82361CB
	.i18n 4826

VictoryRoad_1F_Text_2361E5: @ 82361E5
	.i18n 4827

VictoryRoad_1F_Text_236248: @ 8236248
	.i18n 4828

VictoryRoad_1F_Text_236290: @ 8236290
	.i18n 4829

VictoryRoad_1F_Text_2362A4: @ 82362A4
	.i18n 4830

VictoryRoad_1F_Text_2362EE: @ 82362EE
	.i18n 4831

VictoryRoad_1F_Text_236336: @ 8236336
	.i18n 4832

VictoryRoad_1F_Text_236356: @ 8236356
	.i18n 4833

VictoryRoad_1F_Text_236390: @ 8236390
	.i18n 4834

VictoryRoad_1F_Text_2363C4: @ 82363C4
	.i18n 4835

VictoryRoad_1F_Text_2363D5: @ 82363D5
	.i18n 4836

VictoryRoad_1F_Text_236468: @ 8236468
	.i18n 4837

VictoryRoad_1F_Text_2364A7: @ 82364A7
	.i18n 4838

VictoryRoad_1F_Text_2364BB: @ 82364BB
	.i18n 4839
