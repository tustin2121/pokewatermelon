MossdeepCity_House3_MapScripts:: @ 82225C2
	.byte 0

MossdeepCity_House3_EventScript_2225C3:: @ 82225C3
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_222602
	msgbox MossdeepCity_House3_Text_222616, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_House3_EventScript_22260C
	msgbox MossdeepCity_House3_Text_2226B6, MSGBOX_DEFAULT
	giveitem_std ITEM_SUPER_ROD
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox MossdeepCity_House3_Text_2226F0, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_222602:: @ 8222602
	msgbox MossdeepCity_House3_Text_222751, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_22260C:: @ 822260C
	msgbox MossdeepCity_House3_Text_222733, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_Text_222616: @ 8222616
	.i18n 3141

MossdeepCity_House3_Text_2226B6: @ 82226B6
	.i18n 3142

MossdeepCity_House3_Text_2226F0: @ 82226F0
	.i18n 3143

MossdeepCity_House3_Text_222733: @ 8222733
	.i18n 3144

MossdeepCity_House3_Text_222751: @ 8222751
	.i18n 3145

