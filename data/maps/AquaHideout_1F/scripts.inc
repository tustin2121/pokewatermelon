AquaHideout_1F_MapScripts:: @ 8233493
	.byte 0

AquaHideout_1F_EventScript_233494:: @ 8233494
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_2334BC
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_2334B2
	msgbox AquaHideout_1F_Text_23351D, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_2334B2:: @ 82334B2
	msgbox AquaHideout_1F_Text_2335E3, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_2334BC:: @ 82334BC
	msgbox AquaHideout_1F_Text_23367D, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_2334C6:: @ 82334C6
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_2334EE
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_2334E4
	msgbox AquaHideout_1F_Text_233739, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_2334E4:: @ 82334E4
	msgbox AquaHideout_1F_Text_2337FA, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_2334EE:: @ 82334EE
	msgbox AquaHideout_1F_Text_233884, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_2334F8:: @ 82334F8
	trainerbattle_single TRAINER_GRUNT_1, AquaHideout_1F_Text_23393D, AquaHideout_1F_Text_233964, AquaHideout_1F_EventScript_233513
	msgbox AquaHideout_1F_Text_233977, MSGBOX_AUTOCLOSE
	end

AquaHideout_1F_EventScript_233513:: @ 8233513
	msgbox AquaHideout_1F_Text_233977, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_Text_23351D: @ 823351D
	.i18n 568

AquaHideout_1F_Text_2335E3: @ 82335E3
	.i18n 569

AquaHideout_1F_Text_23367D: @ 823367D
	.i18n 570

AquaHideout_1F_Text_233739: @ 8233739
	.i18n 571

AquaHideout_1F_Text_2337FA: @ 82337FA
	.i18n 572

AquaHideout_1F_Text_233884: @ 8233884
	.i18n 573

AquaHideout_1F_Text_23393D: @ 823393D
	.i18n 574

AquaHideout_1F_Text_233964: @ 8233964
	.i18n 575

AquaHideout_1F_Text_233977: @ 8233977
	.i18n 576

