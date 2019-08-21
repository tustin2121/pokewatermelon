RustboroCity_Gym_MapScripts:: @ 8212F30
	.byte 0

RustboroCity_Gym_EventScript_212F31:: @ 8212F31
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_21362A, RustboroCity_Gym_Text_21370B, RustboroCity_Gym_EventScript_212F66, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Gym_EventScript_212FC8
	goto_if_unset FLAG_RECEIVED_TM39, RustboroCity_Gym_EventScript_212FA4
	msgbox RustboroCity_Gym_Text_2139A7, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_212F66:: @ 8212F66
	message RustboroCity_Gym_Text_2137EC
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_213816, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call RustboroCity_Gym_EventScript_271F43
	compare VAR_PETALBURG_GYM_STATE, 6
	call_if_eq RustboroCity_Gym_EventScript_271E84
	goto RustboroCity_Gym_EventScript_212FA4
	end

RustboroCity_Gym_EventScript_212FA4:: @ 8212FA4
	giveitem_std ITEM_TM39
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM39
	msgbox RustboroCity_Gym_Text_2138B1, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_212FC8:: @ 8212FC8
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_213C2F, RustboroCity_Gym_Text_213CF9, RustboroCity_Gym_Text_213D93
	msgbox RustboroCity_Gym_Text_213D12, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_212FE3:: @ 8212FE3
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_2133E9, RustboroCity_Gym_Text_21342D
	msgbox RustboroCity_Gym_Text_213447, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_212FFA:: @ 8212FFA
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_213486, RustboroCity_Gym_Text_2134C6
	msgbox RustboroCity_Gym_Text_2134E6, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_213011:: @ 8213011
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_213533, RustboroCity_Gym_Text_213589
	msgbox RustboroCity_Gym_Text_2135C0, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_213028:: @ 8213028
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_21303D
	msgbox RustboroCity_Gym_Text_21309D, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_21303D:: @ 821303D
	msgbox RustboroCity_Gym_Text_2132E2, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_213047:: @ 8213047
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_213067
	goto RustboroCity_Gym_EventScript_213071
	end

RustboroCity_Gym_EventScript_213057:: @ 8213057
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_213067
	goto RustboroCity_Gym_EventScript_213071
	end

RustboroCity_Gym_EventScript_213067:: @ 8213067
	msgbox RustboroCity_Gym_Text_213A3B, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_213071:: @ 8213071
	msgbox RustboroCity_Gym_Text_213A21, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_21307B:: @ 821307B
	lockall
	pokenavcall RustboroCity_Gym_Text_213A76
	waitmessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox RustboroCity_Gym_Text_213C01, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_21309D: @ 821309D
	.i18n 4195

RustboroCity_Gym_Text_2132E2: @ 82132E2
	.i18n 4196

RustboroCity_Gym_Text_2133E9: @ 82133E9
	.i18n 4197

RustboroCity_Gym_Text_21342D: @ 821342D
	.i18n 4198

RustboroCity_Gym_Text_213447: @ 8213447
	.i18n 4199

RustboroCity_Gym_Text_213486: @ 8213486
	.i18n 4200

RustboroCity_Gym_Text_2134C6: @ 82134C6
	.i18n 4201

RustboroCity_Gym_Text_2134E6: @ 82134E6
	.i18n 4202

RustboroCity_Gym_Text_213533: @ 8213533
	.i18n 4203

RustboroCity_Gym_Text_213589: @ 8213589
	.i18n 4204

RustboroCity_Gym_Text_2135C0: @ 82135C0
	.i18n 4205

RustboroCity_Gym_Text_21362A: @ 821362A
	.i18n 4206

RustboroCity_Gym_Text_21370B: @ 821370B
	.i18n 4207

RustboroCity_Gym_Text_2137EC: @ 82137EC
	.i18n 4208

RustboroCity_Gym_Text_213816: @ 8213816
	.i18n 4209

RustboroCity_Gym_Text_2138B1: @ 82138B1
	.i18n 4210

RustboroCity_Gym_Text_2139A7: @ 82139A7
	.i18n 4211

RustboroCity_Gym_Text_213A21: @ 8213A21
	.i18n 4212

RustboroCity_Gym_Text_213A3B: @ 8213A3B
	.i18n 4213


RustboroCity_Gym_Text_213A76: @ 8213A76
	.i18n 4214

RustboroCity_Gym_Text_213C01: @ 8213C01
	.i18n 4215

RustboroCity_Gym_Text_213C2F: @ 8213C2F
	.i18n 4216

RustboroCity_Gym_Text_213CF9: @ 8213CF9
	.i18n 4217

RustboroCity_Gym_Text_213D12: @ 8213D12
	.i18n 4218

RustboroCity_Gym_Text_213D93: @ 8213D93
	.i18n 4219
