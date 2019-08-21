SootopolisCity_House2_MapScripts:: @ 8226A76
	.byte 0

SootopolisCity_House2_EventScript_226A77:: @ 8226A77
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_226AAB, MSGBOX_YESNO
	compare VAR_RESULT, 1
	call_if_eq SootopolisCity_House2_EventScript_226A99
	compare VAR_RESULT, 0
	call_if_eq SootopolisCity_House2_EventScript_226AA2
	release
	end

SootopolisCity_House2_EventScript_226A99:: @ 8226A99
	msgbox SootopolisCity_House2_Text_226AF1, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_226AA2:: @ 8226AA2
	msgbox SootopolisCity_House2_Text_226B41, MSGBOX_DEFAULT
	return

SootopolisCity_House2_Text_226AAB: @ 8226AAB
	.i18n 4685

SootopolisCity_House2_Text_226AF1: @ 8226AF1
	.i18n 4686

SootopolisCity_House2_Text_226B41: @ 8226B41
	.i18n 4687

