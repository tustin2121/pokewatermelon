RustboroCity_DevonCorp_2F_MapScripts:: @ 8211857
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0

RustboroCity_DevonCorp_2F_OnTransition: @ 821185D
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_211869
	end

RustboroCity_DevonCorp_2F_EventScript_211869:: @ 8211869
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return

RustboroCity_DevonCorp_2F_EventScript_21186F:: @ 821186F
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_211869
	msgbox RustboroCity_DevonCorp_2F_Text_211BFB, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211886:: @ 8211886
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_211869
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_2118A6
	msgbox RustboroCity_DevonCorp_2F_Text_211C50, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2118A6:: @ 82118A6
	msgbox RustboroCity_DevonCorp_2F_Text_211C99, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2118B0:: @ 82118B0
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_211869
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_2118D0
	msgbox RustboroCity_DevonCorp_2F_Text_211D9F, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2118D0:: @ 82118D0
	msgbox RustboroCity_DevonCorp_2F_Text_211DF3, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2118DA:: @ 82118DA
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_211869
	msgbox RustboroCity_DevonCorp_2F_Text_211EE0, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2118F1:: @ 82118F1
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211A03
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_2119F9
	msgbox RustboroCity_DevonCorp_2F_Text_211F48, MSGBOX_DEFAULT
	checkitem ITEM_ROOT_FOSSIL, 1
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211933
	checkitem ITEM_CLAW_FOSSIL, 1
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211991
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211933:: @ 8211933
	closemessage
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_211FA6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_2119EF
	checkitem ITEM_CLAW_FOSSIL, 1
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211B84
	goto RustboroCity_DevonCorp_2F_EventScript_211974
	end

RustboroCity_DevonCorp_2F_EventScript_211974:: @ 8211974
	bufferitemname 0, ITEM_ROOT_FOSSIL
	msgbox RustboroCity_DevonCorp_2F_Text_212153, MSGBOX_DEFAULT
	takeitem ITEM_ROOT_FOSSIL, 1
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211991:: @ 8211991
	closemessage
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 5, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_211FA6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_2119EF
	checkitem ITEM_ROOT_FOSSIL, 1
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211B84
	goto RustboroCity_DevonCorp_2F_EventScript_2119D2
	end

RustboroCity_DevonCorp_2F_EventScript_2119D2:: @ 82119D2
	bufferitemname 0, ITEM_CLAW_FOSSIL
	msgbox RustboroCity_DevonCorp_2F_Text_212153, MSGBOX_DEFAULT
	takeitem ITEM_CLAW_FOSSIL, 1
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2119EF:: @ 82119EF
	msgbox RustboroCity_DevonCorp_2F_Text_212046, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_2119F9:: @ 82119F9
	msgbox RustboroCity_DevonCorp_2F_Text_2121A2, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211A03:: @ 8211A03
	compare VAR_WHICH_FOSSIL_REVIVED, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211A1A
	compare VAR_WHICH_FOSSIL_REVIVED, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211A2C
	end

RustboroCity_DevonCorp_2F_EventScript_211A1A:: @ 8211A1A
	bufferspeciesname 1, SPECIES_LILEEP
	msgbox RustboroCity_DevonCorp_2F_Text_212251, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_2F_EventScript_211A3E
	end

RustboroCity_DevonCorp_2F_EventScript_211A2C:: @ 8211A2C
	bufferspeciesname 1, SPECIES_ANORITH
	msgbox RustboroCity_DevonCorp_2F_Text_212251, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_2F_EventScript_211AE1
	end

RustboroCity_DevonCorp_2F_EventScript_211A3E:: @ 8211A3E
	setvar VAR_TEMP_1, SPECIES_LILEEP
	givemon SPECIES_LILEEP, 20, ITEM_NONE, 0x0, 0x0, 0
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211A6E
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211A96
	goto RustboroCity_DevonCorp_2F_EventScript_273811
	end

RustboroCity_DevonCorp_2F_EventScript_211A6E:: @ 8211A6E
	call RustboroCity_DevonCorp_2F_EventScript_211AC4
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211AD7
	call RustboroCity_DevonCorp_2F_EventScript_27378B
	call Common_EventScript_NameReceivedPokemon
	goto RustboroCity_DevonCorp_2F_EventScript_211AD7
	end

RustboroCity_DevonCorp_2F_EventScript_211A96:: @ 8211A96
	call RustboroCity_DevonCorp_2F_EventScript_211AC4
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211AB9
	call RustboroCity_DevonCorp_2F_EventScript_273797
	goto RustboroCity_DevonCorp_2F_EventScript_211AB9
	end

RustboroCity_DevonCorp_2F_EventScript_211AB9:: @ 8211AB9
	call RustboroCity_DevonCorp_2F_EventScript_2737A0
	goto RustboroCity_DevonCorp_2F_EventScript_211AD7
	end

RustboroCity_DevonCorp_2F_EventScript_211AC4:: @ 8211AC4
	bufferspeciesname 1, SPECIES_LILEEP
	playfanfare MUS_FANFA4
	message RustboroCity_DevonCorp_2F_Text_2122CB
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_LILEEP
	return

RustboroCity_DevonCorp_2F_EventScript_211AD7:: @ 8211AD7
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211AE1:: @ 8211AE1
	setvar VAR_TEMP_1, SPECIES_ANORITH
	givemon SPECIES_ANORITH, 20, ITEM_NONE, 0x0, 0x0, 0
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211B11
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211B39
	goto RustboroCity_DevonCorp_2F_EventScript_273811
	end

RustboroCity_DevonCorp_2F_EventScript_211B11:: @ 8211B11
	call RustboroCity_DevonCorp_2F_EventScript_211B67
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211B7A
	call RustboroCity_DevonCorp_2F_EventScript_27378B
	call Common_EventScript_NameReceivedPokemon
	goto RustboroCity_DevonCorp_2F_EventScript_211B7A
	end

RustboroCity_DevonCorp_2F_EventScript_211B39:: @ 8211B39
	call RustboroCity_DevonCorp_2F_EventScript_211B67
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_211B5C
	call RustboroCity_DevonCorp_2F_EventScript_273797
	goto RustboroCity_DevonCorp_2F_EventScript_211B5C
	end

RustboroCity_DevonCorp_2F_EventScript_211B5C:: @ 8211B5C
	call RustboroCity_DevonCorp_2F_EventScript_2737A0
	goto RustboroCity_DevonCorp_2F_EventScript_211B7A
	end

RustboroCity_DevonCorp_2F_EventScript_211B67:: @ 8211B67
	bufferspeciesname 1, SPECIES_ANORITH
	playfanfare MUS_FANFA4
	message RustboroCity_DevonCorp_2F_Text_2122CB
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_ANORITH
	return

RustboroCity_DevonCorp_2F_EventScript_211B7A:: @ 8211B7A
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211B84:: @ 8211B84
	message RustboroCity_DevonCorp_2F_Text_212092
	waitmessage
	multichoice 17, 6, 93, 0
	switch VAR_RESULT
	case 0, RustboroCity_DevonCorp_2F_EventScript_211BC1
	case 1, RustboroCity_DevonCorp_2F_EventScript_211BC7
	case 2, RustboroCity_DevonCorp_2F_EventScript_211BCD
	case 127, RustboroCity_DevonCorp_2F_EventScript_211BCD
	end

RustboroCity_DevonCorp_2F_EventScript_211BC1:: @ 8211BC1
	goto RustboroCity_DevonCorp_2F_EventScript_2119D2
	end

RustboroCity_DevonCorp_2F_EventScript_211BC7:: @ 8211BC7
	goto RustboroCity_DevonCorp_2F_EventScript_211974
	end

RustboroCity_DevonCorp_2F_EventScript_211BCD:: @ 8211BCD
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211BCF:: @ 8211BCF
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_211869
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_211BF1
	msgbox RustboroCity_DevonCorp_2F_Text_212338, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_211BF1:: @ 8211BF1
	msgbox RustboroCity_DevonCorp_2F_Text_212386, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_Text_211BFB: @ 8211BFB
	.i18n 4140

RustboroCity_DevonCorp_2F_Text_211C50: @ 8211C50
	.i18n 4141

RustboroCity_DevonCorp_2F_Text_211C99: @ 8211C99
	.i18n 4142

RustboroCity_DevonCorp_2F_Text_211D9F: @ 8211D9F
	.i18n 4143

RustboroCity_DevonCorp_2F_Text_211DF3: @ 8211DF3
	.i18n 4144

RustboroCity_DevonCorp_2F_Text_211EE0: @ 8211EE0
	.i18n 4145

RustboroCity_DevonCorp_2F_Text_211F48: @ 8211F48
	.i18n 4146

RustboroCity_DevonCorp_2F_Text_211FA6: @ 8211FA6
	.i18n 4147

RustboroCity_DevonCorp_2F_Text_212046: @ 8212046
	.i18n 4148

RustboroCity_DevonCorp_2F_Text_212092: @ 8212092
	.i18n 4149

RustboroCity_DevonCorp_2F_Text_212153: @ 8212153
	.i18n 4150

RustboroCity_DevonCorp_2F_Text_2121A2: @ 82121A2
	.i18n 4151

RustboroCity_DevonCorp_2F_Text_212251: @ 8212251
	.i18n 4152

RustboroCity_DevonCorp_2F_Text_2122CB: @ 82122CB
	.i18n 4153

RustboroCity_DevonCorp_2F_Text_2122F5: @ 82122F5
	.i18n 4154

RustboroCity_DevonCorp_2F_Text_212338: @ 8212338
	.i18n 4155

RustboroCity_DevonCorp_2F_Text_212386: @ 8212386
	.i18n 4156

