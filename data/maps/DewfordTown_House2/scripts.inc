DewfordTown_House2_MapScripts:: @ 81FE22D
	.byte 0

DewfordTown_House2_EventScript_1FE22E:: @ 81FE22E
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_1FE267
	msgbox DewfordTown_House2_Text_1FE27A, MSGBOX_DEFAULT
	giveitem_std ITEM_SILK_SCARF
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_House2_EventScript_1FE25D
	setflag FLAG_RECEIVED_SILK_SCARF
	release
	end

DewfordTown_House2_EventScript_1FE25D:: @ 81FE25D
	msgbox DewfordTown_House2_Text_1FE356, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_1FE267:: @ 81FE267
	msgbox DewfordTown_House2_Text_1FE3D1, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_1FE271:: @ 81FE271
	msgbox DewfordTown_House2_Text_1FE444, MSGBOX_NPC
	end

DewfordTown_House2_Text_1FE27A: @ 81FE27A
	.i18n 2170

DewfordTown_House2_Text_1FE356: @ 81FE356
	.i18n 2171

DewfordTown_House2_Text_1FE3D1: @ 81FE3D1
	.i18n 2172

DewfordTown_House2_Text_1FE444: @ 81FE444
	.i18n 2173

