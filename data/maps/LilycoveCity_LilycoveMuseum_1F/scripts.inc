LilycoveCity_LilycoveMuseum_1F_MapScripts:: @ 8218CB8
	.byte 0

LilycoveCity_LilycoveMuseum_1F_EventScript_218CB9:: @ 8218CB9
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_218E4B, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218CC2:: @ 8218CC2
	lockall
	applymovement 2, Common_Movement_FacePlayer
	message LilycoveCity_LilycoveMuseum_1F_Text_218EBC
	waitmessage
	multichoice 20, 8, 16, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_218CF5
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_218CEC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218CEC:: @ 8218CEC
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_218F5C, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218CF5:: @ 8218CF5
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_218F98, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_218D14
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_218D1E
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218D14:: @ 8218D14
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_218FF8, MSGBOX_SIGN
	releaseall
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218D1E:: @ 8218D1E
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_219035, MSGBOX_SIGN
	applymovement 2, LilycoveCity_LilycoveMuseum_1F_Movement_218D99
	waitmovement 0
	removeobject 2
	switch VAR_FACING
	case 2, LilycoveCity_LilycoveMuseum_1F_EventScript_218D5A
	case 3, LilycoveCity_LilycoveMuseum_1F_EventScript_218D6F
	case 4, LilycoveCity_LilycoveMuseum_1F_EventScript_218D84
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218D5A:: @ 8218D5A
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_218DA1
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 255, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218D6F:: @ 8218D6F
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_218D9B
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 255, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218D84:: @ 8218D84
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_218D9E
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 255, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_Movement_218D99: @ 8218D99
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_218D9B: @ 8218D9B
	walk_left
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_218D9E: @ 8218D9E
	walk_right
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_218DA1: @ 8218DA1
	walk_up
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DA4:: @ 8218DA4
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_219080, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DAD:: @ 8218DAD
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2190BF, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DB6:: @ 8218DB6
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2190F9, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DBF:: @ 8218DBF
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_219142, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DC8:: @ 8218DC8
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2191A2, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DD1:: @ 8218DD1
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_21920D, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DDA:: @ 8218DDA
LilycoveCity_LilycoveMuseum_2F_EventScript_218DDA:: @ 8218DDA
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_219260, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DE3:: @ 8218DE3
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2192AA, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DEC:: @ 8218DEC
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_219311, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DF5:: @ 8218DF5
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2193B4, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218DFE:: @ 8218DFE
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_21941A, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218E07:: @ 8218E07
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2194BA, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218E10:: @ 8218E10
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2194E1, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218E19:: @ 8218E19
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_219515, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218E22:: @ 8218E22
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_21959B, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218E2B:: @ 8218E2B
	lock
	faceplayer
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_2195FF, MSGBOX_DEFAULT
	closemessage
	applymovement 8, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_218E42:: @ 8218E42
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_21967A, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_Text_218E4B: @ 8218E4B
	.i18n 2613

LilycoveCity_LilycoveMuseum_1F_Text_218EBC: @ 8218EBC
	.i18n 2614

LilycoveCity_LilycoveMuseum_1F_Text_218F5C: @ 8218F5C
	.i18n 2615

LilycoveCity_LilycoveMuseum_1F_Text_218F98: @ 8218F98
	.i18n 2616

LilycoveCity_LilycoveMuseum_1F_Text_218FF8: @ 8218FF8
	.i18n 2617

LilycoveCity_LilycoveMuseum_1F_Text_219035: @ 8219035
	.i18n 2618

LilycoveCity_LilycoveMuseum_1F_Text_219080: @ 8219080
	.i18n 2619

LilycoveCity_LilycoveMuseum_1F_Text_2190BF: @ 82190BF
	.i18n 2620

LilycoveCity_LilycoveMuseum_1F_Text_2190F9: @ 82190F9
	.i18n 2621

LilycoveCity_LilycoveMuseum_1F_Text_219142: @ 8219142
	.i18n 2622

LilycoveCity_LilycoveMuseum_1F_Text_2191A2: @ 82191A2
	.i18n 2623

LilycoveCity_LilycoveMuseum_1F_Text_21920D: @ 821920D
	.i18n 2624

LilycoveCity_LilycoveMuseum_1F_Text_219260: @ 8219260
	.i18n 2625

LilycoveCity_LilycoveMuseum_1F_Text_2192AA: @ 82192AA
	.i18n 2626

LilycoveCity_LilycoveMuseum_1F_Text_219311: @ 8219311
	.i18n 2627

LilycoveCity_LilycoveMuseum_1F_Text_21938C: @ 821938C
	.i18n 2628

LilycoveCity_LilycoveMuseum_1F_Text_2193B4: @ 82193B4
	.i18n 2629

LilycoveCity_LilycoveMuseum_1F_Text_21941A: @ 821941A
	.i18n 2630

LilycoveCity_LilycoveMuseum_1F_Text_2194BA: @ 82194BA
	.i18n 2631

LilycoveCity_LilycoveMuseum_1F_Text_2194E1: @ 82194E1
	.i18n 2632

LilycoveCity_LilycoveMuseum_1F_Text_219515: @ 8219515
	.i18n 2633

LilycoveCity_LilycoveMuseum_1F_Text_21959B: @ 821959B
	.i18n 2634

LilycoveCity_LilycoveMuseum_1F_Text_2195FF: @ 82195FF
	.i18n 2635

LilycoveCity_LilycoveMuseum_1F_Text_21967A: @ 821967A
	.i18n 2636

