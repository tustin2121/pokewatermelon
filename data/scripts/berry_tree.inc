BerryTreeScript:: @ 82742F9
	special EventObjectInteractionGetBerryTreeData
	switch VAR_0x8004
	case 255, BerryTree_EventScript_27434F
	case 0, BerryTree_EventScript_CheckSoil
	case 1, BerryTree_EventScript_CheckBerryStage1
	case 2, BerryTree_EventScript_CheckBerryStage2
	case 3, BerryTree_EventScript_CheckBerryStage3
	case 4, BerryTree_EventScript_CheckBerryStage4
	case 5, BerryTree_EventScript_CheckBerryFullyGrown
	end

BerryTree_EventScript_27434F:: @ 827434F
	lockall
	message BerryTree_Text_ExclamationPoint
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_CheckSoil:: @ 8274359
	lock
	faceplayer
	specialvar VAR_RESULT, PlayerHasBerries
	compare VAR_RESULT, 1
	goto_if_eq BerryTree_EventScript_WantToPlant
	message BerryTree_Text_ItsSoftLoamySoil
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_WantToPlant:: @ 8274374
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq BerryTree_EventScript_ChooseBerryToPlant
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_CancelPlanting
	end

BerryTree_EventScript_ChooseBerryToPlant:: @ 8274393
	fadescreen 1
	closemessage
	special Bag_ChooseBerry
	waitstate
	compare VAR_ITEM_ID, 0
	goto_if_eq BerryTree_EventScript_CancelPlanting
	takeitem VAR_ITEM_ID, 1
	call BerryTree_EventScript_PlantBerry

BerryTree_EventScript_CancelPlanting:: @ 82743AF
	release
	end

BerryTree_EventScript_CheckBerryStage1:: @ 82743B1
	lockall
	special EventObjectInteractionGetBerryCountString
	message BerryTree_Text_BerryGrowthStage1
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage2:: @ 82743C1
	lockall
	special EventObjectInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage2
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage3:: @ 82743D1
	lockall
	special EventObjectInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage3
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage4:: @ 82743E1
	call BerryTree_EventScript_GetCareAdverb
	lockall
	special EventObjectInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage4
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_GetCareAdverb:: @ 82743F6
	compare VAR_0x8005, 0
	goto_if_eq BerryTree_EventScript_SetAdverbPoor
	compare VAR_0x8005, 4
	goto_if_eq BerryTree_EventScript_SetAdverbGreat
	bufferstring 1, BerryTree_Text_CareAdverbGood
	return

BerryTree_EventScript_SetAdverbGreat:: @ 8274413
	bufferstring 1, BerryTree_Text_CareAdverbGreat
	return

BerryTree_EventScript_SetAdverbPoor:: @ 827441A
	bufferstring 1, BerryTree_Text_CareAdverbPoor
	return

BerryTree_EventScript_CheckBerryFullyGrown:: @ 8274421
	buffernumberstring 1, VAR_0x8006
	lock
	faceplayer
	special EventObjectInteractionGetBerryCountString
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq BerryTree_EventScript_PickBerry
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_CancelPickingBerry

BerryTree_EventScript_PickBerry:: @ 8274448
	special EventObjectInteractionPickBerryTree
	compare VAR_0x8004, 0
	goto_if_eq BerryTree_EventScript_BerryPocketFull
	special sub_80EED34
	special EventObjectInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry
	playfanfare MUS_ME_KINOMI
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_BerryPocketFull:: @ 8274470
	message BerryTree_Text_BerryPocketFull
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_CancelPickingBerry:: @ 8274479
	message BerryTree_Text_BerryLeftUnpicked
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_274482:: @ 8274482
	lockall
	special EventObjectInteractionGetBerryTreeData
	call BerryTree_EventScript_PlantBerry
	releaseall
	end

BerryTree_EventScript_WantToWater:: @ 827448D
	checkitem ITEM_WAILMER_PAIL, 1
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_DontWater
	special EventObjectInteractionGetBerryName
	msgbox BerryTree_Text_WantToWater, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq BerryTree_EventScript_WaterBerry
	compare VAR_RESULT, 0
	goto_if_eq BerryTree_EventScript_DontWater

BerryTree_EventScript_DontWater:: @ 82744BE
	releaseall
	end

BerryTree_EventScript_2744C0:: @ 82744C0
	special EventObjectInteractionGetBerryTreeData
	lockall

BerryTree_EventScript_WaterBerry:: @ 82744C4
	special EventObjectInteractionGetBerryName
	message BerryTree_Text_WateredTheBerry
	waitmessage
	special EventObjectInteractionWaterBerryTree
	special DoWateringBerryTreeAnim
	waitstate
	message BerryTree_Text_PlantIsDelighted
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_PlantBerry:: @ 82744DD
	special EventObjectInteractionPlantBerryTree
	incrementgamestat 3
	special sub_80EED10
	special EventObjectInteractionGetBerryCountString
	message BerryTree_Text_PlantedOneBerry
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_ItsSoftLoamySoil: @ 82744F0
	.i18n 5181

BerryTree_Text_WantToPlant: @ 8274507
	.i18n 5182

BerryTree_Text_PlantedOneBerry: @ 8274535
	.i18n 5183

BerryTree_Text_BerryGrowthStage1: @ 8274560
	.i18n 5184

BerryTree_Text_BerryGrowthStage2: @ 8274579
	.i18n 5185

BerryTree_Text_BerryGrowthStage3: @ 827458A
	.i18n 5186

BerryTree_Text_BerryGrowthStage4: @ 82745AB
	.i18n 5187

BerryTree_Text_CareAdverbGreat: @ 82745CD
	.i18n 5188

BerryTree_Text_CareAdverbPoor: @ 82745DE
	.i18n 5189

BerryTree_Text_CareAdverbGood: @ 82745E5
	.i18n 5190

BerryTree_Text_WantToPick: @ 82745EE
	.i18n 5191

BerryTree_Text_PickedTheBerry: @ 827461B
	.i18n 5192

BerryTree_Text_PutAwayBerry: @ 8274630
	.i18n 5193

BerryTree_Text_BerryPocketFull: @ 827468F
	.i18n 5194

BerryTree_Text_BerryLeftUnpicked: @ 82746CB
	.i18n 5195

BerryTree_Text_WantToWater: @ 82746E4
	.i18n 5196

BerryTree_Text_WateredTheBerry: @ 8274710
	.i18n 5197

BerryTree_Text_PlantIsDelighted: @ 8274723
	.i18n 5198

BerryTree_Text_ExclamationPoint: @ 8274744
	.i18n 5199
