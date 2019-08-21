Route119_WeatherInstitute_1F_MapScripts:: @ 826FA86
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
	.byte 0

Route119_WeatherInstitute_1F_OnTransition: @ 826FA8C
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	call_if_eq Route119_WeatherInstitute_1F_EventScript_26FA98
	end

Route119_WeatherInstitute_1F_EventScript_26FA98:: @ 826FA98
	setobjectxyperm 5, 0, 5
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_1F_EventScript_26FAA4:: @ 826FAA4
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_26FABE
	msgbox Route119_WeatherInstitute_1F_Text_26FCE5, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_26FABE:: @ 826FABE
	msgbox Route119_WeatherInstitute_1F_Text_26FCB7, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_26FAC8:: @ 826FAC8
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_26FB05
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_26FAFF
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_26FAFF
	compare VAR_0x8004, 2
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_26FB05
	msgbox Route119_WeatherInstitute_1F_Text_26FDE8, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_26FAFF:: @ 826FAFF
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_1F_EventScript_26FB05:: @ 826FB05
	msgbox Route119_WeatherInstitute_1F_Text_26FD2E, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_26FB0F:: @ 826FB0F
	msgbox Route119_WeatherInstitute_1F_Text_26FE94, MSGBOX_NPC
	end

Route119_WeatherInstitute_1F_EventScript_26FB18:: @ 826FB18
	lockall
	msgbox Route119_WeatherInstitute_1F_Text_26FEFC, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

Route119_WeatherInstitute_1F_EventScript_26FB29:: @ 826FB29
	trainerbattle_single TRAINER_GRUNT_11, Route119_WeatherInstitute_1F_Text_26FB57, Route119_WeatherInstitute_1F_Text_26FBBB
	msgbox Route119_WeatherInstitute_1F_Text_26FBD7, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_26FB40:: @ 826FB40
	trainerbattle_single TRAINER_GRUNT_20, Route119_WeatherInstitute_1F_Text_26FC34, Route119_WeatherInstitute_1F_Text_26FC52
	msgbox Route119_WeatherInstitute_1F_Text_26FC60, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_Text_26FB57: @ 826FB57
	.i18n 4003

Route119_WeatherInstitute_1F_Text_26FBBB: @ 826FBBB
	.i18n 4004

Route119_WeatherInstitute_1F_Text_26FBD7: @ 826FBD7
	.i18n 4005

Route119_WeatherInstitute_1F_Text_26FC34: @ 826FC34
	.i18n 4006

Route119_WeatherInstitute_1F_Text_26FC52: @ 826FC52
	.i18n 4007

Route119_WeatherInstitute_1F_Text_26FC60: @ 826FC60
	.i18n 4008

Route119_WeatherInstitute_1F_Text_26FCB7: @ 826FCB7
	.i18n 4009

Route119_WeatherInstitute_1F_Text_26FCE5: @ 826FCE5
	.i18n 4010

Route119_WeatherInstitute_1F_Text_26FD2E: @ 826FD2E
	.i18n 4011

Route119_WeatherInstitute_1F_Text_26FDE8: @ 826FDE8
	.i18n 4012

Route119_WeatherInstitute_1F_Text_26FE94: @ 826FE94
	.i18n 4013

Route119_WeatherInstitute_1F_Text_26FEFC: @ 826FEFC
	.i18n 4014

