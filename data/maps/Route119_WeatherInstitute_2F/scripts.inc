Route119_WeatherInstitute_2F_MapScripts:: @ 826FF1E
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
	.byte 0

Route119_WeatherInstitute_2F_OnTransition: @ 826FF24
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	call_if_eq Route119_WeatherInstitute_2F_EventScript_26FF44
	compare VAR_WEATHER_INSTITUTE_STATE, 1
	call_if_eq Route119_WeatherInstitute_2F_EventScript_26FF50
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_26FF5C
	end

Route119_WeatherInstitute_2F_EventScript_26FF44:: @ 826FF44
	setobjectxyperm 5, 1, 6
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_26FF50:: @ 826FF50
	setobjectxyperm 5, 4, 6
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_26FF5C:: @ 826FF5C
	setobjectxyperm 5, 2, 2
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
	return

Route119_WeatherInstitute_2F_EventScript_26FF68:: @ 826FF68
	trainerbattle_single TRAINER_GRUNT_37, Route119_WeatherInstitute_2F_Text_270335, Route119_WeatherInstitute_2F_Text_27039F
	msgbox Route119_WeatherInstitute_2F_Text_2703C0, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_26FF7F:: @ 826FF7F
	trainerbattle_single TRAINER_GRUNT_12, Route119_WeatherInstitute_2F_Text_27019C, Route119_WeatherInstitute_2F_Text_270208
	msgbox Route119_WeatherInstitute_2F_Text_27022B, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_26FF96:: @ 826FF96
	trainerbattle_single TRAINER_GRUNT_13, Route119_WeatherInstitute_2F_Text_270292, Route119_WeatherInstitute_2F_Text_2702CE
	msgbox Route119_WeatherInstitute_2F_Text_2702DA, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_26FFAD:: @ 826FFAD
	trainerbattle_single TRAINER_SHELLY_1, Route119_WeatherInstitute_2F_Text_270409, Route119_WeatherInstitute_2F_Text_2704BD, Route119_WeatherInstitute_2F_EventScript_26FFC8
	msgbox Route119_WeatherInstitute_2F_Text_2704E4, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_26FFC8:: @ 826FFC8
	msgbox Route119_WeatherInstitute_2F_Text_2704E4, MSGBOX_DEFAULT
	closemessage
	addobject 7
	applymovement 7, Route119_WeatherInstitute_2F_Movement_270170
	applymovement EVENT_OBJ_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_27017C
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_Text_270568, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_Text_2705DD, MSGBOX_DEFAULT
	closemessage
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	fadedefaultbgm
	fadescreen 1
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 8
	removeobject 7
	applymovement EVENT_OBJ_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_270184
	waitmovement 0
	fadescreen 0
	applymovement 5, Route119_WeatherInstitute_2F_Movement_270187
	waitmovement 0
	copyobjectxytoperm 5
	goto Route119_WeatherInstitute_2F_EventScript_27004D
	end

Route119_WeatherInstitute_2F_EventScript_27004D:: @ 827004D
	msgbox Route119_WeatherInstitute_2F_Text_270650, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, SPECIES_CASTFORM
	givemon SPECIES_CASTFORM, 25, ITEM_MYSTIC_WATER, 0x0, 0x0, 0
	compare VAR_RESULT, 0
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_270085
	compare VAR_RESULT, 1
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_2700AD
	goto Route119_WeatherInstitute_2F_EventScript_273811
	end

Route119_WeatherInstitute_2F_EventScript_270085:: @ 8270085
	call Route119_WeatherInstitute_2F_EventScript_2700DB
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_2700EA
	call Route119_WeatherInstitute_2F_EventScript_27378B
	call Common_EventScript_NameReceivedPokemon
	goto Route119_WeatherInstitute_2F_EventScript_2700EA
	end

Route119_WeatherInstitute_2F_EventScript_2700AD:: @ 82700AD
	call Route119_WeatherInstitute_2F_EventScript_2700DB
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_2700D0
	call Route119_WeatherInstitute_2F_EventScript_273797
	goto Route119_WeatherInstitute_2F_EventScript_2700D0
	end

Route119_WeatherInstitute_2F_EventScript_2700D0:: @ 82700D0
	call Route119_WeatherInstitute_2F_EventScript_2737A0
	goto Route119_WeatherInstitute_2F_EventScript_2700EA
	end

Route119_WeatherInstitute_2F_EventScript_2700DB:: @ 82700DB
	playfanfare MUS_FANFA4
	message Route119_WeatherInstitute_2F_Text_2706E8
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_CASTFORM
	return

Route119_WeatherInstitute_2F_EventScript_2700EA:: @ 82700EA
	msgbox Route119_WeatherInstitute_2F_Text_2706FE, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_CASTFORM
	release
	end

Route119_WeatherInstitute_2F_EventScript_2700F7:: @ 82700F7
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartUnusualWeather
	msgbox Route119_WeatherInstitute_2F_Text_27077E, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_TryStartUnusualWeather:: @ 827010A
    @ This code uses VAR_0x8004 to count the number of legendaries the player has defeated
    @ already.
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, WeatherInstitute_UnusualWeather_EventScript_IncrementLegendCount
	call_if_set FLAG_DEFEATED_GROUDON, WeatherInstitute_UnusualWeather_EventScript_IncrementLegendCount
	compare VAR_0x8004, 2
	goto_if_eq WeatherInstitute_UnusualWeather_EventScript_ShowLegendariesAlreadyDefeated
	call_if_unset FLAG_TEMP_2, WeatherInstitute_UnusualWeather_EventScript_DoCreateUnusualWeather
	specialvar VAR_RESULT, GetUnusualWeatherMapNameAndType
	compare VAR_RESULT, 1
	goto_if_eq WeatherInstitute_UnusualWeather_EventScript_ShowKyogreWeatherMessage
	msgbox WeatherInstitute_UnusualWeather_GroudonWeatherText, MSGBOX_DEFAULT
	release
	end

WeatherInstitute_UnusualWeather_EventScript_ShowKyogreWeatherMessage:: @ 827014F
	msgbox WeatherInstitute_UnusualWeather_KyogreWeatherText, MSGBOX_DEFAULT
	release
	end

WeatherInstitute_UnusualWeather_EventScript_DoCreateUnusualWeather:: @ 8270159
	special CreateUnusualWeatherEvent
	setflag FLAG_TEMP_2
	return

WeatherInstitute_UnusualWeather_EventScript_IncrementLegendCount:: @ 8270160
	addvar VAR_0x8004, 1
	return

WeatherInstitute_UnusualWeather_EventScript_ShowLegendariesAlreadyDefeated:: @ 8270166
	msgbox WeatherInstitute_UnusualWeather_EventScript_ShowLegendariesAlreadyDefeatedText, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_Movement_270170: @ 8270170
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route119_WeatherInstitute_2F_Movement_27017C: @ 827017C
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	ride_water_current_up
	walk_in_place_fastest_down
	step_end

Route119_WeatherInstitute_2F_Movement_270184: @ 8270184
	slide_down
	walk_in_place_fastest_left
	step_end

Route119_WeatherInstitute_2F_Movement_270187: @ 8270187
	walk_right
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_EventScript_27018B:: @ 827018B
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_2700F7
	goto Route119_WeatherInstitute_2F_EventScript_27004D
	end

Route119_WeatherInstitute_2F_Text_27019C: @ 827019C
	.i18n 4015

Route119_WeatherInstitute_2F_Text_270208: @ 8270208
	.i18n 4016

Route119_WeatherInstitute_2F_Text_27022B: @ 827022B
	.i18n 4017

Route119_WeatherInstitute_2F_Text_270292: @ 8270292
	.i18n 4018

Route119_WeatherInstitute_2F_Text_2702CE: @ 82702CE
	.i18n 4019

Route119_WeatherInstitute_2F_Text_2702DA: @ 82702DA
	.i18n 4020

Route119_WeatherInstitute_2F_Text_270335: @ 8270335
	.i18n 4021

Route119_WeatherInstitute_2F_Text_27039F: @ 827039F
	.i18n 4022

Route119_WeatherInstitute_2F_Text_2703C0: @ 82703C0
	.i18n 4023

Route119_WeatherInstitute_2F_Text_270409: @ 8270409
	.i18n 4024

Route119_WeatherInstitute_2F_Text_2704BD: @ 82704BD
	.i18n 4025

Route119_WeatherInstitute_2F_Text_2704E4: @ 82704E4
	.i18n 4026

Route119_WeatherInstitute_2F_Text_270568: @ 8270568
	.i18n 4027

Route119_WeatherInstitute_2F_Text_2705DD: @ 82705DD
	.i18n 4028

Route119_WeatherInstitute_2F_Text_270650: @ 8270650
	.i18n 4029

Route119_WeatherInstitute_2F_Text_2706B2: @ 82706B2
	.i18n 4030

Route119_WeatherInstitute_2F_Text_2706E8: @ 82706E8
	.i18n 4031

Route119_WeatherInstitute_2F_Text_2706FE: @ 82706FE
	.i18n 4032

Route119_WeatherInstitute_2F_Text_27077E: @ 827077E
	.i18n 4033

WeatherInstitute_UnusualWeather_GroudonWeatherText: @ 82707F1
	.i18n 4034

WeatherInstitute_UnusualWeather_KyogreWeatherText: @ 8270873
	.i18n 4035

WeatherInstitute_UnusualWeather_EventScript_ShowLegendariesAlreadyDefeatedText: @ 82708FC
	.i18n 4036

