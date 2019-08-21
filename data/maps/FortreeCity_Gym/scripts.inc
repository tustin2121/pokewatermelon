FortreeCity_Gym_MapScripts:: @ 82165AB
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_MapScript2_2165BA
	.byte 0

FortreeCity_Gym_OnTransition: @ 82165B6
	special RotatingGate_InitPuzzle
	end

FortreeCity_Gym_MapScript2_2165BA: @ 82165BA
	map_script_2 VAR_TEMP_0, 16384, FortreeCity_Gym_EventScript_2165C4
	.2byte 0

FortreeCity_Gym_EventScript_2165C4:: @ 82165C4
	special RotatingGate_InitPuzzleAndGraphics
	end

FortreeCity_Gym_EventScript_2165C8:: @ 82165C8
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_216D75, FortreeCity_Gym_Text_216E60, FortreeCity_Gym_EventScript_2165FD, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_Gym_EventScript_21668D
	goto_if_unset FLAG_RECEIVED_TM40, FortreeCity_Gym_EventScript_216646
	msgbox FortreeCity_Gym_Text_217071, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_2165FD:: @ 82165FD
	message FortreeCity_Gym_Text_216EEC
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FortreeCity_Gym_Text_216F17, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	setvar VAR_0x8008, 6
	call FortreeCity_Gym_EventScript_271F43
	call FortreeCity_Gym_EventScript_21666A
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox FortreeCity_Gym_Text_217044, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	setvar VAR_WINONA_CALL_STEP_COUNTER, 0
	setflag FLAG_REGISTER_WINONA_POKENAV
	release
	end

FortreeCity_Gym_EventScript_216646:: @ 8216646
	giveitem_std ITEM_TM40
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox FortreeCity_Gym_Text_216FEC, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM40
	release
	end

FortreeCity_Gym_EventScript_21666A:: @ 821666A
	giveitem_std ITEM_TM40
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_BagIsFull
	msgbox FortreeCity_Gym_Text_216FEC, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM40
	return

FortreeCity_Gym_EventScript_21668D:: @ 821668D
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_217100, FortreeCity_Gym_Text_2171E6, FortreeCity_Gym_Text_217292
	msgbox FortreeCity_Gym_Text_21720B, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_2166A8:: @ 82166A8
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_2168A2, FortreeCity_Gym_Text_2168D3
	msgbox FortreeCity_Gym_Text_2168E7, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_2166BF:: @ 82166BF
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_21695A, FortreeCity_Gym_Text_2169C7
	msgbox FortreeCity_Gym_Text_2169F1, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_2166D6:: @ 82166D6
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_216A66, FortreeCity_Gym_Text_216AC4
	msgbox FortreeCity_Gym_Text_216AD7, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_2166ED:: @ 82166ED
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_216B1A, FortreeCity_Gym_Text_216B51
	msgbox FortreeCity_Gym_Text_216B5F, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_216704:: @ 8216704
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_216B9E, FortreeCity_Gym_Text_216C18
	msgbox FortreeCity_Gym_Text_216C32, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_21671B:: @ 821671B
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_216C96, FortreeCity_Gym_Text_216CF2
	msgbox FortreeCity_Gym_Text_216D0F, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_216732:: @ 8216732
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_216747
	msgbox FortreeCity_Gym_Text_216785, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_216747:: @ 8216747
	msgbox FortreeCity_Gym_Text_21687D, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_216751:: @ 8216751
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_216771
	goto FortreeCity_Gym_EventScript_21677B
	end

FortreeCity_Gym_EventScript_216761:: @ 8216761
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_216771
	goto FortreeCity_Gym_EventScript_21677B
	end

FortreeCity_Gym_EventScript_216771:: @ 8216771
	msgbox FortreeCity_Gym_Text_2170C7, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_EventScript_21677B:: @ 821677B
	msgbox FortreeCity_Gym_Text_2170AE, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_Text_216785: @ 8216785
	.i18n 2267

FortreeCity_Gym_Text_21687D: @ 821687D
	.i18n 2268

FortreeCity_Gym_Text_2168A2: @ 82168A2
	.i18n 2269

FortreeCity_Gym_Text_2168D3: @ 82168D3
	.i18n 2270

FortreeCity_Gym_Text_2168E7: @ 82168E7
	.i18n 2271

FortreeCity_Gym_Text_21695A: @ 821695A
	.i18n 2272

FortreeCity_Gym_Text_2169C7: @ 82169C7
	.i18n 2273

FortreeCity_Gym_Text_2169F1: @ 82169F1
	.i18n 2274

FortreeCity_Gym_Text_216A66: @ 8216A66
	.i18n 2275

FortreeCity_Gym_Text_216AC4: @ 8216AC4
	.i18n 2276

FortreeCity_Gym_Text_216AD7: @ 8216AD7
	.i18n 2277

FortreeCity_Gym_Text_216B1A: @ 8216B1A
	.i18n 2278

FortreeCity_Gym_Text_216B51: @ 8216B51
	.i18n 2279

FortreeCity_Gym_Text_216B5F: @ 8216B5F
	.i18n 2280

FortreeCity_Gym_Text_216B9E: @ 8216B9E
	.i18n 2281

FortreeCity_Gym_Text_216C18: @ 8216C18
	.i18n 2282

FortreeCity_Gym_Text_216C32: @ 8216C32
	.i18n 2283

FortreeCity_Gym_Text_216C96: @ 8216C96
	.i18n 2284

FortreeCity_Gym_Text_216CF2: @ 8216CF2
	.i18n 2285

FortreeCity_Gym_Text_216D0F: @ 8216D0F
	.i18n 2286

FortreeCity_Gym_Text_216D75: @ 8216D75
	.i18n 2287

FortreeCity_Gym_Text_216E60: @ 8216E60
	.i18n 2288

FortreeCity_Gym_Text_216EEC: @ 8216EEC
	.i18n 2289

FortreeCity_Gym_Text_216F17: @ 8216F17
	.i18n 2290

FortreeCity_Gym_Text_216FEC: @ 8216FEC
	.i18n 2291

FortreeCity_Gym_Text_217044: @ 8217044
	.i18n 2292

FortreeCity_Gym_Text_217071: @ 8217071
	.i18n 2293

FortreeCity_Gym_Text_2170AE: @ 82170AE
	.i18n 2294

FortreeCity_Gym_Text_2170C7: @ 82170C7
	.i18n 2295

FortreeCity_Gym_Text_217100: @ 8217100
	.i18n 2296

FortreeCity_Gym_Text_2171E6: @ 82171E6
	.i18n 2297

FortreeCity_Gym_Text_21720B: @ 821720B
	.i18n 2298

FortreeCity_Gym_Text_217292: @ 8217292
	.i18n 2299
