BattleFrontier_Lounge3_MapScripts:: @ 8261D82
	.byte 0

BattleFrontier_Lounge3_EventScript_261D83:: @ 8261D83
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_BETTOR, BattleFrontier_Lounge3_EventScript_261EF9
	call BattleFrontier_Lounge3_EventScript_261EA0
	compare VAR_0x8004, 2
	goto_if_le BattleFrontier_Lounge3_EventScript_261EEB
	setflag FLAG_MET_BATTLE_FRONTIER_BETTOR
	msgbox BattleFrontier_Lounge3_Text_262061, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_261DAF
	end

BattleFrontier_Lounge3_EventScript_261DAF:: @ 8261DAF
	special sub_813A820
	waitmessage
	waitbuttonpress
	msgbox BattleFrontier_Lounge3_Text_262A60, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Lounge3_EventScript_261FA5
	msgbox BattleFrontier_Lounge3_Text_262ABD, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Lounge3_EventScript_261FA5
	message BattleFrontier_Lounge3_Text_262B42
	waitmessage
	special sub_813A958
	goto BattleFrontier_Lounge3_EventScript_261DE9
	end

BattleFrontier_Lounge3_EventScript_261DE9:: @ 8261DE9
	multichoice 20, 4, 87, 0
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge3_EventScript_261E30
	case 1, BattleFrontier_Lounge3_EventScript_261E3B
	case 2, BattleFrontier_Lounge3_EventScript_261E46
	case 3, BattleFrontier_Lounge3_EventScript_261FAF
	case 127, BattleFrontier_Lounge3_EventScript_261FAF
	end

BattleFrontier_Lounge3_EventScript_261E30:: @ 8261E30
	setvar VAR_0x8008, 5
	goto BattleFrontier_Lounge3_EventScript_261E51
	end

BattleFrontier_Lounge3_EventScript_261E3B:: @ 8261E3B
	setvar VAR_0x8008, 10
	goto BattleFrontier_Lounge3_EventScript_261E51
	end

BattleFrontier_Lounge3_EventScript_261E46:: @ 8261E46
	setvar VAR_0x8008, 15
	goto BattleFrontier_Lounge3_EventScript_261E51
	end

BattleFrontier_Lounge3_EventScript_261E51:: @ 8261E51
	specialvar VAR_TEMP_1, sub_813AA04
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_ge BattleFrontier_Lounge3_EventScript_261E75
	msgbox BattleFrontier_Lounge3_Text_262B6E, MSGBOX_DEFAULT
	message BattleFrontier_Lounge3_Text_262B42
	waitmessage
	goto BattleFrontier_Lounge3_EventScript_261DE9
	end

BattleFrontier_Lounge3_EventScript_261E75:: @ 8261E75
	copyvar VAR_0x8004, VAR_0x8008
	special sub_813A9A4
	setvar VAR_FRONTIER_GAMBLER_PLACED_BET_F, 1
	special sub_813A8FC
	playse SE_REGI
	msgbox BattleFrontier_Lounge3_Text_262BE0, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_261E96
	end

BattleFrontier_Lounge3_EventScript_261E96:: @ 8261E96
	special sub_813A854
	waitmessage
	waitbuttonpress
	special sub_813A988
	release
	end

BattleFrontier_Lounge3_EventScript_261EA0:: @ 8261EA0
	setvar VAR_0x8004, 0
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_261EE5
	return

BattleFrontier_Lounge3_EventScript_261EE5:: @ 8261EE5
	addvar VAR_0x8004, 1
	return

BattleFrontier_Lounge3_EventScript_261EEB:: @ 8261EEB
	msgbox BattleFrontier_Lounge3_Text_261FFE, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_261FF1
	end

BattleFrontier_Lounge3_EventScript_261EF9:: @ 8261EF9
	msgbox BattleFrontier_Lounge3_Text_26346B, MSGBOX_DEFAULT
	compare VAR_FRONTIER_GAMBLER_PLACED_BET_F, 1
	goto_if_ge BattleFrontier_Lounge3_EventScript_261F12
	goto BattleFrontier_Lounge3_EventScript_261DAF
	end

BattleFrontier_Lounge3_EventScript_261F12:: @ 8261F12
	compare VAR_FRONTIER_GAMBLER_PLACED_BET_F, 1
	goto_if_eq BattleFrontier_Lounge3_EventScript_261F9E
	compare VAR_FRONTIER_GAMBLER_PLACED_BET_F, 2
	goto_if_eq BattleFrontier_Lounge3_EventScript_261F2E
	goto BattleFrontier_Lounge3_EventScript_261F71
	end

BattleFrontier_Lounge3_EventScript_261F2E:: @ 8261F2E
	msgbox BattleFrontier_Lounge3_Text_263334, MSGBOX_DEFAULT
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, 0
	call_if_eq BattleFrontier_Lounge3_EventScript_261F80
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, 1
	call_if_eq BattleFrontier_Lounge3_EventScript_261F8A
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, 2
	call_if_eq BattleFrontier_Lounge3_EventScript_261F94
	msgbox BattleFrontier_Lounge3_Text_2633D4, 9
	special sub_813A9D0
	msgbox BattleFrontier_Lounge3_Text_2633F2, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_PLACED_BET_F, 0
	release
	end

BattleFrontier_Lounge3_EventScript_261F71:: @ 8261F71
	msgbox BattleFrontier_Lounge3_Text_263298, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_PLACED_BET_F, 0
	release
	end

BattleFrontier_Lounge3_EventScript_261F80:: @ 8261F80
	buffernumberstring 0, 10
	setvar VAR_0x8004, 10
	return

BattleFrontier_Lounge3_EventScript_261F8A:: @ 8261F8A
	buffernumberstring 0, 20
	setvar VAR_0x8004, 20
	return

BattleFrontier_Lounge3_EventScript_261F94:: @ 8261F94
	buffernumberstring 0, 30
	setvar VAR_0x8004, 30
	return

BattleFrontier_Lounge3_EventScript_261F9E:: @ 8261F9E
	special sub_813A854
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge3_EventScript_261FA5:: @ 8261FA5
	msgbox BattleFrontier_Lounge3_Text_26342D, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge3_EventScript_261FAF:: @ 8261FAF
	special sub_813A988
	goto BattleFrontier_Lounge3_EventScript_261FA5
	end

BattleFrontier_Lounge3_EventScript_261FB8:: @ 8261FB8
	msgbox BattleFrontier_Lounge3_Text_263545, MSGBOX_NPC
	end

BattleFrontier_Lounge3_EventScript_261FC1:: @ 8261FC1
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_26346F, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_261FF1
	end

BattleFrontier_Lounge3_EventScript_261FD1:: @ 8261FD1
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_26351D, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_261FF1
	end

BattleFrontier_Lounge3_EventScript_261FE1:: @ 8261FE1
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_2634C9, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_261FF1
	end

BattleFrontier_Lounge3_EventScript_261FF1:: @ 8261FF1
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_Lounge3_Text_261FFE:: @ 8261FFE
	.i18n 1830

BattleFrontier_Lounge3_Text_262061:: @ 8262061
	.i18n 1831

BattleFrontier_Lounge3_Text_262261:: @ 8262261
	.i18n 1832

BattleFrontier_Lounge3_Text_26230D:: @ 826230D
	.i18n 1833

BattleFrontier_Lounge3_Text_2623B9:: @ 82623B9
	.i18n 1834

BattleFrontier_Lounge3_Text_262464:: @ 8262464
	.i18n 1835

BattleFrontier_Lounge3_Text_26250E:: @ 826250E
	.i18n 1836

BattleFrontier_Lounge3_Text_2625B8:: @ 82625B8
	.i18n 1837

BattleFrontier_Lounge3_Text_26266A:: @ 826266A
	.i18n 1838

BattleFrontier_Lounge3_Text_26271C:: @ 826271C
	.i18n 1839

BattleFrontier_Lounge3_Text_2627C9:: @ 82627C9
	.i18n 1840

BattleFrontier_Lounge3_Text_262876:: @ 8262876
	.i18n 1841

BattleFrontier_Lounge3_Text_26291A:: @ 826291A
	.i18n 1842

BattleFrontier_Lounge3_Text_2629BC:: @ 82629BC
	.i18n 1843

BattleFrontier_Lounge3_Text_262A60:: @ 8262A60
	.i18n 1844

BattleFrontier_Lounge3_Text_262ABD:: @ 8262ABD
	.i18n 1845

BattleFrontier_Lounge3_Text_262B42:: @ 8262B42
	.i18n 1846

BattleFrontier_Lounge3_Text_262B6E:: @ 8262B6E
	.i18n 1847

BattleFrontier_Lounge3_Text_262BE0:: @ 8262BE0
	.i18n 1848

BattleFrontier_Lounge3_Text_262C04:: @ 8262C04
	.i18n 1849

BattleFrontier_Lounge3_Text_262C90:: @ 8262C90
	.i18n 1850

BattleFrontier_Lounge3_Text_262D1C:: @ 8262D1C
	.i18n 1851

BattleFrontier_Lounge3_Text_262DA7:: @ 8262DA7
	.i18n 1852

BattleFrontier_Lounge3_Text_262E34:: @ 8262E34
	.i18n 1853

BattleFrontier_Lounge3_Text_262EC1:: @ 8262EC1
	.i18n 1854

BattleFrontier_Lounge3_Text_262F56:: @ 8262F56
	.i18n 1855

BattleFrontier_Lounge3_Text_262FEB:: @ 8262FEB
	.i18n 1856

BattleFrontier_Lounge3_Text_263078:: @ 8263078
	.i18n 1857

BattleFrontier_Lounge3_Text_263105:: @ 8263105
	.i18n 1858

BattleFrontier_Lounge3_Text_26318C:: @ 826318C
	.i18n 1859

BattleFrontier_Lounge3_Text_263211:: @ 8263211
	.i18n 1860

BattleFrontier_Lounge3_Text_263298:: @ 8263298
	.i18n 1861

BattleFrontier_Lounge3_Text_263334:: @ 8263334
	.i18n 1862

BattleFrontier_Lounge3_Text_2633D4:: @ 82633D4
	.i18n 1863

BattleFrontier_Lounge3_Text_2633F2:: @ 82633F2
	.i18n 1864

BattleFrontier_Lounge3_Text_26342D:: @ 826342D
	.i18n 1865

BattleFrontier_Lounge3_Text_26346B:: @ 826346B
	.i18n 1866

BattleFrontier_Lounge3_Text_26346F:: @ 826346F
	.i18n 1867

BattleFrontier_Lounge3_Text_2634C9:: @ 82634C9
	.i18n 1868

BattleFrontier_Lounge3_Text_26351D:: @ 826351D
	.i18n 1869

BattleFrontier_Lounge3_Text_263545:: @ 8263545
	.i18n 1870
