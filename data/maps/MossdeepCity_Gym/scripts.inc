MossdeepCity_Gym_MapScripts:: @ 8220800
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_MapScript1_220806
	.byte 0

MossdeepCity_Gym_MapScript1_220806: @ 8220806
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_22083D
	goto MossdeepCity_Gym_EventScript_220815
	end

MossdeepCity_Gym_EventScript_220815:: @ 8220815
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_220855
	goto MossdeepCity_Gym_EventScript_220824
	end

MossdeepCity_Gym_EventScript_220824:: @ 8220824
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_22086D
	goto MossdeepCity_Gym_EventScript_220833
	end

MossdeepCity_Gym_EventScript_220833:: @ 8220833
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_220885
	end

MossdeepCity_Gym_EventScript_22083D:: @ 822083D
	setmetatile 5, 5, METATILE_MossdeepGym_Obelisk_Top, 0
	setmetatile 2, 7, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_220815
	end

MossdeepCity_Gym_EventScript_220855:: @ 8220855
	setmetatile 8, 14, METATILE_MossdeepGym_Obelisk_Top, 0
	setmetatile 8, 10, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_220824
	end

MossdeepCity_Gym_EventScript_22086D:: @ 822086D
	setmetatile 15, 17, METATILE_MossdeepGym_Obelisk_Base, 0
	setmetatile 17, 15, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_220833
	end

MossdeepCity_Gym_EventScript_220885:: @ 8220885
	setmetatile 1, 23, METATILE_MossdeepGym_Wall_LeftCorner, 0
	setmetatile 5, 24, METATILE_MossdeepGym_Empty1, 1
	end

MossdeepCity_Gym_EventScript_220898:: @ 8220898
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_221783, MossdeepCity_Gym_Text_2218EC, MossdeepCity_Gym_Text_221BCE, MossdeepCity_Gym_EventScript_2208D1, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_Gym_EventScript_22097E
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_220937
	msgbox MossdeepCity_Gym_Text_221B1D, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_2208D1:: @ 82208D1
	message MossdeepCity_Gym_Text_22196A
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_221999, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	clearflag FLAG_UNKNOWN_0x393
	setvar VAR_0x8008, 7
	call MossdeepCity_Gym_EventScript_271F43
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE_2, 1
	call MossdeepCity_Gym_EventScript_22095B
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox MossdeepCity_Gym_Text_221AEA, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release
	end

MossdeepCity_Gym_EventScript_220937:: @ 8220937
	giveitem_std ITEM_TM04
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_221A40, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM04
	release
	end

MossdeepCity_Gym_EventScript_22095B:: @ 822095B
	giveitem_std ITEM_TM04
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_BagIsFull
	msgbox MossdeepCity_Gym_Text_221A40, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM04
	return

MossdeepCity_Gym_EventScript_22097E:: @ 822097E
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_221D0B, MossdeepCity_Gym_Text_221E05, MossdeepCity_Gym_Text_221EB8
	msgbox MossdeepCity_Gym_Text_221E45, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220999:: @ 8220999
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_2209D0
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 5, 5, METATILE_MossdeepGym_Obelisk_Top, 0
	setmetatile 2, 7, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_2209C8:: @ 82209C8
	special DrawWholeMapView
	playse SE_TK_KASYA
	releaseall
	end

MossdeepCity_Gym_EventScript_2209D0:: @ 82209D0
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 5, 5, METATILE_MossdeepGym_Obelisk_Base, 0
	setmetatile 2, 7, METATILE_MossdeepGym_Empty0, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_2209F5:: @ 82209F5
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_220A24
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 8, 14, METATILE_MossdeepGym_Obelisk_Top, 0
	setmetatile 8, 10, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_220A24:: @ 8220A24
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 8, 14, METATILE_MossdeepGym_OuterWall_RightCorner, 0
	setmetatile 8, 10, METATILE_MossdeepGym_Empty0, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_220A49:: @ 8220A49
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_220A78
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 15, 17, METATILE_MossdeepGym_Obelisk_Base, 0
	setmetatile 17, 15, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_220A78:: @ 8220A78
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 15, 17, METATILE_MossdeepGym_Obelisk_Top, 0
	setmetatile 17, 15, METATILE_MossdeepGym_Empty0, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_220A9D:: @ 8220A9D
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_220ACC
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 1, 23, METATILE_MossdeepGym_Wall_LeftCorner, 0
	setmetatile 5, 24, METATILE_MossdeepGym_Empty1, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_220ACC:: @ 8220ACC
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_Gym_Movement_220C30
	waitmovement 0
	setmetatile 1, 23, METATILE_MossdeepGym_Obelisk_Top, 0
	setmetatile 5, 24, METATILE_MossdeepGym_Empty0, 1
	goto MossdeepCity_Gym_EventScript_2209C8
	end

MossdeepCity_Gym_EventScript_220AF1:: @ 8220AF1
	lockall
	warp7 MAP_MOSSDEEP_CITY_GYM, 255, 7, 30
	waitstate
	releaseall
	end

MossdeepCity_Gym_EventScript_220AFD:: @ 8220AFD
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_220E5C, MossdeepCity_Gym_Text_220EAC
	msgbox MossdeepCity_Gym_Text_220ED3, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B14:: @ 8220B14
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_220F02, MossdeepCity_Gym_Text_220F1A
	msgbox MossdeepCity_Gym_Text_220F3A, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B2B:: @ 8220B2B
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_220FB0, MossdeepCity_Gym_Text_221024
	msgbox MossdeepCity_Gym_Text_221055, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B42:: @ 8220B42
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_2210EE, MossdeepCity_Gym_Text_221152
	msgbox MossdeepCity_Gym_Text_22116A, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B59:: @ 8220B59
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_2211E2, MossdeepCity_Gym_Text_221230
	msgbox MossdeepCity_Gym_Text_22123D, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B70:: @ 8220B70
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_2212A6, MossdeepCity_Gym_Text_221309
	msgbox MossdeepCity_Gym_Text_22132E, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B87:: @ 8220B87
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_2213C2, MossdeepCity_Gym_Text_2213F4
	msgbox MossdeepCity_Gym_Text_221412, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220B9E:: @ 8220B9E
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_221460, MossdeepCity_Gym_Text_2214A7
	msgbox MossdeepCity_Gym_Text_2214D3, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220BB5:: @ 8220BB5
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_22161B, MossdeepCity_Gym_Text_221658
	msgbox MossdeepCity_Gym_Text_221680, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220BCC:: @ 8220BCC
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_22157C, MossdeepCity_Gym_Text_2215B8
	msgbox MossdeepCity_Gym_Text_2215E2, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220BE3:: @ 8220BE3
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_2216EE, MossdeepCity_Gym_Text_22172D
	msgbox MossdeepCity_Gym_Text_22173A, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220BFA:: @ 8220BFA
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_221507, MossdeepCity_Gym_Text_22153B
	msgbox MossdeepCity_Gym_Text_221545, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_220C11:: @ 8220C11
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_220C26
	msgbox MossdeepCity_Gym_Text_220CD5, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_220C26:: @ 8220C26
	msgbox MossdeepCity_Gym_Text_220E2A, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Movement_220C30: @ 8220C30
	delay_16
	delay_16
	step_end

MossdeepCity_Gym_EventScript_220C33:: @ 8220C33
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_220C53
	goto MossdeepCity_Gym_EventScript_220C5D
	end

MossdeepCity_Gym_EventScript_220C43:: @ 8220C43
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_220C53
	goto MossdeepCity_Gym_EventScript_220C5D
	end

MossdeepCity_Gym_EventScript_220C53:: @ 8220C53
	msgbox MossdeepCity_Gym_Text_221CCA, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_220C5D:: @ 8220C5D
	msgbox MossdeepCity_Gym_Text_221CB0, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_220C67:: @ 8220C67
	playse SE_MU_PACHI
	waitse
	playse SE_TU_SAA
	mossdeepgym3 0
	mossdeepgym1 0
	waitmovement 0
	mossdeepgym2
	waitmovement 0
	mossdeepgym4
	end

MossdeepCity_Gym_EventScript_220C7D:: @ 8220C7D
	playse SE_MU_PACHI
	waitse
	playse SE_TU_SAA
	mossdeepgym3 0
	mossdeepgym1 1
	waitmovement 0
	mossdeepgym2
	waitmovement 0
	mossdeepgym4
	end

MossdeepCity_Gym_EventScript_220C93:: @ 8220C93
	playse SE_MU_PACHI
	waitse
	playse SE_TU_SAA
	mossdeepgym3 0
	mossdeepgym1 2
	waitmovement 0
	mossdeepgym2
	waitmovement 0
	mossdeepgym4
	end

MossdeepCity_Gym_EventScript_220CA9:: @ 8220CA9
	playse SE_MU_PACHI
	waitse
	playse SE_TU_SAA
	mossdeepgym3 0
	mossdeepgym1 3
	waitmovement 0
	mossdeepgym2
	waitmovement 0
	mossdeepgym4
	end

MossdeepCity_Gym_EventScript_220CBF:: @ 8220CBF
	playse SE_MU_PACHI
	waitse
	playse SE_TU_SAA
	mossdeepgym3 0
	mossdeepgym1 4
	waitmovement 0
	mossdeepgym2
	waitmovement 0
	mossdeepgym4
	end

MossdeepCity_Gym_Text_220CD5: @ 8220CD5
	.i18n 3082

MossdeepCity_Gym_Text_220E2A: @ 8220E2A
	.i18n 3083

MossdeepCity_Gym_Text_220E5C: @ 8220E5C
	.i18n 3084

MossdeepCity_Gym_Text_220EAC: @ 8220EAC
	.i18n 3085

MossdeepCity_Gym_Text_220ED3: @ 8220ED3
	.i18n 3086

MossdeepCity_Gym_Text_220F02: @ 8220F02
	.i18n 3087

MossdeepCity_Gym_Text_220F1A: @ 8220F1A
	.i18n 3088

MossdeepCity_Gym_Text_220F3A: @ 8220F3A
	.i18n 3089

MossdeepCity_Gym_Text_220FB0: @ 8220FB0
	.i18n 3090

MossdeepCity_Gym_Text_221024: @ 8221024
	.i18n 3091

MossdeepCity_Gym_Text_221055: @ 8221055
	.i18n 3092

MossdeepCity_Gym_Text_2210EE: @ 82210EE
	.i18n 3093

MossdeepCity_Gym_Text_221152: @ 8221152
	.i18n 3094

MossdeepCity_Gym_Text_22116A: @ 822116A
	.i18n 3095

MossdeepCity_Gym_Text_2211E2: @ 82211E2
	.i18n 3096

MossdeepCity_Gym_Text_221230: @ 8221230
	.i18n 3097

MossdeepCity_Gym_Text_22123D: @ 822123D
	.i18n 3098

MossdeepCity_Gym_Text_2212A6: @ 82212A6
	.i18n 3099

MossdeepCity_Gym_Text_221309: @ 8221309
	.i18n 3100

MossdeepCity_Gym_Text_22132E: @ 822132E
	.i18n 3101

MossdeepCity_Gym_Text_2213C2: @ 82213C2
	.i18n 3102

MossdeepCity_Gym_Text_2213F4: @ 82213F4
	.i18n 3103

MossdeepCity_Gym_Text_221412: @ 8221412
	.i18n 3104

MossdeepCity_Gym_Text_221460: @ 8221460
	.i18n 3105

MossdeepCity_Gym_Text_2214A7: @ 82214A7
	.i18n 3106

MossdeepCity_Gym_Text_2214D3: @ 82214D3
	.i18n 3107

MossdeepCity_Gym_Text_221507: @ 8221507
	.i18n 3108

MossdeepCity_Gym_Text_22153B: @ 822153B
	.i18n 3109

MossdeepCity_Gym_Text_221545: @ 8221545
	.i18n 3110

MossdeepCity_Gym_Text_22157C: @ 822157C
	.i18n 3111

MossdeepCity_Gym_Text_2215B8: @ 82215B8
	.i18n 3112

MossdeepCity_Gym_Text_2215E2: @ 82215E2
	.i18n 3113

MossdeepCity_Gym_Text_22161B: @ 822161B
	.i18n 3114

MossdeepCity_Gym_Text_221658: @ 8221658
	.i18n 3115

MossdeepCity_Gym_Text_221680: @ 8221680
	.i18n 3116

MossdeepCity_Gym_Text_2216EE: @ 82216EE
	.i18n 3117

MossdeepCity_Gym_Text_22172D: @ 822172D
	.i18n 3118

MossdeepCity_Gym_Text_22173A: @ 822173A
	.i18n 3119

MossdeepCity_Gym_Text_221783: @ 8221783
	.i18n 3120

MossdeepCity_Gym_Text_2218EC: @ 82218EC
	.i18n 3121

MossdeepCity_Gym_Text_22196A: @ 822196A
	.i18n 3122

MossdeepCity_Gym_Text_221999: @ 8221999
	.i18n 3123

MossdeepCity_Gym_Text_221A40: @ 8221A40
	.i18n 3124

MossdeepCity_Gym_Text_221AEA: @ 8221AEA
	.i18n 3125

MossdeepCity_Gym_Text_221B1D: @ 8221B1D
	.i18n 3126

MossdeepCity_Gym_Text_221BCE: @ 8221BCE
	.i18n 3127

MossdeepCity_Gym_Text_221CB0: @ 8221CB0
	.i18n 3128

MossdeepCity_Gym_Text_221CCA: @ 8221CCA
	.i18n 3129

MossdeepCity_Gym_Text_221D0B: @ 8221D0B
	.i18n 3130

MossdeepCity_Gym_Text_221E05: @ 8221E05
	.i18n 3131

MossdeepCity_Gym_Text_221E45: @ 8221E45
	.i18n 3132

MossdeepCity_Gym_Text_221EB8: @ 8221EB8
	.i18n 3133
