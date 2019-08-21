BattleFrontier_OutsideWest_MapScripts:: @ 823D3E1
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_MapScript1_23D3E7
	.byte 0

BattleFrontier_OutsideWest_MapScript1_23D3E7: @ 823D3E7
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	end

BattleFrontier_OutsideWest_EventScript_23D3F0:: @ 823D3F0
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_23D808, MSGBOX_DEFAULT
	checkitem ITEM_SS_TICKET, 1
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_23D44E
	message BattleFrontier_OutsideWest_Text_23D89D
	waitmessage
	goto BattleFrontier_OutsideWest_EventScript_23D416
	end

BattleFrontier_OutsideWest_EventScript_23D416:: @ 823D416
	multichoicedefault 18, 6, 53, 2, 0
	switch VAR_RESULT
	case 0, BattleFrontier_OutsideWest_EventScript_23D458
	case 1, BattleFrontier_OutsideWest_EventScript_23D483
	case 2, BattleFrontier_OutsideWest_EventScript_23D4D8
	case 127, BattleFrontier_OutsideWest_EventScript_23D4D8
	end

BattleFrontier_OutsideWest_EventScript_23D44E:: @ 823D44E
	msgbox BattleFrontier_OutsideWest_Text_23D842, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D458:: @ 823D458
	msgbox BattleFrontier_OutsideWest_Text_23D8F2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_23D4AE
	msgbox BattleFrontier_OutsideWest_Text_23D94B, MSGBOX_DEFAULT
	call BattleFrontier_OutsideWest_EventScript_23D4BA
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_23D483:: @ 823D483
	msgbox BattleFrontier_OutsideWest_Text_23D90E, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_OutsideWest_EventScript_23D4AE
	msgbox BattleFrontier_OutsideWest_Text_23D94B, MSGBOX_DEFAULT
	call BattleFrontier_OutsideWest_EventScript_23D4BA
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_23D4AE:: @ 823D4AE
	message BattleFrontier_OutsideWest_Text_23D97A
	waitmessage
	goto BattleFrontier_OutsideWest_EventScript_23D416
	end

BattleFrontier_OutsideWest_EventScript_23D4BA:: @ 823D4BA
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 30
	hideobjectat 3, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	setvar VAR_0x8004, 2
	call BattleFrontier_OutsideWest_EventScript_272250
	return

BattleFrontier_OutsideWest_EventScript_23D4D8:: @ 823D4D8
	msgbox BattleFrontier_OutsideWest_Text_23D929, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D4E2:: @ 823D4E2
	msgbox BattleFrontier_OutsideWest_Text_23D6F7, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_23D4EB:: @ 823D4EB
	msgbox BattleFrontier_OutsideWest_Text_23D737, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_23D4F4:: @ 823D4F4
	msgbox BattleFrontier_OutsideWest_Text_23D772, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_23D4FD:: @ 823D4FD
	msgbox BattleFrontier_OutsideWest_Text_23D7A6, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D506:: @ 823D4FD
	msgbox BattleFrontier_OutsideWest_Text_23D9DD, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D50F:: @ 823D50F
	msgbox BattleFrontier_OutsideWest_Text_23D99C, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D518:: @ 823D518
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_23DA60
	waitmessage
	applymovement 18, Common_Movement_FaceAwayPlayer
	waitmovement 0
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_23D52D:: @ 823D52D
	msgbox BattleFrontier_OutsideWest_Text_23DABF, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D536:: @ 823D536
	lock
	goto BattleFrontier_OutsideWest_EventScript_23D544
	end

BattleFrontier_OutsideWest_EventScript_23D53D:: @ 823D53D
	lock
	goto BattleFrontier_OutsideWest_EventScript_23D544
	end

BattleFrontier_OutsideWest_EventScript_23D544:: @ 823D544
	applymovement 9, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_23DB7D, MSGBOX_DEFAULT
	applymovement 10, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_23DBCE, MSGBOX_DEFAULT
	closemessage
	delay 25
	applymovement 9, Common_Movement_WalkInPlaceUp
	applymovement 10, Common_Movement_WalkInPlaceUp
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_23D57F:: @ 823D57F
	lock
	faceplayer
	delay 20
	compare VAR_FACING, 2
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D5BA
	compare VAR_FACING, 1
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D5C5
	compare VAR_FACING, 3
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D5BA
	compare VAR_FACING, 4
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D5BA
	msgbox BattleFrontier_OutsideWest_Text_23DC36, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D5BA:: @ 823D5BA
	applymovement 14, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_23D5C5:: @ 823D5C5
	return

BattleFrontier_OutsideWest_EventScript_23D5C6:: @ 823D5C6
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_23DCB0
	waitmessage
	compare VAR_FACING, 2
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D5FD
	compare VAR_FACING, 1
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D608
	compare VAR_FACING, 3
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D613
	compare VAR_FACING, 4
	call_if_eq BattleFrontier_OutsideWest_EventScript_23D61E
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_23D5FD:: @ 823D5FD
	applymovement 12, BattleFrontier_OutsideWest_Movement_23D629
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_23D608:: @ 823D608
	applymovement 12, BattleFrontier_OutsideWest_Movement_23D62C
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_23D613:: @ 823D613
	applymovement 12, BattleFrontier_OutsideWest_Movement_23D62F
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_23D61E:: @ 823D61E
	applymovement 12, BattleFrontier_OutsideWest_Movement_23D632
	waitmovement 0
	return

BattleFrontier_OutsideWest_Movement_23D629: @ 823D629
	walk_in_place_fastest_down
	walk_in_place_fastest_down
	step_end

BattleFrontier_OutsideWest_Movement_23D62C: @ 823D62C
	walk_in_place_fastest_up
	walk_in_place_fastest_up
	step_end

BattleFrontier_OutsideWest_Movement_23D62F: @ 823D62F
	walk_in_place_fastest_right
	walk_in_place_fastest_right
	step_end

BattleFrontier_OutsideWest_Movement_23D632: @ 823D632
	walk_in_place_fastest_left
	walk_in_place_fastest_left
	step_end

BattleFrontier_OutsideWest_EventScript_23D635:: @ 823D635
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_23DD3B, MSGBOX_DEFAULT
	random 2
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_OutsideWest_EventScript_23D653
	goto BattleFrontier_OutsideWest_EventScript_23D65D
	end

BattleFrontier_OutsideWest_EventScript_23D653:: @ 823D653
	msgbox BattleFrontier_OutsideWest_Text_23DD7A, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D65D:: @ 823D65D
	msgbox BattleFrontier_OutsideWest_Text_23DDAD, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D667:: @ 823D667
	msgbox BattleFrontier_OutsideWest_Text_23DE15, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D670:: @ 823D670
	msgbox BattleFrontier_OutsideWest_Text_23DF7D, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D679:: @ 823D679
	msgbox BattleFrontier_OutsideWest_Text_23DEFD, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D682:: @ 823D682
	msgbox BattleFrontier_OutsideWest_Text_23DEB4, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D68B:: @ 823D68B
	msgbox BattleFrontier_OutsideWest_Text_23DFBF, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D694:: @ 823D694
	msgbox BattleFrontier_OutsideWest_Text_23E01E, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D69D:: @ 823D69D
	msgbox BattleFrontier_OutsideWest_Text_23E09F, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D6A6:: @ 823D6A6
	msgbox BattleFrontier_OutsideWest_Text_23E102, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D6AF:: @ 823D6AF
	msgbox BattleFrontier_OutsideWest_Text_23E154, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D6B8:: @ 823D6B8
	lock
	msgbox BattleFrontier_OutsideWest_Text_23E273, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D6C3:: @ 823D6C3
	lock
	msgbox BattleFrontier_OutsideWest_Text_23E2E9, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_23D6CE:: @ 823D6CE
	msgbox BattleFrontier_OutsideWest_Text_23E37E, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_23D6D7:: @ 823D6D7
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_23E410, MSGBOX_DEFAULT
	closemessage
	applymovement 23, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_23D6EE:: @ 823D6EE
	msgbox BattleFrontier_OutsideWest_Text_23E5A5, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_Text_23D6F7: @ 823D6F7
	.i18n 1977

BattleFrontier_OutsideWest_Text_23D737: @ 823D737
	.i18n 1978

BattleFrontier_OutsideWest_Text_23D772: @ 823D772
	.i18n 1979

BattleFrontier_OutsideWest_Text_23D7A6: @ 823D7A6
	.i18n 1980

BattleFrontier_OutsideWest_Text_23D808: @ 823D808
	.i18n 1981

BattleFrontier_OutsideWest_Text_23D842: @ 823D842
	.i18n 1982

BattleFrontier_OutsideWest_Text_23D89D: @ 823D89D
	.i18n 1983

BattleFrontier_OutsideWest_Text_23D8F2: @ 823D8F2
	.i18n 1984

BattleFrontier_OutsideWest_Text_23D90E: @ 823D90E
	.i18n 1985

BattleFrontier_OutsideWest_Text_23D929: @ 823D929
	.i18n 1986

BattleFrontier_OutsideWest_Text_23D94B: @ 823D94B
	.i18n 1987

BattleFrontier_OutsideWest_Text_23D97A: @ 823D97A
	.i18n 1988

BattleFrontier_OutsideWest_Text_23D99C: @ 823D99C
	.i18n 1989

BattleFrontier_OutsideWest_Text_23D9DD: @ 823D9DD
	.i18n 1990

BattleFrontier_OutsideWest_Text_23DA60: @ 823DA60
	.i18n 1991

BattleFrontier_OutsideWest_Text_23DABF: @ 823DABF
	.i18n 1992

BattleFrontier_OutsideWest_Text_23DB7D: @ 823DB7D
	.i18n 1993

BattleFrontier_OutsideWest_Text_23DBCE: @ 823DBCE
	.i18n 1994

BattleFrontier_OutsideWest_Text_23DC36: @ 823DC36
	.i18n 1995

BattleFrontier_OutsideWest_Text_23DCB0: @ 823DCB0
	.i18n 1996

BattleFrontier_OutsideWest_Text_23DD3B: @ 823DD3B
	.i18n 1997

BattleFrontier_OutsideWest_Text_23DD7A: @ 823DD7A
	.i18n 1998

BattleFrontier_OutsideWest_Text_23DDAD: @ 823DDAD
	.i18n 1999

BattleFrontier_OutsideWest_Text_23DE15: @ 823DE15
	.i18n 2000

BattleFrontier_OutsideWest_Text_23DEB4: @ 823DEB4
	.i18n 2001

BattleFrontier_OutsideWest_Text_23DEFD: @ 823DEFD
	.i18n 2002

BattleFrontier_OutsideWest_Text_23DF7D: @ 823DF7D
	.i18n 2003

BattleFrontier_OutsideWest_Text_23DFBF: @ 823DFBF
	.i18n 2004

BattleFrontier_OutsideWest_Text_23E01E: @ 823E01E
	.i18n 2005

BattleFrontier_OutsideWest_Text_23E09F: @ 823E09F
	.i18n 2006

BattleFrontier_OutsideWest_Text_23E102: @ 823E102
	.i18n 2007

BattleFrontier_OutsideWest_Text_23E154: @ 823E154
	.i18n 2008

BattleFrontier_OutsideWest_Text_23E273: @ 823E273
	.i18n 2009

BattleFrontier_OutsideWest_Text_23E2E9: @ 823E2E9
	.i18n 2010

BattleFrontier_OutsideWest_Text_23E37E: @ 823E37E
	.i18n 2011

BattleFrontier_OutsideWest_Text_23E410: @ 823E410
	.i18n 2012

BattleFrontier_OutsideWest_Text_23E5A5: @ 823E5A5
	.i18n 2013

