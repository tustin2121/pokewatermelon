PetalburgCity_PokemonCenter_1F_EventScript_291539:: @ 8291539
	lock
	faceplayer
	goto_if_set FLAG_SYS_CHAT_USED, PetalburgCity_PokemonCenter_1F_EventScript_2915F5
	msgbox PetalburgCity_PokemonCenter_1F_Text_291687, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_291552
	end

PetalburgCity_PokemonCenter_1F_EventScript_291552:: @ 8291552
	msgbox PetalburgCity_PokemonCenter_1F_Text_2916FF, MSGBOX_DEFAULT
	multichoice 17, 6, 20, 0
	switch VAR_RESULT
	case 0, PetalburgCity_PokemonCenter_1F_EventScript_29159F
	case 1, PetalburgCity_PokemonCenter_1F_EventScript_2915EB
	case 2, PetalburgCity_PokemonCenter_1F_EventScript_291591
	case 127, PetalburgCity_PokemonCenter_1F_EventScript_2915EB
	end

PetalburgCity_PokemonCenter_1F_EventScript_291591:: @ 8291591
	msgbox PetalburgCity_PokemonCenter_1F_Text_291729, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_291552
	end

PetalburgCity_PokemonCenter_1F_EventScript_29159F:: @ 829159F
	msgbox PetalburgCity_PokemonCenter_1F_Text_291969, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_2915CB
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_2915D5
	end

PetalburgCity_PokemonCenter_1F_EventScript_2915CB:: @ 82915CB
	msgbox PetalburgCity_PokemonCenter_1F_Text_2919DC, MSGBOX_DEFAULT
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_2915D5:: @ 82915D5
	setvar VAR_0x8004, 0
	special sub_811EECC
	waitmessage
	delay 80
	msgbox PetalburgCity_PokemonCenter_1F_Text_291B22, MSGBOX_DEFAULT
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_2915EB:: @ 82915EB
	msgbox PetalburgCity_PokemonCenter_1F_Text_291991, MSGBOX_DEFAULT
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_2915F5:: @ 82915F5
	msgbox PetalburgCity_PokemonCenter_1F_Text_291A1B, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_291603
	end

PetalburgCity_PokemonCenter_1F_EventScript_291603:: @ 8291603
	msgbox PetalburgCity_PokemonCenter_1F_Text_291A4F, MSGBOX_DEFAULT
	multichoice 17, 6, 20, 0
	switch VAR_RESULT
	case 0, PetalburgCity_PokemonCenter_1F_EventScript_291650
	case 1, PetalburgCity_PokemonCenter_1F_EventScript_29167C
	case 2, PetalburgCity_PokemonCenter_1F_EventScript_291642
	case 127, PetalburgCity_PokemonCenter_1F_EventScript_29167C
	end

PetalburgCity_PokemonCenter_1F_EventScript_291642:: @ 8291642
	msgbox PetalburgCity_PokemonCenter_1F_Text_291729, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_291603
	end

PetalburgCity_PokemonCenter_1F_EventScript_291650:: @ 8291650
	msgbox PetalburgCity_PokemonCenter_1F_Text_291A6B, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_2915CB
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_2915D5
	end

PetalburgCity_PokemonCenter_1F_EventScript_29167C:: @ 829167C
	msgbox PetalburgCity_PokemonCenter_1F_Text_291ABA, MSGBOX_DEFAULT
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_291686:: @ 8291686
	return

PetalburgCity_PokemonCenter_1F_Text_291687: @ 8291687
	.i18n 5565

PetalburgCity_PokemonCenter_1F_Text_2916FF: @ 82916FF
	.i18n 5566

PetalburgCity_PokemonCenter_1F_Text_291729: @ 8291729
	.i18n 5567

PetalburgCity_PokemonCenter_1F_Text_291969: @ 8291969
	.i18n 5568

PetalburgCity_PokemonCenter_1F_Text_291991: @ 8291991
	.i18n 5569

PetalburgCity_PokemonCenter_1F_Text_2919DC: @ 82919DC
	.i18n 5570

PetalburgCity_PokemonCenter_1F_Text_291A1B: @ 8291A1B
	.i18n 5571

PetalburgCity_PokemonCenter_1F_Text_291A4F: @ 8291A4F
	.i18n 5572

PetalburgCity_PokemonCenter_1F_Text_291A6B: @ 8291A6B
	.i18n 5573

PetalburgCity_PokemonCenter_1F_Text_291ABA: @ 8291ABA
	.i18n 5574

PetalburgCity_PokemonCenter_1F_Text_291B22: @ 8291B22
	.i18n 5575

PetalburgCity_PokemonCenter_1F_Text_291BB7: @ 8291BB7
	.i18n 5576
