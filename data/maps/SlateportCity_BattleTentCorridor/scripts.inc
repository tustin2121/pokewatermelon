SlateportCity_BattleTentCorridor_MapScripts:: @ 8208E26
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentCorridor_MapScript2_208E5B
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentCorridor_MapScript2_208E31
	.byte 0

SlateportCity_BattleTentCorridor_MapScript2_208E31: @ 8208E31
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentCorridor_EventScript_208E3B
	.2byte 0

SlateportCity_BattleTentCorridor_EventScript_208E3B:: @ 8208E3B
	setvar VAR_TEMP_1, 1
	compare VAR_0x8006, 1
	goto_if_ne SlateportCity_BattleTentCorridor_EventScript_208E56
	setobjectxy 1, 2, 2
	turnobject 1, 1

SlateportCity_BattleTentCorridor_EventScript_208E56:: @ 8208E56
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

SlateportCity_BattleTentCorridor_MapScript2_208E5B: @ 8208E5B
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentCorridor_EventScript_208E65
	.2byte 0

SlateportCity_BattleTentCorridor_EventScript_208E65:: @ 8208E65
	compare VAR_0x8006, 1
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_208EEE
	setvar VAR_TEMP_0, 1
	applymovement 1, SlateportCity_BattleTentCorridor_Movement_209062
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_BattleTentCorridor_Movement_209059
	waitmovement 0
	compare VAR_0x8006, 2
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_209044
	setvar VAR_0x8004, 9
	special sub_81B9D08
	setvar VAR_0x8004, 8
	special sub_81B9D08
	msgbox SlateportCity_BattleTentCorridor_Text_25A1C8, MSGBOX_DEFAULT
	fadescreen 1
	setvar VAR_0x8004, 6
	special sub_81B9D08
	waitstate

SlateportCity_BattleTentCorridor_EventScript_208EB4:: @ 8208EB4
	msgbox SlateportCity_BattleTentCorridor_Text_25AB96, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceUp
	waitmovement 0
	opendoor 2, 1
	waitdooranim
	applymovement 1, SlateportCity_BattleTentCorridor_Movement_209068
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_BattleTentCorridor_Movement_20905E
	waitmovement 0
	closedoor 2, 1
	waitdooranim
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 255, 4, 4
	waitstate
	end

SlateportCity_BattleTentCorridor_EventScript_208EEE:: @ 8208EEE
	setvar VAR_0x8004, 9
	special CallBattleFactoryFunction
	setvar VAR_0x8004, 16
	special CallBattleFactoryFunction
	msgbox SlateportCity_BattleTentCorridor_Text_25A22D, MSGBOX_DEFAULT
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty

SlateportCity_BattleTentCorridor_EventScript_208F0D:: @ 8208F0D
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	call_if_eq SlateportCity_BattleTentCorridor_EventScript_209014
	compare VAR_RESULT, 2
	call_if_eq SlateportCity_BattleTentCorridor_EventScript_20901B
	multichoice 20, 6, 104, 1
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentCorridor_EventScript_208FBB
	case 1, SlateportCity_BattleTentCorridor_EventScript_208F5B
	case 2, SlateportCity_BattleTentCorridor_EventScript_208F89

SlateportCity_BattleTentCorridor_EventScript_208F5B:: @ 8208F5B
	msgbox SlateportCity_BattleTentCorridor_Text_25A350, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentCorridor_EventScript_208F0D
	case 1, SlateportCity_BattleTentCorridor_EventScript_209022
	case 127, SlateportCity_BattleTentCorridor_EventScript_208F0D

SlateportCity_BattleTentCorridor_EventScript_208F89:: @ 8208F89
	message SlateportCity_BattleTentCorridor_Text_25A37A
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, SlateportCity_BattleTentCorridor_EventScript_208F0D
	case 0, SlateportCity_BattleTentCorridor_EventScript_209A1B
	case 127, SlateportCity_BattleTentCorridor_EventScript_208F0D

SlateportCity_BattleTentCorridor_EventScript_208FBB:: @ 8208FBB
	setvar VAR_0x8004, 8
	special sub_81B9D08
	msgbox SlateportCity_BattleTentCorridor_Text_25AB2E, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentCorridor_EventScript_208EB4
	case 1, SlateportCity_BattleTentCorridor_EventScript_208FF1
	case 127, SlateportCity_BattleTentCorridor_EventScript_208EB4

SlateportCity_BattleTentCorridor_EventScript_208FF1:: @ 8208FF1
	fadescreen 1
	setvar VAR_0x8004, 7
	special sub_81B9D08
	waitstate
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_208EB4
	msgbox SlateportCity_BattleTentCorridor_Text_25AB6C, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentCorridor_EventScript_208EB4

SlateportCity_BattleTentCorridor_EventScript_209014:: @ 8209014
	message SlateportCity_BattleTentCorridor_Text_25A263
	waitmessage
	return

SlateportCity_BattleTentCorridor_EventScript_20901B:: @ 820901B
	message SlateportCity_BattleTentCorridor_Text_25A289
	waitmessage
	return

SlateportCity_BattleTentCorridor_EventScript_209022:: @ 8209022
	message SlateportCity_BattleTentCorridor_Text_25ABAE
	waitmessage
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 2
	special sub_81B9D08
	playse SE_SAVE
	waitse
	fadescreen 1
	setvar VAR_0x8004, 4
	special CallFrontierUtilFunc
	end

SlateportCity_BattleTentCorridor_EventScript_209044:: @ 8209044
	special SavePlayerParty
	setvar VAR_0x8004, 10
	setvar VAR_0x8005, 0
	special CallBattleFactoryFunction
	goto SlateportCity_BattleTentCorridor_EventScript_208F0D

SlateportCity_BattleTentCorridor_Movement_209059: @ 8209059
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SlateportCity_BattleTentCorridor_Movement_20905E: @ 820905E
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_BattleTentCorridor_Movement_209062: @ 8209062
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

SlateportCity_BattleTentCorridor_Movement_209068: @ 8209068
	walk_up
	set_invisible
	step_end

SlateportCity_BattleTentCorridor_Text_20906B: @ 820906B
	.i18n 4441

SlateportCity_BattleTentCorridor_Text_20917A: @ 820917A
	.i18n 4442

SlateportCity_BattleTentCorridor_Text_2091DC: @ 82091DC
	.i18n 4443

SlateportCity_BattleTentCorridor_Text_209322: @ 8209322
	.i18n 4444

SlateportCity_BattleTentCorridor_Text_2093ED: @ 82093ED
	.i18n 4445

SlateportCity_BattleTentCorridor_Text_2094A1: @ 82094A1
	.i18n 4446

SlateportCity_BattleTentCorridor_Text_20954E: @ 820954E
	.i18n 4447

SlateportCity_BattleTentCorridor_Text_209579: @ 8209579
	.i18n 4448

SlateportCity_BattleTentCorridor_Text_2095F1: @ 82095F1
	.i18n 4449

SlateportCity_BattleTentCorridor_Text_209718: @ 8209718
	.i18n 4450

SlateportCity_BattleTentCorridor_Text_209775: @ 8209775
	.i18n 4451

SlateportCity_BattleTentCorridor_Text_2097F6: @ 82097F6
	.i18n 4452

SlateportCity_BattleTentCorridor_Text_209890: @ 8209890
	.i18n 4453

SlateportCity_BattleTentCorridor_Text_2098E6: @ 82098E6
	.i18n 4454

SlateportCity_BattleTentCorridor_Text_20993D: @ 820993D
	.i18n 4455

