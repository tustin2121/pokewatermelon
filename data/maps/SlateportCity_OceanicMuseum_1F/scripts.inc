SlateportCity_OceanicMuseum_1F_MapScripts:: @ 820AD95
	.byte 0

SlateportCity_OceanicMuseum_1F_EventScript_20AD96:: @ 820AD96
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B026, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AD9F:: @ 820AD9F
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_20ADC1
	end

SlateportCity_OceanicMuseum_1F_EventScript_20ADB0:: @ 820ADB0
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_20ADC1
	end

SlateportCity_OceanicMuseum_1F_EventScript_20ADC1:: @ 820ADC1
	showmoneybox 0, 0, 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_20AFD5, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20ADE8
	closemessage
	hidemoneybox
	nop
	nop
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_20AE4B
	waitmovement 0
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_20ADE8:: @ 820ADE8
	checkmoney 0x32, 0
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20AE18
	playse SE_REGI
	takemoney 0x32, 0
	updatemoneybox 0, 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B026, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
	hidemoneybox
	nop
	nop
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE18:: @ 820AE18
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_20AE39
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B03D, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	nop
	nop
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_20AE4B
	waitmovement 0
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE39:: @ 820AE39
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B075, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
	hidemoneybox
	nop
	nop
	releaseall
	end

SlateportCity_OceanicMuseum_1F_Movement_20AE4B: @ 820AE4B
	walk_down
	step_end

SlateportCity_OceanicMuseum_1F_EventScript_20AE4D:: @ 820AE4D
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B0E8, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE56:: @ 820AE56
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B112, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE5F:: @ 820AE5F
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B165, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE68:: @ 820AE68
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B19C, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE71:: @ 820AE71
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B1D4, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE7A:: @ 820AE7A
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B218, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE83:: @ 820AE83
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B4CF, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE8C:: @ 820AE8C
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B547, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE95:: @ 820AE95
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B5CA, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AE9E:: @ 820AE9E
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B699, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEA7:: @ 820AEA7
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B74B, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEB0:: @ 820AEB0
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B81F, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEB9:: @ 820AEB9
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B912, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEC2:: @ 820AEC2
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B9C0, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AECB:: @ 820AECB
	msgbox SlateportCity_OceanicMuseum_1F_Text_20BA9C, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AED4:: @ 820AED4
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B25F, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEDD:: @ 820AEDD
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B2A2, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEE6:: @ 820AEE6
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B302, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEEF:: @ 820AEEF
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B369, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AEF8:: @ 820AEF8
	lock
	faceplayer
	delay 8
	playse SE_PIN
	applymovement 13, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 13, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B3AB, MSGBOX_DEFAULT
	giveitem_std ITEM_TM46
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20AFB5
	setflag FLAG_RECEIVED_TM46
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B449, MSGBOX_DEFAULT
	closemessage
	compare VAR_FACING, 2
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20AF6C
	compare VAR_FACING, 1
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20AF83
	compare VAR_FACING, 3
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20AF93
	compare VAR_FACING, 4
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_20AF93
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AF6C:: @ 820AF6C
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_20AFBF
	applymovement 13, SlateportCity_OceanicMuseum_1F_Movement_20AFCE
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_20AFAA
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AF83:: @ 820AF83
	applymovement 13, SlateportCity_OceanicMuseum_1F_Movement_20AFC7
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_20AFAA
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AF93:: @ 820AF93
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_20AFC4
	applymovement 13, SlateportCity_OceanicMuseum_1F_Movement_20AFC7
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_20AFAA
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AFAA:: @ 820AFAA
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
	playse SE_KAIDAN
	removeobject 13
	release
	end

SlateportCity_OceanicMuseum_1F_EventScript_20AFB5:: @ 820AFB5
	msgbox SlateportCity_OceanicMuseum_1F_Text_20B49B, MSGBOX_DEFAULT
	release
	end

SlateportCity_OceanicMuseum_1F_Movement_20AFBF: @ 820AFBF
	delay_16
	delay_8
	delay_4
	walk_in_place_fastest_down
	step_end

SlateportCity_OceanicMuseum_1F_Movement_20AFC4: @ 820AFC4
	delay_16
	walk_in_place_fastest_down
	step_end

SlateportCity_OceanicMuseum_1F_Movement_20AFC7: @ 820AFC7
	face_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

SlateportCity_OceanicMuseum_1F_Movement_20AFCE: @ 820AFCE
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

SlateportCity_OceanicMuseum_1F_Text_20AFD5: @ 820AFD5
	.i18n 4500

SlateportCity_OceanicMuseum_1F_Text_20B026: @ 820B026
	.i18n 4501

SlateportCity_OceanicMuseum_1F_Text_20B03D: @ 820B03D
	.i18n 4502

SlateportCity_OceanicMuseum_1F_Text_20B075: @ 820B075
	.i18n 4503

SlateportCity_OceanicMuseum_1F_Text_20B0E8: @ 820B0E8
	.i18n 4504

SlateportCity_OceanicMuseum_1F_Text_20B112: @ 820B112
	.i18n 4505

SlateportCity_OceanicMuseum_1F_Text_20B165: @ 820B165
	.i18n 4506

SlateportCity_OceanicMuseum_1F_Text_20B19C: @ 820B19C
	.i18n 4507

SlateportCity_OceanicMuseum_1F_Text_20B1D4: @ 820B1D4
	.i18n 4508

SlateportCity_OceanicMuseum_1F_Text_20B218: @ 820B218
	.i18n 4509

SlateportCity_OceanicMuseum_1F_Text_20B25F: @ 820B25F
	.i18n 4510

SlateportCity_OceanicMuseum_1F_Text_20B2A2: @ 820B2A2
	.i18n 4511

SlateportCity_OceanicMuseum_1F_Text_20B302: @ 820B302
	.i18n 4512

SlateportCity_OceanicMuseum_1F_Text_20B369: @ 820B369
	.i18n 4513

SlateportCity_OceanicMuseum_1F_Text_20B3AB: @ 820B3AB
	.i18n 4514

SlateportCity_OceanicMuseum_1F_Text_20B449: @ 820B449
	.i18n 4515

SlateportCity_OceanicMuseum_1F_Text_20B49B: @ 820B49B
	.i18n 4516

SlateportCity_OceanicMuseum_1F_Text_20B4CF: @ 820B4CF
	.i18n 4517

SlateportCity_OceanicMuseum_1F_Text_20B547: @ 820B547
	.i18n 4518

SlateportCity_OceanicMuseum_1F_Text_20B5CA: @ 820B5CA
	.i18n 4519

SlateportCity_OceanicMuseum_1F_Text_20B699: @ 820B699
	.i18n 4520

SlateportCity_OceanicMuseum_1F_Text_20B74B: @ 820B74B
	.i18n 4521

SlateportCity_OceanicMuseum_1F_Text_20B81F: @ 820B81F
	.i18n 4522

SlateportCity_OceanicMuseum_1F_Text_20B912: @ 820B912
	.i18n 4523

SlateportCity_OceanicMuseum_1F_Text_20B9C0: @ 820B9C0
	.i18n 4524

SlateportCity_OceanicMuseum_1F_Text_20BA9C: @ 820BA9C
	.i18n 4525

