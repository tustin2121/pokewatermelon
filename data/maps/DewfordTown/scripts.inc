DewfordTown_MapScripts:: @ 81E9507
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	.byte 0

DewfordTown_OnTransition: @ 81E950D
	setflag FLAG_VISITED_DEWFORD_TOWN
	end

DewfordTown_EventScript_1E9511:: @ 81E9511
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_1E9585
	message DewfordTown_Text_1E9C8A
	waitmessage
	multichoicedefault 21, 6, 0, 2, 0
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_1E955A
	case 1, DewfordTown_EventScript_1E956A
	case 2, DewfordTown_EventScript_1E957A
	case 127, DewfordTown_EventScript_1E957A
	end

DewfordTown_EventScript_1E955A:: @ 81E955A
	msgbox DewfordTown_Text_1E9CE5, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_1E9660
	release
	end

DewfordTown_EventScript_1E956A:: @ 81E956A
	msgbox DewfordTown_Text_1E9D3A, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_1E96E7
	release
	end

DewfordTown_EventScript_1E957A:: @ 81E957A
	msgbox DewfordTown_Text_1E9D8F, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_1E9585:: @ 81E9585
	msgbox DewfordTown_Text_1E9B24, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_1E95A2
	msgbox DewfordTown_Text_1E9BD9, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E95A2:: @ 81E95A2
	msgbox DewfordTown_Text_1E9B7F, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_1E9660
	end

DewfordTown_EventScript_1E95B1:: @ 81E95B1
	msgbox DewfordTown_Text_1E99A8, MSGBOX_NPC
	end

DewfordTown_EventScript_1E95BA:: @ 81E95BA
	msgbox DewfordTown_Text_1E9A0F, MSGBOX_SIGN
	end

DewfordTown_EventScript_1E95C3:: @ 81E95C3
	msgbox DewfordTown_Text_1E9A3D, MSGBOX_SIGN
	end

DewfordTown_EventScript_1E95CC:: @ 81E95CC
	msgbox DewfordTown_Text_1E9A7F, MSGBOX_SIGN
	end

DewfordTown_EventScript_1E95D5:: @ 81E95D5
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_1E962A
	msgbox DewfordTown_Text_1E9DD1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_1E95FF
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_EventScript_1E9620
	end

DewfordTown_EventScript_1E95FF:: @ 81E95FF
	msgbox DewfordTown_Text_1E9E14, MSGBOX_DEFAULT
	giveitem_std ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_1E9E65, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E9620:: @ 81E9620
	msgbox DewfordTown_Text_1E9F92, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E962A:: @ 81E962A
	message DewfordTown_Text_1E9FB8
	waitmessage
	multichoice 20, 8, 50, 1
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_EventScript_1E964C
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_1E9656
	end

DewfordTown_EventScript_1E964C:: @ 81E964C
	msgbox DewfordTown_Text_1E9FD0, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E9656:: @ 81E9656
	msgbox DewfordTown_Text_1EA004, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E9660:: @ 81E9660
	call DewfordTown_EventScript_271E95
	setobjectpriority 2, MAP_DEWFORD_TOWN, 0
	setobjectpriority EVENT_OBJ_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement 2, DewfordTown_Movement_1E991D
	waitmovement 0
	removeobject 2
	applymovement EVENT_OBJ_ID_PLAYER, DewfordTown_Movement_1E9911
	waitmovement 0
	hideobjectat EVENT_OBJ_ID_PLAYER, MAP_DEWFORD_TOWN
	call DewfordTown_EventScript_2720A0
	applymovement 4, DewfordTown_Movement_1E97A2
	applymovement EVENT_OBJ_ID_PLAYER, DewfordTown_Movement_1E97A2
	waitmovement 0
	showobjectat EVENT_OBJ_ID_PLAYER, MAP_ROUTE104
	call DewfordTown_EventScript_2720A8
	applymovement EVENT_OBJ_ID_PLAYER, DewfordTown_Movement_1E9914
	waitmovement 0
	showobjectat EVENT_OBJ_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat 4, MAP_DEWFORD_TOWN
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectpriority EVENT_OBJ_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 255, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_1E96E7:: @ 81E96E7
	call DewfordTown_EventScript_271E95
	setobjectpriority 2, MAP_DEWFORD_TOWN, 0
	setobjectpriority EVENT_OBJ_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement 2, DewfordTown_Movement_1E991D
	waitmovement 0
	removeobject 2
	applymovement EVENT_OBJ_ID_PLAYER, DewfordTown_Movement_1E9911
	waitmovement 0
	hideobjectat EVENT_OBJ_ID_PLAYER, MAP_DEWFORD_TOWN
	call DewfordTown_EventScript_2720A0
	applymovement 4, DewfordTown_Movement_1E9865
	applymovement EVENT_OBJ_ID_PLAYER, DewfordTown_Movement_1E9865
	waitmovement 0
	call DewfordTown_EventScript_2720A8
	showobjectat EVENT_OBJ_ID_PLAYER, MAP_ROUTE109
	applymovement EVENT_OBJ_ID_PLAYER, DewfordTown_Movement_1E9918
	waitmovement 0
	setobjectxyperm 2, 21, 26
	addobject 2
	setobjectpriority 2, MAP_ROUTE109, 0
	applymovement 2, DewfordTown_Movement_1E991F
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_108_MR_BRINEY
	addobject 1
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat 4, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_1E9790
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_1E9799
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectpriority EVENT_OBJ_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectpriority 2, MAP_ROUTE109
	copyobjectxytoperm 2
	release
	end

DewfordTown_EventScript_1E9790:: @ 81E9790
	msgbox DewfordTown_Text_1EEC1D, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_1E9799:: @ 81E9799
	msgbox DewfordTown_Text_1EEDA7, MSGBOX_DEFAULT
	return

DewfordTown_Movement_1E97A2: @ 81E97A2
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_1E9865: @ 81E9865
	walk_right
	walk_fast_right
	walk_fast_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DewfordTown_Movement_1E9911: @ 81E9911
	walk_right
	walk_up
	step_end

DewfordTown_Movement_1E9914: @ 81E9914
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_1E9918: @ 81E9918
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end

DewfordTown_Movement_1E991D: @ 81E991D
	walk_up
	step_end

DewfordTown_Movement_1E991F: @ 81E991F
	walk_up
	walk_up
	step_end

DewfordTown_EventScript_1E9922:: @ 81E9922
	lock
	faceplayer
	call DewfordTown_EventScript_271E8B
	msgbox DewfordTown_Text_1EA136, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_1E9948
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_EventScript_1E9952
	end

DewfordTown_EventScript_1E9948:: @ 81E9948
	msgbox DewfordTown_Text_1EA491, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E9952:: @ 81E9952
	msgbox DewfordTown_Text_1EA242, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_1E997D
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_EventScript_1E9994
	end

DewfordTown_EventScript_1E997D:: @ 81E997D
	incrementgamestat 2
	compare VAR_0x8004, 0
	goto_if_eq DewfordTown_EventScript_1E999E
	msgbox DewfordTown_Text_1EA2AA, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E9994:: @ 81E9994
	msgbox DewfordTown_Text_1EA443, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_1E999E:: @ 81E999E
	msgbox DewfordTown_Text_1EA3FE, MSGBOX_DEFAULT
	release
	end

DewfordTown_Text_1E99A8: @ 81E99A8
	.i18n 2082

DewfordTown_Text_1E9A0F: @ 81E9A0F
	.i18n 2083

DewfordTown_Text_1E9A3D: @ 81E9A3D
	.i18n 2084

DewfordTown_Text_1E9A7F: @ 81E9A7F
	.i18n 2085

Route104_Text_1E9AAF: @ 81E9AAF
	.i18n 2086

DewfordTown_Text_1E9B24: @ 81E9B24
	.i18n 2087

DewfordTown_Text_1E9B7F: @ 81E9B7F
	.i18n 2088

DewfordTown_Text_1E9BD9: @ 81E9BD9
	.i18n 2089

Route104_Text_1E9C1D: @ 81E9C1D
Route109_Text_1E9C1D: @ 81E9C1D
	.i18n 2090

DewfordTown_Text_1E9C8A: @ 81E9C8A
	.i18n 2091

DewfordTown_Text_1E9CE5: @ 81E9CE5
	.i18n 2092

DewfordTown_Text_1E9D3A: @ 81E9D3A
	.i18n 2093

DewfordTown_Text_1E9D8F: @ 81E9D8F
	.i18n 2094

DewfordTown_Text_1E9DD1: @ 81E9DD1
	.i18n 2095

DewfordTown_Text_1E9E14: @ 81E9E14
	.i18n 2096

DewfordTown_Text_1E9E65: @ 81E9E65
	.i18n 2097

DewfordTown_Text_1E9F92: @ 81E9F92
	.i18n 2098

DewfordTown_Text_1E9FB8: @ 81E9FB8
	.i18n 2099

DewfordTown_Text_1E9FD0: @ 81E9FD0
	.i18n 2100

DewfordTown_Text_1EA004: @ 81EA004
	.i18n 2101

DewfordTown_Text_1EA136: @ 81EA136
	.i18n 2102

DewfordTown_Text_1EA242: @ 81EA242
	.i18n 2103

DewfordTown_Text_1EA2AA: @ 81EA2AA
	.i18n 2104

DewfordTown_Text_1EA3FE: @ 81EA3FE
	.i18n 2105

DewfordTown_Text_1EA443: @ 81EA443
	.i18n 2106

DewfordTown_Text_1EA491: @ 81EA491
	.i18n 2107
