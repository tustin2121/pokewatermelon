BattleFrontier_BattlePikeLobby_MapScripts:: @ 825B6C6
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_MapScript2_25B6D1
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_MapScript2_25B6F3
	.byte 0

BattleFrontier_BattlePikeLobby_MapScript2_25B6D1: @ 825B6D1
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeLobby_EventScript_25B707
	map_script_2 VAR_TEMP_0, 1, BattleFrontier_BattlePikeLobby_EventScript_25B710
	map_script_2 VAR_TEMP_0, 3, BattleFrontier_BattlePikeLobby_EventScript_25B762
	map_script_2 VAR_TEMP_0, 4, BattleFrontier_BattlePikeLobby_EventScript_25B806
	.2byte 0

BattleFrontier_BattlePikeLobby_MapScript2_25B6F3: @ 825B6F3
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_25B6FD
	.2byte 0

BattleFrontier_BattlePikeLobby_EventScript_25B6FD:: @ 825B6FD
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattlePikeLobby_EventScript_25B707:: @ 825B707
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	end

BattleFrontier_BattlePikeLobby_EventScript_25B710:: @ 825B710
	special HealPlayerParty
	setvar VAR_0x8004, 27
	special CallBattlePikeFunction
	lockall
	msgbox BattleFrontier_BattlePikeLobby_Text_25C2E0, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special CallBattlePikeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 0
	special CallBattlePikeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_25B762:: @ 825B762
	lockall
	setvar VAR_0x8004, 10
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_25B784
	msgbox BattleFrontier_BattlePikeLobby_Text_25C18A, MSGBOX_DEFAULT
	waitmessage
	goto BattleFrontier_BattlePikeLobby_EventScript_25B78D

BattleFrontier_BattlePikeLobby_EventScript_25B784:: @ 825B784
	msgbox BattleFrontier_BattlePikeLobby_Text_25C383, MSGBOX_DEFAULT
	waitmessage

BattleFrontier_BattlePikeLobby_EventScript_25B78D:: @ 825B78D
	msgbox BattleFrontier_BattlePikeLobby_Text_25C3D9, MSGBOX_DEFAULT
	setvar VAR_0x8004, 11
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePikeLobby_Text_241520, 9
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 3
	special CallBattlePikeFunction
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	copyvar VAR_0x8006, VAR_RESULT
	special CallBattlePikeFunction
	special LoadPlayerParty
	special HealPlayerParty
	setvar VAR_0x8004, 27
	special CallBattlePikeFunction
	message BattleFrontier_BattlePikeLobby_Text_25C1DF
	waitmessage
	setvar VAR_0x8004, 8
	setvar VAR_0x8005, 0
	special CallBattlePikeFunction
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePikeLobby_Text_25BE02, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_25B806:: @ 825B806
	lockall
	message BattleFrontier_BattlePikeLobby_Text_25C146
	waitmessage
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 0
	special CallBattlePikeFunction
	special LoadPlayerParty
	special HealPlayerParty
	setvar VAR_0x8004, 27
	special CallBattlePikeFunction
	setvar VAR_0x8004, 8
	setvar VAR_0x8005, 0
	special CallBattlePikeFunction
	playse SE_SAVE
	waitse
	msgbox BattleFrontier_BattlePikeLobby_Text_25BE02, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_25B868:: @ 825B868
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 5
	setvar VAR_FRONTIER_BATTLE_MODE, 0
	special SavePlayerParty
	msgbox BattleFrontier_BattlePikeLobby_Text_25BB52, MSGBOX_DEFAULT

BattleFrontier_BattlePikeLobby_EventScript_25B87F:: @ 825B87F
	message BattleFrontier_BattlePikeLobby_Text_25BBC1
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeLobby_EventScript_25B8BB
	case 1, BattleFrontier_BattlePikeLobby_EventScript_25BA1A
	case 2, BattleFrontier_BattlePikeLobby_EventScript_25BA76
	case 127, BattleFrontier_BattlePikeLobby_EventScript_25BA76

BattleFrontier_BattlePikeLobby_EventScript_25B8BB:: @ 825B8BB
	message BattleFrontier_BattlePikeLobby_Text_25BE35
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattlePikeLobby_EventScript_25BA76
	case 127, BattleFrontier_BattlePikeLobby_EventScript_25BA76
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_25BA27
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePikeLobby_Text_25C094, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattlePikeLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 3
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_25BA73
	msgbox BattleFrontier_BattlePikeLobby_Text_25C0D8, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeLobby_EventScript_25BA73
	case 1, BattleFrontier_BattlePikeLobby_EventScript_25B95C
	case 127, BattleFrontier_BattlePikeLobby_EventScript_25BA73

BattleFrontier_BattlePikeLobby_EventScript_25B95C:: @ 825B95C
	setvar VAR_TEMP_0, 0
	setvar VAR_TEMP_1, 0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 28
	special CallBattlePikeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 1
	special CallBattlePikeFunction
	setvar VAR_0x8004, 26
	special CallBattlePikeFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	setvar VAR_0x8004, 26
	special CallBattlePikeFunction
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_25BA5C
	special SavePlayerParty
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattlePikeLobby_Text_25C130, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 5
	special CallFrontierUtilFunc
	call BattleFrontier_BattlePikeLobby_EventScript_25BA94
	special HealPlayerParty
	call BattleFrontier_BattlePikeLobby_EventScript_25BB49
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 255, 6, 7
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattlePikeLobby_EventScript_25BA1A:: @ 825BA1A
	msgbox BattleFrontier_BattlePikeLobby_Text_25BBF5, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25B87F

BattleFrontier_BattlePikeLobby_EventScript_25BA27:: @ 825BA27
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeLobby_EventScript_25BA42
	case 1, BattleFrontier_BattlePikeLobby_EventScript_25BA4F

BattleFrontier_BattlePikeLobby_EventScript_25BA42:: @ 825BA42
	msgbox BattleFrontier_BattlePikeLobby_Text_25BE8C, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25BA7E

BattleFrontier_BattlePikeLobby_EventScript_25BA4F:: @ 825BA4F
	msgbox BattleFrontier_BattlePikeLobby_Text_25BF9A, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25BA7E

BattleFrontier_BattlePikeLobby_EventScript_25BA5C:: @ 825BA5C
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	goto BattleFrontier_BattlePikeLobby_EventScript_25BA76

BattleFrontier_BattlePikeLobby_EventScript_25BA73:: @ 825BA73
	special LoadPlayerParty

BattleFrontier_BattlePikeLobby_EventScript_25BA76:: @ 825BA76
	msgbox BattleFrontier_BattlePikeLobby_Text_25BE02, MSGBOX_DEFAULT

BattleFrontier_BattlePikeLobby_EventScript_25BA7E:: @ 825BA7E
	release
	end

BattleFrontier_BattlePikeLobby_EventScript_25BA80:: @ 825BA80
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_25BA94:: @ 825BA94
	applymovement 1, BattleFrontier_BattlePikeLobby_Movement_25BAA7
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_25BAA6
	waitmovement 0
	return

BattleFrontier_BattlePikeLobby_Movement_25BAA6: @ 825BAA6
	walk_up

BattleFrontier_BattlePikeLobby_Movement_25BAA7: @ 825BAA7
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattlePikeLobby_EventScript_25BAAB:: @ 825BAAB
	msgbox BattleFrontier_BattlePikeLobby_Text_25C422, MSGBOX_NPC
	end

BattleFrontier_BattlePikeLobby_EventScript_25BAB4:: @ 825BAB4
	msgbox BattleFrontier_BattlePikeLobby_Text_25C4A5, MSGBOX_NPC
	end

BattleFrontier_BattlePikeLobby_EventScript_25BABD:: @ 825BABD
	msgbox BattleFrontier_BattlePikeLobby_Text_25C4FD, MSGBOX_NPC
	end

BattleFrontier_BattlePikeLobby_EventScript_25BAC6:: @ 825BAC6
	lockall
	msgbox BattleFrontier_BattlePikeLobby_Text_25C5FB, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25BAD5
	end

BattleFrontier_BattlePikeLobby_EventScript_25BAD5:: @ 825BAD5
	message BattleFrontier_BattlePikeLobby_Text_25C621
	waitmessage
	multichoice 16, 4, 102, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeLobby_EventScript_25BB1D
	case 1, BattleFrontier_BattlePikeLobby_EventScript_25BB2B
	case 2, BattleFrontier_BattlePikeLobby_EventScript_25BB39
	case 3, BattleFrontier_BattlePikeLobby_EventScript_25BB47
	case 127, BattleFrontier_BattlePikeLobby_EventScript_25BB47
	end

BattleFrontier_BattlePikeLobby_EventScript_25BB1D:: @ 825BB1D
	msgbox BattleFrontier_BattlePikeLobby_Text_25C644, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25BAD5
	end

BattleFrontier_BattlePikeLobby_EventScript_25BB2B:: @ 825BB2B
	msgbox BattleFrontier_BattlePikeLobby_Text_25C68A, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25BAD5
	end

BattleFrontier_BattlePikeLobby_EventScript_25BB39:: @ 825BB39
	msgbox BattleFrontier_BattlePikeLobby_Text_25C6EB, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_25BAD5
	end

BattleFrontier_BattlePikeLobby_EventScript_25BB47:: @ 825BB47
	releaseall
	end

BattleFrontier_BattlePikeCorridor_EventScript_25BB49:: @ 825BB49
BattleFrontier_BattlePikeLobby_EventScript_25BB49:: @ 825BB49
BattleFrontier_BattlePikeRandomRoom1_EventScript_25BB49:: @ 825BB49
BattleFrontier_BattlePikeThreePathRoom_EventScript_25BB49:: @ 825BB49
	playse 267
	special sub_813B880
	waitstate
	waitse
	return

BattleFrontier_BattlePikeLobby_Text_25BB52: @ 825BB52
	.i18n 944

BattleFrontier_BattlePikeLobby_Text_25BBC1: @ 825BBC1
	.i18n 945

BattleFrontier_BattlePikeLobby_Text_25BBF5: @ 825BBF5
	.i18n 946

BattleFrontier_BattlePikeLobby_Text_25BE02: @ 825BE02
	.i18n 947

BattleFrontier_BattlePikeLobby_Text_25BE35: @ 825BE35
	.i18n 948

BattleFrontier_BattlePikeLobby_Text_25BE8C: @ 825BE8C
	.i18n 949

BattleFrontier_BattlePikeLobby_Text_25BF9A: @ 825BF9A
	.i18n 950

BattleFrontier_BattlePikeLobby_Text_25C094: @ 825C094
	.i18n 951

BattleFrontier_BattlePikeLobby_Text_25C0D8: @ 825C0D8
	.i18n 952

BattleFrontier_BattlePikeLobby_Text_25C130: @ 825C130
	.i18n 953

BattleFrontier_BattlePikeLobby_Text_25C146: @ 825C146
	.i18n 954

BattleFrontier_BattlePikeLobby_Text_25C18A: @ 825C18A
	.i18n 955

BattleFrontier_BattlePikeLobby_Text_25C1DF: @ 825C1DF
	.i18n 956

BattleFrontier_BattlePikeLobby_Text_25C209: @ 825C209
	.i18n 957

BattleFrontier_BattlePikeLobby_Text_25C26C: @ 825C26C
	.i18n 958

BattleFrontier_BattlePikeLobby_Text_25C2E0: @ 825C2E0
	.i18n 959

BattleFrontier_BattlePikeLobby_Text_25C383: @ 825C383
	.i18n 960

BattleFrontier_BattlePikeLobby_Text_25C3D9: @ 825C3D9
	.i18n 961

BattleFrontier_BattlePikeLobby_Text_25C422: @ 825C422
	.i18n 962

BattleFrontier_BattlePikeLobby_Text_25C4A5: @ 825C4A5
	.i18n 963

BattleFrontier_BattlePikeLobby_Text_25C4FD: @ 825C4FD
	.i18n 964

BattleFrontier_BattlePikeLobby_Text_25C558: @ 825C558
	.i18n 965

BattleFrontier_BattlePikeLobby_Text_25C5FB: @ 825C5FB
	.i18n 966

BattleFrontier_BattlePikeLobby_Text_25C621: @ 825C621
	.i18n 967

BattleFrontier_BattlePikeLobby_Text_25C644: @ 825C644
	.i18n 968

BattleFrontier_BattlePikeLobby_Text_25C68A: @ 825C68A
	.i18n 969

BattleFrontier_BattlePikeLobby_Text_25C6EB: @ 825C6EB
	.i18n 970

