SootopolisCity_House6_MapScripts:: @ 8226F5B
	.byte 0

SootopolisCity_House6_EventScript_226F5C:: @ 8226F5C
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, SootopolisCity_House6_EventScript_226FA3
	msgbox SootopolisCity_House6_Text_226FC3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	call_if_eq SootopolisCity_House6_EventScript_226F99
	msgbox SootopolisCity_House6_Text_227034, MSGBOX_DEFAULT
	givedecoration_std 117
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_House6_EventScript_226FAD
	setflag FLAG_RECEIVED_WAILMER_DOLL
	release
	end

SootopolisCity_House6_EventScript_226F99:: @ 8226F99
	msgbox SootopolisCity_House6_Text_22708F, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_EventScript_226FA3:: @ 8226FA3
	msgbox SootopolisCity_House6_Text_2270B7, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_EventScript_226FAD:: @ 8226FAD
	bufferdecorationname 1, 117
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	msgbox SootopolisCity_House6_Text_22704A, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House6_Text_226FC3: @ 8226FC3
	.i18n 4697

SootopolisCity_House6_Text_227034: @ 8227034
	.i18n 4698

SootopolisCity_House6_Text_22704A: @ 822704A
	.i18n 4699

SootopolisCity_House6_Text_22708F: @ 822708F
	.i18n 4700

SootopolisCity_House6_Text_2270B7: @ 82270B7
	.i18n 4701

