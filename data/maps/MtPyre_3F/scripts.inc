MtPyre_3F_MapScripts:: @ 8231752
	.byte 0

MtPyre_3F_EventScript_231753:: @ 8231753
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_2317E3, MtPyre_3F_Text_231853
	msgbox MtPyre_3F_Text_231869, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_23176A:: @ 823176A
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_2318A1, MtPyre_3F_Text_2318DD
	msgbox MtPyre_3F_Text_2318F2, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_231781:: @ 8231781
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_231952, MtPyre_3F_Text_23196A, MtPyre_3F_EventScript_2317AD
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MtPyre_3F_EventScript_2317CC
	msgbox MtPyre_3F_Text_23199B, MSGBOX_DEFAULT
	release
	end

MtPyre_3F_EventScript_2317AD:: @ 82317AD
	special sub_80B4808
	waitmovement 0
	msgbox MtPyre_3F_Text_231A49, MSGBOX_DEFAULT
	register_matchcall TRAINER_GABRIELLE_1
	release
	end

MtPyre_3F_EventScript_2317CC:: @ 82317CC
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_231AAB, MtPyre_3F_Text_231AE6
	msgbox MtPyre_3F_Text_231B0D, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_2317E3: @ 82317E3
	.i18n 3308

MtPyre_3F_Text_231853: @ 8231853
	.i18n 3309

MtPyre_3F_Text_231869: @ 8231869
	.i18n 3310

MtPyre_3F_Text_2318A1: @ 82318A1
	.i18n 3311

MtPyre_3F_Text_2318DD: @ 82318DD
	.i18n 3312

MtPyre_3F_Text_2318F2: @ 82318F2
	.i18n 3313

MtPyre_3F_Text_231952: @ 8231952
	.i18n 3314

MtPyre_3F_Text_23196A: @ 823196A
	.i18n 3315

MtPyre_3F_Text_23199B: @ 823199B
	.i18n 3316

MtPyre_3F_Text_231A49: @ 8231A49
	.i18n 3317

MtPyre_3F_Text_231AAB: @ 8231AAB
	.i18n 3318

MtPyre_3F_Text_231AE6: @ 8231AE6
	.i18n 3319

MtPyre_3F_Text_231B0D: @ 8231B0D
	.i18n 3320

