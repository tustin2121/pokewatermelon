@ The scripts there concern pokeblock events in LilyCove City's Contest Lobby 

@ 'PblockX' number of offline opponents
@ 'Ask' talking with a blender machine
@ 'Yes' agreeing to blend
@ 'No' refusing to blend
@ 'KnowHow' asking if the player knows the blending process
@ 'Explain' explaining the blender process
@ 'Start' start blending
@ 'TalkX' talking with a person next to a blender machine
@ 'NoBerries' can't blend cause they have no berries
@ 'FullPokeblock' can't blend cause full pokeblock case
@ 'NoPokeblock' can't blend cause they have no pokeblock case

Text_Pblock1_Ask: @ 8292DEE
	.i18n 5577

Text_Pblock1_Yes: @ 8292E28
	.i18n 5578

Text_Pblock1_No: @ 8292E33
	.i18n 5579

Text_Pblock1_KnowHow: @ 8292E57
	.i18n 5580

Text_Pblock1_Start: @ 8292E78
	.i18n 5581

Text_Pblock1_Explain: @ 8292EA6
	.i18n 5582

Text_Pblock1_NoBerries: @ 8292F77
	.i18n 5583

LilycoveCity_ContestLobby_Text_292FD1: @ 8292FD1
	.i18n 5584

LilycoveCity_ContestLobby_Text_29307D: @ 829307D
	.i18n 5585

Text_Pblock1_FullPokeblock: @ 8293101
	.i18n 5586

Text_Pblock1_NoPokeblock: @ 8293157
	.i18n 5587

LilycoveCity_ContestLobby_Text_2931AA: @ 82931AA
	.i18n 5588

LilycoveCity_ContestLobby_Text_2931C6: @ 82931C6
	.i18n 5589

LilycoveCity_ContestLobby_Text_293201: @ 8293201
	.i18n 5590

LilycoveCity_ContestLobby_Text_293237: @ 8293237
	.i18n 5591

LilycoveCity_ContestLobby_Text_29323D: @ 829323D
	.i18n 5592

LilycoveCity_ContestLobby_Text_29328C: @ 829328C
	.i18n 5593

LilycoveCity_ContestLobby_Text_2932C3: @ 82932C3
	.i18n 5594

LilycoveCity_ContestLobby_Text_2932F1: @ 82932F1
	.i18n 5595

LilycoveCity_ContestLobby_Text_293394: @ 8293394
	.i18n 5596

LilycoveCity_ContestLobby_Text_29343E: @ 829343E
	.i18n 5597

LilycoveCity_ContestLobby_Text_2934A2: @ 82934A2
	.i18n 5598

LilycoveCity_ContestLobby_Text_29350B: @ 829350B
	.i18n 5599

LilycoveCity_ContestLobby_Text_29354E: @ 829354E
	.i18n 5600

LilycoveCity_ContestLobby_Text_293558: @ 8293558
	.i18n 5601

LilycoveCity_ContestLobby_Text_29357E: @ 829357E
	.i18n 5602

LilycoveCity_ContestLobby_Text_2935B1: @ 82935B1
	.i18n 5603

LilycoveCity_ContestLobby_Text_2935E5: @ 82935E5
	.i18n 5604

LilycoveCity_ContestLobby_Text_29367D: @ 829367D
	.i18n 5605

LilycoveCity_ContestLobby_Text_293738: @ 8293738
	.i18n 5606

LilycoveCity_ContestLobby_Text_293792: @ 8293792
	.i18n 5607

LilycoveCity_ContestLobby_Text_2937F9: @ 82937F9
	.i18n 5608

LilycoveCity_ContestLobby_Text_293842: @ 8293842
	.i18n 5609

LilycoveCity_ContestLobby_Text_29388F: @ 829388F
	.i18n 5610

Text_PblockLink_Ask: @ 82938CD
	.i18n 5611

Text_PblockLink_Searching: @ 8293955
	.i18n 5612

Text_PblockLink_1Arrived: @ 8293986
	.i18n 5613

Text_PblockLink_2Arrived: @ 8293992
	.i18n 5614

Text_PblockLink_3Arrived: @ 82939A5
	.i18n 5615

Text_PblockLink_NoBerries: @ 82939BD
	.i18n 5616

Text_PblockLink_FullPokeblock: @ 82939F3
	.i18n 5617

Text_PblockLink_NoPokeblock: @ 8293A2D
	.i18n 5618

Text_Pblock1_Talk_0: @ 8293A6B
	.i18n 5619

Text_Pblock1_Talk_1: @ 8293AA5
	.i18n 5620

LilycoveCity_ContestLobby_Text_293AF0: @ 8293AF0
	.i18n 5621

LilycoveCity_ContestLobby_Text_293B76: @ 8293B76
	.i18n 5622

LilycoveCity_ContestLobby_Text_293BB4: @ 8293BB4
	.i18n 5623

EventScript_Pblock1_Ask:: @ 8293C3E
	lockall
	goto_if_unset FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_ONLOOKERS, LilycoveCity_ContestLobby_EventScript_293EFB
	setvar VAR_0x8009, 1
	applymovement 16, LilycoveCity_ContestLobby_Movement_294053
	waitmovement 0
	msgbox Text_Pblock1_Ask, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Pblock1_Yes
	goto EventScript_Pblock1_No
	end

EventScript_Pblock1_No: @ 8293C70
	msgbox Text_Pblock1_No, MSGBOX_DEFAULT
	releaseall
	end

EventScript_Pblock1_NoBerries: @ 8293C7A
	msgbox Text_Pblock1_NoBerries, MSGBOX_DEFAULT
	dotimebasedevents
	goto_if_set FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY, LilycoveCity_ContestLobby_EventScript_293C92
	goto LilycoveCity_ContestLobby_EventScript_293C9C
	end

LilycoveCity_ContestLobby_EventScript_293C92: @ 8293C92
	msgbox LilycoveCity_ContestLobby_Text_29307D, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293C9C: @ 8293C9C
	msgbox LilycoveCity_ContestLobby_Text_292FD1, MSGBOX_DEFAULT
	giveitem_std ITEM_PECHA_BERRY
	setflag FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY
	goto EventScript_Pblock1_KnowHow
	end

EventScript_Pblock1_KnowHow: @ 8293CB9
	msgbox Text_Pblock1_KnowHow, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_Pblock1_Start
	goto EventScript_Pblock1_Explain
	end

EventScript_Pblock1_Start: @ 8293CD2
	msgbox Text_Pblock1_Start, MSGBOX_DEFAULT
	goto EventScript_StartBlending
	end

EventScript_Pblock1_Explain: @ 8293CE0
	msgbox Text_Pblock1_Explain, MSGBOX_DEFAULT
	goto EventScript_Pblock1_Start
	end

EventScript_Pblock1_Yes: @ 8293CEE
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Pblock1_NoPokeblock
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_eq EventScript_Pblock1_FullPokeblock
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 0
	goto_if_eq EventScript_Pblock1_NoBerries
	msgbox Text_Pblock1_Yes, MSGBOX_DEFAULT
	goto EventScript_Pblock1_KnowHow
	end

EventScript_StartBlending: @ 8293D2C
	copyvar VAR_0x8004, VAR_0x8009
	fadescreen 1
	special DoBerryBlending
	waitstate
	releaseall
	end

EventScript_Pblock1_FullPokeblock: @ 8293D39
	msgbox Text_Pblock1_FullPokeblock, MSGBOX_DEFAULT
	releaseall
	end

EventScript_Pblock1_NoPokeblock: @ 8293D43
	msgbox Text_Pblock1_NoPokeblock, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293D4D:: @ 8293D4D
	lockall
	setvar VAR_0x8009, 2
	applymovement 10, Common_Movement_FaceOriginalDirection
	applymovement 3, LilycoveCity_ContestLobby_Movement_294053
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_293201, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293DC6
	goto LilycoveCity_ContestLobby_EventScript_293D7D
	end

LilycoveCity_ContestLobby_EventScript_293D7D: @ 8293D7D
	msgbox LilycoveCity_ContestLobby_Text_29323D, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293D87: @ 8293D87
	msgbox LilycoveCity_ContestLobby_Text_293394, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_293D91: @ 8293D91
	msgbox LilycoveCity_ContestLobby_Text_29328C, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293DAA
	goto LilycoveCity_ContestLobby_EventScript_293DB8
	end

LilycoveCity_ContestLobby_EventScript_293DAA: @ 8293DAA
	msgbox LilycoveCity_ContestLobby_Text_2932C3, MSGBOX_DEFAULT
	goto EventScript_StartBlending
	end

LilycoveCity_ContestLobby_EventScript_293DB8: @ 8293DB8
	msgbox LilycoveCity_ContestLobby_Text_2932F1, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_293DAA
	end

LilycoveCity_ContestLobby_EventScript_293DC6: @ 8293DC6
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293D87
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293E14
	msgbox LilycoveCity_ContestLobby_Text_293237, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_ne LilycoveCity_ContestLobby_EventScript_293D91
	compare VAR_RESULT, 65535
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293E0A
	end

LilycoveCity_ContestLobby_EventScript_293E0A: @ 8293E0A
	msgbox LilycoveCity_ContestLobby_Text_29343E, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293E14: @ 8293E14
	msgbox LilycoveCity_ContestLobby_Text_2934A2, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293E1E:: @ 8293E1E
	lockall
	setvar VAR_0x8008, 15
	setvar VAR_0x8009, 3
	applymovement 9, Common_Movement_FaceOriginalDirection
	applymovement 17, Common_Movement_FaceOriginalDirection
	applymovement VAR_0x8008, LilycoveCity_ContestLobby_Movement_294053
	waitmovement 0
	msgbox LilycoveCity_ContestLobby_Text_293842, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293EA3
	goto LilycoveCity_ContestLobby_EventScript_293E5A
	end

LilycoveCity_ContestLobby_EventScript_293E5A: @ 8293E5A
	msgbox LilycoveCity_ContestLobby_Text_293558, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293E64: @ 8293E64
	msgbox LilycoveCity_ContestLobby_Text_29367D, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_293E6E: @ 8293E6E
	msgbox LilycoveCity_ContestLobby_Text_29357E, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293E87
	goto LilycoveCity_ContestLobby_EventScript_293E95
	end

LilycoveCity_ContestLobby_EventScript_293E87: @ 8293E87
	msgbox LilycoveCity_ContestLobby_Text_2935B1, MSGBOX_DEFAULT
	goto EventScript_StartBlending
	end

LilycoveCity_ContestLobby_EventScript_293E95: @ 8293E95
	msgbox LilycoveCity_ContestLobby_Text_2935E5, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_293E87
	end

LilycoveCity_ContestLobby_EventScript_293EA3: @ 8293EA3
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293E64
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293EF1
	msgbox LilycoveCity_ContestLobby_Text_29354E, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_ne LilycoveCity_ContestLobby_EventScript_293E6E
	compare VAR_RESULT, 65535
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293EE7
	end

LilycoveCity_ContestLobby_EventScript_293EE7: @ 8293EE7
	msgbox LilycoveCity_ContestLobby_Text_293738, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293EF1: @ 8293EF1
	msgbox LilycoveCity_ContestLobby_Text_293792, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293EFB: @ 8293EFB
	lockall
	setvar VAR_0x8009, 1
	msgbox LilycoveCity_ContestLobby_Text_2C42F4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293F28
	msgbox LilycoveCity_ContestLobby_Text_2C4332, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293F1E: @ 8293F1E
	msgbox LilycoveCity_ContestLobby_Text_2C439D, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293F28: @ 8293F28
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293F8E
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293F1E
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_ne LilycoveCity_ContestLobby_EventScript_293F64
	compare VAR_RESULT, 65535
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293F98
	end

LilycoveCity_ContestLobby_EventScript_293F64: @ 8293F64
	msgbox LilycoveCity_ContestLobby_Text_2C43FA, MSGBOX_YESNO
	compare VAR_RESULT, 0
	call_if_eq LilycoveCity_ContestLobby_EventScript_293F85
	msgbox LilycoveCity_ContestLobby_Text_2C451B, MSGBOX_DEFAULT
	goto EventScript_StartBlending
	end

LilycoveCity_ContestLobby_EventScript_293F85: @ 8293F85
	msgbox LilycoveCity_ContestLobby_Text_2C444C, MSGBOX_DEFAULT
	return

LilycoveCity_ContestLobby_EventScript_293F8E: @ 8293F8E
	msgbox LilycoveCity_ContestLobby_Text_2C4573, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293F98: @ 8293F98
	msgbox LilycoveCity_ContestLobby_Text_2C45E8, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_293FA2:: @ 8293FA2
	msgbox LilycoveCity_ContestLobby_Text_2937F9, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_293FAB:: @ 8293FAB
	msgbox LilycoveCity_ContestLobby_Text_293842, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_293FB4:: @ 8293FB4
	msgbox LilycoveCity_ContestLobby_Text_29388F, MSGBOX_NPC
	end

LilycoveCity_ContestLobby_EventScript_293FBD:: @ 8293FBD
	setvar VAR_0x8008, 15
	goto LilycoveCity_ContestLobby_EventScript_293FC8
	end

LilycoveCity_ContestLobby_EventScript_293FC8: @ 8293FC8
	lock
	faceplayer
	msgbox Text_Pblock1_Talk_0, MSGBOX_DEFAULT
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293FEE
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_293FF8
	end

LilycoveCity_ContestLobby_EventScript_293FEE: @ 8293FEE
	msgbox Text_Pblock1_Talk_1, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_293FF8: @ 8293FF8
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_294028
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_eq LilycoveCity_ContestLobby_EventScript_294028
	dotimebasedevents
	goto_if_set FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY, LilycoveCity_ContestLobby_EventScript_294028
	goto LilycoveCity_ContestLobby_EventScript_294032
	end

LilycoveCity_ContestLobby_EventScript_294028: @ 8294028
	msgbox LilycoveCity_ContestLobby_Text_293BB4, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_294032: @ 8294032
	msgbox LilycoveCity_ContestLobby_Text_293AF0, MSGBOX_DEFAULT
	giveitem_std ITEM_PECHA_BERRY
	setflag FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY
	msgbox LilycoveCity_ContestLobby_Text_293B76, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_Movement_294053: @ 8294053
	walk_in_place_fastest_right
	step_end

EventScript_PblockLink:: @ 8294055
	lockall
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 0
	goto_if_eq EventScript_PblocLink_NoBerries
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_PblocLink_NoPokeblock
	specialvar VAR_RESULT, GetFirstFreePokeblockSlot
	compare VAR_RESULT, 65535
	goto_if_ne EventScript_PblocLink_Ask
	compare VAR_RESULT, 65535
	goto_if_eq EventScript_PblocLink_FullPokeblock
	end

EventScript_PblocLink_Ask: @ 8294092
	msgbox Text_PblockLink_Ask, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_PblocLink_TryConnect
	compare VAR_RESULT, 0
	goto_if_eq EventScript_PblocLink_End
	end

EventScript_PblocLink_NoBerries: @ 82940B1
	msgbox Text_PblockLink_NoBerries, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_TryConnect: @ 82940BB
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq EventScript_PblocLink_End
	specialvar VAR_RESULT, IsWirelessAdapterConnected
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_2941ED
	message Text_PblockLink_Searching
	waitmessage
	special sub_80B2FD8
	waitstate
	compare VAR_RESULT, 1
	goto_if_eq EventScript_PblocLink_SpawnPartners
	compare VAR_RESULT, 2
	goto_if_eq EventScript_PblocLink_SomeoneNotReady
	compare VAR_RESULT, 3
	goto_if_eq EventScript_PblocLink_DifferentSelections
	compare VAR_RESULT, 5
	goto_if_eq EventScript_PblocLink_CloseLink
	compare VAR_RESULT, 6
	goto_if_eq EventScript_PblocLink_LinkError
	end

EventScript_PblocLink_1Arrived: @ 829411D
	msgbox Text_PblockLink_1Arrived, MSGBOX_DEFAULT
	goto EventScript_PblocLink_StartLinkBlending
	end

EventScript_PblocLink_2Arrived: @ 829412B
	msgbox Text_PblockLink_2Arrived, MSGBOX_DEFAULT
	goto EventScript_PblocLink_StartLinkBlending
	end

EventScript_PblocLink_3Arrived: @ 8294139
	msgbox Text_PblockLink_3Arrived, MSGBOX_DEFAULT
	goto EventScript_PblocLink_StartLinkBlending
	end

EventScript_PblocLink_StartLinkBlending: @ 8294147
	setvar VAR_0x8004, 0
	fadescreen 1
	removeobject 240
	removeobject 239
	removeobject 238
	removeobject 237
	special DoBerryBlending
	waitstate
	releaseall
	end

EventScript_PblocLink_End: @ 8294160
	releaseall
	end

EventScript_PblocLink_FullPokeblock: @ 8294162
	msgbox Text_PblockLink_FullPokeblock, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_NoPokeblock: @ 829416C
	msgbox Text_PblockLink_NoPokeblock, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_SomeoneNotReady: @ 8294176
	special CloseLink
	msgbox LilycoveCity_ContestLobby_Text_2781C7, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_DifferentSelections: @ 8294183
	special CloseLink
	msgbox LilycoveCity_ContestLobby_Text_278255, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_CloseLink: @ 8294190
	special CloseLink
	msgbox gUnknown_08272D9C, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_LinkError: @ 829419D
	special CloseLink
	msgbox LilycoveCity_ContestLobby_Text_27821C, MSGBOX_DEFAULT
	releaseall
	end

EventScript_PblocLink_SpawnPartners: @ 82941AA
	fadescreen 1
	specialvar VAR_RESULT, GetLinkPartnerNames
	copyvar VAR_0x8008, VAR_RESULT
	copyvar VAR_0x8004, VAR_0x8008
	special SpawnLinkPartnerEventObject
	goto EventScript_PblocLink_Arrived
	end

EventScript_PblocLink_Arrived: @ 82941C4
	fadescreen 0
	switch VAR_0x8008
	case 2, EventScript_PblocLink_1Arrived
	case 3, EventScript_PblocLink_2Arrived
	case 4, EventScript_PblocLink_3Arrived
	end

LilycoveCity_ContestLobby_EventScript_2941ED: @ 82941ED
	setvar VAR_0x8004, 13
	goto EventScript_PblocLink_DecideLeader
	end

EventScript_PblocLink_DecideLeader: @ 82941F8
	message Text_DecideLinkLeader
	waitmessage
	multichoice 16, 6, 81, 0
	switch VAR_RESULT
	case 0, EventScript_PblocLink_TryJoinGroup
	case 1, EventScript_PblocLink_TryBecomeLeader
	case 2, EventScript_PblocLink_CloseLink
	case 127, EventScript_PblocLink_CloseLink
	end

EventScript_PblocLink_TryBecomeLeader: @ 8294235
	call EventScript_PblocLink_BecomeLeader
	compare VAR_RESULT, 1
	goto_if_eq EventScript_PblocLink_SpawnPartners_
	compare VAR_RESULT, 5
	goto_if_eq EventScript_PblocLink_DecideLeader
	compare VAR_RESULT, 8
	goto_if_eq EventScript_PblocLink_TryBecomeLeader
	release
	end

EventScript_PblocLink_TryJoinGroup: @ 829425D
	call EventScript_PblocLink_JoinGroup
	compare VAR_RESULT, 1
	goto_if_eq EventScript_PblocLink_SpawnPartners_
	compare VAR_RESULT, 5
	goto_if_eq EventScript_PblocLink_DecideLeader
	compare VAR_RESULT, 8
	goto_if_eq EventScript_PblocLink_TryJoinGroup
	release
	end

EventScript_PblocLink_BecomeLeader: @ 8294285
	special BerryBlenderLinkBecomeLeader
	waitstate
	return

EventScript_PblocLink_JoinGroup: @ 829428A
	special BerryBlenderLinkJoinGroup
	waitstate
	return

EventScript_PblocLink_SpawnPartners_: @ 829428F
	goto EventScript_PblocLink_SpawnPartners
	end
