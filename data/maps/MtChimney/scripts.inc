MtChimney_MapScripts:: @ 822EDC1
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_MapScript1_22EDD2
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
	.byte 0

MtChimney_OnTransition: @ 822EDCC
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
	end

MtChimney_MapScript1_22EDD2: @ 822EDD2
	setstepcallback 1
	end

MtChimney_EventScript_22EDD5:: @ 822EDD5
	lock
	faceplayer
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_22EDF9
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_22EE02
	closemessage
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	release
	end

MtChimney_EventScript_22EDF9:: @ 822EDF9
	msgbox MtChimney_Text_22FAD2, MSGBOX_DEFAULT
	return

MtChimney_EventScript_22EE02:: @ 822EE02
	msgbox MtChimney_Text_22FBC7, MSGBOX_DEFAULT
	return

MtChimney_EventScript_22EE0B:: @ 822EE0B
	lockall
	playbgm MUS_MGM0, 0
	msgbox MtChimney_Text_22F26A, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Common_Movement_Delay48
	waitmovement 0
	msgbox MtChimney_Text_22F32E, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAXIE_2, MtChimney_Text_22F5CF
	msgbox MtChimney_Text_22F5F7, MSGBOX_DEFAULT
	closemessage
	delay 30
	fadescreen 1
	removeobject 2
	removeobject 29
	removeobject 3
	removeobject 22
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	fadescreen 0
	setobjectxyperm 1, 10, 12
	addobject 1
	compare VAR_FACING, 4
	call_if_eq MtChimney_EventScript_22EEC7
	compare VAR_FACING, 2
	call_if_eq MtChimney_EventScript_22EED2
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox MtChimney_Text_22FC3D, MSGBOX_DEFAULT
	closemessage
	compare VAR_FACING, 4
	call_if_eq MtChimney_EventScript_22EEDD
	compare VAR_FACING, 2
	call_if_eq MtChimney_EventScript_22EEE8
	removeobject 1
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_1_PROF_COZMO
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	releaseall
	end

MtChimney_EventScript_22EEC7:: @ 822EEC7
	applymovement 1, MtChimney_Movement_22EF83
	waitmovement 0
	return

MtChimney_EventScript_22EED2:: @ 822EED2
	applymovement 1, MtChimney_Movement_22EF94
	waitmovement 0
	return

MtChimney_EventScript_22EEDD:: @ 822EEDD
	applymovement 1, MtChimney_Movement_22EF8B
	waitmovement 0
	return

MtChimney_EventScript_22EEE8:: @ 822EEE8
	applymovement 1, MtChimney_Movement_22EF9C
	waitmovement 0
	return

MtChimney_EventScript_22EEF3:: @ 822EEF3
	lock
	faceplayer
	showmoneybox 0, 0, 0
	msgbox MtChimney_Text_22FE04, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MtChimney_EventScript_22EF69
	checkmoney 0xc8, 0
	compare VAR_RESULT, 0
	goto_if_eq MtChimney_EventScript_22EF76
	msgbox MtChimney_Text_22FE4D, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE, 1
	compare VAR_RESULT, 1
	call_if_eq MtChimney_EventScript_22EF5E
	giveitem_std ITEM_LAVA_COOKIE
	compare VAR_RESULT, 0
	goto_if_eq MtChimney_EventScript_22EF51
	hidemoneybox
	nop
	nop
	release
	end

MtChimney_EventScript_22EF51:: @ 822EF51
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	release
	end

MtChimney_EventScript_22EF5E:: @ 822EF5E
	takemoney 0xc8, 0
	updatemoneybox 0, 0
	return

MtChimney_EventScript_22EF69:: @ 822EF69
	msgbox MtChimney_Text_22FE9B, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	release
	end

MtChimney_EventScript_22EF76:: @ 822EF76
	msgbox MtChimney_Text_22FE5E, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	release
	end

MtChimney_Movement_22EF83: @ 822EF83
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

MtChimney_Movement_22EF8B: @ 822EF8B
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22EF94: @ 822EF94
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

MtChimney_Movement_22EF9C: @ 822EF9C
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22EFA6: @ 822EFA6
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_22EFB8: @ 822EFB8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_22EFC1: @ 822EFC1
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22EFD0: @ 822EFD0
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_22EFE9: @ 822EFE9
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_22EFF4: @ 822EFF4
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22F004: @ 822F004
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_22F015: @ 822F015
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end

MtChimney_Movement_22F01D: @ 822F01D
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22F02B: @ 822F02B
	walk_down
	step_end

MtChimney_Movement_22F02D: @ 822F02D
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22F035: @ 822F035
	delay_16
	delay_16
	walk_in_place_fastest_left
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_22F03F: @ 822F03F
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	delay_16
	walk_down
	walk_down
	step_end

MtChimney_Movement_22F04A: @ 822F04A
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	face_right
	step_end

MtChimney_Movement_22F04F: @ 822F04F
	walk_left
	walk_in_place_fastest_right
	delay_16
	step_end

MtChimney_EventScript_22F053:: @ 822F053
	msgbox MtChimney_Text_22FD1F, MSGBOX_SIGN
	end

MtChimney_EventScript_22F05C:: @ 822F05C
	msgbox MtChimney_Text_22FD5B, MSGBOX_SIGN
	end

MtChimney_EventScript_22F065:: @ 822F065
	msgbox MtChimney_Text_22FDA1, MSGBOX_SIGN
	end

MtChimney_EventScript_22F06E:: @ 822F06E
	trainerbattle_single TRAINER_TABITHA_2, MtChimney_Text_22F6AA, MtChimney_Text_22F72C
	msgbox MtChimney_Text_22F76D, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F085:: @ 822F085
	trainerbattle_single TRAINER_GRUNT_31, MtChimney_Text_22F7A2, MtChimney_Text_22F83A
	msgbox MtChimney_Text_22F859, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F09C:: @ 822F09C
	msgbox MtChimney_Text_22F978, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0A5:: @ 822F0A5
	msgbox MtChimney_Text_22F9B2, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0AE:: @ 822F0AE
	msgbox MtChimney_Text_22F9D1, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0B7:: @ 822F0B7
	msgbox MtChimney_Text_22FA2F, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0C0:: @ 822F0C0
	msgbox MtChimney_Text_22FA8B, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0C9:: @ 822F0C9
	msgbox MtChimney_Text_22FAA5, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0D2:: @ 822F0D2
	msgbox MtChimney_Text_22FACB, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0DB:: @ 822F0DB
	msgbox MtChimney_Text_22FDFC, MSGBOX_SIGN
	end

MtChimney_EventScript_22F0E4:: @ 822F0E4
	lockall
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_22F137
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_22F12D
	msgbox MtChimney_Text_22FF12, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MtChimney_EventScript_22F123
	msgbox MtChimney_Text_22FF66, MSGBOX_DEFAULT
	giveitem_std ITEM_METEORITE
	setflag FLAG_RECEIVED_METEORITE
	releaseall
	end

MtChimney_EventScript_22F123:: @ 822F123
	msgbox MtChimney_Text_22FF9C, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_22F12D:: @ 822F12D
	msgbox MtChimney_Text_22FFC0, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_22F137:: @ 822F137
	msgbox MtChimney_Text_22FEAA, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_22F141:: @ 822F141
	msgbox MtChimney_Text_22FFFA, MSGBOX_SIGN
	end

MtChimney_EventScript_22F14A:: @ 822F14A
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_23001D, MtChimney_Text_230076, MtChimney_EventScript_22F176
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MtChimney_EventScript_22F195
	msgbox MtChimney_Text_2300A2, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_22F176:: @ 822F176
	special sub_80B4808
	waitmovement 0
	msgbox MtChimney_Text_2300E3, MSGBOX_DEFAULT
	register_matchcall TRAINER_SHELBY_1
	release
	end

MtChimney_EventScript_22F195:: @ 822F195
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_230153, MtChimney_Text_2301BB
	msgbox MtChimney_Text_2301E7, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F1AC:: @ 822F1AC
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_23022A, MtChimney_Text_23026D
	msgbox MtChimney_Text_230292, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F1C3:: @ 822F1C3
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_2302BD, MtChimney_Text_230304
	msgbox MtChimney_Text_23033A, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F1DA:: @ 822F1DA
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_2303DF, MtChimney_Text_230436
	msgbox MtChimney_Text_230463, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F1F1:: @ 822F1F1
	trainerbattle_single TRAINER_GRUNT_24, MtChimney_Text_22F8B6, MtChimney_Text_22F921
	msgbox MtChimney_Text_22F93A, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_22F208:: @ 822F208
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_2304B3, MtChimney_Text_2304F7, MtChimney_EventScript_22F234
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MtChimney_EventScript_22F253
	msgbox MtChimney_Text_230519, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_22F234:: @ 822F234
	special sub_80B4808
	waitmovement 0
	msgbox MtChimney_Text_230557, MSGBOX_DEFAULT
	register_matchcall TRAINER_SAWYER_1
	release
	end

MtChimney_EventScript_22F253:: @ 822F253
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_23059C, MtChimney_Text_2305E3
	msgbox MtChimney_Text_230614, MSGBOX_AUTOCLOSE
	end

MtChimney_Text_22F26A: @ 822F26A
	.i18n 3222

MtChimney_Text_22F32E: @ 822F32E
	.i18n 3223

MtChimney_Text_22F5CF: @ 822F5CF
	.i18n 3224

MtChimney_Text_22F5F7: @ 822F5F7
	.i18n 3225

MtChimney_Text_22F6AA: @ 822F6AA
	.i18n 3226

MtChimney_Text_22F72C: @ 822F72C
	.i18n 3227

MtChimney_Text_22F76D: @ 822F76D
	.i18n 3228

MtChimney_Text_22F7A2: @ 822F7A2
	.i18n 3229

MtChimney_Text_22F83A: @ 822F83A
	.i18n 3230

MtChimney_Text_22F859: @ 822F859
	.i18n 3231

MtChimney_Text_22F8B6: @ 822F8B6
	.i18n 3232

MtChimney_Text_22F921: @ 822F921
	.i18n 3233

MtChimney_Text_22F93A: @ 822F93A
	.i18n 3234

MtChimney_Text_22F978: @ 822F978
	.i18n 3235

MtChimney_Text_22F9B2: @ 822F9B2
	.i18n 3236

MtChimney_Text_22F9D1: @ 822F9D1
	.i18n 3237

MtChimney_Text_22FA2F: @ 822FA2F
	.i18n 3238

MtChimney_Text_22FA8B: @ 822FA8B
	.i18n 3239

MtChimney_Text_22FAA5: @ 822FAA5
	.i18n 3240

MtChimney_Text_22FACB: @ 822FACB
	.i18n 3241

MtChimney_Text_22FAD2: @ 822FAD2
	.i18n 3242

MtChimney_Text_22FBC7: @ 822FBC7
	.i18n 3243

MtChimney_Text_22FC3D: @ 822FC3D
	.i18n 3244

MtChimney_Text_22FD1F: @ 822FD1F
	.i18n 3245

MtChimney_Text_22FD5B: @ 822FD5B
	.i18n 3246

MtChimney_Text_22FDA1: @ 822FDA1
	.i18n 3247

MtChimney_Text_22FDFC: @ 822FDFC
	.i18n 3248

MtChimney_Text_22FE04: @ 822FE04
	.i18n 3249

MtChimney_Text_22FE4D: @ 822FE4D
	.i18n 3250

MtChimney_Text_22FE5E: @ 822FE5E
	.i18n 3251

MtChimney_Text_22FE9B: @ 822FE9B
	.i18n 3252

MtChimney_Text_22FEAA: @ 822FEAA
	.i18n 3253

MtChimney_Text_22FF12: @ 822FF12
	.i18n 3254

MtChimney_Text_22FF66: @ 822FF66
	.i18n 3255

MtChimney_Text_22FF9C: @ 822FF9C
	.i18n 3256

MtChimney_Text_22FFC0: @ 822FFC0
	.i18n 3257

MtChimney_Text_22FFFA: @ 822FFFA
	.i18n 3258

MtChimney_Text_23001D: @ 823001D
	.i18n 3259

MtChimney_Text_230076: @ 8230076
	.i18n 3260

MtChimney_Text_2300A2: @ 82300A2
	.i18n 3261

MtChimney_Text_2300E3: @ 82300E3
	.i18n 3262

MtChimney_Text_230153: @ 8230153
	.i18n 3263

MtChimney_Text_2301BB: @ 82301BB
	.i18n 3264

MtChimney_Text_2301E7: @ 82301E7
	.i18n 3265

MtChimney_Text_23022A: @ 823022A
	.i18n 3266

MtChimney_Text_23026D: @ 823026D
	.i18n 3267

MtChimney_Text_230292: @ 8230292
	.i18n 3268

MtChimney_Text_2302BD: @ 82302BD
	.i18n 3269

MtChimney_Text_230304: @ 8230304
	.i18n 3270

MtChimney_Text_23033A: @ 823033A
	.i18n 3271

MtChimney_Text_2303DF: @ 82303DF
	.i18n 3272

MtChimney_Text_230436: @ 8230436
	.i18n 3273

MtChimney_Text_230463: @ 8230463
	.i18n 3274

MtChimney_Text_2304B3: @ 82304B3
	.i18n 3275

MtChimney_Text_2304F7: @ 82304F7
	.i18n 3276

MtChimney_Text_230519: @ 8230519
	.i18n 3277

MtChimney_Text_230557: @ 8230557
	.i18n 3278

MtChimney_Text_23059C: @ 823059C
	.i18n 3279

MtChimney_Text_2305E3: @ 82305E3
	.i18n 3280

MtChimney_Text_230614: @ 8230614
	.i18n 3281

