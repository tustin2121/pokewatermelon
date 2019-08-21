SootopolisCity_LotadAndSeedotHouse_MapScripts:: @ 822722A
	.byte 0

SootopolisCity_LotadAndSeedotHouse_EventScript_22722B:: @ 822722B
	special GetSeedotSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227369, MSGBOX_DEFAULT
	special sub_81B94B0
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, 255
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227272
	special CompareSeedotSize
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_22727C
	compare VAR_RESULT, 2
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227286
	compare VAR_RESULT, 3
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227290
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227272:: @ 8227272
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_2275BC, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_22727C:: @ 822727C
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227584, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227286:: @ 8227286
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227544, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227290:: @ 8227290
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227480, MSGBOX_DEFAULT
	giveitem_std ITEM_ELIXIR
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_2272B2
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_2272B2:: @ 82272B2
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227524, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_2272BC:: @ 82272BC
	special GetLotadSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227676, MSGBOX_DEFAULT
	special sub_81B94B0
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	compare VAR_RESULT, 255
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227303
	special CompareLotadSize
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_22730D
	compare VAR_RESULT, 2
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227317
	compare VAR_RESULT, 3
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227321
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227303:: @ 8227303
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227896, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_22730D:: @ 822730D
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227867, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227317:: @ 8227317
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_22782A, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227321:: @ 8227321
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_22776C, MSGBOX_DEFAULT
	giveitem_std ITEM_ELIXIR
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_227343
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_227343:: @ 8227343
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_22780A, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_22734D:: @ 822734D
	special GetSeedotSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_227617, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_22735B:: @ 822735B
	special GetLotadSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_2278F2, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_Text_227369: @ 8227369
	.i18n 4704

SootopolisCity_LotadAndSeedotHouse_Text_227480: @ 8227480
	.i18n 4705

SootopolisCity_LotadAndSeedotHouse_Text_22750E: @ 822750E
	.i18n 4706

SootopolisCity_LotadAndSeedotHouse_Text_227524: @ 8227524
	.i18n 4707

SootopolisCity_LotadAndSeedotHouse_Text_227544: @ 8227544
	.i18n 4708

SootopolisCity_LotadAndSeedotHouse_Text_227584: @ 8227584
	.i18n 4709

SootopolisCity_LotadAndSeedotHouse_Text_2275BC: @ 82275BC
	.i18n 4710

SootopolisCity_LotadAndSeedotHouse_Text_227617: @ 8227617
	.i18n 4711

SootopolisCity_LotadAndSeedotHouse_Text_227676: @ 8227676
	.i18n 4712

SootopolisCity_LotadAndSeedotHouse_Text_22776C: @ 822776C
	.i18n 4713

SootopolisCity_LotadAndSeedotHouse_Text_2277F4: @ 82277F4
	.i18n 4714

SootopolisCity_LotadAndSeedotHouse_Text_22780A: @ 822780A
	.i18n 4715

SootopolisCity_LotadAndSeedotHouse_Text_22782A: @ 822782A
	.i18n 4716

SootopolisCity_LotadAndSeedotHouse_Text_227867: @ 8227867
	.i18n 4717

SootopolisCity_LotadAndSeedotHouse_Text_227896: @ 8227896
	.i18n 4718

SootopolisCity_LotadAndSeedotHouse_Text_2278F2: @ 82278F2
	.i18n 4719

