AbandonedShip_Rooms_1F_MapScripts:: @ 8237A92
	.byte 0

AbandonedShip_Rooms_1F_EventScript_237A93:: @ 8237A93
	msgbox AbandonedShip_Rooms_1F_Text_237B15, MSGBOX_NPC
	end

AbandonedShip_Rooms_1F_EventScript_237A9C:: @ 8237A9C
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_237D0C, AbandonedShip_Rooms_1F_Text_237D2A
	msgbox AbandonedShip_Rooms_1F_Text_237D41, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms_1F_EventScript_237AB3:: @ 8237AB3
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_237B76, AbandonedShip_Rooms_1F_Text_237BB8, AbandonedShip_Rooms_1F_EventScript_237ADF
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq AbandonedShip_Rooms_1F_EventScript_237AFE
	msgbox AbandonedShip_Rooms_1F_Text_237BDB, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms_1F_EventScript_237ADF:: @ 8237ADF
	special sub_80B4808
	waitmovement 0
	msgbox AbandonedShip_Rooms_1F_Text_237C2A, MSGBOX_DEFAULT
	register_matchcall TRAINER_THALIA_1
	release
	end

AbandonedShip_Rooms_1F_EventScript_237AFE:: @ 8237AFE
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_237C69, AbandonedShip_Rooms_1F_Text_237CB2
	msgbox AbandonedShip_Rooms_1F_Text_237CC9, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms_1F_Text_237B15: @ 8237B15
	.i18n 556

AbandonedShip_Rooms_1F_Text_237B76: @ 8237B76
	.i18n 557

AbandonedShip_Rooms_1F_Text_237BB8: @ 8237BB8
	.i18n 558

AbandonedShip_Rooms_1F_Text_237BDB: @ 8237BDB
	.i18n 559

AbandonedShip_Rooms_1F_Text_237C2A: @ 8237C2A
	.i18n 560

AbandonedShip_Rooms_1F_Text_237C69: @ 8237C69
	.i18n 561

AbandonedShip_Rooms_1F_Text_237CB2: @ 8237CB2
	.i18n 562

AbandonedShip_Rooms_1F_Text_237CC9: @ 8237CC9
	.i18n 563

AbandonedShip_Rooms_1F_Text_237D0C: @ 8237D0C
	.i18n 564

AbandonedShip_Rooms_1F_Text_237D2A: @ 8237D2A
	.i18n 565

AbandonedShip_Rooms_1F_Text_237D41: @ 8237D41
	.i18n 566

