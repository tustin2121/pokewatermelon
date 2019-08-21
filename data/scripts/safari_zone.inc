EventScript_2A4B4C:: @ 82A4B4C
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 255, 2, 5
	end

EventScript_2A4B5D:: @ 82A4B5D
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 255, 2, 5
	waitstate
	end

EventScript_2A4B6F:: @ 82A4B6F
	lockall
	msgbox Text_2A4BF4, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_2A4B85
	releaseall
	end

EventScript_2A4B85:: @ 82A4B85
	goto EventScript_2A4B5D

EventScript_2A4B8A:: @ 82A4B8A
	lockall
	playse SE_PINPON
	message Text_2A4C26
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_2A4B5D

EventScript_2A4B9B:: @ 82A4B9B
	lockall
	playse SE_PINPON
	message Text_2A4C56
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_2A4B5D

EventScript_PokeBlockFeeder:: @ 82A4BAC
	lockall
	special GetPokeblockFeederInFront
	compare VAR_RESULT, 65535
	goto_if_ne EventScript_2A4BEB
	msgbox Text_2A4C90, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_2A4BD0
	releaseall
	end

EventScript_2A4BD0:: @ 82A4BD0
	fadescreen 1
	special OpenPokeblockCaseOnFeeder
	waitstate
	compare VAR_RESULT, 65535
	goto_if_ne EventScript_2A4BE2
	end

EventScript_2A4BE2:: @ 82A4BE2
	message Text_2A4CEB
	waitmessage
	waitbuttonpress
	releaseall
	end

EventScript_2A4BEB:: @ 82A4BEB
	message Text_2A4CC5
	waitmessage
	waitbuttonpress
	releaseall
	end

Text_2A4BF4: @ 82A4BF4
	.i18n 5624

Text_2A4C26: @ 82A4C26
	.i18n 5625

Text_2A4C56: @ 82A4C56
	.i18n 5626

Text_2A4C90: @ 82A4C90
	.i18n 5627

Text_2A4CC5: @ 82A4CC5
	.i18n 5628

Text_2A4CEB: @ 82A4CEB
	.i18n 5629

Route121_SafariZoneEntrance_Text_2A4D12: @ 82A4D12
	.i18n 5630

Route121_SafariZoneEntrance_Text_2A4E46: @ 82A4E46
	.i18n 5631

Route121_SafariZoneEntrance_Text_2A4E7E: @ 82A4E7E
	.i18n 5632

Route121_SafariZoneEntrance_Text_2A4EA1: @ 82A4EA1
	.i18n 5633

Route121_SafariZoneEntrance_Text_2A4F74: @ 82A4F74
	.i18n 5634

Route121_SafariZoneEntrance_Text_2A4FD7: @ 82A4FD7
	.i18n 5635

Route121_SafariZoneEntrance_Text_2A4FF7: @ 82A4FF7
	.i18n 5636

Route121_SafariZoneEntrance_Text_2A501B: @ 82A501B
	.i18n 5637

Route121_SafariZoneEntrance_Text_2A5036: @ 82A5036
	.i18n 5638

Route121_SafariZoneEntrance_Text_2A5052: @ 82A5052
	.i18n 5639

Route121_SafariZoneEntrance_Text_2A506F: @ 82A506F
	.i18n 5640

Route121_SafariZoneEntrance_Text_2A50E5: @ 82A50E5
	.i18n 5641

Route121_SafariZoneEntrance_Text_2A5105: @ 82A5105
	.i18n 5642

SafariZone_South_Text_2A51D4: @ 82A51D4
	.i18n 5643

SafariZone_South_Text_2A521A: @ 82A521A
	.i18n 5644

SafariZone_South_Text_2A5248: @ 82A5248
	.i18n 5645

SafariZone_South_Text_2A52AB: @ 82A52AB
	.i18n 5646

SafariZone_South_Text_2A52EF: @ 82A52EF
	.i18n 5647

SafariZone_South_Text_2A533B: @ 82A533B
	.i18n 5648

SafariZone_Southwest_Text_2A53B7: @ 82A53B7
	.i18n 5649

SafariZone_Northwest_Text_2A542C: @ 82A542C
	.i18n 5650

SafariZone_North_Text_2A5489: @ 82A5489
	.i18n 5651

SafariZone_North_Text_2A54F0: @ 82A54F0
	.i18n 5652

SafariZone_South_Text_2A553E: @ 82A553E
	.i18n 5653

Route121_SafariZoneEntrance_Text_2A55BB: @ 82A55BB
	.i18n 5654

SafariZone_Southwest_Text_2A5613: @ 82A5613
	.i18n 5655

SafariZone_RestHouse_Text_2A5639: @ 82A5639
	.i18n 5656

SafariZone_RestHouse_Text_2A56E1: @ 82A56E1
	.i18n 5657

SafariZone_RestHouse_Text_2A5764: @ 82A5764
	.i18n 5658

SafariZone_South_Text_2A57EE: @ 82A57EE
	.i18n 5659

SafariZone_Southeast_Text_2A582D: @ 82A582D
	.i18n 5660

SafariZone_South_Text_2A5887: @ 82A5887
	.i18n 5661

SafariZone_Southeast_Text_2A58C6: @ 82A58C6
	.i18n 5662

SafariZone_Southeast_Text_2A58FD: @ 82A58FD
	.i18n 5663

SafariZone_Southeast_Text_2A5960: @ 82A5960
	.i18n 5664

SafariZone_Northeast_Text_2A59A4: @ 82A59A4
	.i18n 5665

SafariZone_Northeast_Text_2A5A09: @ 82A5A09
	.i18n 5666

SafariZone_Northeast_Text_2A5A44: @ 82A5A44
	.i18n 5667
