RustboroCity_CuttersHouse_MapScripts:: @ 8215BD3
	.byte 0

RustboroCity_CuttersHouse_EventScript_215BD4:: @ 8215BD4
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM01, RustboroCity_CuttersHouse_EventScript_215C00
	msgbox RustboroCity_CuttersHouse_Text_215C13, MSGBOX_DEFAULT
	giveitem_std ITEM_HM01
	setflag FLAG_RECEIVED_HM01
	msgbox RustboroCity_CuttersHouse_Text_215D33, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_215C00:: @ 8215C00
	msgbox RustboroCity_CuttersHouse_Text_215D33, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_215C0A:: @ 8215C0A
	msgbox RustboroCity_CuttersHouse_Text_215E39, MSGBOX_NPC
	end

RustboroCity_CuttersHouse_Text_215C13: @ 8215C13
	.i18n 4127

RustboroCity_CuttersHouse_Text_215D33: @ 8215D33
	.i18n 4128

RustboroCity_CuttersHouse_Text_215E39: @ 8215E39
	.i18n 4129

