SlateportCity_OceanicMuseum_2F_MapScripts:: @ 820BAFF
	.byte 0

SlateportCity_OceanicMuseum_2F_EventScript_20BB00:: @ 820BB00
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BD8D, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_AQA_0, 1
	addobject 3
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_20BCE4
	waitmovement 0
	addobject 4
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_20BCF3
	waitmovement 0
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_20BCE8
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_20BCF5
	waitmovement 0
	compare VAR_FACING, 1
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_20BC92
	compare VAR_FACING, 4
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_20BC92
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BE40, MSGBOX_DEFAULT
	compare VAR_FACING, 4
	call_if_ne SlateportCity_OceanicMuseum_2F_EventScript_20BC9D
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BE69, MSGBOX_DEFAULT
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BE93, MSGBOX_DEFAULT
	closemessage
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_20BCE2
	waitmovement 0
	compare VAR_FACING, 1
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_20BCA8
	compare VAR_FACING, 3
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_20BCB3
	trainerbattle_no_intro TRAINER_GRUNT_14, SlateportCity_OceanicMuseum_2F_Text_20BEE2
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BEFA, MSGBOX_DEFAULT
	closemessage
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_20BCEF
	waitmovement 0
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_20BCE2
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BF35, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_15, SlateportCity_OceanicMuseum_2F_Text_20BF66
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_20BCEF
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceDown
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BF7A, MSGBOX_DEFAULT
	closemessage
	delay 35
	addobject 2
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_20BCD8
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_20BCFE
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_20BFF2, MSGBOX_DEFAULT
	closemessage
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_20BCD6
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C059, MSGBOX_DEFAULT
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen 1
	removeobject 2
	removeobject 3
	removeobject 4
	fadescreen 0
	delay 30
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C2BE, MSGBOX_DEFAULT
	setvar VAR_0x8004, 269
	call SlateportCity_OceanicMuseum_2F_EventScript_2723E4
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C36C, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty
	removeobject 1
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
	compare VAR_REGISTER_BIRCH_STATE, 0
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_20BC8C
	setflag FLAG_DELIVERED_DEVON_GOODS
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	fadescreen 0
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BC8C:: @ 820BC8C
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return

SlateportCity_OceanicMuseum_2F_EventScript_20BC92:: @ 820BC92
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_20BC9D:: @ 820BC9D
	applymovement 1, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_20BCA8:: @ 820BCA8
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_20BCBE
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_20BCB3:: @ 820BCB3
	applymovement EVENT_OBJ_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_20BCC2
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_Movement_20BCBE: @ 820BCBE
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCC2: @ 820BCC2
	walk_up
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCC8: @ 820BCC8
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	delay_8
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCD6: @ 820BCD6
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCD8: @ 820BCD8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCE2: @ 820BCE2
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCE4: @ 820BCE4
	walk_down
	walk_right
	walk_in_place_fastest_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCE8: @ 820BCE8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCEF: @ 820BCEF
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCF3: @ 820BCF3
	walk_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCF5: @ 820BCF5
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_20BCFE: @ 820BCFE
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_fast_down
	walk_in_place_fastest_up
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_20BD0A:: @ 820BD0A
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C4F9, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD13:: @ 820BD13
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C566, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD1C:: @ 820BD1C
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C5C6, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD25:: @ 820BD25
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C6C7, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD2E:: @ 820BD2E
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C72F, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD37:: @ 820BD37
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C7C1, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD40:: @ 820BD40
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C82F, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD49:: @ 820BD49
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C88B, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD52:: @ 820BD52
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C8E8, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD5B:: @ 820BD5B
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C93A, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD64:: @ 820BD64
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C43F, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD6D:: @ 820BD6D
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C495, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_20BD76:: @ 820BD76
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_20C4C2, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_OceanicMuseum_2F_Text_20BD8D: @ 820BD8D
	.i18n 4526

SlateportCity_OceanicMuseum_2F_Text_20BE40: @ 820BE40
	.i18n 4527

SlateportCity_OceanicMuseum_2F_Text_20BE69: @ 820BE69
	.i18n 4528

SlateportCity_OceanicMuseum_2F_Text_20BE93: @ 820BE93
	.i18n 4529

SlateportCity_OceanicMuseum_2F_Text_20BEE2: @ 820BEE2
	.i18n 4530

SlateportCity_OceanicMuseum_2F_Text_20BEFA: @ 820BEFA
	.i18n 4531

SlateportCity_OceanicMuseum_2F_Text_20BF35: @ 820BF35
	.i18n 4532

SlateportCity_OceanicMuseum_2F_Text_20BF66: @ 820BF66
	.i18n 4533

SlateportCity_OceanicMuseum_2F_Text_20BF7A: @ 820BF7A
	.i18n 4534

SlateportCity_OceanicMuseum_2F_Text_20BFF2: @ 820BFF2
	.i18n 4535

SlateportCity_OceanicMuseum_2F_Text_20C059: @ 820C059
	.i18n 4536

SlateportCity_OceanicMuseum_2F_Text_20C2BE: @ 820C2BE
	.i18n 4537

SlateportCity_OceanicMuseum_2F_Text_20C36C: @ 820C36C
	.i18n 4538

SlateportCity_OceanicMuseum_2F_Text_20C43F: @ 820C43F
	.i18n 4539

SlateportCity_OceanicMuseum_2F_Text_20C495: @ 820C495
	.i18n 4540

SlateportCity_OceanicMuseum_2F_Text_20C4C2: @ 820C4C2
	.i18n 4541

SlateportCity_OceanicMuseum_2F_Text_20C4F9: @ 820C4F9
	.i18n 4542

SlateportCity_OceanicMuseum_2F_Text_20C566: @ 820C566
	.i18n 4543

SlateportCity_OceanicMuseum_2F_Text_20C5C6: @ 820C5C6
	.i18n 4544

SlateportCity_OceanicMuseum_2F_Text_20C6C7: @ 820C6C7
	.i18n 4545

SlateportCity_OceanicMuseum_2F_Text_20C72F: @ 820C72F
	.i18n 4546

SlateportCity_OceanicMuseum_2F_Text_20C7C1: @ 820C7C1
	.i18n 4547

SlateportCity_OceanicMuseum_2F_Text_20C82F: @ 820C82F
	.i18n 4548

SlateportCity_OceanicMuseum_2F_Text_20C88B: @ 820C88B
	.i18n 4549

SlateportCity_OceanicMuseum_2F_Text_20C8E8: @ 820C8E8
	.i18n 4550

SlateportCity_OceanicMuseum_2F_Text_20C93A: @ 820C93A
	.i18n 4551

