LittlerootTown_BrendansHouse_1F_MapScripts:: @ 81F7755
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_MapScript1_1F7765
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_MapScript1_1F77A4
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScript2_1F77EA
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScript1_1F7765: @ 81F7765
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	call_if_lt LittlerootTown_BrendansHouse_1F_EventScript_1F777A
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_1F778D
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F777A:: @ 81F777A
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, 1
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, 1
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F778D:: @ 81F778D
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F779A
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F779A:: @ 81F779A
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, 1
	return

LittlerootTown_BrendansHouse_1F_MapScript1_1F77A4: @ 81F77A4
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F77DE
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F77C6
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F77D2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F77C6:: @ 81F77C6
	setobjectxyperm 1, 8, 4
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F77D2:: @ 81F77D2
	setobjectxyperm 1, 4, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F77DE:: @ 81F77DE
	setobjectxyperm 1, 9, 8
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_MapScript2_1F77EA: @ 81F77EA
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_1F783C
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_1F7814
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_1F784D
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE, 1, LittlerootTown_BrendansHouse_1F_EventScript_1F785E
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_292AF2
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_1F7814:: @ 81F7814
	lockall
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F7B67, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_1F783A
	applymovement 1, LittlerootTown_BrendansHouse_1F_Movement_1F783A
	waitmovement 0
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 255, 7, 1
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_1F783A: @ 81F783A
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_1F783C:: @ 81F783C
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_292704
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F784D:: @ 81F784D
	lockall
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	goto LittlerootTown_BrendansHouse_1F_EventScript_29286D
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F785E:: @ 81F785E
	lockall
	playse SE_PIN
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Common_Movement_Delay48
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	applymovement 4, LittlerootTown_BrendansHouse_1F_Movement_1F789C
	waitmovement 0
	special GetRivalSonDaughterString
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F8BC5, MSGBOX_DEFAULT
	setflag FLAG_MET_RIVAL_MOM
	setvar VAR_LITTLEROOT_HOUSES_STATE, 2
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_1F789C: @ 81F789C
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_1F78A3:: @ 81F78A3
	lockall
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 0
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_292765
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78BE:: @ 81F78BE
	lockall
	setvar VAR_0x8008, 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_1F78E2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78CA:: @ 81F78CA
	lockall
	setvar VAR_0x8008, 1
	goto LittlerootTown_BrendansHouse_1F_EventScript_1F78E2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78D6:: @ 81F78D6
	lockall
	setvar VAR_0x8008, 2
	goto LittlerootTown_BrendansHouse_1F_EventScript_1F78E2
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F78E2:: @ 81F78E2
	playse SE_KAIDAN
	delay 10
	addobject 7
	delay 30
	playse SE_PIN
	applymovement 7, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 7, Common_Movement_Delay48
	waitmovement 0
	compare VAR_0x8008, 1
	call_if_ne LittlerootTown_BrendansHouse_1F_EventScript_1F7981
	playbgm MUS_BOY_SUP, 1
	compare VAR_0x8008, 0
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F798C
	compare VAR_0x8008, 1
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F7997
	compare VAR_0x8008, 2
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F79A2
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F90B4, MSGBOX_DEFAULT
	closemessage
	compare VAR_0x8008, 0
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F79C1
	compare VAR_0x8008, 1
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F79D3
	compare VAR_0x8008, 2
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_1F79E5
	playse SE_KAIDAN
	removeobject 7
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	delay 30
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_1F7981:: @ 81F7981
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F798C:: @ 81F798C
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F79AD
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F7997:: @ 81F7997
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F79B5
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F79A2:: @ 81F79A2
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F79B9
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_1F79AD: @ 81F79AD
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F79B5: @ 81F79B5
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F79B9: @ 81F79B9
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_1F79C1:: @ 81F79C1
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_1F79F7
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F7A06
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F79D3:: @ 81F79D3
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_1F79FB
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F7A0C
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_1F79E5:: @ 81F79E5
	applymovement EVENT_OBJ_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_1F7A02
	applymovement 7, LittlerootTown_BrendansHouse_1F_Movement_1F7A16
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_1F79F7: @ 81F79F7
	delay_16
	delay_8
	walk_in_place_fastest_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F79FB: @ 81F79FB
	delay_16
	delay_8
	walk_in_place_fastest_right
	delay_16
	delay_16
	walk_in_place_fastest_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A02: @ 81F7A02
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A06: @ 81F7A06
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A0C: @ 81F7A0C
	walk_in_place_fastest_right
	walk_right
	walk_in_place_fastest_up
	walk_up
	walk_up
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_1F7A16: @ 81F7A16
	walk_in_place_fastest_left
	walk_left
	walk_in_place_fastest_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Text_1F7A1C: @ 81F7A1C
	.i18n 2724

LittlerootTown_BrendansHouse_1F_Text_1F7A46: @ 81F7A46
	.i18n 2725

LittlerootTown_BrendansHouse_1F_Text_1F7B24: @ 81F7B24
	.i18n 2726

LittlerootTown_BrendansHouse_1F_Text_1F7B67: @ 81F7B67
LittlerootTown_MaysHouse_1F_Text_1F7B67: @ 81F7B67
	.i18n 2727

LittlerootTown_BrendansHouse_1F_Text_1F7B96: @ 81F7B96
	.i18n 2728

LittlerootTown_BrendansHouse_1F_Text_1F7BBC: @ 81F7BBC
LittlerootTown_MaysHouse_1F_Text_1F7BBC: @ 81F7BBC
	.i18n 2729

LittlerootTown_BrendansHouse_1F_Text_1F7BF1: @ 81F7BF1
LittlerootTown_MaysHouse_1F_Text_1F7BF1: @ 81F7BF1
	.i18n 2730

LittlerootTown_BrendansHouse_1F_Text_1F7C35: @ 81F7C35
LittlerootTown_MaysHouse_1F_Text_1F7C35: @ 81F7C35
	.i18n 2731

LittlerootTown_BrendansHouse_1F_Text_1F7CC3: @ 81F7CC3
	.i18n 2732

LittlerootTown_BrendansHouse_1F_Text_1F7CD8: @ 81F7CD8
	.i18n 2733

LittlerootTown_BrendansHouse_1F_Text_1F7D08: @ 81F7D08
	.i18n 2734

LittlerootTown_BrendansHouse_1F_Text_1F7D5C: @ 81F7D5C
	.i18n 2735

LittlerootTown_BrendansHouse_1F_Text_1F7D73: @ 81F7D73
	.i18n 2736

LittlerootTown_BrendansHouse_1F_Text_1F7DBE: @ 81F7DBE
	.i18n 2737

LittlerootTown_BrendansHouse_1F_Text_1F7E0E: @ 81F7E0E
	.i18n 2738

LittlerootTown_BrendansHouse_1F_Text_1F7E89: @ 81F7E89
	.i18n 2739

LittlerootTown_BrendansHouse_1F_Text_1F7EA8: @ 81F7EA8
	.i18n 2740

LittlerootTown_BrendansHouse_1F_Text_1F7EB3: @ 81F7EB3
	.i18n 2741

LittlerootTown_BrendansHouse_1F_Text_1F7EC6: @ 81F7EC6
	.i18n 2742

LittlerootTown_BrendansHouse_1F_Text_1F7F0F: @ 81F7F0F
	.i18n 2743

LittlerootTown_BrendansHouse_1F_Text_1F7F66: @ 81F7F66
	.i18n 2744

LittlerootTown_BrendansHouse_1F_Text_1F800E: @ 81F800E
	.i18n 2745

LittlerootTown_BrendansHouse_1F_Text_1F80FE: @ 81F80FE
	.i18n 2746

LittlerootTown_BrendansHouse_1F_Text_1F815B: @ 81F815B
	.i18n 2747

LittlerootTown_BrendansHouse_1F_Text_1F81B9: @ 81F81B9
	.i18n 2748

LittlerootTown_BrendansHouse_1F_Text_1F824B: @ 81F824B
	.i18n 2749

LittlerootTown_BrendansHouse_1F_Text_1F826F: @ 81F826F
	.i18n 2750

LittlerootTown_BrendansHouse_1F_Text_1F8351: @ 81F8351
	.i18n 2751

LittlerootTown_BrendansHouse_1F_Text_1F83A1: @ 81F83A1
	.i18n 2752
