BattleFrontier_Lounge7_MapScripts:: @ 8265254
	.byte 0

BattleFrontier_Lounge7_EventScript_265255:: @ 8265255
	lock
	faceplayer
	setvar VAR_TEMP_C, 9
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_265276
	msgbox BattleFrontier_Lounge7_Text_2656ED, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_265284
	end

BattleFrontier_Lounge7_EventScript_265276:: @ 8265276
	msgbox BattleFrontier_Lounge7_Text_2658AB, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_265284
	end

BattleFrontier_Lounge7_EventScript_265284:: @ 8265284
	message BattleFrontier_Lounge7_Text_2658EF
	waitmessage
	special sub_813A958
	setvar VAR_TEMP_E, 0
	setvar VAR_0x8004, 9
	setvar VAR_0x8006, 0
	special sub_813A128
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_2653D7
	case 1, BattleFrontier_Lounge7_EventScript_2653E2
	case 2, BattleFrontier_Lounge7_EventScript_2653ED
	case 3, BattleFrontier_Lounge7_EventScript_2653F8
	case 4, BattleFrontier_Lounge7_EventScript_265403
	case 5, BattleFrontier_Lounge7_EventScript_26540E
	case 6, BattleFrontier_Lounge7_EventScript_265419
	case 7, BattleFrontier_Lounge7_EventScript_265424
	case 8, BattleFrontier_Lounge7_EventScript_26542F
	case 9, BattleFrontier_Lounge7_EventScript_26543A
	case 10, BattleFrontier_Lounge7_EventScript_265635
	case 127, BattleFrontier_Lounge7_EventScript_265635
	end

BattleFrontier_Lounge7_EventScript_26532F:: @ 826532F
	message BattleFrontier_Lounge7_Text_2658EF
	waitmessage
	setvar VAR_TEMP_E, 0
	setvar VAR_0x8004, 9
	setvar VAR_0x8006, 1
	special sub_813A128
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_2653D7
	case 1, BattleFrontier_Lounge7_EventScript_2653E2
	case 2, BattleFrontier_Lounge7_EventScript_2653ED
	case 3, BattleFrontier_Lounge7_EventScript_2653F8
	case 4, BattleFrontier_Lounge7_EventScript_265403
	case 5, BattleFrontier_Lounge7_EventScript_26540E
	case 6, BattleFrontier_Lounge7_EventScript_265419
	case 7, BattleFrontier_Lounge7_EventScript_265424
	case 8, BattleFrontier_Lounge7_EventScript_26542F
	case 9, BattleFrontier_Lounge7_EventScript_26543A
	case 10, BattleFrontier_Lounge7_EventScript_265635
	case 127, BattleFrontier_Lounge7_EventScript_265635
	end

BattleFrontier_Lounge7_EventScript_2653D7:: @ 82653D7
	setvar VAR_0x8008, 16
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2653E2:: @ 82653E2
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2653ED:: @ 82653ED
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2653F8:: @ 82653F8
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265403:: @ 8265403
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_26540E:: @ 826540E
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265419:: @ 8265419
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265424:: @ 8265424
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_26542F:: @ 826542F
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_26543A:: @ 826543A
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265445:: @ 8265445
	lock
	faceplayer
	setvar VAR_TEMP_C, 10
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_265466
	msgbox BattleFrontier_Lounge7_Text_265A6C, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_265474
	end

BattleFrontier_Lounge7_EventScript_265466:: @ 8265466
	msgbox BattleFrontier_Lounge7_Text_265C2C, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_265474
	end

BattleFrontier_Lounge7_EventScript_265474:: @ 8265474
	message BattleFrontier_Lounge7_Text_2658EF
	waitmessage
	special sub_813A958
	setvar VAR_TEMP_E, 1
	setvar VAR_0x8004, 10
	setvar VAR_0x8006, 0
	special sub_813A128
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_2655C7
	case 1, BattleFrontier_Lounge7_EventScript_2655D2
	case 2, BattleFrontier_Lounge7_EventScript_2655DD
	case 3, BattleFrontier_Lounge7_EventScript_2655E8
	case 4, BattleFrontier_Lounge7_EventScript_2655F3
	case 5, BattleFrontier_Lounge7_EventScript_2655FE
	case 6, BattleFrontier_Lounge7_EventScript_265609
	case 7, BattleFrontier_Lounge7_EventScript_265614
	case 8, BattleFrontier_Lounge7_EventScript_26561F
	case 9, BattleFrontier_Lounge7_EventScript_26562A
	case 10, BattleFrontier_Lounge7_EventScript_265635
	case 127, BattleFrontier_Lounge7_EventScript_265635
	end

BattleFrontier_Lounge7_EventScript_26551F:: @ 826551F
	message BattleFrontier_Lounge7_Text_2658EF
	waitmessage
	setvar VAR_TEMP_E, 1
	setvar VAR_0x8004, 10
	setvar VAR_0x8006, 1
	special sub_813A128
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_2655C7
	case 1, BattleFrontier_Lounge7_EventScript_2655D2
	case 2, BattleFrontier_Lounge7_EventScript_2655DD
	case 3, BattleFrontier_Lounge7_EventScript_2655E8
	case 4, BattleFrontier_Lounge7_EventScript_2655F3
	case 5, BattleFrontier_Lounge7_EventScript_2655FE
	case 6, BattleFrontier_Lounge7_EventScript_265609
	case 7, BattleFrontier_Lounge7_EventScript_265614
	case 8, BattleFrontier_Lounge7_EventScript_26561F
	case 9, BattleFrontier_Lounge7_EventScript_26562A
	case 10, BattleFrontier_Lounge7_EventScript_265635
	case 127, BattleFrontier_Lounge7_EventScript_265635
	end

BattleFrontier_Lounge7_EventScript_2655C7:: @ 82655C7
	setvar VAR_0x8008, 16
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2655D2:: @ 82655D2
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2655DD:: @ 82655DD
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2655E8:: @ 82655E8
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2655F3:: @ 82655F3
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_2655FE:: @ 82655FE
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265609:: @ 8265609
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265614:: @ 8265614
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_26561F:: @ 826561F
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_26562A:: @ 826562A
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_26564F
	end

BattleFrontier_Lounge7_EventScript_265635:: @ 8265635
	special sub_813ADB8
	special sub_813A988
	msgbox BattleFrontier_Lounge7_Text_265A0E, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_265645:: @ 8265645
	msgbox BattleFrontier_Lounge7_Text_265A0E, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_26564F:: @ 826564F
	copyvar VAR_0x8004, VAR_TEMP_D
	copyvar VAR_0x8005, VAR_TEMP_E
	special sub_813AC7C
	buffernumberstring 1, VAR_0x8008
	copyvar VAR_0x8004, VAR_TEMP_C
	msgbox BattleFrontier_Lounge7_Text_265921, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_2656CA
	specialvar VAR_TEMP_1, sub_813AA04
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_ge BattleFrontier_Lounge7_EventScript_265696
	msgbox BattleFrontier_Lounge7_Text_265997, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_2656CA
	end

BattleFrontier_Lounge7_EventScript_265696:: @ 8265696
	msgbox BattleFrontier_Lounge7_Text_26595A, MSGBOX_DEFAULT
	special sub_813AEB4
	fadescreen 1
	special sub_813A988
	special sub_813ADB8
	special sub_81B892C
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_265645
	msgbox BattleFrontier_Lounge7_Text_2659C7, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special sub_813A9A4
	release
	end

BattleFrontier_Lounge7_EventScript_2656CA:: @ 82656CA
	compare VAR_TEMP_E, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_26532F
	goto BattleFrontier_Lounge7_EventScript_26551F
	end

BattleFrontier_Lounge7_EventScript_2656DB:: @ 82656DB
	msgbox BattleFrontier_Lounge7_Text_265C6F, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_2656E4:: @ 82656E4
	msgbox BattleFrontier_Lounge7_Text_265D17, MSGBOX_NPC
	end

BattleFrontier_Lounge7_Text_2656ED: @ 82656ED
	.i18n 1907

BattleFrontier_Lounge7_Text_2658AB: @ 82658AB
	.i18n 1908

BattleFrontier_Lounge7_Text_2658EF: @ 82658EF
	.i18n 1909

BattleFrontier_Lounge7_Text_265921: @ 8265921
	.i18n 1910

BattleFrontier_Lounge7_Text_26595A: @ 826595A
	.i18n 1911

BattleFrontier_Lounge7_Text_265997: @ 8265997
	.i18n 1912

BattleFrontier_Lounge7_Text_2659C7: @ 82659C7
	.i18n 1913

BattleFrontier_Lounge7_Text_265A0E: @ 8265A0E
	.i18n 1914

BattleFrontier_Lounge7_Text_265A6C: @ 8265A6C
	.i18n 1915

BattleFrontier_Lounge7_Text_265C2C: @ 8265C2C
	.i18n 1916

BattleFrontier_Lounge7_Text_265C6F: @ 8265C6F
	.i18n 1917

BattleFrontier_Lounge7_Text_265D17: @ 8265D17
	.i18n 1918

BattleFrontier_Lounge7_Text_265E30:: @ 8265E30
	.i18n 1919

BattleFrontier_Lounge7_Text_265E5B:: @ 8265E5B
	.i18n 1920

BattleFrontier_Lounge7_Text_265E8A:: @ 8265E8A
	.i18n 1921

BattleFrontier_Lounge7_Text_265EC0:: @ 8265EC0
	.i18n 1922

BattleFrontier_Lounge7_Text_265EED:: @ 8265EED
	.i18n 1923

BattleFrontier_Lounge7_Text_265F1C:: @ 8265F1C
	.i18n 1924

BattleFrontier_Lounge7_Text_265F47:: @ 8265F47
	.i18n 1925

BattleFrontier_Lounge7_Text_265F77:: @ 8265F77
	.i18n 1926

BattleFrontier_Lounge7_Text_265FAA:: @ 8265FAA
	.i18n 1927

BattleFrontier_Lounge7_Text_265FDD:: @ 8265FDD
	.i18n 1928

BattleFrontier_Lounge7_Text_26600A:: @ 826600A
	.i18n 1929

BattleFrontier_Lounge7_Text_26603E:: @ 826603E
	.i18n 1930

BattleFrontier_Lounge7_Text_266070:: @ 8266070
	.i18n 1931

BattleFrontier_Lounge7_Text_2660A6:: @ 82660A6
	.i18n 1932

BattleFrontier_Lounge7_Text_2660D0:: @ 82660D0
	.i18n 1933

BattleFrontier_Lounge7_Text_2660FF:: @ 82660FF
	.i18n 1934

BattleFrontier_Lounge7_Text_26612D:: @ 826612D
	.i18n 1935

BattleFrontier_Lounge7_Text_26615F:: @ 826615F
	.i18n 1936

BattleFrontier_Lounge7_Text_266185:: @ 8266185
	.i18n 1937

BattleFrontier_Lounge7_Text_2661B5:: @ 82661B5
	.i18n 1938
