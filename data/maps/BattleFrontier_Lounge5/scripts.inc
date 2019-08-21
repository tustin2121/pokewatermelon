BattleFrontier_Lounge5_MapScripts:: @ 82645C5
	.byte 0

BattleFrontier_Lounge5_EventScript_2645C6:: @ 82645C6
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_264632, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Lounge5_EventScript_26460D
	special sub_81B94B0
	waitstate
	lock
	faceplayer
	compare VAR_0x8004, 255
	goto_if_eq BattleFrontier_Lounge5_EventScript_26460D
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, 412
	goto_if_eq BattleFrontier_Lounge5_EventScript_264603
	special sub_813A7B8
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge5_EventScript_264603:: @ 8264603
	msgbox BattleFrontier_Lounge5_Text_264EEE, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_26460D:: @ 826460D
	msgbox BattleFrontier_Lounge5_Text_26467F, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_264617:: @ 8264617
	msgbox BattleFrontier_Lounge5_Text_264F22, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_264620:: @ 8264620
	msgbox BattleFrontier_Lounge5_Text_264F64, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_264629:: @ 8264629
	msgbox BattleFrontier_Lounge5_Text_264FAB, MSGBOX_NPC
	end

BattleFrontier_Lounge5_Text_264632:: @ 8264632
	.i18n 1874

BattleFrontier_Lounge5_Text_26467F:: @ 826467F
	.i18n 1875

BattleFrontier_Lounge5_Text_26468D:: @ 826468D
	.i18n 1876

BattleFrontier_Lounge5_Text_2646E5:: @ 82646E5
	.i18n 1877

BattleFrontier_Lounge5_Text_264741:: @ 8264741
	.i18n 1878

BattleFrontier_Lounge5_Text_2647A4:: @ 82647A4
	.i18n 1879

BattleFrontier_Lounge5_Text_2647FC:: @ 82647FC
	.i18n 1880

BattleFrontier_Lounge5_Text_264858:: @ 8264858
	.i18n 1881

BattleFrontier_Lounge5_Text_2648BE:: @ 82648BE
	.i18n 1882

BattleFrontier_Lounge5_Text_264916:: @ 8264916
	.i18n 1883

BattleFrontier_Lounge5_Text_264972:: @ 8264972
	.i18n 1884

BattleFrontier_Lounge5_Text_2649D5:: @ 82649D5
	.i18n 1885

BattleFrontier_Lounge5_Text_264A3F:: @ 8264A3F
	.i18n 1886

BattleFrontier_Lounge5_Text_264A9B:: @ 8264A9B
	.i18n 1887

BattleFrontier_Lounge5_Text_264AF3:: @ 8264AF3
	.i18n 1888

BattleFrontier_Lounge5_Text_264B5D:: @ 8264B5D
	.i18n 1889

BattleFrontier_Lounge5_Text_264BC3:: @ 8264BC3
	.i18n 1890

BattleFrontier_Lounge5_Text_264C36:: @ 8264C36
	.i18n 1891

BattleFrontier_Lounge5_Text_264C95:: @ 8264C95
	.i18n 1892

BattleFrontier_Lounge5_Text_264D01:: @ 8264D01
	.i18n 1893

BattleFrontier_Lounge5_Text_264D6B:: @ 8264D6B
	.i18n 1894

BattleFrontier_Lounge5_Text_264DD7:: @ 8264DD7
	.i18n 1895

BattleFrontier_Lounge5_Text_264E33:: @ 8264E33
	.i18n 1896

BattleFrontier_Lounge5_Text_264E8F:: @ 8264E8F
	.i18n 1897

BattleFrontier_Lounge5_Text_264EEE:: @ 8264EEE
	.i18n 1898

BattleFrontier_Lounge5_Text_264F22:: @ 8264F22
	.i18n 1899

BattleFrontier_Lounge5_Text_264F64:: @ 8264F64
	.i18n 1900

BattleFrontier_Lounge5_Text_264FAB:: @ 8264FAB
	.i18n 1901

