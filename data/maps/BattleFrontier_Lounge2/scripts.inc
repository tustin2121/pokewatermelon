BattleFrontier_Lounge2_MapScripts:: @ 8260642
	.byte 0

BattleFrontier_Lounge2_EventScript_260643:: @ 8260643
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_26065F
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_260766, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_26066D
	end

BattleFrontier_Lounge2_EventScript_26065F:: @ 826065F
	msgbox BattleFrontier_Lounge2_Text_260857, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_26066D
	end

BattleFrontier_Lounge2_EventScript_26066D:: @ 826066D
	compare VAR_FRONTIER_MANIAC_FACILITY, 0
	call_if_eq BattleFrontier_Lounge2_EventScript_26070A
	compare VAR_FRONTIER_MANIAC_FACILITY, 1
	call_if_eq BattleFrontier_Lounge2_EventScript_26070F
	compare VAR_FRONTIER_MANIAC_FACILITY, 2
	call_if_eq BattleFrontier_Lounge2_EventScript_260714
	compare VAR_FRONTIER_MANIAC_FACILITY, 3
	call_if_eq BattleFrontier_Lounge2_EventScript_260719
	compare VAR_FRONTIER_MANIAC_FACILITY, 4
	call_if_eq BattleFrontier_Lounge2_EventScript_26071E
	compare VAR_FRONTIER_MANIAC_FACILITY, 5
	call_if_eq BattleFrontier_Lounge2_EventScript_260723
	compare VAR_FRONTIER_MANIAC_FACILITY, 6
	call_if_eq BattleFrontier_Lounge2_EventScript_260728
	compare VAR_FRONTIER_MANIAC_FACILITY, 7
	call_if_eq BattleFrontier_Lounge2_EventScript_26072D
	compare VAR_FRONTIER_MANIAC_FACILITY, 8
	call_if_eq BattleFrontier_Lounge2_EventScript_260732
	compare VAR_FRONTIER_MANIAC_FACILITY, 9
	call_if_eq BattleFrontier_Lounge2_EventScript_260737
	compare VAR_FRONTIER_MANIAC_FACILITY, 3
	call_if_le BattleFrontier_Lounge2_EventScript_2606F8
	compare VAR_FRONTIER_MANIAC_FACILITY, 4
	call_if_ge BattleFrontier_Lounge2_EventScript_260701
	special sub_8139F20
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_2606F8:: @ 82606F8
	msgbox BattleFrontier_Lounge2_Text_260933, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_260701:: @ 8260701
	msgbox BattleFrontier_Lounge2_Text_2608F2, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_26070A:: @ 826070A
	bufferstdstring 0, 19
	return

BattleFrontier_Lounge2_EventScript_26070F:: @ 826070F
	bufferstdstring 0, 20
	return

BattleFrontier_Lounge2_EventScript_260714:: @ 8260714
	bufferstdstring 0, 21
	return

BattleFrontier_Lounge2_EventScript_260719:: @ 8260719
	bufferstdstring 0, 22
	return

BattleFrontier_Lounge2_EventScript_26071E:: @ 826071E
	bufferstdstring 0, 24
	return

BattleFrontier_Lounge2_EventScript_260723:: @ 8260723
	bufferstdstring 0, 25
	return

BattleFrontier_Lounge2_EventScript_260728:: @ 8260728
	bufferstdstring 0, 26
	return

BattleFrontier_Lounge2_EventScript_26072D:: @ 826072D
	bufferstdstring 0, 27
	return

BattleFrontier_Lounge2_EventScript_260732:: @ 8260732
	bufferstdstring 0, 28
	return

BattleFrontier_Lounge2_EventScript_260737:: @ 8260737
	bufferstdstring 0, 29
	return

BattleFrontier_Lounge2_EventScript_26073C:: @ 826073C
	lock
	msgbox BattleFrontier_Lounge2_Text_261C9C, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_260747:: @ 8260747
	lock
	msgbox BattleFrontier_Lounge2_Text_261CDC, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_260752:: @ 8260752
	lock
	msgbox BattleFrontier_Lounge2_Text_261D1D, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_26075D:: @ 826075D
	msgbox BattleFrontier_Lounge2_Text_261D5C, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_260766:: @ 8260766
	.i18n 1795

BattleFrontier_Lounge2_Text_260857:: @ 8260857
	.i18n 1796

BattleFrontier_Lounge2_Text_2608A1:: @ 82608A1
	.i18n 1797

BattleFrontier_Lounge2_Text_2608F2:: @ 82608F2
	.i18n 1798

BattleFrontier_Lounge2_Text_260933:: @ 8260933
	.i18n 1799

BattleFrontier_Lounge2_Text_260971:: @ 8260971
	.i18n 1800

BattleFrontier_Lounge2_Text_260A1E:: @ 8260A1E
	.i18n 1801

BattleFrontier_Lounge2_Text_260AE7:: @ 8260AE7
	.i18n 1802

BattleFrontier_Lounge2_Text_260BC4:: @ 8260BC4
	.i18n 1803

BattleFrontier_Lounge2_Text_260C6D:: @ 8260C6D
	.i18n 1804

BattleFrontier_Lounge2_Text_260D3A:: @ 8260D3A
	.i18n 1805

BattleFrontier_Lounge2_Text_260E1E:: @ 8260E1E
	.i18n 1806

BattleFrontier_Lounge2_Text_260EC7:: @ 8260EC7
	.i18n 1807

BattleFrontier_Lounge2_Text_260F74:: @ 8260F74
	.i18n 1808

BattleFrontier_Lounge2_Text_261026:: @ 8261026
	.i18n 1809

BattleFrontier_Lounge2_Text_2610CC:: @ 82610CC
	.i18n 1810

BattleFrontier_Lounge2_Text_261194:: @ 8261194
	.i18n 1811

BattleFrontier_Lounge2_Text_261282:: @ 8261282
	.i18n 1812

BattleFrontier_Lounge2_Text_261329:: @ 8261329
	.i18n 1813

BattleFrontier_Lounge2_Text_261403:: @ 8261403
	.i18n 1814

BattleFrontier_Lounge2_Text_2614E6:: @ 82614E6
	.i18n 1815

BattleFrontier_Lounge2_Text_261591:: @ 8261591
	.i18n 1816

BattleFrontier_Lounge2_Text_26166F:: @ 826166F
	.i18n 1817

BattleFrontier_Lounge2_Text_26174D:: @ 826174D
	.i18n 1818

BattleFrontier_Lounge2_Text_2617F9:: @ 82617F9
	.i18n 1819

BattleFrontier_Lounge2_Text_2618C4:: @ 82618C4
	.i18n 1820

BattleFrontier_Lounge2_Text_2619AC:: @ 82619AC
	.i18n 1821

BattleFrontier_Lounge2_Text_261A91:: @ 8261A91
	.i18n 1822

BattleFrontier_Lounge2_Text_261B0C:: @ 8261B0C
	.i18n 1823

BattleFrontier_Lounge2_Text_261B95:: @ 8261B95
	.i18n 1824

BattleFrontier_Lounge2_Text_261C1A:: @ 8261C1A
	.i18n 1825

BattleFrontier_Lounge2_Text_261C9C:: @ 8261C9C
	.i18n 1826

BattleFrontier_Lounge2_Text_261CDC:: @ 8261CDC
	.i18n 1827

BattleFrontier_Lounge2_Text_261D1D:: @ 8261D1D
	.i18n 1828

BattleFrontier_Lounge2_Text_261D5C:: @ 8261D5C
	.i18n 1829

