BattleFrontier_OutsideEast_MapScripts:: @ 8242C04
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_MapScript1_242C0F
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_MapScript1_242C2D
	.byte 0

BattleFrontier_OutsideEast_MapScript1_242C0F: @ 8242C0F
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_242C19
	end

BattleFrontier_OutsideEast_EventScript_242C19:: @ 8242C19
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, 7
	goto_if_ne Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

BattleFrontier_OutsideEast_MapScript1_242C2D: @ 8242C2D
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_242C3F
	end

BattleFrontier_OutsideEast_EventScript_242C3F:: @ 8242C3F
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
	return

BattleFrontier_OutsideEast_EventScript_242C43:: @ 8242C43
	msgbox BattleFrontier_OutsideEast_Text_242E11, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_242C4C:: @ 8242C4C
	msgbox BattleFrontier_OutsideEast_Text_242E58, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_242C55:: @ 8242C55
	msgbox BattleFrontier_OutsideEast_Text_242E96, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_242C5E:: @ 8242C5E
	msgbox BattleFrontier_OutsideEast_Text_242ECF, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_242C67:: @ 8242C67
	msgbox BattleFrontier_OutsideEast_Text_242F8C, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242C70:: @ 8242C70
	msgbox BattleFrontier_OutsideEast_Text_242FDC, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242C79:: @ 8242C79
	msgbox BattleFrontier_OutsideEast_Text_24308C, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242C82:: @ 8242C82
	msgbox BattleFrontier_OutsideEast_Text_243106, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242C8B:: @ 8242C8B
	msgbox BattleFrontier_OutsideEast_Text_2431A5, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242C94:: @ 8242C94
	lock
	msgbox BattleFrontier_OutsideEast_Text_2432DD, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_242C9F:: @ 8242C9F
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox BattleFrontier_OutsideEast_Text_24334B, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_OutsideEast_EventScript_242CB2:: @ 8242CB2
	msgbox BattleFrontier_OutsideEast_Text_243363, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242CBB:: @ 8242CBB
	msgbox BattleFrontier_OutsideEast_Text_243425, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242CC4:: @ 8242CC4
	msgbox BattleFrontier_OutsideEast_Text_2434A0, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242CCD:: @ 8242CCD
	msgbox BattleFrontier_OutsideEast_Text_243504, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242CD6:: @ 8242CD6
	lock
	msgbox BattleFrontier_OutsideEast_Text_243529, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_242CE1:: @ 8242CE1
	msgbox BattleFrontier_OutsideEast_Text_243230, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242CEA:: @ 8242CEA
	lock
	faceplayer
	waitse
	playse 269
	applymovement 14, BattleFrontier_OutsideEast_Movement_242D69
	waitmovement 0
	release
	end

BattleFrontier_OutsideEast_EventScript_242CFC:: @ 8242CFC
	lock
	faceplayer
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse 269
	applymovement 14, BattleFrontier_OutsideEast_Movement_242D69
	waitmovement 0
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, 2
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, 14
	setwildbattle SPECIES_SUDOWOODO, 40, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_OutsideEast_EventScript_242D60
	compare VAR_RESULT, 4
	goto_if_eq BattleFrontier_OutsideEast_EventScript_242D60
	compare VAR_RESULT, 5
	goto_if_eq BattleFrontier_OutsideEast_EventScript_242D60
	setflag FLAG_DEFEATED_SUDOWOODO
	release
	end

BattleFrontier_OutsideEast_EventScript_242D60:: @ 8242D60
	setflag FLAG_DEFEATED_SUDOWOODO
	goto IslandCave_EventScript_27376D
	end

BattleFrontier_OutsideEast_Movement_242D69: @ 8242D69
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

BattleFrontier_OutsideEast_EventScript_242D79:: @ 8242D79
	msgbox BattleFrontier_OutsideEast_Text_243598, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242D82:: @ 8242D82
	msgbox BattleFrontier_OutsideEast_Text_243668, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242D8B:: @ 8242D8B
	msgbox BattleFrontier_OutsideEast_Text_2436F2, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242D94:: @ 8242D94
	msgbox BattleFrontier_OutsideEast_Text_243809, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242D9D:: @ 8242D9D
	msgbox BattleFrontier_OutsideEast_Text_243895, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242DA6:: @ 8242DA6
	msgbox BattleFrontier_OutsideEast_Text_243943, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242DAF:: @ 8242DAF
	msgbox BattleFrontier_OutsideEast_Text_2439A0, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242DB8:: @ 8242DB8
	lock
	msgbox BattleFrontier_OutsideEast_Text_243A2B, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_242DC3:: @ 8242DC3
	lock
	msgbox BattleFrontier_OutsideEast_Text_243A53, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_242DCE:: @ 8242DCE
	msgbox BattleFrontier_OutsideEast_Text_242F0D, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_242DD7:: @ 8242DD7
	msgbox BattleFrontier_OutsideEast_Text_242F4A, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_242DE0:: @ 8242DE0
	msgbox BattleFrontier_OutsideEast_Text_243B68, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_242DE9:: @ 8242DE9
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_242DFE
	msgbox BattleFrontier_OutsideEast_Text_243C2C, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_242DFE:: @ 8242DFE
	msgbox BattleFrontier_OutsideEast_Text_243CA3, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_242E08:: @ 8242E08
	msgbox BattleFrontier_OutsideEast_Text_243D0B, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_Text_242E11: @ 8242E11
	.i18n 1945

BattleFrontier_OutsideEast_Text_242E58: @ 8242E58
	.i18n 1946

BattleFrontier_OutsideEast_Text_242E96: @ 8242E96
	.i18n 1947

BattleFrontier_OutsideEast_Text_242ECF: @ 8242ECF
	.i18n 1948

BattleFrontier_OutsideEast_Text_242F0D: @ 8242F0D
	.i18n 1949

BattleFrontier_OutsideEast_Text_242F4A: @ 8242F4A
	.i18n 1950

BattleFrontier_OutsideEast_Text_242F8C: @ 8242F8C
	.i18n 1951

BattleFrontier_OutsideEast_Text_242FDC: @ 8242FDC
	.i18n 1952

BattleFrontier_OutsideEast_Text_24308C: @ 824308C
	.i18n 1953

BattleFrontier_OutsideEast_Text_243106: @ 8243106
	.i18n 1954

BattleFrontier_OutsideEast_Text_2431A5: @ 82431A5
	.i18n 1955

BattleFrontier_OutsideEast_Text_243230: @ 8243230
	.i18n 1956

BattleFrontier_OutsideEast_Text_2432DD: @ 82432DD
	.i18n 1957

BattleFrontier_OutsideEast_Text_24334B: @ 824334B
	.i18n 1958

BattleFrontier_OutsideEast_Text_243363: @ 8243363
	.i18n 1959

BattleFrontier_OutsideEast_Text_243425: @ 8243425
	.i18n 1960

BattleFrontier_OutsideEast_Text_2434A0: @ 82434A0
	.i18n 1961

BattleFrontier_OutsideEast_Text_243504: @ 8243504
	.i18n 1962

BattleFrontier_OutsideEast_Text_243529: @ 8243529
	.i18n 1963

BattleFrontier_OutsideEast_Text_243598: @ 8243598
	.i18n 1964

BattleFrontier_OutsideEast_Text_243668: @ 8243668
	.i18n 1965

BattleFrontier_OutsideEast_Text_2436F2: @ 82436F2
	.i18n 1966

BattleFrontier_OutsideEast_Text_243809: @ 8243809
	.i18n 1967

BattleFrontier_OutsideEast_Text_243895: @ 8243895
	.i18n 1968

BattleFrontier_OutsideEast_Text_243943: @ 8243943
	.i18n 1969

BattleFrontier_OutsideEast_Text_2439A0: @ 82439A0
	.i18n 1970

BattleFrontier_OutsideEast_Text_243A2B: @ 8243A2B
	.i18n 1971

BattleFrontier_OutsideEast_Text_243A53: @ 8243A53
	.i18n 1972

BattleFrontier_OutsideEast_Text_243B68: @ 8243B68
	.i18n 1973

BattleFrontier_OutsideEast_Text_243C2C: @ 8243C2C
	.i18n 1974

BattleFrontier_OutsideEast_Text_243CA3: @ 8243CA3
	.i18n 1975

BattleFrontier_OutsideEast_Text_243D0B: @ 8243D0B
	.i18n 1976
