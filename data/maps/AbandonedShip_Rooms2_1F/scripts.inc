AbandonedShip_Rooms2_1F_MapScripts:: @ 82380A6
	.byte 0

AbandonedShip_Rooms2_1F_EventScript_2380A7:: @ 82380A7
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_23819D, AbandonedShip_Rooms2_1F_Text_2381DA, AbandonedShip_Rooms2_1F_Text_238257, AbandonedShip_Rooms2_1F_EventScript_2380D7
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_2380F0
	msgbox AbandonedShip_Rooms2_1F_Text_23820F, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_2380D7:: @ 82380D7
	msgbox AbandonedShip_Rooms2_1F_Text_2383BB, MSGBOX_DEFAULT
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_2380F0:: @ 82380F0
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_2383FF, AbandonedShip_Rooms2_1F_Text_238473, AbandonedShip_Rooms2_1F_Text_238509
	msgbox AbandonedShip_Rooms2_1F_Text_238491, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_23810B:: @ 823810B
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_2382A4, AbandonedShip_Rooms2_1F_Text_2382F4, AbandonedShip_Rooms2_1F_Text_23836F, AbandonedShip_Rooms2_1F_EventScript_23813B
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_238154
	msgbox AbandonedShip_Rooms2_1F_Text_23830A, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_23813B:: @ 823813B
	msgbox AbandonedShip_Rooms2_1F_Text_2383BB, MSGBOX_DEFAULT
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_238154:: @ 8238154
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_238556, AbandonedShip_Rooms2_1F_Text_2385F2, AbandonedShip_Rooms2_1F_Text_238668
	msgbox AbandonedShip_Rooms2_1F_Text_23860B, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_23816F:: @ 823816F
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_2386B4, AbandonedShip_Rooms2_1F_Text_2386E8
	msgbox AbandonedShip_Rooms2_1F_Text_238708, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_238186:: @ 8238186
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_23873F, AbandonedShip_Rooms2_1F_Text_238779
	msgbox AbandonedShip_Rooms2_1F_Text_2387A9, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_Text_23819D: @ 823819D
	.i18n 532

AbandonedShip_Rooms2_1F_Text_2381DA: @ 82381DA
	.i18n 533

AbandonedShip_Rooms2_1F_Text_23820F: @ 823820F
	.i18n 534

AbandonedShip_Rooms2_1F_Text_238257: @ 8238257
	.i18n 535

AbandonedShip_Rooms2_1F_Text_2382A4: @ 82382A4
	.i18n 536

AbandonedShip_Rooms2_1F_Text_2382F4: @ 82382F4
	.i18n 537

AbandonedShip_Rooms2_1F_Text_23830A: @ 823830A
	.i18n 538

AbandonedShip_Rooms2_1F_Text_23836F: @ 823836F
	.i18n 539

AbandonedShip_Rooms2_1F_Text_2383BB: @ 82383BB
	.i18n 540

AbandonedShip_Rooms2_1F_Text_2383FF: @ 82383FF
	.i18n 541

AbandonedShip_Rooms2_1F_Text_238473: @ 8238473
	.i18n 542

AbandonedShip_Rooms2_1F_Text_238491: @ 8238491
	.i18n 543

AbandonedShip_Rooms2_1F_Text_238509: @ 8238509
	.i18n 544

AbandonedShip_Rooms2_1F_Text_238556: @ 8238556
	.i18n 545

AbandonedShip_Rooms2_1F_Text_2385F2: @ 82385F2
	.i18n 546

AbandonedShip_Rooms2_1F_Text_23860B: @ 823860B
	.i18n 547

AbandonedShip_Rooms2_1F_Text_238668: @ 8238668
	.i18n 548

AbandonedShip_Rooms2_1F_Text_2386B4: @ 82386B4
	.i18n 549

AbandonedShip_Rooms2_1F_Text_2386E8: @ 82386E8
	.i18n 550

AbandonedShip_Rooms2_1F_Text_238708: @ 8238708
	.i18n 551

AbandonedShip_Rooms2_1F_Text_23873F: @ 823873F
	.i18n 552

AbandonedShip_Rooms2_1F_Text_238779: @ 8238779
	.i18n 553

AbandonedShip_Rooms2_1F_Text_2387A9: @ 82387A9
	.i18n 554
