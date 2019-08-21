DewfordTown_Hall_MapScripts:: @ 81FD4CF
	.byte 0

DewfordTown_Hall_EventScript_1FD4D0:: @ 81FD4D0
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	special TrendyPhraseIsOld
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_Hall_EventScript_1FD4EF
	msgbox DewfordTown_Hall_Text_1FD818, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_1FD4EF:: @ 81FD4EF
	msgbox DewfordTown_Hall_Text_1FD877, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_1FD4F9:: @ 81FD4F9
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FD8ED, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_1FD50A:: @ 81FD50A
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	special sub_811EF6C
	msgbox DewfordTown_Hall_Text_1FD948, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_Hall_EventScript_1FD533
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_Hall_EventScript_1FD53D
	end

DewfordTown_Hall_EventScript_1FD533:: @ 81FD533
	msgbox DewfordTown_Hall_Text_1FD9B3, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_1FD53D:: @ 81FD53D
	msgbox DewfordTown_Hall_Text_1FDA06, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_1FD547:: @ 81FD547
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDA5C, MSGBOX_DEFAULT
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_1FD563:: @ 81FD563
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDA99, MSGBOX_DEFAULT
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_1FD57F:: @ 81FD57F
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDAC4, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_1FD590:: @ 81FD590
	lockall
	call DewfordTown_Hall_EventScript_271E8B
	msgbox DewfordTown_Hall_Text_1FDB89, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD5A0:: @ 81FD5A0
	lockall
	call DewfordTown_Hall_EventScript_271E8B
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_1FD607
	case 4, DewfordTown_Hall_EventScript_1FD607
	case 1, DewfordTown_Hall_EventScript_1FD611
	case 5, DewfordTown_Hall_EventScript_1FD607
	case 2, DewfordTown_Hall_EventScript_1FD61B
	case 6, DewfordTown_Hall_EventScript_1FD61B
	case 3, DewfordTown_Hall_EventScript_1FD625
	case 7, DewfordTown_Hall_EventScript_1FD61B
	end

DewfordTown_Hall_EventScript_1FD607:: @ 81FD607
	msgbox DewfordTown_Hall_Text_1FDC05, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD611:: @ 81FD611
	msgbox DewfordTown_Hall_Text_1FDC21, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD61B:: @ 81FD61B
	msgbox DewfordTown_Hall_Text_1FDC3C, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD625:: @ 81FD625
	msgbox DewfordTown_Hall_Text_1FDC57, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD62F:: @ 81FD62F
	lockall
	setvar VAR_0x8008, 0
	goto DewfordTown_Hall_EventScript_1FD647
	end

DewfordTown_Hall_EventScript_1FD63B:: @ 81FD63B
	lockall
	setvar VAR_0x8008, 1
	goto DewfordTown_Hall_EventScript_1FD647
	end

DewfordTown_Hall_EventScript_1FD647:: @ 81FD647
	call DewfordTown_Hall_EventScript_271E8B
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_1FD6AD
	case 1, DewfordTown_Hall_EventScript_1FD6AD
	case 2, DewfordTown_Hall_EventScript_1FD6C9
	case 3, DewfordTown_Hall_EventScript_1FD6C9
	case 4, DewfordTown_Hall_EventScript_1FD6E5
	case 5, DewfordTown_Hall_EventScript_1FD6E5
	case 6, DewfordTown_Hall_EventScript_1FD701
	case 7, DewfordTown_Hall_EventScript_1FD71D
	end

DewfordTown_Hall_EventScript_1FD6AD:: @ 81FD6AD
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDC76, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDCE2, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD6C9:: @ 81FD6C9
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDD95, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDE0E, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD6E5:: @ 81FD6E5
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDE77, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDED8, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD701:: @ 81FD701
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FDF72, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FDFF1, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD71D:: @ 81FD71D
	call DewfordTown_Hall_EventScript_1FD73A
	msgbox DewfordTown_Hall_Text_1FE09A, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_1FD772
	msgbox DewfordTown_Hall_Text_1FE0F2, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_1FD739:: @ 81FD739
	return

DewfordTown_Hall_EventScript_1FD73A:: @ 81FD73A
	applymovement 8, DewfordTown_Hall_Movement_1FD7D6
	waitmovement 0
	compare VAR_0x8008, 0
	goto_if_eq DewfordTown_Hall_EventScript_1FD75B
	compare VAR_0x8008, 1
	goto_if_eq DewfordTown_Hall_EventScript_1FD771
	end

DewfordTown_Hall_EventScript_1FD75B:: @ 81FD75B
	compare VAR_FACING, 4
	goto_if_eq DewfordTown_Hall_EventScript_1FD739
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

DewfordTown_Hall_EventScript_1FD771:: @ 81FD771
	return

DewfordTown_Hall_EventScript_1FD772:: @ 81FD772
	applymovement 7, DewfordTown_Hall_Movement_1FD7D8
	waitmovement 0
	compare VAR_0x8008, 0
	goto_if_eq DewfordTown_Hall_EventScript_1FD793
	compare VAR_0x8008, 1
	goto_if_eq DewfordTown_Hall_EventScript_1FD7C0
	end

DewfordTown_Hall_EventScript_1FD793:: @ 81FD793
	compare VAR_FACING, 2
	call_if_eq DewfordTown_Hall_EventScript_1FD7AA
	compare VAR_FACING, 1
	call_if_eq DewfordTown_Hall_EventScript_1FD7B5
	return

DewfordTown_Hall_EventScript_1FD7AA:: @ 81FD7AA
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

DewfordTown_Hall_EventScript_1FD7B5:: @ 81FD7B5
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

DewfordTown_Hall_EventScript_1FD7C0:: @ 81FD7C0
	compare VAR_FACING, 3
	goto_if_eq DewfordTown_Hall_EventScript_1FD739
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	return

DewfordTown_Hall_Movement_1FD7D6: @ 81FD7D6
	walk_in_place_left
	step_end

DewfordTown_Hall_Movement_1FD7D8: @ 81FD7D8
	walk_in_place_right
	step_end

DewfordTown_Hall_EventScript_1FD7DA:: @ 81FD7DA
	lock
	faceplayer
	call DewfordTown_Hall_EventScript_271E8B
	goto_if_set FLAG_RECEIVED_TM36, DewfordTown_Hall_EventScript_1FD80E
	msgbox DewfordTown_Hall_Text_1FE142, MSGBOX_DEFAULT
	giveitem_std ITEM_TM36
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM36
	release
	end

DewfordTown_Hall_EventScript_1FD80E:: @ 81FD80E
	msgbox DewfordTown_Hall_Text_1FE1ED, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_Text_1FD818: @ 81FD818
	.i18n 2141

DewfordTown_Hall_Text_1FD877: @ 81FD877
	.i18n 2142

DewfordTown_Hall_Text_1FD8ED: @ 81FD8ED
	.i18n 2143

DewfordTown_Hall_Text_1FD948: @ 81FD948
	.i18n 2144

DewfordTown_Hall_Text_1FD9B3: @ 81FD9B3
	.i18n 2145

DewfordTown_Hall_Text_1FDA06: @ 81FDA06
	.i18n 2146

DewfordTown_Hall_Text_1FDA5C: @ 81FDA5C
	.i18n 2147

DewfordTown_Hall_Text_1FDA99: @ 81FDA99
	.i18n 2148

DewfordTown_Hall_Text_1FDAC4: @ 81FDAC4
	.i18n 2149

DewfordTown_Hall_Text_1FDB89: @ 81FDB89
	.i18n 2150

DewfordTown_Hall_Text_1FDC05: @ 81FDC05
	.i18n 2151

DewfordTown_Hall_Text_1FDC21: @ 81FDC21
	.i18n 2152

DewfordTown_Hall_Text_1FDC3C: @ 81FDC3C
	.i18n 2153

DewfordTown_Hall_Text_1FDC57: @ 81FDC57
	.i18n 2154

DewfordTown_Hall_Text_1FDC76: @ 81FDC76
	.i18n 2155

DewfordTown_Hall_Text_1FDCE2: @ 81FDCE2
	.i18n 2156

DewfordTown_Hall_Text_1FDD95: @ 81FDD95
	.i18n 2157

DewfordTown_Hall_Text_1FDE0E: @ 81FDE0E
	.i18n 2158

DewfordTown_Hall_Text_1FDE77: @ 81FDE77
	.i18n 2159

DewfordTown_Hall_Text_1FDED8: @ 81FDED8
	.i18n 2160

DewfordTown_Hall_Text_1FDF72: @ 81FDF72
	.i18n 2161

DewfordTown_Hall_Text_1FDFF1: @ 81FDFF1
	.i18n 2162

DewfordTown_Hall_Text_1FE09A: @ 81FE09A
	.i18n 2163

DewfordTown_Hall_Text_1FE0F2: @ 81FE0F2
	.i18n 2164

DewfordTown_Hall_Text_1FE142: @ 81FE142
	.i18n 2165

DewfordTown_Hall_Text_1FE1ED: @ 81FE1ED
	.i18n 2166

