FortreeCity_House2_MapScripts:: @ 82177CA
	.byte 0

FortreeCity_House2_EventScript_2177CB:: @ 82177CB
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM10, FortreeCity_House2_EventScript_21786E
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_217862
	msgbox FortreeCity_House2_Text_2178D6, MSGBOX_DEFAULT
	multichoice 21, 8, 54, 1
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_217878
	msgbox FortreeCity_House2_Text_21796A, MSGBOX_DEFAULT
	multichoice 21, 8, 54, 1
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_217878
	msgbox FortreeCity_House2_Text_2179C9, MSGBOX_DEFAULT
	multichoice 21, 8, 54, 1
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_217878
	msgbox FortreeCity_House2_Text_217A28, MSGBOX_DEFAULT
	giveitem_std ITEM_TM10
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM10
	msgbox FortreeCity_House2_Text_217A91, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_217862:: @ 8217862
	msgbox FortreeCity_House2_Text_217882, MSGBOX_DEFAULT
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return

FortreeCity_House2_EventScript_21786E:: @ 821786E
	msgbox FortreeCity_House2_Text_217A91, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_217878:: @ 8217878
	msgbox FortreeCity_House2_Text_217AC7, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_Text_217882: @ 8217882
	.i18n 2307

FortreeCity_House2_Text_2178D6: @ 82178D6
	.i18n 2308

FortreeCity_House2_Text_21796A: @ 821796A
	.i18n 2309

FortreeCity_House2_Text_2179C9: @ 82179C9
	.i18n 2310

FortreeCity_House2_Text_217A28: @ 8217A28
	.i18n 2311

FortreeCity_House2_Text_217A91: @ 8217A91
	.i18n 2312

FortreeCity_House2_Text_217AC7: @ 8217AC7
	.i18n 2313

