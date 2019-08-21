LilycoveCity_MapScripts:: @ 81E2B3C
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_MapScript1_1E2B61
	.byte 0

LilycoveCity_OnTransition: @ 81E2B47
	setflag FLAG_VISITED_LILYCOVE_CITY
	setvar VAR_LINK_CONTEST_ROOM_STATE, 0
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetWeather15
	call Common_EventScript_SetupRivalGender
	end

LilycoveCity_MapScript1_1E2B61: @ 81E2B61
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_1E2B6B
	end

LilycoveCity_EventScript_1E2B6B:: @ 81E2B6B
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, 1
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, 1
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, 1
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, 1
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, 1
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, 1
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, 1
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, 1
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, 1
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, 1
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, 1
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, 1
	return

LilycoveCity_EventScript_1E2BD8:: @ 81E2BD8
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_1E2C18
	msgbox LilycoveCity_Text_2A7244, MSGBOX_DEFAULT
	random 10
	addvar VAR_RESULT, 133
	giveitem_std VAR_RESULT
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
	msgbox LilycoveCity_Text_2A72E3, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C18:: @ 81E2C18
	msgbox LilycoveCity_Text_2A7321, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C22:: @ 81E2C22
	msgbox LilycoveCity_Text_1E3D9E, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2C2B:: @ 81E2C2B
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_1E2C40
	msgbox LilycoveCity_Text_1E3E3C, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C40:: @ 81E2C40
	msgbox LilycoveCity_Text_1E3E7D, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C4A:: @ 81E2C4A
	msgbox LilycoveCity_Text_1E3F05, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2C53:: @ 81E2C53
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_1E2C68
	msgbox LilycoveCity_Text_1E3FAB, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C68:: @ 81E2C68
	msgbox LilycoveCity_Text_1E4020, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C72:: @ 81E2C72
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_1E2C87
	msgbox LilycoveCity_Text_1E40AD, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C87:: @ 81E2C87
	msgbox LilycoveCity_Text_1E4145, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2C91:: @ 81E2C91
	msgbox LilycoveCity_Text_1E417B, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2C9A:: @ 81E2C9A
	msgbox LilycoveCity_Text_1E420B, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2CA3:: @ 81E2CA3
	msgbox LilycoveCity_Text_1E4283, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2CAC:: @ 81E2CAC
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_1E2CC1
	msgbox LilycoveCity_Text_1E42FC, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2CC1:: @ 81E2CC1
	msgbox LilycoveCity_Text_1E43FF, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_1E2CCB:: @ 81E2CCB
	msgbox LilycoveCity_Text_1E48A5, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2CD4:: @ 81E2CD4
	msgbox LilycoveCity_Text_1E4902, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2CDD:: @ 81E2CDD
	lockall
	msgbox LilycoveCity_Text_1E494D, MSGBOX_NPC
	applymovement 20, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_1E2CEE:: @ 81E2CEE
	lockall
	msgbox LilycoveCity_Text_1E49F4, MSGBOX_NPC
	applymovement 19, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_1E2CFF:: @ 81E2CFF
	msgbox LilycoveCity_Text_1E448B, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2D08:: @ 81E2D08
	msgbox LilycoveCity_Text_1E44C3, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2D11:: @ 81E2D11
	msgbox LilycoveCity_Text_1E44FC, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2D1A:: @ 81E2D1A
	lockall
	specialvar VAR_0x8004, CountPlayerContestPaintings
	switch VAR_0x8004
	case 0, LilycoveCity_EventScript_1E2D3A
	msgbox LilycoveCity_Text_1E4571, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_1E2D3A:: @ 81E2D3A
	msgbox LilycoveCity_Text_1E4534, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_1E2D44:: @ 81E2D44
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_1E2D58
	msgbox LilycoveCity_Text_1E45A7, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_1E2D58:: @ 81E2D58
	msgbox LilycoveCity_Text_1E4624, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_1E2D62:: @ 81E2D62
	msgbox LilycoveCity_Text_1E466E, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2D6B:: @ 81E2D6B
	msgbox LilycoveCity_Text_1E46BE, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2D74:: @ 81E2D74
	msgbox LilycoveCity_Text_1E473D, MSGBOX_SIGN
	end

LilycoveCity_EventScript_1E2D7D:: @ 81E2D7D
	lockall
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_1E2DB0
	msgbox LilycoveCity_Text_1E3D1F, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_Text_1E3D4A, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_MET_WAILMER_TRAINER
	releaseall
	end

LilycoveCity_EventScript_1E2DB0:: @ 81E2DB0
	msgbox LilycoveCity_Text_1E3D1F, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_1E2DBA:: @ 81E2DBA
	msgbox LilycoveCity_Text_1E3B2C, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2DC3:: @ 81E2DC3
	msgbox LilycoveCity_Text_1E3B95, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2DCC:: @ 81E2DCC
	msgbox LilycoveCity_Text_1E3C46, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2DD5:: @ 81E2DD5
	msgbox LilycoveCity_Text_1E3CBE, MSGBOX_NPC
	end

LilycoveCity_EventScript_1E2DDE:: @ 81E2DDE
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_1E2DF8
	compare VAR_RESULT, FEMALE
	goto_if_eq LilycoveCity_EventScript_1E2E6B
	end

LilycoveCity_EventScript_1E2DF8:: @ 81E2DF8
	playbgm MUS_GIRL_SUP, 1
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_1E2E48
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_1E2E51
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_EventScript_1E2E5A
	msgbox LilycoveCity_Text_1E3234, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_1E2EDE
	case 1, LilycoveCity_EventScript_1E2EEE
	case 2, LilycoveCity_EventScript_1E2EFE
	end

LilycoveCity_EventScript_1E2E48:: @ 81E2E48
	msgbox LilycoveCity_Text_1E31F5, MSGBOX_YESNO
	return

LilycoveCity_EventScript_1E2E51:: @ 81E2E51
	msgbox LilycoveCity_Text_1E3061, MSGBOX_YESNO
	return

LilycoveCity_EventScript_1E2E5A:: @ 81E2E5A
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_1E318D, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_1E2E6B:: @ 81E2E6B
	playbgm MUS_BOY_SUP, 1
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_1E2EBB
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_1E2EC4
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_EventScript_1E2ECD
	msgbox LilycoveCity_Text_1E373C, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_1E2F0E
	case 1, LilycoveCity_EventScript_1E2F1E
	case 2, LilycoveCity_EventScript_1E2F2E
	end

LilycoveCity_EventScript_1E2EBB:: @ 81E2EBB
	msgbox LilycoveCity_Text_1E36FA, MSGBOX_YESNO
	return

LilycoveCity_EventScript_1E2EC4:: @ 81E2EC4
	msgbox LilycoveCity_Text_1E3608, MSGBOX_YESNO
	return

LilycoveCity_EventScript_1E2ECD:: @ 81E2ECD
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_1E36BF, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_1E2EDE:: @ 81E2EDE
	trainerbattle_no_intro TRAINER_MAY_12, LilycoveCity_Text_1E3275
	goto LilycoveCity_EventScript_1E2F3E
	end

LilycoveCity_EventScript_1E2EEE:: @ 81E2EEE
	trainerbattle_no_intro TRAINER_MAY_13, LilycoveCity_Text_1E3275
	goto LilycoveCity_EventScript_1E2F3E
	end

LilycoveCity_EventScript_1E2EFE:: @ 81E2EFE
	trainerbattle_no_intro TRAINER_MAY_11, LilycoveCity_Text_1E3275
	goto LilycoveCity_EventScript_1E2F3E
	end

LilycoveCity_EventScript_1E2F0E:: @ 81E2F0E
	trainerbattle_no_intro TRAINER_BRENDAN_14, LilycoveCity_Text_1E3777
	goto LilycoveCity_EventScript_1E2FAA
	end

LilycoveCity_EventScript_1E2F1E:: @ 81E2F1E
	trainerbattle_no_intro TRAINER_BRENDAN_15, LilycoveCity_Text_1E3777
	goto LilycoveCity_EventScript_1E2FAA
	end

LilycoveCity_EventScript_1E2F2E:: @ 81E2F2E
	trainerbattle_no_intro TRAINER_BRENDAN_13, LilycoveCity_Text_1E3777
	goto LilycoveCity_EventScript_1E2FAA
	end

LilycoveCity_EventScript_1E2F3E:: @ 81E2F3E
	msgbox LilycoveCity_Text_1E32FB, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_1E2F76
	compare VAR_RESULT, 0
	call_if_eq LilycoveCity_EventScript_1E2F86
	compare VAR_RESULT, 1
	call_if_eq LilycoveCity_EventScript_1E2F8F
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	goto LilycoveCity_EventScript_1E3006
	end

LilycoveCity_EventScript_1E2F76:: @ 81E2F76
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_1E2F80
	return

LilycoveCity_EventScript_1E2F80:: @ 81E2F80
	setvar VAR_RESULT, 1
	return

LilycoveCity_EventScript_1E2F86:: @ 81E2F86
	msgbox LilycoveCity_Text_1E3398, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E2F8F:: @ 81E2F8F
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_1E2FA1
	msgbox LilycoveCity_Text_1E346D, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E2FA1:: @ 81E2FA1
	msgbox LilycoveCity_Text_1E353A, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E2FAA:: @ 81E2FAA
	msgbox LilycoveCity_Text_1E37D7, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_1E2F76
	compare VAR_RESULT, 0
	call_if_eq LilycoveCity_EventScript_1E2FE2
	compare VAR_RESULT, 1
	call_if_eq LilycoveCity_EventScript_1E2FEB
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	goto LilycoveCity_EventScript_1E3006
	end

LilycoveCity_EventScript_1E2FE2:: @ 81E2FE2
	msgbox LilycoveCity_Text_1E3876, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E2FEB:: @ 81E2FEB
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_1E2FFD
	msgbox LilycoveCity_Text_1E390C, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E2FFD:: @ 81E2FFD
	msgbox LilycoveCity_Text_1E39E3, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E3006:: @ 81E3006
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject VAR_LAST_TALKED
	waitfieldeffect FLDEFF_NPCFLY_OUT
	savebgm MUS_DUMMY
	fadedefaultbgm
	setflag FLAG_MET_RIVAL_LILYCOVE
	release
	end

LilycoveCity_EventScript_1E302D:: @ 81E302D
	lock
	faceplayer
	msgbox LilycoveCity_Text_1E4774, MSGBOX_YESNO
	compare VAR_RESULT, 1
	call_if_eq LilycoveCity_EventScript_1E304F
	compare VAR_RESULT, 0
	call_if_eq LilycoveCity_EventScript_1E3058
	release
	end

LilycoveCity_EventScript_1E304F:: @ 81E304F
	msgbox LilycoveCity_Text_1E47A1, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_1E3058:: @ 81E3058
	msgbox LilycoveCity_Text_1E4824, MSGBOX_DEFAULT
	return

LilycoveCity_Text_1E3061: @ 81E3061
	.i18n 2436

LilycoveCity_Text_1E318D: @ 81E318D
	.i18n 2437

LilycoveCity_Text_1E31F5: @ 81E31F5
	.i18n 2438

LilycoveCity_Text_1E3234: @ 81E3234
	.i18n 2439

LilycoveCity_Text_1E3275: @ 81E3275
	.i18n 2440

LilycoveCity_Text_1E32FB: @ 81E32FB
	.i18n 2441

LilycoveCity_Text_1E3398: @ 81E3398
	.i18n 2442

LilycoveCity_Text_1E346D: @ 81E346D
	.i18n 2443

LilycoveCity_Text_1E353A: @ 81E353A
	.i18n 2444

LilycoveCity_Text_1E3608: @ 81E3608
	.i18n 2445

LilycoveCity_Text_1E36BF: @ 81E36BF
	.i18n 2446

LilycoveCity_Text_1E36FA: @ 81E36FA
	.i18n 2447

LilycoveCity_Text_1E373C: @ 81E373C
	.i18n 2448

LilycoveCity_Text_1E3777: @ 81E3777
	.i18n 2449

LilycoveCity_Text_1E37D7: @ 81E37D7
	.i18n 2450

LilycoveCity_Text_1E3876: @ 81E3876
	.i18n 2451

LilycoveCity_Text_1E390C: @ 81E390C
	.i18n 2452

LilycoveCity_Text_1E39E3: @ 81E39E3
	.i18n 2453

LilycoveCity_Text_1E3B2C: @ 81E3B2C
	.i18n 2454

LilycoveCity_Text_1E3B95: @ 81E3B95
	.i18n 2455

LilycoveCity_Text_1E3C46: @ 81E3C46
	.i18n 2456

LilycoveCity_Text_1E3CBE: @ 81E3CBE
	.i18n 2457

LilycoveCity_Text_1E3D1F: @ 81E3D1F
	.i18n 2458

LilycoveCity_Text_1E3D4A: @ 81E3D4A
	.i18n 2459

LilycoveCity_Text_1E3D9E: @ 81E3D9E
	.i18n 2460

LilycoveCity_Text_1E3E3C: @ 81E3E3C
	.i18n 2461

LilycoveCity_Text_1E3E7D: @ 81E3E7D
	.i18n 2462

LilycoveCity_Text_1E3F05: @ 81E3F05
	.i18n 2463

LilycoveCity_Text_1E3FAB: @ 81E3FAB
	.i18n 2464

LilycoveCity_Text_1E4020: @ 81E4020
	.i18n 2465

LilycoveCity_Text_1E40AD: @ 81E40AD
	.i18n 2466

LilycoveCity_Text_1E4145: @ 81E4145
	.i18n 2467

LilycoveCity_Text_1E417B: @ 81E417B
	.i18n 2468

LilycoveCity_Text_1E420B: @ 81E420B
	.i18n 2469

LilycoveCity_Text_1E4283: @ 81E4283
	.i18n 2470

LilycoveCity_Text_1E42FC: @ 81E42FC
	.i18n 2471

LilycoveCity_Text_1E43FF: @ 81E43FF
	.i18n 2472

LilycoveCity_Text_1E448B: @ 81E448B
	.i18n 2473

LilycoveCity_Text_1E44C3: @ 81E44C3
	.i18n 2474

LilycoveCity_Text_1E44FC: @ 81E44FC
	.i18n 2475

LilycoveCity_Text_1E4534: @ 81E4534
	.i18n 2476

LilycoveCity_Text_1E4571: @ 81E4571
	.i18n 2477

LilycoveCity_Text_1E45A7: @ 81E45A7
	.i18n 2478

LilycoveCity_Text_1E4624: @ 81E4624
	.i18n 2479

LilycoveCity_Text_1E466E: @ 81E466E
	.i18n 2480

LilycoveCity_Text_1E46BE: @ 81E46BE
	.i18n 2481

LilycoveCity_Text_1E473D: @ 81E473D
	.i18n 2482

LilycoveCity_Text_1E4774: @ 81E4774
	.i18n 2483

LilycoveCity_Text_1E47A1: @ 81E47A1
	.i18n 2484

LilycoveCity_Text_1E4824: @ 81E4824
	.i18n 2485

LilycoveCity_Text_1E48A5: @ 81E48A5
	.i18n 2486

LilycoveCity_Text_1E4902: @ 81E4902
	.i18n 2487

LilycoveCity_Text_1E494D: @ 81E494D
	.i18n 2488

LilycoveCity_Text_1E49F4: @ 81E49F4
	.i18n 2489

