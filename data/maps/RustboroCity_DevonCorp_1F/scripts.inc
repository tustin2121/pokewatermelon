RustboroCity_DevonCorp_1F_MapScripts:: @ 8211245
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
	.byte 0

RustboroCity_DevonCorp_1F_OnTransition: @ 821124B
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_211255
	end

RustboroCity_DevonCorp_1F_EventScript_211255:: @ 8211255
	setobjectxyperm 2, 14, 2
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return

RustboroCity_DevonCorp_1F_EventScript_211261:: @ 8211261
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_211289
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_21127F
	msgbox RustboroCity_DevonCorp_1F_Text_2113D1, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_21127F:: @ 821127F
	msgbox RustboroCity_DevonCorp_1F_Text_211446, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_211289:: @ 8211289
	msgbox RustboroCity_DevonCorp_1F_Text_2114DE, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_211293:: @ 8211293
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_2112BA
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_2112C4
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_2112C4
	msgbox RustboroCity_DevonCorp_1F_Text_21151B, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112BA:: @ 82112BA
	msgbox RustboroCity_DevonCorp_1F_Text_211585, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112C4:: @ 82112C4
	msgbox RustboroCity_DevonCorp_1F_Text_211558, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112CE:: @ 82112CE
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_2112F5
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_2112FF
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_2112FF
	msgbox RustboroCity_DevonCorp_1F_Text_21131B, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112F5:: @ 82112F5
	msgbox RustboroCity_DevonCorp_1F_Text_21131B, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112FF:: @ 82112FF
	msgbox RustboroCity_DevonCorp_1F_Text_21138B, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_211309:: @ 8211309
	msgbox RustboroCity_DevonCorp_1F_Text_2115AC, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_EventScript_211312:: @ 8211312
	msgbox RustboroCity_DevonCorp_1F_Text_211722, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_Text_21131B: @ 821131B
	.i18n 4130

RustboroCity_DevonCorp_1F_Text_21138B: @ 821138B
	.i18n 4131

RustboroCity_DevonCorp_1F_Text_2113D1: @ 82113D1
	.i18n 4132

RustboroCity_DevonCorp_1F_Text_211446: @ 8211446
	.i18n 4133

RustboroCity_DevonCorp_1F_Text_2114DE: @ 82114DE
	.i18n 4134

RustboroCity_DevonCorp_1F_Text_21151B: @ 821151B
	.i18n 4135

RustboroCity_DevonCorp_1F_Text_211558: @ 8211558
	.i18n 4136

RustboroCity_DevonCorp_1F_Text_211585: @ 8211585
	.i18n 4137

RustboroCity_DevonCorp_1F_Text_2115AC: @ 82115AC
	.i18n 4138

RustboroCity_DevonCorp_1F_Text_211722: @ 8211722
	.i18n 4139

