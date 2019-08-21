FallarborTown_House2_MapScripts:: @ 8201382
	.byte 0

FallarborTown_House2_EventScript_201383:: @ 8201383
	lockall
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, FallarborTown_House2_EventScript_2013A8
	msgbox FallarborTown_House2_Text_20145C, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto FallarborTown_House2_EventScript_2013A8
	end

FallarborTown_House2_EventScript_2013A8:: @ 82013A8
	checkitem ITEM_HEART_SCALE, 1
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_House2_EventScript_201452
	msgbox FallarborTown_House2_Text_201541, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, FallarborTown_House2_EventScript_201452
	goto FallarborTown_House2_EventScript_2013D6
	end

FallarborTown_House2_EventScript_2013D6:: @ 82013D6
	msgbox FallarborTown_House2_Text_2015A5, MSGBOX_DEFAULT
	special sub_81B951C
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq FallarborTown_House2_EventScript_201452
	special sub_81B98DC
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_House2_EventScript_201444
	compare VAR_0x8005, 0
	goto_if_eq FallarborTown_House2_EventScript_201436
	goto FallarborTown_House2_EventScript_20140C
	end

FallarborTown_House2_EventScript_20140C:: @ 820140C
	msgbox FallarborTown_House2_Text_2015C3, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq FallarborTown_House2_EventScript_2013D6
	msgbox FallarborTown_House2_Text_201627, MSGBOX_DEFAULT
	takeitem ITEM_HEART_SCALE, 1
	goto FallarborTown_House2_EventScript_201452
	end

FallarborTown_House2_EventScript_201436:: @ 8201436
	msgbox FallarborTown_House2_Text_2015DE, MSGBOX_DEFAULT
	goto FallarborTown_House2_EventScript_2013D6
	end

FallarborTown_House2_EventScript_201444:: @ 8201444
	msgbox FallarborTown_House2_Text_201697, MSGBOX_DEFAULT
	goto FallarborTown_House2_EventScript_2013D6
	end

FallarborTown_House2_EventScript_201452:: @ 8201452
	msgbox FallarborTown_House2_Text_201653, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_House2_Text_20145C: @ 820145C
	.i18n 2238

FallarborTown_House2_Text_201541: @ 8201541
	.i18n 2239

FallarborTown_House2_Text_2015A5: @ 82015A5
	.i18n 2240

FallarborTown_House2_Text_2015C3: @ 82015C3
	.i18n 2241

FallarborTown_House2_Text_2015DE: @ 82015DE
	.i18n 2242

FallarborTown_House2_Text_201627: @ 8201627
	.i18n 2243

FallarborTown_House2_Text_201653: @ 8201653
	.i18n 2244

FallarborTown_House2_Text_201697: @ 8201697
	.i18n 2245

