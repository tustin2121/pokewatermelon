AbandonedShip_Corridors_1F_MapScripts:: @ 82379A4
	.byte 0

AbandonedShip_Corridors_1F_EventScript_2379A5:: @ 82379A5
	msgbox AbandonedShip_Corridors_1F_Text_237A60, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_2379AE:: @ 82379AE
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_2379C5, AbandonedShip_Corridors_1F_Text_237A01
	msgbox AbandonedShip_Corridors_1F_Text_237A1B, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_2379C5: @ 82379C5
	.i18n 515

AbandonedShip_Corridors_1F_Text_237A01: @ 8237A01
	.i18n 516

AbandonedShip_Corridors_1F_Text_237A1B: @ 8237A1B
	.i18n 517

AbandonedShip_Corridors_1F_Text_237A60: @ 8237A60
	.i18n 518
