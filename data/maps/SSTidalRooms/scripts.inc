SSTidalRooms_MapScripts:: @ 823C9F1
	.byte 0

SSTidalRooms_EventScript_23C9F2:: @ 823C9F2
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM49, SSTidalRooms_EventScript_23CA29
	msgbox SSTidalRooms_Text_23D098, MSGBOX_DEFAULT
	giveitem_std ITEM_TM49
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM49
	msgbox SSTidalRooms_Text_23D145, MSGBOX_DEFAULT
	release
	end

SSTidalRooms_EventScript_23CA29:: @ 823CA29
	msgbox SSTidalRooms_Text_23D145, MSGBOX_DEFAULT
	release
	end

SSTidalRooms_EventScript_23CA33:: @ 823CA33
	lockall
	msgbox SSTidalRooms_Text_23CAF2, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	call SSTidalRooms_EventScript_23C0A7
	releaseall
	end

SSTidalRooms_EventScript_23CA49:: @ 823CA49
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_23CB14, SSTidalRooms_Text_23CB58
	msgbox SSTidalRooms_Text_23CB75, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_23CA60:: @ 823CA60
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_23CBEB, SSTidalRooms_Text_23CC04
	msgbox SSTidalRooms_Text_23CC26, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_23CA77:: @ 823CA77
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_23CC68, SSTidalRooms_Text_23CC8A
	msgbox SSTidalRooms_Text_23CCBB, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_23CA8E:: @ 823CA8E
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_23CD04, SSTidalRooms_Text_23CD54, SSTidalRooms_Text_23CDC6
	msgbox SSTidalRooms_Text_23CD5F, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_23CAA9:: @ 823CAA9
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_23CE04, SSTidalRooms_Text_23CE4B, SSTidalRooms_Text_23CEB0
	msgbox SSTidalRooms_Text_23CE59, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_23CAC4:: @ 823CAC4
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_23CEEE, SSTidalRooms_Text_23CF36
	msgbox SSTidalRooms_Text_23CF45, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_23CADB:: @ 823CADB
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_23CF97, SSTidalRooms_Text_23CFF4
	msgbox SSTidalRooms_Text_23D013, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_Text_23CAF2: @ 823CAF2
	.i18n 4294

SSTidalRooms_Text_23CB14: @ 823CB14
	.i18n 4295

SSTidalRooms_Text_23CB58: @ 823CB58
	.i18n 4296

SSTidalRooms_Text_23CB75: @ 823CB75
	.i18n 4297

SSTidalRooms_Text_23CBEB: @ 823CBEB
	.i18n 4298

SSTidalRooms_Text_23CC04: @ 823CC04
	.i18n 4299

SSTidalRooms_Text_23CC26: @ 823CC26
	.i18n 4300

SSTidalRooms_Text_23CC68: @ 823CC68
	.i18n 4301

SSTidalRooms_Text_23CC8A: @ 823CC8A
	.i18n 4302

SSTidalRooms_Text_23CCBB: @ 823CCBB
	.i18n 4303

SSTidalRooms_Text_23CD04: @ 823CD04
	.i18n 4304

SSTidalRooms_Text_23CD54: @ 823CD54
	.i18n 4305

SSTidalRooms_Text_23CD5F: @ 823CD5F
	.i18n 4306

SSTidalRooms_Text_23CDC6: @ 823CDC6
	.i18n 4307

SSTidalRooms_Text_23CE04: @ 823CE04
	.i18n 4308

SSTidalRooms_Text_23CE4B: @ 823CE4B
	.i18n 4309

SSTidalRooms_Text_23CE59: @ 823CE59
	.i18n 4310

SSTidalRooms_Text_23CEB0: @ 823CEB0
	.i18n 4311

SSTidalRooms_Text_23CEEE: @ 823CEEE
	.i18n 4312

SSTidalRooms_Text_23CF36: @ 823CF36
	.i18n 4313

SSTidalRooms_Text_23CF45: @ 823CF45
	.i18n 4314

SSTidalRooms_Text_23CF97: @ 823CF97
	.i18n 4315

SSTidalRooms_Text_23CFF4: @ 823CFF4
	.i18n 4316

SSTidalRooms_Text_23D013: @ 823D013
	.i18n 4317

SSTidalRooms_Text_23D098: @ 823D098
	.i18n 4318

SSTidalRooms_Text_23D145: @ 823D145
	.i18n 4319

