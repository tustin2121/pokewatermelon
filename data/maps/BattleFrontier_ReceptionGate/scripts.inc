BattleFrontier_ReceptionGate_MapScripts:: @ 82661DA
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_MapScript2_2661E9
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
	.byte 0

BattleFrontier_ReceptionGate_OnTransition: @ 82661E5
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	end

BattleFrontier_ReceptionGate_MapScript2_2661E9: @ 82661E9
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_2661F3
	.2byte 0

BattleFrontier_ReceptionGate_EventScript_2661F3:: @ 82661F3
	lockall
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_266580, MSGBOX_DEFAULT
	closemessage
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_ReceptionGate_Movement_2662D2
	waitmovement 0
	goto BattleFrontier_ReceptionGate_EventScript_266229
	end

BattleFrontier_ReceptionGate_EventScript_266229:: @ 8266229
	msgbox BattleFrontier_ReceptionGate_Text_2665B2, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_2665F7, MSGBOX_DEFAULT
	playfanfare MUS_FANFA4
	message BattleFrontier_ReceptionGate_Text_266676
	waitfanfare
	waitmessage
	msgbox BattleFrontier_ReceptionGate_Text_266695, MSGBOX_DEFAULT
	setflag FLAG_SYS_FRONTIER_PASS
	msgbox BattleFrontier_ReceptionGate_Text_2666C6, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_266703, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceUp
	applymovement 2, Common_Movement_WalkInPlaceUp
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	applymovement 2, Common_Movement_ExclamationMark
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_266733, MSGBOX_DEFAULT
	closemessage
	applymovement 1, BattleFrontier_ReceptionGate_Movement_2662F0
	applymovement 2, BattleFrontier_ReceptionGate_Movement_2662F6
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_ReceptionGate_Movement_2662D7
	applymovement 4, BattleFrontier_ReceptionGate_Movement_2662E0
	waitmovement 0
	msgbox BattleFrontier_ReceptionGate_Text_266764, MSGBOX_DEFAULT
	closemessage
	applymovement 4, BattleFrontier_ReceptionGate_Movement_2662E8
	waitmovement 0
	removeobject 4
	releaseall
	end

BattleFrontier_ReceptionGate_Movement_2662D2: @ 82662D2
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_2662D7: @ 82662D7
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_right
	step_end

BattleFrontier_ReceptionGate_Movement_2662DD: @ 82662DD
	walk_down
	walk_down
	step_end

BattleFrontier_ReceptionGate_Movement_2662E0: @ 82662E0
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	step_end

BattleFrontier_ReceptionGate_Movement_2662E8: @ 82662E8
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_ReceptionGate_Movement_2662F0: @ 82662F0
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_right
	step_end

BattleFrontier_ReceptionGate_Movement_2662F6: @ 82662F6
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end

BattleFrontier_ReceptionGate_EventScript_2662FC:: @ 82662FC
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_2665B2, MSGBOX_DEFAULT
	msgbox BattleFrontier_ReceptionGate_Text_2666C6, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_266310:: @ 8266310
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_266857, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_266320:: @ 8266320
	message BattleFrontier_ReceptionGate_Text_26689D
	waitmessage
	setvar VAR_0x8004, 8
	special sub_813A128
	waitstate
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_2663AE
	case 1, BattleFrontier_ReceptionGate_EventScript_2663BC
	case 2, BattleFrontier_ReceptionGate_EventScript_2663CA
	case 3, BattleFrontier_ReceptionGate_EventScript_2663D8
	case 4, BattleFrontier_ReceptionGate_EventScript_2663E6
	case 5, BattleFrontier_ReceptionGate_EventScript_2663F4
	case 6, BattleFrontier_ReceptionGate_EventScript_266402
	case 7, BattleFrontier_ReceptionGate_EventScript_266410
	case 8, BattleFrontier_ReceptionGate_EventScript_26641E
	case 9, BattleFrontier_ReceptionGate_EventScript_26642C
	case 127, BattleFrontier_ReceptionGate_EventScript_26642C
	end

BattleFrontier_ReceptionGate_EventScript_2663AE:: @ 82663AE
	msgbox BattleFrontier_ReceptionGate_Text_2668C2, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_2663BC:: @ 82663BC
	msgbox BattleFrontier_ReceptionGate_Text_26696F, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_2663CA:: @ 82663CA
	msgbox BattleFrontier_ReceptionGate_Text_266A34, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_2663D8:: @ 82663D8
	msgbox BattleFrontier_ReceptionGate_Text_266AC2, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_2663E6:: @ 82663E6
	msgbox BattleFrontier_ReceptionGate_Text_266B5D, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_2663F4:: @ 82663F4
	msgbox BattleFrontier_ReceptionGate_Text_266C24, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_266402:: @ 8266402
	msgbox BattleFrontier_ReceptionGate_Text_266CBB, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_266410:: @ 8266410
	msgbox BattleFrontier_ReceptionGate_Text_266D1C, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_26641E:: @ 826641E
	msgbox BattleFrontier_ReceptionGate_Text_266DCB, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266320
	end

BattleFrontier_ReceptionGate_EventScript_26642C:: @ 826642C
	msgbox BattleFrontier_ReceptionGate_Text_2666C6, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_266436:: @ 8266436
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_266E66, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266446
	end

BattleFrontier_ReceptionGate_EventScript_266446:: @ 8266446
	message BattleFrontier_ReceptionGate_Text_266EE0
	waitmessage
	multichoice 15, 0, 95, 0
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_2664A4
	case 1, BattleFrontier_ReceptionGate_EventScript_2664B2
	case 2, BattleFrontier_ReceptionGate_EventScript_2664C0
	case 3, BattleFrontier_ReceptionGate_EventScript_2664CE
	case 4, BattleFrontier_ReceptionGate_EventScript_2664DC
	case 5, BattleFrontier_ReceptionGate_EventScript_2664EA
	case 127, BattleFrontier_ReceptionGate_EventScript_2664EA
	end

BattleFrontier_ReceptionGate_EventScript_2664A4:: @ 82664A4
	msgbox BattleFrontier_ReceptionGate_Text_266F04, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266446
	end

BattleFrontier_ReceptionGate_EventScript_2664B2:: @ 82664B2
	msgbox BattleFrontier_ReceptionGate_Text_266F69, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266446
	end

BattleFrontier_ReceptionGate_EventScript_2664C0:: @ 82664C0
	msgbox BattleFrontier_ReceptionGate_Text_267080, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266446
	end

BattleFrontier_ReceptionGate_EventScript_2664CE:: @ 82664CE
	msgbox BattleFrontier_ReceptionGate_Text_26716A, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266446
	end

BattleFrontier_ReceptionGate_EventScript_2664DC:: @ 82664DC
	msgbox BattleFrontier_ReceptionGate_Text_267298, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266446
	end

BattleFrontier_ReceptionGate_EventScript_2664EA:: @ 82664EA
	msgbox BattleFrontier_ReceptionGate_Text_2666C6, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_EventScript_2664F4:: @ 82664F4
	lock
	faceplayer
	msgbox BattleFrontier_ReceptionGate_Text_267357, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266504
	end

BattleFrontier_ReceptionGate_EventScript_266504:: @ 8266504
	message BattleFrontier_ReceptionGate_Text_26737C
	waitmessage
	multichoice 16, 4, 11, 0
	switch VAR_RESULT
	case 0, BattleFrontier_ReceptionGate_EventScript_26654C
	case 1, BattleFrontier_ReceptionGate_EventScript_26655A
	case 2, BattleFrontier_ReceptionGate_EventScript_266568
	case 3, BattleFrontier_ReceptionGate_EventScript_266576
	case 127, BattleFrontier_ReceptionGate_EventScript_266576
	end

BattleFrontier_ReceptionGate_EventScript_26654C:: @ 826654C
	msgbox BattleFrontier_ReceptionGate_Text_2673A1, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266504
	end

BattleFrontier_ReceptionGate_EventScript_26655A:: @ 826655A
	msgbox BattleFrontier_ReceptionGate_Text_2674F3, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266504
	end

BattleFrontier_ReceptionGate_EventScript_266568:: @ 8266568
	msgbox BattleFrontier_ReceptionGate_Text_26761C, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_266504
	end

BattleFrontier_ReceptionGate_EventScript_266576:: @ 8266576
	msgbox BattleFrontier_ReceptionGate_Text_2666C6, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ReceptionGate_Text_266580: @ 8266580
	.i18n 2025

BattleFrontier_ReceptionGate_Text_2665B2: @ 82665B2
	.i18n 2026

BattleFrontier_ReceptionGate_Text_2665F7: @ 82665F7
	.i18n 2027

BattleFrontier_ReceptionGate_Text_266676: @ 8266676
	.i18n 2028

BattleFrontier_ReceptionGate_Text_266695: @ 8266695
	.i18n 2029

BattleFrontier_ReceptionGate_Text_2666C6: @ 82666C6
	.i18n 2030

BattleFrontier_ReceptionGate_Text_266703: @ 8266703
	.i18n 2031

BattleFrontier_ReceptionGate_Text_266733: @ 8266733
	.i18n 2032

BattleFrontier_ReceptionGate_Text_266764: @ 8266764
	.i18n 2033

BattleFrontier_ReceptionGate_Text_266857: @ 8266857
	.i18n 2034

BattleFrontier_ReceptionGate_Text_26689D: @ 826689D
	.i18n 2035

BattleFrontier_ReceptionGate_Text_2668C2: @ 82668C2
	.i18n 2036

BattleFrontier_ReceptionGate_Text_26696F: @ 826696F
	.i18n 2037

BattleFrontier_ReceptionGate_Text_266A34: @ 8266A34
	.i18n 2038

BattleFrontier_ReceptionGate_Text_266AC2: @ 8266AC2
	.i18n 2039

BattleFrontier_ReceptionGate_Text_266B5D: @ 8266B5D
	.i18n 2040

BattleFrontier_ReceptionGate_Text_266C24: @ 8266C24
	.i18n 2041

BattleFrontier_ReceptionGate_Text_266CBB: @ 8266CBB
	.i18n 2042

BattleFrontier_ReceptionGate_Text_266D1C: @ 8266D1C
	.i18n 2043

BattleFrontier_ReceptionGate_Text_266DCB: @ 8266DCB
	.i18n 2044

BattleFrontier_ReceptionGate_Text_266E66: @ 8266E66
	.i18n 2045

BattleFrontier_ReceptionGate_Text_266EE0: @ 8266EE0
	.i18n 2046

BattleFrontier_ReceptionGate_Text_266F04: @ 8266F04
	.i18n 2047

BattleFrontier_ReceptionGate_Text_266F69: @ 8266F69
	.i18n 2048

BattleFrontier_ReceptionGate_Text_267080: @ 8267080
	.i18n 2049

BattleFrontier_ReceptionGate_Text_26716A: @ 826716A
	.i18n 2050

BattleFrontier_ReceptionGate_Text_267298: @ 8267298
	.i18n 2051

BattleFrontier_ReceptionGate_Text_267357: @ 8267357
	.i18n 2052

BattleFrontier_ReceptionGate_Text_26737C: @ 826737C
	.i18n 2053

BattleFrontier_ReceptionGate_Text_2673A1: @ 82673A1
	.i18n 2054

BattleFrontier_ReceptionGate_Text_2674F3: @ 82674F3
	.i18n 2055

BattleFrontier_ReceptionGate_Text_26761C: @ 826761C
	.i18n 2056

