BattleFrontier_Lounge6_MapScripts:: @ 8264FEC
	.byte 0

BattleFrontier_Lounge6_EventScript_264FED:: @ 8264FED
	lock
	faceplayer
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_265083
	setvar VAR_0x8008, 3
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox BattleFrontier_Lounge6_Text_26508D, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Lounge6_EventScript_26506B
	special sub_81B94B0
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq BattleFrontier_Lounge6_EventScript_26506B
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne BattleFrontier_Lounge6_EventScript_265075
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox BattleFrontier_Lounge6_Text_265128, MSGBOX_DEFAULT
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release
	end

BattleFrontier_Lounge6_EventScript_26506B:: @ 826506B
	msgbox BattleFrontier_Lounge6_Text_2651CB, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_265075:: @ 8265075
	bufferspeciesname 0, VAR_0x8009
	msgbox BattleFrontier_Lounge6_Text_26518D, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_265083:: @ 8265083
	msgbox BattleFrontier_Lounge6_Text_26520E, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_Text_26508D: @ 826508D
	.i18n 1902

BattleFrontier_Lounge6_Text_265128: @ 8265128
	.i18n 1903

BattleFrontier_Lounge6_Text_26518D: @ 826518D
	.i18n 1904

BattleFrontier_Lounge6_Text_2651CB: @ 82651CB
	.i18n 1905

BattleFrontier_Lounge6_Text_26520E: @ 826520E
	.i18n 1906
