MauvilleCity_PokemonCenter_1F_EventScript_28E066:: @ 828E066
	special ScrSpecial_GetCurrentMauvilleMan
	switch VAR_RESULT
	case 0, MauvilleCity_PokemonCenter_1F_EventScript_28E0A6
	case 1, MauvilleCity_PokemonCenter_1F_EventScript_28E167
	case 2, MauvilleCity_PokemonCenter_1F_EventScript_28E4D4
	case 3, MauvilleCity_PokemonCenter_1F_EventScript_29014A
	case 4, MauvilleCity_PokemonCenter_1F_EventScript_2902F6
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0A6:: @ 828E0A6
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_29038E, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E0C7
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E0EA
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0C7:: @ 828E0C7
	setvar VAR_0x8004, 0
	special ScrSpecial_PlayBardSong
	delay 60
	special ScrSpecial_HasBardSongBeenChanged
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E0F4
	msgbox MauvilleCity_PokemonCenter_1F_Text_2903E6, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0EA:: @ 828E0EA
	msgbox MauvilleCity_PokemonCenter_1F_Text_2903C0, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E0F4:: @ 828E0F4
	msgbox MauvilleCity_PokemonCenter_1F_Text_290421, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E113
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E15D
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E113:: @ 828E113
	setvar VAR_0x8004, EASY_CHAT_TYPE_BARD_SONG
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E15D
	msgbox MauvilleCity_PokemonCenter_1F_Text_2904C1, MSGBOX_DEFAULT
	setvar VAR_0x8004, 1
	special ScrSpecial_PlayBardSong
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_2904EB, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E113
	special ScrSpecial_SaveBardSongLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_290514, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E15D:: @ 828E15D
	msgbox MauvilleCity_PokemonCenter_1F_Text_29049B, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E167:: @ 828E167
	lock
	faceplayer
	setflag FLAG_SYS_HIPSTER_MEET
	msgbox MauvilleCity_PokemonCenter_1F_Text_29054C, MSGBOX_DEFAULT
	special ScrSpecial_GetHipsterSpokenFlag
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E18C
	msgbox MauvilleCity_PokemonCenter_1F_Text_290598, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E18C:: @ 828E18C
	special ScrSpecial_HipsterTeachWord
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E1A4
	msgbox MauvilleCity_PokemonCenter_1F_Text_290602, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E1A4:: @ 828E1A4
	msgbox MauvilleCity_PokemonCenter_1F_Text_290666, MSGBOX_DEFAULT
	special ScrSpecial_SetHipsterSpokenFlag
	release
	end

MauvilleCity_PokemonCenter_1F_Text_28E1B1: @ 828E1B1
	.i18n 5417

MauvilleCity_PokemonCenter_1F_Text_28E1E8: @ 828E1E8
	.i18n 5418

MauvilleCity_PokemonCenter_1F_Text_28E20E: @ 828E20E
	.i18n 5419

MauvilleCity_PokemonCenter_1F_Text_28E23F: @ 828E23F
	.i18n 5420

MauvilleCity_PokemonCenter_1F_Text_28E27F: @ 828E27F
	.i18n 5421

MauvilleCity_PokemonCenter_1F_Text_28E2A9: @ 828E2A9
	.i18n 5422

MauvilleCity_PokemonCenter_1F_Text_28E2E3: @ 828E2E3
	.i18n 5423

MauvilleCity_PokemonCenter_1F_Text_28E323: @ 828E323
	.i18n 5424

MauvilleCity_PokemonCenter_1F_Text_28E356: @ 828E356
	.i18n 5425

MauvilleCity_PokemonCenter_1F_Text_28E380: @ 828E380
	.i18n 5426

MauvilleCity_PokemonCenter_1F_Text_28E3C4: @ 828E3C4
	.i18n 5427

MauvilleCity_PokemonCenter_1F_Text_28E3EC: @ 828E3EC
	.i18n 5428

MauvilleCity_PokemonCenter_1F_Text_28E424: @ 828E424
	.i18n 5429

MauvilleCity_PokemonCenter_1F_Text_28E45A: @ 828E45A
	.i18n 5430

MauvilleCity_PokemonCenter_1F_EventScript_28E4D4:: @ 828E4D4
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E1B1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E503
	special ScrSpecial_GetTraderTradedFlag
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E50D
	message MauvilleCity_PokemonCenter_1F_Text_28E23F
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E517
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E503:: @ 828E503
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E1E8, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E50D:: @ 828E50D
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E20E, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E517:: @ 828E517
	special ScrSpecial_TraderMenuGetDecoration
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E558
	compare VAR_0x8004, 65535
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E562
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E2A9, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E56E
	special ScrSpecial_DoesPlayerHaveNoDecorations
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E57A
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E584
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E558:: @ 828E558
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E27F, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E562:: @ 828E562
	message MauvilleCity_PokemonCenter_1F_Text_28E45A
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E517
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E56E:: @ 828E56E
	message MauvilleCity_PokemonCenter_1F_Text_28E23F
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E517
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E57A:: @ 828E57A
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E2E3, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E584:: @ 828E584
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E323, MSGBOX_DEFAULT
	special ScrSpecial_TraderMenuGiveDecoration
	waitstate
	compare VAR_0x8006, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E5D4
	compare VAR_0x8006, 65535
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E5DE
	special ScrSpecial_IsDecorationFull
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E5EC
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E3C4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_28E584
	special ScrSpecial_TraderDoDecorationTrade
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E424, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E5D4:: @ 828E5D4
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E356, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E5DE:: @ 828E5DE
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E3EC, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_28E584
	end

MauvilleCity_PokemonCenter_1F_EventScript_28E5EC:: @ 828E5EC
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E380, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_28E5F6: @ 828E5F6
	.i18n 5431

MauvilleCity_PokemonCenter_1F_Text_28E64D: @ 828E64D
	.i18n 5432

MauvilleCity_PokemonCenter_1F_Text_28E673: @ 828E673
	.i18n 5433

MauvilleCity_PokemonCenter_1F_Text_28E6AE: @ 828E6AE
	.i18n 5434

MauvilleCity_PokemonCenter_1F_Text_28E726: @ 828E726
	.i18n 5435

MauvilleCity_PokemonCenter_1F_Text_28E78A: @ 828E78A
	.i18n 5436

MauvilleCity_PokemonCenter_1F_Text_28E7EE: @ 828E7EE
	.i18n 5437

MauvilleCity_PokemonCenter_1F_Text_28E844: @ 828E844
	.i18n 5438

MauvilleCity_PokemonCenter_1F_Text_28E881: @ 828E881
	.i18n 5439

MauvilleCity_PokemonCenter_1F_Text_28E8D9: @ 828E8D9
	.i18n 5440

MauvilleCity_PokemonCenter_1F_Text_28E930:: @ 828E930
	.i18n 5441

MauvilleCity_PokemonCenter_1F_Text_28E947:: @ 828E947
	.i18n 5442

MauvilleCity_PokemonCenter_1F_Text_28E956:: @ 828E956
	.i18n 5443

MauvilleCity_PokemonCenter_1F_Text_28E9D7:: @ 828E9D7
	.i18n 5444

MauvilleCity_PokemonCenter_1F_Text_28E9EF:: @ 828E9EF
	.i18n 5445

MauvilleCity_PokemonCenter_1F_Text_28E9FE:: @ 828E9FE
	.i18n 5446

MauvilleCity_PokemonCenter_1F_Text_28EA7D:: @ 828EA7D
    .i18n 5447

MauvilleCity_PokemonCenter_1F_Text_28EA98:: @ 828EA98
	.i18n 5448

MauvilleCity_PokemonCenter_1F_Text_28EAA8:: @ 828EAA8
	.i18n 5449

MauvilleCity_PokemonCenter_1F_Text_28EB19:: @ 828EB19
	.i18n 5450

MauvilleCity_PokemonCenter_1F_Text_28EB31:: @ 828EB31
	.i18n 5451

MauvilleCity_PokemonCenter_1F_Text_28EB3E:: @ 828EB3E
	.i18n 5452

MauvilleCity_PokemonCenter_1F_Text_28EBB5:: @ 828EBB5
	.i18n 5453

MauvilleCity_PokemonCenter_1F_Text_28EBCD:: @ 828EBCD
	.i18n 5454

MauvilleCity_PokemonCenter_1F_Text_28EBDD:: @ 828EBDD
	.i18n 5455

MauvilleCity_PokemonCenter_1F_Text_28EC60:: @ 828EC60
	.i18n 5456

MauvilleCity_PokemonCenter_1F_Text_28EC79:: @ 828EC79
	.i18n 5457

MauvilleCity_PokemonCenter_1F_Text_28EC81:: @ 828EC81
	.i18n 5458

MauvilleCity_PokemonCenter_1F_Text_28ED04:: @ 828ED04
	.i18n 5459

MauvilleCity_PokemonCenter_1F_Text_28ED21:: @ 828ED21
	.i18n 5460

MauvilleCity_PokemonCenter_1F_Text_28ED30:: @ 828ED30
	.i18n 5461

MauvilleCity_PokemonCenter_1F_Text_28EDA1:: @ 828EDA1
	.i18n 5462

MauvilleCity_PokemonCenter_1F_Text_28EDB5:: @ 828EDB5
	.i18n 5463

MauvilleCity_PokemonCenter_1F_Text_28EDCF:: @ 828EDCF
	.i18n 5464

MauvilleCity_PokemonCenter_1F_Text_28EE45:: @ 828EE45
	.i18n 5465

MauvilleCity_PokemonCenter_1F_Text_28EE5D:: @ 828EE5D
	.i18n 5466

MauvilleCity_PokemonCenter_1F_Text_28EE6A:: @ 828EE6A
	.i18n 5467

MauvilleCity_PokemonCenter_1F_Text_28EEDD:: @ 828EEDD
	.i18n 5468

MauvilleCity_PokemonCenter_1F_Text_28EEF1:: @ 828EEF1
	.i18n 5469

MauvilleCity_PokemonCenter_1F_Text_28EF01:: @ 828EF01
	.i18n 5470

MauvilleCity_PokemonCenter_1F_Text_28EF73:: @ 828EF73
	.i18n 5471

MauvilleCity_PokemonCenter_1F_Text_28EF95:: @ 828EF95
	.i18n 5472

MauvilleCity_PokemonCenter_1F_Text_28EFAA:: @ 828EFAA
	.i18n 5473

MauvilleCity_PokemonCenter_1F_Text_28F045:: @ 828F045
	.i18n 5474

MauvilleCity_PokemonCenter_1F_Text_28F05A:: @ 828F05A
	.i18n 5475

MauvilleCity_PokemonCenter_1F_Text_28F071:: @ 828F071
	.i18n 5476

MauvilleCity_PokemonCenter_1F_Text_28F0F3:: @ 828F0F3
	.i18n 5477

MauvilleCity_PokemonCenter_1F_Text_28F10D:: @ 828F10D
	.i18n 5478

MauvilleCity_PokemonCenter_1F_Text_28F125:: @ 828F125
	.i18n 5479

MauvilleCity_PokemonCenter_1F_Text_28F1BE:: @ 828F1BE
	.i18n 5480

MauvilleCity_PokemonCenter_1F_Text_28F1D5:: @ 828F1D5
	.i18n 5481

MauvilleCity_PokemonCenter_1F_Text_28F1DE:: @ 828F1DE
	.i18n 5482

MauvilleCity_PokemonCenter_1F_Text_28F24F:: @ 828F24F
	.i18n 5483

MauvilleCity_PokemonCenter_1F_Text_28F269:: @ 828F269
	.i18n 5484

MauvilleCity_PokemonCenter_1F_Text_28F277:: @ 828F277
	.i18n 5485

MauvilleCity_PokemonCenter_1F_Text_28F2FC:: @ 828F2FC
	.i18n 5486

MauvilleCity_PokemonCenter_1F_Text_28F314:: @ 828F314
	.i18n 5487

MauvilleCity_PokemonCenter_1F_Text_28F32A:: @ 828F32A
	.i18n 5488

MauvilleCity_PokemonCenter_1F_Text_28F3AD:: @ 828F3AD
	.i18n 5489

MauvilleCity_PokemonCenter_1F_Text_28F3C6:: @ 828F3C6
	.i18n 5490

MauvilleCity_PokemonCenter_1F_Text_28F3D2:: @ 828F3D2
	.i18n 5491

MauvilleCity_PokemonCenter_1F_Text_28F44B:: @ 828F44B
	.i18n 5492

MauvilleCity_PokemonCenter_1F_Text_28F461:: @ 828F461
	.i18n 5493

MauvilleCity_PokemonCenter_1F_Text_28F47C:: @ 828F47C
	.i18n 5494

MauvilleCity_PokemonCenter_1F_Text_28F50C:: @ 828F50C
	.i18n 5495

MauvilleCity_PokemonCenter_1F_Text_28F51B:: @ 828F51B
	.i18n 5496

MauvilleCity_PokemonCenter_1F_Text_28F538:: @ 828F538
	.i18n 5497

MauvilleCity_PokemonCenter_1F_Text_28F5BE:: @ 828F5BE
	.i18n 5498

MauvilleCity_PokemonCenter_1F_Text_28F5D1:: @ 828F5D1
	.i18n 5499

MauvilleCity_PokemonCenter_1F_Text_28F5F2:: @ 828F5F2
	.i18n 5500

MauvilleCity_PokemonCenter_1F_Text_28F678:: @ 828F678
	.i18n 5501

MauvilleCity_PokemonCenter_1F_Text_28F694:: @ 828F694
	.i18n 5502

MauvilleCity_PokemonCenter_1F_Text_28F6B4:: @ 828F6B4
	.i18n 5503

MauvilleCity_PokemonCenter_1F_Text_28F751:: @ 828F751
	.i18n 5504

MauvilleCity_PokemonCenter_1F_Text_28F76A:: @ 828F76A
	.i18n 5505

MauvilleCity_PokemonCenter_1F_Text_28F776:: @ 828F776
	.i18n 5506

MauvilleCity_PokemonCenter_1F_Text_28F7F6:: @ 828F7F6
	.i18n 5507

MauvilleCity_PokemonCenter_1F_Text_28F811:: @ 828F811
	.i18n 5508

MauvilleCity_PokemonCenter_1F_Text_28F822:: @ 828F822
	.i18n 5509

MauvilleCity_PokemonCenter_1F_Text_28F89C:: @ 828F89C
	.i18n 5510

MauvilleCity_PokemonCenter_1F_Text_28F8AF:: @ 828F8AF
	.i18n 5511

MauvilleCity_PokemonCenter_1F_Text_28F8BC:: @ 828F8BC
	.i18n 5512

MauvilleCity_PokemonCenter_1F_Text_28F92F:: @ 828F92F
	.i18n 5513

MauvilleCity_PokemonCenter_1F_Text_28F941:: @ 828F941
	.i18n 5514

MauvilleCity_PokemonCenter_1F_Text_28F949:: @ 828F949
	.i18n 5515

MauvilleCity_PokemonCenter_1F_Text_28F9D1:: @ 828F9D1
	.i18n 5516

MauvilleCity_PokemonCenter_1F_Text_28F9EA:: @ 828F9EA
	.i18n 5517

MauvilleCity_PokemonCenter_1F_Text_28F9FD:: @ 828F9FD
	.i18n 5518

MauvilleCity_PokemonCenter_1F_Text_28FA81:: @ 828FA81
	.i18n 5519

MauvilleCity_PokemonCenter_1F_Text_28FA99:: @ 828FA99
	.i18n 5520

MauvilleCity_PokemonCenter_1F_Text_28FAA7:: @ 828FAA7
	.i18n 5521

MauvilleCity_PokemonCenter_1F_Text_28FB1D:: @ 828FB1D
	.i18n 5522

MauvilleCity_PokemonCenter_1F_Text_28FB35:: @ 828FB35
	.i18n 5523

MauvilleCity_PokemonCenter_1F_Text_28FB47:: @ 828FB47
	.i18n 5524

MauvilleCity_PokemonCenter_1F_Text_28FBC4:: @ 828FBC4
	.i18n 5525

MauvilleCity_PokemonCenter_1F_Text_28FBD9:: @ 828FBD9
	.i18n 5526

MauvilleCity_PokemonCenter_1F_Text_28FBEA:: @ 828FBEA
	.i18n 5527

MauvilleCity_PokemonCenter_1F_Text_28FC6B:: @ 828FC6B
	.i18n 5528

MauvilleCity_PokemonCenter_1F_Text_28FC85:: @ 828FC85
	.i18n 5529

MauvilleCity_PokemonCenter_1F_Text_28FC98:: @ 828FC98
	.i18n 5530

MauvilleCity_PokemonCenter_1F_Text_28FD1D:: @ 828FD1D
	.i18n 5531

MauvilleCity_PokemonCenter_1F_Text_28FD35:: @ 828FD35
	.i18n 5532

MauvilleCity_PokemonCenter_1F_Text_28FD40:: @ 828FD40
	.i18n 5533

MauvilleCity_PokemonCenter_1F_Text_28FDA2:: @ 828FDA2
	.i18n 5534

MauvilleCity_PokemonCenter_1F_Text_28FDBD:: @ 828FDBD
	.i18n 5535

MauvilleCity_PokemonCenter_1F_Text_28FDCE:: @ 828FDCE
	.i18n 5536

MauvilleCity_PokemonCenter_1F_Text_28FE57:: @ 828FE57
	.i18n 5537

MauvilleCity_PokemonCenter_1F_Text_28FE72:: @ 828FE72
	.i18n 5538

MauvilleCity_PokemonCenter_1F_Text_28FE88:: @ 828FE88
	.i18n 5539

MauvilleCity_PokemonCenter_1F_Text_28FF0C:: @ 828FF0C
	.i18n 5540

MauvilleCity_PokemonCenter_1F_Text_28FF27:: @ 828FF27
	.i18n 5541

MauvilleCity_PokemonCenter_1F_Text_28FF44:: @ 828FF44
	.i18n 5542

MauvilleCity_PokemonCenter_1F_Text_28FFDD:: @ 828FFDD
	.i18n 5543

MauvilleCity_PokemonCenter_1F_Text_28FFFA:: @ 828FFFA
	.i18n 5544

MauvilleCity_PokemonCenter_1F_Text_29000D:: @ 829000D
	.i18n 5545

MauvilleCity_PokemonCenter_1F_Text_290097:: @ 8290097
	.i18n 5546

MauvilleCity_PokemonCenter_1F_Text_2900B5:: @ 82900B5
	.i18n 5547

MauvilleCity_PokemonCenter_1F_Text_2900CB:: @ 82900CB
	.i18n 5548


MauvilleCity_PokemonCenter_1F_EventScript_29014A:: @ 829014A
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E5F6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290219
	specialvar VAR_RESULT, ScrSpecial_StorytellerGetFreeStorySlot
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_2901DA
	message MauvilleCity_PokemonCenter_1F_Text_28E673
	waitmessage
	special ScrSpecial_StorytellerStoryListMenu
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_2901B7
	setvar VAR_0x8008, 1
	special ScrSpecial_StorytellerDisplayStory
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, ScrSpecial_StorytellerUpdateStat
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_2901BD
	goto MauvilleCity_PokemonCenter_1F_EventScript_29020F

MauvilleCity_PokemonCenter_1F_EventScript_2901B7:: @ 82901B7
	goto MauvilleCity_PokemonCenter_1F_EventScript_290219
	end

MauvilleCity_PokemonCenter_1F_EventScript_2901BD:: @ 82901BD
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E78A, MSGBOX_DEFAULT
	specialvar VAR_RESULT, ScrSpecial_HasStorytellerAlreadyRecorded
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_29022D
	goto MauvilleCity_PokemonCenter_1F_EventScript_2901E2

MauvilleCity_PokemonCenter_1F_EventScript_2901DA:: @ 82901DA
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E6AE, MSGBOX_DEFAULT

MauvilleCity_PokemonCenter_1F_EventScript_2901E2:: @ 82901E2
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E7EE, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290219
	specialvar VAR_RESULT, ScrSpecial_StorytellerInitializeRandomStat
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_29020F
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E881, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_29020F:: @ 829020F
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E726, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_290219:: @ 8290219
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E64D, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_290223:: @ 8290223
	msgbox MauvilleCity_PokemonCenter_1F_Text_28E8D9, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_29022D:: @ 829022D
	release
	end

MauvilleCity_PokemonCenter_1F_Text_29022F: @ 829022F
	.i18n 5549

MauvilleCity_PokemonCenter_1F_Text_290281: @ 8290281
	.i18n 5550

MauvilleCity_PokemonCenter_1F_Text_2902A7: @ 82902A7
	.i18n 5551

MauvilleCity_PokemonCenter_1F_Text_2902BD: @ 82902BD
	.i18n 5552

MauvilleCity_PokemonCenter_1F_EventScript_2902F6:: @ 82902F6
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_29022F, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290317
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_29037A
	end

MauvilleCity_PokemonCenter_1F_EventScript_290317:: @ 8290317
	special ScrSpecial_GiddyShouldTellAnotherTale
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290359
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290384
	end

MauvilleCity_PokemonCenter_1F_EventScript_290331:: @ 8290331
	special ScrSpecial_GiddyShouldTellAnotherTale
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_29034B
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290384
	end

MauvilleCity_PokemonCenter_1F_EventScript_29034B:: @ 829034B
	msgbox MauvilleCity_PokemonCenter_1F_Text_2902A7, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_290359
	end

MauvilleCity_PokemonCenter_1F_EventScript_290359:: @ 8290359
	special ScrSpecial_GenerateGiddyLine
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290331
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_PokemonCenter_1F_EventScript_290331
	end

MauvilleCity_PokemonCenter_1F_EventScript_29037A:: @ 829037A
	msgbox MauvilleCity_PokemonCenter_1F_Text_290281, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_290384:: @ 8290384
	msgbox MauvilleCity_PokemonCenter_1F_Text_2902BD, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_29038E: @ 829038E
	.i18n 5553

MauvilleCity_PokemonCenter_1F_Text_2903C0: @ 82903C0
	.i18n 5554

MauvilleCity_PokemonCenter_1F_Text_2903E6: @ 82903E6
	.i18n 5555

MauvilleCity_PokemonCenter_1F_Text_290421: @ 8290421
	.i18n 5556

MauvilleCity_PokemonCenter_1F_Text_29049B: @ 829049B
	.i18n 5557

MauvilleCity_PokemonCenter_1F_Text_2904C1: @ 82904C1
	.i18n 5558

MauvilleCity_PokemonCenter_1F_Text_2904EB: @ 82904EB
	.i18n 5559

MauvilleCity_PokemonCenter_1F_Text_290514: @ 8290514
	.i18n 5560

MauvilleCity_PokemonCenter_1F_Text_29054C: @ 829054C
	.i18n 5561

MauvilleCity_PokemonCenter_1F_Text_290598: @ 8290598
	.i18n 5562

MauvilleCity_PokemonCenter_1F_Text_290602: @ 8290602
	.i18n 5563

MauvilleCity_PokemonCenter_1F_Text_290666: @ 8290666
	.i18n 5564
