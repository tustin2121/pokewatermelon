MauvilleCity_GameCorner_MapScripts:: @ 820FBB8
	.byte 0

MauvilleCity_GameCorner_EventScript_20FBB9:: @ 820FBB9
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_210460, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FCB7
	message MauvilleCity_GameCorner_Text_2104DF
	waitmessage
	showmoneybox 0, 0, 0
	showcoinsbox 1, 6
	goto MauvilleCity_GameCorner_EventScript_20FBE5

MauvilleCity_GameCorner_EventScript_20FBE5:: @ 820FBE5
	multichoicedefault 15, 0, 49, 0, 0
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_20FC33
	case 1, MauvilleCity_GameCorner_EventScript_20FC75
	goto MauvilleCity_GameCorner_EventScript_20FCD1
	end

MauvilleCity_GameCorner_EventScript_20FC0C:: @ 820FC0C
	multichoicedefault 15, 0, 49, 1, 0
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_20FC33
	case 1, MauvilleCity_GameCorner_EventScript_20FC75
	goto MauvilleCity_GameCorner_EventScript_20FCD1
	end

MauvilleCity_GameCorner_EventScript_20FC33:: @ 820FC33
	checkcoins VAR_TEMP_1
	compare VAR_TEMP_1, 9950
	goto_if_ge MauvilleCity_GameCorner_EventScript_20FCE1
	checkmoney 0x3e8, 0
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FCC1
	givecoins 50
	takemoney 0x3e8, 0
	updatemoneybox 0, 0
	updatecoinsbox 1, 6
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_210529, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_20FC75:: @ 820FC75
	checkcoins VAR_TEMP_1
	compare VAR_TEMP_1, 9500
	goto_if_ge MauvilleCity_GameCorner_EventScript_20FCE1
	checkmoney 0x2710, 0
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FCC1
	givecoins 500
	takemoney 0x2710, 0
	updatemoneybox 0, 0
	updatecoinsbox 1, 6
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_210529, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_20FCB7:: @ 820FCB7
	msgbox MauvilleCity_GameCorner_Text_21047E, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_20FCC1:: @ 820FCC1
	msgbox MauvilleCity_GameCorner_Text_210553, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_20FCD1:: @ 820FCD1
	msgbox MauvilleCity_GameCorner_Text_21059A, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_20FCE1:: @ 820FCE1
	msgbox MauvilleCity_GameCorner_Text_21057E, MSGBOX_DEFAULT
	hidemoneybox
	nop
	nop
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_20FCF1:: @ 820FCF1
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_2105D7, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FD0D
	release
	end

MauvilleCity_GameCorner_EventScript_20FD0D:: @ 820FD0D
	message MauvilleCity_GameCorner_Text_21060D
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto MauvilleCity_GameCorner_EventScript_20FD2B

MauvilleCity_GameCorner_EventScript_20FD20:: @ 820FD20
	message MauvilleCity_GameCorner_Text_21060D
	waitmessage
	goto MauvilleCity_GameCorner_EventScript_20FD2B

MauvilleCity_GameCorner_EventScript_20FD2B:: @ 820FD2B
	multichoice 12, 0, 48, 0
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_20FD67
	case 1, MauvilleCity_GameCorner_EventScript_20FD75
	case 2, MauvilleCity_GameCorner_EventScript_20FD83
	case 3, MauvilleCity_GameCorner_EventScript_20FE92
	goto MauvilleCity_GameCorner_EventScript_20FE92
	end

MauvilleCity_GameCorner_EventScript_20FD67:: @ 820FD67
	setvar VAR_TEMP_1, 1
	bufferdecorationname 0, 88
	goto MauvilleCity_GameCorner_EventScript_20FD91

MauvilleCity_GameCorner_EventScript_20FD75:: @ 820FD75
	setvar VAR_TEMP_1, 2
	bufferdecorationname 0, 89
	goto MauvilleCity_GameCorner_EventScript_20FD91

MauvilleCity_GameCorner_EventScript_20FD83:: @ 820FD83
	setvar VAR_TEMP_1, 3
	bufferdecorationname 0, 90
	goto MauvilleCity_GameCorner_EventScript_20FD91

MauvilleCity_GameCorner_EventScript_20FD91:: @ 820FD91
	msgbox MauvilleCity_GameCorner_Text_210705, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FE92
	switch VAR_TEMP_1
	case 1, MauvilleCity_GameCorner_EventScript_20FDCB
	case 2, MauvilleCity_GameCorner_EventScript_20FE05
	case 3, MauvilleCity_GameCorner_EventScript_20FE3F
	end

MauvilleCity_GameCorner_EventScript_20FDCB:: @ 820FDCB
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 1000
	goto_if_lt MauvilleCity_GameCorner_EventScript_20FE79
	bufferdecorationname 1, 88
	checkdecorspace 88
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FE87
	takecoins 1000
	givedecoration 88
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_210646, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FD20
	end

MauvilleCity_GameCorner_EventScript_20FE05:: @ 820FE05
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 1000
	goto_if_lt MauvilleCity_GameCorner_EventScript_20FE79
	bufferdecorationname 1, 89
	checkdecorspace 89
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FE87
	takecoins 1000
	givedecoration 89
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_210646, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FD20
	end

MauvilleCity_GameCorner_EventScript_20FE3F:: @ 820FE3F
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 1000
	goto_if_lt MauvilleCity_GameCorner_EventScript_20FE79
	bufferdecorationname 1, 90
	checkdecorspace 90
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FE87
	takecoins 1000
	givedecoration 90
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_210646, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FD20
	end

MauvilleCity_GameCorner_EventScript_20FE79:: @ 820FE79
	msgbox MauvilleCity_GameCorner_Text_210673, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FD20
	end

MauvilleCity_GameCorner_EventScript_20FE87:: @ 820FE87
	call Common_EventScript_NoRoomLeftForAnother
	goto MauvilleCity_GameCorner_EventScript_20FD20
	end

MauvilleCity_GameCorner_EventScript_20FE92:: @ 820FE92
	msgbox MauvilleCity_GameCorner_Text_2106BF, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end

MauvilleCity_GameCorner_EventScript_20FE9F:: @ 820FE9F
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_2105D7, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_GameCorner_EventScript_20FEBB
	release
	end

MauvilleCity_GameCorner_EventScript_20FEBB:: @ 820FEBB
	message MauvilleCity_GameCorner_Text_21060D
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto MauvilleCity_GameCorner_EventScript_20FED9

MauvilleCity_GameCorner_EventScript_20FECE:: @ 820FECE
	message MauvilleCity_GameCorner_Text_21060D
	waitmessage
	goto MauvilleCity_GameCorner_EventScript_20FED9

MauvilleCity_GameCorner_EventScript_20FED9:: @ 820FED9
	multichoice 12, 0, 55, 0
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_20FF2B
	case 1, MauvilleCity_GameCorner_EventScript_20FF3E
	case 2, MauvilleCity_GameCorner_EventScript_20FF51
	case 3, MauvilleCity_GameCorner_EventScript_20FF64
	case 4, MauvilleCity_GameCorner_EventScript_20FF77
	case 5, MauvilleCity_GameCorner_EventScript_210118
	goto MauvilleCity_GameCorner_EventScript_210118
	end

MauvilleCity_GameCorner_EventScript_20FF2B:: @ 820FF2B
	setvar VAR_TEMP_1, 1
	bufferitemname 0, ITEM_TM32
	setvar VAR_0x8004, 320
	goto MauvilleCity_GameCorner_EventScript_20FF8A

MauvilleCity_GameCorner_EventScript_20FF3E:: @ 820FF3E
	setvar VAR_TEMP_1, 2
	bufferitemname 0, ITEM_TM29
	setvar VAR_0x8004, 317
	goto MauvilleCity_GameCorner_EventScript_20FF8A

MauvilleCity_GameCorner_EventScript_20FF51:: @ 820FF51
	setvar VAR_TEMP_1, 3
	bufferitemname 0, ITEM_TM35
	setvar VAR_0x8004, 323
	goto MauvilleCity_GameCorner_EventScript_20FF8A

MauvilleCity_GameCorner_EventScript_20FF64:: @ 820FF64
	setvar VAR_TEMP_1, 4
	bufferitemname 0, ITEM_TM24
	setvar VAR_0x8004, 312
	goto MauvilleCity_GameCorner_EventScript_20FF8A

MauvilleCity_GameCorner_EventScript_20FF77:: @ 820FF77
	setvar VAR_TEMP_1, 5
	bufferitemname 0, ITEM_TM13
	setvar VAR_0x8004, 301
	goto MauvilleCity_GameCorner_EventScript_20FF8A

MauvilleCity_GameCorner_EventScript_20FF8A:: @ 820FF8A
	special sub_81398C0
	msgbox MauvilleCity_GameCorner_Text_210629, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210118
	switch VAR_TEMP_1
	case 1, MauvilleCity_GameCorner_EventScript_20FFDD
	case 2, MauvilleCity_GameCorner_EventScript_210017
	case 3, MauvilleCity_GameCorner_EventScript_210051
	case 4, MauvilleCity_GameCorner_EventScript_21008B
	case 5, MauvilleCity_GameCorner_EventScript_2100C5
	end

MauvilleCity_GameCorner_EventScript_20FFDD:: @ 820FFDD
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 1500
	goto_if_lt MauvilleCity_GameCorner_EventScript_2100FF
	checkitemspace ITEM_TM32, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_21010D
	takecoins 1500
	giveitem ITEM_TM32, 1
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_21071B, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_210017:: @ 8210017
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 3500
	goto_if_lt MauvilleCity_GameCorner_EventScript_2100FF
	checkitemspace ITEM_TM29, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_21010D
	takecoins 3500
	giveitem ITEM_TM29, 1
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_21071B, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_210051:: @ 8210051
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 4000
	goto_if_lt MauvilleCity_GameCorner_EventScript_2100FF
	checkitemspace ITEM_TM35, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_21010D
	takecoins 4000
	giveitem ITEM_TM35, 1
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_21071B, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_21008B:: @ 821008B
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 4000
	goto_if_lt MauvilleCity_GameCorner_EventScript_2100FF
	checkitemspace ITEM_TM24, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_21010D
	takecoins 4000
	giveitem ITEM_TM24, 1
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_21071B, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_2100C5:: @ 82100C5
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 4000
	goto_if_lt MauvilleCity_GameCorner_EventScript_2100FF
	checkitemspace ITEM_TM13, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_21010D
	takecoins 4000
	giveitem ITEM_TM13, 1
	updatecoinsbox 1, 1
	playse SE_REGI
	msgbox MauvilleCity_GameCorner_Text_21071B, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_2100FF:: @ 82100FF
	msgbox MauvilleCity_GameCorner_Text_210673, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_21010D:: @ 821010D
	call Common_EventScript_BagIsFull
	goto MauvilleCity_GameCorner_EventScript_20FECE
	end

MauvilleCity_GameCorner_EventScript_210118:: @ 8210118
	msgbox MauvilleCity_GameCorner_Text_2106BF, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end

MauvilleCity_GameCorner_EventScript_210125:: @ 8210125
	msgbox MauvilleCity_GameCorner_Text_2109D3, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_21012E:: @ 821012E
	msgbox MauvilleCity_GameCorner_Text_210A05, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_210137:: @ 8210137
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_210213
	msgbox MauvilleCity_GameCorner_Text_210750, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210209
	switch VAR_STARTER_MON
	case 0, MauvilleCity_GameCorner_EventScript_21017C
	case 1, MauvilleCity_GameCorner_EventScript_2101A6
	case 2, MauvilleCity_GameCorner_EventScript_2101D0
	end

MauvilleCity_GameCorner_EventScript_21017C:: @ 821017C
	bufferdecorationname 1, 88
	checkdecorspace 88
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2101FA
	msgbox MauvilleCity_GameCorner_Text_21079C, MSGBOX_DEFAULT
	givedecoration_std 88
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_210213
	end

MauvilleCity_GameCorner_EventScript_2101A6:: @ 82101A6
	bufferdecorationname 1, 89
	checkdecorspace 89
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2101FA
	msgbox MauvilleCity_GameCorner_Text_21079C, MSGBOX_DEFAULT
	givedecoration_std 89
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_210213
	end

MauvilleCity_GameCorner_EventScript_2101D0:: @ 82101D0
	bufferdecorationname 1, 90
	checkdecorspace 90
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2101FA
	msgbox MauvilleCity_GameCorner_Text_21079C, MSGBOX_DEFAULT
	givedecoration_std 90
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_210213
	end

MauvilleCity_GameCorner_EventScript_2101FA:: @ 82101FA
	call Common_EventScript_NoRoomLeftForAnother
	msgbox MauvilleCity_GameCorner_Text_2107A9, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_210209:: @ 8210209
	msgbox MauvilleCity_GameCorner_Text_2107CE, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_210213:: @ 8210213
	msgbox MauvilleCity_GameCorner_Text_2107FB, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_21021D:: @ 821021D
	lock
	faceplayer
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_GameCorner_EventScript_21023D
	msgbox MauvilleCity_GameCorner_Text_210830, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_21023D:: @ 821023D
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_21026B
	checkcoins VAR_TEMP_1
	compare VAR_TEMP_1, 1
	goto_if_ge MauvilleCity_GameCorner_EventScript_21026B
	setflag FLAG_RECEIVED_20_COINS
	givecoins 20
	msgbox MauvilleCity_GameCorner_Text_2108A0, MSGBOX_DEFAULT
	playse SE_REGI
	goto MauvilleCity_GameCorner_EventScript_21026B
	end

MauvilleCity_GameCorner_EventScript_21026B:: @ 821026B
	msgbox MauvilleCity_GameCorner_Text_2108EF, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_210279:: @ 8210279
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_210932, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_210289:: @ 8210289
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_21098E, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_210299:: @ 8210299
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_210A51, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_2102A9:: @ 82102A9
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_GameCorner_EventScript_2102B6:: @ 82102B6
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_210A82, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_2102C6:: @ 82102C6
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_210B04, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_2102A9
	end

MauvilleCity_GameCorner_EventScript_2102D6:: @ 82102D6
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_2102F6:: @ 82102F6
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210316:: @ 8210316
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 2
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210336:: @ 8210336
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 3
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210356:: @ 8210356
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 4
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210376:: @ 8210376
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 5
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210396:: @ 8210396
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 6
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_2103B6:: @ 82103B6
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 7
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_2103D6:: @ 82103D6
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 8
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_2103F6:: @ 82103F6
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 9
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210416:: @ 8210416
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 10
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210436:: @ 8210436
	lockall
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 11
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_210456:: @ 8210456
	msgbox MauvilleCity_GameCorner_Text_210C2E, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_GameCorner_Text_210460: @ 8210460
	.i18n 2934

MauvilleCity_GameCorner_Text_21047E: @ 821047E
	.i18n 2935

MauvilleCity_GameCorner_Text_2104DF: @ 82104DF
	.i18n 2936

MauvilleCity_GameCorner_Text_210529: @ 8210529
	.i18n 2937

MauvilleCity_GameCorner_Text_210553: @ 8210553
	.i18n 2938

MauvilleCity_GameCorner_Text_21057E: @ 821057E
	.i18n 2939

MauvilleCity_GameCorner_Text_21059A: @ 821059A
	.i18n 2940

MauvilleCity_GameCorner_Text_2105D7: @ 82105D7
	.i18n 2941

MauvilleCity_GameCorner_Text_21060D: @ 821060D
	.i18n 2942

MauvilleCity_GameCorner_Text_210629: @ 8210629
	.i18n 2943

MauvilleCity_GameCorner_Text_210646: @ 8210646
	.i18n 2944

MauvilleCity_GameCorner_Text_210673: @ 8210673
	.i18n 2945

MauvilleCity_GameCorner_Text_210690: @ 8210690
	.i18n 2946

MauvilleCity_GameCorner_Text_2106BF: @ 82106BF
	.i18n 2947

MauvilleCity_GameCorner_Text_210705: @ 8210705
	.i18n 2948

MauvilleCity_GameCorner_Text_21071B: @ 821071B
	.i18n 2949

MauvilleCity_GameCorner_Text_210728: @ 8210728
	.i18n 2950

MauvilleCity_GameCorner_Text_210750: @ 8210750
	.i18n 2951

MauvilleCity_GameCorner_Text_21079C: @ 821079C
	.i18n 2952

MauvilleCity_GameCorner_Text_2107A9: @ 82107A9
	.i18n 2953

MauvilleCity_GameCorner_Text_2107CE: @ 82107CE
	.i18n 2954

MauvilleCity_GameCorner_Text_2107FB: @ 82107FB
	.i18n 2955

MauvilleCity_GameCorner_Text_210830: @ 8210830
	.i18n 2956

MauvilleCity_GameCorner_Text_2108A0: @ 82108A0
	.i18n 2957

MauvilleCity_GameCorner_Text_2108EF: @ 82108EF
	.i18n 2958

MauvilleCity_GameCorner_Text_210932: @ 8210932
	.i18n 2959

MauvilleCity_GameCorner_Text_21098E: @ 821098E
	.i18n 2960

MauvilleCity_GameCorner_Text_2109D3: @ 82109D3
	.i18n 2961

MauvilleCity_GameCorner_Text_210A05: @ 8210A05
	.i18n 2962

MauvilleCity_GameCorner_Text_210A51: @ 8210A51
	.i18n 2963

MauvilleCity_GameCorner_Text_210A82: @ 8210A82
	.i18n 2964

MauvilleCity_GameCorner_Text_210B04: @ 8210B04
	.i18n 2965

MauvilleCity_GameCorner_Text_210C2E: @ 8210C2E
	.i18n 2966

