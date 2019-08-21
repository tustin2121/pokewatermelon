Route110_TrickHousePuzzle6_MapScripts:: @ 826DDA7
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_MapScript2_26DDB6
	.byte 0

Route110_TrickHousePuzzle6_OnTransition: @ 826DDB2
	special RotatingGate_InitPuzzle
	end

Route110_TrickHousePuzzle6_MapScript2_26DDB6: @ 826DDB6
	map_script_2 VAR_TEMP_0, 16384, Route110_TrickHousePuzzle6_EventScript_26DDC0
	.2byte 0

Route110_TrickHousePuzzle6_EventScript_26DDC0:: @ 826DDC0
	special RotatingGate_InitPuzzleAndGraphics
	end

Route110_TrickHousePuzzle6_EventScript_26DDC4:: @ 826DDC4
	lockall
	compare VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle6_EventScript_26DDD6
	goto Route110_TrickHousePuzzle6_EventScript_26A3DB
	end

Route110_TrickHousePuzzle6_EventScript_26DDD6:: @ 826DDD6
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
	goto Route110_TrickHousePuzzle6_EventScript_26A3E5
	end

Route110_TrickHousePuzzle6_EventScript_26DDE1:: @ 826DDE1
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_26DE93, Route110_TrickHousePuzzle6_Text_26DED2
	msgbox Route110_TrickHousePuzzle6_Text_26DEF3, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_26DDF8:: @ 826DDF8
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_26DF55, Route110_TrickHousePuzzle6_Text_26DF8D
	msgbox Route110_TrickHousePuzzle6_Text_26DFA0, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_26DE0F:: @ 826DE0F
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_26DFD7, Route110_TrickHousePuzzle6_Text_26E004
	msgbox Route110_TrickHousePuzzle6_Text_26E048, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_Text_26DE26: @ 826DE26
	.i18n 3811

Route110_TrickHousePuzzle6_Text_26DE93: @ 826DE93
	.i18n 3812

Route110_TrickHousePuzzle6_Text_26DED2: @ 826DED2
	.i18n 3813

Route110_TrickHousePuzzle6_Text_26DEF3: @ 826DEF3
	.i18n 3814

Route110_TrickHousePuzzle6_Text_26DF55: @ 826DF55
	.i18n 3815

Route110_TrickHousePuzzle6_Text_26DF8D: @ 826DF8D
	.i18n 3816

Route110_TrickHousePuzzle6_Text_26DFA0: @ 826DFA0
	.i18n 3817

Route110_TrickHousePuzzle6_Text_26DFD7: @ 826DFD7
	.i18n 3818

Route110_TrickHousePuzzle6_Text_26E004: @ 826E004
	.i18n 3819

Route110_TrickHousePuzzle6_Text_26E048: @ 826E048
	.i18n 3820

