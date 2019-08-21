Text_274746: @ 8274746
	.i18n 5668

Text_274779: @ 8274779
	.i18n 5669

Text_2747C2: @ 82747C2
	.i18n 5670

Text_2747DD: @ 82747DD
	.i18n 5671

Text_274825: @ 8274825
	.i18n 5672

Text_274883: @ 8274883
	.i18n 5673

SecretBase_RedCave1_Text_2748A0: @ 82748A0
	.i18n 5674

SecretBase_RedCave1_Text_274939: @ 8274939
	.i18n 5675

SecretBase_RedCave1_Text_27494D: @ 827494D
	.i18n 5676

SecretBase_RedCave1_Text_274966:: @ 8274966
	.i18n 5677

SecretBase_RedCave1_Text_2749AA: @ 82749AA
	.i18n 5678

SecretBase_RedCave1_Text_2749ED: @ 82749ED
	.i18n 5679

SecretBase_RedCave1_Text_274A64: @ 8274A64
	.i18n 5680

SecretBase_RedCave1_Text_274AFA: @ 8274AFA
	.i18n 5681

SecretBase_RedCave1_Text_274B0B: @ 8274B0B
	.i18n 5682

SecretBase_RedCave1_Text_274B24:: @ 8274B24
	.i18n 5683

SecretBase_RedCave1_Text_274B6C: @ 8274B6C
	.i18n 5684

SecretBase_RedCave1_Text_274BA2: @ 8274BA2
	.i18n 5685

SecretBase_RedCave1_Text_274C13: @ 8274C13
	.i18n 5686

SecretBase_RedCave1_Text_274CB0: @ 8274CB0
	.i18n 5687

SecretBase_RedCave1_Text_274CDA: @ 8274CDA
	.i18n 5688

SecretBase_RedCave1_Text_274D13:: @ 8274D13
	.i18n 5689

SecretBase_RedCave1_Text_274D34: @ 8274D34
	.i18n 5690

SecretBase_RedCave1_Text_274D69: @ 8274D69
	.i18n 5691

SecretBase_RedCave1_Text_274DD2: @ 8274DD2
	.i18n 5692

SecretBase_RedCave1_Text_274E41: @ 8274E41
	.i18n 5693

SecretBase_RedCave1_Text_274E5A: @ 8274E5A
	.i18n 5694

SecretBase_RedCave1_Text_274E75:: @ 8274E75
	.i18n 5695

SecretBase_RedCave1_Text_274EB3: @ 8274EB3
	.i18n 5696

SecretBase_RedCave1_Text_274EF1: @ 8274EF1
	.i18n 5697

SecretBase_RedCave1_Text_274F39: @ 8274F39
	.i18n 5698

SecretBase_RedCave1_Text_274FCA: @ 8274FCA
	.i18n 5699

SecretBase_RedCave1_Text_274FDA: @ 8274FDA
	.i18n 5700

SecretBase_RedCave1_Text_274FFE:: @ 8274FFE
	.i18n 5701

SecretBase_RedCave1_Text_27502A: @ 827502A
	.i18n 5702

SecretBase_RedCave1_Text_2750A4: @ 82750A4
	.i18n 5703

SecretBase_RedCave1_Text_275114: @ 8275114
	.i18n 5704

SecretBase_RedCave1_Text_2751AF: @ 82751AF
	.i18n 5705

SecretBase_RedCave1_Text_2751CA: @ 82751CA
	.i18n 5706

SecretBase_RedCave1_Text_2751E1:: @ 82751E1
	.i18n 5707

SecretBase_RedCave1_Text_2751EC: @ 82751EC
	.i18n 5708

SecretBase_RedCave1_Text_275226: @ 8275226
	.i18n 5709

SecretBase_RedCave1_Text_275287: @ 8275287
	.i18n 5710

SecretBase_RedCave1_Text_275315: @ 8275315
	.i18n 5711

SecretBase_RedCave1_Text_275330: @ 8275330
	.i18n 5712

SecretBase_RedCave1_Text_275367:: @ 8275367
	.i18n 5713

SecretBase_RedCave1_Text_275374: @ 8275374
	.i18n 5714

SecretBase_RedCave1_Text_2753AB: @ 82753AB
	.i18n 5715

SecretBase_RedCave1_Text_275405: @ 8275405
	.i18n 5716

SecretBase_RedCave1_Text_2754B2: @ 82754B2
	.i18n 5717

SecretBase_RedCave1_Text_2754D8: @ 82754D8
	.i18n 5718

SecretBase_RedCave1_Text_2754F6:: @ 82754F6
	.i18n 5719

SecretBase_RedCave1_Text_27550C: @ 827550C
	.i18n 5720

SecretBase_RedCave1_Text_275546: @ 8275546
	.i18n 5721

SecretBase_RedCave1_Text_2755D2: @ 82755D2
	.i18n 5722

SecretBase_RedCave1_Text_275679: @ 8275679
	.i18n 5723

SecretBase_RedCave1_Text_275696: @ 8275696
	.i18n 5724

SecretBase_RedCave1_Text_2756C7:: @ 82756C7
	.i18n 5725

SecretBase_RedCave1_Text_2756EF: @ 82756EF
	.i18n 5726

SecretBase_RedCave1_Text_27571E: @ 827571E
	.i18n 5727

SecretBase_RedCave1_Text_2757B5: @ 82757B5
	.i18n 5728

SecretBase_RedCave1_Text_275884: @ 8275884
	.i18n 5729

SecretBase_RedCave1_Text_27589D: @ 827589D
	.i18n 5730

SecretBase_RedCave1_Text_2758CC:: @ 82758CC
	.i18n 5731

SecretBase_RedCave1_Text_275909: @ 8275909
	.i18n 5732

SecretBase_RedCave1_Text_275944: @ 8275944
	.i18n 5733

EventScript_2759F1:: @ 82759F1
	special GetSecretBaseTypeInFrontOfPlayer
	special CheckPlayerHasSecretBase
	compare VAR_RESULT, 1
	goto_if_eq EventScript_275BE8
	checkpartymove MOVE_SECRET_POWER
	setfieldeffectargument 0, VAR_RESULT
	buffermovename 1, MOVE_SECRET_POWER
	compare VAR_0x8007, 1
	goto_if_eq EventScript_275A50
	compare VAR_0x8007, 2
	goto_if_eq EventScript_275A50
	compare VAR_0x8007, 3
	goto_if_eq EventScript_275A50
	compare VAR_0x8007, 4
	goto_if_eq EventScript_275A50
	compare VAR_0x8007, 5
	goto_if_eq EventScript_275AA9
	compare VAR_0x8007, 6
	goto_if_eq EventScript_275B02
	end

EventScript_275A50:: @ 8275A50
	lockall
	compare VAR_RESULT, 6
	goto_if_eq EventScript_275A91
	bufferpartymonnick 0, VAR_RESULT
	msgbox gText_23B704, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275CDE
	msgbox Text_MonUsedHM, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_SECRET_POWER_CAVE
	waitstate
	goto EventScript_275A9B
	end

EventScript_275A86:: @ 8275A86
	lockall
	dofieldeffect FLDEFF_USE_SECRET_POWER_CAVE
	waitstate
	goto EventScript_275A9B
	end

EventScript_275A91:: @ 8275A91
	msgbox gText_23B6E0, MSGBOX_DEFAULT
	releaseall
	end

EventScript_275A9B:: @ 8275A9B
	msgbox gText_23B73E, MSGBOX_DEFAULT
	goto EventScript_275B5B
	end

EventScript_275AA9:: @ 8275AA9
	lockall
	compare VAR_RESULT, 6
	goto_if_eq EventScript_275AEA
	bufferpartymonnick 0, VAR_RESULT
	msgbox Text_274779, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275CDE
	msgbox Text_MonUsedHM, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_SECRET_POWER_TREE
	waitstate
	goto EventScript_275AF4
	end

EventScript_275ADF:: @ 8275ADF
	lockall
	dofieldeffect FLDEFF_USE_SECRET_POWER_TREE
	waitstate
	goto EventScript_275AF4
	end

EventScript_275AEA:: @ 8275AEA
	msgbox Text_274746, MSGBOX_DEFAULT
	releaseall
	end

EventScript_275AF4:: @ 8275AF4
	msgbox Text_2747C2, MSGBOX_DEFAULT
	goto EventScript_275B5B
	end

EventScript_275B02:: @ 8275B02
	lockall
	compare VAR_RESULT, 6
	goto_if_eq EventScript_275B43
	bufferpartymonnick 0, VAR_RESULT
	msgbox Text_274825, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275CDE
	msgbox Text_MonUsedHM, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_SECRET_POWER_SHRUB
	waitstate
	goto EventScript_275B4D
	end

EventScript_275B38:: @ 8275B38
	lockall
	dofieldeffect FLDEFF_USE_SECRET_POWER_SHRUB
	waitstate
	goto EventScript_275B4D
	end

EventScript_275B43:: @ 8275B43
	msgbox Text_2747DD, MSGBOX_DEFAULT
	releaseall
	end

EventScript_275B4D:: @ 8275B4D
	msgbox Text_274883, MSGBOX_DEFAULT
	goto EventScript_275B5B
	end

EventScript_275B5B:: @ 8275B5B
	closemessage
	playse SE_KAIDAN
	setvar VAR_INIT_SECRET_BASE, 0
	setflag FLAG_DECORATION_0
	special SetPlayerSecretBase
	special EnterSecretBase
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 0
	special InitSecretBaseDecorationSprites
	setvar VAR_SECRET_BASE_INITIALIZED, 1
	waitstate
	end

SecretBase_RedCave1_EventScript_275B81:: @ 8275B81
	applymovement EVENT_OBJ_ID_PLAYER, SecretBase_RedCave1_Movement_275BB4
	waitmovement 0
	setvar VAR_INIT_SECRET_BASE, 1
	msgbox SecretBase_RedCave1_Text_23B759, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_275BAB
	closemessage
	playse SE_KAIDAN
	special ClearAndLeaveSecretBase
	end

SecretBase_RedCave1_EventScript_275BAB:: @ 8275BAB
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	special EnterNewlyCreatedSecretBase
	waitstate
	end

SecretBase_RedCave1_Movement_275BB4: @ 8275BB4
	walk_up
	walk_up
	step_end

EventScript_275BB7:: @ 8275BB7
	lockall
	setvar VAR_INIT_SECRET_BASE, 1
	playse SE_KAIDAN
	special IsCurSecretBaseOwnedByAnotherPlayer
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275BDB
	clearflag FLAG_DECORATION_0
	special EnterSecretBase
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	waitstate
	end

EventScript_275BDB:: @ 8275BDB
	setflag FLAG_DECORATION_0
	special EnterSecretBase
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	waitstate
	end

EventScript_275BE8:: @ 8275BE8
	checkpartymove MOVE_SECRET_POWER
	compare VAR_RESULT, 6
	goto_if_eq EventScript_275C9A
	setfieldeffectargument 0, VAR_RESULT
	setorcopyvar VAR_0x8004, VAR_RESULT
	lockall
	special GetSecretBaseNearbyMapName
	msgbox Text_276A3D, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275CDE
	msgbox Text_2766AA, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275CDE
	fadescreenswapbuffers 1
	special MoveOutOfSecretBaseFromOutside
	closemessage
	fadescreenswapbuffers 0
	msgbox Text_276A95, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_275CDE
	bufferpartymonnick 0, VAR_0x8004
	buffermovename 1, MOVE_SECRET_POWER
	msgbox Text_MonUsedHM, MSGBOX_DEFAULT
	closemessage
	closemessage
	compare VAR_0x8007, 1
	goto_if_eq EventScript_275A86
	compare VAR_0x8007, 2
	goto_if_eq EventScript_275A86
	compare VAR_0x8007, 3
	goto_if_eq EventScript_275A86
	compare VAR_0x8007, 4
	goto_if_eq EventScript_275A86
	compare VAR_0x8007, 5
	goto_if_eq EventScript_275ADF
	compare VAR_0x8007, 6
	goto_if_eq EventScript_275B38
	releaseall
	end

EventScript_275C9A:: @ 8275C9A
	lockall
	compare VAR_0x8007, 1
	goto_if_eq EventScript_275A91
	compare VAR_0x8007, 2
	goto_if_eq EventScript_275A91
	compare VAR_0x8007, 3
	goto_if_eq EventScript_275A91
	compare VAR_0x8007, 4
	goto_if_eq EventScript_275A91
	compare VAR_0x8007, 5
	goto_if_eq EventScript_275AEA
	compare VAR_0x8007, 6
	goto_if_eq EventScript_275B43
	end

EventScript_275CDE:: @ 8275CDE
	closemessage
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_275CE1:: @ 8275CE1
LittlerootTown_MaysHouse_2F_EventScript_275CE1:: @ 8275CE1
SecretBase_RedCave1_EventScript_275CE1:: @ 8275CE1
	setflag FLAG_DECORATION_1
	setflag FLAG_DECORATION_2
	setflag FLAG_DECORATION_3
	setflag FLAG_DECORATION_4
	setflag FLAG_DECORATION_5
	setflag FLAG_DECORATION_6
	setflag FLAG_DECORATION_7
	setflag FLAG_DECORATION_8
	setflag FLAG_DECORATION_9
	setflag FLAG_DECORATION_10
	setflag FLAG_DECORATION_11
	setflag FLAG_DECORATION_12
	setflag FLAG_DECORATION_13
	setflag FLAG_DECORATION_14
	return

EventScript_275D0C:: @ 8275D0C
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 0
	special InitSecretBaseDecorationSprites
	setvar VAR_SECRET_BASE_INITIALIZED, 1
	end

EventScript_275D1F:: @ 8275D1F
	setvar VAR_0x8005, 0
	goto EventScript_275D2A
	end

EventScript_275D2A:: @ 8275D2A
	special sub_8127E18
	end

EventScript_275D2E:: @ 8275D2E
	setvar VAR_0x8004, 0
	goto EventScript_275D39
	end

EventScript_275D39:: @ 8275D39
	special sub_8129708
	compare VAR_RESULT, 1
	goto_if_eq EventScript_275D63
	addvar VAR_0x8004, 1
	compare VAR_0x8005, 0
	goto_if_eq EventScript_275D39
	removeobject VAR_0x8006
	setflag 0x8005
	goto EventScript_275D39
	end

EventScript_275D63:: @ 8275D63
	end

SecretBase_BlueCave1_EventScript_275D64:: @ 8275D64
SecretBase_BlueCave2_EventScript_275D64:: @ 8275D64
SecretBase_BlueCave3_EventScript_275D64:: @ 8275D64
SecretBase_BlueCave4_EventScript_275D64:: @ 8275D64
SecretBase_BrownCave1_EventScript_275D64:: @ 8275D64
SecretBase_BrownCave2_EventScript_275D64:: @ 8275D64
SecretBase_BrownCave3_EventScript_275D64:: @ 8275D64
SecretBase_BrownCave4_EventScript_275D64:: @ 8275D64
SecretBase_RedCave1_EventScript_275D64:: @ 8275D64
SecretBase_RedCave2_EventScript_275D64:: @ 8275D64
SecretBase_RedCave3_EventScript_275D64:: @ 8275D64
SecretBase_RedCave4_EventScript_275D64:: @ 8275D64
SecretBase_Shrub1_EventScript_275D64:: @ 8275D64
SecretBase_Shrub2_EventScript_275D64:: @ 8275D64
SecretBase_Shrub3_EventScript_275D64:: @ 8275D64
SecretBase_Shrub4_EventScript_275D64:: @ 8275D64
SecretBase_Tree1_EventScript_275D64:: @ 8275D64
SecretBase_Tree2_EventScript_275D64:: @ 8275D64
SecretBase_Tree3_EventScript_275D64:: @ 8275D64
SecretBase_Tree4_EventScript_275D64:: @ 8275D64
SecretBase_YellowCave1_EventScript_275D64:: @ 8275D64
SecretBase_YellowCave2_EventScript_275D64:: @ 8275D64
SecretBase_YellowCave3_EventScript_275D64:: @ 8275D64
SecretBase_YellowCave4_EventScript_275D64:: @ 8275D64
	special GetSecretBaseOwnerInteractionState
	compare VAR_0x8004, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275DD6
	compare VAR_0x8004, 1
	goto_if_eq SecretBase_RedCave1_EventScript_275E4E
	compare VAR_0x8004, 2
	goto_if_eq SecretBase_RedCave1_EventScript_275EC6
	compare VAR_0x8004, 3
	goto_if_eq SecretBase_RedCave1_EventScript_275F3E
	compare VAR_0x8004, 4
	goto_if_eq SecretBase_RedCave1_EventScript_275FB6
	compare VAR_0x8004, 5
	goto_if_eq SecretBase_RedCave1_EventScript_27602E
	compare VAR_0x8004, 6
	goto_if_eq SecretBase_RedCave1_EventScript_2760A6
	compare VAR_0x8004, 7
	goto_if_eq SecretBase_RedCave1_EventScript_27611E
	compare VAR_0x8004, 8
	goto_if_eq SecretBase_RedCave1_EventScript_276196
	compare VAR_0x8004, 9
	goto_if_eq SecretBase_RedCave1_EventScript_27620E
	end

SecretBase_RedCave1_EventScript_275DD6:: @ 8275DD6
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_275E25
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_275E44
	msgbox SecretBase_RedCave1_Text_2748A0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275E2F
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275E2F
	msgbox SecretBase_RedCave1_Text_274939, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_275E25:: @ 8275E25
	msgbox SecretBase_RedCave1_Text_2749ED, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275E2F:: @ 8275E2F
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_27494D, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275E44:: @ 8275E44
	msgbox SecretBase_RedCave1_Text_2749AA, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275E4E:: @ 8275E4E
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_275E9D
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_275EBC
	msgbox SecretBase_RedCave1_Text_274C13, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275EA7
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275EA7
	msgbox SecretBase_RedCave1_Text_274CB0, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_275E9D:: @ 8275E9D
	msgbox SecretBase_RedCave1_Text_274D69, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275EA7:: @ 8275EA7
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_274CDA, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275EBC:: @ 8275EBC
	msgbox SecretBase_RedCave1_Text_274D34, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275EC6:: @ 8275EC6
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_275F15
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_275F34
	msgbox SecretBase_RedCave1_Text_274F39, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275F1F
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275F1F
	msgbox SecretBase_RedCave1_Text_274FCA, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_275F15:: @ 8275F15
	msgbox SecretBase_RedCave1_Text_2750A4, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275F1F:: @ 8275F1F
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_274FDA, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275F34:: @ 8275F34
	msgbox SecretBase_RedCave1_Text_27502A, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275F3E:: @ 8275F3E
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_275F8D
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_275FAC
	msgbox SecretBase_RedCave1_Text_275287, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275F97
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_275F97
	msgbox SecretBase_RedCave1_Text_275315, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_275F8D:: @ 8275F8D
	msgbox SecretBase_RedCave1_Text_2753AB, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275F97:: @ 8275F97
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_275330, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275FAC:: @ 8275FAC
	msgbox SecretBase_RedCave1_Text_275374, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_275FB6:: @ 8275FB6
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_276005
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_276024
	msgbox SecretBase_RedCave1_Text_2755D2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_27600F
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_27600F
	msgbox SecretBase_RedCave1_Text_275679, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_276005:: @ 8276005
	msgbox SecretBase_RedCave1_Text_27571E, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27600F:: @ 827600F
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_275696, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276024:: @ 8276024
	msgbox SecretBase_RedCave1_Text_2756EF, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27602E:: @ 827602E
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_27607D
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_27609C
	msgbox SecretBase_RedCave1_Text_274A64, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_276087
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_276087
	msgbox SecretBase_RedCave1_Text_274AFA, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_27607D:: @ 827607D
	msgbox SecretBase_RedCave1_Text_274BA2, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276087:: @ 8276087
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_274B0B, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27609C:: @ 827609C
	msgbox SecretBase_RedCave1_Text_274B6C, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_2760A6:: @ 82760A6
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_2760F5
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_276114
	msgbox SecretBase_RedCave1_Text_274DD2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_2760FF
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_2760FF
	msgbox SecretBase_RedCave1_Text_274E41, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_2760F5:: @ 82760F5
	msgbox SecretBase_RedCave1_Text_274EF1, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_2760FF:: @ 82760FF
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_274E5A, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276114:: @ 8276114
	msgbox SecretBase_RedCave1_Text_274EB3, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27611E:: @ 827611E
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_27616D
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_27618C
	msgbox SecretBase_RedCave1_Text_275114, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_276177
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_276177
	msgbox SecretBase_RedCave1_Text_2751AF, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_27616D:: @ 827616D
	msgbox SecretBase_RedCave1_Text_275226, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276177:: @ 8276177
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_2751CA, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27618C:: @ 827618C
	msgbox SecretBase_RedCave1_Text_2751EC, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276196:: @ 8276196
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_2761E5
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_276204
	msgbox SecretBase_RedCave1_Text_275405, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_2761EF
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_2761EF
	msgbox SecretBase_RedCave1_Text_2754B2, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_2761E5:: @ 82761E5
	msgbox SecretBase_RedCave1_Text_275546, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_2761EF:: @ 82761EF
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_2754D8, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276204:: @ 8276204
	msgbox SecretBase_RedCave1_Text_27550C, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27620E:: @ 827620E
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SecretBase_RedCave1_EventScript_27625D
	compare VAR_RESULT, 1
	goto_if_eq SecretBase_RedCave1_EventScript_27627C
	msgbox SecretBase_RedCave1_Text_2757B5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_276267
	setvar VAR_RESULT, 1
	special sub_80EA30C
	call Common_EventScript_SaveGame
	compare VAR_RESULT, 0
	goto_if_eq SecretBase_RedCave1_EventScript_276267
	msgbox SecretBase_RedCave1_Text_275884, MSGBOX_DEFAULT
	goto SecretBase_RedCave1_EventScript_276286
	end

SecretBase_RedCave1_EventScript_27625D:: @ 827625D
	msgbox SecretBase_RedCave1_Text_275944, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276267:: @ 8276267
	special sub_80EB300
	setvar VAR_RESULT, 0
	special sub_80EA30C
	msgbox SecretBase_RedCave1_Text_27589D, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_27627C:: @ 827627C
	msgbox SecretBase_RedCave1_Text_275909, MSGBOX_DEFAULT
	release
	end

SecretBase_RedCave1_EventScript_276286:: @ 8276286
	special PrepSecretBaseBattleFlags
	setvar VAR_0x8004, SPECIAL_BATTLE_SECRET_BASE
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	compare VAR_RESULT, 3
	call_if_eq SecretBase_RedCave1_EventScript_2762BD
	compare VAR_RESULT, 1
	call_if_eq SecretBase_RedCave1_EventScript_2762C1
	compare VAR_RESULT, 2
	call_if_eq SecretBase_RedCave1_EventScript_2762C5
	special HealPlayerParty
	release
	end

SecretBase_RedCave1_EventScript_2762BD:: @ 82762BD
	special sub_80EB438
	return

SecretBase_RedCave1_EventScript_2762C1:: @ 82762C1
	special sub_80EB368
	return

SecretBase_RedCave1_EventScript_2762C5:: @ 82762C5
	special sub_80EB3D0
	return

	.include "data/scripts/secret_power_tm.inc"

SecretBase_EventScript_DollInteract:: @ 82766A2
	special sub_80EB290
	end

SecretBase_EventScript_CushionInteract:: @ 82766A6
	special sub_80EB2C8
	end

Text_2766AA: @ 82766AA
	.i18n 5734

Text_WantToRegisterSecretBase: @ 8276707
	.i18n 5735

Text_276731: @ 8276731
	.i18n 5736

Text_TooManyBasesDeleteSome: @ 827676F
	.i18n 5737

Text_2767D1: @ 82767D1
	.i18n 5738

Text_2767E9: @ 82767E9
	.i18n 5739

Text_SecretBaseBootUpPC: @ 8276805
	.i18n 5740

Text_SecretBasePCStartMenu: @ 827681A
	.i18n 5741

Text_276835: @ 8276835
	.i18n 5742

Text_27692B: @ 827692B
	.i18n 5743

Text_276974: @ 8276974
	.i18n 5744

Text_2769B8: @ 82769B8
	.i18n 5745

Text_2769FF: @ 82769FF
	.i18n 5746

Text_276A3D: @ 8276A3D
	.i18n 5747

Text_276A95: @ 8276A95
	.i18n 5748
