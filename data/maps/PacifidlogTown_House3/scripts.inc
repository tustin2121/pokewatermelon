PacifidlogTown_House3_MapScripts:: @ 8203C10
	.byte 0

PacifidlogTown_House3_EventScript_203C11:: @ 8203C11
	lock
	faceplayer
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_203CAB
	setvar VAR_0x8008, 2
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PacifidlogTown_House3_Text_203CBE, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House3_EventScript_203C93
	special sub_81B94B0
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq PacifidlogTown_House3_EventScript_203C93
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne PacifidlogTown_House3_EventScript_203C9D
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname 0, VAR_0x8009
	msgbox PacifidlogTown_House3_Text_203D87, MSGBOX_DEFAULT
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
	release
	end

PacifidlogTown_House3_EventScript_203C93:: @ 8203C93
	msgbox PacifidlogTown_House3_Text_203E12, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_203C9D:: @ 8203C9D
	bufferspeciesname 0, VAR_0x8009
	msgbox PacifidlogTown_House3_Text_203DDE, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_203CAB:: @ 8203CAB
	msgbox PacifidlogTown_House3_Text_203E7F, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_203CB5:: @ 8203CB5
	msgbox PacifidlogTown_House3_Text_203EF1, MSGBOX_NPC
	end

PacifidlogTown_House3_Text_203CBE: @ 8203CBE
	.i18n 3404

PacifidlogTown_House3_Text_203D87: @ 8203D87
	.i18n 3405

PacifidlogTown_House3_Text_203DDE: @ 8203DDE
	.i18n 3406

PacifidlogTown_House3_Text_203E12: @ 8203E12
	.i18n 3407

PacifidlogTown_House3_Text_203E7F: @ 8203E7F
	.i18n 3408

PacifidlogTown_House3_Text_203EF1: @ 8203EF1
	.i18n 3409

