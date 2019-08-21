Route104_MrBrineysHouse_MapScripts:: @ 8229D2E
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
	.byte 0

Route104_MrBrineysHouse_OnTransition: @ 8229D34
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
	compare VAR_BRINEY_HOUSE_STATE, 1
	call_if_eq Route104_MrBrineysHouse_EventScript_229D50
	call_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_EventScript_229D4C
	end

Route104_MrBrineysHouse_EventScript_229D4C:: @ 8229D4C
	setflag FLAG_HIDE_RUSBORO_CITY_RIVAL
	return

Route104_MrBrineysHouse_EventScript_229D50:: @ 8229D50
	setobjectxyperm 1, 9, 3
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
	setobjectxyperm 2, 9, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
	return

Route104_MrBrineysHouse_EventScript_229D67:: @ 8229D67
	lock
	faceplayer
	call_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_229D8A
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_229DE1
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_229DFA
	goto Route104_MrBrineysHouse_EventScript_229DAE
	end

Route104_MrBrineysHouse_EventScript_229D8A:: @ 8229D8A
	setflag FLAG_MR_BRINEY_SAILING_INTRO
	msgbox Route104_MrBrineysHouse_Text_229E70, MSGBOX_DEFAULT
	msgbox Route104_MrBrineysHouse_Text_229E9B, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route104_MrBrineysHouse_EventScript_229E13
	goto Route104_MrBrineysHouse_EventScript_229E27
	end

Route104_MrBrineysHouse_EventScript_229DAE:: @ 8229DAE
	message Route104_MrBrineysHouse_Text_22A268
	waitmessage
	multichoicedefault 20, 8, 14, 1, 0
	switch VAR_RESULT
	case 0, Route104_MrBrineysHouse_EventScript_229E27
	case 1, Route104_MrBrineysHouse_EventScript_229E1D
	case 127, Route104_MrBrineysHouse_EventScript_229E1D
	end

Route104_MrBrineysHouse_EventScript_229DE1:: @ 8229DE1
	msgbox Route104_MrBrineysHouse_Text_22A0AD, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route104_MrBrineysHouse_EventScript_229E13
	goto Route104_MrBrineysHouse_EventScript_229E27
	end

Route104_MrBrineysHouse_EventScript_229DFA:: @ 8229DFA
	msgbox Route104_MrBrineysHouse_Text_22A18F, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route104_MrBrineysHouse_EventScript_229E13
	goto Route104_MrBrineysHouse_EventScript_229E27
	end

Route104_MrBrineysHouse_EventScript_229E13:: @ 8229E13
	msgbox Route104_MrBrineysHouse_Text_22A041, MSGBOX_DEFAULT
	release
	end

Route104_MrBrineysHouse_EventScript_229E1D:: @ 8229E1D
	msgbox Route104_MrBrineysHouse_Text_22A2C3, MSGBOX_DEFAULT
	release
	end

Route104_MrBrineysHouse_EventScript_229E27:: @ 8229E27
	msgbox Route104_MrBrineysHouse_Text_229FE9, MSGBOX_DEFAULT
	call Route104_MrBrineysHouse_EventScript_271E95
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_RUSTBORO_CITY_STATE, 8
	setvar VAR_ROUTE104_STATE, 2
	setflag FLAG_HIDE_RUSBORO_CITY_RIVAL
	setflag FLAG_HIDE_ROUTE_104_RIVAL
	warp MAP_ROUTE104, 255, 13, 51
	waitstate
	releaseall
	end

Route104_MrBrineysHouse_EventScript_229E5D:: @ 8229E5D
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, 0
	msgbox Route104_MrBrineysHouse_Text_22A337, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route104_MrBrineysHouse_Text_229E70: @ 8229E70
	.i18n 3612

Route104_MrBrineysHouse_Text_229E9B: @ 8229E9B
	.i18n 3613

Route104_MrBrineysHouse_Text_229FE9: @ 8229FE9
	.i18n 3614

Route104_MrBrineysHouse_Text_22A041: @ 822A041
	.i18n 3615

Route104_MrBrineysHouse_Text_22A0AD: @ 822A0AD
	.i18n 3616

Route104_MrBrineysHouse_Text_22A18F: @ 822A18F
	.i18n 3617

Route104_MrBrineysHouse_Text_22A268: @ 822A268
	.i18n 3618

Route104_MrBrineysHouse_Text_22A2C3: @ 822A2C3
	.i18n 3619

Route104_MrBrineysHouse_Text_22A337: @ 822A337
	.i18n 3620

