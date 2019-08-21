MtPyre_2F_MapScripts:: @ 82310FB
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtPyre_2F_MapScript2_2A8327
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_2F_MapScript1_2A8331
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_MapScript1_23110B
	.byte 0

MtPyre_2F_MapScript1_23110B: @ 823110B
	setstepcallback 7
	setholewarp MAP_MT_PYRE_1F, 255, 0, 0
	end

MtPyre_2F_EventScript_231116:: @ 8231116
	msgbox MtPyre_2F_Text_2311A3, MSGBOX_NPC
	end

MtPyre_2F_EventScript_23111F:: @ 823111F
	msgbox MtPyre_2F_Text_2311E6, MSGBOX_NPC
	end

MtPyre_2F_EventScript_231128:: @ 8231128
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_231258, MtPyre_2F_Text_2312A2
	msgbox MtPyre_2F_Text_2312CB, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_23113F:: @ 823113F
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_23130F, MtPyre_2F_Text_2313A1, MtPyre_2F_Text_231414
	msgbox MtPyre_2F_Text_2313B1, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_23115A:: @ 823115A
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_231492, MtPyre_2F_Text_231534, MtPyre_2F_Text_231582
	msgbox MtPyre_2F_Text_23154D, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_231175:: @ 8231175
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_231604, MtPyre_2F_Text_231645
	msgbox MtPyre_2F_Text_23165A, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_23118C:: @ 823118C
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_2316C7, MtPyre_2F_Text_2316E1
	msgbox MtPyre_2F_Text_2316FB, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_Text_2311A3: @ 82311A3
	.i18n 3289

MtPyre_2F_Text_2311E6: @ 82311E6
	.i18n 3290

MtPyre_2F_Text_231258: @ 8231258
	.i18n 3291

MtPyre_2F_Text_2312A2: @ 82312A2
	.i18n 3292

MtPyre_2F_Text_2312CB: @ 82312CB
	.i18n 3293

MtPyre_2F_Text_23130F: @ 823130F
	.i18n 3294

MtPyre_2F_Text_2313A1: @ 82313A1
	.i18n 3295

MtPyre_2F_Text_2313B1: @ 82313B1
	.i18n 3296

MtPyre_2F_Text_231414: @ 8231414
	.i18n 3297

MtPyre_2F_Text_231492: @ 8231492
	.i18n 3298

MtPyre_2F_Text_231534: @ 8231534
	.i18n 3299

MtPyre_2F_Text_23154D: @ 823154D
	.i18n 3300

MtPyre_2F_Text_231582: @ 8231582
	.i18n 3301

MtPyre_2F_Text_231604: @ 8231604
	.i18n 3302

MtPyre_2F_Text_231645: @ 8231645
	.i18n 3303

MtPyre_2F_Text_23165A: @ 823165A
	.i18n 3304

MtPyre_2F_Text_2316C7: @ 82316C7
	.i18n 3305

MtPyre_2F_Text_2316E1: @ 82316E1
	.i18n 3306

MtPyre_2F_Text_2316FB: @ 82316FB
	.i18n 3307

