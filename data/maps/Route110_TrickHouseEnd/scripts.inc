Route110_TrickHouseEnd_MapScripts:: @ 826ACAF
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_MapScript1_26ACC4
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_MapScript2_26ACF5
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_MapScript2_26ACDE
	.byte 0

Route110_TrickHouseEnd_MapScript1_26ACC4: @ 826ACC4
	compare VAR_TEMP_1, 1
	call_if_eq Route110_TrickHouseEnd_EventScript_26AD0D
	end

Route110_TrickHouseEnd_OnTransition: @ 826ACD0
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	special SetTrickHouseEndRoomFlag
	end

Route110_TrickHouseEnd_MapScript2_26ACDE: @ 826ACDE
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_EventScript_26ACE8
	.2byte 0

Route110_TrickHouseEnd_EventScript_26ACE8:: @ 826ACE8
	addobject 1
	showobjectat 1, MAP_ROUTE110_TRICK_HOUSE_END
	turnobject 1, 4
	end

Route110_TrickHouseEnd_MapScript2_26ACF5: @ 826ACF5
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_EventScript_26ACFF
	.2byte 0

Route110_TrickHouseEnd_EventScript_26ACFF:: @ 826ACFF
	setvar VAR_TEMP_1, 1
	call Route110_TrickHouseEnd_EventScript_26AD0D
	special DrawWholeMapView
	end

Route110_TrickHouseEnd_EventScript_26AD0D:: @ 826AD0D
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, 1
	return

Route110_TrickHouseEnd_EventScript_26AD17:: @ 826AD17
	lock
	faceplayer
	msgbox Route110_TrickHouseEnd_Text_26B08D, MSGBOX_DEFAULT
	setvar VAR_TEMP_2, 1
	switch VAR_TRICK_HOUSE_LEVEL
	case 0, Route110_TrickHouseEnd_EventScript_26AD84
	case 1, Route110_TrickHouseEnd_EventScript_26ADC0
	case 2, Route110_TrickHouseEnd_EventScript_26ADFC
	case 3, Route110_TrickHouseEnd_EventScript_26AE38
	case 4, Route110_TrickHouseEnd_EventScript_26AE74
	case 5, Route110_TrickHouseEnd_EventScript_26AEB0
	case 6, Route110_TrickHouseEnd_EventScript_26AEEC
	case 7, Route110_TrickHouseEnd_EventScript_26AF28
	end

Route110_TrickHouseEnd_EventScript_26AD84:: @ 826AD84
	msgbox Route110_TrickHouseEnd_Text_26B0BC, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_RARE_CANDY
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26ADC0:: @ 826ADC0
	msgbox Route110_TrickHouseEnd_Text_26B13B, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_TIMER_BALL
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26ADFC:: @ 826ADFC
	msgbox Route110_TrickHouseEnd_Text_26B1AD, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_HARD_STONE
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26AE38:: @ 826AE38
	msgbox Route110_TrickHouseEnd_Text_26B223, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_SMOKE_BALL
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26AE74:: @ 826AE74
	msgbox Route110_TrickHouseEnd_Text_26B293, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_TM12
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26AEB0:: @ 826AEB0
	msgbox Route110_TrickHouseEnd_Text_26B315, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_MAGNET
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26AEEC:: @ 826AEEC
	msgbox Route110_TrickHouseEnd_Text_26B365, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_26B73D, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem_std ITEM_PP_MAX
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26AFEF
	msgbox Route110_TrickHouseEnd_Text_26B7EF, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_26AFCF
	release
	end

Route110_TrickHouseEnd_EventScript_26AF28:: @ 826AF28
	msgbox Route110_TrickHouseEnd_Text_26B3AB, MSGBOX_DEFAULT
	closemessage
	compare VAR_FACING, 1
	call_if_eq Route110_TrickHouseEnd_EventScript_26B015
	compare VAR_FACING, 2
	call_if_eq Route110_TrickHouseEnd_EventScript_26B020
	compare VAR_FACING, 3
	call_if_eq Route110_TrickHouseEnd_EventScript_26B02B
	compare VAR_FACING, 4
	call_if_eq Route110_TrickHouseEnd_EventScript_26B036
	delay 30
	msgbox Route110_TrickHouseEnd_Text_26B3FA, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	delay 30
	msgbox Route110_TrickHouseEnd_Text_26B485, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	call Route110_TrickHouseEnd_EventScript_26AFA5
	compare VAR_RESULT, 0
	call_if_eq Route110_TrickHouseEnd_EventScript_26B002
	msgbox Route110_TrickHouseEnd_Text_26B69A, MSGBOX_DEFAULT
	call Route110_TrickHouseEnd_EventScript_26AFCF
	special ResetTrickHouseEndRoomFlag
	release
	end

Route110_TrickHouseEnd_EventScript_26AFA5:: @ 826AFA5
	multichoice 0, 0, 88, 1
	switch VAR_RESULT
	case 0, Route110_TrickHouseEnd_EventScript_26AFBF
	goto Route110_TrickHouseEnd_EventScript_26AFC7

Route110_TrickHouseEnd_EventScript_26AFBF:: @ 826AFBF
	givedecoration_std 31
	return

Route110_TrickHouseEnd_EventScript_26AFC7:: @ 826AFC7
	givedecoration_std 32
	return

Route110_TrickHouseEnd_EventScript_26AFCF:: @ 826AFCF
	applymovement 1, Route110_TrickHouseEnd_Movement_269E36
	waitmovement 0
	playse SE_W153
	applymovement 1, Route110_TrickHouseEnd_Movement_269E3F
	waitmovement 0
	removeobject 1
	addvar VAR_TRICK_HOUSE_LEVEL, 1
	return

Route110_TrickHouseEnd_EventScript_26AFEF:: @ 826AFEF
	call Common_EventScript_BagIsFull
	msgbox Route110_TrickHouseEnd_Text_26B760, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	return

Route110_TrickHouseEnd_EventScript_26B002:: @ 826B002
	call Common_EventScript_NoRoomLeftForAnother
	msgbox Route110_TrickHouseEnd_Text_26B615, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	return

Route110_TrickHouseEnd_EventScript_26B015:: @ 826B015
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_26B020:: @ 826B020
	applymovement 1, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_26B02B:: @ 826B02B
	applymovement 1, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_26B036:: @ 826B036
	applymovement 1, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_26B041:: @ 826B041
	lockall
	turnobject 1, 3
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 20
	applymovement 1, Route110_TrickHouseEnd_Movement_26B08B
	waitmovement 0
	playse SE_W153
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox Route110_TrickHouseEnd_Text_26B8BD, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, Route110_TrickHouseEnd_Movement_26B089
	waitmovement 0
	delay 4
	turnobject 1, 4
	releaseall
	end

Route110_TrickHouseEnd_Movement_26B089: @ 826B089
	walk_down
	step_end

Route110_TrickHouseEnd_Movement_26B08B: @ 826B08B
	jump_in_place_left
	step_end

Route110_TrickHouseEnd_Text_26B08D: @ 826B08D
	.i18n 3704

Route110_TrickHouseEnd_Text_26B0BC: @ 826B0BC
	.i18n 3705

Route110_TrickHouseEnd_Text_26B13B: @ 826B13B
	.i18n 3706

Route110_TrickHouseEnd_Text_26B1AD: @ 826B1AD
	.i18n 3707

Route110_TrickHouseEnd_Text_26B223: @ 826B223
	.i18n 3708

Route110_TrickHouseEnd_Text_26B293: @ 826B293
	.i18n 3709

Route110_TrickHouseEnd_Text_26B315: @ 826B315
	.i18n 3710

Route110_TrickHouseEnd_Text_26B365: @ 826B365
	.i18n 3711

Route110_TrickHouseEnd_Text_26B3AB: @ 826B3AB
	.i18n 3712

Route110_TrickHouseEnd_Text_26B3FA: @ 826B3FA
	.i18n 3713

Route110_TrickHouseEnd_Text_26B485: @ 826B485
	.i18n 3714

Route110_TrickHouseEnd_Text_26B615: @ 826B615
	.i18n 3715

Route110_TrickHouseEnd_Text_26B69A: @ 826B69A
	.i18n 3716

Route110_TrickHouseEnd_Text_26B73D: @ 826B73D
	.i18n 3717

Route110_TrickHouseEnd_Text_26B760: @ 826B760
	.i18n 3718

Route110_TrickHouseEnd_Text_26B7EF: @ 826B7EF
	.i18n 3719

Route110_TrickHouseEnd_Text_26B8BD: @ 826B8BD
	.i18n 3720

