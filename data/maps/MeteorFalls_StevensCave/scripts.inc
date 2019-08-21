MeteorFalls_StevensCave_MapScripts:: @ 823B181
	.byte 0

MeteorFalls_StevensCave_EventScript_23B182:: @ 823B182
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_23B1CD
	waitse
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_23B1E1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_23B32D
	msgbox MeteorFalls_StevensCave_Text_23B358, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_23B1CD:: @ 823B1CD
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_23B358, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_23B1E1: @ 823B1E1
	.i18n 3046

MeteorFalls_StevensCave_Text_23B32D: @ 823B32D
	.i18n 3047

MeteorFalls_StevensCave_Text_23B358: @ 823B358
	.i18n 3048

