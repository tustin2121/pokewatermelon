MossdeepCity_SpaceCenter_2F_MapScripts:: @ 8223D58
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_MapScript2_223DB5
	.byte 0

MossdeepCity_SpaceCenter_2F_OnTransition: @ 8223D63
	compare VAR_MOSSDEEP_CITY_STATE, 2
	call_if_eq MossdeepCity_SpaceCenter_2F_EventScript_223D7A
	compare VAR_MOSSDEEP_SPACE_CENTER_STATE_2, 2
	call_if_eq MossdeepCity_SpaceCenter_2F_EventScript_223D9F
	end

MossdeepCity_SpaceCenter_2F_EventScript_223D7A:: @ 8223D7A
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	setobjectxyperm 3, 5, 3
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 1, 3, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 2, 1, 3
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	return

MossdeepCity_SpaceCenter_2F_EventScript_223D9F:: @ 8223D9F
	setobjectxyperm 5, 11, 2
	setobjectxyperm 7, 15, 2
	setobjectxyperm 6, 13, 4
	return

MossdeepCity_SpaceCenter_2F_MapScript2_223DB5: @ 8223DB5
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE_2, 1, MossdeepCity_SpaceCenter_2F_EventScript_223DBF
	.2byte 0

MossdeepCity_SpaceCenter_2F_EventScript_223DBF:: @ 8223DBF
	playse SE_PIN
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_2243A4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_223E09
	msgbox MossdeepCity_SpaceCenter_2F_Text_2243FE, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_223E07
	waitmovement 0
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 255, 13, 1
	waitstate
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_223E07: @ 8223E07
	walk_up
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_223E09:: @ 8223E09
	msgbox MossdeepCity_SpaceCenter_2F_Text_22442D, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_34, MossdeepCity_SpaceCenter_2F_Text_224461
	applymovement 6, MossdeepCity_SpaceCenter_2F_Movement_223E85
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_22446E, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_35, MossdeepCity_SpaceCenter_2F_Text_224499
	applymovement 5, MossdeepCity_SpaceCenter_2F_Movement_223E81
	waitmovement 0
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_2244AB, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_36, MossdeepCity_SpaceCenter_2F_Text_2244F1
	applymovement 7, MossdeepCity_SpaceCenter_2F_Movement_223E89
	waitmovement 0
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE_2, 2
	copyobjectxytoperm 5
	copyobjectxytoperm 7
	copyobjectxytoperm 6
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_223E81: @ 8223E81
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_Movement_223E85: @ 8223E85
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_Movement_223E89: @ 8223E89
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_223E8D:: @ 8223E8D
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_223EB4
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_223EBE
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_223EB4
	goto MossdeepCity_SpaceCenter_2F_EventScript_223EBE
	end

MossdeepCity_SpaceCenter_2F_EventScript_223EB4:: @ 8223EB4
	msgbox MossdeepCity_SpaceCenter_2F_Text_2241A1, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223EBE:: @ 8223EBE
	msgbox MossdeepCity_SpaceCenter_2F_Text_22420C, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223EC8:: @ 8223EC8
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_223EEF
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_223EF9
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_223EEF
	goto MossdeepCity_SpaceCenter_2F_EventScript_223EF9
	end

MossdeepCity_SpaceCenter_2F_EventScript_223EEF:: @ 8223EEF
	msgbox MossdeepCity_SpaceCenter_2F_Text_224253, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223EF9:: @ 8223EF9
	msgbox MossdeepCity_SpaceCenter_2F_Text_2242C5, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F03:: @ 8223F03
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_223F2A
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_223F34
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_223F2A
	goto MossdeepCity_SpaceCenter_2F_EventScript_223F34
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F2A:: @ 8223F2A
	msgbox MossdeepCity_SpaceCenter_2F_Text_224342, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F34:: @ 8223F34
	msgbox MossdeepCity_SpaceCenter_2F_Text_224376, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F3E:: @ 8223F3E
	msgbox MossdeepCity_SpaceCenter_2F_Text_22452C, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F47:: @ 8223F47
	msgbox MossdeepCity_SpaceCenter_2F_Text_224570, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F50:: @ 8223F50
	msgbox MossdeepCity_SpaceCenter_2F_Text_2245AF, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F59:: @ 8223F59
	lock
	faceplayer
	msgbox MossdeepCity_SpaceCenter_2F_Text_2245D9, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F6F:: @ 8223F6F
	lockall
	msgbox MossdeepCity_SpaceCenter_2F_Text_22467B, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_223F7A:: @ 8223F7A
	lockall
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_223FDA
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	msgbox MossdeepCity_SpaceCenter_2F_Text_2246B2, MSGBOX_DEFAULT
	msgbox MossdeepCity_SpaceCenter_2F_Text_2246F0, MSGBOX_DEFAULT
	closemessage
	delay 30
	playse SE_KOUKA_L
	switch VAR_FACING
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_223FBA
	applymovement 4, MossdeepCity_SpaceCenter_2F_Movement_223FC6
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_223FBA:: @ 8223FBA
	applymovement 4, MossdeepCity_SpaceCenter_2F_Movement_223FCF
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_223FC6: @ 8223FC6
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	step_end

MossdeepCity_SpaceCenter_2F_Movement_223FCF: @ 8223FCF
	face_left
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	face_down
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_223FDA:: @ 8223FDA
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_2247FF, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_22400C
	msgbox MossdeepCity_SpaceCenter_2F_Text_224854, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_22400C:: @ 822400C
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	special SavePlayerParty
	fadescreen 1
	special ChooseHalfPartyForBattle
	waitstate
	compare VAR_RESULT, 0
	goto_if_ne MossdeepCity_SpaceCenter_2F_EventScript_224032
	special LoadPlayerParty
	goto MossdeepCity_SpaceCenter_2F_EventScript_223FDA

MossdeepCity_SpaceCenter_2F_EventScript_224032:: @ 8224032
	special ReducePlayerPartyToSelectedMons
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_0x8004, SPECIAL_BATTLE_STEVEN
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	setvar VAR_0x8004, 6
	special CallFrontierUtilFunc
	special LoadPlayerParty
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_224071
	fadescreen 1
	special sp0C8_whiteout_maybe
	waitstate

MossdeepCity_SpaceCenter_2F_EventScript_224071:: @ 8224071
	msgbox MossdeepCity_SpaceCenter_2F_Text_2248C2, MSGBOX_DEFAULT
	closemessage
	delay 20
	applymovement 9, Common_Movement_WalkInPlaceLeft
	applymovement 8, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 60
	applymovement 9, Common_Movement_WalkInPlaceUp
	applymovement 8, Common_Movement_WalkInPlaceRight
	waitmovement 0
	delay 20
	msgbox MossdeepCity_SpaceCenter_2F_Text_2249DC, MSGBOX_DEFAULT
	closemessage
	setvar VAR_MOSSDEEP_CITY_STATE, 3
	fadedefaultbgm
	fadescreen 1
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE_2, 3
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	removeobject 5
	removeobject 7
	removeobject 6
	removeobject 8
	removeobject 9
	setobjectxy 3, 5, 6
	turnobject 3, 1
	setobjectxy 2, 11, 8
	turnobject 2, 2
	setobjectxy 1, 6, 2
	turnobject 1, 2
	call MossdeepCity_SpaceCenter_2F_EventScript_224131
	fadescreen 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_224A4A, MSGBOX_DEFAULT
	closemessage
	fadescreen 1
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	removeobject 4
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_INVISIBLE_NINJA_BOY
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
	removeobject 3
	setobjectxyperm 3, 5, 6
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	addobject 3
	fadescreen 0
	end

MossdeepCity_SpaceCenter_2F_EventScript_224131:: @ 8224131
	switch VAR_FACING
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_22414D
	case 3, MossdeepCity_SpaceCenter_2F_EventScript_224152
	return

MossdeepCity_SpaceCenter_2F_EventScript_22414D:: @ 822414D
	turnobject 4, 2
	return

MossdeepCity_SpaceCenter_2F_EventScript_224152:: @ 8224152
	turnobject 4, 4
	return

MossdeepCity_SpaceCenter_2F_EventScript_224157:: @ 8224157
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_MAXIE_3, 0, MossdeepCity_SpaceCenter_2F_Text_22487C, MossdeepCity_SpaceCenter_2F_Text_22487C
	end

MossdeepCity_SpaceCenter_2F_EventScript_224166:: @ 8224166
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_TABITHA_1, 0, MossdeepCity_SpaceCenter_Text_2248AD, MossdeepCity_SpaceCenter_Text_2248AD
	end

MossdeepCity_SpaceCenter_2F_EventScript_224175:: @ 8224175
	lockall
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq MossdeepCity_SpaceCenter_2F_EventScript_224193
	compare VAR_RESULT, FEMALE
	call_if_eq MossdeepCity_SpaceCenter_2F_EventScript_22419A
	closemessage
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_224193:: @ 8224193
	pokenavcall MossdeepCity_SpaceCenter_2F_Text_2B38C1
	waitmessage
	return

MossdeepCity_SpaceCenter_2F_EventScript_22419A:: @ 822419A
	pokenavcall MossdeepCity_SpaceCenter_2F_Text_2B39C6
	waitmessage
	return

MossdeepCity_SpaceCenter_2F_Text_2241A1: @ 82241A1
	.i18n 3185

MossdeepCity_SpaceCenter_2F_Text_22420C: @ 822420C
	.i18n 3186

MossdeepCity_SpaceCenter_2F_Text_224253: @ 8224253
	.i18n 3187

MossdeepCity_SpaceCenter_2F_Text_2242C5: @ 82242C5
	.i18n 3188

MossdeepCity_SpaceCenter_2F_Text_224342: @ 8224342
	.i18n 3189

MossdeepCity_SpaceCenter_2F_Text_224376: @ 8224376
	.i18n 3190

MossdeepCity_SpaceCenter_2F_Text_2243A4: @ 82243A4
	.i18n 3191

MossdeepCity_SpaceCenter_2F_Text_2243FE: @ 82243FE
	.i18n 3192

MossdeepCity_SpaceCenter_2F_Text_22442D: @ 822442D
	.i18n 3193

MossdeepCity_SpaceCenter_2F_Text_224461: @ 8224461
	.i18n 3194

MossdeepCity_SpaceCenter_2F_Text_22446E: @ 822446E
	.i18n 3195

MossdeepCity_SpaceCenter_2F_Text_224499: @ 8224499
	.i18n 3196

MossdeepCity_SpaceCenter_2F_Text_2244AB: @ 82244AB
	.i18n 3197

MossdeepCity_SpaceCenter_2F_Text_2244F1: @ 82244F1
	.i18n 3198

MossdeepCity_SpaceCenter_2F_Text_22452C: @ 822452C
	.i18n 3199

MossdeepCity_SpaceCenter_2F_Text_224570: @ 8224570
	.i18n 3200

MossdeepCity_SpaceCenter_2F_Text_2245AF: @ 82245AF
	.i18n 3201

MossdeepCity_SpaceCenter_2F_Text_2245D9: @ 82245D9
	.i18n 3202

MossdeepCity_SpaceCenter_2F_Text_22467B: @ 822467B
	.i18n 3203

MossdeepCity_SpaceCenter_2F_Text_2246B2: @ 82246B2
	.i18n 3204

MossdeepCity_SpaceCenter_2F_Text_2246F0: @ 82246F0
	.i18n 3205

MossdeepCity_SpaceCenter_2F_Text_2247FF: @ 82247FF
	.i18n 3206

MossdeepCity_SpaceCenter_2F_Text_224854: @ 8224854
	.i18n 3207

MossdeepCity_SpaceCenter_2F_Text_22487C: @ 822487C
	.i18n 3208

MossdeepCity_SpaceCenter_Text_2248AD: @ 82248AD
	.i18n 3209

MossdeepCity_SpaceCenter_2F_Text_2248C2: @ 82248C2
	.i18n 3210

MossdeepCity_SpaceCenter_2F_Text_2249DC: @ 82249DC
	.i18n 3211

MossdeepCity_SpaceCenter_2F_Text_224A4A: @ 8224A4A
	.i18n 3212
