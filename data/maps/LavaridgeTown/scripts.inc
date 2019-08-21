LavaridgeTown_MapScripts:: @ 81EA4D3
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScript2_1EA547
	.byte 0

LavaridgeTown_OnTransition: @ 81EA4DE
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	call_if_set FLAG_FLANNERY_GIVES_BADGE_INFO, LavaridgeTown_EventScript_1EA514
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_1EA53F
	call Common_EventScript_SetupRivalGender
	call Common_EventScript_SetupRivalOnBikeGender
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	call_if_eq LavaridgeTown_EventScript_1EA518
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	call_if_eq LavaridgeTown_EventScript_1EA543
	end

LavaridgeTown_EventScript_1EA514:: @ 81EA514
	clearflag FLAG_FLANNERY_GIVES_BADGE_INFO
	return

LavaridgeTown_EventScript_1EA518:: @ 81EA518
	getplayerxy VAR_0x8004, VAR_0x8005
	compare VAR_0x8004, 9
	goto_if_eq LavaridgeTown_EventScript_1EA529
	return

LavaridgeTown_EventScript_1EA529:: @ 81EA529
	setobjectxyperm 8, 11, 9
	setobjectxyperm 7, 9, 8
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_1
	return

LavaridgeTown_EventScript_1EA53F:: @ 81EA53F
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	return

LavaridgeTown_EventScript_1EA543:: @ 81EA543
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LavaridgeTown_MapScript2_1EA547: @ 81EA547
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_1EA551
	.2byte 0

LavaridgeTown_EventScript_1EA551:: @ 81EA551
	lockall
	getplayerxy VAR_0x8008, VAR_0x8009
	compare VAR_0x8008, 9
	call_if_eq LavaridgeTown_EventScript_1EA63A
	compare VAR_0x8008, 9
	call_if_ne LavaridgeTown_EventScript_1EA65C
	delay 20
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq LavaridgeTown_EventScript_1EA630
	compare VAR_RESULT, FEMALE
	call_if_eq LavaridgeTown_EventScript_1EA635
	compare VAR_0x8008, 9
	call_if_eq LavaridgeTown_EventScript_1EA6A1
	compare VAR_0x8008, 9
	call_if_ne LavaridgeTown_EventScript_1EA6AC
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_1EA5B5
	compare VAR_RESULT, FEMALE
	goto_if_eq LavaridgeTown_EventScript_1EA5DA
	end

LavaridgeTown_EventScript_1EA5B5:: @ 81EA5B5
	msgbox LavaridgeTown_Text_1EA7C0, MSGBOX_DEFAULT
	giveitem_std ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox LavaridgeTown_Text_1EA897, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_1EA5FF
	end

LavaridgeTown_EventScript_1EA5DA:: @ 81EA5DA
	msgbox LavaridgeTown_Text_1EA9A2, MSGBOX_DEFAULT
	giveitem_std ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox LavaridgeTown_Text_1EAA2E, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_1EA5FF
	end

LavaridgeTown_EventScript_1EA5FF:: @ 81EA5FF
	closemessage
	removeobject 8
	addobject 7
	delay 30
	compare VAR_0x8008, 9
	call_if_eq LavaridgeTown_EventScript_1EA6B7
	compare VAR_0x8008, 9
	call_if_ne LavaridgeTown_EventScript_1EA6C9
	removeobject 7
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LavaridgeTown_EventScript_1EA630:: @ 81EA630
	playbgm MUS_GIRL_SUP, 1
	return

LavaridgeTown_EventScript_1EA635:: @ 81EA635
	playbgm MUS_BOY_SUP, 1
	return

LavaridgeTown_EventScript_1EA63A:: @ 81EA63A
	applymovement 8, Common_Movement_WalkInPlaceUp
	waitmovement 0
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	return

LavaridgeTown_EventScript_1EA65C:: @ 81EA65C
	opendoor 12, 15
	waitdooranim
	addobject 8
	applymovement 8, LavaridgeTown_Movement_1EA6F8
	waitmovement 0
	closedoor 12, 15
	waitdooranim
	applymovement 8, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 8, Common_Movement_Delay48
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

LavaridgeTown_EventScript_1EA6A1:: @ 81EA6A1
	applymovement 8, LavaridgeTown_Movement_1EA6F4
	waitmovement 0
	return

LavaridgeTown_EventScript_1EA6AC:: @ 81EA6AC
	applymovement 8, LavaridgeTown_Movement_1EA6ED
	waitmovement 0
	return

LavaridgeTown_EventScript_1EA6B7:: @ 81EA6B7
	applymovement EVENT_OBJ_ID_PLAYER, LavaridgeTown_Movement_1EA6DF
	applymovement 7, LavaridgeTown_Movement_1EA6E3
	waitmovement 0
	return

LavaridgeTown_EventScript_1EA6C9:: @ 81EA6C9
	applymovement 7, LavaridgeTown_Movement_1EA6D4
	waitmovement 0
	return

LavaridgeTown_Movement_1EA6D4: @ 81EA6D4
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

LavaridgeTown_Movement_1EA6DF: @ 81EA6DF
	delay_16
	delay_8
	walk_in_place_fastest_right
	step_end

LavaridgeTown_Movement_1EA6E3: @ 81EA6E3
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

LavaridgeTown_Movement_1EA6ED: @ 81EA6ED
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

LavaridgeTown_Movement_1EA6F4: @ 81EA6F4
	walk_left
	walk_left
	walk_up
	step_end

LavaridgeTown_Movement_1EA6F8: @ 81EA6F8
	walk_down
	step_end

LavaridgeTown_EventScript_1EA6FA:: @ 81EA6FA
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_EventScript_1EA70B
	end

LavaridgeTown_EventScript_1EA70B:: @ 81EA70B
	incrementgamestat 49
	end

LavaridgeTown_EventScript_1EA70E:: @ 81EA70E
	msgbox LavaridgeTown_Text_1EAE03, MSGBOX_NPC
	end

LavaridgeTown_EventScript_1EA717:: @ 81EA717
	msgbox LavaridgeTown_Text_1EAEE1, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_1EA720:: @ 81EA720
	msgbox LavaridgeTown_Text_1EAF9B, MSGBOX_NPC
	end

LavaridgeTown_EventScript_1EA729:: @ 81EA729
	msgbox LavaridgeTown_Text_1EB003, MSGBOX_NPC
	end

LavaridgeTown_EventScript_1EA732:: @ 81EA732
	msgbox LavaridgeTown_Text_1EB092, MSGBOX_NPC
	end

LavaridgeTown_EventScript_1EA73B:: @ 81EA73B
	msgbox LavaridgeTown_Text_1EAF4E, MSGBOX_NPC
	end

LavaridgeTown_EventScript_1EA744:: @ 81EA744
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_1EA787
	msgbox LavaridgeTown_Text_1EAB80, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LavaridgeTown_EventScript_1EA79B
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq LavaridgeTown_EventScript_1EA791
	msgbox LavaridgeTown_Text_1EACC0, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	playfanfare MUS_FANFA4
	message LavaridgeTown_Text_1EACF4
	waitfanfare
	giveegg SPECIES_WYNAUT
	release
	end

LavaridgeTown_EventScript_1EA787:: @ 81EA787
	msgbox LavaridgeTown_Text_1EAD9E, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_EventScript_1EA791:: @ 81EA791
	msgbox LavaridgeTown_Text_1EAD09, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_EventScript_1EA79B:: @ 81EA79B
	msgbox LavaridgeTown_Text_1EAD44, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_EventScript_1EA7A5:: @ 81EA7A5
	msgbox LavaridgeTown_Text_1EB12B, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_1EA7AE:: @ 81EA7AE
	msgbox LavaridgeTown_Text_1EB178, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_1EA7B7:: @ 81EA7B7
	msgbox LavaridgeTown_Text_1EB1CB, MSGBOX_SIGN
	end

LavaridgeTown_Text_1EA7C0: @ 81EA7C0
	.i18n 2367

LavaridgeTown_Text_1EA897: @ 81EA897
	.i18n 2368

LavaridgeTown_Text_1EA9A2: @ 81EA9A2
	.i18n 2369

LavaridgeTown_Text_1EAA2E: @ 81EAA2E
	.i18n 2370

LavaridgeTown_Text_1EAB80: @ 81EAB80
	.i18n 2371

LavaridgeTown_Text_1EACC0: @ 81EACC0
	.i18n 2372

LavaridgeTown_Text_1EACF4: @ 81EACF4
	.i18n 2373

LavaridgeTown_Text_1EAD09: @ 81EAD09
	.i18n 2374

LavaridgeTown_Text_1EAD44: @ 81EAD44
	.i18n 2375

LavaridgeTown_Text_1EAD9E: @ 81EAD9E
	.i18n 2376

LavaridgeTown_Text_1EAE03: @ 81EAE03
	.i18n 2377

LavaridgeTown_Text_1EAEE1: @ 81EAEE1
	.i18n 2378

LavaridgeTown_Text_1EAF4E: @ 81EAF4E
	.i18n 2379

LavaridgeTown_Text_1EAF9B: @ 81EAF9B
	.i18n 2380

LavaridgeTown_Text_1EB003: @ 81EB003
	.i18n 2381

LavaridgeTown_Text_1EB092: @ 81EB092
	.i18n 2382

LavaridgeTown_Text_1EB12B: @ 81EB12B
	.i18n 2383

LavaridgeTown_Text_1EB178: @ 81EB178
	.i18n 2384

LavaridgeTown_Text_1EB1CB: @ 81EB1CB
	.i18n 2385

