BattleFrontier_BattlePyramidEmptySquare_MapScripts:: @ 8252A33
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidEmptySquare_MapScript1_252AA2
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidEmptySquare_MapScript2_252A43
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidEmptySquare_MapScript1_252BCA
	.byte 0

BattleFrontier_BattlePyramidEmptySquare_MapScript2_252A43: @ 8252A43
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidEmptySquare_EventScript_252A5D
	map_script_2 VAR_TEMP_E, 0, BattleFrontier_BattlePyramidEmptySquare_EventScript_252A98
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidEmptySquare_EventScript_252A8F
	.2byte 0

BattleFrontier_BattlePyramidEmptySquare_EventScript_252A5D:: @ 8252A5D
	lockall
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 1
	setvar VAR_0x8007, 55
	setvar VAR_RESULT, 0

BattleFrontier_BattlePyramidEmptySquare_EventScript_252A77:: @ 8252A77
	special CallBattlePyramidFunction
	delay 2
	compare VAR_RESULT, 2
	goto_if_ne BattleFrontier_BattlePyramidEmptySquare_EventScript_252A77
	setvar VAR_TEMP_D, 0
	releaseall
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252A8F:: @ 8252A8F
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252A98:: @ 8252A98
	playbgm MUS_PYRAMID, 0
	setvar VAR_TEMP_E, 1
	end

BattleFrontier_BattlePyramidEmptySquare_MapScript1_252AA2: @ 8252AA2
	setvar VAR_0x8004, 15
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 0
	special CallFrontierUtilFunc
	switch VAR_TEMP_0
	case 0, BattleFrontier_BattlePyramidEmptySquare_EventScript_252B8D
	case 1, BattleFrontier_BattlePyramidEmptySquare_EventScript_252B66
	case 2, BattleFrontier_BattlePyramidEmptySquare_EventScript_252B8D
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 5
	special CallFrontierUtilFunc
	compare VAR_RESULT, 4
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252B39
	compare VAR_RESULT, 5
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252B39
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252B39
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252B42
	compare VAR_RESULT, 3
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252B42
	compare VAR_RESULT, 9
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252B42
	setvar VAR_0x8004, 14
	setvar VAR_0x8005, 8
	special CallFrontierUtilFunc
	setvar VAR_TEMP_D, 1

BattleFrontier_BattlePyramidEmptySquare_EventScript_252B39:: @ 8252B39
	setvar VAR_0x8004, 17
	special CallBattlePyramidFunction
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252B42:: @ 8252B42
BattleFrontier_BattlePyramidTop_EventScript_252B42:: @ 8252B42
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 4
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 7
	setvar VAR_0x8006, 255
	special CallBattlePyramidFunction

BattleFrontier_BattlePyramidEmptySquare_EventScript_252B66:: @ 8252B66
BattleFrontier_BattlePyramidTop_EventScript_252B66:: @ 8252B66
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 14
	special CallBattlePyramidFunction
	special HealPlayerParty
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 255, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252B8D:: @ 8252B8D
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 1
	special CallBattlePyramidFunction
	special SavePlayerParty
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 9
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 3
	special CallFrontierUtilFunc
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidEmptySquare_MapScript1_252BCA: @ 8252BCA
	call BattleFrontier_BattlePyramidEmptySquare_EventScript_252BD5
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252BD5:: @ 8252BD5
	setvar VAR_0x8004, 13
	setvar VAR_0x8005, 32
	setvar VAR_0x8006, 0
	special CallBattlePyramidFunction
	return

BattleFrontier_BattlePyramidEmptySquare_EventScript_252BE8:: @ 8252BE8
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_241EBA
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	compare VAR_RESULT, 7
	goto_if_eq BattleFrontier_BattlePyramidEmptySquare_EventScript_252C45
	setvar VAR_0x8004, 6
	special CallBattlePyramidFunction
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special CallFrontierUtilFunc
	setvar VAR_RESULT, 0
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_EMPTY_SQUARE, 255, 1, 1
	waitstate
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252C45:: @ 8252C45
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 255, 17, 17
	waitstate
	end

BattlePyramid_TrainerBattle:: @ 8252C4F
	trainerbattle TRAINER_BATTLE_PYRAMID, TRAINER_PHILLIP, 0, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText
	setvar VAR_0x8004, 10
	special CallBattlePyramidFunction
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BattlePyramid_FindItemBall:: @ 8252C6A
	setvar VAR_0x8004, 7
	special CallBattlePyramidFunction
	callstd STD_FIND_ITEM
	compare VAR_0x8007, 0
	goto_if_eq BattlePyramid_FindItemBall_End
	setvar VAR_0x8004, 8
	special CallBattlePyramidFunction

BattlePyramid_FindItemBall_End:: @ 8252C87
	end

BattleFrontier_BattlePyramidEmptySquare_EventScript_252C88:: @ 8252C88
	goto BattleFrontier_BattlePyramidTop_EventScript_252B42

BattleFacility_TrainerBattle_PlaceholderText: @ 8252C8D
	.i18n 1109

gText_BattlePyramidConfirmRest:: @ 8252CA7
	.i18n 1110

gText_BattlePyramidConfirmRetire:: @ 8252CFB
	.i18n 1111

BattlePyramid_ExitHintUp_Text1:: @ 8252D2D
	.i18n 1112

BattlePyramid_ExitHintLeft_Text1:: @ 8252D57
	.i18n 1113

BattlePyramid_ExitHintRight_Text1:: @ 8252D81
	.i18n 1114

BattlePyramid_ExitHintDown_Text1:: @ 8252DAB
	.i18n 1115

BattlePyramid_ExitHintUp_Text2:: @ 8252DD5
	.i18n 1116

BattlePyramid_ExitHintLeft_Text2:: @ 8252E03
	.i18n 1117

BattlePyramid_ExitHintRight_Text2:: @ 8252E31
	.i18n 1118

BattlePyramid_ExitHintDown_Text2:: @ 8252E5F
	.i18n 1119

BattlePyramid_ExitHintUp_Text3:: @ 8252E8D
	.i18n 1120

BattlePyramid_ExitHintLeft_Text3:: @ 8252EAA
	.i18n 1121

BattlePyramid_ExitHintRight_Text3:: @ 8252EC7
	.i18n 1122

BattlePyramid_ExitHintDown_Text3:: @ 8252EE4
	.i18n 1123

BattlePyramid_ExitHintUp_Text4:: @ 8252F01
	.i18n 1124

BattlePyramid_ExitHintLeft_Text4:: @ 8252F3A
	.i18n 1125

BattlePyramid_ExitHintRight_Text4:: @ 8252F73
	.i18n 1126

BattlePyramid_ExitHintDown_Text4:: @ 8252FAC
	.i18n 1127

BattlePyramid_ExitHintUp_Text5:: @ 8252FE5
	.i18n 1128

BattlePyramid_ExitHintLeft_Text5:: @ 8253000
	.i18n 1129

BattlePyramid_ExitHintRight_Text5:: @ 825301B
	.i18n 1130

BattlePyramid_ExitHintDown_Text5:: @ 8253036
	.i18n 1131

BattlePyramid_ExitHintUp_Text6:: @ 8253051
	.i18n 1132

BattlePyramid_ExitHintLeft_Text6:: @ 825307C
	.i18n 1133

BattlePyramid_ExitHintRight_Text6:: @ 82530A7
	.i18n 1134

BattlePyramid_ExitHintDown_Text6:: @ 82530D2
	.i18n 1135

BattlePyramid_EightItemsRemaining_Text1:: @ 82530FD
	.i18n 1136

BattlePyramid_SevenItemsRemaining_Text1:: @ 8253140
	.i18n 1137

BattlePyramid_SixItemsRemaining_Text1:: @ 8253183
	.i18n 1138

BattlePyramid_FiveItemsRemaining_Text1:: @ 82531C4
	.i18n 1139

BattlePyramid_FourItemsRemaining_Text1:: @ 8253206
	.i18n 1140

BattlePyramid_ThreeItemsRemaining_Text1:: @ 8253248
	.i18n 1141

BattlePyramid_TwoItemsRemaining_Text1:: @ 825328B
	.i18n 1142

BattlePyramid_OneItemRemaining_Text1:: @ 82532CC
	.i18n 1143

BattlePyramid_ZeroItemsRemaining_Text1:: @ 825330B
	.i18n 1144

BattlePyramid_EightItemsRemaining_Text2:: @ 825334D
	.i18n 1145

BattlePyramid_SevenItemsRemaining_Text2:: @ 82533A6
	.i18n 1146

BattlePyramid_SixItemsRemaining_Text2:: @ 8253404
	.i18n 1147

BattlePyramid_FiveItemsRemaining_Text2:: @ 8253460
	.i18n 1148

BattlePyramid_FourItemsRemaining_Text2:: @ 82534BD
	.i18n 1149

BattlePyramid_ThreeItemsRemaining_Text2:: @ 825351A
	.i18n 1150

BattlePyramid_TwoItemsRemaining_Text2:: @ 8253578
	.i18n 1151

BattlePyramid_OneItemRemaining_Text2:: @ 82535D4
	.i18n 1152

BattlePyramid_ZeroItemsRemaining_Text2:: @ 825362E
	.i18n 1153

BattlePyramid_EightItemsRemaining_Text3:: @ 825368B
	.i18n 1154

BattlePyramid_SevenItemsRemaining_Text3:: @ 82536F8
	.i18n 1155

BattlePyramid_SixItemsRemaining_Text3:: @ 8253765
	.i18n 1156

BattlePyramid_FiveItemsRemaining_Text3:: @ 82537D0
	.i18n 1157

BattlePyramid_FourItemsRemaining_Text3:: @ 825383C
	.i18n 1158

BattlePyramid_ThreeItemsRemaining_Text3:: @ 82538A8
	.i18n 1159

BattlePyramid_TwoItemsRemaining_Text3:: @ 8253915
	.i18n 1160

BattlePyramid_OneItemRemaining_Text3:: @ 8253980
	.i18n 1161

BattlePyramid_ZeroItemsRemaining_Text3:: @ 82539EC
	.i18n 1162

BattlePyramid_EightItemsRemaining_Text4:: @ 8253A69
	.i18n 1163

BattlePyramid_SevenItemsRemaining_Text4:: @ 8253AC4
	.i18n 1164

BattlePyramid_SixItemsRemaining_Text4:: @ 8253B1F
	.i18n 1165

BattlePyramid_FiveItemsRemaining_Text4:: @ 8253B78
	.i18n 1166

BattlePyramid_FourItemsRemaining_Text4:: @ 8253BD2
	.i18n 1167

BattlePyramid_ThreeItemsRemaining_Text4:: @ 8253C2C
	.i18n 1168

BattlePyramid_TwoItemsRemaining_Text4:: @ 8253C87
	.i18n 1169

BattlePyramid_OneItemRemaining_Text4:: @ 8253CE0
	.i18n 1170

BattlePyramid_ZeroItemsRemaining_Text4:: @ 8253D3E
	.i18n 1171

BattlePyramid_EightItemsRemaining_Text5:: @ 8253D96
	.i18n 1172

BattlePyramid_SevenItemsRemaining_Text5:: @ 8253DD2
	.i18n 1173

BattlePyramid_SixItemsRemaining_Text5:: @ 8253E0E
	.i18n 1174

BattlePyramid_FiveItemsRemaining_Text5:: @ 8253E48
	.i18n 1175

BattlePyramid_FourItemsRemaining_Text5:: @ 8253E83
	.i18n 1176

BattlePyramid_ThreeItemsRemaining_Text5:: @ 8253EBE
	.i18n 1177

BattlePyramid_TwoItemsRemaining_Text5:: @ 8253EFA
	.i18n 1178

BattlePyramid_OneItemRemaining_Text5:: @ 8253F34
	.i18n 1179

BattlePyramid_ZeroItemsRemaining_Text5:: @ 8253F6C
	.i18n 1180

BattlePyramid_EightItemsRemaining_Text6:: @ 8253FA5
	.i18n 1181

BattlePyramid_SevenItemsRemaining_Text6:: @ 8253FF7
	.i18n 1182

BattlePyramid_SixItemsRemaining_Text6:: @ 8254049
	.i18n 1183

BattlePyramid_FiveItemsRemaining_Text6:: @ 8254099
	.i18n 1184

BattlePyramid_FourItemsRemaining_Text6:: @ 82540EA
	.i18n 1185

BattlePyramid_ThreeItemsRemaining_Text6:: @ 825413B
	.i18n 1186

BattlePyramid_TwoItemsRemaining_Text6:: @ 825418D
	.i18n 1187

BattlePyramid_OneItemRemaining_Text6:: @ 82541DD
	.i18n 1188

BattlePyramid_ZeroItemsRemaining_Text6:: @ 825422B
	.i18n 1189

BattlePyramid_SevenTrainersRemaining_Text1:: @ 825427A
	.i18n 1190

BattlePyramid_SixTrainersRemaining_Text1:: @ 82542CB
	.i18n 1191

BattlePyramid_FiveTrainersRemaining_Text1:: @ 825431A
	.i18n 1192

BattlePyramid_FourTrainersRemaining_Text1:: @ 825436A
	.i18n 1193

BattlePyramid_ThreeTrainersRemaining_Text1:: @ 82543BA
	.i18n 1194

BattlePyramid_TwoTrainersRemaining_Text1:: @ 825440B
	.i18n 1195

BattlePyramid_OneTrainersRemaining_Text1:: @ 825445A
	.i18n 1196

BattlePyramid_ZeroTrainersRemaining_Text1:: @ 82544A6
	.i18n 1197

BattlePyramid_SevenTrainersRemaining_Text2:: @ 82544E6
	.i18n 1198

BattlePyramid_SixTrainersRemaining_Text2:: @ 8254538
	.i18n 1199

BattlePyramid_FiveTrainersRemaining_Text2:: @ 8254588
	.i18n 1200

BattlePyramid_FourTrainersRemaining_Text2:: @ 82545D9
	.i18n 1201

BattlePyramid_ThreeTrainersRemaining_Text2:: @ 825462A
	.i18n 1202

BattlePyramid_TwoTrainersRemaining_Text2:: @ 825467C
	.i18n 1203

BattlePyramid_OneTrainersRemaining_Text2:: @ 82546CC
	.i18n 1204

BattlePyramid_ZeroTrainersRemaining_Text2:: @ 825471E
	.i18n 1205

BattlePyramid_SevenTrainersRemaining_Text3:: @ 8254767
	.i18n 1206

BattlePyramid_SixTrainersRemaining_Text3:: @ 82547C9
	.i18n 1207

BattlePyramid_FiveTrainersRemaining_Text3:: @ 8254829
	.i18n 1208

BattlePyramid_FourTrainersRemaining_Text3:: @ 825488A
	.i18n 1209

BattlePyramid_ThreeTrainersRemaining_Text3:: @ 82548EB
	.i18n 1210

BattlePyramid_TwoTrainersRemaining_Text3:: @ 825494D
	.i18n 1211

BattlePyramid_OneTrainersRemaining_Text3:: @ 82549AE
	.i18n 1212

BattlePyramid_ZeroTrainersRemaining_Text3:: @ 8254A0B
	.i18n 1213

BattlePyramid_SevenTrainersRemaining_Text4:: @ 8254A59
	.i18n 1214

BattlePyramid_SixTrainersRemaining_Text4:: @ 8254A9E
	.i18n 1215

BattlePyramid_FiveTrainersRemaining_Text4:: @ 8254AE1
	.i18n 1216

BattlePyramid_FourTrainersRemaining_Text4:: @ 8254B25
	.i18n 1217

BattlePyramid_ThreeTrainersRemaining_Text4:: @ 8254B69
	.i18n 1218

BattlePyramid_TwoTrainersRemaining_Text4:: @ 8254BAE
	.i18n 1219

BattlePyramid_OneTrainersRemaining_Text4:: @ 8254BF1
	.i18n 1220

BattlePyramid_ZeroTrainersRemaining_Text4:: @ 8254C3E
	.i18n 1221

BattlePyramid_SevenTrainersRemaining_Text5:: @ 8254C77
	.i18n 1222

BattlePyramid_SixTrainersRemaining_Text5:: @ 8254CC0
	.i18n 1223

BattlePyramid_FiveTrainersRemaining_Text5:: @ 8254D07
	.i18n 1224

BattlePyramid_FourTrainersRemaining_Text5:: @ 8254D4F
	.i18n 1225

BattlePyramid_ThreeTrainersRemaining_Text5:: @ 8254D97
	.i18n 1226

BattlePyramid_TwoTrainersRemaining_Text5:: @ 8254DE0
	.i18n 1227

BattlePyramid_OneTrainersRemaining_Text5:: @ 8254E27
	.i18n 1228

BattlePyramid_ZeroTrainersRemaining_Text5:: @ 8254E6E
	.i18n 1229

BattlePyramid_SevenTrainersRemaining_Text6:: @ 8254ED3
	.i18n 1230

BattlePyramid_SixTrainersRemaining_Text6:: @ 8254F0E
	.i18n 1231

BattlePyramid_FiveTrainersRemaining_Text6:: @ 8254F47
	.i18n 1232

BattlePyramid_FourTrainersRemaining_Text6:: @ 8254F81
	.i18n 1233

BattlePyramid_ThreeTrainersRemaining_Text6:: @ 8254FBB
	.i18n 1234

BattlePyramid_TwoTrainersRemaining_Text6:: @ 8254FF6
	.i18n 1235

BattlePyramid_OneTrainersRemaining_Text6:: @ 825502F
	.i18n 1236

BattlePyramid_ZeroTrainersRemaining_Text6:: @ 8255068
	.i18n 1237
