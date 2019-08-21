RustboroCity_Flat1_2F_MapScripts:: @ 8215139
	.byte 0

RustboroCity_Flat1_2F_EventScript_21513A:: @ 821513A
	lock
	faceplayer
	specialvar VAR_RESULT, TryBufferWaldaPhrase
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_Flat1_2F_EventScript_21518D
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Flat1_2F_EventScript_2151AD

RustboroCity_Flat1_2F_EventScript_215157:: @ 8215157
	special DoWaldaNamingScreen
	waitstate
	compare VAR_0x8004, 1
	goto_if_eq RustboroCity_Flat1_2F_EventScript_2151D7
	compare VAR_0x8004, 2
	goto_if_eq RustboroCity_Flat1_2F_EventScript_2151E1
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Flat1_2F_EventScript_2151F8
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_Flat1_2F_EventScript_215221
	end

RustboroCity_Flat1_2F_EventScript_21518D:: @ 821518D
	msgbox RustboroCity_Flat1_2F_Text_2152FA, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_Flat1_2F_EventScript_2151CD
	msgbox RustboroCity_Flat1_2F_Text_2154AD, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_215157

RustboroCity_Flat1_2F_EventScript_2151AD:: @ 82151AD
	msgbox RustboroCity_Flat1_2F_Text_215448, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_Flat1_2F_EventScript_2151CD
	msgbox RustboroCity_Flat1_2F_Text_2154AD, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_215157

RustboroCity_Flat1_2F_EventScript_2151CD:: @ 82151CD
	msgbox RustboroCity_Flat1_2F_Text_2154E7, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_2151D7:: @ 82151D7
	msgbox RustboroCity_Flat1_2F_Text_2156E3, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_2151E1:: @ 82151E1
	msgbox RustboroCity_Flat1_2F_Text_21561E, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_215238
	msgbox RustboroCity_Flat1_2F_Text_215699, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_2151F8:: @ 82151F8
	msgbox RustboroCity_Flat1_2F_Text_215535, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_215238
	msgbox RustboroCity_Flat1_2F_Text_215565, MSGBOX_DEFAULT
	applymovement 6, Common_Movement_FacePlayer
	waitmovement 0
	msgbox RustboroCity_Flat1_2F_Text_215792, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_215221:: @ 8215221
	msgbox RustboroCity_Flat1_2F_Text_2155A4, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_215238
	msgbox RustboroCity_Flat1_2F_Text_2155D4, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_215238:: @ 8215238
	turnobject 6, 4
	return

RustboroCity_Flat1_2F_EventScript_21523D:: @ 821523D
	msgbox RustboroCity_Flat1_2F_Text_21524F, MSGBOX_NPC
	end

RustboroCity_Flat1_2F_EventScript_215246:: @ 8215246
	msgbox RustboroCity_Flat1_2F_Text_215923, MSGBOX_SIGN
	end

RustboroCity_Flat1_2F_Text_21524F: @ 821524F
	.i18n 4174

RustboroCity_Flat1_2F_Text_2152FA: @ 82152FA
	.i18n 4175

RustboroCity_Flat1_2F_Text_215448: @ 8215448
	.i18n 4176

RustboroCity_Flat1_2F_Text_2154AD: @ 82154AD
	.i18n 4177

RustboroCity_Flat1_2F_Text_2154E7: @ 82154E7
	.i18n 4178

RustboroCity_Flat1_2F_Text_215535: @ 8215535
	.i18n 4179

RustboroCity_Flat1_2F_Text_215565: @ 8215565
	.i18n 4180

RustboroCity_Flat1_2F_Text_2155A4: @ 82155A4
	.i18n 4181

RustboroCity_Flat1_2F_Text_2155D4: @ 82155D4
	.i18n 4182

RustboroCity_Flat1_2F_Text_21561E: @ 821561E
	.i18n 4183

RustboroCity_Flat1_2F_Text_215699: @ 8215699
	.i18n 4184

RustboroCity_Flat1_2F_Text_2156E3: @ 82156E3
	.i18n 4185

RustboroCity_Flat1_2F_Text_215792: @ 8215792
	.i18n 4186

RustboroCity_Flat1_2F_Text_215923: @ 8215923
	.i18n 4187

