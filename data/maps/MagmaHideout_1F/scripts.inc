MagmaHideout_1F_MapScripts:: @ 8239880
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
	.byte 0

MagmaHideout_1F_OnTransition: @ 8239886
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end

MagmaHideout_1F_EventScript_23988C:: @ 823988C
	trainerbattle_single TRAINER_GRUNT_38, MagmaHideout_1F_Text_2398BA, MagmaHideout_1F_Text_239964
	msgbox MagmaHideout_1F_Text_2399B1, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_EventScript_2398A3:: @ 82398A3
	trainerbattle_single TRAINER_GRUNT_39, MagmaHideout_1F_Text_2399F5, MagmaHideout_1F_Text_239ABA
	msgbox MagmaHideout_1F_Text_239ACD, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_Text_2398BA: @ 82398BA
	.i18n 2825

MagmaHideout_1F_Text_239964: @ 8239964
	.i18n 2826

MagmaHideout_1F_Text_2399B1: @ 82399B1
	.i18n 2827

MagmaHideout_1F_Text_2399F5: @ 82399F5
	.i18n 2828

MagmaHideout_1F_Text_239ABA: @ 8239ABA
	.i18n 2829

MagmaHideout_1F_Text_239ACD: @ 8239ACD
	.i18n 2830

