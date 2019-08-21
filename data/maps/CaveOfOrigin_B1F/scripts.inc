CaveOfOrigin_B1F_MapScripts:: @ 82357A8
	.byte 0

CaveOfOrigin_B1F_EventScript_2357A9:: @ 82357A9
	lock
	faceplayer
	msgbox CaveOfOrigin_B1F_Text_23586E, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceUp
	waitmovement 0
	delay 60
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	delay 30
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	message CaveOfOrigin_B1F_Text_235ACE
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_2357F0

CaveOfOrigin_B1F_EventScript_2357F0:: @ 82357F0
	multichoice 0, 0, 110, 0
	switch VAR_RESULT
	case 0, CaveOfOrigin_B1F_EventScript_23582C
	case 1, CaveOfOrigin_B1F_EventScript_235837
	case 2, CaveOfOrigin_B1F_EventScript_23584D
	case 3, CaveOfOrigin_B1F_EventScript_235842
	goto CaveOfOrigin_B1F_EventScript_235842
	end

CaveOfOrigin_B1F_EventScript_23582C:: @ 823582C
	message CaveOfOrigin_B1F_Text_235B23
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_2357F0

CaveOfOrigin_B1F_EventScript_235837:: @ 8235837
	message CaveOfOrigin_B1F_Text_235BBF
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_2357F0

CaveOfOrigin_B1F_EventScript_235842:: @ 8235842
	message CaveOfOrigin_B1F_Text_235C99
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_2357F0

CaveOfOrigin_B1F_EventScript_23584D:: @ 823584D
	msgbox CaveOfOrigin_B1F_Text_235CEE, MSGBOX_DEFAULT
	closemessage
	playse SE_KAIDAN
	fadescreenspeed 1, 4
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
	removeobject 1
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
	fadescreen 0
	release
	end

CaveOfOrigin_B1F_Text_23586E: @ 823586E
	.i18n 2074

CaveOfOrigin_B1F_Text_235ACE: @ 8235ACE
	.i18n 2075

CaveOfOrigin_B1F_Text_235B23: @ 8235B23
	.i18n 2076

CaveOfOrigin_B1F_Text_235BBF: @ 8235BBF
	.i18n 2077

CaveOfOrigin_B1F_Text_235C99: @ 8235C99
	.i18n 2078

CaveOfOrigin_B1F_Text_235CEE: @ 8235CEE
	.i18n 2079

