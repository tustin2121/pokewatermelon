BattleFrontier_BattlePalaceLobby_MapScripts:: @ 824D77E
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_MapScript2_24D79D
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_MapScript2_24D789
	.byte 0

BattleFrontier_BattlePalaceLobby_MapScript2_24D789: @ 824D789
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_24D793
	.2byte 0

BattleFrontier_BattlePalaceLobby_EventScript_24D793:: @ 824D793
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattlePalaceLobby_MapScript2_24D79D: @ 824D79D
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceLobby_EventScript_24D7C7
	map_script_2 VAR_TEMP_0, 1, BattleFrontier_BattlePalaceLobby_EventScript_24D7D0
	map_script_2 VAR_TEMP_0, 2, BattleFrontier_BattlePalaceLobby_EventScript_24D908
	map_script_2 VAR_TEMP_0, 3, BattleFrontier_BattlePalaceLobby_EventScript_24D817
	map_script_2 VAR_TEMP_0, 4, BattleFrontier_BattlePalaceLobby_EventScript_24D873
	.2byte 0

BattleFrontier_BattlePalaceLobby_EventScript_24D7C7:: @ 824D7C7
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	end

BattleFrontier_BattlePalaceLobby_EventScript_24D7D0:: @ 824D7D0
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E636, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special CallBattlePalaceFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special CallBattlePalaceFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_24D817:: @ 824D817
	lockall
	setvar VAR_0x8004, 10
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24D838
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E497, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24D840

BattleFrontier_BattlePalaceLobby_EventScript_24D838:: @ 824D838
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EE81, MSGBOX_DEFAULT

BattleFrontier_BattlePalaceLobby_EventScript_24D840:: @ 824D840
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EEB9, MSGBOX_DEFAULT
	setvar VAR_0x8004, 11
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePalaceLobby_Text_241520, 9
	message BattleFrontier_BattlePalaceLobby_Text_24E4F7
	waitmessage
	call BattleFrontier_BattlePalaceLobby_EventScript_24D8A1
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E0D8, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_24D873:: @ 824D873
	lockall
	message BattleFrontier_BattlePalaceLobby_Text_24E41E
	waitmessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special CallBattlePalaceFunction
	call BattleFrontier_BattlePalaceLobby_EventScript_24D8A1
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E0D8, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_24D8A1:: @ 824D8A1
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	special LoadPlayerParty
	special HealPlayerParty
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 0
	special CallBattlePalaceFunction
	playse SE_SAVE
	waitse
	call BattleFrontier_BattlePalaceLobby_EventScript_23E8E0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24D907
	message BattleFrontier_BattlePalaceLobby_Text_24EF16
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_24D907
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_24D902
	case 127, BattleFrontier_BattlePalaceLobby_EventScript_24D907

BattleFrontier_BattlePalaceLobby_EventScript_24D902:: @ 824D902
	call BattleFrontier_BattlePalaceLobby_EventScript_23E8B4

BattleFrontier_BattlePalaceLobby_EventScript_24D907:: @ 824D907
	return

BattleFrontier_BattlePalaceLobby_EventScript_24D908:: @ 824D908
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E5D8, MSGBOX_DEFAULT
	message BattleFrontier_BattlePalaceLobby_Text_24E5F6
	waitmessage
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 1
	special CallBattlePalaceFunction
	playse SE_SAVE
	waitse
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DAF3

BattleFrontier_BattlePalaceLobby_EventScript_24D944:: @ 824D944
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 2
	setvar VAR_FRONTIER_BATTLE_MODE, 0
	goto BattleFrontier_BattlePalaceLobby_EventScript_24D968
	end

BattleFrontier_BattlePalaceLobby_EventScript_24D956:: @ 824D956
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 2
	setvar VAR_FRONTIER_BATTLE_MODE, 1
	goto BattleFrontier_BattlePalaceLobby_EventScript_24D968
	end

BattleFrontier_BattlePalaceLobby_EventScript_24D968:: @ 824D968
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 0
	special CallBattlePalaceFunction
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePalaceLobby_EventScript_24D817
	special SavePlayerParty
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DB9E
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DBA7

BattleFrontier_BattlePalaceLobby_EventScript_24D999:: @ 824D999
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DBB0
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DBB6
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_24D9E6
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_24DB20
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_24DB94
	case 127, BattleFrontier_BattlePalaceLobby_EventScript_24DB94

BattleFrontier_BattlePalaceLobby_EventScript_24D9E6:: @ 824D9E6
	message BattleFrontier_BattlePalaceLobby_Text_24E119
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_24DB94
	case 127, BattleFrontier_BattlePalaceLobby_EventScript_24DB94
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DB45
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E399, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattlePalaceLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 3
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DB91
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E3C8, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_24DB91
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_24DA87
	case 127, BattleFrontier_BattlePalaceLobby_EventScript_24DB91

BattleFrontier_BattlePalaceLobby_EventScript_24DA87:: @ 824DA87
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 0
	special CallBattlePalaceFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special CallBattlePalaceFunction
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
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DB7A

BattleFrontier_BattlePalaceLobby_EventScript_24DAF3:: @ 824DAF3
	special SavePlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E408, MSGBOX_DEFAULT
	closemessage
	call BattleFrontier_BattlePalaceLobby_EventScript_24DBBC
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 255, 8, 13
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DB20:: @ 824DB20
	compare VAR_FRONTIER_BATTLE_MODE, 1
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DB38
	msgbox BattleFrontier_BattlePalaceLobby_Text_24DE17, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24D999

BattleFrontier_BattlePalaceLobby_EventScript_24DB38:: @ 824DB38
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EBC2, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24D999

BattleFrontier_BattlePalaceLobby_EventScript_24DB45:: @ 824DB45
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_24DB60
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_24DB6D

BattleFrontier_BattlePalaceLobby_EventScript_24DB60:: @ 824DB60
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E173, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DB9C

BattleFrontier_BattlePalaceLobby_EventScript_24DB6D:: @ 824DB6D
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E29E, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DB9C

BattleFrontier_BattlePalaceLobby_EventScript_24DB7A:: @ 824DB7A
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DB94

BattleFrontier_BattlePalaceLobby_EventScript_24DB91:: @ 824DB91
	special LoadPlayerParty

BattleFrontier_BattlePalaceLobby_EventScript_24DB94:: @ 824DB94
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E0D8, MSGBOX_DEFAULT

BattleFrontier_BattlePalaceLobby_EventScript_24DB9C:: @ 824DB9C
	release
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DB9E:: @ 824DB9E
	msgbox BattleFrontier_BattlePalaceLobby_Text_24DD5B, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DBA7:: @ 824DBA7
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EB06, MSGBOX_DEFAULT
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DBB0:: @ 824DBB0
	message BattleFrontier_BattlePalaceLobby_Text_24DDE1
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DBB6:: @ 824DBB6
	message BattleFrontier_BattlePalaceLobby_Text_24EB8C
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DBBC:: @ 824DBBC
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DC23
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DC29
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_24DC47
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_24DC47
	waitmovement 0
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DC2F
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DC35
	waitdooranim
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_24DC49
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_24DC4C
	waitmovement 0
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DC3B
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattlePalaceLobby_EventScript_24DC41
	waitdooranim
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DC23:: @ 824DC23
	setvar VAR_LAST_TALKED, 1
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DC29:: @ 824DC29
	setvar VAR_LAST_TALKED, 6
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DC2F:: @ 824DC2F
	opendoor 5, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DC35:: @ 824DC35
	opendoor 19, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DC3B:: @ 824DC3B
	closedoor 5, 4
	return

BattleFrontier_BattlePalaceLobby_EventScript_24DC41:: @ 824DC41
	closedoor 19, 4
	return

BattleFrontier_BattlePalaceLobby_Movement_24DC47: @ 824DC47
	walk_up
	step_end

BattleFrontier_BattlePalaceLobby_Movement_24DC49: @ 824DC49
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_Movement_24DC4C: @ 824DC4C
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_EventScript_24DC50:: @ 824DC50
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DC69:: @ 824DC69
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DC82:: @ 824DC82
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E6E3, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DC8B:: @ 824DC8B
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E851, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DC94:: @ 824DC94
	msgbox BattleFrontier_BattlePalaceLobby_Text_24E992, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DC9D:: @ 824DC9D
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EA4B, MSGBOX_NPC
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DCA6:: @ 824DCA6
	lockall
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EF66, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DCB5
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DCB5:: @ 824DCB5
	message BattleFrontier_BattlePalaceLobby_Text_24EF88
	waitmessage
	multichoice 16, 0, 100, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_24DD13
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_24DD21
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_24DD2F
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_24DD3D
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_24DD4B
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_24DD59
	case 127, BattleFrontier_BattlePalaceLobby_EventScript_24DD59
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DD13:: @ 824DD13
	msgbox BattleFrontier_BattlePalaceLobby_Text_24EFAB, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DCB5
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DD21:: @ 824DD21
	msgbox BattleFrontier_BattlePalaceLobby_Text_24F049, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DCB5
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DD2F:: @ 824DD2F
	msgbox BattleFrontier_BattlePalaceLobby_Text_24F190, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DCB5
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DD3D:: @ 824DD3D
	msgbox BattleFrontier_BattlePalaceLobby_Text_24F2E8, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DCB5
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DD4B:: @ 824DD4B
	msgbox BattleFrontier_BattlePalaceLobby_Text_24F3F4, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_24DCB5
	end

BattleFrontier_BattlePalaceLobby_EventScript_24DD59:: @ 824DD59
	releaseall
	end

BattleFrontier_BattlePalaceLobby_Text_24DD5B: @ 824DD5B
	.i18n 907

BattleFrontier_BattlePalaceLobby_Text_24DDE1: @ 824DDE1
	.i18n 908

BattleFrontier_BattlePalaceLobby_Text_24DE17: @ 824DE17
	.i18n 909

BattleFrontier_BattlePalaceLobby_Text_24E0D8: @ 824E0D8
	.i18n 910

BattleFrontier_BattlePalaceLobby_Text_24E119: @ 824E119
	.i18n 911

BattleFrontier_BattlePalaceLobby_Text_24E173: @ 824E173
	.i18n 912

BattleFrontier_BattlePalaceLobby_Text_24E29E: @ 824E29E
	.i18n 913

BattleFrontier_BattlePalaceLobby_Text_24E399: @ 824E399
	.i18n 914

BattleFrontier_BattlePalaceLobby_Text_24E3C8: @ 824E3C8
	.i18n 915

BattleFrontier_BattlePalaceLobby_Text_24E408: @ 824E408
	.i18n 916

BattleFrontier_BattlePalaceLobby_Text_24E41E: @ 824E41E
	.i18n 917

BattleFrontier_BattlePalaceLobby_Text_24E497: @ 824E497
	.i18n 918

BattleFrontier_BattlePalaceLobby_Text_24E4F7: @ 824E4F7
	.i18n 919

BattleFrontier_BattlePalaceLobby_Text_24E533: @ 824E5333
    .i18n 920

VerdanturfTown_BattleTentLobby_Text_24E57B: @ 824E57B
	.i18n 921

BattleFrontier_BattlePalaceLobby_Text_24E5D8: @ 824E5D8
VerdanturfTown_BattleTentLobby_Text_24E5D8: @ 824E5D8
	.i18n 922

BattleFrontier_BattlePalaceLobby_Text_24E5F6: @ 824E5F6
VerdanturfTown_BattleTentLobby_Text_24E5F6: @ 824E5F6
	.i18n 923

BattleFrontier_BattlePalaceLobby_Text_24E636: @ 824E636
VerdanturfTown_BattleTentLobby_Text_24E636: @ 824E636
	.i18n 924

BattleFrontier_BattlePalaceLobby_Text_24E6C9: @ 824E6C9
	.i18n 925

BattleFrontier_BattlePalaceLobby_Text_24E6E3: @ 824E6E3
	.i18n 926

BattleFrontier_BattlePalaceLobby_Text_24E851: @ 824E851
	.i18n 927

BattleFrontier_BattlePalaceLobby_Text_24E992: @ 824E992
	.i18n 928

BattleFrontier_BattlePalaceLobby_Text_24EA4B: @ 824EA4B
	.i18n 929

BattleFrontier_BattlePalaceLobby_Text_24EB06: @ 824EB06
	.i18n 930

BattleFrontier_BattlePalaceLobby_Text_24EB8C: @ 824EB8C
	.i18n 931

BattleFrontier_BattlePalaceLobby_Text_24EBC2: @ 824EBC2
	.i18n 932

BattleFrontier_BattlePalaceLobby_Text_24EE81: @ 824EE81
	.i18n 933

BattleFrontier_BattlePalaceLobby_Text_24EEB9: @ 824EEB9
	.i18n 934

BattleFrontier_BattlePalaceLobby_Text_24EF16: @ 824EF16
	.i18n 935

BattleFrontier_BattlePalaceLobby_Text_24EF66: @ 824EF66
	.i18n 936

BattleFrontier_BattlePalaceLobby_Text_24EF88: @ 824EF88
VerdanturfTown_BattleTentLobby_Text_24EF88: @ 824EF88
	.i18n 937

BattleFrontier_BattlePalaceLobby_Text_24EFAB: @ 824EFAB
VerdanturfTown_BattleTentLobby_Text_24EFAB: @ 824EFAB
	.i18n 938

BattleFrontier_BattlePalaceLobby_Text_24F049: @ 824F049
VerdanturfTown_BattleTentLobby_Text_24F049: @ 824F049
	.i18n 939

BattleFrontier_BattlePalaceLobby_Text_24F190: @ 824F190
VerdanturfTown_BattleTentLobby_Text_24F190: @ 824F190
	.i18n 940

BattleFrontier_BattlePalaceLobby_Text_24F2E8: @ 824F2E8
VerdanturfTown_BattleTentLobby_Text_24F2E8: @ 824F2E8
	.i18n 941

BattleFrontier_BattlePalaceLobby_Text_24F3F4: @ 824F3F4
VerdanturfTown_BattleTentLobby_Text_24F3F4: @ 824F3F4
	.i18n 942

