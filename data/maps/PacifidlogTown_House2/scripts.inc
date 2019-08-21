PacifidlogTown_House2_MapScripts:: @ 8203791
	.byte 0

PacifidlogTown_House2_EventScript_203792:: @ 8203792
	lock
	faceplayer
	dotimebasedevents
	call PacifidlogTown_House2_EventScript_2037DE
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_20387E
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_2037F8
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_203801
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	compare VAR_RESULT, 4
	goto_if_ge PacifidlogTown_House2_EventScript_203816
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	compare VAR_RESULT, 2
	goto_if_ge PacifidlogTown_House2_EventScript_203845
	goto PacifidlogTown_House2_EventScript_20384F
	end

PacifidlogTown_House2_EventScript_2037DE:: @ 82037DE
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, Common_EventScript_NopReturn
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
	compare VAR_RESULT, 0
	call_if_eq PacifidlogTown_House2_EventScript_203812
	return

PacifidlogTown_House2_EventScript_2037F8:: @ 82037F8
	msgbox PacifidlogTown_House2_Text_20395B, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_203801:: @ 8203801
	msgbox PacifidlogTown_House2_Text_2038C7, MSGBOX_DEFAULT
	msgbox PacifidlogTown_House2_Text_20395B, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_203812:: @ 8203812
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	return

PacifidlogTown_House2_EventScript_203816:: @ 8203816
	msgbox PacifidlogTown_House2_Text_20396D, MSGBOX_DEFAULT
	giveitem_std ITEM_TM27
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	special SetPacifidlogTMReceivedDay
	msgbox PacifidlogTown_House2_Text_203A85, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_203845:: @ 8203845
	msgbox PacifidlogTown_House2_Text_2039CE, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_20384F:: @ 820384F
	msgbox PacifidlogTown_House2_Text_203A2F, MSGBOX_DEFAULT
	giveitem_std ITEM_TM21
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	special SetPacifidlogTMReceivedDay
	msgbox PacifidlogTown_House2_Text_203A85, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_20387E:: @ 820387E
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
	buffernumberstring 0, VAR_RESULT
	msgbox PacifidlogTown_House2_Text_203AF4, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_203891:: @ 8203891
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, 0
	msgbox PacifidlogTown_House2_Text_203B8D, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_203B9D, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_2038AC:: @ 82038AC
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, 2
	msgbox PacifidlogTown_House2_Text_203BCE, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_203BDF, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_Text_2038C7: @ 82038C7
	.i18n 3393

PacifidlogTown_House2_Text_20395B: @ 820395B
	.i18n 3394

PacifidlogTown_House2_Text_20396D: @ 820396D
	.i18n 3395

PacifidlogTown_House2_Text_2039CE: @ 82039CE
	.i18n 3396

PacifidlogTown_House2_Text_203A2F: @ 8203A2F
	.i18n 3397

PacifidlogTown_House2_Text_203A85: @ 8203A85
	.i18n 3398

PacifidlogTown_House2_Text_203AF4: @ 8203AF4
	.i18n 3399

PacifidlogTown_House2_Text_203B8D: @ 8203B8D
	.i18n 3400

PacifidlogTown_House2_Text_203B9D: @ 8203B9D
	.i18n 3401

PacifidlogTown_House2_Text_203BCE: @ 8203BCE
	.i18n 3402

PacifidlogTown_House2_Text_203BDF: @ 8203BDF
	.i18n 3403

