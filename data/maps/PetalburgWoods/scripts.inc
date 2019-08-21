PetalburgWoods_MapScripts:: @ 822DFD6
	.byte 0

PetalburgWoods_EventScript_22DFD7:: @ 822DFD7
	lockall
	call PetalburgWoods_EventScript_22E124
	applymovement 4, PetalburgWoods_Movement_22E1CB
	waitmovement 0
	msgbox PetalburgWoods_Text_22E34F, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_AQA_0, 0
	applymovement 3, PetalburgWoods_Movement_22E209
	waitmovement 0
	msgbox PetalburgWoods_Text_22E3AA, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_22E1F6
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox PetalburgWoods_Text_22E428, MSGBOX_DEFAULT
	closemessage
	applymovement 4, PetalburgWoods_Movement_22E1E4
	waitmovement 0
	msgbox PetalburgWoods_Text_22E457, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_22E20E
	waitmovement 0
	msgbox PetalburgWoods_Text_22E4A5, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_8, PetalburgWoods_Text_22E542
	applymovement 3, PetalburgWoods_Movement_22E1F9
	waitmovement 0
	call PetalburgWoods_EventScript_22E138
	applymovement EVENT_OBJ_ID_PLAYER, PetalburgWoods_Movement_22E1E0
	applymovement 4, PetalburgWoods_Movement_22E1C2
	waitmovement 0
	goto PetalburgWoods_EventScript_22E1A7
	end

PetalburgWoods_EventScript_22E079:: @ 822E079
	lockall
	call PetalburgWoods_EventScript_22E124
	applymovement 4, PetalburgWoods_Movement_22E1D0
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_22E34F, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_AQA_0, 0
	applymovement 3, PetalburgWoods_Movement_22E209
	waitmovement 0
	msgbox PetalburgWoods_Text_22E3AA, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_22E205
	waitmovement 0
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox PetalburgWoods_Text_22E428, MSGBOX_DEFAULT
	closemessage
	applymovement 4, PetalburgWoods_Movement_22E1EA
	waitmovement 0
	msgbox PetalburgWoods_Text_22E457, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox PetalburgWoods_Text_22E4A5, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_8, PetalburgWoods_Text_22E542
	applymovement 3, PetalburgWoods_Movement_22E1F9
	waitmovement 0
	call PetalburgWoods_EventScript_22E138
	applymovement EVENT_OBJ_ID_PLAYER, PetalburgWoods_Movement_22E1E0
	applymovement 4, PetalburgWoods_Movement_22E1D7
	waitmovement 0
	goto PetalburgWoods_EventScript_22E1A7
	end

PetalburgWoods_EventScript_22E124:: @ 822E124
	applymovement 4, PetalburgWoods_Movement_22E1B1
	waitmovement 0
	msgbox PetalburgWoods_Text_22E332, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_22E138:: @ 822E138
	msgbox PetalburgWoods_Text_22E563, MSGBOX_DEFAULT
	closemessage
	applymovement 3, PetalburgWoods_Movement_22E1FD
	waitmovement 0
	removeobject 3
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox PetalburgWoods_Text_22E63D, MSGBOX_DEFAULT
	giveitem_std ITEM_GREAT_BALL
	compare VAR_RESULT, 0
	goto_if_eq PetalburgWoods_EventScript_22E17D
	goto PetalburgWoods_EventScript_22E18B
	end

PetalburgWoods_EventScript_22E17D:: @ 822E17D
	msgbox PetalburgWoods_Text_22E741, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_22E18B
	end

PetalburgWoods_EventScript_22E18B:: @ 822E18B
	msgbox PetalburgWoods_Text_22E6C7, MSGBOX_DEFAULT
	applymovement 4, PetalburgWoods_Movement_22E1EE
	waitmovement 0
	msgbox PetalburgWoods_Text_22E712, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_22E1A7:: @ 822E1A7
	removeobject 4
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_22E1B1: @ 822E1B1
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_22E1C2: @ 822E1C2
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_22E1CB: @ 822E1CB
	delay_16
	face_player
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_22E1D0: @ 822E1D0
	delay_16
	face_player
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

PetalburgWoods_Movement_22E1D7: @ 822E1D7
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_22E1E0: @ 822E1E0
	delay_16
	delay_16
	walk_in_place_fastest_up
	step_end

PetalburgWoods_Movement_22E1E4: @ 822E1E4
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_in_place_fastest_up
	step_end

PetalburgWoods_Movement_22E1EA: @ 822E1EA
	walk_fast_down
	walk_fast_right
	walk_in_place_fastest_up
	step_end

PetalburgWoods_Movement_22E1EE: @ 822E1EE
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_22E1F6: @ 822E1F6
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_22E1F9: @ 822E1F9
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_22E1FD: @ 822E1FD
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_22E205: @ 822E205
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_22E209: @ 822E209
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_22E20E: @ 822E20E
	walk_down
	step_end

PetalburgWoods_EventScript_22E210:: @ 822E210
	msgbox PetalburgWoods_Text_22EA0C, MSGBOX_NPC
	end

PetalburgWoods_EventScript_22E219:: @ 822E219
	msgbox PetalburgWoods_Text_22EA8B, MSGBOX_NPC
	end

PetalburgWoods_EventScript_22E222:: @ 822E222
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_22E251
	msgbox PetalburgWoods_Text_22EAFE, MSGBOX_DEFAULT
	giveitem_std ITEM_MIRACLE_SEED
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_22E251:: @ 822E251
	msgbox PetalburgWoods_Text_22EB63, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_22E25B:: @ 822E25B
	msgbox PetalburgWoods_Text_22EC10, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_22E264:: @ 822E264
	msgbox PetalburgWoods_Text_22ED07, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_22E26D:: @ 822E26D
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_22E77D, PetalburgWoods_Text_22E7C1
	msgbox PetalburgWoods_Text_22E7EF, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_22E284:: @ 822E284
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_22E827, PetalburgWoods_Text_22E86B, PetalburgWoods_EventScript_22E2C5
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq PetalburgWoods_EventScript_22E31B
	setvar VAR_0x8004, 621
	specialvar VAR_RESULT, sub_813B4E0
	compare VAR_RESULT, 0
	goto_if_eq PetalburgWoods_EventScript_22E2EF
	msgbox PetalburgWoods_Text_22E889, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_22E2C5:: @ 822E2C5
	special sub_80B4808
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_22E2D6
	release
	end

PetalburgWoods_EventScript_22E2D6:: @ 822E2D6
	msgbox PetalburgWoods_Text_22E8C3, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_22E2EF:: @ 822E2EF
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_22E302
	msgbox PetalburgWoods_Text_22E889, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_22E302:: @ 822E302
	msgbox PetalburgWoods_Text_22E914, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_22E31B:: @ 822E31B
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_22E966, PetalburgWoods_Text_22E998
	msgbox PetalburgWoods_Text_22E9B6, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Text_22E332: @ 822E332
	.i18n 3526

PetalburgWoods_Text_22E34F: @ 822E34F
	.i18n 3527

PetalburgWoods_Text_22E3AA: @ 822E3AA
	.i18n 3528

PetalburgWoods_Text_22E428: @ 822E428
	.i18n 3529

PetalburgWoods_Text_22E457: @ 822E457
	.i18n 3530

PetalburgWoods_Text_22E4A5: @ 822E4A5
	.i18n 3531

PetalburgWoods_Text_22E542: @ 822E542
	.i18n 3532

PetalburgWoods_Text_22E563: @ 822E563
	.i18n 3533

PetalburgWoods_Text_22E63D: @ 822E63D
	.i18n 3534

PetalburgWoods_Text_22E6C7: @ 822E6C7
	.i18n 3535

PetalburgWoods_Text_22E712: @ 822E712
	.i18n 3536

PetalburgWoods_Text_22E741: @ 822E741
	.i18n 3537

PetalburgWoods_Text_22E77D: @ 822E77D
	.i18n 3538

PetalburgWoods_Text_22E7C1: @ 822E7C1
	.i18n 3539

PetalburgWoods_Text_22E7EF: @ 822E7EF
	.i18n 3540

PetalburgWoods_Text_22E827: @ 822E827
	.i18n 3541

PetalburgWoods_Text_22E86B: @ 822E86B
	.i18n 3542

PetalburgWoods_Text_22E889: @ 822E889
	.i18n 3543

PetalburgWoods_Text_22E8C3: @ 822E8C3
	.i18n 3544

PetalburgWoods_Text_22E914: @ 822E914
	.i18n 3545

PetalburgWoods_Text_22E966: @ 822E966
	.i18n 3546

PetalburgWoods_Text_22E998: @ 822E998
	.i18n 3547

PetalburgWoods_Text_22E9B6: @ 822E9B6
	.i18n 3548

PetalburgWoods_Text_22EA0C: @ 822EA0C
	.i18n 3549

PetalburgWoods_Text_22EA8B: @ 822EA8B
	.i18n 3550

PetalburgWoods_Text_22EAFE: @ 822EAFE
	.i18n 3551

PetalburgWoods_Text_22EB63: @ 822EB63
	.i18n 3552

PetalburgWoods_Text_22EC10: @ 822EC10
	.i18n 3553

PetalburgWoods_Text_22ED07: @ 822ED07
	.i18n 3554

