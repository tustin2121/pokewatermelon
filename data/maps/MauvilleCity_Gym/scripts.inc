MauvilleCity_Gym_MapScripts:: @ 820DD6E
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_MapScript1_20DD74
	.byte 0

MauvilleCity_Gym_MapScript1_20DD74: @ 820DD74
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_20DEE7
	switch VAR_MAUVILLE_GYM_STATE
	case 0, MauvilleCity_Gym_EventScript_20DDBA
	case 1, MauvilleCity_Gym_EventScript_20DEAF
	case 2, MauvilleCity_Gym_EventScript_20DEBD
	case 3, MauvilleCity_Gym_EventScript_20DECB
	case 4, MauvilleCity_Gym_EventScript_20DED9
	end

MauvilleCity_Gym_EventScript_20DDBA:: @ 820DDBA
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_20DDC4
	end

MauvilleCity_Gym_EventScript_20DDC4:: @ 820DDC4
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, 1
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, 1
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, 1
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, 0
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, 0
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, 1
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, 1
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, 0
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, 0
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, 1
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, 1
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, 0
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, 0
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, 0
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, 0
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, 0
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, 0
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, 0
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, 0
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, 1
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, 0
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, 0
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, 0
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, 0
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, 0
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, 0
	end

MauvilleCity_Gym_EventScript_20DEAF:: @ 820DEAF
	setvar VAR_0x8004, 0
	special MauvilleGymSpecial1
	goto MauvilleCity_Gym_EventScript_20DDBA
	end

MauvilleCity_Gym_EventScript_20DEBD:: @ 820DEBD
	setvar VAR_0x8004, 1
	special MauvilleGymSpecial1
	goto MauvilleCity_Gym_EventScript_20DDBA
	end

MauvilleCity_Gym_EventScript_20DECB:: @ 820DECB
	setvar VAR_0x8004, 2
	special MauvilleGymSpecial1
	goto MauvilleCity_Gym_EventScript_20DDBA
	end

MauvilleCity_Gym_EventScript_20DED9:: @ 820DED9
	setvar VAR_0x8004, 3
	special MauvilleGymSpecial1
	goto MauvilleCity_Gym_EventScript_20DDBA
	end

MauvilleCity_Gym_EventScript_20DEE7:: @ 820DEE7
	special MauvilleGymSpecial3
	end

MauvilleCity_Gym_EventScript_20DEEB:: @ 820DEEB
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_20E602, MauvilleCity_Gym_Text_20E734, MauvilleCity_Gym_EventScript_20DF2B, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_Gym_EventScript_20DFDE
	goto_if_unset FLAG_RECEIVED_TM34, MauvilleCity_Gym_EventScript_20DF8D
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_Gym_EventScript_20DFD4
	msgbox MauvilleCity_Gym_Text_20E8E3, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_20DF2B:: @ 820DF2B
	message MauvilleCity_Gym_Text_20E77F
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MauvilleCity_Gym_Text_20E7AA, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	compare VAR_PETALBURG_GYM_STATE, 6
	call_if_eq MauvilleCity_Gym_EventScript_271E84
	setvar VAR_0x8008, 3
	call MauvilleCity_Gym_EventScript_271F43
	special MauvilleGymSpecial3
	special DrawWholeMapView
	playse SE_KI_GASYAN
	call MauvilleCity_Gym_EventScript_20DFB1
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox MauvilleCity_Gym_Text_20E8B5, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	release
	end

MauvilleCity_Gym_EventScript_20DF8D:: @ 820DF8D
	giveitem_std ITEM_TM34
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox MauvilleCity_Gym_Text_20E844, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM34
	release
	end

MauvilleCity_Gym_EventScript_20DFB1:: @ 820DFB1
	giveitem_std ITEM_TM34
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_BagIsFull
	msgbox MauvilleCity_Gym_Text_20E844, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM34
	return

MauvilleCity_Gym_EventScript_20DFD4:: @ 820DFD4
	msgbox MauvilleCity_Gym_Text_20E925, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_20DFDE:: @ 820DFDE
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_20E9A7, MauvilleCity_Gym_Text_20EA42, MauvilleCity_Gym_Text_20EAFD
	msgbox MauvilleCity_Gym_Text_20EA5E, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_20DFF9:: @ 820DFF9
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_20E0AD
	compare VAR_MAUVILLE_GYM_STATE, 1
	goto_if_eq MauvilleCity_Gym_EventScript_20E0AD
	setvar VAR_MAUVILLE_GYM_STATE, 1
	setvar VAR_0x8004, 0
	goto MauvilleCity_Gym_EventScript_20E08D
	end

MauvilleCity_Gym_EventScript_20E01E:: @ 820E01E
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_20E0AD
	compare VAR_MAUVILLE_GYM_STATE, 2
	goto_if_eq MauvilleCity_Gym_EventScript_20E0AD
	setvar VAR_MAUVILLE_GYM_STATE, 2
	setvar VAR_0x8004, 1
	goto MauvilleCity_Gym_EventScript_20E08D
	end

MauvilleCity_Gym_EventScript_20E043:: @ 820E043
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_20E0AD
	compare VAR_MAUVILLE_GYM_STATE, 3
	goto_if_eq MauvilleCity_Gym_EventScript_20E0AD
	setvar VAR_MAUVILLE_GYM_STATE, 3
	setvar VAR_0x8004, 2
	goto MauvilleCity_Gym_EventScript_20E08D
	end

MauvilleCity_Gym_EventScript_20E068:: @ 820E068
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_20E0AD
	compare VAR_MAUVILLE_GYM_STATE, 4
	goto_if_eq MauvilleCity_Gym_EventScript_20E0AD
	setvar VAR_MAUVILLE_GYM_STATE, 4
	setvar VAR_0x8004, 3
	goto MauvilleCity_Gym_EventScript_20E08D
	end

MauvilleCity_Gym_EventScript_20E08D:: @ 820E08D
	special MauvilleGymSpecial2
	special MauvilleGymSpecial1
	special DrawWholeMapView
	playse SE_KI_GASYAN
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_20E0B4
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_20E0AF
	releaseall
	end

MauvilleCity_Gym_EventScript_20E0AD:: @ 820E0AD
	releaseall
	end

MauvilleCity_Gym_EventScript_20E0AF:: @ 820E0AF
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_20E0B4:: @ 820E0B4
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_20E0B9:: @ 820E0B9
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_20E2BC, MauvilleCity_Gym_Text_20E2FC
	msgbox MauvilleCity_Gym_Text_20E336, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_20E0D0:: @ 820E0D0
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_20E369, MauvilleCity_Gym_Text_20E3A7
	msgbox MauvilleCity_Gym_Text_20E3C1, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_20E0E7:: @ 820E0E7
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_20E443, MauvilleCity_Gym_Text_20E469
	msgbox MauvilleCity_Gym_Text_20E47E, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_20E0FE:: @ 820E0FE
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_20E4BB, MauvilleCity_Gym_Text_20E4F4
	msgbox MauvilleCity_Gym_Text_20E50F, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_20E115:: @ 820E115
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_20E593, MauvilleCity_Gym_Text_20E5A8
	msgbox MauvilleCity_Gym_Text_20E5C2, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_20E12C:: @ 820E12C
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_20E141
	msgbox MauvilleCity_Gym_Text_20E17F, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_20E141:: @ 820E141
	msgbox MauvilleCity_Gym_Text_20E283, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_20E14B:: @ 820E14B
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_20E16B
	goto MauvilleCity_Gym_EventScript_20E175
	end

MauvilleCity_Gym_EventScript_20E15B:: @ 820E15B
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_20E16B
	goto MauvilleCity_Gym_EventScript_20E175
	end

MauvilleCity_Gym_EventScript_20E16B:: @ 820E16B
	msgbox MauvilleCity_Gym_Text_20E96C, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_EventScript_20E175:: @ 820E175
	msgbox MauvilleCity_Gym_Text_20E952, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_Text_20E17F: @ 820E17F
	.i18n 2967

MauvilleCity_Gym_Text_20E283: @ 820E283
	.i18n 2968

MauvilleCity_Gym_Text_20E2BC: @ 820E2BC
	.i18n 2969

MauvilleCity_Gym_Text_20E2FC: @ 820E2FC
	.i18n 2970

MauvilleCity_Gym_Text_20E336: @ 820E336
	.i18n 2971

MauvilleCity_Gym_Text_20E369: @ 820E369
	.i18n 2972

MauvilleCity_Gym_Text_20E3A7: @ 820E3A7
	.i18n 2973

MauvilleCity_Gym_Text_20E3C1: @ 820E3C1
	.i18n 2974

MauvilleCity_Gym_Text_20E443: @ 820E443
	.i18n 2975

MauvilleCity_Gym_Text_20E469: @ 820E469
	.i18n 2976

MauvilleCity_Gym_Text_20E47E: @ 820E47E
	.i18n 2977

MauvilleCity_Gym_Text_20E4BB: @ 820E4BB
	.i18n 2978

MauvilleCity_Gym_Text_20E4F4: @ 820E4F4
	.i18n 2979

MauvilleCity_Gym_Text_20E50F: @ 820E50F
	.i18n 2980

MauvilleCity_Gym_Text_20E593: @ 820E593
	.i18n 2981

MauvilleCity_Gym_Text_20E5A8: @ 820E5A8
	.i18n 2982

MauvilleCity_Gym_Text_20E5C2: @ 820E5C2
	.i18n 2983

MauvilleCity_Gym_Text_20E602: @ 820E602
	.i18n 2984

MauvilleCity_Gym_Text_20E734: @ 820E734
	.i18n 2985

MauvilleCity_Gym_Text_20E77F: @ 820E77F
	.i18n 2986

MauvilleCity_Gym_Text_20E7AA: @ 820E7AA
	.i18n 2987

MauvilleCity_Gym_Text_20E844: @ 820E844
	.i18n 2988

MauvilleCity_Gym_Text_20E8B5: @ 820E8B5
	.i18n 2989

MauvilleCity_Gym_Text_20E8E3: @ 820E8E3
	.i18n 2990

MauvilleCity_Gym_Text_20E925: @ 820E925
	.i18n 2991

MauvilleCity_Gym_Text_20E952: @ 820E952
	.i18n 2992

MauvilleCity_Gym_Text_20E96C: @ 820E96C
	.i18n 2993

MauvilleCity_Gym_Text_20E9A7: @ 820E9A7
	.i18n 2994

MauvilleCity_Gym_Text_20EA42: @ 820EA42
	.i18n 2995

MauvilleCity_Gym_Text_20EA5E: @ 820EA5E
	.i18n 2996

MauvilleCity_Gym_Text_20EAFD: @ 820EAFD
	.i18n 2997

