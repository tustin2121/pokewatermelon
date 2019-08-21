BattleFrontier_BattleTowerMultiBattleRoom_MapScripts:: @ 8243D92
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiBattleRoom_MapScript1_243DA7
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiBattleRoom_MapScript1_243DB0
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_MapScript2_243E14
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_MapScript2_243E23
	.byte 0

BattleFrontier_BattleTowerMultiBattleRoom_MapScript1_243DA7: @ 8243DA7
	setvar VAR_0x8004, 17
	special CallBattlePyramidFunction
	end

BattleFrontier_BattleTowerMultiBattleRoom_MapScript1_243DB0: @ 8243DB0
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243DDA
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
	setvar VAR_0x8004, 10
	special sub_8161F74
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243DDA:: @ 8243DDA
	setvar VAR_OBJ_GFX_ID_0, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_1, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_2, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_3, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_4, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_5, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_6, EVENT_OBJ_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_7, EVENT_OBJ_GFX_BOY_1
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_3, 1
	setobjectxyperm 1, 10, 2
	end

BattleFrontier_BattleTowerMultiBattleRoom_MapScript2_243E14: @ 8243E14
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E1E
	.2byte 0

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E1E:: @ 8243E1E
	turnobject EVENT_OBJ_ID_PLAYER, 2
	end

BattleFrontier_BattleTowerMultiBattleRoom_MapScript2_243E23: @ 8243E23
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E41
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E35
	.2byte 0

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E35:: @ 8243E35
	lockall
	setvar VAR_TEMP_3, 0
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243EB5
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E41:: @ 8243E41
	lockall
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243E75
	waitmovement 0
	applymovement 1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243E77
	waitmovement 0
	copyobjectxytoperm 1
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox BattleFrontier_BattleTowerMultiBattleRoom_Text_244056, MSGBOX_DEFAULT
	special HealPlayerParty
	setvar VAR_TEMP_1, 1
	releaseall
	end

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243E75: @ 8243E75
	walk_down
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243E77: @ 8243E77
	walk_left
	walk_in_place_fastest_down
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E7A:: @ 8243E7A
	lock
	faceplayer
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_244094
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E9D
	msgbox BattleFrontier_BattleTowerMultiBattleRoom_Text_24410C, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243E9D:: @ 8243E9D
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 6
	setvar VAR_0x8006, 1
	special CallFrontierUtilFunc
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_241C03
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243EB5:: @ 8243EB5
	msgbox BattleFrontier_BattleTowerMultiBattleRoom_Text_244149, MSGBOX_DEFAULT
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceUp
	waitmovement 0
	opendoor 10, 1
	waitdooranim
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243EE4
	closedoor 10, 1
	waitdooranim
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 255, 1, 6
	waitstate
	releaseall
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243EE4:: @ 8243EE4
	applymovement 1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F26
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F1A
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243EF6: @ 8243EF6
	applymovement 1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F26
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F1E
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F08: @ 8243F08
	applymovement 1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F26
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F22
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F1A: @ 8243F1A
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F1E: @ 8243F1E
	walk_right
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F22: @ 8243F22
	walk_left
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243F26: @ 8243F26
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F29:: @ 8243F29
	lock
	faceplayer
	setvar VAR_TEMP_2, 0
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36:: @ 8243F36
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FC3
	setvar VAR_0x8004, 11
	setvar VAR_0x8005, 0
	special sub_8161F74
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 11
	setvar VAR_0x8005, 1
	special sub_8161F74
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 11
	setvar VAR_0x8005, 2
	special sub_8161F74
	waitmessage
	multichoicedefault 20, 8, 94, 1, 0
	switch VAR_RESULT
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FC3
	case 127, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FC3
	setvar VAR_0x8004, 11
	setvar VAR_0x8005, 3
	special sub_8161F74
	waitmessage
	waitbuttonpress
	closemessage
	compare VAR_FACING, 1
	call_if_ne BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FD4
	compare VAR_FACING, 1
	call_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FDF
	removeobject VAR_LAST_TALKED
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 255, 10, 3
	waitstate
	release
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FC3:: @ 8243FC3
	setvar VAR_0x8004, 11
	setvar VAR_0x8005, 4
	special sub_8161F74
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FD4:: @ 8243FD4
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243FEA
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FDF:: @ 8243FDF
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiBattleRoom_Movement_243FF2
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243FEA: @ 8243FEA
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_Movement_243FF2: @ 8243FF2
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243FFB:: @ 8243FFB
	lock
	faceplayer
	setvar VAR_TEMP_2, 1
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_244008:: @ 8244008
	lock
	faceplayer
	setvar VAR_TEMP_2, 2
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_244015:: @ 8244015
	lock
	faceplayer
	setvar VAR_TEMP_2, 3
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_244022:: @ 8244022
	lock
	faceplayer
	setvar VAR_TEMP_2, 4
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_24402F:: @ 824402F
	lock
	faceplayer
	setvar VAR_TEMP_2, 5
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_24403C:: @ 824403C
	lock
	faceplayer
	setvar VAR_TEMP_2, 6
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_EventScript_244049:: @ 8244049
	lock
	faceplayer
	setvar VAR_TEMP_2, 7
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_243F36
	end

BattleFrontier_BattleTowerMultiBattleRoom_Text_244056: @ 8244056
	.i18n 1430

BattleFrontier_BattleTowerMultiBattleRoom_Text_244094: @ 8244094
	.i18n 1431

BattleFrontier_BattleTowerMultiBattleRoom_Text_24410C: @ 824410C
	.i18n 1432

BattleFrontier_BattleTowerMultiBattleRoom_Text_244149:: @ 8244149
	.i18n 1433

BattleFrontier_BattleTowerMultiBattleRoom_Text_24419A:: @ 824419A
	.i18n 1434

BattleFrontier_BattleTowerMultiBattleRoom_Text_2441CA:: @ 82441CA
	.i18n 1435

BattleFrontier_BattleTowerMultiBattleRoom_Text_2441F7:: @ 82441F7
	.i18n 1436

BattleFrontier_BattleTowerMultiBattleRoom_Text_24422E:: @ 824422E
	.i18n 1437

BattleFrontier_BattleTowerMultiBattleRoom_Text_244255:: @ 8244255
	.i18n 1438

BattleFrontier_BattleTowerMultiBattleRoom_Text_244286:: @ 8244286
	.i18n 1439

BattleFrontier_BattleTowerMultiBattleRoom_Text_2442B2:: @ 82442B2
	.i18n 1440

BattleFrontier_BattleTowerMultiBattleRoom_Text_2442E4:: @ 82442E4
	.i18n 1441

BattleFrontier_BattleTowerMultiBattleRoom_Text_244313:: @ 8244313
	.i18n 1442

BattleFrontier_BattleTowerMultiBattleRoom_Text_244350:: @ 8244350
	.i18n 1443

BattleFrontier_BattleTowerMultiBattleRoom_Text_244383:: @ 8244383
	.i18n 1444

BattleFrontier_BattleTowerMultiBattleRoom_Text_2443E7:: @ 82443E7
	.i18n 1445

BattleFrontier_BattleTowerMultiBattleRoom_Text_244413:: @ 8244413
	.i18n 1446

BattleFrontier_BattleTowerMultiBattleRoom_Text_24444B:: @ 824444B
	.i18n 1447

BattleFrontier_BattleTowerMultiBattleRoom_Text_2444D6:: @ 82444D6
	.i18n 1448

BattleFrontier_BattleTowerMultiBattleRoom_Text_2444EF:: @ 82444EF
	.i18n 1449

BattleFrontier_BattleTowerMultiBattleRoom_Text_24451E:: @ 824451E
	.i18n 1450

BattleFrontier_BattleTowerMultiBattleRoom_Text_244549:: @ 8244549
	.i18n 1451

BattleFrontier_BattleTowerMultiBattleRoom_Text_24459B:: @ 824459B
	.i18n 1452

BattleFrontier_BattleTowerMultiBattleRoom_Text_2445C5:: @ 82445C5
	.i18n 1453

BattleFrontier_BattleTowerMultiBattleRoom_Text_2445E8:: @ 82445E8
	.i18n 1454

BattleFrontier_BattleTowerMultiBattleRoom_Text_244618:: @ 8244618
	.i18n 1455

BattleFrontier_BattleTowerMultiBattleRoom_Text_244643:: @ 8244643
	.i18n 1456

BattleFrontier_BattleTowerMultiBattleRoom_Text_24468F:: @ 824468F
	.i18n 1457

BattleFrontier_BattleTowerMultiBattleRoom_Text_2446B4:: @ 82446B4
	.i18n 1458

BattleFrontier_BattleTowerMultiBattleRoom_Text_2446E5:: @ 82446E5
	.i18n 1459

BattleFrontier_BattleTowerMultiBattleRoom_Text_24474D:: @ 824474D
	.i18n 1460

BattleFrontier_BattleTowerMultiBattleRoom_Text_24479E:: @ 824479E
	.i18n 1461

BattleFrontier_BattleTowerMultiBattleRoom_Text_24480C:: @ 824480C
	.i18n 1462

BattleFrontier_BattleTowerMultiBattleRoom_Text_2448A7:: @ 82448A7
	.i18n 1463

BattleFrontier_BattleTowerMultiBattleRoom_Text_2448CD:: @ 82448CD
	.i18n 1464

BattleFrontier_BattleTowerMultiBattleRoom_Text_2448F5:: @ 82448F5
	.i18n 1465

BattleFrontier_BattleTowerMultiBattleRoom_Text_244939:: @ 8244939
	.i18n 1466

BattleFrontier_BattleTowerMultiBattleRoom_Text_244989:: @ 8244989
	.i18n 1467

BattleFrontier_BattleTowerMultiBattleRoom_Text_2449E6:: @ 82449E6
	.i18n 1468

BattleFrontier_BattleTowerMultiBattleRoom_Text_244A23:: @ 8244A23
	.i18n 1469

BattleFrontier_BattleTowerMultiBattleRoom_Text_244AA9:: @ 8244AA9
	.i18n 1470

BattleFrontier_BattleTowerMultiBattleRoom_Text_244AD6:: @ 8244AD6
	.i18n 1471

BattleFrontier_BattleTowerMultiBattleRoom_Text_244B52:: @ 8244B52
	.i18n 1472

BattleFrontier_BattleTowerMultiBattleRoom_Text_244B93:: @ 8244B93
	.i18n 1473

BattleFrontier_BattleTowerMultiBattleRoom_Text_244BD2:: @ 8244BD2
	.i18n 1474

BattleFrontier_BattleTowerMultiBattleRoom_Text_244C18:: @ 8244C18
	.i18n 1475

BattleFrontier_BattleTowerMultiBattleRoom_Text_244C6E:: @ 8244C6E
	.i18n 1476

BattleFrontier_BattleTowerMultiBattleRoom_Text_244CD6:: @ 8244CD6
	.i18n 1477

BattleFrontier_BattleTowerMultiBattleRoom_Text_244D07:: @ 8244D07
	.i18n 1478

BattleFrontier_BattleTowerMultiBattleRoom_Text_244D36:: @ 8244D36
	.i18n 1479

BattleFrontier_BattleTowerMultiBattleRoom_Text_244D82:: @ 8244D82
	.i18n 1480

BattleFrontier_BattleTowerMultiBattleRoom_Text_244DC6:: @ 8244DC6
	.i18n 1481

BattleFrontier_BattleTowerMultiBattleRoom_Text_244DFE:: @ 8244DFE
	.i18n 1482

BattleFrontier_BattleTowerMultiBattleRoom_Text_244E5B:: @ 8244E5B
	.i18n 1483

BattleFrontier_BattleTowerMultiBattleRoom_Text_244E7E:: @ 8244E7E
	.i18n 1484

BattleFrontier_BattleTowerMultiBattleRoom_Text_244ECA:: @ 8244ECA
	.i18n 1485

BattleFrontier_BattleTowerMultiBattleRoom_Text_244EF4:: @ 8244EF4
	.i18n 1486

BattleFrontier_BattleTowerMultiBattleRoom_Text_244F4F:: @ 8244F4F
	.i18n 1487

BattleFrontier_BattleTowerMultiBattleRoom_Text_244F98:: @ 8244F98
	.i18n 1488

BattleFrontier_BattleTowerMultiBattleRoom_Text_244FD3:: @ 8244FD3
	.i18n 1489

BattleFrontier_BattleTowerMultiBattleRoom_Text_245013:: @ 8245013
	.i18n 1490

BattleFrontier_BattleTowerMultiBattleRoom_Text_24503D:: @ 824503D
	.i18n 1491

BattleFrontier_BattleTowerMultiBattleRoom_Text_245087:: @ 8245087
	.i18n 1492

BattleFrontier_BattleTowerMultiBattleRoom_Text_2450C0:: @ 82450C0
	.i18n 1493

BattleFrontier_BattleTowerMultiBattleRoom_Text_2450E6:: @ 82450E6
	.i18n 1494

BattleFrontier_BattleTowerMultiBattleRoom_Text_245196:: @ 8245196
	.i18n 1495

BattleFrontier_BattleTowerMultiBattleRoom_Text_2451BD:: @ 82451BD
	.i18n 1496

BattleFrontier_BattleTowerMultiBattleRoom_Text_24522F:: @ 824522F
	.i18n 1497

BattleFrontier_BattleTowerMultiBattleRoom_Text_24529A:: @ 824529A
	.i18n 1498

BattleFrontier_BattleTowerMultiBattleRoom_Text_2452EF:: @ 82452EF
	.i18n 1499

BattleFrontier_BattleTowerMultiBattleRoom_Text_2453B4:: @ 82453B4
	.i18n 1500

BattleFrontier_BattleTowerMultiBattleRoom_Text_245406:: @ 8245406
	.i18n 1501

BattleFrontier_BattleTowerMultiBattleRoom_Text_245464:: @ 8245464
	.i18n 1502

BattleFrontier_BattleTowerMultiBattleRoom_Text_2454A3:: @ 82454A3
	.i18n 1503

BattleFrontier_BattleTowerMultiBattleRoom_Text_2454D6:: @ 82454D6
	.i18n 1504

BattleFrontier_BattleTowerMultiBattleRoom_Text_245535:: @ 8245535
	.i18n 1505

BattleFrontier_BattleTowerMultiBattleRoom_Text_24555F:: @ 824555F
	.i18n 1506

BattleFrontier_BattleTowerMultiBattleRoom_Text_2455EC:: @ 82455EC
	.i18n 1507

BattleFrontier_BattleTowerMultiBattleRoom_Text_245656:: @ 8245656
	.i18n 1508

BattleFrontier_BattleTowerMultiBattleRoom_Text_24568A:: @ 824568A
	.i18n 1509

BattleFrontier_BattleTowerMultiBattleRoom_Text_2456F5:: @ 82456F5
	.i18n 1510

BattleFrontier_BattleTowerMultiBattleRoom_Text_245740:: @ 8245740
	.i18n 1511

BattleFrontier_BattleTowerMultiBattleRoom_Text_2457D9:: @ 82457D9
	.i18n 1512

BattleFrontier_BattleTowerMultiBattleRoom_Text_24581F:: @ 824581F
	.i18n 1513

BattleFrontier_BattleTowerMultiBattleRoom_Text_245851:: @ 8245851
	.i18n 1514

BattleFrontier_BattleTowerMultiBattleRoom_Text_24589C:: @ 824589C
	.i18n 1515

BattleFrontier_BattleTowerMultiBattleRoom_Text_2458CE:: @ 82458CE
	.i18n 1516

BattleFrontier_BattleTowerMultiBattleRoom_Text_245923:: @ 8245923
	.i18n 1517

BattleFrontier_BattleTowerMultiBattleRoom_Text_24597F:: @ 824597F
	.i18n 1518

BattleFrontier_BattleTowerMultiBattleRoom_Text_2459BE:: @ 82459BE
	.i18n 1519

BattleFrontier_BattleTowerMultiBattleRoom_Text_2459F7:: @ 82459F7
	.i18n 1520

BattleFrontier_BattleTowerMultiBattleRoom_Text_245A5F:: @ 8245A5F
	.i18n 1521

BattleFrontier_BattleTowerMultiBattleRoom_Text_245AB4:: @ 8245AB4
	.i18n 1522

BattleFrontier_BattleTowerMultiBattleRoom_Text_245B3E:: @ 8245B3E
	.i18n 1523

BattleFrontier_BattleTowerMultiBattleRoom_Text_245B79:: @ 8245B79
	.i18n 1524

BattleFrontier_BattleTowerMultiBattleRoom_Text_245B91:: @ 8245B91
	.i18n 1525

BattleFrontier_BattleTowerMultiBattleRoom_Text_245BBD:: @ 8245BBD
	.i18n 1526

BattleFrontier_BattleTowerMultiBattleRoom_Text_245C05:: @ 8245C05
	.i18n 1527

BattleFrontier_BattleTowerMultiBattleRoom_Text_245C2D:: @ 8245C2D
	.i18n 1528

BattleFrontier_BattleTowerMultiBattleRoom_Text_245C66:: @ 8245C66
	.i18n 1529

BattleFrontier_BattleTowerMultiBattleRoom_Text_245C7F:: @ 8245C7F
	.i18n 1530

BattleFrontier_BattleTowerMultiBattleRoom_Text_245CAC:: @ 8245CAC
	.i18n 1531

BattleFrontier_BattleTowerMultiBattleRoom_Text_245CE6:: @ 8245CE6
	.i18n 1532

BattleFrontier_BattleTowerMultiBattleRoom_Text_245D07:: @ 8245D07
	.i18n 1533

BattleFrontier_BattleTowerMultiBattleRoom_Text_245D4B:: @ 8245D4B
	.i18n 1534

BattleFrontier_BattleTowerMultiBattleRoom_Text_245D60:: @ 8245D60
	.i18n 1535

BattleFrontier_BattleTowerMultiBattleRoom_Text_245D8D:: @ 8245D8D
	.i18n 1536

BattleFrontier_BattleTowerMultiBattleRoom_Text_245DC7:: @ 8245DC7
	.i18n 1537

BattleFrontier_BattleTowerMultiBattleRoom_Text_245DF0:: @ 8245DF0
	.i18n 1538

BattleFrontier_BattleTowerMultiBattleRoom_Text_245E20:: @ 8245E20
	.i18n 1539

BattleFrontier_BattleTowerMultiBattleRoom_Text_245E41:: @ 8245E41
	.i18n 1540

BattleFrontier_BattleTowerMultiBattleRoom_Text_245E78:: @ 8245E78
	.i18n 1541

BattleFrontier_BattleTowerMultiBattleRoom_Text_245EBD:: @ 8245EBD
	.i18n 1542

BattleFrontier_BattleTowerMultiBattleRoom_Text_245EEC:: @ 8245EEC
	.i18n 1543

BattleFrontier_BattleTowerMultiBattleRoom_Text_245F2B:: @ 8245F2B
	.i18n 1544

BattleFrontier_BattleTowerMultiBattleRoom_Text_245F58:: @ 8245F58
	.i18n 1545

BattleFrontier_BattleTowerMultiBattleRoom_Text_245F87:: @ 8245F87
	.i18n 1546

BattleFrontier_BattleTowerMultiBattleRoom_Text_245FC6:: @ 8245FC6
	.i18n 1547

BattleFrontier_BattleTowerMultiBattleRoom_Text_246002:: @ 8246002
	.i18n 1548

BattleFrontier_BattleTowerMultiBattleRoom_Text_246020:: @ 8246020
	.i18n 1549

BattleFrontier_BattleTowerMultiBattleRoom_Text_246051:: @ 8246051
	.i18n 1550

BattleFrontier_BattleTowerMultiBattleRoom_Text_246082:: @ 8246082
	.i18n 1551

BattleFrontier_BattleTowerMultiBattleRoom_Text_2460D5:: @ 82460D5
	.i18n 1552

BattleFrontier_BattleTowerMultiBattleRoom_Text_24610D:: @ 824610D
	.i18n 1553

BattleFrontier_BattleTowerMultiBattleRoom_Text_24614A:: @ 824614A
	.i18n 1554

BattleFrontier_BattleTowerMultiBattleRoom_Text_24615D:: @ 824615D
	.i18n 1555

BattleFrontier_BattleTowerMultiBattleRoom_Text_24617D:: @ 824617D
	.i18n 1556

BattleFrontier_BattleTowerMultiBattleRoom_Text_2461C7:: @ 82461C7
	.i18n 1557

BattleFrontier_BattleTowerMultiBattleRoom_Text_2461F5:: @ 82461F5
	.i18n 1558

BattleFrontier_BattleTowerMultiBattleRoom_Text_24622A:: @ 824622A
	.i18n 1559

BattleFrontier_BattleTowerMultiBattleRoom_Text_246244:: @ 8246244
	.i18n 1560

BattleFrontier_BattleTowerMultiBattleRoom_Text_24626E:: @ 824626E
	.i18n 1561

BattleFrontier_BattleTowerMultiBattleRoom_Text_2462AA:: @ 82462AA
	.i18n 1562

BattleFrontier_BattleTowerMultiBattleRoom_Text_2462E4:: @ 82462E4
	.i18n 1563

BattleFrontier_BattleTowerMultiBattleRoom_Text_24631F:: @ 824631F
	.i18n 1564

BattleFrontier_BattleTowerMultiBattleRoom_Text_24633C:: @ 824633C
	.i18n 1565

BattleFrontier_BattleTowerMultiBattleRoom_Text_24636B:: @ 824636B
	.i18n 1566

BattleFrontier_BattleTowerMultiBattleRoom_Text_2463C5:: @ 82463C5
	.i18n 1567

BattleFrontier_BattleTowerMultiBattleRoom_Text_2463FF:: @ 82463FF
	.i18n 1568

BattleFrontier_BattleTowerMultiBattleRoom_Text_246449:: @ 8246449
	.i18n 1569

BattleFrontier_BattleTowerMultiBattleRoom_Text_246478:: @ 8246478
	.i18n 1570

BattleFrontier_BattleTowerMultiBattleRoom_Text_24649D:: @ 824649D
	.i18n 1571

BattleFrontier_BattleTowerMultiBattleRoom_Text_2464EE:: @ 82464EE
	.i18n 1572

BattleFrontier_BattleTowerMultiBattleRoom_Text_246529:: @ 8246529
	.i18n 1573

BattleFrontier_BattleTowerMultiBattleRoom_Text_246571:: @ 8246571
	.i18n 1574

BattleFrontier_BattleTowerMultiBattleRoom_Text_24658C:: @ 824658C
	.i18n 1575

BattleFrontier_BattleTowerMultiBattleRoom_Text_2465B5:: @ 82465B5
	.i18n 1576

BattleFrontier_BattleTowerMultiBattleRoom_Text_246605:: @ 8246605
	.i18n 1577

BattleFrontier_BattleTowerMultiBattleRoom_Text_24662A:: @ 824662A
	.i18n 1578

BattleFrontier_BattleTowerMultiBattleRoom_Text_246662:: @ 8246662
	.i18n 1579

BattleFrontier_BattleTowerMultiBattleRoom_Text_246686:: @ 8246686
	.i18n 1580

BattleFrontier_BattleTowerMultiBattleRoom_Text_2466B4:: @ 82466B4
	.i18n 1581

BattleFrontier_BattleTowerMultiBattleRoom_Text_2466E6:: @ 82466E6
	.i18n 1582

BattleFrontier_BattleTowerMultiBattleRoom_Text_24670A:: @ 824670A
	.i18n 1583

BattleFrontier_BattleTowerMultiBattleRoom_Text_246741:: @ 8246741
	.i18n 1584

BattleFrontier_BattleTowerMultiBattleRoom_Text_246760:: @ 8246760
	.i18n 1585

BattleFrontier_BattleTowerMultiBattleRoom_Text_246791:: @ 8246791
	.i18n 1586

BattleFrontier_BattleTowerMultiBattleRoom_Text_2467C4:: @ 82467C4
	.i18n 1587

BattleFrontier_BattleTowerMultiBattleRoom_Text_2467E6:: @ 82467E6
	.i18n 1588

BattleFrontier_BattleTowerMultiBattleRoom_Text_2467FF:: @ 82467FF
	.i18n 1589

BattleFrontier_BattleTowerMultiBattleRoom_Text_246831:: @ 8246831
	.i18n 1590

BattleFrontier_BattleTowerMultiBattleRoom_Text_246864:: @ 8246864
	.i18n 1591

BattleFrontier_BattleTowerMultiBattleRoom_Text_2468A7:: @ 82468A7
	.i18n 1592

BattleFrontier_BattleTowerMultiBattleRoom_Text_2468FE:: @ 82468FE
	.i18n 1593

BattleFrontier_BattleTowerMultiBattleRoom_Text_24692B:: @ 824692B
	.i18n 1594

BattleFrontier_BattleTowerMultiBattleRoom_Text_24694B:: @ 824694B
	.i18n 1595

BattleFrontier_BattleTowerMultiBattleRoom_Text_24697C:: @ 824697C
	.i18n 1596

BattleFrontier_BattleTowerMultiBattleRoom_Text_2469B4:: @ 82469B4
	.i18n 1597

BattleFrontier_BattleTowerMultiBattleRoom_Text_2469F1:: @ 82469F1
	.i18n 1598

BattleFrontier_BattleTowerMultiBattleRoom_Text_246A22:: @ 8246A22
	.i18n 1599

BattleFrontier_BattleTowerMultiBattleRoom_Text_246A4E:: @ 8246A4E
	.i18n 1600

BattleFrontier_BattleTowerMultiBattleRoom_Text_246A85:: @ 8246A85
	.i18n 1601

BattleFrontier_BattleTowerMultiBattleRoom_Text_246ACF:: @ 8246ACF
	.i18n 1602

BattleFrontier_BattleTowerMultiBattleRoom_Text_246AF7:: @ 8246AF7
	.i18n 1603

BattleFrontier_BattleTowerMultiBattleRoom_Text_246B2B:: @ 8246B2B
	.i18n 1604

BattleFrontier_BattleTowerMultiBattleRoom_Text_246B3F:: @ 8246B3F
	.i18n 1605

BattleFrontier_BattleTowerMultiBattleRoom_Text_246B6B:: @ 8246B6B
	.i18n 1606

BattleFrontier_BattleTowerMultiBattleRoom_Text_246BB2:: @ 8246BB2
	.i18n 1607

BattleFrontier_BattleTowerMultiBattleRoom_Text_246BE9:: @ 8246BE9
	.i18n 1608

BattleFrontier_BattleTowerMultiBattleRoom_Text_246C22:: @ 8246C22
	.i18n 1609

BattleFrontier_BattleTowerMultiBattleRoom_Text_246C35:: @ 8246C35
	.i18n 1610

BattleFrontier_BattleTowerMultiBattleRoom_Text_246C6C:: @ 8246C6C
	.i18n 1611

BattleFrontier_BattleTowerMultiBattleRoom_Text_246CB3:: @ 8246CB3
	.i18n 1612

BattleFrontier_BattleTowerMultiBattleRoom_Text_246CE9:: @ 8246CE9
	.i18n 1613

BattleFrontier_BattleTowerMultiBattleRoom_Text_246D2D:: @ 8246D2D
	.i18n 1614

BattleFrontier_BattleTowerMultiBattleRoom_Text_246D3F:: @ 8246D3F
	.i18n 1615

BattleFrontier_BattleTowerMultiBattleRoom_Text_246D6A:: @ 8246D6A
	.i18n 1616

BattleFrontier_BattleTowerMultiBattleRoom_Text_246D9E:: @ 8246D9E
	.i18n 1617

BattleFrontier_BattleTowerMultiBattleRoom_Text_246DD3:: @ 8246DD3
	.i18n 1618

BattleFrontier_BattleTowerMultiBattleRoom_Text_246E1A:: @ 8246E1A
	.i18n 1619

BattleFrontier_BattleTowerMultiBattleRoom_Text_246E39:: @ 8246E39
	.i18n 1620

BattleFrontier_BattleTowerMultiBattleRoom_Text_246E64:: @ 8246E64
	.i18n 1621

BattleFrontier_BattleTowerMultiBattleRoom_Text_246EB6:: @ 8246EB6
	.i18n 1622

BattleFrontier_BattleTowerMultiBattleRoom_Text_246EEE:: @ 8246EEE
	.i18n 1623

BattleFrontier_BattleTowerMultiBattleRoom_Text_246F21:: @ 8246F21
	.i18n 1624

BattleFrontier_BattleTowerMultiBattleRoom_Text_246F4C:: @ 8246F4C
	.i18n 1625

BattleFrontier_BattleTowerMultiBattleRoom_Text_246F7B:: @ 8246F7B
	.i18n 1626

BattleFrontier_BattleTowerMultiBattleRoom_Text_246FCC:: @ 8246FCC
	.i18n 1627

BattleFrontier_BattleTowerMultiBattleRoom_Text_247013:: @ 8247013
	.i18n 1628

BattleFrontier_BattleTowerMultiBattleRoom_Text_24705B:: @ 824705B
	.i18n 1629

BattleFrontier_BattleTowerMultiBattleRoom_Text_24707D:: @ 824707D
	.i18n 1630

BattleFrontier_BattleTowerMultiBattleRoom_Text_2470B2:: @ 82470B2
	.i18n 1631

BattleFrontier_BattleTowerMultiBattleRoom_Text_2470FD:: @ 82470FD
	.i18n 1632

BattleFrontier_BattleTowerMultiBattleRoom_Text_24712A:: @ 824712A
	.i18n 1633

BattleFrontier_BattleTowerMultiBattleRoom_Text_24716C:: @ 824716C
	.i18n 1634

BattleFrontier_BattleTowerMultiBattleRoom_Text_24718D:: @ 824718D
	.i18n 1635

BattleFrontier_BattleTowerMultiBattleRoom_Text_2471C7:: @ 82471C7
	.i18n 1636

BattleFrontier_BattleTowerMultiBattleRoom_Text_2471FB:: @ 82471FB
	.i18n 1637

BattleFrontier_BattleTowerMultiBattleRoom_Text_247238:: @ 8247238
	.i18n 1638

BattleFrontier_BattleTowerMultiBattleRoom_Text_247268:: @ 8247268
	.i18n 1639

BattleFrontier_BattleTowerMultiBattleRoom_Text_247291:: @ 8247291
	.i18n 1640

BattleFrontier_BattleTowerMultiBattleRoom_Text_2472C7:: @ 82472C7
	.i18n 1641

BattleFrontier_BattleTowerMultiBattleRoom_Text_247313:: @ 8247313
	.i18n 1642

BattleFrontier_BattleTowerMultiBattleRoom_Text_247348:: @ 8247348
	.i18n 1643

BattleFrontier_BattleTowerMultiBattleRoom_Text_24737A:: @ 824737A
	.i18n 1644

BattleFrontier_BattleTowerMultiBattleRoom_Text_24738F:: @ 824738F
	.i18n 1645

BattleFrontier_BattleTowerMultiBattleRoom_Text_2473C6:: @ 82473C6
	.i18n 1646

BattleFrontier_BattleTowerMultiBattleRoom_Text_2473FB:: @ 82473FB
	.i18n 1647

BattleFrontier_BattleTowerMultiBattleRoom_Text_247438:: @ 8247438
	.i18n 1648

BattleFrontier_BattleTowerMultiBattleRoom_Text_247470:: @ 8247470
	.i18n 1649

BattleFrontier_BattleTowerMultiBattleRoom_Text_247484:: @ 8247484
	.i18n 1650

BattleFrontier_BattleTowerMultiBattleRoom_Text_2474AF:: @ 82474AF
	.i18n 1651

BattleFrontier_BattleTowerMultiBattleRoom_Text_2474EC:: @ 82474EC
	.i18n 1652

BattleFrontier_BattleTowerMultiBattleRoom_Text_24751D:: @ 824751D
	.i18n 1653

BattleFrontier_BattleTowerMultiBattleRoom_Text_24754A:: @ 824754A
	.i18n 1654

BattleFrontier_BattleTowerMultiBattleRoom_Text_24755C:: @ 824755C
	.i18n 1655

BattleFrontier_BattleTowerMultiBattleRoom_Text_24758B:: @ 824758B
	.i18n 1656

BattleFrontier_BattleTowerMultiBattleRoom_Text_2475BC:: @ 82475BC
	.i18n 1657

BattleFrontier_BattleTowerMultiBattleRoom_Text_2475D5:: @ 82475D5
	.i18n 1658

BattleFrontier_BattleTowerMultiBattleRoom_Text_24760D:: @ 824760D
	.i18n 1659

BattleFrontier_BattleTowerMultiBattleRoom_Text_247629:: @ 8247629
	.i18n 1660

BattleFrontier_BattleTowerMultiBattleRoom_Text_247655:: @ 8247655
	.i18n 1661

BattleFrontier_BattleTowerMultiBattleRoom_Text_24769B:: @ 824769B
	.i18n 1662

BattleFrontier_BattleTowerMultiBattleRoom_Text_2476ED:: @ 82476ED
	.i18n 1663

BattleFrontier_BattleTowerMultiBattleRoom_Text_247724:: @ 8247724
	.i18n 1664

BattleFrontier_BattleTowerMultiBattleRoom_Text_247749:: @ 8247749
	.i18n 1665

BattleFrontier_BattleTowerMultiBattleRoom_Text_24777A:: @ 824777A
	.i18n 1666

BattleFrontier_BattleTowerMultiBattleRoom_Text_2477CE:: @ 82477CE
	.i18n 1667

BattleFrontier_BattleTowerMultiBattleRoom_Text_247807:: @ 8247807
	.i18n 1668

BattleFrontier_BattleTowerMultiBattleRoom_Text_247838:: @ 8247838
	.i18n 1669

BattleFrontier_BattleTowerMultiBattleRoom_Text_247854:: @ 8247854
	.i18n 1670

BattleFrontier_BattleTowerMultiBattleRoom_Text_247889:: @ 8247889
	.i18n 1671

BattleFrontier_BattleTowerMultiBattleRoom_Text_2478DD:: @ 82478DD
	.i18n 1672

BattleFrontier_BattleTowerMultiBattleRoom_Text_24790D:: @ 824790D
	.i18n 1673

BattleFrontier_BattleTowerMultiBattleRoom_Text_247942:: @ 8247942
	.i18n 1674

BattleFrontier_BattleTowerMultiBattleRoom_Text_24795F:: @ 824795F
	.i18n 1675

BattleFrontier_BattleTowerMultiBattleRoom_Text_247991:: @ 8247991
	.i18n 1676

BattleFrontier_BattleTowerMultiBattleRoom_Text_2479CE:: @ 82479CE
	.i18n 1677

BattleFrontier_BattleTowerMultiBattleRoom_Text_247A18:: @ 8247A18
	.i18n 1678

BattleFrontier_BattleTowerMultiBattleRoom_Text_247A51:: @ 8247A51
	.i18n 1679

BattleFrontier_BattleTowerMultiBattleRoom_Text_247A76:: @ 8247A76
	.i18n 1680

BattleFrontier_BattleTowerMultiBattleRoom_Text_247AA1:: @ 8247AA1
	.i18n 1681

BattleFrontier_BattleTowerMultiBattleRoom_Text_247AE3:: @ 8247AE3
	.i18n 1682

BattleFrontier_BattleTowerMultiBattleRoom_Text_247B16:: @ 8247B16
	.i18n 1683

BattleFrontier_BattleTowerMultiBattleRoom_Text_247B3E:: @ 8247B3E
	.i18n 1684

BattleFrontier_BattleTowerMultiBattleRoom_Text_247B62:: @ 8247B62
	.i18n 1685

BattleFrontier_BattleTowerMultiBattleRoom_Text_247B9B:: @ 8247B9B
	.i18n 1686

BattleFrontier_BattleTowerMultiBattleRoom_Text_247BE7:: @ 8247BE7
	.i18n 1687

BattleFrontier_BattleTowerMultiBattleRoom_Text_247C23:: @ 8247C23
	.i18n 1688

BattleFrontier_BattleTowerMultiBattleRoom_Text_247C4E:: @ 8247C4E
	.i18n 1689

BattleFrontier_BattleTowerMultiBattleRoom_Text_247C8C:: @ 8247C8C
	.i18n 1690

BattleFrontier_BattleTowerMultiBattleRoom_Text_247CB2:: @ 8247CB2
	.i18n 1691

BattleFrontier_BattleTowerMultiBattleRoom_Text_247D07:: @ 8247D07
	.i18n 1692

BattleFrontier_BattleTowerMultiBattleRoom_Text_247D4E:: @ 8247D4E
	.i18n 1693

BattleFrontier_BattleTowerMultiBattleRoom_Text_247D97:: @ 8247D97
	.i18n 1694

BattleFrontier_BattleTowerMultiBattleRoom_Text_247DC7:: @ 8247DC7
	.i18n 1695

BattleFrontier_BattleTowerMultiBattleRoom_Text_247DFE:: @ 8247DFE
	.i18n 1696

BattleFrontier_BattleTowerMultiBattleRoom_Text_247E3E:: @ 8247E3E
	.i18n 1697

BattleFrontier_BattleTowerMultiBattleRoom_Text_247E7E:: @ 8247E7E
	.i18n 1698

BattleFrontier_BattleTowerMultiBattleRoom_Text_247EA1:: @ 8247EA1
	.i18n 1699

BattleFrontier_BattleTowerMultiBattleRoom_Text_247EB5:: @ 8247EB5
	.i18n 1700

BattleFrontier_BattleTowerMultiBattleRoom_Text_247EE9:: @ 8247EE9
	.i18n 1701

BattleFrontier_BattleTowerMultiBattleRoom_Text_247F3F:: @ 8247F3F
	.i18n 1702

BattleFrontier_BattleTowerMultiBattleRoom_Text_247F6D:: @ 8247F6D
	.i18n 1703

BattleFrontier_BattleTowerMultiBattleRoom_Text_247FA3:: @ 8247FA3
	.i18n 1704

BattleFrontier_BattleTowerMultiBattleRoom_Text_247FB7:: @ 8247FB7
	.i18n 1705

BattleFrontier_BattleTowerMultiBattleRoom_Text_247FE9:: @ 8247FE9
	.i18n 1706

BattleFrontier_BattleTowerMultiBattleRoom_Text_248031:: @ 8248031
	.i18n 1707

BattleFrontier_BattleTowerMultiBattleRoom_Text_24805E:: @ 824805E
	.i18n 1708

BattleFrontier_BattleTowerMultiBattleRoom_Text_24808D:: @ 824808D
	.i18n 1709

BattleFrontier_BattleTowerMultiBattleRoom_Text_2480AB:: @ 82480AB
	.i18n 1710

BattleFrontier_BattleTowerMultiBattleRoom_Text_2480DC:: @ 82480DC
	.i18n 1711

BattleFrontier_BattleTowerMultiBattleRoom_Text_248128:: @ 8248128
	.i18n 1712

BattleFrontier_BattleTowerMultiBattleRoom_Text_248151:: @ 8248151
	.i18n 1713

BattleFrontier_BattleTowerMultiBattleRoom_Text_24818E:: @ 824818E
	.i18n 1714

BattleFrontier_BattleTowerMultiBattleRoom_Text_2481A9:: @ 82481A9
	.i18n 1715

BattleFrontier_BattleTowerMultiBattleRoom_Text_2481E1:: @ 82481E1
	.i18n 1716

BattleFrontier_BattleTowerMultiBattleRoom_Text_248221:: @ 8248221
	.i18n 1717

BattleFrontier_BattleTowerMultiBattleRoom_Text_24824F:: @ 824824F
	.i18n 1718

BattleFrontier_BattleTowerMultiBattleRoom_Text_248297:: @ 8248297
	.i18n 1719

BattleFrontier_BattleTowerMultiBattleRoom_Text_2482B1:: @ 82482B1
	.i18n 1720

BattleFrontier_BattleTowerMultiBattleRoom_Text_2482DC:: @ 82482DC
	.i18n 1721

BattleFrontier_BattleTowerMultiBattleRoom_Text_248321:: @ 8248321
	.i18n 1722

BattleFrontier_BattleTowerMultiBattleRoom_Text_24833D:: @ 824833D
	.i18n 1723

BattleFrontier_BattleTowerMultiBattleRoom_Text_248369:: @ 8248369
	.i18n 1724

BattleFrontier_BattleTowerMultiBattleRoom_Text_24838D:: @ 824838D
	.i18n 1725

BattleFrontier_BattleTowerMultiBattleRoom_Text_2483C1:: @ 82483C1
	.i18n 1726

BattleFrontier_BattleTowerMultiBattleRoom_Text_248401:: @ 8248401
	.i18n 1727

BattleFrontier_BattleTowerMultiBattleRoom_Text_248431:: @ 8248431
	.i18n 1728

BattleFrontier_BattleTowerMultiBattleRoom_Text_248467:: @ 8248467
	.i18n 1729

BattleFrontier_BattleTowerMultiBattleRoom_Text_248477:: @ 8248477
	.i18n 1730

BattleFrontier_BattleTowerMultiBattleRoom_Text_2484AC:: @ 82484AC
	.i18n 1731

BattleFrontier_BattleTowerMultiBattleRoom_Text_2484E7:: @ 82484E7
	.i18n 1732

BattleFrontier_BattleTowerMultiBattleRoom_Text_248517:: @ 8248517
	.i18n 1733

BattleFrontier_BattleTowerMultiBattleRoom_Text_248553:: @ 8248553
	.i18n 1734

BattleFrontier_BattleTowerMultiBattleRoom_Text_24856A:: @ 824856A
	.i18n 1735

BattleFrontier_BattleTowerMultiBattleRoom_Text_24857D:: @ 824857D
	.i18n 1736

BattleFrontier_BattleTowerMultiBattleRoom_Text_2485E5:: @ 82485E5
	.i18n 1737

BattleFrontier_BattleTowerMultiBattleRoom_Text_248614:: @ 8248614
	.i18n 1738

BattleFrontier_BattleTowerMultiBattleRoom_Text_24864E:: @ 824864E
	.i18n 1739

BattleFrontier_BattleTowerMultiBattleRoom_Text_248661:: @ 8248661
	.i18n 1740

BattleFrontier_BattleTowerMultiBattleRoom_Text_248671:: @ 8248671
	.i18n 1741

BattleFrontier_BattleTowerMultiBattleRoom_Text_2486C6:: @ 82486C6
	.i18n 1742

BattleFrontier_BattleTowerMultiBattleRoom_Text_2486FF:: @ 82486FF
	.i18n 1743

BattleFrontier_BattleTowerMultiBattleRoom_Text_248725:: @ 8248725
	.i18n 1744

BattleFrontier_BattleTowerMultiBattleRoom_Text_248751:: @ 8248751
	.i18n 1745

BattleFrontier_BattleTowerMultiBattleRoom_Text_248781:: @ 8248781
	.i18n 1746

BattleFrontier_BattleTowerMultiBattleRoom_Text_2487C9:: @ 82487C9
	.i18n 1747

BattleFrontier_BattleTowerMultiBattleRoom_Text_2487F7:: @ 82487F7
	.i18n 1748

BattleFrontier_BattleTowerMultiBattleRoom_Text_248829:: @ 8248829
	.i18n 1749

BattleFrontier_BattleTowerMultiBattleRoom_Text_24885B:: @ 824885B
	.i18n 1750

BattleFrontier_BattleTowerMultiBattleRoom_Text_248892:: @ 8248892
	.i18n 1751

BattleFrontier_BattleTowerMultiBattleRoom_Text_2488D8:: @ 82488D8
	.i18n 1752

BattleFrontier_BattleTowerMultiBattleRoom_Text_248908:: @ 8248908
	.i18n 1753

BattleFrontier_BattleTowerMultiBattleRoom_Text_24894B:: @ 824894B
	.i18n 1754

BattleFrontier_BattleTowerMultiBattleRoom_Text_24895F:: @ 824895F
	.i18n 1755

BattleFrontier_BattleTowerMultiBattleRoom_Text_24896F:: @ 824896F
	.i18n 1756

BattleFrontier_BattleTowerMultiBattleRoom_Text_2489BD:: @ 82489BD
	.i18n 1757

BattleFrontier_BattleTowerMultiBattleRoom_Text_2489E7:: @ 82489E7
	.i18n 1758

BattleFrontier_BattleTowerMultiBattleRoom_Text_248A10:: @ 8248A10
	.i18n 1759

BattleFrontier_BattleTowerMultiBattleRoom_Text_248A40:: @ 8248A40
	.i18n 1760

BattleFrontier_BattleTowerMultiBattleRoom_Text_248A72:: @ 8248A72
	.i18n 1761

BattleFrontier_BattleTowerMultiBattleRoom_Text_248AC0:: @ 8248AC0
	.i18n 1762

BattleFrontier_BattleTowerMultiBattleRoom_Text_248AEB:: @ 8248AEB
	.i18n 1763

BattleFrontier_BattleTowerMultiBattleRoom_Text_248B22:: @ 8248B22
	.i18n 1764

BattleFrontier_BattleTowerMultiBattleRoom_Text_248B39:: @ 8248B39
	.i18n 1765

BattleFrontier_BattleTowerMultiBattleRoom_Text_248B4C:: @ 8248B4C
	.i18n 1766

BattleFrontier_BattleTowerMultiBattleRoom_Text_248BB4:: @ 8248BB4
	.i18n 1767

BattleFrontier_BattleTowerMultiBattleRoom_Text_248BEE:: @ 8248BEE
	.i18n 1768

BattleFrontier_BattleTowerMultiBattleRoom_Text_248C2E:: @ 8248C2E
	.i18n 1769

BattleFrontier_BattleTowerMultiBattleRoom_Text_248C5B:: @ 8248C5B
	.i18n 1770

BattleFrontier_BattleTowerMultiBattleRoom_Text_248C90:: @ 8248C90
	.i18n 1771

BattleFrontier_BattleTowerMultiBattleRoom_Text_248CCF:: @ 8248CCF
	.i18n 1772

BattleFrontier_BattleTowerMultiBattleRoom_Text_248D04:: @ 8248D04
	.i18n 1773

