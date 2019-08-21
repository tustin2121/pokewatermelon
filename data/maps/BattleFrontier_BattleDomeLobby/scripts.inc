BattleFrontier_BattleDomeLobby_MapScripts:: @ 82497E2
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_MapScript1_2497F2
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_MapScript2_24980F
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_MapScript2_2497FB
	.byte 0

BattleFrontier_BattleDomeLobby_MapScript1_2497F2: @ 82497F2
	setvar VAR_0x8004, 21
	special CallBattleDomeFunction
	end

BattleFrontier_BattleDomeLobby_MapScript2_2497FB: @ 82497FB
BattleFrontier_BattlePyramidLobby_MapScript2_2497FB: @ 82497FB
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_249805
	.2byte 0

BattleFrontier_BattleDomeLobby_EventScript_249805:: @ 8249805
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattleDomeLobby_MapScript2_24980F: @ 824980F
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeLobby_EventScript_249839
	map_script_2 VAR_TEMP_0, 1, BattleFrontier_BattleDomeLobby_EventScript_249842
	map_script_2 VAR_TEMP_0, 2, BattleFrontier_BattleDomeLobby_EventScript_2499F9
	map_script_2 VAR_TEMP_0, 3, BattleFrontier_BattleDomeLobby_EventScript_24989B
	map_script_2 VAR_TEMP_0, 4, BattleFrontier_BattleDomeLobby_EventScript_249940
	.2byte 0

BattleFrontier_BattleDomeLobby_EventScript_249839:: @ 8249839
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	end

BattleFrontier_BattleDomeLobby_EventScript_249842:: @ 8249842
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_24A45F, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 1
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_24989B:: @ 824989B
	call BattleFrontier_BattleDomeLobby_EventScript_241EBA
	lockall
	setvar VAR_0x8004, 10
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_2498C1
	msgbox BattleFrontier_BattleDomeLobby_Text_24A4E9, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_2498C9

BattleFrontier_BattleDomeLobby_EventScript_2498C1:: @ 82498C1
	msgbox BattleFrontier_BattleDomeLobby_Text_24AD67, MSGBOX_DEFAULT

BattleFrontier_BattleDomeLobby_EventScript_2498C9:: @ 82498C9
	msgbox BattleFrontier_BattleDomeLobby_Text_24ADB1, MSGBOX_DEFAULT
	setvar VAR_0x8004, 11
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleDomeLobby_Text_241520, 9
	message BattleFrontier_BattleDomeLobby_Text_24A5D6
	waitmessage
	special LoadPlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 1
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 7
	setvar VAR_0x8006, 1
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 1
	special CallBattleDomeFunction
	special LoadPlayerParty
	special HealPlayerParty
	goto BattleFrontier_BattleDomeLobby_EventScript_249991

BattleFrontier_BattleDomeLobby_EventScript_249940:: @ 8249940
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_24A5BF, MSGBOX_DEFAULT
	message BattleFrontier_BattleDomeLobby_Text_24A5D6
	waitmessage
	special LoadPlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 1
	special CallBattleDomeFunction
	special LoadPlayerParty
	special HealPlayerParty

BattleFrontier_BattleDomeLobby_EventScript_249991:: @ 8249991
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 0
	special CallBattleDomeFunction
	playse SE_SAVE
	waitse
	call BattleFrontier_BattleDomeLobby_EventScript_23E8E0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_2499E9
	message BattleFrontier_BattleDomeLobby_Text_24AE17
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomeLobby_EventScript_2499E9
	case 0, BattleFrontier_BattleDomeLobby_EventScript_2499E4
	case 127, BattleFrontier_BattleDomeLobby_EventScript_2499E9

BattleFrontier_BattleDomeLobby_EventScript_2499E4:: @ 82499E4
	call BattleFrontier_BattleDomeLobby_EventScript_23E8B4

BattleFrontier_BattleDomeLobby_EventScript_2499E9:: @ 82499E9
	msgbox BattleFrontier_BattleDomeLobby_Text_249F74, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_2499F9:: @ 82499F9
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_24A5FE, MSGBOX_DEFAULT
	message BattleFrontier_BattleDomeLobby_Text_24A61A
	waitmessage
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 1
	special CallBattleDomeFunction
	playse SE_SAVE
	waitse
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	goto BattleFrontier_BattleDomeLobby_EventScript_249BC2

BattleFrontier_BattleDomeLobby_EventScript_249A35:: @ 8249A35
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 1
	setvar VAR_FRONTIER_BATTLE_MODE, 0
	goto BattleFrontier_BattleDomeLobby_EventScript_249A59
	end

BattleFrontier_BattleDomeLobby_EventScript_249A47:: @ 8249A47
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 1
	setvar VAR_FRONTIER_BATTLE_MODE, 1
	goto BattleFrontier_BattleDomeLobby_EventScript_249A59
	end

BattleFrontier_BattleDomeLobby_EventScript_249A59:: @ 8249A59
	special SavePlayerParty
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249CFD
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D06

BattleFrontier_BattleDomeLobby_EventScript_249A72:: @ 8249A72
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D0F
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D15
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomeLobby_EventScript_249ABF
	case 1, BattleFrontier_BattleDomeLobby_EventScript_249BFA
	case 2, BattleFrontier_BattleDomeLobby_EventScript_249C64
	case 127, BattleFrontier_BattleDomeLobby_EventScript_249C64

BattleFrontier_BattleDomeLobby_EventScript_249ABF:: @ 8249ABF
	message BattleFrontier_BattleDomeLobby_Text_24A210
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattleDomeLobby_EventScript_249C64
	case 127, BattleFrontier_BattleDomeLobby_EventScript_249C64
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_249C15
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleDomeLobby_Text_24A26E, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattleDomeLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 3
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_249C61
	msgbox BattleFrontier_BattleDomeLobby_Text_24A1C6, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomeLobby_EventScript_249C61
	case 1, BattleFrontier_BattleDomeLobby_EventScript_249B60
	case 127, BattleFrontier_BattleDomeLobby_EventScript_249C61

BattleFrontier_BattleDomeLobby_EventScript_249B60:: @ 8249B60
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 0
	special CallBattleDomeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_249C4A
	setvar VAR_0x8004, 22
	special CallBattleDomeFunction

BattleFrontier_BattleDomeLobby_EventScript_249BC2:: @ 8249BC2
	special SavePlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 15
	special CallBattleDomeFunction
	msgbox BattleFrontier_BattleDomeLobby_Text_24A437, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattleDomeLobby_EventScript_249C6E
	special HealPlayerParty
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 255, 23, 6
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattleDomeLobby_EventScript_249BFA:: @ 8249BFA
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D1B
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D24
	goto BattleFrontier_BattleDomeLobby_EventScript_249A72

BattleFrontier_BattleDomeLobby_EventScript_249C15:: @ 8249C15
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomeLobby_EventScript_249C30
	case 1, BattleFrontier_BattleDomeLobby_EventScript_249C3D

BattleFrontier_BattleDomeLobby_EventScript_249C30:: @ 8249C30
	msgbox BattleFrontier_BattleDomeLobby_Text_24A353, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_249C6C

BattleFrontier_BattleDomeLobby_EventScript_249C3D:: @ 8249C3D
	msgbox BattleFrontier_BattleDomeLobby_Text_24A2AB, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_249C6C

BattleFrontier_BattleDomeLobby_EventScript_249C4A:: @ 8249C4A
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	goto BattleFrontier_BattleDomeLobby_EventScript_249C64

BattleFrontier_BattleDomeLobby_EventScript_249C61:: @ 8249C61
	special LoadPlayerParty

BattleFrontier_BattleDomeLobby_EventScript_249C64:: @ 8249C64
	msgbox BattleFrontier_BattleDomeLobby_Text_249F74, MSGBOX_DEFAULT

BattleFrontier_BattleDomeLobby_EventScript_249C6C:: @ 8249C6C
	release
	end

BattleFrontier_BattleDomeLobby_EventScript_249C6E:: @ 8249C6E
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249CDD
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249CE5
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_249D45
	waitmovement 0
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D2D
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D33
	waitdooranim
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249CED
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249CF5
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_249D4E
	waitmovement 0
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D39
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249D3F
	waitdooranim
	return

BattleFrontier_BattleDomeLobby_EventScript_249CDD:: @ 8249CDD
	applymovement 1, BattleFrontier_BattleDomeLobby_Movement_249D45
	return

BattleFrontier_BattleDomeLobby_EventScript_249CE5:: @ 8249CE5
	applymovement 6, BattleFrontier_BattleDomeLobby_Movement_249D45
	return

BattleFrontier_BattleDomeLobby_EventScript_249CED:: @ 8249CED
	applymovement 1, BattleFrontier_BattleDomeLobby_Movement_249D4B
	return

BattleFrontier_BattleDomeLobby_EventScript_249CF5:: @ 8249CF5
	applymovement 6, BattleFrontier_BattleDomeLobby_Movement_249D4B
	return

BattleFrontier_BattleDomeLobby_EventScript_249CFD:: @ 8249CFD
	msgbox BattleFrontier_BattleDomeLobby_Text_249EB7, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_249D06:: @ 8249D06
	msgbox BattleFrontier_BattleDomeLobby_Text_24A664, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_249D0F:: @ 8249D0F
	message BattleFrontier_BattleDomeLobby_Text_249F3A
	return

BattleFrontier_BattleDomeLobby_EventScript_249D15:: @ 8249D15
	message BattleFrontier_BattleDomeLobby_Text_24A6E7
	return

BattleFrontier_BattleDomeLobby_EventScript_249D1B:: @ 8249D1B
	msgbox BattleFrontier_BattleDomeLobby_Text_249F8E, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_249D24:: @ 8249D24
	msgbox BattleFrontier_BattleDomeLobby_Text_24A721, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomeLobby_EventScript_249D2D:: @ 8249D2D
	opendoor 5, 4
	return

BattleFrontier_BattleDomeLobby_EventScript_249D33:: @ 8249D33
	opendoor 17, 4
	return

BattleFrontier_BattleDomeLobby_EventScript_249D39:: @ 8249D39
	closedoor 5, 4
	return

BattleFrontier_BattleDomeLobby_EventScript_249D3F:: @ 8249D3F
	closedoor 17, 4
	return

BattleFrontier_BattleDomeLobby_Movement_249D45: @ 8249D45
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleDomeLobby_Movement_249D4B: @ 8249D4B
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleDomeLobby_Movement_249D4E: @ 8249D4E
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleDomeLobby_EventScript_249D52:: @ 8249D52
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_249D6B:: @ 8249D6B
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_249D84:: @ 8249D84
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 9
	special CallBattleDomeFunction
	compare VAR_RESULT, 0
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249DC9
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249DD2
	compare VAR_RESULT, 2
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249DDB
	compare VAR_RESULT, 3
	call_if_eq BattleFrontier_BattleDomeLobby_EventScript_249DE4
	fadescreen 1
	setvar VAR_0x8004, 8
	special CallBattleDomeFunction
	waitstate
	end

BattleFrontier_BattleDomeLobby_EventScript_249DC9:: @ 8249DC9
	msgbox BattleFrontier_BattleDomeLobby_Text_24A966, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_249DD2:: @ 8249DD2
	msgbox BattleFrontier_BattleDomeLobby_Text_24A9A9, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_249DDB:: @ 8249DDB
	msgbox BattleFrontier_BattleDomeLobby_Text_24A9EC, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_249DE4:: @ 8249DE4
	msgbox BattleFrontier_BattleDomeLobby_Text_24AA31, MSGBOX_SIGN
	return

BattleFrontier_BattleDomeLobby_EventScript_249DED:: @ 8249DED
	setvar VAR_0x8004, 20
	special CallBattleDomeFunction
	msgbox BattleFrontier_BattleDomeLobby_Text_24AA76, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_249DFE:: @ 8249DFE
	msgbox BattleFrontier_BattleDomeLobby_Text_24AB94, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_249E07:: @ 8249E07
	msgbox BattleFrontier_BattleDomeLobby_Text_24AC76, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_249E10:: @ 8249E10
	msgbox BattleFrontier_BattleDomeLobby_Text_24ACD3, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_249E19:: @ 8249E19
	msgbox BattleFrontier_OutsideWest_Text_24AB06, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_249E22:: @ 8249E22
	msgbox BattleFrontier_OutsideWest_Text_24AB44, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_249E2B:: @ 8249E2B
	msgbox BattleFrontier_OutsideWest_Text_24AB75, MSGBOX_NPC
	end

BattleFrontier_BattleDomeLobby_EventScript_249E34:: @ 8249E34
	lockall
	msgbox BattleFrontier_BattleDomeLobby_Text_24AE63, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_249E43
	end

BattleFrontier_BattleDomeLobby_EventScript_249E43:: @ 8249E43
	message BattleFrontier_BattleDomeLobby_Text_24AE8B
	waitmessage
	multichoice 17, 4, 98, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomeLobby_EventScript_249E8B
	case 1, BattleFrontier_BattleDomeLobby_EventScript_249E99
	case 2, BattleFrontier_BattleDomeLobby_EventScript_249EA7
	case 3, BattleFrontier_BattleDomeLobby_EventScript_249EB5
	case 127, BattleFrontier_BattleDomeLobby_EventScript_249EB5
	end

BattleFrontier_BattleDomeLobby_EventScript_249E8B:: @ 8249E8B
	msgbox BattleFrontier_BattleDomeLobby_Text_24AEAE, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_249E43
	end

BattleFrontier_BattleDomeLobby_EventScript_249E99:: @ 8249E99
	msgbox BattleFrontier_BattleDomeLobby_Text_24AF4C, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_249E43
	end

BattleFrontier_BattleDomeLobby_EventScript_249EA7:: @ 8249EA7
	msgbox BattleFrontier_BattleDomeLobby_Text_24B073, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_249E43
	end

BattleFrontier_BattleDomeLobby_EventScript_249EB5:: @ 8249EB5
	releaseall
	end

BattleFrontier_BattleDomeLobby_Text_249EB7: @ 8249EB7
	.i18n 714

BattleFrontier_BattleDomeLobby_Text_249F3A: @ 8249F3A
	.i18n 715

BattleFrontier_BattleDomeLobby_Text_249F74: @ 8249F74
	.i18n 716

BattleFrontier_BattleDomeLobby_Text_249F8E: @ 8249F8E
	.i18n 717

BattleFrontier_BattleDomeLobby_Text_24A1C6: @ 824A1C6
	.i18n 718

BattleFrontier_BattleDomeLobby_Text_24A210: @ 824A210
	.i18n 719

BattleFrontier_BattleDomeLobby_Text_24A26E: @ 824A26E
	.i18n 720

BattleFrontier_BattleDomeLobby_Text_24A2AB: @ 824A2AB
	.i18n 721

BattleFrontier_BattleDomeLobby_Text_24A353: @ 824A353
	.i18n 722

BattleFrontier_BattleDomeLobby_Text_24A437: @ 824A437
	.i18n 723

BattleFrontier_BattleDomeLobby_Text_24A45F: @ 824A45F
	.i18n 724

BattleFrontier_BattleDomeLobby_Text_24A4E9: @ 824A4E9
	.i18n 725

BattleFrontier_BattleDomeLobby_Text_24A51D: @ 824A51D
	.i18n 726

VerdanturfTown_BattleTentLobby_Text_24A554: @ 824A554
	.i18n 727

VerdanturfTown_BattleTentLobby_Text_24A56E: @ 824A56E
	.i18n 728

BattleFrontier_BattleDomeLobby_Text_24A5BF: @ 824A5BF
	.i18n 729

BattleFrontier_BattleDomeLobby_Text_24A5D6: @ 824A5D6
	.i18n 730

BattleFrontier_BattleDomeLobby_Text_24A5FE: @ 824A5FE
	.i18n 731

BattleFrontier_BattleDomeLobby_Text_24A61A: @ 824A61A
	.i18n 732

BattleFrontier_BattleDomeLobby_Text_24A664: @ 824A664
	.i18n 733

BattleFrontier_BattleDomeLobby_Text_24A6E7: @ 824A6E7
	.i18n 734

BattleFrontier_BattleDomeLobby_Text_24A721: @ 824A721
	.i18n 735

BattleFrontier_BattleDomeLobby_Text_24A966: @ 824A966
	.i18n 736

BattleFrontier_BattleDomeLobby_Text_24A9A9: @ 824A9A9
	.i18n 737

BattleFrontier_BattleDomeLobby_Text_24A9EC: @ 824A9EC
	.i18n 738

BattleFrontier_BattleDomeLobby_Text_24AA31: @ 824AA31
	.i18n 739

BattleFrontier_BattleDomeLobby_Text_24AA76: @ 824AA76
	.i18n 740

BattleFrontier_OutsideWest_Text_24AB06: @ 824AB06
	.i18n 741

BattleFrontier_OutsideWest_Text_24AB44: @ 824AB44
	.i18n 742

BattleFrontier_OutsideWest_Text_24AB75: @ 824AB75
	.i18n 743

BattleFrontier_BattleDomeLobby_Text_24AB94: @ 824AB94
	.i18n 744

BattleFrontier_BattleDomeLobby_Text_24AC76: @ 824AC76
	.i18n 745

BattleFrontier_BattleDomeLobby_Text_24ACD3: @ 824ACD3
	.i18n 746

BattleFrontier_BattleDomeLobby_Text_24AD67: @ 824AD67
	.i18n 747

BattleFrontier_BattleDomeLobby_Text_24ADB1: @ 824ADB1
	.i18n 748

BattleFrontier_BattleDomeLobby_Text_24AE17: @ 824AE17
	.i18n 749

BattleFrontier_BattleDomeLobby_Text_24AE63: @ 824AE63
	.i18n 750

BattleFrontier_BattleDomeLobby_Text_24AE8B: @ 824AE8B
	.i18n 751

BattleFrontier_BattleDomeLobby_Text_24AEAE: @ 824AEAE
	.i18n 752

BattleFrontier_BattleDomeLobby_Text_24AF4C: @ 824AF4C
	.i18n 753

BattleFrontier_BattleDomeLobby_Text_24B073: @ 824B073
	.i18n 754
