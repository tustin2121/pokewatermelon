SlateportCity_House1_MapScripts:: @ 8209AA4
	.byte 0

SlateportCity_House1_EventScript_209AA5:: @ 8209AA5
	lock
	faceplayer
	msgbox SlateportCity_House1_Text_209B8E, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_House1_EventScript_209AC6
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_House1_EventScript_209AE9
	end

SlateportCity_House1_EventScript_209AC6:: @ 8209AC6
	msgbox SlateportCity_House1_Text_209BFF, MSGBOX_DEFAULT
	special sub_81B94B0
	waitstate
	compare VAR_0x8004, 255
	goto_if_ne SlateportCity_House1_EventScript_209AF3
	compare VAR_0x8004, 255
	goto_if_eq SlateportCity_House1_EventScript_209AE9
	end

SlateportCity_House1_EventScript_209AE9:: @ 8209AE9
	msgbox SlateportCity_House1_Text_209D42, MSGBOX_DEFAULT
	release
	end

SlateportCity_House1_EventScript_209AF3:: @ 8209AF3
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, 412
	goto_if_eq SlateportCity_House1_EventScript_209B46
	special TV_CopyNicknameToStringVar1AndEnsureTerminated
	special TV_CheckMonOTIDEqualsPlayerID
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_House1_EventScript_209B50
	specialvar VAR_RESULT, MonOTNameMatchesPlayer
	special TV_CopyNicknameToStringVar1AndEnsureTerminated
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_House1_EventScript_209B50
	msgbox SlateportCity_House1_Text_209C2B, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_House1_EventScript_209B5A
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_House1_EventScript_209AE9
	end

SlateportCity_House1_EventScript_209B46:: @ 8209B46
	msgbox SlateportCity_House1_Text_209E74, MSGBOX_DEFAULT
	release
	end

SlateportCity_House1_EventScript_209B50:: @ 8209B50
	msgbox SlateportCity_House1_Text_209DF0, MSGBOX_DEFAULT
	release
	end

SlateportCity_House1_EventScript_209B5A:: @ 8209B5A
	msgbox SlateportCity_House1_Text_209CA4, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPokemon
	specialvar VAR_RESULT, TV_PutNameRaterShowOnTheAirIfNicknameChanged
	special TV_CopyNicknameToStringVar1AndEnsureTerminated
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_House1_EventScript_209B84
	msgbox SlateportCity_House1_Text_209D5E, MSGBOX_DEFAULT
	release
	end

SlateportCity_House1_EventScript_209B84:: @ 8209B84
	msgbox SlateportCity_House1_Text_209CD4, MSGBOX_DEFAULT
	release
	end

SlateportCity_House1_Text_209B8E: @ 8209B8E
	.i18n 4487

SlateportCity_House1_Text_209BFF: @ 8209BFF
	.i18n 4488

SlateportCity_House1_Text_209C2B: @ 8209C2B
	.i18n 4489

SlateportCity_House1_Text_209CA4: @ 8209CA4
	.i18n 4490

SlateportCity_House1_Text_209CD4: @ 8209CD4
	.i18n 4491

SlateportCity_House1_Text_209D42: @ 8209D42
	.i18n 4492

SlateportCity_House1_Text_209D5E: @ 8209D5E
	.i18n 4493

SlateportCity_House1_Text_209DF0: @ 8209DF0
	.i18n 4494

SlateportCity_House1_Text_209E74: @ 8209E74
	.i18n 4495

