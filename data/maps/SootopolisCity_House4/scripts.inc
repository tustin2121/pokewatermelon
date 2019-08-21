SootopolisCity_House4_MapScripts:: @ 8226D15
	.byte 0

SootopolisCity_House4_EventScript_226D16:: @ 8226D16
	msgbox SootopolisCity_House4_Text_226D3B, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_226D1F:: @ 8226D1F
	msgbox SootopolisCity_House4_Text_226DEA, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_226D28:: @ 8226D28
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, 0
	msgbox SootopolisCity_House4_Text_226E7F, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House4_Text_226D3B: @ 8226D3B
	.i18n 4692

SootopolisCity_House4_Text_226DEA: @ 8226DEA
	.i18n 4693

SootopolisCity_House4_Text_226E7F: @ 8226E7F
	.i18n 4694

