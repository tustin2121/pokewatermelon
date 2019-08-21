Route110_TrickHousePuzzle4_MapScripts:: @ 826C860
	.byte 0

Route110_TrickHousePuzzle4_EventScript_26C861:: @ 826C861
	lockall
	compare VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle4_EventScript_26C873
	goto Route110_TrickHousePuzzle4_EventScript_26A3DB
	end

Route110_TrickHousePuzzle4_EventScript_26C873:: @ 826C873
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
	goto Route110_TrickHousePuzzle4_EventScript_26A3E5
	end

Route110_TrickHousePuzzle4_EventScript_26C87E:: @ 826C87E
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_26C92D, Route110_TrickHousePuzzle4_Text_26C96E
	msgbox Route110_TrickHousePuzzle4_Text_26C9A2, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_26C895:: @ 826C895
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_26C9E4, Route110_TrickHousePuzzle4_Text_26CA20
	msgbox Route110_TrickHousePuzzle4_Text_26CA53, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_26C8AC:: @ 826C8AC
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_26CA9C, Route110_TrickHousePuzzle4_Text_26CACB
	msgbox Route110_TrickHousePuzzle4_Text_26CAD1, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_Text_26C8C3: @ 826C8C3
	.i18n 3776

Route110_TrickHousePuzzle4_Text_26C92D: @ 826C92D
	.i18n 3777

Route110_TrickHousePuzzle4_Text_26C96E: @ 826C96E
	.i18n 3778

Route110_TrickHousePuzzle4_Text_26C9A2: @ 826C9A2
	.i18n 3779

Route110_TrickHousePuzzle4_Text_26C9E4: @ 826C9E4
	.i18n 3780

Route110_TrickHousePuzzle4_Text_26CA20: @ 826CA20
	.i18n 3781

Route110_TrickHousePuzzle4_Text_26CA53: @ 826CA53
	.i18n 3782

Route110_TrickHousePuzzle4_Text_26CA9C: @ 826CA9C
	.i18n 3783

Route110_TrickHousePuzzle4_Text_26CACB: @ 826CACB
	.i18n 3784

Route110_TrickHousePuzzle4_Text_26CAD1: @ 826CAD1
	.i18n 3785

