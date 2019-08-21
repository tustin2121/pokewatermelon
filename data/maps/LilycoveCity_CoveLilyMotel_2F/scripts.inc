LilycoveCity_CoveLilyMotel_2F_MapScripts:: @ 82186D2
	.byte 0

LilycoveCity_CoveLilyMotel_2F_EventScript_2186D3:: @ 82186D3
	lock
	faceplayer
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_2186F9
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_21870F
	specialvar VAR_RESULT, HasAllHoennMons
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_CoveLilyMotel_2F_EventScript_218702
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_2186F9:: @ 82186F9
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218774, MSGBOX_DEFAULT
	return

LilycoveCity_CoveLilyMotel_2F_EventScript_218702:: @ 8218702
	setflag FLAG_TEMP_2
	playfanfare MUS_FANFA4
	waitfanfare
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_21870F
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21870F:: @ 821870F
	message LilycoveCity_CoveLilyMotel_2F_Text_21881C
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	special Special_ShowDiploma
	waitstate
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218720:: @ 8218720
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_2188D6, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218729:: @ 8218729
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_21892B, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218732:: @ 8218732
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_21896C, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21873B:: @ 821873B
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218A21, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_218744:: @ 8218744
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218A5B, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21874D:: @ 821874D
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_21876A
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218ACF, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_21876A:: @ 821876A
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_218C33, MSGBOX_DEFAULT
	release
	end

LilycoveCity_CoveLilyMotel_2F_Text_218774: @ 8218774
	.i18n 2550

LilycoveCity_CoveLilyMotel_2F_Text_21881C: @ 821881C
	.i18n 2551

LilycoveCity_CoveLilyMotel_2F_Text_2188D6: @ 82188D6
	.i18n 2552

LilycoveCity_CoveLilyMotel_2F_Text_21892B: @ 821892B
	.i18n 2553

LilycoveCity_CoveLilyMotel_2F_Text_21896C: @ 821896C
	.i18n 2554

LilycoveCity_CoveLilyMotel_2F_Text_218A21: @ 8218A21
	.i18n 2555

LilycoveCity_CoveLilyMotel_2F_Text_218A5B: @ 8218A5B
	.i18n 2556

LilycoveCity_CoveLilyMotel_2F_Text_218ACF: @ 8218ACF
	.i18n 2557

LilycoveCity_CoveLilyMotel_2F_Text_218C33: @ 8218C33
	.i18n 2558

