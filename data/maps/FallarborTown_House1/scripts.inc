FallarborTown_House1_MapScripts:: @ 8200F12
	.byte 0

FallarborTown_House1_EventScript_200F13:: @ 8200F13
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_House1_EventScript_200FB2
	checkitem ITEM_METEORITE, 1
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_House1_EventScript_200F38
	msgbox FallarborTown_House1_Text_200FEE, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_EventScript_200F38:: @ 8200F38
	call_if_unset FLAG_TEMP_2, FallarborTown_House1_EventScript_200F8B
	call_if_set FLAG_TEMP_2, FallarborTown_House1_EventScript_200F9C
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_House1_EventScript_200FA5
	msgbox FallarborTown_House1_Text_201159, MSGBOX_DEFAULT
	giveitem_std ITEM_TM27
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, 280
	call FallarborTown_House1_EventScript_2723E4
	setflag FLAG_RECEIVED_TM27
	msgbox FallarborTown_House1_Text_2011A5, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_EventScript_200F8B:: @ 8200F8B
	msgbox FallarborTown_House1_Text_200FEE, MSGBOX_DEFAULT
	msgbox FallarborTown_House1_Text_2010A2, MSGBOX_YESNO
	return

FallarborTown_House1_EventScript_200F9C:: @ 8200F9C
	msgbox FallarborTown_House1_Text_201249, MSGBOX_YESNO
	return

FallarborTown_House1_EventScript_200FA5:: @ 8200FA5
	setflag FLAG_TEMP_2
	msgbox FallarborTown_House1_Text_201212, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_EventScript_200FB2:: @ 8200FB2
	msgbox FallarborTown_House1_Text_2011A5, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_EventScript_200FBC:: @ 8200FBC
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_House1_EventScript_200FE4
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_House1_EventScript_200FDA
	msgbox FallarborTown_House1_Text_2012BC, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_EventScript_200FDA:: @ 8200FDA
	msgbox FallarborTown_House1_Text_201310, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_EventScript_200FE4:: @ 8200FE4
	msgbox FallarborTown_House1_Text_20134B, MSGBOX_DEFAULT
	release
	end

FallarborTown_House1_Text_200FEE: @ 8200FEE
	.i18n 2229

FallarborTown_House1_Text_2010A2: @ 82010A2
	.i18n 2230

FallarborTown_House1_Text_201159: @ 8201159
	.i18n 2231

FallarborTown_House1_Text_2011A5: @ 82011A5
	.i18n 2232

FallarborTown_House1_Text_201212: @ 8201212
	.i18n 2233

FallarborTown_House1_Text_201249: @ 8201249
	.i18n 2234

FallarborTown_House1_Text_2012BC: @ 82012BC
	.i18n 2235

FallarborTown_House1_Text_201310: @ 8201310
	.i18n 2236

FallarborTown_House1_Text_20134B: @ 820134B
	.i18n 2237

