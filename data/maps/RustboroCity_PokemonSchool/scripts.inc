RustboroCity_PokemonSchool_MapScripts:: @ 8213EA8
	.byte 0

RustboroCity_PokemonSchool_EventScript_213EA9:: @ 8213EA9
	lockall
	msgbox RustboroCity_PokemonSchool_Text_2140B2, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end

RustboroCity_PokemonSchool_EventScript_213EB8:: @ 8213EB8
	message RustboroCity_PokemonSchool_Text_2140F9
	waitmessage
	multichoicegrid 8, 1, 13, 3, 0
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_213F17
	case 1, RustboroCity_PokemonSchool_EventScript_213F25
	case 2, RustboroCity_PokemonSchool_EventScript_213F33
	case 3, RustboroCity_PokemonSchool_EventScript_213F41
	case 4, RustboroCity_PokemonSchool_EventScript_213F4F
	case 5, RustboroCity_PokemonSchool_EventScript_213F5D
	case 127, RustboroCity_PokemonSchool_EventScript_213F5D
	end

RustboroCity_PokemonSchool_EventScript_213F17:: @ 8213F17
	msgbox RustboroCity_PokemonSchool_Text_21411A, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end

RustboroCity_PokemonSchool_EventScript_213F25:: @ 8213F25
	msgbox RustboroCity_PokemonSchool_Text_2141D8, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end

RustboroCity_PokemonSchool_EventScript_213F33:: @ 8213F33
	msgbox RustboroCity_PokemonSchool_Text_21427D, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end

RustboroCity_PokemonSchool_EventScript_213F41:: @ 8213F41
	msgbox RustboroCity_PokemonSchool_Text_214336, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end

RustboroCity_PokemonSchool_EventScript_213F4F:: @ 8213F4F
	msgbox RustboroCity_PokemonSchool_Text_2143B8, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end

RustboroCity_PokemonSchool_EventScript_213F5D:: @ 8213F5D
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_213F5F:: @ 8213F5F
	msgbox RustboroCity_PokemonSchool_Text_21459F, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_213F68:: @ 8213F68
	msgbox RustboroCity_PokemonSchool_Text_2145CD, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_213F71:: @ 8213F71
	msgbox RustboroCity_PokemonSchool_Text_214604, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_213F7A:: @ 8213F7A
	msgbox RustboroCity_PokemonSchool_Text_214669, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_213F83:: @ 8213F83
	msgbox RustboroCity_PokemonSchool_Text_214719, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_213F8C:: @ 8213F8C
	msgbox RustboroCity_PokemonSchool_Text_2147A2, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_213F95:: @ 8213F95
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_213FFB
	compare VAR_FACING, 4
	call_if_eq RustboroCity_PokemonSchool_EventScript_213FE5
	compare VAR_FACING, 3
	call_if_eq RustboroCity_PokemonSchool_EventScript_213FF0
	msgbox RustboroCity_PokemonSchool_Text_214433, MSGBOX_DEFAULT
	giveitem_std ITEM_QUICK_CLAW
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_213FE5:: @ 8213FE5
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_214027
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_213FF0:: @ 8213FF0
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_214010
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_213FFB:: @ 8213FFB
	msgbox RustboroCity_PokemonSchool_Text_2144C8, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_214010: @ 8214010
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_214027: @ 8214027
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_214040:: @ 8214040
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_2140A8
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_21406F
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_214082
	msgbox RustboroCity_PokemonSchool_Text_2148C0, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_21406F:: @ 821406F
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_214090
	msgbox RustboroCity_PokemonSchool_Text_214A5F, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_214082:: @ 8214082
	msgbox RustboroCity_PokemonSchool_Text_214B8A, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_21409E
	end

RustboroCity_PokemonSchool_EventScript_214090:: @ 8214090
	msgbox RustboroCity_PokemonSchool_Text_214AB6, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_21409E
	end

RustboroCity_PokemonSchool_EventScript_21409E:: @ 821409E
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_2140A8:: @ 82140A8
	msgbox RustboroCity_PokemonSchool_Text_214A5F, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_2140B2: @ 82140B2
	.i18n 4237

RustboroCity_PokemonSchool_Text_2140F9: @ 82140F9
	.i18n 4238

RustboroCity_PokemonSchool_Text_21411A: @ 821411A
	.i18n 4239

RustboroCity_PokemonSchool_Text_2141D8: @ 82141D8
	.i18n 4240

RustboroCity_PokemonSchool_Text_21427D: @ 821427D
	.i18n 4241

RustboroCity_PokemonSchool_Text_214336: @ 8214336
	.i18n 4242

RustboroCity_PokemonSchool_Text_2143B8: @ 82143B8
	.i18n 4243

RustboroCity_PokemonSchool_Text_214433: @ 8214433
	.i18n 4244

RustboroCity_PokemonSchool_Text_2144C8: @ 82144C8
	.i18n 4245

RustboroCity_PokemonSchool_Text_21459F: @ 821459F
	.i18n 4246

RustboroCity_PokemonSchool_Text_2145CD: @ 82145CD
	.i18n 4247

RustboroCity_PokemonSchool_Text_214604: @ 8214604
	.i18n 4248

RustboroCity_PokemonSchool_Text_214669: @ 8214669
	.i18n 4249

RustboroCity_PokemonSchool_Text_214719: @ 8214719
	.i18n 4250

RustboroCity_PokemonSchool_Text_2147A2: @ 82147A2
	.i18n 4251

RustboroCity_PokemonSchool_Text_2148C0: @ 82148C0
	.i18n 4252

RustboroCity_PokemonSchool_Text_214A5F: @ 8214A5F
	.i18n 4253

RustboroCity_PokemonSchool_Text_214AB6: @ 8214AB6
	.i18n 4254

RustboroCity_PokemonSchool_Text_214B8A: @ 8214B8A
	.i18n 4255

