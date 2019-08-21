SootopolisCity_MysteryEventsHouse_1F_MapScripts:: @ 8227953
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_1F_MapScript2_22799D
	.byte 0

SootopolisCity_MysteryEventsHouse_1F_OnTransition: @ 822795E
	setvar VAR_0x8004, 16
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_22797D
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
	call_if_ne SootopolisCity_MysteryEventsHouse_1F_EventScript_227991
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_22797D:: @ 822797D
	setvar VAR_TEMP_1, 1
	setobjectxyperm 1, 3, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F_STAIRS_UNBLOCKED
	return

SootopolisCity_MysteryEventsHouse_1F_EventScript_227991:: @ 8227991
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

SootopolisCity_MysteryEventsHouse_1F_MapScript2_22799D: @ 822799D
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_2279B7
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2, SootopolisCity_MysteryEventsHouse_1F_EventScript_2279B7
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3, SootopolisCity_MysteryEventsHouse_1F_EventScript_2279B7
	.2byte 0

SootopolisCity_MysteryEventsHouse_1F_EventScript_2279B7:: @ 82279B7
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_227A1F
	waitmovement 0
	applymovement 1, SootopolisCity_MysteryEventsHouse_1F_Movement_227A21
	waitmovement 0
	copyobjectxytoperm 1
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227A04
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227A0D
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227A16
	special LoadPlayerParty
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
	releaseall
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_227A04:: @ 8227A04
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227DB8, MSGBOX_DEFAULT
	return

SootopolisCity_MysteryEventsHouse_1F_EventScript_227A0D:: @ 8227A0D
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227E03, MSGBOX_DEFAULT
	return

SootopolisCity_MysteryEventsHouse_1F_EventScript_227A16:: @ 8227A16
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227D5B, MSGBOX_DEFAULT
	return

SootopolisCity_MysteryEventsHouse_1F_Movement_227A1F: @ 8227A1F
	walk_down
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_227A21: @ 8227A21
	walk_right
	walk_in_place_fastest_down
	step_end

SootopolisCity_MysteryEventsHouse_1F_EventScript_227A24:: @ 8227A24
	lock
	faceplayer
	setvar VAR_0x8004, 16
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227A4E
	compare VAR_TEMP_1, 1
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227A58
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227B46, MSGBOX_DEFAULT
	release
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_227A4E:: @ 8227A4E
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227B46, MSGBOX_DEFAULT
	release
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_227A58:: @ 8227A58
	special SavePlayerParty
	special BufferEReaderTrainerName
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227BFC, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227AE2
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_227AEF
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227AE2
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227CEB, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227AE2
	special LoadPlayerParty
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227AE2
	special SavePlayerParty
	special ReducePlayerPartyToSelectedMons
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227D21, MSGBOX_DEFAULT
	closemessage
	compare VAR_FACING, 2
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227AFE
	compare VAR_FACING, 4
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227B10
	compare VAR_FACING, 3
	call_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_227B22
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, 255, 3, 1
	waitstate
	release
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_227AE2:: @ 8227AE2
	special LoadPlayerParty
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227C44, MSGBOX_DEFAULT
	release
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_227AEF:: @ 8227AEF
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_227C84, MSGBOX_DEFAULT
	fadescreen 1
	special ChooseHalfPartyForBattle
	waitstate
	return

SootopolisCity_MysteryEventsHouse_1F_EventScript_227AFE:: @ 8227AFE
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_227B40
	applymovement EVENT_OBJ_ID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_227B34
	waitmovement 0
	return

SootopolisCity_MysteryEventsHouse_1F_EventScript_227B10:: @ 8227B10
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_227B43
	applymovement EVENT_OBJ_ID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_227B38
	waitmovement 0
	return

SootopolisCity_MysteryEventsHouse_1F_EventScript_227B22:: @ 8227B22
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_227B40
	applymovement EVENT_OBJ_ID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_227B3C
	waitmovement 0
	return

SootopolisCity_MysteryEventsHouse_1F_Movement_227B34: @ 8227B34
	delay_16
	walk_up
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_227B38: @ 8227B38
	delay_16
	walk_right
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_227B3C: @ 8227B3C
	delay_16
	walk_left
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_227B40: @ 8227B40
	walk_left
	walk_in_place_fastest_right
	step_end

SootopolisCity_MysteryEventsHouse_1F_Movement_227B43: @ 8227B43
	walk_right
	walk_in_place_fastest_left
	step_end

SootopolisCity_MysteryEventsHouse_1F_Text_227B46: @ 8227B46
	.i18n 4724

SootopolisCity_MysteryEventsHouse_1F_Text_227BDD: @ 8227BDD
	.i18n 4725

SootopolisCity_MysteryEventsHouse_1F_Text_227BFC: @ 8227BFC
	.i18n 4726

SootopolisCity_MysteryEventsHouse_1F_Text_227C44: @ 8227C44
	.i18n 4727

SootopolisCity_MysteryEventsHouse_1F_Text_227C84: @ 8227C84
	.i18n 4728

SootopolisCity_MysteryEventsHouse_1F_Text_227CEB: @ 8227CEB
	.i18n 4729

SootopolisCity_MysteryEventsHouse_1F_Text_227D21: @ 8227D21
	.i18n 4730

SootopolisCity_MysteryEventsHouse_1F_Text_227D3D: @ 8227D3D
	.i18n 4731

SootopolisCity_MysteryEventsHouse_B1F_Text_227D40: @ 8227D40
	.i18n 4732

SootopolisCity_MysteryEventsHouse_1F_Text_227D5B: @ 8227D5B
	.i18n 4733

SootopolisCity_MysteryEventsHouse_1F_Text_227DB5: @ 8227DB5
	.i18n 4734

SootopolisCity_MysteryEventsHouse_1F_Text_227DB8: @ 8227DB8
	.i18n 4735

SootopolisCity_MysteryEventsHouse_1F_Text_227E00: @ 8227E00
	.i18n 4736

SootopolisCity_MysteryEventsHouse_1F_Text_227E03: @ 8227E03
	.i18n 4737

