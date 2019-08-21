SootopolisCity_House3_MapScripts:: @ 8226B71
	.byte 0

SootopolisCity_House3_EventScript_226B72:: @ 8226B72
	lock
	faceplayer
	msgbox SootopolisCity_House3_Text_226BA4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_House3_EventScript_226B91
	msgbox SootopolisCity_House3_Text_226C44, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_226B91:: @ 8226B91
	msgbox SootopolisCity_House3_Text_226C20, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_226B9B:: @ 8226B9B
	msgbox SootopolisCity_House3_Text_226C9C, MSGBOX_NPC
	end

SootopolisCity_House3_Text_226BA4: @ 8226BA4
	.i18n 4688

SootopolisCity_House3_Text_226C20: @ 8226C20
	.i18n 4689

SootopolisCity_House3_Text_226C44: @ 8226C44
	.i18n 4690

SootopolisCity_House3_Text_226C9C: @ 8226C9C
	.i18n 4691

