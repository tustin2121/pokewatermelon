LilycoveCity_ContestLobby_EventScript_279CC5:: @ 8279CC5
	lock
	faceplayer
	compare VAR_CONTEST_PRIZE_PICKUP, 0
	goto_if_ne LilycoveCity_ContestLobby_EventScript_279D13
	call_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_279CEA
	call_if_unset FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_279CF3
	goto LilycoveCity_ContestLobby_EventScript_279D5A
	end

LilycoveCity_ContestLobby_EventScript_279CEA:: @ 8279CEA
	msgbox LilycoveCity_ContestLobby_Text_27AEA8, MSGBOX_DEFAULT
	return

LilycoveCity_ContestLobby_EventScript_279CF3:: @ 8279CF3
	msgbox LilycoveCity_ContestLobby_Text_27ADA7, MSGBOX_DEFAULT
	giveitem_std ITEM_POKEBLOCK_CASE
	setflag FLAG_RECEIVED_POKEBLOCK_CASE
	msgbox LilycoveCity_ContestLobby_Text_27AE47, MSGBOX_DEFAULT
	return

LilycoveCity_ContestLobby_EventScript_279D13:: @ 8279D13
	msgbox LilycoveCity_ContestLobby_Text_27B67B, MSGBOX_DEFAULT
	switch VAR_CONTEST_PRIZE_PICKUP
	case 4, LilycoveCity_ContestLobby_EventScript_279D2C
	end

LilycoveCity_ContestLobby_EventScript_279D2C:: @ 8279D2C
	giveitem_std ITEM_LUXURY_BALL
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279D4B
	setvar VAR_CONTEST_PRIZE_PICKUP, 0
	closemessage
	release
	end

LilycoveCity_ContestLobby_EventScript_279D4B:: @ 8279D4B
	call Common_EventScript_BagIsFull
	msgbox LilycoveCity_ContestLobby_Text_27B6E7, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_279D5A:: @ 8279D5A
	message LilycoveCity_ContestLobby_Text_27AF28
	waitmessage
	multichoice 0, 0, 2, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_279E62
	case 1, LilycoveCity_ContestLobby_EventScript_279D97
	case 2, LilycoveCity_ContestLobby_EventScript_279E09
	case 127, LilycoveCity_ContestLobby_EventScript_279E09
	end

LilycoveCity_ContestLobby_EventScript_279D97:: @ 8279D97
	message LilycoveCity_ContestLobby_Text_27AF5E
	waitmessage
	multichoice 0, 0, 3, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_279DDF
	case 1, LilycoveCity_ContestLobby_EventScript_279DED
	case 2, LilycoveCity_ContestLobby_EventScript_279DFB
	case 3, LilycoveCity_ContestLobby_EventScript_279D5A
	case 127, LilycoveCity_ContestLobby_EventScript_279D5A
	end

LilycoveCity_ContestLobby_EventScript_279DDF:: @ 8279DDF
	msgbox LilycoveCity_ContestLobby_Text_27AF7A, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_279D97
	end

LilycoveCity_ContestLobby_EventScript_279DED:: @ 8279DED
	msgbox LilycoveCity_ContestLobby_Text_27B17D, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_279D97
	end

LilycoveCity_ContestLobby_EventScript_279DFB:: @ 8279DFB
	msgbox LilycoveCity_ContestLobby_Text_27B221, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_279D97
	end

LilycoveCity_ContestLobby_EventScript_279E09:: @ 8279E09
	msgbox LilycoveCity_ContestLobby_Text_27BD4F, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_279E13:: @ 8279E13
	msgbox LilycoveCity_ContestLobby_Text_27B44A, MSGBOX_DEFAULT
	choosecontestmon
	compare VAR_0x8004, 255
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279E09
	special sub_80F7F30
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279F12
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279F87
	compare VAR_RESULT, 2
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279F45
	compare VAR_RESULT, 3
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279F69
	compare VAR_RESULT, 4
	goto_if_eq LilycoveCity_ContestLobby_EventScript_279F78
	end

LilycoveCity_ContestLobby_EventScript_279E62:: @ 8279E62
	message LilycoveCity_ContestLobby_Text_27B3FF
	waitmessage
	multichoice 0, 0, 82, 0
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_279EB5
	case 1, LilycoveCity_ContestLobby_EventScript_279EC0
	case 2, LilycoveCity_ContestLobby_EventScript_279ECB
	case 3, LilycoveCity_ContestLobby_EventScript_279ED6
	case 4, LilycoveCity_ContestLobby_EventScript_279E09
	case 127, LilycoveCity_ContestLobby_EventScript_279E09
	end

LilycoveCity_ContestLobby_EventScript_279EB5:: @ 8279EB5
	setvar VAR_CONTEST_RANK, 0
	goto LilycoveCity_ContestLobby_EventScript_279EE1
	end

LilycoveCity_ContestLobby_EventScript_279EC0:: @ 8279EC0
	setvar VAR_CONTEST_RANK, 1
	goto LilycoveCity_ContestLobby_EventScript_279EE1
	end

LilycoveCity_ContestLobby_EventScript_279ECB:: @ 8279ECB
	setvar VAR_CONTEST_RANK, 2
	goto LilycoveCity_ContestLobby_EventScript_279EE1
	end

LilycoveCity_ContestLobby_EventScript_279ED6:: @ 8279ED6
	setvar VAR_CONTEST_RANK, 3
	goto LilycoveCity_ContestLobby_EventScript_279EE1
	end

LilycoveCity_ContestLobby_EventScript_279EE1:: @ 8279EE1
	message LilycoveCity_ContestLobby_Text_27B423
	waitmessage
	multichoice 0, 0, 4, 0
	switch VAR_RESULT
	case 5, LilycoveCity_ContestLobby_EventScript_279E09
	case 127, LilycoveCity_ContestLobby_EventScript_279E09
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
	goto LilycoveCity_ContestLobby_EventScript_279E13
	end

LilycoveCity_ContestLobby_EventScript_279F12:: @ 8279F12
	msgbox LilycoveCity_ContestLobby_Text_27B471, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_279E13
	release
	end

LilycoveCity_ContestLobby_EventScript_279F21:: @ 8279F21
	msgbox LilycoveCity_ContestLobby_Text_27B5C4, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_279E13
	case 1, LilycoveCity_ContestLobby_EventScript_279F87
	end

LilycoveCity_ContestLobby_EventScript_279F45:: @ 8279F45
	msgbox LilycoveCity_ContestLobby_Text_27B547, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, LilycoveCity_ContestLobby_EventScript_279E13
	case 1, LilycoveCity_ContestLobby_EventScript_279F87
	end

LilycoveCity_ContestLobby_EventScript_279F69:: @ 8279F69
	msgbox LilycoveCity_ContestLobby_Text_27B4C4, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_279E13
	release
	end

LilycoveCity_ContestLobby_EventScript_279F78:: @ 8279F78
	msgbox LilycoveCity_ContestLobby_Text_27B501, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_279E13
	release
	end

LilycoveCity_ContestLobby_EventScript_279F87:: @ 8279F87
	msgbox LilycoveCity_ContestLobby_Text_27B5E2, MSGBOX_DEFAULT
	closemessage
	releaseall
	setvar VAR_LINK_CONTEST_ROOM_STATE, 1
	return

LinkContestRoom1_EventScript_279F97:: @ 8279F97
	special sub_80F90DC
	setvar VAR_0x8006, 0
	lockall
	applymovement 14, LinkContestRoom1_Movement_27AD43
	waitmovement 0
	applymovement 1, LinkContestRoom1_Movement_27AD09
	waitmovement 0
	releaseall
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_279FF2
	call LinkContestRoom1_EventScript_27A03C
	call LinkContestRoom1_EventScript_27A097
	call LinkContestRoom1_EventScript_27A0F5
	call LinkContestRoom1_EventScript_27A801
	call LinkContestRoom1_EventScript_27A8A5
	call LinkContestRoom1_EventScript_27A987
	call LinkContestRoom1_EventScript_27A9D4
	call LinkContestRoom1_EventScript_27AA1B
	call LinkContestRoom1_EventScript_27AB36
	setvar VAR_LINK_CONTEST_ROOM_STATE, 2
	return

LinkContestRoom1_EventScript_279FF2:: @ 8279FF2
	switch VAR_CONTEST_RANK
	case 0, LinkContestRoom1_EventScript_27A024
	case 1, LinkContestRoom1_EventScript_27A02A
	case 2, LinkContestRoom1_EventScript_27A030
	case 3, LinkContestRoom1_EventScript_27A036
	return

LinkContestRoom1_EventScript_27A024:: @ 827A024
	setvar VAR_0x8009, 5
	return

LinkContestRoom1_EventScript_27A02A:: @ 827A02A
	setvar VAR_0x8009, 6
	return

LinkContestRoom1_EventScript_27A030:: @ 827A030
	setvar VAR_0x8009, 7
	return

LinkContestRoom1_EventScript_27A036:: @ 827A036
	setvar VAR_0x8009, 8
	return

LinkContestRoom1_EventScript_27A03C:: @ 827A03C
	switch VAR_CONTEST_CATEGORY
	case 0, LinkContestRoom1_EventScript_27A079
	case 1, LinkContestRoom1_EventScript_27A07F
	case 2, LinkContestRoom1_EventScript_27A085
	case 3, LinkContestRoom1_EventScript_27A08B
	case 4, LinkContestRoom1_EventScript_27A091
	return

LinkContestRoom1_EventScript_27A079:: @ 827A079
	setvar VAR_0x8008, 0
	return

LinkContestRoom1_EventScript_27A07F:: @ 827A07F
	setvar VAR_0x8008, 1
	return

LinkContestRoom1_EventScript_27A085:: @ 827A085
	setvar VAR_0x8008, 2
	return

LinkContestRoom1_EventScript_27A08B:: @ 827A08B
	setvar VAR_0x8008, 3
	return

LinkContestRoom1_EventScript_27A091:: @ 827A091
	setvar VAR_0x8008, 4
	return

LinkContestRoom1_EventScript_27A097:: @ 827A097
	buffercontesttypestring 1, 32776
	bufferstdstring 2, VAR_0x8009
	call LinkContestRoom1_EventScript_27A0B1
	lockall
	applymovement 1, LinkContestRoom1_Movement_27AD0B
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27A0B1:: @ 827A0B1
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A0C7
	lockall
	msgbox LinkContestRoom1_Text_27B711, MSGBOX_DEFAULT
	releaseall
	return

LinkContestRoom1_EventScript_27A0C7:: @ 827A0C7
	specialvar VAR_RESULT, sub_80F9160
	compare VAR_RESULT, 1
	goto_if_eq LinkContestRoom1_EventScript_27A0DE
	messageautoscroll LinkContestRoom1_Text_27B78F
	waitmessage
	return

LinkContestRoom1_EventScript_27A0DE:: @ 827A0DE
	messageautoscroll LinkContestRoom1_Text_27C929
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27C972
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	return

LinkContestRoom1_EventScript_27A0F5:: @ 827A0F5
	call LinkContestRoom1_EventScript_27A149
	call LinkContestRoom1_EventScript_27A1D2
	call LinkContestRoom1_EventScript_27A34F
	call LinkContestRoom1_EventScript_27A2D5
	call LinkContestRoom1_EventScript_27A77A
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_27A133
	addvar VAR_0x8006, 1
	compare VAR_0x8006, 4
	goto_if_ne LinkContestRoom1_EventScript_27A0F5
	call LinkContestRoom1_EventScript_27A230
	setvar VAR_TEMP_1, 6
	return

LinkContestRoom1_EventScript_27A133:: @ 827A133
	specialvar VAR_RESULT, sub_80F9160
	compare VAR_RESULT, 1
	goto_if_eq LinkContestRoom1_EventScript_27A144
	return

LinkContestRoom1_EventScript_27A144:: @ 827A144
	special sub_80F905C
	waitstate
	return

LinkContestRoom1_EventScript_27A149:: @ 827A149
	compare VAR_0x8006, 0
	goto_if_eq LinkContestRoom1_EventScript_27A176
	compare VAR_0x8006, 1
	goto_if_eq LinkContestRoom1_EventScript_27A18D
	compare VAR_0x8006, 2
	goto_if_eq LinkContestRoom1_EventScript_27A1A4
	compare VAR_0x8006, 3
	goto_if_eq LinkContestRoom1_EventScript_27A1BB
	return

LinkContestRoom1_EventScript_27A176:: @ 827A176
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement 3, LinkContestRoom1_Movement_27AD52
	waitmovement 0
	releaseall
	setvar VAR_0x800B, 3
	return

LinkContestRoom1_EventScript_27A18D:: @ 827A18D
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement 4, LinkContestRoom1_Movement_27AD5E
	waitmovement 0
	releaseall
	setvar VAR_0x800B, 4
	return

LinkContestRoom1_EventScript_27A1A4:: @ 827A1A4
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement 5, LinkContestRoom1_Movement_27AD66
	waitmovement 0
	releaseall
	setvar VAR_0x800B, 5
	return

LinkContestRoom1_EventScript_27A1BB:: @ 827A1BB
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement 14, LinkContestRoom1_Movement_27AD6E
	waitmovement 0
	releaseall
	setvar VAR_0x800B, 14
	return

LinkContestRoom1_EventScript_27A1D2:: @ 827A1D2
	special sub_80F8850
	addvar VAR_0x8006, 1
	buffernumberstring 1, VAR_0x8006
	lockall
	applymovement VAR_0x800B, LinkContestRoom1_Movement_27AD20
	waitmovement 0
	releaseall
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_27AD80
	addobject 13
	playse SE_DANSA
	lockall
	applymovement VAR_0x800B, LinkContestRoom1_Movement_27AD20
	waitmovement 0
	releaseall
	addvar VAR_0x8006, 65535
	playse SE_BOWA2
	special ShowContestEntryMonPic
	call LinkContestRoom1_EventScript_27A217
	return

LinkContestRoom1_EventScript_27A217:: @ 827A217
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A229
	message LinkContestRoom1_Text_27B815
	waitmessage
	return

LinkContestRoom1_EventScript_27A229:: @ 827A229
	messageautoscroll LinkContestRoom1_Text_27B815
	waitmessage
	return

LinkContestRoom1_EventScript_27A230:: @ 827A230
	call LinkContestRoom1_EventScript_27A26C
	call LinkContestRoom1_EventScript_27A2B9
	playse SE_W227B
	waitmessage
	call LinkContestRoom1_EventScript_27AA1B
	applymovement 1, LinkContestRoom1_Movement_27AD23
	waitmovement 0
	applymovement 2, LinkContestRoom1_Movement_27AD25
	waitmovement 0
	delay 20
	applymovement 1, LinkContestRoom1_Movement_27AD13
	applymovement 2, LinkContestRoom1_Movement_27AD13
	waitmovement 0
	return

LinkContestRoom1_EventScript_27A26C:: @ 827A26C
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A280
	msgbox LinkContestRoom1_Text_27B830, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27A280:: @ 827A280
	specialvar VAR_RESULT, sub_80F9160
	compare VAR_RESULT, 1
	goto_if_eq LinkContestRoom1_EventScript_27A297
	messageautoscroll LinkContestRoom1_Text_27B830
	waitmessage
	return

LinkContestRoom1_EventScript_27A297:: @ 827A297
	messageautoscroll LinkContestRoom1_Text_27C9AF
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27CA04
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27CA42
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	return

LinkContestRoom1_EventScript_27A2B9:: @ 827A2B9
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A2CA
	message LinkContestRoom1_Text_27B8F2
	return

LinkContestRoom1_EventScript_27A2CA:: @ 827A2CA
	messageautoscroll LinkContestRoom1_Text_27B8F2
	call LinkContestRoom1_EventScript_27A133
	return

LinkContestRoom1_EventScript_27A2D5:: @ 827A2D5
	call LinkContestRoom1_EventScript_27A133
	applymovement 1, LinkContestRoom1_Movement_27AD33
	waitmovement 0
	playse SE_W227B
	call LinkContestRoom1_EventScript_27AA6F
	applymovement 9, LinkContestRoom1_Movement_27AD3B
	applymovement 12, LinkContestRoom1_Movement_27AD3F
	applymovement 7, LinkContestRoom1_Movement_27AD3B
	waitmovement 0
	applymovement 1, LinkContestRoom1_Movement_27AD3B
	waitmovement 0
	applymovement 10, LinkContestRoom1_Movement_27AD33
	applymovement 11, LinkContestRoom1_Movement_27AD3F
	applymovement 6, LinkContestRoom1_Movement_27AD37
	applymovement 8, LinkContestRoom1_Movement_27AD33
	waitmovement 0
	applymovement 1, LinkContestRoom1_Movement_27AD45
	waitmovement 0
	applymovement 1, LinkContestRoom1_Movement_27AD4E
	applymovement 2, LinkContestRoom1_Movement_27AD49
	waitmovement 0
	releaseall
	call LinkContestRoom1_EventScript_27A133
	return

LinkContestRoom1_EventScript_27A34F:: @ 827A34F
	special sub_80F82FC
	compare VAR_CONTEST_LOCATION, 1
	call_if_eq LinkContestRoom1_EventScript_27A454
	compare VAR_CONTEST_LOCATION, 2
	call_if_eq LinkContestRoom1_EventScript_27A4B2
	compare VAR_CONTEST_LOCATION, 3
	call_if_eq LinkContestRoom1_EventScript_27A510
	compare VAR_CONTEST_LOCATION, 4
	call_if_eq LinkContestRoom1_EventScript_27A56E
	compare VAR_CONTEST_LOCATION, 5
	call_if_eq LinkContestRoom1_EventScript_27A5CC
	setvar VAR_TEMP_1, 9
	setvar VAR_TEMP_2, 9
	setvar VAR_TEMP_3, 9
	setvar VAR_TEMP_4, 9
	setvar VAR_TEMP_5, 9
	setvar VAR_TEMP_6, 9
	setvar VAR_TEMP_7, 9
	setvar VAR_TEMP_8, 9
	compare VAR_TEMP_0, 0
	call_if_gt LinkContestRoom1_EventScript_27A3E5
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_4, 0
	setvar VAR_TEMP_5, 0
	setvar VAR_TEMP_6, 0
	setvar VAR_TEMP_7, 0
	setvar VAR_TEMP_8, 0
	return

LinkContestRoom1_EventScript_27A3E5:: @ 827A3E5
	setvar VAR_RESULT, 8
	special ScriptRandom
	compare VAR_RESULT, 0
	call_if_eq LinkContestRoom1_EventScript_27A65A
	compare VAR_RESULT, 1
	call_if_eq LinkContestRoom1_EventScript_27A67E
	compare VAR_RESULT, 2
	call_if_eq LinkContestRoom1_EventScript_27A6A2
	compare VAR_RESULT, 3
	call_if_eq LinkContestRoom1_EventScript_27A6C6
	compare VAR_RESULT, 4
	call_if_eq LinkContestRoom1_EventScript_27A6EA
	compare VAR_RESULT, 5
	call_if_eq LinkContestRoom1_EventScript_27A70E
	compare VAR_RESULT, 6
	call_if_eq LinkContestRoom1_EventScript_27A732
	compare VAR_RESULT, 7
	call_if_eq LinkContestRoom1_EventScript_27A756
	compare VAR_TEMP_0, 0
	goto_if_gt LinkContestRoom1_EventScript_27A3E5
	waitmovement 0
	return

LinkContestRoom1_EventScript_27A454:: @ 827A454
	compare VAR_0x8004, 80
	goto_if_gt LinkContestRoom1_EventScript_27A654
	compare VAR_0x8004, 70
	goto_if_gt LinkContestRoom1_EventScript_27A64E
	compare VAR_0x8004, 60
	goto_if_gt LinkContestRoom1_EventScript_27A648
	compare VAR_0x8004, 50
	goto_if_gt LinkContestRoom1_EventScript_27A642
	compare VAR_0x8004, 40
	goto_if_gt LinkContestRoom1_EventScript_27A63C
	compare VAR_0x8004, 30
	goto_if_gt LinkContestRoom1_EventScript_27A636
	compare VAR_0x8004, 20
	goto_if_gt LinkContestRoom1_EventScript_27A630
	compare VAR_0x8004, 10
	goto_if_gt LinkContestRoom1_EventScript_27A62A
	setvar VAR_TEMP_0, 0
	return

LinkContestRoom1_EventScript_27A4B2:: @ 827A4B2
	compare VAR_0x8004, 230
	goto_if_gt LinkContestRoom1_EventScript_27A654
	compare VAR_0x8004, 210
	goto_if_gt LinkContestRoom1_EventScript_27A64E
	compare VAR_0x8004, 190
	goto_if_gt LinkContestRoom1_EventScript_27A648
	compare VAR_0x8004, 170
	goto_if_gt LinkContestRoom1_EventScript_27A642
	compare VAR_0x8004, 150
	goto_if_gt LinkContestRoom1_EventScript_27A63C
	compare VAR_0x8004, 130
	goto_if_gt LinkContestRoom1_EventScript_27A636
	compare VAR_0x8004, 110
	goto_if_gt LinkContestRoom1_EventScript_27A630
	compare VAR_0x8004, 90
	goto_if_gt LinkContestRoom1_EventScript_27A62A
	setvar VAR_TEMP_0, 0
	return

LinkContestRoom1_EventScript_27A510:: @ 827A510
	compare VAR_0x8004, 380
	goto_if_gt LinkContestRoom1_EventScript_27A654
	compare VAR_0x8004, 350
	goto_if_gt LinkContestRoom1_EventScript_27A64E
	compare VAR_0x8004, 320
	goto_if_gt LinkContestRoom1_EventScript_27A648
	compare VAR_0x8004, 290
	goto_if_gt LinkContestRoom1_EventScript_27A642
	compare VAR_0x8004, 260
	goto_if_gt LinkContestRoom1_EventScript_27A63C
	compare VAR_0x8004, 230
	goto_if_gt LinkContestRoom1_EventScript_27A636
	compare VAR_0x8004, 200
	goto_if_gt LinkContestRoom1_EventScript_27A630
	compare VAR_0x8004, 170
	goto_if_gt LinkContestRoom1_EventScript_27A62A
	setvar VAR_TEMP_0, 0
	return

LinkContestRoom1_EventScript_27A56E:: @ 827A56E
	compare VAR_0x8004, 600
	goto_if_gt LinkContestRoom1_EventScript_27A654
	compare VAR_0x8004, 560
	goto_if_gt LinkContestRoom1_EventScript_27A64E
	compare VAR_0x8004, 520
	goto_if_gt LinkContestRoom1_EventScript_27A648
	compare VAR_0x8004, 480
	goto_if_gt LinkContestRoom1_EventScript_27A642
	compare VAR_0x8004, 440
	goto_if_gt LinkContestRoom1_EventScript_27A63C
	compare VAR_0x8004, 400
	goto_if_gt LinkContestRoom1_EventScript_27A636
	compare VAR_0x8004, 360
	goto_if_gt LinkContestRoom1_EventScript_27A630
	compare VAR_0x8004, 320
	goto_if_gt LinkContestRoom1_EventScript_27A62A
	setvar VAR_TEMP_0, 0
	return

LinkContestRoom1_EventScript_27A5CC:: @ 827A5CC
	compare VAR_0x8004, 600
	goto_if_gt LinkContestRoom1_EventScript_27A654
	compare VAR_0x8004, 550
	goto_if_gt LinkContestRoom1_EventScript_27A64E
	compare VAR_0x8004, 500
	goto_if_gt LinkContestRoom1_EventScript_27A648
	compare VAR_0x8004, 450
	goto_if_gt LinkContestRoom1_EventScript_27A642
	compare VAR_0x8004, 400
	goto_if_gt LinkContestRoom1_EventScript_27A63C
	compare VAR_0x8004, 300
	goto_if_gt LinkContestRoom1_EventScript_27A636
	compare VAR_0x8004, 200
	goto_if_gt LinkContestRoom1_EventScript_27A630
	compare VAR_0x8004, 100
	goto_if_gt LinkContestRoom1_EventScript_27A62A
	setvar VAR_TEMP_0, 0
	return

LinkContestRoom1_EventScript_27A62A:: @ 827A62A
	setvar VAR_TEMP_0, 1
	return

LinkContestRoom1_EventScript_27A630:: @ 827A630
	setvar VAR_TEMP_0, 2
	return

LinkContestRoom1_EventScript_27A636:: @ 827A636
	setvar VAR_TEMP_0, 3
	return

LinkContestRoom1_EventScript_27A63C:: @ 827A63C
	setvar VAR_TEMP_0, 4
	return

LinkContestRoom1_EventScript_27A642:: @ 827A642
	setvar VAR_TEMP_0, 5
	return

LinkContestRoom1_EventScript_27A648:: @ 827A648
	setvar VAR_TEMP_0, 6
	return

LinkContestRoom1_EventScript_27A64E:: @ 827A64E
	setvar VAR_TEMP_0, 7
	return

LinkContestRoom1_EventScript_27A654:: @ 827A654
	setvar VAR_TEMP_0, 8
	return

LinkContestRoom1_EventScript_27A65A:: @ 827A65A
	compare VAR_TEMP_1, 1
	goto_if_eq LinkContestRoom1_EventScript_27A67D
	applymovement 6, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_1, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A67D:: @ 827A67D
	return

LinkContestRoom1_EventScript_27A67E:: @ 827A67E
	compare VAR_TEMP_2, 1
	goto_if_eq LinkContestRoom1_EventScript_27A6A1
	applymovement 12, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_2, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A6A1:: @ 827A6A1
	return

LinkContestRoom1_EventScript_27A6A2:: @ 827A6A2
	compare VAR_TEMP_3, 1
	goto_if_eq LinkContestRoom1_EventScript_27A6C5
	applymovement 7, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_3, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A6C5:: @ 827A6C5
	return

LinkContestRoom1_EventScript_27A6C6:: @ 827A6C6
	compare VAR_TEMP_4, 1
	goto_if_eq LinkContestRoom1_EventScript_27A6E9
	applymovement 8, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_4, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A6E9:: @ 827A6E9
	return

LinkContestRoom1_EventScript_27A6EA:: @ 827A6EA
	compare VAR_TEMP_5, 1
	goto_if_eq LinkContestRoom1_EventScript_27A70D
	applymovement 9, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_5, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A70D:: @ 827A70D
	return

LinkContestRoom1_EventScript_27A70E:: @ 827A70E
	compare VAR_TEMP_6, 1
	goto_if_eq LinkContestRoom1_EventScript_27A731
	applymovement 10, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_6, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A731:: @ 827A731
	return

LinkContestRoom1_EventScript_27A732:: @ 827A732
	compare VAR_TEMP_7, 1
	goto_if_eq LinkContestRoom1_EventScript_27A755
	applymovement 11, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_7, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A755:: @ 827A755
	return

LinkContestRoom1_EventScript_27A756:: @ 827A756
	compare VAR_TEMP_8, 1
	goto_if_eq LinkContestRoom1_EventScript_27A779
	applymovement 15, LinkContestRoom1_Movement_27AD11
	playse SE_PIN
	delay 14
	setvar VAR_TEMP_8, 1
	addvar VAR_TEMP_0, 65535
	return

LinkContestRoom1_EventScript_27A779:: @ 827A779
	return

LinkContestRoom1_EventScript_27A77A:: @ 827A77A
	closemessage
	release
	removeobject 13
	special sub_80F8EB8
	call LinkContestRoom1_EventScript_27A133
	switch VAR_0x8006
	case 0, LinkContestRoom1_EventScript_27A7B9
	case 1, LinkContestRoom1_EventScript_27A7CB
	case 2, LinkContestRoom1_EventScript_27A7DD
	case 3, LinkContestRoom1_EventScript_27A7EF
	return

LinkContestRoom1_EventScript_27A7B9:: @ 827A7B9
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement VAR_0x800B, LinkContestRoom1_Movement_27AD58
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27A7CB:: @ 827A7CB
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement VAR_0x800B, LinkContestRoom1_Movement_27AD62
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27A7DD:: @ 827A7DD
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement VAR_0x800B, LinkContestRoom1_Movement_27AD6A
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27A7EF:: @ 827A7EF
	call LinkContestRoom1_EventScript_27A133
	lockall
	applymovement VAR_0x800B, LinkContestRoom1_Movement_27AD74
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27A801:: @ 827A801
	lockall
	applymovement 1, LinkContestRoom1_Movement_27AD27
	waitmovement 0
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_27A853
	waitmessage
	applymovement 1, LinkContestRoom1_Movement_27AD15
	applymovement 2, LinkContestRoom1_Movement_27AD19
	waitmovement 0
	releaseall
	call LinkContestRoom1_EventScript_27A133
	setvar VAR_TEMP_9, 1
	special sub_80F910C
	startcontest
	special sub_80F90DC
	setvar VAR_TEMP_9, 0
	lockall
	applymovement 1, LinkContestRoom1_Movement_27AD19
	applymovement 2, LinkContestRoom1_Movement_27AD15
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27A853:: @ 827A853
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A867
	msgbox LinkContestRoom1_Text_27B904, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27A867:: @ 827A867
	specialvar VAR_RESULT, sub_80F9160
	compare VAR_RESULT, 1
	goto_if_eq LinkContestRoom1_EventScript_27A87E
	messageautoscroll LinkContestRoom1_Text_27B904
	waitmessage
	return

LinkContestRoom1_EventScript_27A87E:: @ 827A87E
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27CA71
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27CAD0
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27CB55
	waitmessage
	call LinkContestRoom1_EventScript_27A133
	return

LinkContestRoom1_EventScript_27A8A5:: @ 827A8A5
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_27A8FB
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_27A91E
	call LinkContestRoom1_EventScript_27A133
	applymovement 1, LinkContestRoom1_Movement_27AD0F
	waitmovement 0
	call LinkContestRoom1_EventScript_27A941
	call LinkContestRoom1_EventScript_27A133
	call LinkContestRoom1_EventScript_27A964
	call LinkContestRoom1_EventScript_27A133
	applymovement 1, LinkContestRoom1_Movement_27AD13
	waitmovement 0
	closemessage
	releaseall
	special sub_80F910C
	setvar VAR_TEMP_9, 1
	showcontestresults
	setvar VAR_TEMP_9, 0
	playbgm MUS_CON_FAN, 0
	return

LinkContestRoom1_EventScript_27A8FB:: @ 827A8FB
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A90F
	msgbox LinkContestRoom1_Text_27BA15, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27A90F:: @ 827A90F
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27BA15
	waitmessage
	delay 30
	return

LinkContestRoom1_EventScript_27A91E:: @ 827A91E
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A932
	msgbox LinkContestRoom1_Text_27BA30, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27A932:: @ 827A932
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27BA30
	waitmessage
	delay 30
	return

LinkContestRoom1_EventScript_27A941:: @ 827A941
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A955
	msgbox LinkContestRoom1_Text_27BAAC, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27A955:: @ 827A955
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27BAAC
	waitmessage
	delay 30
	return

LinkContestRoom1_EventScript_27A964:: @ 827A964
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27A978
	msgbox LinkContestRoom1_Text_27BB25, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27A978:: @ 827A978
	call LinkContestRoom1_EventScript_27A133
	messageautoscroll LinkContestRoom1_Text_27BB25
	waitmessage
	delay 30
	return

LinkContestRoom1_EventScript_27A987:: @ 827A987
	special sub_80F831C
	switch VAR_0x8005
	case 0, LinkContestRoom1_EventScript_27A9BC
	case 1, LinkContestRoom1_EventScript_27A9C2
	case 2, LinkContestRoom1_EventScript_27A9C8
	case 3, LinkContestRoom1_EventScript_27A9CE
	return

LinkContestRoom1_EventScript_27A9BC:: @ 827A9BC
	setvar VAR_TEMP_3, 3
	return

LinkContestRoom1_EventScript_27A9C2:: @ 827A9C2
	setvar VAR_TEMP_3, 4
	return

LinkContestRoom1_EventScript_27A9C8:: @ 827A9C8
	setvar VAR_TEMP_3, 5
	return

LinkContestRoom1_EventScript_27A9CE:: @ 827A9CE
	setvar VAR_TEMP_3, 14
	return

LinkContestRoom1_EventScript_27A9D4:: @ 827A9D4
	special sub_80F834C
	special sub_80F8390
	addvar VAR_0x8005, 1
	buffernumberstring 1, VAR_0x8005
	addvar VAR_0x8005, 65535
	call LinkContestRoom1_EventScript_27AA00
	applymovement VAR_TEMP_3, LinkContestRoom1_Movement_27AD1D
	waitmovement 0
	playse SE_W227B
	setvar VAR_TEMP_1, 0
	return

LinkContestRoom1_EventScript_27AA00:: @ 827AA00
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27AA14
	msgbox LinkContestRoom1_Text_27BB4C, MSGBOX_DEFAULT
	return

LinkContestRoom1_EventScript_27AA14:: @ 827AA14
	messageautoscroll LinkContestRoom1_Text_27BB4C
	waitmessage
	return

LinkContestRoom1_EventScript_27AA1B:: @ 827AA1B
	addvar VAR_TEMP_1, 1
	lockall
	compare VAR_CONTEST_LOCATION, 1
	call_if_gt LinkContestRoom1_EventScript_27AA6F
	applymovement 9, LinkContestRoom1_Movement_27AD3B
	applymovement 12, LinkContestRoom1_Movement_27AD3F
	applymovement 7, LinkContestRoom1_Movement_27AD3B
	delay 30
	applymovement 10, LinkContestRoom1_Movement_27AD33
	applymovement 11, LinkContestRoom1_Movement_27AD3F
	applymovement 6, LinkContestRoom1_Movement_27AD37
	applymovement 8, LinkContestRoom1_Movement_27AD33
	compare VAR_TEMP_1, 4
	goto_if_ne LinkContestRoom1_EventScript_27AA1B
	delay 30
	return

LinkContestRoom1_EventScript_27AA6F:: @ 827AA6F
	turnvobject 0, 1
	turnvobject 2, 1
	turnvobject 4, 4
	turnvobject 6, 1
	turnvobject 8, 1
	turnvobject 10, 1
	turnvobject 12, 1
	turnvobject 14, 1
	turnvobject 16, 1
	turnvobject 18, 1
	turnvobject 20, 4
	turnvobject 22, 4
	turnvobject 25, 4
	turnvobject 27, 3
	turnvobject 28, 4
	delay 10
	turnvobject 0, 4
	turnvobject 2, 4
	turnvobject 4, 4
	turnvobject 6, 4
	turnvobject 8, 4
	turnvobject 10, 3
	turnvobject 12, 3
	turnvobject 14, 3
	turnvobject 16, 3
	turnvobject 18, 3
	turnvobject 20, 1
	turnvobject 22, 1
	turnvobject 25, 2
	turnvobject 27, 2
	turnvobject 28, 2
	delay 10
	turnvobject 1, 2
	turnvobject 3, 2
	turnvobject 5, 2
	turnvobject 7, 2
	turnvobject 9, 4
	turnvobject 11, 2
	turnvobject 15, 2
	turnvobject 13, 2
	turnvobject 17, 2
	turnvobject 19, 2
	turnvobject 21, 3
	turnvobject 23, 3
	turnvobject 24, 3
	turnvobject 26, 4
	turnvobject 29, 3
	turnvobject 30, 3
	delay 10
	turnvobject 1, 4
	turnvobject 3, 4
	turnvobject 5, 4
	turnvobject 7, 4
	turnvobject 9, 4
	turnvobject 11, 3
	turnvobject 15, 3
	turnvobject 13, 3
	turnvobject 17, 3
	turnvobject 19, 3
	turnvobject 21, 1
	turnvobject 23, 1
	turnvobject 24, 1
	turnvobject 26, 2
	turnvobject 29, 2
	turnvobject 30, 2
	delay 10
	return

LinkContestRoom1_EventScript_27AB36:: @ 827AB36
	compare VAR_CONTEST_LOCATION, 5
	goto_if_eq LinkContestRoom1_EventScript_27ABD8
	call LinkContestRoom1_EventScript_27AB9E
	goto_if_set FLAG_TEMP_2, LinkContestRoom1_EventScript_27AB82
	lockall
	msgbox LinkContestRoom1_Text_27BBA8, MSGBOX_DEFAULT
	releaseall
	call LinkContestRoom1_EventScript_27ABF8
	call LinkContestRoom1_EventScript_27AC5E
	playse SE_W227B
	setvar VAR_TEMP_1, 0
	call LinkContestRoom1_EventScript_27AA1B
	delay 30
	special sub_80F88E8
	compare VAR_0x8004, 1
	goto_if_eq LinkContestRoom1_EventScript_27ABD2
	return

LinkContestRoom1_EventScript_27AB82:: @ 827AB82
	lockall
	msgbox LinkContestRoom1_Text_27BB7A, MSGBOX_DEFAULT
	releaseall
	delay 90
	special sub_80F88E8
	compare VAR_0x8004, 1
	goto_if_eq LinkContestRoom1_EventScript_27ABD2
	return

LinkContestRoom1_EventScript_27AB9E:: @ 827AB9E
	specialvar VAR_RESULT, sub_80F7F7C
	compare VAR_RESULT, 1
	goto_if_eq LinkContestRoom1_EventScript_27ABAF
	return

LinkContestRoom1_EventScript_27ABAF:: @ 827ABAF
	special sub_80F831C
	compare VAR_0x8005, 3
	goto_if_eq LinkContestRoom1_EventScript_27ABBE
	return

LinkContestRoom1_EventScript_27ABBE:: @ 827ABBE
	compare VAR_CONTEST_RANK, 3
	goto_if_eq LinkContestRoom1_EventScript_27ABCD
	setflag FLAG_TEMP_2
	return

LinkContestRoom1_EventScript_27ABCD:: @ 827ABCD
	return

LinkContestRoom1_EventScript_27ABCE:: @ 827ABCE
	setflag FLAG_CONTEST_SKETCH_CREATED
	return

LinkContestRoom1_EventScript_27ABD2:: @ 827ABD2
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
	return

LinkContestRoom1_EventScript_27ABD8:: @ 827ABD8
	delay 60
	special sub_80F84B0
	special sub_80F831C
	special sub_80F88E8
	compare VAR_0x8004, 1
	goto_if_eq LinkContestRoom1_EventScript_27ABF1
	closemessage
	return

LinkContestRoom1_EventScript_27ABF1:: @ 827ABF1
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 2
	return

LinkContestRoom1_EventScript_27ABF7:: @ 827ABF7
	return

LinkContestRoom1_EventScript_27ABF8:: @ 827ABF8
	switch VAR_0x8005
	case 0, LinkContestRoom1_EventScript_27AC2A
	case 1, LinkContestRoom1_EventScript_27AC37
	case 2, LinkContestRoom1_EventScript_27AC44
	case 3, LinkContestRoom1_EventScript_27AC51
	return

LinkContestRoom1_EventScript_27AC2A:: @ 827AC2A
	lockall
	applymovement VAR_TEMP_3, LinkContestRoom1_Movement_27AD7A
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27AC37:: @ 827AC37
	lockall
	applymovement VAR_TEMP_3, LinkContestRoom1_Movement_27AD7E
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27AC44:: @ 827AC44
	lockall
	applymovement VAR_TEMP_3, LinkContestRoom1_Movement_27AD29
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27AC51:: @ 827AC51
	lockall
	applymovement VAR_TEMP_3, LinkContestRoom1_Movement_27AD2D
	waitmovement 0
	releaseall
	return

LinkContestRoom1_EventScript_27AC5E:: @ 827AC5E
	special sub_80F831C
	compare VAR_0x8005, 3
	goto_if_eq LinkContestRoom1_EventScript_27AC77
	lockall
	msgbox LinkContestRoom1_Text_27BB7A, MSGBOX_DEFAULT
	releaseall
	return

LinkContestRoom1_EventScript_27AC77:: @ 827AC77
	compare VAR_CONTEST_LOCATION, 2
	call_if_eq LinkContestRoom1_EventScript_27ABCE
	specialvar VAR_RESULT, sub_80F7F7C
	compare VAR_RESULT, 0
	goto_if_eq LinkContestRoom1_EventScript_27ACDF
	compare VAR_CONTEST_RANK, 3
	goto_if_eq LinkContestRoom1_EventScript_27ACBD
	lockall
	msgbox LinkContestRoom1_Text_27BB7A, MSGBOX_DEFAULT
	releaseall
	return

LinkContestRoom1_EventScript_27ACA8:: @ 827ACA8
	lockall
	call Common_EventScript_BagIsFull
	msgbox LinkContestRoom1_Text_27BC2F, MSGBOX_DEFAULT
	releaseall
	setvar VAR_CONTEST_PRIZE_PICKUP, 4
	return

LinkContestRoom1_EventScript_27ACBD:: @ 827ACBD
	giveitem_std ITEM_LUXURY_BALL
	compare VAR_RESULT, 0
	goto_if_eq LinkContestRoom1_EventScript_27ACA8
	lockall
	msgbox LinkContestRoom1_Text_27BB7A, MSGBOX_DEFAULT
	releaseall
	return

LinkContestRoom1_EventScript_27ACDF:: @ 827ACDF
	special sub_80F7FFC
	incrementgamestat 42
	setflag FLAG_SYS_RIBBON_GET
	lockall
	msgbox LinkContestRoom1_Text_27BBD4, MSGBOX_DEFAULT
	playfanfare MUS_FANFA4
	msgbox LinkContestRoom1_Text_27BC00, MSGBOX_DEFAULT
	waitfanfare
	special sub_80F8390
	msgbox LinkContestRoom1_Text_27BC16, MSGBOX_DEFAULT
	releaseall
	return

LinkContestRoom1_Movement_27AD09: @ 827AD09
	walk_down
	step_end

LinkContestRoom1_Movement_27AD0B: @ 827AD0B
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

LinkContestRoom1_Movement_27AD0F: @ 827AD0F
	walk_in_place_fastest_right
	step_end

LinkContestRoom1_Movement_27AD11: @ 827AD11
	emote_heart
	step_end

LinkContestRoom1_Movement_27AD13: @ 827AD13
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD15: @ 827AD15
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD19: @ 827AD19
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD1D: @ 827AD1D
	walk_up
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD20: @ 827AD20
	delay_16
	delay_16
	step_end

LinkContestRoom1_Movement_27AD23: @ 827AD23
	walk_in_place_fastest_right
	step_end

LinkContestRoom1_Movement_27AD25: @ 827AD25
	walk_in_place_fastest_left
	step_end

LinkContestRoom1_Movement_27AD27: @ 827AD27
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD29: @ 827AD29
	walk_left
	walk_left
	walk_up
	step_end

LinkContestRoom1_Movement_27AD2D: @ 827AD2D
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

LinkContestRoom1_Movement_27AD33: @ 827AD33
	face_left
	delay_16
	face_original_direction
	step_end

LinkContestRoom1_Movement_27AD37: @ 827AD37
	face_up
	delay_16
	face_original_direction
	step_end

LinkContestRoom1_Movement_27AD3B: @ 827AD3B
	face_right
	delay_16
	face_original_direction
	step_end

LinkContestRoom1_Movement_27AD3F: @ 827AD3F
	face_down
	delay_16
	face_original_direction
	step_end

LinkContestRoom1_Movement_27AD43: @ 827AD43
	face_up
	step_end

LinkContestRoom1_Movement_27AD45: @ 827AD45
	face_up
	delay_16
	walk_in_place_fastest_right
	step_end

LinkContestRoom1_Movement_27AD49: @ 827AD49
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD4E: @ 827AD4E
	delay_16
	delay_16
	walk_in_place_fastest_down
	step_end

LinkContestRoom1_Movement_27AD52: @ 827AD52
	walk_up
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD58: @ 827AD58
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD5E: @ 827AD5E
	walk_up
	walk_right
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD62: @ 827AD62
	walk_fast_left
	walk_fast_down
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD66: @ 827AD66
	walk_up
	walk_left
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD6A: @ 827AD6A
	walk_fast_right
	walk_fast_down
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD6E: @ 827AD6E
	walk_up
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD74: @ 827AD74
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_in_place_fastest_up
	step_end

LinkContestRoom1_Movement_27AD7A: @ 827AD7A
	walk_right
	walk_right
	walk_up
	step_end

LinkContestRoom1_Movement_27AD7E: @ 827AD7E
	walk_up
	step_end

LinkContestRoom1_EventScript_27AD80:: @ 827AD80
	specialvar VAR_RESULT, sub_80F9134
	compare VAR_RESULT, 1
	goto_if_eq LinkContestRoom1_EventScript_27AD91
	return

LinkContestRoom1_EventScript_27AD91:: @ 827AD91
	return

LilycoveCity_ContestLobby_EventScript_27AD92:: @ 827AD92
	specialvar VAR_RESULT, sub_80F9134
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_27ADA3
	return

LilycoveCity_ContestLobby_EventScript_27ADA3:: @ 827ADA3
	delay 9
	return

LilycoveCity_ContestLobby_Text_27ADA7: @ 827ADA7
	.i18n 5291

LilycoveCity_ContestLobby_Text_27AE47: @ 827AE47
	.i18n 5292

LilycoveCity_ContestLobby_Text_27AEA8: @ 827AEA8
	.i18n 5293

LilycoveCity_ContestLobby_Text_27AEE3: @ 827AEE3
	.i18n 5294

LilycoveCity_ContestLobby_Text_27AF28: @ 827AF28
	.i18n 5295

LilycoveCity_ContestLobby_Text_27AF5E: @ 827AF5E
	.i18n 5296

LilycoveCity_ContestLobby_Text_27AF7A: @ 827AF7A
	.i18n 5297

LilycoveCity_ContestLobby_Text_27B17D: @ 827B17D
	.i18n 5298

LilycoveCity_ContestLobby_Text_27B221: @ 827B221
	.i18n 5299

LilycoveCity_ContestLobby_Text_27B3FF: @ 827B3FF
	.i18n 5300

LilycoveCity_ContestLobby_Text_27B423: @ 827B423
	.i18n 5301

LilycoveCity_ContestLobby_Text_27B44A: @ 827B44A
	.i18n 5302

LilycoveCity_ContestLobby_Text_27B471: @ 827B471
	.i18n 5303

LilycoveCity_ContestLobby_Text_27B4C4: @ 827B4C4
	.i18n 5304

LilycoveCity_ContestLobby_Text_27B501: @ 827B501
	.i18n 5305

LilycoveCity_ContestLobby_Text_27B547: @ 827B547
	.i18n 5306

LilycoveCity_ContestLobby_Text_27B5C4: @ 827B5C4
	.i18n 5307

LilycoveCity_ContestLobby_Text_27B5E2: @ 827B5E2
	.i18n 5308

LilycoveCity_ContestLobby_Text_27B653: @ 827B653
	.i18n 5309

LilycoveCity_ContestLobby_Text_27B67B: @ 827B67B
	.i18n 5310

LilycoveCity_ContestLobby_Text_27B6E7: @ 827B6E7
	.i18n 5311

LinkContestRoom1_Text_27B711: @ 827B711
	.i18n 5312

LinkContestRoom1_Text_27B78F: @ 827B78F
	.i18n 5313

LinkContestRoom1_Text_27B815: @ 827B815
	.i18n 5314

LinkContestRoom1_Text_27B830: @ 827B830
	.i18n 5315

LinkContestRoom1_Text_27B8F2: @ 827B8F2
	.i18n 5316

LinkContestRoom1_Text_27B904: @ 827B904
	.i18n 5317

LinkContestRoom1_Text_27BA15: @ 827BA15
	.i18n 5318

LinkContestRoom1_Text_27BA30: @ 827BA30
	.i18n 5319

LinkContestRoom1_Text_27BAAC: @ 827BAAC
	.i18n 5320

LinkContestRoom1_Text_27BB25: @ 827BB25
	.i18n 5321

LinkContestRoom1_Text_27BB4C: @ 827BB4C
	.i18n 5322

LinkContestRoom1_Text_27BB7A: @ 827BB7A
	.i18n 5323

LinkContestRoom1_Text_27BBA8: @ 827BBA8
	.i18n 5324

LinkContestRoom1_Text_27BBD4: @ 827BBD4
	.i18n 5325

LinkContestRoom1_Text_27BC00: @ 827BC00
	.i18n 5326

LinkContestRoom1_Text_27BC16: @ 827BC16
	.i18n 5327

LinkContestRoom1_Text_27BC2F: @ 827BC2F
	.i18n 5328

LinkContestRoom1_Text_27BC82: @ 827BC82
	.i18n 5329

LilycoveCity_ContestLobby_Text_27BD17: @ 827BD17
	.i18n 5330

LilycoveCity_ContestLobby_Text_27BD4F: @ 827BD4F
	.i18n 5331

LilycoveCity_ContestLobby_Text_27BD7A: @ 827BD7A
	.i18n 5332

LilycoveCity_ContestLobby_Text_27BD9D: @ 827BD9D
	.i18n 5333

LilycoveCity_ContestLobby_Text_27BE9E: @ 827BE9E
	.i18n 5334

LilycoveCity_ContestLobby_Text_27BEC5: @ 827BEC5
	.i18n 5335

LilycoveCity_ContestLobby_Text_27BEEC: @ 827BEEC
	.i18n 5336

LilycoveCity_ContestLobby_Text_27BEFA: @ 827BEFA
	.i18n 5337

LilycoveCity_ContestLobby_Text_27BF0E: @ 827BF0E
	.i18n 5338

LilycoveCity_ContestLobby_Text_27BF4B: @ 827BF4B
	.i18n 5339

LilycoveCity_ContestLobby_Text_27BF85: @ 827BF85
	.i18n 5340

LilycoveCity_ContestLobby_Text_27BFA7: @ 827BFA7
	.i18n 5341

LilycoveCity_ContestLobby_Text_27BFD2: @ 827BFD2
	.i18n 5342

LilycoveCity_ContestLobby_Text_27BFF8: @ 827BFF8
	.i18n 5343

LilycoveCity_ContestLobby_Text_27C043: @ 827C043
	.i18n 5344

LilycoveCity_ContestLobby_Text_27C063: @ 827C063
	.i18n 5345

LilycoveCity_ContestLobby_Text_27C0DA: @ 827C0DA
	.i18n 5346

LilycoveCity_ContestLobby_Text_27C0F6: @ 827C0F6
	.i18n 5347

LilycoveCity_ContestLobby_Text_27C119: @ 827C119
	.i18n 5348

LilycoveCity_ContestLobby_Text_27C140: @ 827C140
	.i18n 5349

LilycoveCity_ContestLobby_Text_27C186: @ 827C186
	.i18n 5350

LilycoveCity_ContestLobby_Text_27C1C3: @ 827C1C3
	.i18n 5351

Text_DecideLinkLeader: @ 827C1EA
	.i18n 5352

LilycoveCity_ContestLobby_Text_27C254: @ 827C254
	.i18n 5353

LilycoveCity_ContestLobby_Text_27C340: @ 827C340
	.i18n 5354

LilycoveCity_ContestLobby_Text_27C5B1: @ 827C5B1
	.i18n 5355

LilycoveCity_ContestLobby_Text_27C742: @ 827C742
	.i18n 5356

LilycoveCity_ContestLobby_Text_27C879: @ 827C879
	.i18n 5357

LilycoveCity_ContestLobby_Text_27C8FD: @ 827C8FD
	.i18n 5358

LinkContestRoom1_Text_27C929: @ 827C929
	.i18n 5359

LinkContestRoom1_Text_27C972: @ 827C972
	.i18n 5360

LinkContestRoom1_Text_27C9AF: @ 827C9AF
	.i18n 5361

LinkContestRoom1_Text_27CA04: @ 827CA04
	.i18n 5362

LinkContestRoom1_Text_27CA42: @ 827CA42
	.i18n 5363

LinkContestRoom1_Text_27CA71: @ 827CA71
	.i18n 5364

LinkContestRoom1_Text_27CAD0: @ 827CAD0
	.i18n 5365

LinkContestRoom1_Text_27CB55: @ 827CB55
	.i18n 5366
