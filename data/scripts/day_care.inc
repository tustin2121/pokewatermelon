Route117_EventScript_291C18:: @ 8291C18
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, 1
	goto_if_eq Route117_EventScript_291C4D
	compare VAR_RESULT, 2
	goto_if_eq Route117_EventScript_291CD1
	compare VAR_RESULT, 3
	goto_if_eq Route117_EventScript_291CE8
	msgbox Route117_Text_291FCF, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_291C4D:: @ 8291C4D
	msgbox Route117_Text_29205D, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_EventScript_291C83
	msgbox Route117_Text_2922C6, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_EventScript_291C83
	msgbox Route117_Text_292149, MSGBOX_DEFAULT
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

Route117_EventScript_291C83:: @ 8291C83
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	compare VAR_RESULT, 6
	goto_if_ne Route117_EventScript_291C9D
	msgbox Route117_Text_29216A, MSGBOX_DEFAULT
	release
	end

Route117_EventScript_291C9D:: @ 8291C9D
	message Route117_Text_2921A4
	playfanfare MUS_FANFA1
	waitfanfare
	waitbuttonpress
	msgbox Route117_Text_2921CF, MSGBOX_DEFAULT
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

Route117_EventScript_291CB7:: @ 8291CB7
	specialvar VAR_RESULT, sub_8071614
	compare VAR_RESULT, 1
	call_if_eq Route117_EventScript_291CC8
	return

Route117_EventScript_291CC8:: @ 8291CC8
	msgbox Route117_Text_2921E5, MSGBOX_DEFAULT
	return

Route117_EventScript_291CD1:: @ 8291CD1
	special GetDaycareMonNicknames
	msgbox Route117_Text_292114, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_EventScript_291CB7
	release
	end

Route117_EventScript_291CE8:: @ 8291CE8
	special GetDaycareMonNicknames
	msgbox Route117_Text_292299, MSGBOX_DEFAULT
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 0
	call Route117_EventScript_291CB7
	setvar VAR_0x8004, 1
	call Route117_EventScript_291CB7
	release
	end

Route117_PokemonDayCare_EventScript_291D11:: @ 8291D11
	lock
	faceplayer
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291E0B
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291E2F
	compare VAR_RESULT, 3
	goto_if_eq Route117_PokemonDayCare_EventScript_291F5C
	msgbox Route117_PokemonDayCare_Text_2922F4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291D56
	msgbox Route117_PokemonDayCare_Text_292416, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291D56:: @ 8291D56
	specialvar VAR_RESULT, CountPartyNonEggMons
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291DED
	specialvar VAR_RESULT, sub_80722E0
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291E01
	msgbox Route117_PokemonDayCare_Text_292349, MSGBOX_DEFAULT
	fadescreen 1
	special ChooseSendDaycareMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq Route117_PokemonDayCare_EventScript_291DCA
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	compare VAR_RESULT, 0
	goto_if_eq Route117_PokemonDayCare_EventScript_291DF7
	specialvar VAR_0x8005, GetSelectedMonNickAndSpecies
	waitse
	playmoncry VAR_0x8005, 0
	msgbox Route117_PokemonDayCare_Text_292370, MSGBOX_DEFAULT
	waitmoncry
	special StoreSelectedPokemonInDaycare
	incrementgamestat 47
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291DD4
	release
	end

Route117_PokemonDayCare_EventScript_291DCA:: @ 8291DCA
	msgbox Route117_PokemonDayCare_Text_292476, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291DD4:: @ 8291DD4
	msgbox Route117_PokemonDayCare_Text_2923AF, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291D56
	goto Route117_PokemonDayCare_EventScript_291DCA
	end

Route117_PokemonDayCare_EventScript_291DED:: @ 8291DED
	msgbox Route117_PokemonDayCare_Text_2925BB, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291DF7:: @ 8291DF7
	msgbox Route117_PokemonDayCare_Text_292617, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291E01:: @ 8291E01
	msgbox Route117_PokemonDayCare_Text_29266D, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291E0B:: @ 8291E0B
	msgbox Route117_PokemonDayCare_Text_2923F6, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291E15:: @ 8291E15
	msgbox Route117_PokemonDayCare_Text_2924CC, MSGBOX_DEFAULT
	return

Route117_PokemonDayCare_EventScript_291E1E:: @ 8291E1E
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
	compare VAR_RESULT, 0
	call_if_ne Route117_PokemonDayCare_EventScript_291E15
	return

Route117_PokemonDayCare_EventScript_291E2F:: @ 8291E2F
	msgbox Route117_PokemonDayCare_Text_292488, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_PokemonDayCare_EventScript_291E1E
	msgbox Route117_PokemonDayCare_Text_2923AF, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291D56
	msgbox Route117_PokemonDayCare_Text_2925F6, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291E6D
	goto Route117_PokemonDayCare_EventScript_291DCA
	end

Route117_PokemonDayCare_EventScript_291E6D:: @ 8291E6D
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	compare VAR_RESULT, 6
	goto_if_eq Route117_PokemonDayCare_EventScript_291F3D
	specialvar VAR_RESULT, GetDaycareState
	setvar VAR_0x8004, 0
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291EAC
	special ShowDaycareLevelMenu
	waitstate
	copyvar VAR_0x8004, VAR_RESULT
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291DCA
	goto Route117_PokemonDayCare_EventScript_291EAC
	end

Route117_PokemonDayCare_EventScript_291EAC:: @ 8291EAC
	special GetDaycareCost
	msgbox Route117_PokemonDayCare_Text_292549, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291EC8
	goto Route117_PokemonDayCare_EventScript_291DCA
	end

Route117_PokemonDayCare_EventScript_291EC8:: @ 8291EC8
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291EE2
	msgbox Route117_PokemonDayCare_Text_292432, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291EE2:: @ 8291EE2
	applymovement 1, Route117_PokemonDayCare_Movement_291F47
	waitmovement 0
	specialvar VAR_RESULT, TakePokemonFromDaycare
	special SubtractMoneyFromVar0x8005
	playse SE_REGI
	msgbox Route117_PokemonDayCare_Text_292575, MSGBOX_DEFAULT
	waitse
	playmoncry VAR_RESULT, 0
	msgbox Route117_PokemonDayCare_Text_292593, MSGBOX_DEFAULT
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291F24
	goto Route117_PokemonDayCare_EventScript_291DCA
	end

Route117_PokemonDayCare_EventScript_291F24:: @ 8291F24
	msgbox Route117_PokemonDayCare_Text_29244F, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291E6D
	goto Route117_PokemonDayCare_EventScript_291DCA
	end

Route117_PokemonDayCare_EventScript_291F3D:: @ 8291F3D
	msgbox Route117_PokemonDayCare_Text_2924EF, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_Movement_291F47: @ 8291F47
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	walk_slow_up
	set_invisible
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	set_visible
	walk_slow_down
	step_end

Route117_PokemonDayCare_EventScript_291F5B:: @ 8291F5B
	end

Route117_PokemonDayCare_EventScript_291F5C:: @ 8291F5C
	msgbox Route117_PokemonDayCare_Text_292488, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route117_PokemonDayCare_EventScript_291E1E
	setvar VAR_0x8004, 1
	call Route117_PokemonDayCare_EventScript_291E1E
	msgbox Route117_PokemonDayCare_Text_2925F6, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route117_PokemonDayCare_EventScript_291E6D
	msgbox Route117_PokemonDayCare_Text_292476, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_291F95:: @ 8291F95
	special ShowDaycareLevelMenu
	waitstate
	compare VAR_RESULT, 2
	goto_if_eq Route117_PokemonDayCare_EventScript_291DCA
	copyvar VAR_0x8004, VAR_RESULT
	specialvar VAR_RESULT, TakePokemonFromDaycare
	msgbox Route117_PokemonDayCare_Text_292575, MSGBOX_DEFAULT
	msgbox Route117_PokemonDayCare_Text_292476, MSGBOX_DEFAULT
	release
	end

EventScript_EggHatch:: @ 8291FC0
	lockall
	msgbox Text_292668, MSGBOX_DEFAULT
	special EggHatch
	waitstate
	releaseall
	end

Route117_Text_291FCF: @ 8291FCF
	.i18n 5367

Route117_Text_29205D: @ 829205D
	.i18n 5368

Route117_Text_292114: @ 8292114
	.i18n 5369

Route117_Text_292149: @ 8292149
	.i18n 5370

Route117_Text_29216A: @ 829216A
	.i18n 5371

Route117_Text_2921A4: @ 82921A4
	.i18n 5372

Route117_Text_2921CF: @ 82921CF
	.i18n 5373

Route117_Text_2921E5: @ 82921E5
	.i18n 5374

Route117_Text_29225A: @ 829225A
	.i18n 5375

Route117_Text_292299: @ 8292299
	.i18n 5376

Route117_Text_2922C6: @ 82922C6
	.i18n 5377

Route117_PokemonDayCare_Text_2922F4: @ 82922F4
	.i18n 5378

Route117_PokemonDayCare_Text_292349: @ 8292349
	.i18n 5379

Route117_PokemonDayCare_Text_292370: @ 8292370
	.i18n 5380

Route117_PokemonDayCare_Text_2923AF: @ 82923AF
	.i18n 5381

Route117_PokemonDayCare_Text_2923F6: @ 82923F6
	.i18n 5382

Route117_PokemonDayCare_Text_292416: @ 8292416
	.i18n 5383

Route117_PokemonDayCare_Text_292432: @ 8292432
	.i18n 5384

Route117_PokemonDayCare_Text_29244F: @ 829244F
	.i18n 5385

Route117_PokemonDayCare_Text_292476: @ 8292476
	.i18n 5386

Route117_PokemonDayCare_Text_292488: @ 8292488
	.i18n 5387

Route117_PokemonDayCare_Text_2924CC: @ 82924CC
	.i18n 5388

Route117_PokemonDayCare_Text_2924EF: @ 82924EF
	.i18n 5389

Route117_PokemonDayCare_Text_292527: @ 8292527
	.i18n 5390

Route117_PokemonDayCare_Text_292549: @ 8292549
	.i18n 5391

Route117_PokemonDayCare_Text_292575: @ 8292575
	.i18n 5392

Route117_PokemonDayCare_Text_292593: @ 8292593
	.i18n 5393

Route117_PokemonDayCare_Text_2925BB: @ 82925BB
	.i18n 5394

Route117_PokemonDayCare_Text_2925F6: @ 82925F6
	.i18n 5395

Route117_PokemonDayCare_Text_292617: @ 8292617
	.i18n 5396

Text_292668: @ 8292668
	.i18n 5397

Route117_PokemonDayCare_Text_29266D: @ 829266D
	.i18n 5398
