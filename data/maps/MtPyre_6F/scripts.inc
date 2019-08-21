MtPyre_6F_MapScripts:: @ 8231D3A
	.byte 0

MtPyre_6F_EventScript_231D3B:: @ 8231D3B
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_231DB4, MtPyre_6F_Text_231DE2, MtPyre_6F_EventScript_231D67
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_6F_EventScript_231D86
	msgbox MtPyre_6F_Text_231DFC, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_EventScript_231D67:: @ 8231D67
	special sub_80B4808
	waitmovement 0
	msgbox MtPyre_6F_Text_231E43, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_231D86:: @ 8231D86
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_231EB3, MtPyre_6F_Text_231ECB
	msgbox MtPyre_6F_Text_231EE1, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_231D9D:: @ 8231D9D
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_231F11, MtPyre_6F_Text_231F4A
	msgbox MtPyre_6F_Text_231F5C, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_Text_231DB4: @ 8231DB4
	.i18n 3327

MtPyre_6F_Text_231DE2: @ 8231DE2
	.i18n 3328

MtPyre_6F_Text_231DFC: @ 8231DFC
	.i18n 3329

MtPyre_6F_Text_231E43: @ 8231E43
	.i18n 3330

MtPyre_6F_Text_231EB3: @ 8231EB3
	.i18n 3331

MtPyre_6F_Text_231ECB: @ 8231ECB
	.i18n 3332

MtPyre_6F_Text_231EE1: @ 8231EE1
	.i18n 3333

MtPyre_6F_Text_231F11: @ 8231F11
	.i18n 3334

MtPyre_6F_Text_231F4A: @ 8231F4A
	.i18n 3335

MtPyre_6F_Text_231F5C: @ 8231F5C
	.i18n 3336

