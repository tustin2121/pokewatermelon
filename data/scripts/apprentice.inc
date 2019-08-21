#include "constants/apprentice.h"

.macro apprentice_msg waitbuttonpress which
setvar VAR_0x8004, 8
setvar VAR_0x8005, \waitbuttonpress
setvar VAR_0x8006, \which
special CallApprenticeFunction
waitstate
.endm

.macro apprentice_buff whichstringvar tobuff
setvar VAR_0x8004, 16
setvar VAR_0x8005, \whichstringvar
setvar VAR_0x8006, \tobuff
special CallApprenticeFunction
.endm

.macro apprentice_menu which
setvar VAR_0x8004, 7
setvar VAR_0x8005, \which
special CallApprenticeFunction
waitstate
.endm

EventScript_Apprentice:: @ 82B688D
	lock
	faceplayer
	setvar VAR_0x8004, 0
	special CallApprenticeFunction
	compare VAR_RESULT, 0
	goto_if_eq Script_Apprentice_FirstMeeting
	setvar VAR_0x8004, 10
	special CallApprenticeFunction
	compare VAR_0x8004, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B68BE
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, Script_Apprentice_ReleaseAndEnd

BattleFrontier_BattleTowerLobby_EventScript_2B68BE:
	setvar VAR_0x8004, 11
	special CallApprenticeFunction
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B69D3
	compare VAR_RESULT, 4
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6ACF
	compare VAR_RESULT, 3
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6C77
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6D5C
	compare VAR_RESULT, 5
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6DD4
	release
	releaseall
	end

Script_Apprentice_FirstMeeting:
	apprentice_buff 0, APPRENTICE_BUFF_NAME
	apprentice_msg FALSE, 0

Script_Apprentice_FirstMeetingNag:
	apprentice_menu APPRENTICE_ASK_YES_NO
	compare VAR_RESULT, 1
	goto_if_eq Script_Apprentice_FirstMeetingAskAgain
	apprentice_msg FALSE, 2
	apprentice_menu APPRENTICE_ASK_WHICH_LEVEL
	setvar VAR_0x8004, 1
	setorcopyvar VAR_0x8005, VAR_RESULT
	addvar VAR_0x8005, 1
	special CallApprenticeFunction
	setvar VAR_0x8004, 3
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_LEVEL
	apprentice_msg TRUE, 3
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

Script_Apprentice_FirstMeetingAskAgain:
	apprentice_msg FALSE, 1
	goto Script_Apprentice_FirstMeetingNag

BattleFrontier_BattleTowerLobby_EventScript_2B69D3:
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 2
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_SPECIES1
	apprentice_buff 1, APPRENTICE_BUFF_SPECIES2
	apprentice_msg FALSE, 6
	apprentice_menu APPRENTICE_ASK_2SPECIES
	copyvar VAR_0x8005, VAR_RESULT
	compare VAR_0x8005, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6ABA
	compare VAR_0x8005, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6AC0
	setvar VAR_0x8004, 12
	special CallApprenticeFunction
	copyvar VAR_0x8006, VAR_RESULT
	setvar VAR_0x8004, 13
	special CallApprenticeFunction
	setvar VAR_0x8004, 5
	special CallApprenticeFunction
	setvar VAR_0x8004, 12
	special CallApprenticeFunction
	compare VAR_RESULT, 3
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6AC6
	setvar VAR_0x8004, 16
	setvar VAR_0x8005, 0
	copyvar VAR_0x8006, VAR_0x8007
	special CallApprenticeFunction
	setvar VAR_0x8004, 15
	special CallApprenticeFunction
	apprentice_msg TRUE, 7
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

BattleFrontier_BattleTowerLobby_EventScript_2B6ABA:
	setvar VAR_0x8007, 0
	return

BattleFrontier_BattleTowerLobby_EventScript_2B6AC0:
	setvar VAR_0x8007, 1
	return

BattleFrontier_BattleTowerLobby_EventScript_2B6AC6:
	setvar VAR_0x8004, 4
	special CallApprenticeFunction
	return

BattleFrontier_BattleTowerLobby_EventScript_2B6ACF:
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 4
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_SPECIES3
	apprentice_msg TRUE, 10
	setvar VAR_0x8004, 15
	special CallApprenticeFunction

BattleFrontier_BattleTowerLobby_EventScript_2B6B09:
	fadescreen 1
	setvar VAR_RESULT, 0
	setvar VAR_0x8004, 19
	special CallApprenticeFunction
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6B81
	setvar VAR_0x8004, 20
	special CallApprenticeFunction
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6C0C
	apprentice_buff 0, APPRENTICE_BUFF_ITEM
	apprentice_msg TRUE, 12
	setvar VAR_0x8004, 5
	special CallApprenticeFunction
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

BattleFrontier_BattleTowerLobby_EventScript_2B6B81:
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 4
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_SPECIES3
	apprentice_msg FALSE, 13
	apprentice_menu APPRENTICE_ASK_GIVE
	setvar VAR_0x8004, 15
	special CallApprenticeFunction
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6B09

BattleFrontier_BattleTowerLobby_EventScript_2B6BD4:
	apprentice_msg TRUE, 14
	setvar VAR_0x8004, 5
	special CallApprenticeFunction
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

BattleFrontier_BattleTowerLobby_EventScript_2B6C0C:
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 4
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_ITEM
	apprentice_buff 1, APPRENTICE_BUFF_SPECIES3
	apprentice_msg FALSE, 16
	apprentice_menu APPRENTICE_ASK_GIVE
	setvar VAR_0x8004, 15
	special CallApprenticeFunction
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6B09
	goto BattleFrontier_BattleTowerLobby_EventScript_2B6BD4
	end

BattleFrontier_BattleTowerLobby_EventScript_2B6C77:
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 3
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_SPECIES3
	apprentice_buff 1, APPRENTICE_BUFF_MOVE1
	apprentice_buff 2, APPRENTICE_BUFF_MOVE2
	apprentice_msg FALSE, 8
	apprentice_menu APPRENTICE_ASK_MOVES
	copyvar VAR_0x8005, VAR_RESULT
	compare VAR_0x8005, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6D50
	compare VAR_0x8005, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_2B6D56
	setvar VAR_0x8004, 17
	special CallApprenticeFunction
	setvar VAR_0x8004, 5
	special CallApprenticeFunction
	setvar VAR_0x8004, 16
	setvar VAR_0x8005, 0
	copyvar VAR_0x8006, VAR_0x8007
	special CallApprenticeFunction
	setvar VAR_0x8004, 15
	special CallApprenticeFunction
	apprentice_msg TRUE, 9
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

BattleFrontier_BattleTowerLobby_EventScript_2B6D50:
	setvar VAR_0x8007, 3
	return

BattleFrontier_BattleTowerLobby_EventScript_2B6D56:
	setvar VAR_0x8007, 4
	return

BattleFrontier_BattleTowerLobby_EventScript_2B6D5C:
	apprentice_msg FALSE, 4
	apprentice_menu APPRENTICE_ASK_3SPECIES
	copyvar VAR_0x8005, VAR_RESULT
	setvar VAR_0x8004, 18
	special CallApprenticeFunction
	setvar VAR_0x8004, 5
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_SPECIES4
	apprentice_msg TRUE, 5
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

BattleFrontier_BattleTowerLobby_EventScript_2B6DD4:
	apprentice_msg TRUE, 11
	setvar VAR_0x8004, 25
	special CallApprenticeFunction
	setvar VAR_0x8004, EASY_CHAT_TYPE_APPRENTICE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	setvar VAR_0x8004, 21
	special CallApprenticeFunction
	apprentice_buff 0, APPRENTICE_BUFF_EASY_CHAT
	apprentice_msg TRUE, 15
	setvar VAR_0x8004, 9
	special CallApprenticeFunction
	call Script_Apprentice_SetLeavingFlags
	release
	releaseall
	switch VAR_FACING
	case 2, Script_Apprentice_LeaveGoRight
	goto Script_Apprentice_Leave
	end

Script_Apprentice_SetLeavingFlags:
	setflag FLAG_HIDE_APPRENTICE
	setflag FLAG_DAILY_APPRENTICE_LEAVES
	return

Script_Apprentice_LeaveGoRight:
	setvar VAR_0x8004, 24
	special CallApprenticeFunction
	compare VAR_0x8004, 0
	goto_if_eq Script_Apprentice_End
	applymovement 6, BattleFrontier_BattleTowerLobby_Movement_2B6E94
	waitmovement 0
	end

Script_Apprentice_Leave:
	setvar VAR_0x8004, 24
	special CallApprenticeFunction
	compare VAR_0x8004, 0
	goto_if_eq Script_Apprentice_End
	applymovement 6, BattleFrontier_BattleTowerLobby_Movement_2B6E95
	waitmovement 0
	end

Script_Apprentice_ReleaseAndEnd:
	release
	releaseall
	end

Script_Apprentice_End:
	end

BattleFrontier_BattleTowerLobby_Movement_2B6E94: @ 82B6E94
	walk_fast_right

BattleFrontier_BattleTowerLobby_Movement_2B6E95: @ 82B6E95
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	set_invisible
	slide_down
	slide_down
	slide_down
	step_end

gText_082B6EA5:: @ 82B6EA5
	.i18n 4893

gText_082B6EEC:: @ 82B6EEC
	.i18n 4894

gText_082B6F16:: @ 82B6F16
	.i18n 4895

gText_082B6F4C:: @ 82B6F4C
	.i18n 4896

gText_082B6F92:: @ 82B6F92
	.i18n 4897

gText_082B6FC9:: @ 82B6FC9
	.i18n 4898

gText_082B700C:: @ 82B700C
	.i18n 4899

gText_082B703A:: @ 82B703A
	.i18n 4900

gText_082B706A:: @ 82B706A
	.i18n 4901

gText_082B709C:: @ 82B709C
	.i18n 4902

gText_082B70CC:: @ 82B70CC
	.i18n 4903

gText_082B710A:: @ 82B710A
	.i18n 4904

gText_082B714D:: @ 82B714D
	.i18n 4905

gText_082B7185:: @ 82B7185
	.i18n 4906

gText_082B71C1:: @ 82B71C1
	.i18n 4907

gText_082B71F9:: @ 82B71F9
	.i18n 4908

gText_082B7229:: @ 82B7229
	.i18n 4909

gText_082B731C:: @ 82B731C
	.i18n 4910

gText_082B735B:: @ 82B735B
	.i18n 4911

gText_082B7423:: @ 82B7423
	.i18n 4912

gText_082B74C1:: @ 82B74C1
	.i18n 4913

gText_082B756F:: @ 82B756F
	.i18n 4914

gText_082B75B2:: @ 82B75B2
	.i18n 4915

gText_082B763F:: @ 82B763F
	.i18n 4916

gText_082B76AC:: @ 82B76AC
	.i18n 4917

gText_082B7772:: @ 82B7772
	.i18n 4918

gText_082B77CE:: @ 82B77CE
	.i18n 4919

gText_082B7871:: @ 82B7871
	.i18n 4920

gText_082B78D4:: @ 82B78D4
	.i18n 4921

gText_082B7B1A:: @ 82B7B1A
	.i18n 4922

gText_082B7C13:: @ 82B7C13
	.i18n 4923

gText_082B7D18:: @ 82B7D18
	.i18n 4924

gText_082B7DD4:: @ 82B7DD4
	.i18n 4925

gText_082B7EE5:: @ 82B7EE5
	.i18n 4926

gText_082B7F35:: @ 82B7F35
	.i18n 4927

gText_082B7FE8:: @ 82B7FE8
	.i18n 4928

gText_082B8087:: @ 82B8087
	.i18n 4929

gText_082B822B:: @ 82B822B
	.i18n 4930

gText_082B8286:: @ 82B8286
	.i18n 4931

gText_082B8356:: @ 82B8356
	.i18n 4932

gText_082B83CE:: @ 82B83CE
	.i18n 4933

gText_082B84FC:: @ 82B84FC
	.i18n 4934

gText_082B8559:: @ 82B8559
	.i18n 4935

gText_082B8656:: @ 82B8656
	.i18n 4936

gText_082B86EA:: @ 82B86EA
	.i18n 4937

gText_082B87DA:: @ 82B87DA
	.i18n 4938

gText_082B887C:: @ 82B887C
	.i18n 4939

gText_082B8957:: @ 82B8957
	.i18n 4940

gText_082B89C6:: @ 82B89C6
	.i18n 4941

gText_082B8ACF:: @ 82B8ACF
	.i18n 4942

gText_082B8B66:: @ 82B8B66
	.i18n 4943

gText_082B8C20:: @ 82B8C20
	.i18n 4944

gText_082B8CAA:: @ 82B8CAA
	.i18n 4945

gText_082B8DD3:: @ 82B8DD3
	.i18n 4946

gText_082B8E24:: @ 82B8E24
	.i18n 4947

gText_082B8ED5:: @ 82B8ED5
	.i18n 4948

gText_082B8F45:: @ 82B8F45
	.i18n 4949

gText_082B905F:: @ 82B905F
	.i18n 4950

gText_082B910E:: @ 82B910E
	.i18n 4951

gText_082B9204:: @ 82B9204
	.i18n 4952

gText_082B929C:: @ 82B929C
	.i18n 4953

gText_082B9438:: @ 82B9438
	.i18n 4954

gText_082B9488:: @ 82B9488
	.i18n 4955

gText_082B9564:: @ 82B9564
	.i18n 4956

gText_082B95D8:: @ 82B95D8
	.i18n 4957

gText_082B9763:: @ 82B9763
	.i18n 4958

gText_082B97E5:: @ 82B97E5
	.i18n 4959

gText_082B989A:: @ 82B989A
	.i18n 4960

gText_082B992D:: @ 82B992D
	.i18n 4961

gText_082B9A84:: @ 82B9A84
	.i18n 4962

gText_082B9AB9:: @ 82B9AB9
	.i18n 4963

gText_082B9B76:: @ 82B9B76
	.i18n 4964

gText_082B9BF2:: @ 82B9BF2
	.i18n 4965

gText_082B9D83:: @ 82B9D83
	.i18n 4966

gText_082B9DF9:: @ 82B9DF9
	.i18n 4967

gText_082B9EAA:: @ 82B9EAA
	.i18n 4968

gText_082B9F55:: @ 82B9F55
	.i18n 4969

gText_082BA084:: @ 82BA084
	.i18n 4970

gText_082BA11D:: @ 82BA11D
	.i18n 4971

gText_082BA1F3:: @ 82BA1F3
	.i18n 4972

gText_082BA2A3:: @ 82BA2A3
	.i18n 4973

gText_082BA34E:: @ 82BA34E
	.i18n 4974

gText_082BA380:: @ 82BA380
	.i18n 4975

gText_082BA3D2:: @ 82BA3D2
	.i18n 4976

gText_082BA448:: @ 82BA448
	.i18n 4977

gText_082BA4D3:: @ 82BA4D3
	.i18n 4978

gText_082BA58C:: @ 82BA58C
	.i18n 4979

gText_082BA5BF:: @ 82BA5BF
	.i18n 4980

gText_082BA5F3:: @ 82BA5F3
	.i18n 4981

gText_082BA635:: @ 82BA635
	.i18n 4982

gText_082BA6E6:: @ 82BA6E6
	.i18n 4983

gText_082BA742:: @ 82BA742
	.i18n 4984

gText_082BA770:: @ 82BA770
	.i18n 4985

gText_082BA78F:: @ 82BA78F
	.i18n 4986

gText_082BA7D8:: @ 82BA7D8
	.i18n 4987

gText_082BA867:: @ 82BA867
	.i18n 4988

gText_082BA96B:: @ 82BA96B
	.i18n 4989

gText_082BA9B7:: @ 82BA9B7
	.i18n 4990

gText_082BAA1B:: @ 82BAA1B
	.i18n 4991

gText_082BAA81:: @ 82BAA81
	.i18n 4992

gText_082BAB22:: @ 82BAB22
	.i18n 4993

gText_082BAC43:: @ 82BAC43
	.i18n 4994

gText_082BAC78:: @ 82BAC78
	.i18n 4995

gText_082BAD17:: @ 82BAD17
	.i18n 4996

gText_082BADB6:: @ 82BADB6
	.i18n 4997

gText_082BAE36:: @ 82BAE36
	.i18n 4998

gText_082BAF4E:: @ 82BAF4E
	.i18n 4999

gText_082BAF8F:: @ 82BAF8F
	.i18n 5000

gText_082BAFDB:: @ 82BAFDB
	.i18n 5001

gText_082BB05F:: @ 82BB05F
	.i18n 5002

gText_082BB0D4:: @ 82BB0D4
	.i18n 5003

gText_082BB18C:: @ 82BB18C
	.i18n 5004

gText_082BB1CE:: @ 82BB1CE
	.i18n 5005

gText_082BB242:: @ 82BB242
	.i18n 5006

gText_082BB2D9:: @ 82BB2D9
	.i18n 5007

gText_082BB370:: @ 82BB370
	.i18n 5008

gText_082BB4C3:: @ 82BB4C3
	.i18n 5009

gText_082BB4FB:: @ 82BB4FB
	.i18n 5010

gText_082BB575:: @ 82BB575
	.i18n 5011

gText_082BB5E1:: @ 82BB5E1
	.i18n 5012

gText_082BB656:: @ 82BB656
	.i18n 5013

gText_082BB6E5:: @ 82BB6E5
	.i18n 5014

gText_082BB72C:: @ 82BB72C
	.i18n 5015

gText_082BB7A2:: @ 82BB7A2
	.i18n 5016

gText_082BB84A:: @ 82BB84A
	.i18n 5017

gText_082BB8CD:: @ 82BB8CD
	.i18n 5018

gText_082BB970:: @ 82BB970
	.i18n 5019

gText_082BB9AE:: @ 82BB9AE
	.i18n 5020

gText_082BBA05:: @ 82BBA05
	.i18n 5021

gText_082BBA6C:: @ 82BBA6C
	.i18n 5022

gText_082BBB01:: @ 82BBB01
	.i18n 5023

gText_082BBC1C:: @ 82BBC1C
	.i18n 5024

gText_082BBC4B:: @ 82BBC4B
	.i18n 5025

gText_082BBCF6:: @ 82BBCF6
	.i18n 5026

gText_082BBD90:: @ 82BBD90
	.i18n 5027

gText_082BBE0B:: @ 82BBE0B
	.i18n 5028

gText_082BBEE5:: @ 82BBEE5
	.i18n 5029

gText_082BBF25:: @ 82BBF25
	.i18n 5030

gText_082BBFA4:: @ 82BBFA4
	.i18n 5031

gText_082BC024:: @ 82BC024
	.i18n 5032

gText_082BC0C8:: @ 82BC0C8
	.i18n 5033

gText_082BC213:: @ 82BC213
	.i18n 5034

gText_082BC247:: @ 82BC247
	.i18n 5035

gText_082BC2DD:: @ 82BC2DD
	.i18n 5036

gText_082BC373:: @ 82BC373
	.i18n 5037

gText_082BC40E:: @ 82BC40E
	.i18n 5038

gText_082BC514:: @ 82BC514
	.i18n 5039

gText_082BC555:: @ 82BC555
	.i18n 5040

gText_082BC5CE:: @ 82BC5CE
	.i18n 5041

gText_082BC666:: @ 82BC666
	.i18n 5042

gText_082BC714:: @ 82BC714
	.i18n 5043

gText_082BC808:: @ 82BC808
	.i18n 5044

gText_082BC84D:: @ 82BC84D
	.i18n 5045

gText_082BC8EA:: @ 82BC8EA
	.i18n 5046

gText_082BC984:: @ 82BC984
	.i18n 5047

gText_082BCA4D:: @ 82BCA4D
	.i18n 5048

gText_082BCB75:: @ 82BCB75
	.i18n 5049

gText_082BCBA6:: @ 82BCBA6
	.i18n 5050

gText_082BCBFC:: @ 82BCBFC
	.i18n 5051

gText_082BCCA4:: @ 82BCCA4
	.i18n 5052

gText_082BCD68:: @ 82BCD68
	.i18n 5053

gText_082BCE64:: @ 82BCE64
	.i18n 5054

gText_082BCEF2:: @ 82BCEF2
	.i18n 5055

gText_082BCF61:: @ 82BCF61
	.i18n 5056

gText_082BCFA1:: @ 82BCFA1
	.i18n 5057

gText_082BD03C:: @ 82BD03C
	.i18n 5058

gText_082BD06D:: @ 82BD06D
	.i18n 5059

gText_082BD18A:: @ 82BD18A
	.i18n 5060

gText_082BD222:: @ 82BD222
	.i18n 5061

gText_082BD325:: @ 82BD325
	.i18n 5062

gText_082BD3B1:: @ 82BD3B1
	.i18n 5063

gText_082BD493:: @ 82BD493
	.i18n 5064

gText_082BD51C:: @ 82BD51C
	.i18n 5065

gText_082BD609:: @ 82BD609
	.i18n 5066

gText_082BD697:: @ 82BD697
	.i18n 5067

gText_082BD797:: @ 82BD797
	.i18n 5068

gText_082BD806:: @ 82BD806
	.i18n 5069

gText_082BD8F5:: @ 82BD8F5
	.i18n 5070

gText_082BD9BE:: @ 82BD9BE
	.i18n 5071

gText_082BDAE1:: @ 82BDAE1
	.i18n 5072

gText_082BDB4E:: @ 82BDB4E
	.i18n 5073

gText_082BDC6B:: @ 82BDC6B
	.i18n 5074

gText_082BDD0D:: @ 82BDD0D
	.i18n 5075

gText_082BDDEC:: @ 82BDDEC
	.i18n 5076

gText_082BDE68:: @ 82BDE68
	.i18n 5077

gText_082BDF4D:: @ 82BDF4D
	.i18n 5078

gText_082BDFD8:: @ 82BDFD8
	.i18n 5079

gText_082BE0FD:: @ 82BE0FD
	.i18n 5080

gText_082BE189:: @ 82BE189
	.i18n 5081

gText_082BE2A5:: @ 82BE2A5
	.i18n 5082

gText_082BE33E:: @ 82BE33E
	.i18n 5083

gText_082BE46C:: @ 82BE46C
	.i18n 5084

gText_082BE50D:: @ 82BE50D
	.i18n 5085

gText_082BE5F5:: @ 82BE5F5
	.i18n 5086

gText_082BE679:: @ 82BE679
	.i18n 5087

gText_082BE71E:: @ 82BE71E
	.i18n 5088

gText_082BE762:: @ 82BE762
	.i18n 5089

gText_082BE7F8:: @ 82BE7F8
	.i18n 5090

gText_082BE850:: @ 82BE850
	.i18n 5091

gText_082BE99C:: @ 82BE99C
	.i18n 5092

gText_082BEA1B:: @ 82BEA1B
	.i18n 5093

gText_082BEAE9:: @ 82BEAE9
	.i18n 5094

gText_082BEB72:: @ 82BEB72
	.i18n 5095

gText_082BEC8E:: @ 82BEC8E
	.i18n 5096

gText_082BED16:: @ 82BED16
	.i18n 5097

gText_082BEE29:: @ 82BEE29
	.i18n 5098

gText_082BEEB4:: @ 82BEEB4
	.i18n 5099

gText_082BEFE2:: @ 82BEFE2
	.i18n 5100

gText_082BF04E:: @ 82BF04E
	.i18n 5101

gText_082BF11D:: @ 82BF11D
	.i18n 5102

gText_082BF1A8:: @ 82BF1A8
	.i18n 5103

gText_082BF268:: @ 82BF268
	.i18n 5104

gText_082BF2D1:: @ 82BF2D1
	.i18n 5105

gText_082BF3CF:: @ 82BF3CF
	.i18n 5106

gText_082BF46A:: @ 82BF46A
	.i18n 5107

gText_082BF551:: @ 82BF551
	.i18n 5108

gText_082BF5C3:: @ 82BF5C3
	.i18n 5109

gText_082BF6E5:: @ 82BF6E5
	.i18n 5110

gText_082BF773:: @ 82BF773
	.i18n 5111

gText_082BF869:: @ 82BF869
	.i18n 5112

gText_082BF8DD:: @ 82BF8DD
	.i18n 5113

gText_082BF9BA:: @ 82BF9BA
	.i18n 5114

gText_082BFA5A:: @ 82BFA5A
	.i18n 5115

gText_082BFB4E:: @ 82BFB4E
	.i18n 5116

gText_082BFBF2:: @ 82BFBF2
	.i18n 5117

gText_082BFCAE:: @ 82BFCAE
	.i18n 5118

gText_082BFD26:: @ 82BFD26
	.i18n 5119

gText_082BFDB1:: @ 82BFDB1
	.i18n 5120

gText_082BFE24:: @ 82BFE24
	.i18n 5121

gText_082BFEAD:: @ 82BFEAD
	.i18n 5122

gText_082BFF0A:: @ 82BFF0A
	.i18n 5123

gText_082C0032:: @ 82C0032
	.i18n 5124

gText_082C0090:: @ 82C0090
	.i18n 5125

gText_082C016E:: @ 82C016E
	.i18n 5126

gText_082C01F7:: @ 82C01F7
	.i18n 5127

gText_082C034C:: @ 82C034C
	.i18n 5128

gText_082C03CA:: @ 82C03CA
	.i18n 5129

gText_082C046E:: @ 82C046E
	.i18n 5130

gText_082C04F9:: @ 82C04F9
	.i18n 5131

gText_082C0598:: @ 82C0598
	.i18n 5132

gText_082C0602:: @ 82C0602
	.i18n 5133

gText_082C06D8:: @ 82C06D8
	.i18n 5134

gText_082C074A:: @ 82C074A
	.i18n 5135

gText_082C0809:: @ 82C0809
	.i18n 5136

gText_082C086E:: @ 82C086E
	.i18n 5137

gText_082C0982:: @ 82C0982
	.i18n 5138

gText_082C0A1D:: @ 82C0A1D
	.i18n 5139

gText_082C0AFD:: @ 82C0AFD
	.i18n 5140

gText_082C0B6F:: @ 82C0B6F
	.i18n 5141

gText_082C0C7D:: @ 82C0C7D
	.i18n 5142

gText_082C0D0B:: @ 82C0D0B
	.i18n 5143

gText_082C0DFE:: @ 82C0DFE
	.i18n 5144

gText_082C0E71:: @ 82C0E71
	.i18n 5145

gText_082C0F6D:: @ 82C0F6D
	.i18n 5146

gText_082C1003:: @ 82C1003
	.i18n 5147

gText_082C1122:: @ 82C1122
	.i18n 5148

gText_082C11D1:: @ 82C11D1
	.i18n 5149

gText_082C12D5:: @ 82C12D5
	.i18n 5150

gText_082C13AB:: @ 82C13AB
	.i18n 5151

gText_082C1444:: @ 82C1444
	.i18n 5152

gText_082C1501:: @ 82C1501
	.i18n 5153

gText_082C15B6:: @ 82C15B6
	.i18n 5154

gText_082C165E:: @ 82C165E
	.i18n 5155

gText_082C174F:: @ 82C174F
	.i18n 5156

gText_082C1862:: @ 82C1862
	.i18n 5157

gText_082C19A0:: @ 82C19A0
	.i18n 5158

gText_082C1A76:: @ 82C1A76
	.i18n 5159

gText_082C1C16:: @ 82C1C16
	.i18n 5160

gText_082C1CF5:: @ 82C1CF5
	.i18n 5161

gText_082C1DC1:: @ 82C1DC1
	.i18n 5162

gText_082C1EDC:: @ 82C1EDC
	.i18n 5163

gText_082C1FEC:: @ 82C1FEC
	.i18n 5164

gText_082C20D1:: @ 82C20D1
	.i18n 5165

gText_082C21FF:: @ 82C21FF
	.i18n 5166

gText_082C231C:: @ 82C231C
	.i18n 5167

gText_082C2407:: @ 82C2407
	.i18n 5168

gText_082C24B5:: @ 82C24B5
	.i18n 5169

gText_082C25B1:: @ 82C25B1
	.i18n 5170

gText_082C2707:: @ 82C2707
	.i18n 5171

gText_082C27D4:: @ 82C27D4
	.i18n 5172

gText_082C28D6:: @ 82C28D6
	.i18n 5173

gText_082C2A0B:: @ 82C2A0B
	.i18n 5174

gText_082C2B50:: @ 82C2B50
	.i18n 5175

gText_082C2C77:: @ 82C2C77
	.i18n 5176

gText_082C2D67:: @ 82C2D67
	.i18n 5177

gText_082C2E41:: @ 82C2E41
	.i18n 5178

gText_082C2EF5:: @ 82C2EF5
	.i18n 5179

gText_082C3023:: @ 82C3023
	.i18n 5180
