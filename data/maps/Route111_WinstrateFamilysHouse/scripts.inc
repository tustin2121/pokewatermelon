Route111_WinstrateFamilysHouse_MapScripts:: @ 822A48C
	.byte 0

Route111_WinstrateFamilysHouse_EventScript_22A48D:: @ 822A48D
	lock
	faceplayer
	setvar VAR_0x8008, 2
	msgbox Route111_WinstrateFamilysHouse_Text_22A539, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_22A52C
	end

Route111_WinstrateFamilysHouse_EventScript_22A4A2:: @ 822A4A2
	lock
	faceplayer
	setvar VAR_0x8008, 3
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_22A4DA
	msgbox Route111_WinstrateFamilysHouse_Text_22A5F4, MSGBOX_DEFAULT
	giveitem_std ITEM_MACHO_BRACE
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Route111_WinstrateFamilysHouse_EventScript_22A52C
	end

Route111_WinstrateFamilysHouse_EventScript_22A4DA:: @ 822A4DA
	msgbox Route111_WinstrateFamilysHouse_Text_22A6B4, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_22A52C
	end

Route111_WinstrateFamilysHouse_EventScript_22A4E8:: @ 822A4E8
	lock
	faceplayer
	setvar VAR_0x8008, 1
	msgbox Route111_WinstrateFamilysHouse_Text_22A6F7, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_22A52C
	end

Route111_WinstrateFamilysHouse_EventScript_22A4FD:: @ 822A4FD
	lock
	faceplayer
	setvar VAR_0x8008, 4
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_22A51E
	msgbox Route111_WinstrateFamilysHouse_Text_22A780, MSGBOX_DEFAULT
	setflag FLAG_TEMP_4
	goto Route111_WinstrateFamilysHouse_EventScript_22A52C
	end

Route111_WinstrateFamilysHouse_EventScript_22A51E:: @ 822A51E
	msgbox Route111_WinstrateFamilysHouse_Text_22A89B, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_22A52C
	end

Route111_WinstrateFamilysHouse_EventScript_22A52C:: @ 822A52C
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_WinstrateFamilysHouse_Text_22A539: @ 822A539
	.i18n 3884

Route111_WinstrateFamilysHouse_Text_22A5F4: @ 822A5F4
	.i18n 3885

Route111_WinstrateFamilysHouse_Text_22A6B4: @ 822A6B4
	.i18n 3886

Route111_WinstrateFamilysHouse_Text_22A6F7: @ 822A6F7
	.i18n 3887

Route111_WinstrateFamilysHouse_Text_22A780: @ 822A780
	.i18n 3888

Route111_WinstrateFamilysHouse_Text_22A89B: @ 822A89B
	.i18n 3889

