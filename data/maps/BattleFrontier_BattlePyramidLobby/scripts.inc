BattleFrontier_BattlePyramidLobby_MapScripts:: @ 8250716
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_MapScript2_250735
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidLobby_MapScript2_2497FB
	.byte 0

BattleFrontier_BattlePyramidLobby_MapScript2_250721: @ 8250721
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_25072B
	.2byte 0

BattleFrontier_BattlePyramidLobby_EventScript_25072B: @ 825072B
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattlePyramidLobby_MapScript2_250735: @ 8250735
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePyramidLobby_EventScript_25075F
	map_script_2 VAR_TEMP_0, 1, BattleFrontier_BattlePyramidLobby_EventScript_250768
	map_script_2 VAR_TEMP_0, 2, BattleFrontier_BattlePyramidLobby_EventScript_2508AC
	map_script_2 VAR_TEMP_0, 3, BattleFrontier_BattlePyramidLobby_EventScript_2507B1
	map_script_2 VAR_TEMP_0, 4, BattleFrontier_BattlePyramidLobby_EventScript_250852
	.2byte 0

BattleFrontier_BattlePyramidLobby_EventScript_25075F:: @ 825075F
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	end

BattleFrontier_BattlePyramidLobby_EventScript_250768:: @ 8250768
	lockall
	message BattleFrontier_BattlePyramidLobby_Text_2516D6
	waitmessage
	playse SE_EXPMAX
	waitse
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_2507B1:: @ 82507B1
	lockall
	setvar VAR_0x8004, 10
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_2507D2
	msgbox BattleFrontier_BattlePyramidLobby_Text_2517B5, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_2507DA

BattleFrontier_BattlePyramidLobby_EventScript_2507D2:: @ 82507D2
	msgbox BattleFrontier_BattlePyramidLobby_Text_2525F4, MSGBOX_DEFAULT

BattleFrontier_BattlePyramidLobby_EventScript_2507DA:: @ 82507DA
	special sub_81B95E0
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250DDB
	clearflag FLAG_SPECIAL_FLAG_0x4004
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	special LoadPlayerParty
	setvar VAR_0x8004, 14
	special CallBattlePyramidFunction
	special HealPlayerParty
	message BattleFrontier_BattlePyramidLobby_Text_2519F8
	waitmessage
	playse SE_EXPMAX
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_252662, MSGBOX_DEFAULT
	setvar VAR_0x8004, 11
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePyramidLobby_Text_241520, 9
	message BattleFrontier_BattlePyramidLobby_Text_251A77
	waitmessage
	setvar VAR_0x8004, 4
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 0
	special CallBattlePyramidFunction
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_251BB6, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_250852:: @ 8250852
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	special LoadPlayerParty
	setvar VAR_0x8004, 14
	special CallBattlePyramidFunction
	special HealPlayerParty
	lockall
	message BattleFrontier_BattlePyramidLobby_Text_251B5A
	waitmessage
	playse SE_EXPMAX
	waitse
	message BattleFrontier_BattlePyramidLobby_Text_251A77
	waitmessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 0
	special CallBattlePyramidFunction
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_251BB6, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_2508AC:: @ 82508AC
	goto BattleFrontier_BattlePyramidLobby_EventScript_250A21

BattleFrontier_BattlePyramidLobby_EventScript_2508B1:: @ 82508B1
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 6
	setvar VAR_FRONTIER_BATTLE_MODE, 0
	special SavePlayerParty
	msgbox BattleFrontier_BattlePyramidLobby_Text_250F31, MSGBOX_DEFAULT

BattleFrontier_BattlePyramidLobby_EventScript_2508C8:: @ 82508C8
	message BattleFrontier_BattlePyramidLobby_Text_250FA7
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250904
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_250A68
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_250AC4
	case 127, BattleFrontier_BattlePyramidLobby_EventScript_250AC4

BattleFrontier_BattlePyramidLobby_EventScript_250904:: @ 8250904
	message BattleFrontier_BattlePyramidLobby_Text_251248
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_250AC4
	case 127, BattleFrontier_BattlePyramidLobby_EventScript_250AC4
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250A75
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePyramidLobby_Text_251297, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattlePyramidLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 3
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250AC1
	msgbox BattleFrontier_BattlePyramidLobby_Text_2514E6, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250AC1
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_2509A5
	case 127, BattleFrontier_BattlePyramidLobby_EventScript_250AC1

BattleFrontier_BattlePyramidLobby_EventScript_2509A5:: @ 82509A5
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 0
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 6
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 9
	special CallBattlePyramidFunction
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250AAA

BattleFrontier_BattlePyramidLobby_EventScript_250A21:: @ 8250A21
	special SavePlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePyramidLobby_Text_251531, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattlePyramidLobby_EventScript_250D56
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_RESULT, 0
	special HealPlayerParty
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_EMPTY_SQUARE, 255, 1, 1
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattlePyramidLobby_EventScript_250A68:: @ 8250A68
	msgbox BattleFrontier_BattlePyramidLobby_Text_25100C, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_2508C8

BattleFrontier_BattlePyramidLobby_EventScript_250A75:: @ 8250A75
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250A90
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_250A9D

BattleFrontier_BattlePyramidLobby_EventScript_250A90:: @ 8250A90
	msgbox BattleFrontier_BattlePyramidLobby_Text_2513C1, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250ACC

BattleFrontier_BattlePyramidLobby_EventScript_250A9D:: @ 8250A9D
	msgbox BattleFrontier_BattlePyramidLobby_Text_2512E2, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250ACC

BattleFrontier_BattlePyramidLobby_EventScript_250AAA:: @ 8250AAA
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	goto BattleFrontier_BattlePyramidLobby_EventScript_250AC4

BattleFrontier_BattlePyramidLobby_EventScript_250AC1:: @ 8250AC1
	special LoadPlayerParty

BattleFrontier_BattlePyramidLobby_EventScript_250AC4:: @ 8250AC4
	msgbox BattleFrontier_BattlePyramidLobby_Text_250FE5, MSGBOX_DEFAULT

BattleFrontier_BattlePyramidLobby_EventScript_250ACC:: @ 8250ACC
	release
	end

BattleFrontier_BattlePyramidLobby_EventScript_250ACE:: @ 8250ACE
	lockall
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidLobby_Text_251C3B, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidLobby_EventScript_250AF0
	msgbox BattleFrontier_BattlePyramidLobby_Text_252461, MSGBOX_DEFAULT
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_250AF0:: @ 8250AF0
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250B28
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_250B66
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_250B27
	case 127, BattleFrontier_BattlePyramidLobby_EventScript_250B27
	return

BattleFrontier_BattlePyramidLobby_EventScript_250B27:: @ 8250B27
	return

BattleFrontier_BattlePyramidLobby_EventScript_250B28:: @ 8250B28
	msgbox BattleFrontier_BattlePyramidLobby_Text_251C8A, MSGBOX_DEFAULT
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 5
	special CallBattlePyramidFunction
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_250B53
	setvar VAR_RESULT, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_250BA4
	return

BattleFrontier_BattlePyramidLobby_EventScript_250B53:: @ 8250B53
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 3
	special CallBattlePyramidFunction
	goto BattleFrontier_BattlePyramidLobby_EventScript_250BA4
	return

BattleFrontier_BattlePyramidLobby_EventScript_250B66:: @ 8250B66
	msgbox BattleFrontier_BattlePyramidLobby_Text_251C8A, MSGBOX_DEFAULT
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 6
	special CallBattlePyramidFunction
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_250B91
	setvar VAR_RESULT, 0
	goto BattleFrontier_BattlePyramidLobby_EventScript_250BA4
	return

BattleFrontier_BattlePyramidLobby_EventScript_250B91:: @ 8250B91
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 4
	special CallBattlePyramidFunction
	goto BattleFrontier_BattlePyramidLobby_EventScript_250BA4
	return

BattleFrontier_BattlePyramidLobby_EventScript_250BA4:: @ 8250BA4
	copyvar VAR_0x8004, VAR_RESULT
	special sub_813B968
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250C8E
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_250C97
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_250CA0
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_250CA9
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_250CB2
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_250CBB
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_250CC4
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_250CCD
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_250CD6
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_250CDF
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_250CE8
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_250CF1
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_250CFA
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_250D03
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_250D0C
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_250D15
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_250D1E
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_250D27
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_250D30
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_250D39
	return

BattleFrontier_BattlePyramidLobby_EventScript_250C8E:: @ 8250C8E
	msgbox BattleFrontier_BattlePyramidLobby_Text_251CB3, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250C97:: @ 8250C97
	msgbox BattleFrontier_BattlePyramidLobby_Text_251D07, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CA0:: @ 8250CA0
	msgbox BattleFrontier_BattlePyramidLobby_Text_251D54, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CA9:: @ 8250CA9
	msgbox BattleFrontier_BattlePyramidLobby_Text_251D9C, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CB2:: @ 8250CB2
	msgbox BattleFrontier_BattlePyramidLobby_Text_251E3D, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CBB:: @ 8250CBB
	msgbox BattleFrontier_BattlePyramidLobby_Text_251EA1, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CC4:: @ 8250CC4
	msgbox BattleFrontier_BattlePyramidLobby_Text_251F17, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CCD:: @ 8250CCD
	msgbox BattleFrontier_BattlePyramidLobby_Text_251F6E, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CD6:: @ 8250CD6
	msgbox BattleFrontier_BattlePyramidLobby_Text_251FC7, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CDF:: @ 8250CDF
	msgbox BattleFrontier_BattlePyramidLobby_Text_25201B, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CE8:: @ 8250CE8
	msgbox BattleFrontier_BattlePyramidLobby_Text_252068, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CF1:: @ 8250CF1
	msgbox BattleFrontier_BattlePyramidLobby_Text_2520BA, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250CFA:: @ 8250CFA
	msgbox BattleFrontier_BattlePyramidLobby_Text_252158, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D03:: @ 8250D03
	msgbox BattleFrontier_BattlePyramidLobby_Text_2521B4, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D0C:: @ 8250D0C
	msgbox BattleFrontier_BattlePyramidLobby_Text_252206, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D15:: @ 8250D15
	msgbox BattleFrontier_BattlePyramidLobby_Text_25225A, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D1E:: @ 8250D1E
	msgbox BattleFrontier_BattlePyramidLobby_Text_2522AE, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D27:: @ 8250D27
	msgbox BattleFrontier_BattlePyramidLobby_Text_25230B, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D30:: @ 8250D30
	msgbox BattleFrontier_BattlePyramidLobby_Text_252364, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D39:: @ 8250D39
	msgbox BattleFrontier_BattlePyramidLobby_Text_252403, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250D42:: @ 8250D42
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 6
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_250D56:: @ 8250D56
	applymovement 1, BattleFrontier_BattlePyramidLobby_Movement_250DC4
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_250DCD
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidLobby_Text_251569, MSGBOX_DEFAULT
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special CallBattlePyramidFunction
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250D94
	msgbox BattleFrontier_BattlePyramidLobby_Text_2515AD, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250D9C

BattleFrontier_BattlePyramidLobby_EventScript_250D94:: @ 8250D94
	msgbox BattleFrontier_BattlePyramidLobby_Text_2515F4, MSGBOX_DEFAULT

BattleFrontier_BattlePyramidLobby_EventScript_250D9C:: @ 8250D9C
	message BattleFrontier_BattlePyramidLobby_Text_25161E
	waitmessage
	playse SE_EXPMAX
	waitse
	msgbox BattleFrontier_BattlePyramidLobby_Text_251647, MSGBOX_DEFAULT
	closemessage
	applymovement 1, BattleFrontier_BattlePyramidLobby_Movement_250DD5
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_250DD8
	waitmovement 0
	return

BattleFrontier_BattlePyramidLobby_Movement_250DC4: @ 8250DC4
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

BattleFrontier_BattlePyramidLobby_Movement_250DCD: @ 8250DCD
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_Movement_250DD5: @ 8250DD5
	walk_right
	face_left
	step_end

BattleFrontier_BattlePyramidLobby_Movement_250DD8: @ 8250DD8
	walk_up
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_EventScript_250DDB:: @ 8250DDB
	msgbox BattleFrontier_BattlePyramidLobby_Text_2517FC, MSGBOX_DEFAULT
	setflag FLAG_SPECIAL_FLAG_0x4004
	special sub_81C6A94
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250E00
	message BattleFrontier_BattlePyramidLobby_Text_2518C6
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_250E09
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E00:: @ 8250E00
	msgbox BattleFrontier_BattlePyramidLobby_Text_251881, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePyramidLobby_EventScript_250E09:: @ 8250E09
	multichoice 17, 6, 83, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250E40
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_250E50
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_250E60
	case 127, BattleFrontier_BattlePyramidLobby_EventScript_250E60
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E40:: @ 8250E40
	special sub_81C4F24
	waitstate
	message BattleFrontier_BattlePyramidLobby_Text_25197E
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_250E09
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E50:: @ 8250E50
	special sub_81B9620
	waitstate
	message BattleFrontier_BattlePyramidLobby_Text_25197E
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_250E09
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E60:: @ 8250E60
	special sub_81B95E0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_250E6F
	return

BattleFrontier_BattlePyramidLobby_EventScript_250E6F:: @ 8250E6F
	msgbox BattleFrontier_BattlePyramidLobby_Text_25194F, MSGBOX_DEFAULT
	message BattleFrontier_BattlePyramidLobby_Text_25197E
	waitmessage
	goto BattleFrontier_BattlePyramidLobby_EventScript_250E09
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E83:: @ 8250E83
	msgbox BattleFrontier_BattlePyramidLobby_Text_2524DA, MSGBOX_NPC
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E8C:: @ 8250E8C
	msgbox BattleFrontier_BattlePyramidLobby_Text_252595, MSGBOX_NPC
	end

BattleFrontier_BattlePyramidLobby_EventScript_250E95:: @ 8250E95
	lockall
	msgbox BattleFrontier_BattlePyramidLobby_Text_2526B6, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250EA4
	end

BattleFrontier_BattlePyramidLobby_EventScript_250EA4:: @ 8250EA4
	message BattleFrontier_BattlePyramidLobby_Text_2526D9
	waitmessage
	multichoice 15, 2, 101, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_250EF7
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_250F05
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_250F13
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_250F21
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_250F2F
	case 127, BattleFrontier_BattlePyramidLobby_EventScript_250F2F
	end

BattleFrontier_BattlePyramidLobby_EventScript_250EF7:: @ 8250EF7
	msgbox BattleFrontier_BattlePyramidLobby_Text_2526FC, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250EA4
	end

BattleFrontier_BattlePyramidLobby_EventScript_250F05:: @ 8250F05
	msgbox BattleFrontier_BattlePyramidLobby_Text_2527A9, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250EA4
	end

BattleFrontier_BattlePyramidLobby_EventScript_250F13:: @ 8250F13
	msgbox BattleFrontier_BattlePyramidLobby_Text_25285A, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250EA4
	end

BattleFrontier_BattlePyramidLobby_EventScript_250F21:: @ 8250F21
	msgbox BattleFrontier_BattlePyramidLobby_Text_252924, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_250EA4
	end

BattleFrontier_BattlePyramidLobby_EventScript_250F2F:: @ 8250F2F
	releaseall
	end

BattleFrontier_BattlePyramidLobby_Text_250F31: @ 8250F31
	.i18n 1238

BattleFrontier_BattlePyramidLobby_Text_250FA7: @ 8250FA7
	.i18n 1239

BattleFrontier_BattlePyramidLobby_Text_250FE5: @ 8250FE5
	.i18n 1240

BattleFrontier_BattlePyramidLobby_Text_25100C: @ 825100C
	.i18n 1241

BattleFrontier_BattlePyramidLobby_Text_251248: @ 8251248
	.i18n 1242

BattleFrontier_BattlePyramidLobby_Text_251297: @ 8251297
	.i18n 1243

BattleFrontier_BattlePyramidLobby_Text_2512E2: @ 82512E2
	.i18n 1244

BattleFrontier_BattlePyramidLobby_Text_2513C1: @ 82513C1
	.i18n 1245

BattleFrontier_BattlePyramidLobby_Text_2514E6: @ 82514E6
	.i18n 1246

BattleFrontier_BattlePyramidLobby_Text_251531: @ 8251531
	.i18n 1247

BattleFrontier_BattlePyramidLobby_Text_251569: @ 8251569
	.i18n 1248

BattleFrontier_BattlePyramidLobby_Text_2515AD: @ 82515AD
	.i18n 1249

BattleFrontier_BattlePyramidLobby_Text_2515F4: @ 82515F4
	.i18n 1250

BattleFrontier_BattlePyramidLobby_Text_25161E: @ 825161E
	.i18n 1251

BattleFrontier_BattlePyramidLobby_Text_251647: @ 8251647
	.i18n 1252

BattleFrontier_BattlePyramidLobby_Text_2516D6: @ 82516D6
	.i18n 1253

BattleFrontier_BattlePyramidLobby_Text_2517B5: @ 82517B5
	.i18n 1254

BattleFrontier_BattlePyramidLobby_Text_2517FC: @ 82517FC
	.i18n 1255

BattleFrontier_BattlePyramidLobby_Text_251881: @ 8251881
	.i18n 1256

BattleFrontier_BattlePyramidLobby_Text_2518C6: @ 82518C6
	.i18n 1257

BattleFrontier_BattlePyramidLobby_Text_25194F: @ 825194F
	.i18n 1258

BattleFrontier_BattlePyramidLobby_Text_25197E: @ 825197E
	.i18n 1259

BattleFrontier_BattlePyramidLobby_Text_2519CA: @ 82519CA
	.i18n 1260

BattleFrontier_BattlePyramidLobby_Text_2519F8: @ 82519F8
	.i18n 1261

BattleFrontier_BattlePyramidLobby_Text_251A77: @ 8251A77
	.i18n 1262

BattleFrontier_BattlePyramidLobby_Text_251AA0: @ 8251AA0
	.i18n 1263

BattleFrontier_BattlePyramidLobby_Text_251AE2: @ 8251AE2
	.i18n 1264

BattleFrontier_BattlePyramidLobby_Text_251AFC: @ 8251AFC
	.i18n 1265

BattleFrontier_BattlePyramidLobby_Text_251B5A: @ 8251B5A
	.i18n 1266

BattleFrontier_BattlePyramidLobby_Text_251BB6: @ 8251BB6
	.i18n 1267

BattleFrontier_BattlePyramidLobby_Text_251BDE: @ 8251BDE
	.i18n 1268

BattleFrontier_BattlePyramidLobby_Text_251C3B: @ 8251C3B
	.i18n 1269

BattleFrontier_BattlePyramidLobby_Text_251C8A: @ 8251C8A
	.i18n 1270

BattleFrontier_BattlePyramidLobby_Text_251CB3: @ 8251CB3
	.i18n 1271

BattleFrontier_BattlePyramidLobby_Text_251D07: @ 8251D07
	.i18n 1272

BattleFrontier_BattlePyramidLobby_Text_251D54: @ 8251D54
	.i18n 1273

BattleFrontier_BattlePyramidLobby_Text_251D9C: @ 8251D9C
	.i18n 1274

BattleFrontier_BattlePyramidLobby_Text_251E3D: @ 8251E3D
	.i18n 1275

BattleFrontier_BattlePyramidLobby_Text_251EA1: @ 8251EA1
	.i18n 1276

BattleFrontier_BattlePyramidLobby_Text_251F17: @ 8251F17
	.i18n 1277

BattleFrontier_BattlePyramidLobby_Text_251F6E: @ 8251F6E
	.i18n 1278

BattleFrontier_BattlePyramidLobby_Text_251FC7: @ 8251FC7
	.i18n 1279

BattleFrontier_BattlePyramidLobby_Text_25201B: @ 825201B
	.i18n 1280

BattleFrontier_BattlePyramidLobby_Text_252068: @ 8252068
	.i18n 1281

BattleFrontier_BattlePyramidLobby_Text_2520BA: @ 82520BA
	.i18n 1282

BattleFrontier_BattlePyramidLobby_Text_252158: @ 8252158
	.i18n 1283

BattleFrontier_BattlePyramidLobby_Text_2521B4: @ 82521B4
	.i18n 1284

BattleFrontier_BattlePyramidLobby_Text_252206: @ 8252206
	.i18n 1285

BattleFrontier_BattlePyramidLobby_Text_25225A: @ 825225A
	.i18n 1286

BattleFrontier_BattlePyramidLobby_Text_2522AE: @ 82522AE
	.i18n 1287

BattleFrontier_BattlePyramidLobby_Text_25230B: @ 825230B
	.i18n 1288

BattleFrontier_BattlePyramidLobby_Text_252364: @ 8252364
	.i18n 1289

BattleFrontier_BattlePyramidLobby_Text_252403: @ 8252403
	.i18n 1290

BattleFrontier_BattlePyramidLobby_Text_252461: @ 8252461
	.i18n 1291

BattleFrontier_BattlePyramidLobby_Text_2524DA: @ 82524DA
	.i18n 1292

BattleFrontier_BattlePyramidLobby_Text_252595: @ 8252595
	.i18n 1293

BattleFrontier_BattlePyramidLobby_Text_2525F4: @ 82525F4
	.i18n 1294

BattleFrontier_BattlePyramidLobby_Text_252662: @ 8252662
	.i18n 1295

BattleFrontier_BattlePyramidLobby_Text_2526B6: @ 82526B6
	.i18n 1296

BattleFrontier_BattlePyramidLobby_Text_2526D9: @ 82526D9
	.i18n 1297

BattleFrontier_BattlePyramidLobby_Text_2526FC: @ 82526FC
	.i18n 1298

BattleFrontier_BattlePyramidLobby_Text_2527A9: @ 82527A9
	.i18n 1299

BattleFrontier_BattlePyramidLobby_Text_25285A: @ 825285A
	.i18n 1300

BattleFrontier_BattlePyramidLobby_Text_252924: @ 8252924
	.i18n 1301

