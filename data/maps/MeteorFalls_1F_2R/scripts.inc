MeteorFalls_1F_2R_MapScripts:: @ 822C4DD
	.byte 0

MeteorFalls_1F_2R_EventScript_22C4DE:: @ 822C4DE
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_22C608, MeteorFalls_1F_2R_Text_22C678, MeteorFalls_1F_2R_EventScript_22C50A
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_1F_2R_EventScript_22C529
	msgbox MeteorFalls_1F_2R_Text_22C6A3, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_22C50A:: @ 822C50A
	special sub_80B4808
	waitmovement 0
	msgbox MeteorFalls_1F_2R_Text_22C6F6, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLAS_1
	release
	end

MeteorFalls_1F_2R_EventScript_22C529:: @ 822C529
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_22C73F, MeteorFalls_1F_2R_Text_22C7AD
	msgbox MeteorFalls_1F_2R_Text_22C7D8, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_22C540:: @ 822C540
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_22C843, MeteorFalls_1F_2R_Text_22C89C, MeteorFalls_1F_2R_Text_22C92B, MeteorFalls_1F_2R_EventScript_22C570
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_1F_2R_EventScript_22C589
	msgbox MeteorFalls_1F_2R_Text_22C8C1, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_22C570:: @ 822C570
	msgbox MeteorFalls_1F_2R_Text_22C99C, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_22C589:: @ 822C589
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_22CB47, MeteorFalls_1F_2R_Text_22CBA0, MeteorFalls_1F_2R_Text_22CC27
	msgbox MeteorFalls_1F_2R_Text_22CBC5, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_22C5A4:: @ 822C5A4
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_22C9E6, MeteorFalls_1F_2R_Text_22CA44, MeteorFalls_1F_2R_Text_22CACD, MeteorFalls_1F_2R_EventScript_22C5D4
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_1F_2R_EventScript_22C5ED
	msgbox MeteorFalls_1F_2R_Text_22CA70, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_22C5D4:: @ 822C5D4
	msgbox MeteorFalls_1F_2R_Text_22C99C, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_22C5ED:: @ 822C5ED
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_22CC98, MeteorFalls_1F_2R_Text_22CD08, MeteorFalls_1F_2R_Text_22CDAB
	msgbox MeteorFalls_1F_2R_Text_22CD34, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_Text_22C608: @ 822C608
	.i18n 3022

MeteorFalls_1F_2R_Text_22C678: @ 822C678
	.i18n 3023

MeteorFalls_1F_2R_Text_22C6A3: @ 822C6A3
	.i18n 3024

MeteorFalls_1F_2R_Text_22C6F6: @ 822C6F6
	.i18n 3025

MeteorFalls_1F_2R_Text_22C73F: @ 822C73F
	.i18n 3026

MeteorFalls_1F_2R_Text_22C7AD: @ 822C7AD
	.i18n 3027

MeteorFalls_1F_2R_Text_22C7D8: @ 822C7D8
	.i18n 3028

MeteorFalls_1F_2R_Text_22C843: @ 822C843
	.i18n 3029

MeteorFalls_1F_2R_Text_22C89C: @ 822C89C
	.i18n 3030

MeteorFalls_1F_2R_Text_22C8C1: @ 822C8C1
	.i18n 3031

MeteorFalls_1F_2R_Text_22C92B: @ 822C92B
	.i18n 3032

MeteorFalls_1F_2R_Text_22C99C: @ 822C99C
	.i18n 3033

MeteorFalls_1F_2R_Text_22C9E6: @ 822C9E6
	.i18n 3034

MeteorFalls_1F_2R_Text_22CA44: @ 822CA44
	.i18n 3035

MeteorFalls_1F_2R_Text_22CA70: @ 822CA70
	.i18n 3036

MeteorFalls_1F_2R_Text_22CACD: @ 822CACD
	.i18n 3037

MeteorFalls_1F_2R_Text_22CB47: @ 822CB47
	.i18n 3038

MeteorFalls_1F_2R_Text_22CBA0: @ 822CBA0
	.i18n 3039

MeteorFalls_1F_2R_Text_22CBC5: @ 822CBC5
	.i18n 3040

MeteorFalls_1F_2R_Text_22CC27: @ 822CC27
	.i18n 3041

MeteorFalls_1F_2R_Text_22CC98: @ 822CC98
	.i18n 3042

MeteorFalls_1F_2R_Text_22CD08: @ 822CD08
	.i18n 3043

MeteorFalls_1F_2R_Text_22CD34: @ 822CD34
	.i18n 3044

MeteorFalls_1F_2R_Text_22CDAB: @ 822CDAB
	.i18n 3045

