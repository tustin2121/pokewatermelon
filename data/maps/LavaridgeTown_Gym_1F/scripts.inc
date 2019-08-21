LavaridgeTown_Gym_1F_MapScripts:: @ 81FE6F4
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	.byte 0

LavaridgeTown_Gym_1F_OnTransition: @ 81FE6FA
	call LavaridgeTown_Gym_1F_EventScript_1FE705
	call LavaridgeTown_Gym_1F_EventScript_1FE757
	end

LavaridgeTown_Gym_1F_EventScript_1FE705:: @ 81FE705
	setvar VAR_TEMP_B, 0
	setvar VAR_TEMP_C, 0
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	checktrainerflag TRAINER_COLE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE72C
	setvar VAR_TEMP_B, 1

LavaridgeTown_Gym_1F_EventScript_1FE72C:: @ 81FE72C
	checktrainerflag TRAINER_GERALD
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE73A
	setvar VAR_TEMP_C, 1

LavaridgeTown_Gym_1F_EventScript_1FE73A:: @ 81FE73A
	checktrainerflag TRAINER_AXLE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE748
	setvar VAR_TEMP_D, 1

LavaridgeTown_Gym_1F_EventScript_1FE748:: @ 81FE748
	checktrainerflag TRAINER_DANIELLE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE756
	setvar VAR_TEMP_E, 1

LavaridgeTown_Gym_1F_EventScript_1FE756:: @ 81FE756
	return

LavaridgeTown_Gym_1F_EventScript_1FE757:: @ 81FE757
	checktrainerflag TRAINER_COLE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE764
	setobjectmovementtype 2, MOVEMENT_TYPE_HIDDEN

LavaridgeTown_Gym_1F_EventScript_1FE764:: @ 81FE764
	checktrainerflag TRAINER_GERALD
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE771
	setobjectmovementtype 3, MOVEMENT_TYPE_HIDDEN

LavaridgeTown_Gym_1F_EventScript_1FE771:: @ 81FE771
	checktrainerflag TRAINER_AXLE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE77E
	setobjectmovementtype 4, MOVEMENT_TYPE_HIDDEN

LavaridgeTown_Gym_1F_EventScript_1FE77E:: @ 81FE77E
	checktrainerflag TRAINER_DANIELLE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE78B
	setobjectmovementtype 5, MOVEMENT_TYPE_HIDDEN

LavaridgeTown_Gym_1F_EventScript_1FE78B:: @ 81FE78B
	return

LavaridgeTown_Gym_1F_EventScript_1FE78C:: @ 81FE78C
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_1FF0DC, LavaridgeTown_Gym_1F_Text_1FF233, LavaridgeTown_Gym_1F_EventScript_1FE7C1, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_1FE864
	goto_if_unset FLAG_RECEIVED_TM50, LavaridgeTown_Gym_1F_EventScript_1FE81D
	msgbox LavaridgeTown_Gym_1F_Text_1FF546, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_1FE7C1:: @ 81FE7C1
	message LavaridgeTown_Gym_1F_Text_1FF32F
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_1FF359, MSGBOX_DEFAULT
	setflag FLAG_FLANNERY_GIVES_BADGE_INFO
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	compare VAR_PETALBURG_GYM_STATE, 6
	call_if_eq LavaridgeTown_Gym_1F_EventScript_271E84
	setvar VAR_0x8008, 4
	call LavaridgeTown_Gym_1F_EventScript_271F43
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
	call LavaridgeTown_Gym_1F_EventScript_1FE841
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox LavaridgeTown_Gym_1F_Text_1FF517, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	release
	end

LavaridgeTown_Gym_1F_EventScript_1FE81D:: @ 81FE81D
	giveitem_std ITEM_TM50
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_1FF45C, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	release
	end

LavaridgeTown_Gym_1F_EventScript_1FE841:: @ 81FE841
	giveitem_std ITEM_TM50
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_1FF45C, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	return

LavaridgeTown_Gym_1F_EventScript_1FE864:: @ 81FE864
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_1FF601, LavaridgeTown_Gym_1F_Text_1FF69F, LavaridgeTown_Gym_1F_Text_1FF75E
	msgbox LavaridgeTown_Gym_1F_Text_1FF6BF, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_1FE87F:: @ 81FE87F
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_COLE, 2, LavaridgeTown_Gym_1F_Text_1FEADE, LavaridgeTown_Gym_1F_Text_1FEAFB, LavaridgeTown_Gym_1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_1F_Text_1FEB1C, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_1FE89A:: @ 81FE89A
LavaridgeTown_Gym_B1F_EventScript_1FE89A:: @ 81FE89A
	call LavaridgeTown_Gym_1F_EventScript_1FE705
	release
	special ShouldTryGetTrainerScript
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GotoTrainerScript
	end

LavaridgeTown_Gym_1F_EventScript_1FE8AF:: @ 81FE8AF
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_AXLE, 4, LavaridgeTown_Gym_1F_Text_1FEB7B, LavaridgeTown_Gym_1F_Text_1FEBC0, LavaridgeTown_Gym_1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_1F_Text_1FEBE1, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_1FE8CA:: @ 81FE8CA
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_KEEGAN, 2, LavaridgeTown_Gym_B1F_Text_1FEC31, LavaridgeTown_Gym_B1F_Text_1FECE3, LavaridgeTown_Gym_B1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_B1F_Text_1FED02, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_1FE8E5:: @ 81FE8E5
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_DANIELLE, 5, LavaridgeTown_Gym_1F_Text_1FEE22, LavaridgeTown_Gym_1F_Text_1FEE42, LavaridgeTown_Gym_1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_1F_Text_1FEE5D, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_1FE900:: @ 81FE900
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_GERALD, 3, LavaridgeTown_Gym_1F_Text_1FED72, LavaridgeTown_Gym_1F_Text_1FED9E, LavaridgeTown_Gym_1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_1F_Text_1FEDBB, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_1FE91B:: @ 81FE91B
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, 1, LavaridgeTown_Gym_B1F_Text_1FEE9D, LavaridgeTown_Gym_B1F_Text_1FEED5, LavaridgeTown_Gym_B1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_B1F_Text_1FEF07, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_1FE936:: @ 81FE936
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JEFF, 3, LavaridgeTown_Gym_B1F_Text_1FEF60, LavaridgeTown_Gym_B1F_Text_1FEFA7, LavaridgeTown_Gym_B1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_B1F_Text_1FEFC2, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_1FE951:: @ 81FE951
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_ELI, 4, LavaridgeTown_Gym_B1F_Text_1FF025, LavaridgeTown_Gym_B1F_Text_1FF05F, LavaridgeTown_Gym_B1F_EventScript_1FE89A
	msgbox LavaridgeTown_Gym_B1F_Text_1FF09A, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_1FE96C:: @ 81FE96C
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_1FE981
	msgbox LavaridgeTown_Gym_1F_Text_1FE9BF, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_1FE981:: @ 81FE981
	msgbox LavaridgeTown_Gym_1F_Text_1FEAB8, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_1FE98B:: @ 81FE98B
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_1FE9AB
	goto LavaridgeTown_Gym_1F_EventScript_1FE9B5
	end

LavaridgeTown_Gym_1F_EventScript_1FE99B:: @ 81FE99B
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_1FE9AB
	goto LavaridgeTown_Gym_1F_EventScript_1FE9B5
	end

LavaridgeTown_Gym_1F_EventScript_1FE9AB:: @ 81FE9AB
	msgbox LavaridgeTown_Gym_1F_Text_1FF5C4, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_1FE9B5:: @ 81FE9B5
	msgbox LavaridgeTown_Gym_1F_Text_1FF5A9, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_1FE9BF: @ 81FE9BF
	.i18n 2386

LavaridgeTown_Gym_1F_Text_1FEAB8: @ 81FEAB8
	.i18n 2387

LavaridgeTown_Gym_1F_Text_1FEADE: @ 81FEADE
	.i18n 2388

LavaridgeTown_Gym_1F_Text_1FEAFB: @ 81FEAFB
	.i18n 2389

LavaridgeTown_Gym_1F_Text_1FEB1C: @ 81FEB1C
	.i18n 2390

LavaridgeTown_Gym_1F_Text_1FEB7B: @ 81FEB7B
	.i18n 2391

LavaridgeTown_Gym_1F_Text_1FEBC0: @ 81FEBC0
	.i18n 2392

LavaridgeTown_Gym_1F_Text_1FEBE1: @ 81FEBE1
	.i18n 2393

LavaridgeTown_Gym_B1F_Text_1FEC31: @ 81FEC31
	.i18n 2394

LavaridgeTown_Gym_B1F_Text_1FECE3: @ 81FECE3
	.i18n 2395

LavaridgeTown_Gym_B1F_Text_1FED02: @ 81FED02
	.i18n 2396

LavaridgeTown_Gym_1F_Text_1FED72: @ 81FED72
	.i18n 2397

LavaridgeTown_Gym_1F_Text_1FED9E: @ 81FED9E
	.i18n 2398

LavaridgeTown_Gym_1F_Text_1FEDBB: @ 81FEDBB
	.i18n 2399

LavaridgeTown_Gym_1F_Text_1FEE22: @ 81FEE22
	.i18n 2400

LavaridgeTown_Gym_1F_Text_1FEE42: @ 81FEE42
	.i18n 2401

LavaridgeTown_Gym_1F_Text_1FEE5D: @ 81FEE5D
	.i18n 2402

LavaridgeTown_Gym_B1F_Text_1FEE9D: @ 81FEE9D
	.i18n 2403

LavaridgeTown_Gym_B1F_Text_1FEED5: @ 81FEED5
	.i18n 2404

LavaridgeTown_Gym_B1F_Text_1FEF07: @ 81FEF07
	.i18n 2405

LavaridgeTown_Gym_B1F_Text_1FEF60: @ 81FEF60
	.i18n 2406

LavaridgeTown_Gym_B1F_Text_1FEFA7: @ 81FEFA7
	.i18n 2407

LavaridgeTown_Gym_B1F_Text_1FEFC2: @ 81FEFC2
	.i18n 2408

LavaridgeTown_Gym_B1F_Text_1FF025: @ 81FF025
	.i18n 2409

LavaridgeTown_Gym_B1F_Text_1FF05F: @ 81FF05F
	.i18n 2410

LavaridgeTown_Gym_B1F_Text_1FF09A: @ 81FF09A
	.i18n 2411

LavaridgeTown_Gym_1F_Text_1FF0DC: @ 81FF0DC
	.i18n 2412

LavaridgeTown_Gym_1F_Text_1FF233: @ 81FF233
	.i18n 2413

LavaridgeTown_Gym_1F_Text_1FF32F: @ 81FF32F
	.i18n 2414

LavaridgeTown_Gym_1F_Text_1FF359: @ 81FF359
	.i18n 2415

LavaridgeTown_Gym_1F_Text_1FF45C: @ 81FF45C
	.i18n 2416

LavaridgeTown_Gym_1F_Text_1FF517: @ 81FF517
	.i18n 2417

LavaridgeTown_Gym_1F_Text_1FF546: @ 81FF546
	.i18n 2418

LavaridgeTown_Gym_1F_Text_1FF5A9: @ 81FF5A9
	.i18n 2419

LavaridgeTown_Gym_1F_Text_1FF5C4: @ 81FF5C4
	.i18n 2420

LavaridgeTown_Gym_1F_Text_1FF601: @ 81FF601
	.i18n 2421

LavaridgeTown_Gym_1F_Text_1FF69F: @ 81FF69F
	.i18n 2422

LavaridgeTown_Gym_1F_Text_1FF6BF: @ 81FF6BF
	.i18n 2423

LavaridgeTown_Gym_1F_Text_1FF75E: @ 81FF75E
	.i18n 2424
