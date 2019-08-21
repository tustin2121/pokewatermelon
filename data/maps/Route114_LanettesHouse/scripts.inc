Route114_LanettesHouse_MapScripts:: @ 822B2C8
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
	.byte 0

Route114_LanettesHouse_OnTransition: @ 822B2CE
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	end

Route114_LanettesHouse_EventScript_22B2D2:: @ 822B2D2
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_22B2FF
	setflag FLAG_SYS_PC_LANETTE
	msgbox Route114_LanettesHouse_Text_22B34E, MSGBOX_DEFAULT
	givedecoration_std 99
	compare VAR_RESULT, 0
	goto_if_eq Route114_LanettesHouse_EventScript_272067
	setflag FLAG_RECEIVED_DOLL_LANETTE
	release
	end

Route114_LanettesHouse_EventScript_22B2FF:: @ 822B2FF
	msgbox Route114_LanettesHouse_Text_22B407, MSGBOX_DEFAULT
	release
	end

Route114_LanettesHouse_EventScript_22B309:: @ 822B309
	lockall
	msgbox Route114_LanettesHouse_Text_22B485, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route114_LanettesHouse_EventScript_22B327
	msgbox Route114_LanettesHouse_Text_22B6E4, MSGBOX_DEFAULT
	releaseall
	end

Route114_LanettesHouse_EventScript_22B327:: @ 822B327
	msgbox Route114_LanettesHouse_Text_22B53C, MSGBOX_YESNO
	compare VAR_RESULT, 1
	call_if_eq Route114_LanettesHouse_EventScript_22B33C
	releaseall
	end

Route114_LanettesHouse_EventScript_22B33C:: @ 822B33C
	msgbox Route114_LanettesHouse_Text_22B5EF, MSGBOX_DEFAULT
	return

Route114_LanettesHouse_EventScript_22B345:: @ 822B345
	msgbox Route114_LanettesHouse_Text_22B6FC, MSGBOX_SIGN
	end

Route114_LanettesHouse_Text_22B34E: @ 822B34E
	.i18n 3936

Route114_LanettesHouse_Text_22B407: @ 822B407
	.i18n 3937

Route114_LanettesHouse_Text_22B485: @ 822B485
	.i18n 3938

Route114_LanettesHouse_Text_22B53C: @ 822B53C
	.i18n 3939

Route114_LanettesHouse_Text_22B5EF: @ 822B5EF
	.i18n 3940

Route114_LanettesHouse_Text_22B6E4: @ 822B6E4
	.i18n 3941

Route114_LanettesHouse_Text_22B6FC: @ 822B6FC
	.i18n 3942

