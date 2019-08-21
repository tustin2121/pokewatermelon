RustboroCity_Flat2_2F_MapScripts:: @ 8215FD7
	.byte 0

RustboroCity_Flat2_2F_EventScript_215FD8:: @ 8215FD8
	msgbox RustboroCity_Flat2_2F_Text_21601A, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_215FE1:: @ 8215FE1
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_216010
	msgbox RustboroCity_Flat2_2F_Text_21605A, MSGBOX_DEFAULT
	giveitem_std ITEM_PREMIER_BALL
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_216010:: @ 8216010
	msgbox RustboroCity_Flat2_2F_Text_2160BD, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_21601A: @ 821601A
	.i18n 4190

RustboroCity_Flat2_2F_Text_21605A: @ 821605A
	.i18n 4191

RustboroCity_Flat2_2F_Text_2160BD: @ 82160BD
	.i18n 4192

