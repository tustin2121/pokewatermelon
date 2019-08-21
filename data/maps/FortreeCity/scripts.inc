FortreeCity_MapScripts:: @ 81E25A4
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_MapScript1_1E25B3
	.byte 0

FortreeCity_OnTransition: @ 81E25AF
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_MapScript1_1E25B3: @ 81E25B3
	setstepcallback 2
	end

FortreeCity_EventScript_1E25B6:: @ 81E25B6
	msgbox FortreeCity_Text_1E2676, MSGBOX_NPC
	end

FortreeCity_EventScript_1E25BF:: @ 81E25BF
	lock
	faceplayer
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_1E25D4
	msgbox FortreeCity_Text_1E2738, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_1E25D4:: @ 81E25D4
	msgbox FortreeCity_Text_1E27B6, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_1E25DE:: @ 81E25DE
	msgbox FortreeCity_Text_1E27FE, MSGBOX_NPC
	end

FortreeCity_EventScript_1E25E7:: @ 81E25E7
	msgbox FortreeCity_Text_1E2880, MSGBOX_NPC
	end

FortreeCity_EventScript_1E25F0:: @ 81E25F0
	msgbox FortreeCity_Text_1E292E, MSGBOX_NPC
	end

FortreeCity_EventScript_1E25F9:: @ 81E25F9
	msgbox FortreeCity_Text_1E299D, MSGBOX_NPC
	end

FortreeCity_EventScript_1E2602:: @ 81E2602
	msgbox FortreeCity_Text_1E2AAC, MSGBOX_SIGN
	end

FortreeCity_EventScript_1E260B:: @ 81E260B
	msgbox FortreeCity_Text_1E2AE6, MSGBOX_SIGN
	end

FortreeCity_EventScript_1E2614:: @ 81E2614
	lock
	faceplayer
	checkitem ITEM_DEVON_SCOPE, 1
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_EventScript_1E2630
	msgbox FortreeCity_Text_1E29E5, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_1E2630:: @ 81E2630
	msgbox FortreeCity_Text_1E2A08, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_EventScript_1E2645
	release
	end

FortreeCity_EventScript_1E2645:: @ 81E2645
	msgbox FortreeCity_Text_1E2A48, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_2723C7
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, 2
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_1E2674
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

FortreeCity_Movement_1E2674: @ 81E2674
	walk_right
	step_end

FortreeCity_Text_1E2676: @ 81E2676
	.i18n 2253

FortreeCity_Text_1E2738: @ 81E2738
	.i18n 2254

FortreeCity_Text_1E27B6: @ 81E27B6
	.i18n 2255

FortreeCity_Text_1E27FE: @ 81E27FE
	.i18n 2256

FortreeCity_Text_1E2880: @ 81E2880
	.i18n 2257

FortreeCity_Text_1E292E: @ 81E292E
	.i18n 2258

FortreeCity_Text_1E299D: @ 81E299D
	.i18n 2259

FortreeCity_Text_1E29E5: @ 81E29E5
	.i18n 2260

FortreeCity_Text_1E2A08: @ 81E2A08
	.i18n 2261

FortreeCity_Text_1E2A48: @ 81E2A48
	.i18n 2262

FortreeCity_Text_1E2AAC: @ 81E2AAC
	.i18n 2263

FortreeCity_Text_1E2AE6: @ 81E2AE6
	.i18n 2264

