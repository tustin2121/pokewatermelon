BattleFrontier_BattleDomePreBattleRoom_MapScripts:: @ 824B1F9
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomePreBattleRoom_MapScript2_24B218
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomePreBattleRoom_MapScript2_24B204
	.byte 0

BattleFrontier_BattleDomePreBattleRoom_MapScript2_24B204: @ 824B204
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B20E
	.2byte 0

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B20E:: @ 824B20E
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattleDomePreBattleRoom_MapScript2_24B218: @ 824B218
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B222
	.2byte 0

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B222:: @ 824B222
	compare VAR_0x8006, 1
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5C7
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 1
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_24B652
	waitmovement 0
	lockall

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F:: @ 824B24F
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_24B4FB
	waitmessage
	switch VAR_RESULT
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_23E8E0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_24B2C1
	multichoice 16, 0, 73, 1
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3DD
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3F5
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B46D
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B30D
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B349
	case 5, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B377
	case 127, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B2C1:: @ 824B2C1
	multichoice 16, 2, 107, 1
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3DD
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3F5
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B46D
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B349
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B377
	case 127, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B30D:: @ 824B30D
	message BattleFrontier_BattleDomePreBattleRoom_Text_24BAF7
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B33F
	case 127, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B33F:: @ 824B33F
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_23E8B4
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B349:: @ 824B349
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BA69, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3BB
	case 127, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B377:: @ 824B377
	message BattleFrontier_BattleDomePreBattleRoom_Text_24BA93
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3A9
	case 127, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3A9:: @ 824B3A9
	setvar VAR_0x8004, 12
	setvar VAR_0x8005, 9
	special CallBattleDomeFunction
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_24BE9A

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3BB:: @ 824B3BB
	message BattleFrontier_BattleDomePreBattleRoom_Text_24BAD3
	waitmessage
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 2
	special CallBattleDomeFunction
	playse SE_SAVE
	waitse
	fadescreen 1
	setvar VAR_0x8004, 4
	special CallFrontierUtilFunc
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3DD:: @ 824B3DD
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B9B5, MSGBOX_DEFAULT
	fadescreen 1
	setvar VAR_0x8004, 6
	special CallBattleDomeFunction
	waitstate
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B3F5:: @ 824B3F5
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_24B40A
	fadescreen 1
	setvar VAR_0x8004, 7
	special CallBattleDomeFunction
	waitstate
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B40A:: @ 824B40A
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B449
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B452
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B45B
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B464
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B449:: @ 824B449
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B9D9, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B452:: @ 824B452
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B9FD, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B45B:: @ 824B45B
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BA21, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B464:: @ 824B464
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BA46, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B46D:: @ 824B46D
	message BattleFrontier_BattleDomePreBattleRoom_Text_24B70C
	waitmessage
	waitbuttonpress
	fadescreen 1
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 2
	special sub_80F9490
	waitstate
	setvar VAR_0x8004, 21
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 8
	special CallBattleDomeFunction
	setvar VAR_0x8004, 18
	special CallBattleDomeFunction
	setvar VAR_0x8004, 9
	special CallBattleDomeFunction
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B748, MSGBOX_DEFAULT
	closemessage
	applymovement 1, BattleFrontier_BattleDomePreBattleRoom_Movement_24B64F
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_24B657
	waitmovement 0
	opendoor 5, 1
	waitdooranim
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_24B659
	waitmovement 0
	closedoor 5, 1
	waitdooranim
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 255, 9, 5
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B4FB:: @ 824B4FB
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B53A
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B540
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B546
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B54C
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B53A:: @ 824B53A
	message BattleFrontier_BattleDomePreBattleRoom_Text_24B65C
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B540:: @ 824B540
	message BattleFrontier_BattleDomePreBattleRoom_Text_24B689
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B546:: @ 824B546
	message BattleFrontier_BattleDomePreBattleRoom_Text_24B6B6
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B54C:: @ 824B54C
	setvar VAR_0x8004, 9
	special CallFrontierUtilFunc
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B58B
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5A0
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B58B
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5A0
	message BattleFrontier_BattleDomePreBattleRoom_Text_24B6E3
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B58B:: @ 824B58B
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5B5
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BB2E, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5A0:: @ 824B5A0
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5BE
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BBAC, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5B5:: @ 824B5B5
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BC2A, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5BE:: @ 824B5BE
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24BC63, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B5C7:: @ 824B5C7
	setvar VAR_TEMP_0, 1
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B760, MSGBOX_DEFAULT
	special LoadPlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_24B600
	fadescreen 1
	setvar VAR_0x8004, 11
	special CallBattleDomeFunction
	waitstate
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_24B24F

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B600:: @ 824B600
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B634
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B63D
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_24B646
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B634:: @ 824B634
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B7A3, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B63D:: @ 824B63D
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B7F1, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_24B646:: @ 824B646
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_24B83F, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_Movement_24B64F: @ 824B64F
	walk_right
	face_left
	step_end

BattleFrontier_BattleDomePreBattleRoom_Movement_24B652: @ 824B652
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleDomePreBattleRoom_Movement_24B657: @ 824B657
	walk_up
	step_end

BattleFrontier_BattleDomePreBattleRoom_Movement_24B659: @ 824B659
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleDomePreBattleRoom_Text_24B65C: @ 824B65C
	.i18n 755

BattleFrontier_BattleDomePreBattleRoom_Text_24B689: @ 824B689
	.i18n 756

BattleFrontier_BattleDomePreBattleRoom_Text_24B6B6: @ 824B6B6
	.i18n 757

BattleFrontier_BattleDomePreBattleRoom_Text_24B6E3: @ 824B6E3
	.i18n 758

BattleFrontier_BattleDomePreBattleRoom_Text_24B70C: @ 824B70C
	.i18n 759

BattleFrontier_BattleDomePreBattleRoom_Text_24B748: @ 824B748
	.i18n 760

BattleFrontier_BattleDomePreBattleRoom_Text_24B760: @ 824B760
	.i18n 761

BattleFrontier_BattleDomePreBattleRoom_Text_24B7A3: @ 824B7A3
	.i18n 762

BattleFrontier_BattleDomePreBattleRoom_Text_24B7F1: @ 824B7F1
	.i18n 763

BattleFrontier_BattleDomePreBattleRoom_Text_24B83F: @ 824B83F
	.i18n 764

BattleFrontier_BattleDomePreBattleRoom_Text_24B88D: @ 824B88D
	.i18n 765

BattleFrontier_BattleDomePreBattleRoom_Text_24B8E6: @ 824B8E6
	.i18n 766

BattleFrontier_BattleDomePreBattleRoom_Text_24B94E: @ 824B94E
	.i18n 767

BattleFrontier_BattleDomePreBattleRoom_Text_24B9B5: @ 824B9B5
	.i18n 768

BattleFrontier_BattleDomePreBattleRoom_Text_24B9D9: @ 824B9D9
	.i18n 769

BattleFrontier_BattleDomePreBattleRoom_Text_24B9FD: @ 824B9FD
	.i18n 770

BattleFrontier_BattleDomePreBattleRoom_Text_24BA21: @ 824BA21
	.i18n 771

BattleFrontier_BattleDomePreBattleRoom_Text_24BA46: @ 824BA46
	.i18n 772

BattleFrontier_BattleDomePreBattleRoom_Text_24BA69: @ 824BA69
	.i18n 773

BattleFrontier_BattleDomePreBattleRoom_Text_24BA93: @ 824BA93
	.i18n 774

BattleFrontier_BattleDomePreBattleRoom_Text_24BAD3: @ 824BAD3
	.i18n 775

BattleFrontier_BattleDomePreBattleRoom_Text_24BAF7: @ 824BAF7
	.i18n 776

BattleFrontier_BattleDomePreBattleRoom_Text_24BB2E: @ 824BB2E
	.i18n 777

BattleFrontier_BattleDomePreBattleRoom_Text_24BBAC: @ 824BBAC
	.i18n 778

BattleFrontier_BattleDomePreBattleRoom_Text_24BC2A: @ 824BC2A
	.i18n 779

BattleFrontier_BattleDomePreBattleRoom_Text_24BC63: @ 824BC63
	.i18n 780

