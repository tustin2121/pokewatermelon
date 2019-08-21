BattleFrontier_BattlePyramidTop_MapScripts:: @ 82550A1
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_MapScript1_2550F4
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_MapScript2_25516E
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_MapScript1_2550B6
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_MapScript2_2550CE
	.byte 0

BattleFrontier_BattlePyramidTop_MapScript1_2550B6: @ 82550B6
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 200
	setvar VAR_0x8006, 0
	special CallBattlePyramidFunction
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidTop_MapScript2_2550CE: @ 82550CE
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_2550D8
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_2550D8:: @ 82550D8
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	compare VAR_TEMP_C, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_2550F3
	setobjectxyperm 2, 0, 0

BattleFrontier_BattlePyramidTop_EventScript_2550F3:: @ 82550F3
	end

BattleFrontier_BattlePyramidTop_MapScript1_2550F4: @ 82550F4
	setvar VAR_0x8004, 9
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_25510C
	call BattleFrontier_BattlePyramidTop_EventScript_242170

BattleFrontier_BattlePyramidTop_EventScript_25510C:: @ 825510C
	copyvar VAR_TEMP_C, VAR_RESULT
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	switch VAR_TEMP_0
	case 0, BattleFrontier_BattlePyramidTop_EventScript_255193
	case 1, BattleFrontier_BattlePyramidTop_EventScript_252B66
	case 2, BattleFrontier_BattlePyramidTop_EventScript_255193
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 5
	special CallFrontierUtilFunc
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	compare VAR_RESULT, 3
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	compare VAR_RESULT, 9
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	end

BattleFrontier_BattlePyramidTop_MapScript2_25516E: @ 825516E
	map_script_2 VAR_TEMP_E, 0, BattleFrontier_BattlePyramidTop_EventScript_255180
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_25518A
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_255180:: @ 8255180
	playbgm MUS_PYRAMID_TOP, 0
	setvar VAR_TEMP_E, 1
	end

BattleFrontier_BattlePyramidTop_EventScript_25518A:: @ 825518A
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidTop_EventScript_255193:: @ 8255193
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 1
	special CallBattlePyramidFunction
	special SavePlayerParty
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 9
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidTop_EventScript_2551D0:: @ 82551D0
	lock
	faceplayer
	compare VAR_TEMP_D, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_255236
	compare VAR_TEMP_C, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_255240
	msgbox BattleFrontier_BattlePyramidTop_Text_255410, MSGBOX_DEFAULT
	closemessage
	applymovement 1, BattleFrontier_BattlePyramidTop_Movement_2553FD
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_255403
	waitmovement 0
	applymovement 1, BattleFrontier_BattlePyramidTop_Movement_255400
	waitmovement 0
	message BattleFrontier_BattlePyramidTop_Text_2554E8
	waitmessage
	playfanfare MUS_ME_POINTGET
	waitfanfare
	closemessage

BattleFrontier_BattlePyramidTop_EventScript_25521A:: @ 825521A
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 3
	special CallFrontierUtilFunc
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 255, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidTop_EventScript_255236:: @ 8255236
	msgbox BattleFrontier_BattlePyramidTop_Text_255BFE, MSGBOX_DEFAULT
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_255240:: @ 8255240
	msgbox BattleFrontier_BattlePyramidTop_Text_25551F, MSGBOX_DEFAULT
	applymovement 1, BattleFrontier_BattlePyramidTop_Movement_2553FD
	setvar VAR_TEMP_D, 1
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_255256:: @ 8255256
	lockall
	switch VAR_TEMP_C
	case 2, BattleFrontier_BattlePyramidTop_EventScript_255335
	case 3, BattleFrontier_BattlePyramidTop_EventScript_2552D0
	case 4, BattleFrontier_BattlePyramidTop_EventScript_255388
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 7
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_2552D0
	special SpawnCameraObject
	applymovement EVENT_OBJ_ID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_25540C
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_255669, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 7
	special CallFrontierUtilFunc
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_25573E, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_2552DA
	end

BattleFrontier_BattlePyramidTop_EventScript_2552D0:: @ 82552D0
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0

BattleFrontier_BattlePyramidTop_EventScript_2552DA:: @ 82552DA
	msgbox BattleFrontier_BattlePyramidTop_Text_255846, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidTop_EventScript_2553ED
	playbgm MUS_PYRAMID_TOP, 0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_2552FB
	goto BattleFrontier_BattlePyramidTop_EventScript_252B42

BattleFrontier_BattlePyramidTop_EventScript_2552FB:: @ 82552FB
	setvar VAR_0x8004, 12
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_25521A
	msgbox BattleFrontier_BattlePyramidTop_Text_255873, MSGBOX_DEFAULT
	playfanfare MUS_ME_SYMBOLGET
	message BattleFrontier_BattlePyramidTop_Text_2558E9
	waitmessage
	waitfanfare
	setvar VAR_0x8004, 13
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePyramidTop_Text_25591D, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_25521A

BattleFrontier_BattlePyramidTop_EventScript_255335:: @ 8255335
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 7
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_255388
	special SpawnCameraObject
	applymovement EVENT_OBJ_ID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_25540C
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_255951, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 7
	special CallFrontierUtilFunc
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_255A6D, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_255392
	end

BattleFrontier_BattlePyramidTop_EventScript_255388:: @ 8255388
	applymovement 2, BattleFrontier_BattlePyramidTop_Movement_25540A
	waitmovement 0

BattleFrontier_BattlePyramidTop_EventScript_255392:: @ 8255392
	msgbox BattleFrontier_BattlePyramidTop_Text_255AA1, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidTop_EventScript_2553ED
	playbgm MUS_PYRAMID_TOP, 0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_2553B3
	goto BattleFrontier_BattlePyramidTop_EventScript_252B42

BattleFrontier_BattlePyramidTop_EventScript_2553B3:: @ 82553B3
	setvar VAR_0x8004, 12
	special CallFrontierUtilFunc
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_25521A
	msgbox BattleFrontier_BattlePyramidTop_Text_255ACD, MSGBOX_DEFAULT
	playfanfare MUS_ME_SYMBOLGET
	message BattleFrontier_BattlePyramidTop_Text_255B59
	waitmessage
	waitfanfare
	setvar VAR_0x8004, 13
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePyramidTop_Text_255B82, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_25521A

BattleFrontier_BattlePyramidTop_EventScript_2553ED:: @ 82553ED
	closemessage
	setvar VAR_0x8004, SPECIAL_BATTLE_PYRAMID
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	return

BattleFrontier_BattlePyramidTop_Movement_2553FD: @ 82553FD
	walk_right
	walk_in_place_fastest_left
	step_end

BattleFrontier_BattlePyramidTop_Movement_255400: @ 8255400
	walk_left
	walk_in_place_fastest_up
	step_end

BattleFrontier_BattlePyramidTop_Movement_255403: @ 8255403
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

BattleFrontier_BattlePyramidTop_Movement_25540A: @ 825540A
	walk_fast_down
	step_end

BattleFrontier_BattlePyramidTop_Movement_25540C: @ 825540C
	walk_slow_up
	walk_slow_up
	delay_16
	step_end

BattleFrontier_BattlePyramidTop_Text_255410: @ 8255410
	.i18n 1302

BattleFrontier_BattlePyramidTop_Text_2554E8: @ 82554E8
	.i18n 1303

BattleFrontier_BattlePyramidTop_Text_25551F: @ 825551F
	.i18n 1304

BattleFrontier_BattlePyramidTop_Text_255669: @ 8255669
	.i18n 1305

BattleFrontier_BattlePyramidTop_Text_25573E: @ 825573E
	.i18n 1306

BattleFrontier_BattlePyramidTop_Text_255846: @ 8255846
	.i18n 1307

BattleFrontier_BattlePyramidTop_Text_255873: @ 8255873
	.i18n 1308

BattleFrontier_BattlePyramidTop_Text_2558E9: @ 82558E9
	.i18n 1309

BattleFrontier_BattlePyramidTop_Text_25591D: @ 825591D
	.i18n 1310

BattleFrontier_BattlePyramidTop_Text_255951: @ 8255951
	.i18n 1311

BattleFrontier_BattlePyramidTop_Text_255A6D: @ 8255A6D
	.i18n 1312

BattleFrontier_BattlePyramidTop_Text_255AA1: @ 8255AA1
	.i18n 1313

BattleFrontier_BattlePyramidTop_Text_255ACD: @ 8255ACD
	.i18n 1314

BattleFrontier_BattlePyramidTop_Text_255B59: @ 8255B59
	.i18n 1315

BattleFrontier_BattlePyramidTop_Text_255B82: @ 8255B82
	.i18n 1316

BattleFrontier_BattlePyramidTop_Text_255BFE: @ 8255BFE
	.i18n 1317

