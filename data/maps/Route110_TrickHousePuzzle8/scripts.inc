Route110_TrickHousePuzzle8_MapScripts:: @ 826E801
	.byte 0

Route110_TrickHousePuzzle8_EventScript_26E802:: @ 826E802
	lockall
	compare VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle8_EventScript_26E814
	goto Route110_TrickHousePuzzle8_EventScript_26A3DB
	end

Route110_TrickHousePuzzle8_EventScript_26E814:: @ 826E814
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
	goto Route110_TrickHousePuzzle8_EventScript_26A3E5
	end

Route110_TrickHousePuzzle8_EventScript_26E81F:: @ 826E81F
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_26E8CD, Route110_TrickHousePuzzle8_Text_26E8F6
	msgbox Route110_TrickHousePuzzle8_Text_26E918, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_26E836:: @ 826E836
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_26E954, Route110_TrickHousePuzzle8_Text_26E97F
	msgbox Route110_TrickHousePuzzle8_Text_26E99F, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_26E84D:: @ 826E84D
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_26E9D7, Route110_TrickHousePuzzle8_Text_26EA14
	msgbox Route110_TrickHousePuzzle8_Text_26EA3F, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_26E864:: @ 826E864
	.i18n 3840

Route110_TrickHousePuzzle8_Text_26E8CD: @ 826E8CD
	.i18n 3841

Route110_TrickHousePuzzle8_Text_26E8F6: @ 826E8F6
	.i18n 3842

Route110_TrickHousePuzzle8_Text_26E918: @ 826E918
	.i18n 3843

Route110_TrickHousePuzzle8_Text_26E954: @ 826E954
	.i18n 3844

Route110_TrickHousePuzzle8_Text_26E97F: @ 826E97F
	.i18n 3845

Route110_TrickHousePuzzle8_Text_26E99F: @ 826E99F
	.i18n 3846

Route110_TrickHousePuzzle8_Text_26E9D7: @ 826E9D7
	.i18n 3847

Route110_TrickHousePuzzle8_Text_26EA14: @ 826EA14
	.i18n 3848

Route110_TrickHousePuzzle8_Text_26EA3F: @ 826EA3F
	.i18n 3849

