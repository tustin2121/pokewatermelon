MauvilleCity_MapScripts:: @ 81DF385
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
	.byte 0

MauvilleCity_OnTransition: @ 81DF38B
	setflag FLAG_VISITED_MAUVILLE_CITY
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_SYS_TV_START
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	setvar VAR_MAUVILLE_GYM_STATE, 0
	call_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_1DF3A9
	end

MauvilleCity_EventScript_1DF3A9:: @ 81DF3A9
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return

MauvilleCity_EventScript_1DF3B3:: @ 81DF3B3
	msgbox MauvilleCity_Text_1E0301, MSGBOX_NPC
	end

MauvilleCity_EventScript_1DF3BC:: @ 81DF3BC
	msgbox MauvilleCity_Text_1E037C, MSGBOX_NPC
	end

MauvilleCity_EventScript_1DF3C5:: @ 81DF3C5
	msgbox MauvilleCity_Text_1E03FB, MSGBOX_NPC
	end

MauvilleCity_EventScript_1DF3CE:: @ 81DF3CE
	msgbox MauvilleCity_Text_1E044A, MSGBOX_NPC
	end

MauvilleCity_EventScript_1DF3D7:: @ 81DF3D7
	msgbox MauvilleCity_Text_1E0485, MSGBOX_SIGN
	end

MauvilleCity_EventScript_1DF3E0:: @ 81DF3E0
	msgbox MauvilleCity_Text_1E04B7, MSGBOX_SIGN
	end

MauvilleCity_EventScript_1DF3E9:: @ 81DF3E9
	msgbox MauvilleCity_Text_1E0504, MSGBOX_SIGN
	end

MauvilleCity_EventScript_1DF3F2:: @ 81DF3F2
	msgbox MauvilleCity_Text_1E053C, MSGBOX_SIGN
	end

MauvilleCity_EventScript_1DF3FB:: @ 81DF3FB
	lock
	faceplayer
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_1DF413
	msgbox MauvilleCity_Text_1E056A, MSGBOX_DEFAULT
	setflag FLAG_TV_EXPLAINED
	release
	end

MauvilleCity_EventScript_1DF413:: @ 81DF413
	msgbox MauvilleCity_Text_1E0699, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_1DF41D:: @ 81DF41D
	lock
	faceplayer
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_1DF43D
	msgbox MauvilleCity_Text_1DF7DC, MSGBOX_DEFAULT
	closemessage
	applymovement 7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_1DF43D:: @ 81DF43D
	msgbox MauvilleCity_Text_1DFAA5, MSGBOX_DEFAULT
	closemessage
	applymovement 7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_1DF452:: @ 81DF452
	lockall
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_1DF690
	applymovement 6, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox MauvilleCity_Text_1DF845, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_1DF8B9, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_1DF963, MSGBOX_DEFAULT
	applymovement 6, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement 6, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 6, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_Text_1DF9B2, MSGBOX_YESNO
	goto MauvilleCity_EventScript_1DF4AD
	end

MauvilleCity_EventScript_1DF4AD:: @ 81DF4AD
	compare VAR_RESULT, 1
	call_if_eq MauvilleCity_EventScript_1DF63A
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_EventScript_1DF683
	closemessage
	switch VAR_FACING
	case 2, MauvilleCity_EventScript_1DF4E0
	case 4, MauvilleCity_EventScript_1DF53D
	end

MauvilleCity_EventScript_1DF4E0:: @ 81DF4E0
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6DF
	applymovement 6, MauvilleCity_Movement_1DF6A8
	applymovement 7, MauvilleCity_Movement_1DF6E2
	waitmovement 0
	applymovement 6, Common_Movement_WalkInPlaceRight
	waitmovement 0
	delay 30
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6EE
	applymovement 7, MauvilleCity_Movement_1DF6F3
	waitmovement 0
	msgbox MauvilleCity_Text_1DFD34, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6CC
	applymovement 7, MauvilleCity_Movement_1DF6FA
	applymovement 6, MauvilleCity_Movement_1DF6B4
	waitmovement 0
	goto MauvilleCity_EventScript_1DF593
	end

MauvilleCity_EventScript_1DF53D:: @ 81DF53D
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6DC
	applymovement 6, MauvilleCity_Movement_1DF6AE
	applymovement 7, MauvilleCity_Movement_1DF6E8
	waitmovement 0
	applymovement 6, Common_Movement_WalkInPlaceRight
	waitmovement 0
	delay 30
	applymovement 7, MauvilleCity_Movement_1DF6F7
	waitmovement 0
	msgbox MauvilleCity_Text_1DFD34, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6D0
	applymovement 7, MauvilleCity_Movement_1DF703
	applymovement 6, MauvilleCity_Movement_1DF6C0
	waitmovement 0
	goto MauvilleCity_EventScript_1DF593
	end

MauvilleCity_EventScript_1DF593:: @ 81DF593
	removeobject 6
	removeobject 7
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	compare VAR_FACING, 2
	call_if_eq MauvilleCity_EventScript_1DF5F3
	compare VAR_FACING, 4
	call_if_eq MauvilleCity_EventScript_1DF601
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox MauvilleCity_Text_1DFED5, MSGBOX_DEFAULT
	closemessage
	addvar VAR_SCOTT_STATE, 1
	compare VAR_FACING, 2
	call_if_eq MauvilleCity_EventScript_1DF616
	compare VAR_FACING, 4
	call_if_eq MauvilleCity_EventScript_1DF628
	removeobject 11
	releaseall
	end

MauvilleCity_EventScript_1DF5F3:: @ 81DF5F3
	addobject 11
	applymovement 11, MauvilleCity_Movement_1DF70D
	waitmovement 0
	return

MauvilleCity_EventScript_1DF601:: @ 81DF601
	setobjectxyperm 11, 12, 13
	addobject 11
	applymovement 11, MauvilleCity_Movement_1DF719
	waitmovement 0
	return

MauvilleCity_EventScript_1DF616:: @ 81DF616
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6D5
	applymovement 11, MauvilleCity_Movement_1DF725
	waitmovement 0
	return

MauvilleCity_EventScript_1DF628:: @ 81DF628
	applymovement EVENT_OBJ_ID_PLAYER, MauvilleCity_Movement_1DF6D8
	applymovement 11, MauvilleCity_Movement_1DF72F
	waitmovement 0
	return

MauvilleCity_EventScript_1DF63A:: @ 81DF63A
	msgbox MauvilleCity_Text_1DFB6D, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_2, MauvilleCity_Text_1DFB96
	applymovement 6, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox MauvilleCity_Text_1DFBC3, MSGBOX_DEFAULT
	applymovement 6, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_1DFBED, MSGBOX_DEFAULT
	applymovement 6, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox MauvilleCity_Text_1DFC8A, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_1DF683:: @ 81DF683
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
	msgbox MauvilleCity_Text_1DFA4A, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_1DF690:: @ 81DF690
	applymovement 6, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_1DFB42, MSGBOX_YESNO
	goto MauvilleCity_EventScript_1DF4AD
	end

MauvilleCity_Movement_1DF6A8: @ 81DF6A8
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

MauvilleCity_Movement_1DF6AE: @ 81DF6AE
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_1DF6B4: @ 81DF6B4
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_1DF6C0: @ 81DF6C0
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_1DF6CC: @ 81DF6CC
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

MauvilleCity_Movement_1DF6D0: @ 81DF6D0
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end

MauvilleCity_Movement_1DF6D5: @ 81DF6D5
	delay_16
	walk_in_place_fastest_left
	step_end

MauvilleCity_Movement_1DF6D8: @ 81DF6D8
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end

MauvilleCity_Movement_1DF6DC: @ 81DF6DC
	delay_16
	walk_in_place_fastest_down
	step_end

MauvilleCity_Movement_1DF6DF: @ 81DF6DF
	delay_16
	walk_in_place_fastest_left
	step_end

MauvilleCity_Movement_1DF6E2: @ 81DF6E2
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

MauvilleCity_Movement_1DF6E8: @ 81DF6E8
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_1DF6EE: @ 81DF6EE
	delay_16
	delay_8
	delay_4
	walk_in_place_fastest_down
	step_end

MauvilleCity_Movement_1DF6F3: @ 81DF6F3
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

MauvilleCity_Movement_1DF6F7: @ 81DF6F7
	walk_right
	walk_up
	step_end

MauvilleCity_Movement_1DF6FA: @ 81DF6FA
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_1DF703: @ 81DF703
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_1DF70D: @ 81DF70D
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

MauvilleCity_Movement_1DF719: @ 81DF719
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MauvilleCity_Movement_1DF725: @ 81DF725
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_1DF72F: @ 81DF72F
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_EventScript_1DF73A:: @ 81DF73A
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_1DF7B0
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_EventScript_1DF784
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_1DF77A
	msgbox MauvilleCity_Text_1DFFE4, MSGBOX_DEFAULT
	giveitem_std ITEM_BASEMENT_KEY
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
	msgbox MauvilleCity_Text_1E0154, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_1DF77A:: @ 81DF77A
	msgbox MauvilleCity_Text_1E0154, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_1DF784:: @ 81DF784
	msgbox MauvilleCity_Text_1E020E, MSGBOX_DEFAULT
	giveitem_std ITEM_TM24
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_TM24_FROM_WATTSON
	msgbox MauvilleCity_Text_1E02AA, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_1DF7B0:: @ 81DF7B0
	msgbox MauvilleCity_Text_1E02AA, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_1DF7BA:: @ 81DF7BA
	lockall
	pokenavcall MauvilleCity_Text_1DFDFB
	waitmessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox MauvilleCity_Text_1DFEB4, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	releaseall
	end

MauvilleCity_Text_1DF7DC: @ 81DF7DC
	.i18n 2881

MauvilleCity_Text_1DF845: @ 81DF845
	.i18n 2882

MauvilleCity_Text_1DF8B9: @ 81DF8B9
	.i18n 2883

MauvilleCity_Text_1DF963: @ 81DF963
	.i18n 2884

MauvilleCity_Text_1DF9B2: @ 81DF9B2
	.i18n 2885

MauvilleCity_Text_1DFA4A: @ 81DFA4A
	.i18n 2886

MauvilleCity_Text_1DFAA5: @ 81DFAA5
	.i18n 2887

MauvilleCity_Text_1DFB42: @ 81DFB42
	.i18n 2888

MauvilleCity_Text_1DFB6D: @ 81DFB6D
	.i18n 2889

MauvilleCity_Text_1DFB96: @ 81DFB96
	.i18n 2890

MauvilleCity_Text_1DFBC3: @ 81DFBC3
	.i18n 2891

MauvilleCity_Text_1DFBED: @ 81DFBED
	.i18n 2892

MauvilleCity_Text_1DFC8A: @ 81DFC8A
	.i18n 2893

MauvilleCity_Text_1DFD34: @ 81DFD34
	.i18n 2894


MauvilleCity_Text_1DFDFB: @ 81DFDFB
	.i18n 2895

MauvilleCity_Text_1DFEB4: @ 81DFEB4
	.i18n 2896

MauvilleCity_Text_1DFED5: @ 81DFED5
	.i18n 2897

MauvilleCity_Text_1DFFE4: @ 81DFFE4
	.i18n 2898

MauvilleCity_Text_1E0154: @ 81E0154
	.i18n 2899

MauvilleCity_Text_1E020E: @ 81E020E
	.i18n 2900

MauvilleCity_Text_1E02AA: @ 81E02AA
	.i18n 2901

MauvilleCity_Text_1E0301: @ 81E0301
	.i18n 2902

MauvilleCity_Text_1E037C: @ 81E037C
	.i18n 2903

MauvilleCity_Text_1E03FB: @ 81E03FB
	.i18n 2904

MauvilleCity_Text_1E044A: @ 81E044A
	.i18n 2905

MauvilleCity_Text_1E0485: @ 81E0485
	.i18n 2906

MauvilleCity_Text_1E04B7: @ 81E04B7
	.i18n 2907

MauvilleCity_Text_1E0504: @ 81E0504
	.i18n 2908

MauvilleCity_Text_1E053C: @ 81E053C
	.i18n 2909

MauvilleCity_Text_1E056A: @ 81E056A
	.i18n 2910

MauvilleCity_Text_1E0699: @ 81E0699
	.i18n 2911
