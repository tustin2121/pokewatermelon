BattleFrontier_Lounge1_MapScripts:: @ 825E774
	.byte 0

BattleFrontier_Lounge1_EventScript_25E775:: @ 825E775
	lock
	faceplayer
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_25E7AD
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_25E7B6
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto BattleFrontier_Lounge1_EventScript_25E792
	end

BattleFrontier_Lounge1_EventScript_25E792:: @ 825E792
	special sub_81B94B0
	waitstate
	compare VAR_0x8004, 255
	goto_if_ne BattleFrontier_Lounge1_EventScript_25E7BF
	compare VAR_0x8004, 255
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E943
	end

BattleFrontier_Lounge1_EventScript_25E7AD:: @ 825E7AD
	msgbox BattleFrontier_Lounge1_Text_25E95F, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge1_EventScript_25E7B6:: @ 825E7B6
	msgbox BattleFrontier_Lounge1_Text_25EEF6, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge1_EventScript_25E7BF:: @ 825E7BF
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, 412
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E7FF
	special sub_8139D98
	compare VAR_0x8005, 90
	goto_if_le BattleFrontier_Lounge1_EventScript_25E87F
	compare VAR_0x8005, 120
	goto_if_le BattleFrontier_Lounge1_EventScript_25E88D
	compare VAR_0x8005, 150
	goto_if_le BattleFrontier_Lounge1_EventScript_25E89B
	compare VAR_0x8005, 151
	goto_if_ge BattleFrontier_Lounge1_EventScript_25E8A9
	end

BattleFrontier_Lounge1_EventScript_25E7FF:: @ 825E7FF
	msgbox BattleFrontier_Lounge1_Text_25EF5E, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E792
	end

BattleFrontier_Lounge1_EventScript_25E80D:: @ 825E80D
	compare VAR_0x8006, 0
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E8B7
	compare VAR_0x8006, 1
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E8C5
	compare VAR_0x8006, 2
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E8D3
	compare VAR_0x8006, 3
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E8E1
	compare VAR_0x8006, 4
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E8EF
	compare VAR_0x8006, 5
	goto_if_eq BattleFrontier_Lounge1_EventScript_25E8FD
	end

BattleFrontier_Lounge1_EventScript_25E850:: @ 825E850
	compare VAR_0x8007, 15
	goto_if_le BattleFrontier_Lounge1_EventScript_25E90B
	compare VAR_0x8007, 25
	goto_if_le BattleFrontier_Lounge1_EventScript_25E919
	compare VAR_0x8007, 30
	goto_if_le BattleFrontier_Lounge1_EventScript_25E927
	compare VAR_0x8007, 31
	goto_if_ge BattleFrontier_Lounge1_EventScript_25E935
	end

BattleFrontier_Lounge1_EventScript_25E87D:: @ 825E87D
	release
	end

BattleFrontier_Lounge1_EventScript_25E87F:: @ 825E87F
	msgbox BattleFrontier_Lounge1_Text_25EA92, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E80D
	end

BattleFrontier_Lounge1_EventScript_25E88D:: @ 825E88D
	msgbox BattleFrontier_Lounge1_Text_25EAD9, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E80D
	end

BattleFrontier_Lounge1_EventScript_25E89B:: @ 825E89B
	msgbox BattleFrontier_Lounge1_Text_25EB2A, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E80D
	end

BattleFrontier_Lounge1_EventScript_25E8A9:: @ 825E8A9
	msgbox BattleFrontier_Lounge1_Text_25EB6F, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E80D
	end

BattleFrontier_Lounge1_EventScript_25E8B7:: @ 825E8B7
	msgbox BattleFrontier_Lounge1_Text_25EBBB, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E850
	end

BattleFrontier_Lounge1_EventScript_25E8C5:: @ 825E8C5
	msgbox BattleFrontier_Lounge1_Text_25EBF8, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E850
	end

BattleFrontier_Lounge1_EventScript_25E8D3:: @ 825E8D3
	msgbox BattleFrontier_Lounge1_Text_25EC39, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E850
	end

BattleFrontier_Lounge1_EventScript_25E8E1:: @ 825E8E1
	msgbox BattleFrontier_Lounge1_Text_25ED0E, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E850
	end

BattleFrontier_Lounge1_EventScript_25E8EF:: @ 825E8EF
	msgbox BattleFrontier_Lounge1_Text_25EC7B, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E850
	end

BattleFrontier_Lounge1_EventScript_25E8FD:: @ 825E8FD
	msgbox BattleFrontier_Lounge1_Text_25ECC4, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E850
	end

BattleFrontier_Lounge1_EventScript_25E90B:: @ 825E90B
	msgbox BattleFrontier_Lounge1_Text_25ED4E, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E87D
	end

BattleFrontier_Lounge1_EventScript_25E919:: @ 825E919
	msgbox BattleFrontier_Lounge1_Text_25ED87, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E87D
	end

BattleFrontier_Lounge1_EventScript_25E927:: @ 825E927
	msgbox BattleFrontier_Lounge1_Text_25EDC1, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E87D
	end

BattleFrontier_Lounge1_EventScript_25E935:: @ 825E935
	msgbox BattleFrontier_Lounge1_Text_25EDF6, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_25E87D
	end

BattleFrontier_Lounge1_EventScript_25E943:: @ 825E943
	msgbox BattleFrontier_Lounge1_Text_25EE37, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_25E94D:: @ 825E94D
	msgbox BattleFrontier_Lounge1_Text_25EFDD, MSGBOX_NPC
	end

BattleFrontier_Lounge1_EventScript_25E956:: @ 825E956
	msgbox BattleFrontier_Lounge1_Text_25F020, MSGBOX_NPC
	end

BattleFrontier_Lounge1_Text_25E95F: @ 825E95F
	.i18n 1774

BattleFrontier_Lounge1_Text_25EA92: @ 825EA92
	.i18n 1775

BattleFrontier_Lounge1_Text_25EAD9: @ 825EAD9
	.i18n 1776

BattleFrontier_Lounge1_Text_25EB2A: @ 825EB2A
	.i18n 1777

BattleFrontier_Lounge1_Text_25EB6F: @ 825EB6F
	.i18n 1778

BattleFrontier_Lounge1_Text_25EBBB: @ 825EBBB
	.i18n 1779

BattleFrontier_Lounge1_Text_25EBF8: @ 825EBF8
	.i18n 1780

BattleFrontier_Lounge1_Text_25EC39: @ 825EC39
	.i18n 1781

BattleFrontier_Lounge1_Text_25EC7B: @ 825EC7B
	.i18n 1782

BattleFrontier_Lounge1_Text_25ECC4: @ 825ECC4
	.i18n 1783

BattleFrontier_Lounge1_Text_25ED0E: @ 825ED0E
	.i18n 1784

BattleFrontier_Lounge1_Text_25ED4E: @ 825ED4E
	.i18n 1785

BattleFrontier_Lounge1_Text_25ED87: @ 825ED87
	.i18n 1786

BattleFrontier_Lounge1_Text_25EDC1: @ 825EDC1
	.i18n 1787

BattleFrontier_Lounge1_Text_25EDF6: @ 825EDF6
	.i18n 1788

BattleFrontier_Lounge1_Text_25EE37: @ 825EE37
	.i18n 1789

BattleFrontier_Lounge1_Text_25EEA6: @ 825EEA6
	.i18n 1790

BattleFrontier_Lounge1_Text_25EEF6: @ 825EEF6
	.i18n 1791

BattleFrontier_Lounge1_Text_25EF5E: @ 825EF5E
	.i18n 1792

BattleFrontier_Lounge1_Text_25EFDD: @ 825EFDD
	.i18n 1793

BattleFrontier_Lounge1_Text_25F020: @ 825F020
	.i18n 1794

