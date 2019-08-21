BattleFrontier_BattleTowerLobby_MapScripts:: @ 823E67B
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_MapScript1_23E690
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_MapScript1_23E694
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_MapScript2_23E6DD
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_MapScript2_23E6C9
	.byte 0

BattleFrontier_BattleTowerLobby_MapScript1_23E690: @ 823E690
	special sub_81653CC
	end

BattleFrontier_BattleTowerLobby_MapScript1_23E694: @ 823E694
	call BattleFrontier_BattleTowerLobby_EventScript_28CC84
	setvar VAR_0x8004, 10
	special CallApprenticeFunction
	compare VAR_0x8004, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23E6B5
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_EventScript_23E6C1

BattleFrontier_BattleTowerLobby_EventScript_23E6B5:: @ 823E6B5
	clearflag FLAG_HIDE_APPRENTICE
	setvar VAR_0x8004, 23
	special CallApprenticeFunction

BattleFrontier_BattleTowerLobby_EventScript_23E6C0:: @ 823E6C0
	end

BattleFrontier_BattleTowerLobby_EventScript_23E6C1:: @ 823E6C1
	setflag FLAG_HIDE_APPRENTICE
	goto BattleFrontier_BattleTowerLobby_EventScript_23E6C0

BattleFrontier_BattleTowerLobby_MapScript2_23E6C9: @ 823E6C9
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_EventScript_23E6D3
	.2byte 0

BattleFrontier_BattleTowerLobby_EventScript_23E6D3:: @ 823E6D3
	setvar VAR_TEMP_1, 1
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattleTowerLobby_MapScript2_23E6DD: @ 823E6DD
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerLobby_EventScript_23E707
	map_script_2 VAR_TEMP_0, 1, BattleFrontier_BattleTowerLobby_EventScript_23E710
	map_script_2 VAR_TEMP_0, 2, BattleFrontier_BattleTowerLobby_EventScript_23E8EE
	map_script_2 VAR_TEMP_0, 3, BattleFrontier_BattleTowerLobby_EventScript_23E758
	map_script_2 VAR_TEMP_0, 4, BattleFrontier_BattleTowerLobby_EventScript_23E7F2
	.2byte 0

BattleFrontier_BattleTowerLobby_EventScript_23E707:: @ 823E707
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	end

BattleFrontier_BattleTowerLobby_EventScript_23E710:: @ 823E710
	lock
	faceplayer
	msgbox BattleFrontier_BattleTowerLobby_Text_23F583, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 255
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23E758:: @ 823E758
	lock
	faceplayer
	setvar VAR_0x8004, 10
	special CallFrontierUtilFunc
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23E778
	message BattleFrontier_BattleTowerLobby_Text_23F60D
	waitmessage
	goto BattleFrontier_BattleTowerLobby_EventScript_23E780

BattleFrontier_BattleTowerLobby_EventScript_23E778:: @ 823E778
	msgbox BattleFrontier_BattleTowerLobby_Text_241486, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23E780:: @ 823E780
	setvar VAR_0x8004, 5
	special sub_8161F74
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23E7A5
	message BattleFrontier_BattleTowerLobby_Text_23F844
	waitmessage
	playfanfare MUS_FANFA4
	waitfanfare
	msgbox BattleFrontier_BattleTowerLobby_Text_23F89F, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23E7A5:: @ 823E7A5
	msgbox BattleFrontier_BattleTowerLobby_Text_2414D4, MSGBOX_DEFAULT
	setvar VAR_0x8004, 11
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleTowerLobby_Text_241520, 9
	call BattleFrontier_BattleTowerLobby_EventScript_23E84D
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special sub_8161F74
	compare VAR_RESULT, 49
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_23E7E2
	msgbox BattleFrontier_BattleTowerLobby_Text_23F79D, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23E7E2:: @ 823E7E2
	msgbox BattleFrontier_BattleTowerLobby_Text_23FD07, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23E7F2:: @ 823E7F2
	compare VAR_FRONTIER_BATTLE_MODE, 2
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_23E81E
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_23E81E
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special sub_8161F74
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_23E830

BattleFrontier_BattleTowerLobby_EventScript_23E81E:: @ 823E81E
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 0
	special sub_8161F74

BattleFrontier_BattleTowerLobby_EventScript_23E830:: @ 823E830
	lock
	faceplayer
	message BattleFrontier_BattleTowerLobby_Text_23F6F7
	waitmessage
	call BattleFrontier_BattleTowerLobby_EventScript_23E84D
	msgbox BattleFrontier_BattleTowerLobby_Text_23FD07, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 255
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23E84D:: @ 823E84D
	message BattleFrontier_BattleTowerLobby_Text_23F70F
	waitmessage
	setvar VAR_0x8004, 8
	special CallFrontierUtilFunc
	special LoadPlayerParty
	special HealPlayerParty
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 0
	special sub_8161F74
	playse SE_SAVE
	waitse
	call BattleFrontier_BattleTowerLobby_EventScript_23E8E0
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23E8DF
	message BattleFrontier_BattleTowerLobby_Text_23FE3C
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23E8DF
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23E8B4
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23E8DF

BattleFrontier_BattleArenaBattleRoom_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleArenaLobby_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleDomeLobby_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleDomePreBattleRoom_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleFactoryLobby_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattlePalaceBattleRoom_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattlePalaceLobby_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleTowerBattleRoom2_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleTowerBattleRoom_EventScript_23E8B4:: @ 823E8B4
BattleFrontier_BattleTowerLobby_EventScript_23E8B4:: @ 823E8B4
	setvar VAR_0x8004, 19
	special CallFrontierUtilFunc
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23E8D7
	playse SE_SAVE
	msgbox BattleFrontier_BattleTowerLobby_Text_2423CD, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23E8DF

BattleFrontier_BattleTowerLobby_EventScript_23E8D7:: @ 823E8D7
	msgbox gText_BattleRecordCouldntBeSaved, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23E8DF:: @ 823E8DF
	return

BattleFrontier_BattleArenaBattleRoom_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleArenaLobby_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleDomeLobby_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleDomePreBattleRoom_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleFactoryLobby_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattlePalaceBattleRoom_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattlePalaceLobby_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleTowerBattleRoom2_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleTowerBattleRoom_EventScript_23E8E0:: @ 823E8E0
BattleFrontier_BattleTowerLobby_EventScript_23E8E0:: @ 823E8E0
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 6
	special CallFrontierUtilFunc
	return

BattleFrontier_BattleTowerLobby_EventScript_23E8EE:: @ 823E8EE
	lock
	faceplayer
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23E930
	message BattleFrontier_BattleTowerLobby_Text_23F737
	waitmessage
	message BattleFrontier_BattleTowerLobby_Text_23F754
	waitmessage
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 1
	special sub_8161F74
	playse SE_SAVE
	waitse
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23E930:: @ 823E930
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 1
	return

BattleFrontier_BattleTowerLobby_EventScript_23E936:: @ 823E936
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 0
	special SavePlayerParty
	msgbox BattleFrontier_BattleTowerLobby_Text_240537, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23E948:: @ 823E948
	message BattleFrontier_BattleTowerLobby_Text_2405B3
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23E984
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23EA91
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6

BattleFrontier_BattleTowerLobby_EventScript_23E984:: @ 823E984
	setvar VAR_FRONTIER_BATTLE_MODE, 0
	message BattleFrontier_BattleTowerLobby_Text_23FD3B
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F02B
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleTowerLobby_Text_2407A6, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattleTowerLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 3
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	msgbox BattleFrontier_BattleTowerLobby_Text_23FDC7, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23EA2A
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E3

BattleFrontier_BattleTowerLobby_EventScript_23EA2A:: @ 823EA2A
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 0
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0D0
	incrementgamestat 30
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 1
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23EA91:: @ 823EA91
	msgbox BattleFrontier_BattleTowerLobby_Text_2405EC, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23E948
	end

BattleFrontier_BattleTowerLobby_EventScript_23EA9F:: @ 823EA9F
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 0
	special SavePlayerParty
	msgbox BattleFrontier_BattleTowerLobby_Text_2407E2, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23EAB1:: @ 823EAB1
	message BattleFrontier_BattleTowerLobby_Text_24085E
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23EAED
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23EBFA
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6

BattleFrontier_BattleTowerLobby_EventScript_23EAED:: @ 823EAED
	setvar VAR_FRONTIER_BATTLE_MODE, 1
	message BattleFrontier_BattleTowerLobby_Text_23FD3B
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F02B
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleTowerLobby_Text_240A50, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattleTowerLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 4
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	msgbox BattleFrontier_BattleTowerLobby_Text_23FDC7, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23EB93
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E3

BattleFrontier_BattleTowerLobby_EventScript_23EB93:: @ 823EB93
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 0
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0D0
	incrementgamestat 30
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23EBFA:: @ 823EBFA
	msgbox BattleFrontier_BattleTowerLobby_Text_240897, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23EAB1
	end

BattleFrontier_BattleTowerLobby_EventScript_23EC08:: @ 823EC08
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 0
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
	special SavePlayerParty
	msgbox BattleFrontier_BattleTowerLobby_Text_240A8B, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23EC1D:: @ 823EC1D
	message BattleFrontier_BattleTowerLobby_Text_240B06
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23EC59
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23ED66
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6

BattleFrontier_BattleTowerLobby_EventScript_23EC59:: @ 823EC59
	setvar VAR_FRONTIER_BATTLE_MODE, 2
	message BattleFrontier_BattleTowerLobby_Text_23FD3B
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F02B
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleTowerLobby_Text_240DDB, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattleTowerLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 2
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	msgbox BattleFrontier_BattleTowerLobby_Text_23FDC7, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23ECFF
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E3

BattleFrontier_BattleTowerLobby_EventScript_23ECFF:: @ 823ECFF
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 0
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0D0
	incrementgamestat 30
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23ED66:: @ 823ED66
	msgbox BattleFrontier_BattleTowerLobby_Text_240B3E, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23EC1D
	end

BattleFrontier_BattleTowerLobby_EventScript_23ED74:: @ 823ED74
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, 0
	special SavePlayerParty
	msgbox BattleFrontier_BattleTowerLobby_Text_240E15, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23ED86:: @ 823ED86
	message BattleFrontier_BattleTowerLobby_Text_240E95
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23EDC2
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23F3DA
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6

BattleFrontier_BattleTowerLobby_EventScript_23EDC2:: @ 823EDC2
	setvar VAR_FRONTIER_BATTLE_MODE, 3
	message BattleFrontier_BattleTowerLobby_Text_23FD3B
	waitmessage
	multichoice 17, 6, 24, 0
	switch VAR_RESULT
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	setvar VAR_0x8004, 15
	special CallFrontierUtilFunc
	compare VAR_0x8004, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F02B
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	msgbox BattleFrontier_BattleTowerLobby_Text_24115E, MSGBOX_DEFAULT
	fadescreen 1
	call BattleFrontier_BattleTowerLobby_EventScript_23F2B7
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, 2
	special sub_80F9490
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	msgbox BattleFrontier_BattleTowerLobby_Text_23FDC7, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F0E3
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23EE68
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E3

BattleFrontier_BattleTowerLobby_EventScript_23EE68:: @ 823EE68
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special CallFrontierUtilFunc
	setvar VAR_TEMP_0, 0
	setvar VAR_0x8004, 0
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 1
	special sub_8161F74
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	special LoadPlayerParty
	closemessage
	delay 2
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 0
	special sub_8161F74
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_0, 255
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0D0
	incrementgamestat 30
	specialvar VAR_RESULT, IsWirelessAdapterConnected
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F3E8
	goto BattleFrontier_BattleTowerLobby_EventScript_23F2C5
	end

BattleFrontier_BattleTowerLobby_EventScript_23EEE7:: @ 823EEE7
	lock
	faceplayer
	message BattleFrontier_BattleTowerLobby_Text_23F8CD
	waitmessage
	multichoice 16, 4, 109, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23EF32
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23EF4C
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23EF66
	case 3, BattleFrontier_BattleTowerLobby_EventScript_23EF80
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23EF80
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23EF32:: @ 823EF32
	msgbox BattleFrontier_BattleTowerLobby_Text_23F969, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto BattleFrontier_BattleTowerLobby_EventScript_23EF8A
	end

BattleFrontier_BattleTowerLobby_EventScript_23EF4C:: @ 823EF4C
	msgbox BattleFrontier_BattleTowerLobby_Text_23F9AA, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto BattleFrontier_BattleTowerLobby_EventScript_23EF8A
	end

BattleFrontier_BattleTowerLobby_EventScript_23EF66:: @ 823EF66
	msgbox BattleFrontier_BattleTowerLobby_Text_23F9D4, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto BattleFrontier_BattleTowerLobby_EventScript_23EF8A
	end

BattleFrontier_BattleTowerLobby_EventScript_23EF80:: @ 823EF80
	msgbox BattleFrontier_BattleTowerLobby_Text_23FA0F, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23EF8A:: @ 823EF8A
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23EFA1
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23EFAB
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFA1:: @ 823EFA1
	msgbox BattleFrontier_BattleTowerLobby_Text_23FA4F, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFAB:: @ 823EFAB
	msgbox BattleFrontier_BattleTowerLobby_Text_23FA83, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFB5:: @ 823EFB5
	msgbox BattleFrontier_BattleTowerLobby_Text_23FAC0, MSGBOX_NPC
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFBE:: @ 823EFBE
	msgbox BattleFrontier_BattleTowerLobby_Text_23FB26, MSGBOX_NPC
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFC7:: @ 823EFC7
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFE0:: @ 823EFE0
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleTowerLobby_EventScript_23EFF9:: @ 823EFF9
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 2
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleTowerLobby_EventScript_23F012:: @ 823F012
	lockall
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 3
	special CallFrontierUtilFunc
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleTowerLobby_EventScript_23F02B:: @ 823F02B
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F046
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23F08B

BattleFrontier_BattleTowerLobby_EventScript_23F046:: @ 823F046
	switch VAR_FRONTIER_BATTLE_MODE
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F06F
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23F07D
	msgbox BattleFrontier_BattleTowerLobby_Text_24038B, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F1
	end

BattleFrontier_BattleTowerLobby_EventScript_23F06F:: @ 823F06F
	msgbox BattleFrontier_BattleTowerLobby_Text_240027, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F1
	end

BattleFrontier_BattleTowerLobby_EventScript_23F07D:: @ 823F07D
	msgbox BattleFrontier_BattleTowerLobby_Text_2401DB, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F1
	end

BattleFrontier_BattleTowerLobby_EventScript_23F08B:: @ 823F08B
	switch VAR_FRONTIER_BATTLE_MODE
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F0B4
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23F0C2
	msgbox BattleFrontier_BattleTowerLobby_Text_24046B, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F1
	end

BattleFrontier_BattleTowerLobby_EventScript_23F0B4:: @ 823F0B4
	msgbox BattleFrontier_BattleTowerLobby_Text_24010B, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F1
	end

BattleFrontier_BattleTowerLobby_EventScript_23F0C2:: @ 823F0C2
	msgbox BattleFrontier_BattleTowerLobby_Text_2402BD, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F1
	end

BattleFrontier_BattleTowerLobby_EventScript_23F0D0:: @ 823F0D0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	special CallFrontierUtilFunc
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	end

BattleFrontier_BattleTowerLobby_EventScript_23F0E3:: @ 823F0E3
	special LoadPlayerParty

BattleFrontier_BattleTowerLobby_EventScript_23F0E6:: @ 823F0E6
	special CloseLink
	msgbox BattleFrontier_BattleTowerLobby_Text_23FD07, MSGBOX_DEFAULT

BattleFrontier_BattleTowerLobby_EventScript_23F0F1:: @ 823F0F1
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23F0F3:: @ 823F0F3
	special SavePlayerParty
	setvar VAR_0x8004, 3
	call BattleFrontier_BattleTowerLobby_EventScript_23F272
	special CallFrontierUtilFunc
	setvar VAR_RESULT, 0

BattleFrontier_BattleTowerLobby_EventScript_23F108:: @ 823F108
	setvar VAR_0x8004, 12
	special sub_8161F74
	delay 1
	compare VAR_RESULT, 6
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_23F108
	call BattleFrontier_BattleTowerLobby_EventScript_23F135
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 255, 1, 6
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattleTowerLobby_EventScript_23F135:: @ 823F135
	call BattleFrontier_BattleTowerLobby_EventScript_23F1A7
	compare VAR_FRONTIER_BATTLE_MODE, 3
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F152
	msgbox BattleFrontier_BattleTowerLobby_Text_23FE11, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F15B

BattleFrontier_BattleTowerLobby_EventScript_23F152:: @ 823F152
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_23FE11
	waitmessage
	delay 48

BattleFrontier_BattleTowerLobby_EventScript_23F15B:: @ 823F15B
	closemessage
	call BattleFrontier_BattleTowerLobby_EventScript_23F1E8
	call BattleFrontier_BattleTowerLobby_EventScript_23F22D
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_23F195
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_23F195
	waitmovement 0
	opendoor VAR_0x8004, 1
	waitdooranim
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_23F199
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_23F19C
	waitmovement 0
	closedoor VAR_0x8004, 1
	waitdooranim
	return

BattleFrontier_BattleTowerLobby_Movement_23F195: @ 823F195
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleTowerLobby_Movement_23F199: @ 823F199
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_Movement_23F19C: @ 823F19C
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_Movement_23F1A0: @ 823F1A0
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_EventScript_23F1A7:: @ 823F1A7
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F1D4
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F1D9
	compare VAR_FRONTIER_BATTLE_MODE, 2
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F1DE
	compare VAR_FRONTIER_BATTLE_MODE, 3
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F1E3
	return

BattleFrontier_BattleTowerLobby_EventScript_23F1D4:: @ 823F1D4
	bufferstdstring 0, 19
	return

BattleFrontier_BattleTowerLobby_EventScript_23F1D9:: @ 823F1D9
	bufferstdstring 0, 20
	return

BattleFrontier_BattleTowerLobby_EventScript_23F1DE:: @ 823F1DE
	bufferstdstring 0, 21
	return

BattleFrontier_BattleTowerLobby_EventScript_23F1E3:: @ 823F1E3
	bufferstdstring 0, 22
	return

BattleFrontier_BattleTowerLobby_EventScript_23F1E8:: @ 823F1E8
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F215
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F21B
	compare VAR_FRONTIER_BATTLE_MODE, 2
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F221
	compare VAR_FRONTIER_BATTLE_MODE, 3
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F227
	return

BattleFrontier_BattleTowerLobby_EventScript_23F215:: @ 823F215
	setvar VAR_LAST_TALKED, 1
	return

BattleFrontier_BattleTowerLobby_EventScript_23F21B:: @ 823F21B
	setvar VAR_LAST_TALKED, 7
	return

BattleFrontier_BattleTowerLobby_EventScript_23F221:: @ 823F221
	setvar VAR_LAST_TALKED, 8
	return

BattleFrontier_BattleTowerLobby_EventScript_23F227:: @ 823F227
	setvar VAR_LAST_TALKED, 9
	return

BattleFrontier_BattleTowerLobby_EventScript_23F22D:: @ 823F22D
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F25A
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F260
	compare VAR_FRONTIER_BATTLE_MODE, 2
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F266
	compare VAR_FRONTIER_BATTLE_MODE, 3
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F26C
	return

BattleFrontier_BattleTowerLobby_EventScript_23F25A:: @ 823F25A
	setvar VAR_0x8004, 6
	return

BattleFrontier_BattleTowerLobby_EventScript_23F260:: @ 823F260
	setvar VAR_0x8004, 10
	return

BattleFrontier_BattleTowerLobby_EventScript_23F266:: @ 823F266
	setvar VAR_0x8004, 14
	return

BattleFrontier_BattleTowerLobby_EventScript_23F26C:: @ 823F26C
	setvar VAR_0x8004, 18
	return

BattleFrontier_BattleTowerLobby_EventScript_23F272:: @ 823F272
	compare VAR_FRONTIER_BATTLE_MODE, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F29F
	compare VAR_FRONTIER_BATTLE_MODE, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F2A5
	compare VAR_FRONTIER_BATTLE_MODE, 2
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F2AB
	compare VAR_FRONTIER_BATTLE_MODE, 3
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F2B1
	return

BattleFrontier_BattleTowerLobby_EventScript_23F29F:: @ 823F29F
	setvar VAR_0x8005, 3
	return

BattleFrontier_BattleTowerLobby_EventScript_23F2A5:: @ 823F2A5
	setvar VAR_0x8005, 4
	return

BattleFrontier_BattleTowerLobby_EventScript_23F2AB:: @ 823F2AB
	setvar VAR_0x8005, 2
	return

BattleFrontier_BattleTowerLobby_EventScript_23F2B1:: @ 823F2B1
	setvar VAR_0x8005, 2
	return

BattleFrontier_BattleArenaLobby_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattleDomeLobby_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattleDomePreBattleRoom_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattlePalaceLobby_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattlePikeLobby_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattlePyramidLobby_EventScript_23F2B7:: @ 823F2B7
BattleFrontier_BattleTowerLobby_EventScript_23F2B7:: @ 823F2B7
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special CallFrontierUtilFunc
	return

BattleFrontier_BattleTowerLobby_EventScript_23F2C5:: @ 823F2C5
	setvar VAR_0x8004, 9
	message gText_PleaseWaitForLink
	waitmessage
	setvar VAR_0x8005, 0
	special sub_80B2DA4
	waitstate
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F3AF
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2772D2
	compare VAR_RESULT, 3
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F327
	compare VAR_RESULT, 4
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F351
	compare VAR_RESULT, 5
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	compare VAR_RESULT, 6
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2772C5
	compare VAR_RESULT, 11
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F366
	end

BattleFrontier_BattleTowerLobby_EventScript_23F327:: @ 823F327
	special CloseLink
	compare VAR_0x8005, 3
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F33F
	msgbox BattleFrontier_BattleTowerLobby_Text_278255, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23F33F:: @ 823F33F
	msgbox BattleFrontier_BattleTowerLobby_Text_2412E8, MSGBOX_DEFAULT
	msgbox BattleFrontier_BattleTowerLobby_Text_2413DE, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23F351:: @ 823F351
	msgbox BattleFrontier_BattleTowerLobby_Text_241240, MSGBOX_DEFAULT
	special CloseLink
	msgbox BattleFrontier_BattleTowerLobby_Text_2782A8, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23F366:: @ 823F366
	special CloseLink
	compare VAR_0x8005, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F394
	compare VAR_0x8005, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F39D
	compare VAR_0x8005, 2
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F3A6
	msgbox BattleFrontier_BattleTowerLobby_Text_2413DE, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_23F394:: @ 823F394
	msgbox BattleFrontier_BattleTowerLobby_Text_2412E8, MSGBOX_DEFAULT
	return

BattleFrontier_BattleTowerLobby_EventScript_23F39D:: @ 823F39D
	msgbox BattleFrontier_BattleTowerLobby_Text_241285, MSGBOX_DEFAULT
	return

BattleFrontier_BattleTowerLobby_EventScript_23F3A6:: @ 823F3A6
	msgbox BattleFrontier_BattleTowerLobby_Text_2412B3, MSGBOX_DEFAULT
	return

BattleFrontier_BattleTowerLobby_EventScript_23F3AF:: @ 823F3AF
	incrementgamestat 30
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	message BattleFrontier_BattleTowerLobby_Text_24144D
	waitmessage
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 1
	special sub_8161F74
	special sub_80A08CC
	waitstate
	playse SE_SAVE
	waitse
	special sub_80B3BC4
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23F3DA:: @ 823F3DA
	msgbox BattleFrontier_BattleTowerLobby_Text_240ED2, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23ED86
	end

BattleFrontier_BattleTowerLobby_EventScript_23F3E8:: @ 823F3E8
	setvar VAR_0x8004, 20
	goto BattleFrontier_BattleTowerLobby_EventScript_23F3F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23F3F3:: @ 823F3F3
	message BattleFrontier_BattleTowerLobby_Text_2792CD
	waitmessage
	multichoice 16, 6, 81, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F463
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23F430
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F0E6
	end

BattleFrontier_BattleTowerLobby_EventScript_23F430:: @ 823F430
	call BattleFrontier_BattleTowerLobby_EventScript_277B30
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F496
	compare VAR_RESULT, 5
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F3F3
	compare VAR_RESULT, 8
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F430
	compare VAR_RESULT, 11
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F366
	release
	return

BattleFrontier_BattleTowerLobby_EventScript_23F463:: @ 823F463
	call BattleFrontier_BattleTowerLobby_EventScript_277B35
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F496
	compare VAR_RESULT, 5
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F3F3
	compare VAR_RESULT, 8
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F463
	compare VAR_RESULT, 11
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_23F366
	release
	return

BattleFrontier_BattleTowerLobby_EventScript_23F496:: @ 823F496
	incrementgamestat 30
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	message BattleFrontier_BattleTowerLobby_Text_24144D
	waitmessage
	setvar VAR_0x8004, 6
	setvar VAR_0x8005, 1
	special sub_8161F74
	special sub_80A08CC
	waitstate
	playse SE_SAVE
	waitse
	goto BattleFrontier_BattleTowerLobby_EventScript_23F0F3
	end

BattleFrontier_BattleTowerLobby_EventScript_23F4BE:: @ 823F4BE
	lockall
	msgbox BattleFrontier_BattleTowerLobby_Text_241540, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F4CD
	end

BattleFrontier_BattleTowerLobby_EventScript_23F4CD:: @ 823F4CD
	message BattleFrontier_BattleTowerLobby_Text_241563
	waitmessage
	multichoice 17, 2, 97, 0
	switch VAR_RESULT
	case 0, BattleFrontier_BattleTowerLobby_EventScript_23F520
	case 1, BattleFrontier_BattleTowerLobby_EventScript_23F52E
	case 2, BattleFrontier_BattleTowerLobby_EventScript_23F53C
	case 3, BattleFrontier_BattleTowerLobby_EventScript_23F54A
	case 4, BattleFrontier_BattleTowerLobby_EventScript_23F558
	case 127, BattleFrontier_BattleTowerLobby_EventScript_23F558
	end

BattleFrontier_BattleTowerLobby_EventScript_23F520:: @ 823F520
	msgbox BattleFrontier_BattleTowerLobby_Text_241586, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F4CD
	end

BattleFrontier_BattleTowerLobby_EventScript_23F52E:: @ 823F52E
	msgbox BattleFrontier_BattleTowerLobby_Text_241693, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F4CD
	end

BattleFrontier_BattleTowerLobby_EventScript_23F53C:: @ 823F53C
	msgbox BattleFrontier_BattleTowerLobby_Text_241777, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F4CD
	end

BattleFrontier_BattleTowerLobby_EventScript_23F54A:: @ 823F54A
	msgbox BattleFrontier_BattleTowerLobby_Text_24187E, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_23F4CD
	end

BattleFrontier_BattleTowerLobby_EventScript_23F558:: @ 823F558
	releaseall
	end

BattleFrontier_BattleTowerLobby_EventScript_23F55A: @ 823F55A
	.i18n 1358

BattleFrontier_BattleTowerLobby_Text_23F583: @ 823F583
	.i18n 1359

BattleFrontier_BattleTowerLobby_Text_23F60D: @ 823F60D
	.i18n 1360

BattleFrontier_BattleTowerLobby_Text_23F641: @ 823F641
	.i18n 1361

SlateportCity_BattleTentLobby_Text_23F68C: @ 823F68C
	.i18n 1362

SlateportCity_BattleTentLobby_Text_23F6A6: @ 823F6A6
	.i18n 1363

BattleFrontier_BattleTowerLobby_Text_23F6F7: @ 823F6F7
	.i18n 1364

BattleFrontier_BattleTowerLobby_Text_23F70F: @ 823F70F
	.i18n 1365

BattleFrontier_BattleTowerLobby_Text_23F737: @ 823F737
	.i18n 1366

BattleFrontier_BattleTowerLobby_Text_23F754: @ 823F754
	.i18n 1367

BattleFrontier_BattleTowerLobby_Text_23F79D: @ 823F79D
	.i18n 1368

BattleFrontier_BattleTowerLobby_Text_23F844: @ 823F844
	.i18n 1369

BattleFrontier_BattleTowerLobby_Text_23F89F: @ 823F89F
	.i18n 1370

BattleFrontier_BattleTowerLobby_Text_23F8CD: @ 823F8CD
	.i18n 1371

BattleFrontier_BattleTowerLobby_Text_23F969: @ 823F969
	.i18n 1372

BattleFrontier_BattleTowerLobby_Text_23F9AA: @ 823F9AA
	.i18n 1373

BattleFrontier_BattleTowerLobby_Text_23F9D4: @ 823F9D4
	.i18n 1374

BattleFrontier_BattleTowerLobby_Text_23FA0F: @ 823FA0F
	.i18n 1375

BattleFrontier_BattleTowerLobby_Text_23FA4F: @ 823FA4F
	.i18n 1376

BattleFrontier_BattleTowerLobby_Text_23FA83: @ 823FA83
	.i18n 1377

BattleFrontier_BattleTowerLobby_Text_23FAC0: @ 823FAC0
	.i18n 1378

BattleFrontier_BattleTowerLobby_Text_23FB26: @ 823FB26
	.i18n 1379

BattleFrontier_BattleTowerLobby_Text_23FBCE: @ 823FBCE
	.i18n 1380

BattleFrontier_BattleTowerLobby_Text_23FC6B: @ 823FC6B
	.i18n 1381

BattleFrontier_BattleTowerLobby_Text_23FD07: @ 823FD07
	.i18n 1382

BattleFrontier_BattleTowerLobby_Text_23FD3B: @ 823FD3B
	.i18n 1383

BattleFrontier_BattleTowerLobby_Text_23FD9A: @ 823FD9A
	.i18n 1384

BattleFrontier_BattleTowerLobby_Text_23FDC7: @ 823FDC7
	.i18n 1385

BattleFrontier_BattleTowerLobby_Text_23FE11: @ 823FE11
	.i18n 1386

BattleFrontier_BattleTowerLobby_Text_23FE3C: @ 823FE3C
	.i18n 1387

BattleFrontier_BattleTowerLobby_Text_23FE7F: @ 823FE7F
	.i18n 1388

BattleFrontier_BattleTowerLobby_Text_23FF5D: @ 823FF5D
	.i18n 1389

BattleFrontier_BattleTowerLobby_Text_240027: @ 8240027
	.i18n 1390

BattleFrontier_BattleTowerLobby_Text_24010B: @ 824010B
	.i18n 1391

BattleFrontier_BattleTowerLobby_Text_2401DB: @ 82401DB
	.i18n 1392

BattleFrontier_BattleTowerLobby_Text_2402BD: @ 82402BD
	.i18n 1393

BattleFrontier_BattleTowerLobby_Text_24038B: @ 824038B
	.i18n 1394

BattleFrontier_BattleTowerLobby_Text_24046B: @ 824046B
	.i18n 1395

BattleFrontier_BattleTowerLobby_Text_240537: @ 8240537
	.i18n 1396

BattleFrontier_BattleTowerLobby_Text_2405B3: @ 82405B3
	.i18n 1397

BattleFrontier_BattleTowerLobby_Text_2405EC: @ 82405EC
	.i18n 1398

BattleFrontier_BattleTowerLobby_Text_2407A6: @ 82407A6
	.i18n 1399

BattleFrontier_BattleTowerLobby_Text_2407E2: @ 82407E2
	.i18n 1400

BattleFrontier_BattleTowerLobby_Text_24085E: @ 824085E
	.i18n 1401

BattleFrontier_BattleTowerLobby_Text_240897: @ 8240897
	.i18n 1402

BattleFrontier_BattleTowerLobby_Text_240A50: @ 8240A50
	.i18n 1403

BattleFrontier_BattleTowerLobby_Text_240A8B: @ 8240A8B
	.i18n 1404

BattleFrontier_BattleTowerLobby_Text_240B06: @ 8240B06
	.i18n 1405

BattleFrontier_BattleTowerLobby_Text_240B3E: @ 8240B3E
	.i18n 1406

BattleFrontier_BattleTowerLobby_Text_240DDB: @ 8240DDB
	.i18n 1407

BattleFrontier_BattleTowerLobby_Text_240E15: @ 8240E15
	.i18n 1408

BattleFrontier_BattleTowerLobby_Text_240E95: @ 8240E95
	.i18n 1409

BattleFrontier_BattleTowerLobby_Text_240ED2: @ 8240ED2
	.i18n 1410

BattleFrontier_BattleTowerLobby_Text_24115E: @ 824115E
	.i18n 1411

BattleFrontier_BattleTowerLobby_Text_241198: @ 8241198
	.i18n 1412

BattleFrontier_BattleTowerLobby_Text_241240: @ 8241240
	.i18n 1413

BattleFrontier_BattleTowerLobby_Text_241285: @ 8241285
	.i18n 1414

BattleFrontier_BattleTowerLobby_Text_2412B3: @ 82412B3
	.i18n 1415

BattleFrontier_BattleTowerLobby_Text_2412E8: @ 82412E8
	.i18n 1416

BattleFrontier_BattleTowerLobby_Text_241319: @ 8241319
	.i18n 1417

BattleFrontier_BattleTowerLobby_Text_241378: @ 8241378
	.i18n 1418

BattleFrontier_BattleTowerLobby_Text_2413DE: @ 82413DE
	.i18n 1419

BattleFrontier_BattleTowerLobby_Text_24144D: @ 824144D
	.i18n 1420

BattleFrontier_BattleTowerLobby_Text_241486: @ 8241486
	.i18n 1421

BattleFrontier_BattleTowerLobby_Text_2414D4: @ 82414D4
	.i18n 1422

BattleFrontier_BattleArenaLobby_Text_241520: @ 8241520
BattleFrontier_BattleDomeLobby_Text_241520: @ 8241520
BattleFrontier_BattleFactoryLobby_Text_241520: @ 8241520
BattleFrontier_BattlePalaceLobby_Text_241520: @ 8241520
BattleFrontier_BattlePikeLobby_Text_241520: @ 8241520
BattleFrontier_BattlePyramidLobby_Text_241520: @ 8241520
BattleFrontier_BattleTowerLobby_Text_241520: @ 8241520
	.i18n 1423

BattleFrontier_BattleTowerLobby_Text_241540: @ 8241540
	.i18n 1424

BattleFrontier_BattleTowerLobby_Text_241563: @ 8241563
	.i18n 1425

BattleFrontier_BattleTowerLobby_Text_241586: @ 8241586
	.i18n 1426

BattleFrontier_BattleTowerLobby_Text_241693: @ 8241693
	.i18n 1427

BattleFrontier_BattleTowerLobby_Text_241777: @ 8241777
	.i18n 1428

BattleFrontier_BattleTowerLobby_Text_24187E: @ 824187E
	.i18n 1429
