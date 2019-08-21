GraniteCave_1F_MapScripts:: @ 822DA5D
	.byte 0

GraniteCave_1F_EventScript_22DA5E:: @ 822DA5E
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM05, GraniteCave_1F_EventScript_22DA8A
	msgbox GraniteCave_1F_Text_22DA94, MSGBOX_DEFAULT
	giveitem_std ITEM_HM05
	setflag FLAG_RECEIVED_HM05
	msgbox GraniteCave_1F_Text_22DBB7, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_22DA8A:: @ 822DA8A
	msgbox GraniteCave_1F_Text_22DBB7, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_22DA94: @ 822DA94
	.i18n 2331

GraniteCave_1F_Text_22DBB7: @ 822DBB7
	.i18n 2332

