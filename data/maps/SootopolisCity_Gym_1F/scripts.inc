SootopolisCity_Gym_1F_MapScripts:: @ 8224E4C
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_MapScript2_224ECB
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_MapScript1_224E67
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_MapScript1_224E6A
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
	.byte 0

SootopolisCity_Gym_1F_OnTransition: @ 8224E61
	setvar VAR_ICE_STEP_COUNT, 1
	end

SootopolisCity_Gym_1F_MapScript1_224E67: @ 8224E67
	setstepcallback 4
	end

SootopolisCity_Gym_1F_MapScript1_224E6A: @ 8224E6A
	call SootopolisCity_Gym_1F_EventScript_224E73
	special SetSootopolisGymCrackedIceMetatiles
	end

SootopolisCity_Gym_1F_EventScript_224E73:: @ 8224E73
	compare VAR_ICE_STEP_COUNT, 8
	goto_if_lt SootopolisCity_Gym_1F_EventScript_224ECA
	compare VAR_ICE_STEP_COUNT, 28
	goto_if_lt SootopolisCity_Gym_1F_EventScript_224EB8
	compare VAR_ICE_STEP_COUNT, 67
	goto_if_lt SootopolisCity_Gym_1F_EventScript_224EA6
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, 0
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, 0

SootopolisCity_Gym_1F_EventScript_224EA6:: @ 8224EA6
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, 0
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, 0

SootopolisCity_Gym_1F_EventScript_224EB8:: @ 8224EB8
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, 0
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, 0

SootopolisCity_Gym_1F_EventScript_224ECA:: @ 8224ECA
	return

SootopolisCity_Gym_1F_MapScript2_224ECB: @ 8224ECB
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_224EED
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_224F01
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_224F15
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_224F29
	.2byte 0

SootopolisCity_Gym_1F_EventScript_224EED:: @ 8224EED
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_RU_GASHIN
	call SootopolisCity_Gym_1F_EventScript_224E73
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_224F01:: @ 8224F01
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_RU_GASHIN
	call SootopolisCity_Gym_1F_EventScript_224E73
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_224F15:: @ 8224F15
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_RU_GASHIN
	call SootopolisCity_Gym_1F_EventScript_224E73
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_224F29:: @ 8224F29
	lockall
	delay 20
	applymovement EVENT_OBJ_ID_PLAYER, SootopolisCity_Gym_1F_Movement_224F42
	waitmovement 0
	playse SE_RU_HYUU
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

SootopolisCity_Gym_1F_Movement_224F42: @ 8224F42
	set_invisible
	step_end

SootopolisCity_Gym_1F_EventScript_224F44:: @ 8224F44
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_225268, SootopolisCity_Gym_1F_Text_225432, SootopolisCity_Gym_1F_EventScript_224F82, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_Gym_1F_EventScript_225025
	goto_if_unset FLAG_RECEIVED_TM03, SootopolisCity_Gym_1F_EventScript_224FF7
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_22501B
	msgbox SootopolisCity_Gym_1F_Text_225778, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_224F82:: @ 8224F82
	message SootopolisCity_Gym_1F_Text_225598
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_2255BE, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setvar VAR_0x8008, 8
	call SootopolisCity_Gym_1F_EventScript_271F43
	call SootopolisCity_Gym_1F_EventScript_224FD4
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox SootopolisCity_Gym_1F_Text_22574D, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	release
	end

SootopolisCity_Gym_1F_EventScript_224FD4:: @ 8224FD4
	giveitem_std ITEM_TM03
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_2256C1, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM03
	return

SootopolisCity_Gym_1F_EventScript_224FF7:: @ 8224FF7
	giveitem_std ITEM_TM03
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_2256C1, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM03
	release
	end

SootopolisCity_Gym_1F_EventScript_22501B:: @ 822501B
	msgbox SootopolisCity_Gym_1F_Text_225865, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_225025:: @ 8225025
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_225950, SootopolisCity_Gym_1F_Text_225A2E, SootopolisCity_Gym_1F_Text_225B48
	msgbox SootopolisCity_Gym_1F_Text_225A67, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_225040:: @ 8225040
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_225055
	msgbox SootopolisCity_Gym_1F_Text_225093, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_225055:: @ 8225055
	msgbox SootopolisCity_Gym_1F_Text_2251AF, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_22505F:: @ 822505F
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_22507F
	goto SootopolisCity_Gym_1F_EventScript_225089
	end

SootopolisCity_Gym_1F_EventScript_22506F:: @ 822506F
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_22507F
	goto SootopolisCity_Gym_1F_EventScript_225089
	end

SootopolisCity_Gym_1F_EventScript_22507F:: @ 822507F
	msgbox SootopolisCity_Gym_1F_Text_225916, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_225089:: @ 8225089
	msgbox SootopolisCity_Gym_1F_Text_2258FA, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_Text_225093: @ 8225093
	.i18n 4636

SootopolisCity_Gym_1F_Text_2251AF: @ 82251AF
	.i18n 4637

SootopolisCity_Gym_1F_Text_225268: @ 8225268
	.i18n 4638

@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
@ the existence of that unused array of ints.
SootopolisCity_Gym_1F_Text_225432: @ 8225432
	.i18n 4639

SootopolisCity_Gym_1F_Text_225598: @ 8225598
	.i18n 4640

SootopolisCity_Gym_1F_Text_2255BE: @ 82255BE
	.i18n 4641

SootopolisCity_Gym_1F_Text_2256C1: @ 82256C1
	.i18n 4642

SootopolisCity_Gym_1F_Text_22574D: @ 822574D
	.i18n 4643

SootopolisCity_Gym_1F_Text_225778: @ 8225778
	.i18n 4644

SootopolisCity_Gym_1F_Text_225865: @ 8225865
	.i18n 4645

SootopolisCity_Gym_1F_Text_2258FA: @ 82258FA
	.i18n 4646

SootopolisCity_Gym_1F_Text_225916: @ 8225916
	.i18n 4647

SootopolisCity_Gym_1F_Text_225950: @ 8225950
	.i18n 4648

SootopolisCity_Gym_1F_Text_225A2E: @ 8225A2E
	.i18n 4649

SootopolisCity_Gym_1F_Text_225A67: @ 8225A67
	.i18n 4650

SootopolisCity_Gym_1F_Text_225B48: @ 8225B48
	.i18n 4651

