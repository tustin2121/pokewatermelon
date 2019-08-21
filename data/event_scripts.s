#include "constants/global.h"
#include "constants/battle_frontier.h"
#include "constants/battle_setup.h"
#include "constants/easy_chat.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement_constants.h"
#include "constants/field_effects.h"
#include "constants/flags.h"
#include "constants/decorations.h"
#include "constants/items.h"
#include "constants/heal_locations.h"
#include "constants/layouts.h"
#include "constants/map_scripts.h"
#include "constants/maps.h"
#include "constants/moves.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/vars.h"
#include "constants/weather.h"
#include "constants/trainer_hill.h"
#include "constants/battle.h"
#include "constants/metatile_labels.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section script_data, "aw", %progbits

@ 81DB67C
	.include "data/script_cmd_table.inc"

gSpecialVars:: @ 81DBA0C
	.4byte gSpecialVar_0x8000
	.4byte gSpecialVar_0x8001
	.4byte gSpecialVar_0x8002
	.4byte gSpecialVar_0x8003
	.4byte gSpecialVar_0x8004
	.4byte gSpecialVar_0x8005
	.4byte gSpecialVar_0x8006
	.4byte gSpecialVar_0x8007
	.4byte gSpecialVar_0x8008
	.4byte gSpecialVar_0x8009
	.4byte gSpecialVar_0x800A
	.4byte gSpecialVar_0x800B
	.4byte gSpecialVar_Facing
	.4byte gSpecialVar_Result
	.4byte gSpecialVar_ItemId
	.4byte gSpecialVar_LastTalked
	.4byte gSpecialVar_ContestRank
	.4byte gSpecialVar_ContestCategory
	.4byte gSpecialVar_MonBoxId
	.4byte gSpecialVar_MonBoxPos
	.4byte gSpecialVar_Unused_0x8014
	.4byte gTrainerBattleOpponent_A

	.include "data/specials.inc"

gStdScripts:: @ 81DC2A0
	.4byte Std_ObtainItem
	.4byte Std_FindItem
	.4byte Std_MsgboxNPC
	.4byte Std_MsgboxSign
	.4byte Std_MsgboxDefault
	.4byte Std_MsgboxYesNo
	.4byte Std_MsgboxAutoclose
	.4byte Std_ObtainDecoration
	.4byte Std_RegisteredInMatchCall
	.4byte Std_9
	.4byte Std_10
gStdScripts_End:: @ 81DC2CC

	.include "data/maps/PetalburgCity/scripts.inc"
	.include "data/maps/SlateportCity/scripts.inc"
	.include "data/maps/MauvilleCity/scripts.inc"
	.include "data/maps/RustboroCity/scripts.inc"
	.include "data/maps/FortreeCity/scripts.inc"
	.include "data/maps/LilycoveCity/scripts.inc"
	.include "data/maps/MossdeepCity/scripts.inc"
	.include "data/maps/SootopolisCity/scripts.inc"
	.include "data/maps/EverGrandeCity/scripts.inc"
	.include "data/maps/LittlerootTown/scripts.inc"
	.include "data/maps/OldaleTown/scripts.inc"
	.include "data/maps/DewfordTown/scripts.inc"
	.include "data/maps/LavaridgeTown/scripts.inc"
	.include "data/maps/FallarborTown/scripts.inc"
	.include "data/maps/VerdanturfTown/scripts.inc"
	.include "data/maps/PacifidlogTown/scripts.inc"
	.include "data/maps/Route101/scripts.inc"
	.include "data/maps/Route102/scripts.inc"
	.include "data/maps/Route103/scripts.inc"
	.include "data/maps/Route104/scripts.inc"
	.include "data/maps/Route105/scripts.inc"
	.include "data/maps/Route106/scripts.inc"
	.include "data/maps/Route107/scripts.inc"
	.include "data/maps/Route108/scripts.inc"
	.include "data/maps/Route109/scripts.inc"
	.include "data/maps/Route110/scripts.inc"
	.include "data/maps/Route111/scripts.inc"
	.include "data/maps/Route112/scripts.inc"
	.include "data/maps/Route113/scripts.inc"
	.include "data/maps/Route114/scripts.inc"
	.include "data/maps/Route115/scripts.inc"
	.include "data/maps/Route116/scripts.inc"
	.include "data/maps/Route117/scripts.inc"
	.include "data/maps/Route118/scripts.inc"
	.include "data/maps/Route119/scripts.inc"
	.include "data/maps/Route120/scripts.inc"
	.include "data/maps/Route121/scripts.inc"
	.include "data/maps/Route122/scripts.inc"
	.include "data/maps/Route123/scripts.inc"
	.include "data/maps/Route124/scripts.inc"
	.include "data/maps/Route125/scripts.inc"
	.include "data/maps/Route126/scripts.inc"
	.include "data/maps/Route127/scripts.inc"
	.include "data/maps/Route128/scripts.inc"
	.include "data/maps/Route129/scripts.inc"
	.include "data/maps/Route130/scripts.inc"
	.include "data/maps/Route131/scripts.inc"
	.include "data/maps/Route132/scripts.inc"
	.include "data/maps/Route133/scripts.inc"
	.include "data/maps/Route134/scripts.inc"
	.include "data/maps/Underwater1/scripts.inc"
	.include "data/maps/Underwater2/scripts.inc"
	.include "data/maps/Underwater3/scripts.inc"
	.include "data/maps/Underwater4/scripts.inc"
	.include "data/maps/Underwater5/scripts.inc"
	.include "data/maps/Underwater6/scripts.inc"
	.include "data/maps/Underwater7/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_1F/scripts.inc"
	.include "data/maps/LittlerootTown_MaysHouse_2F/scripts.inc"
	.include "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.inc"
	.include "data/maps/OldaleTown_House1/scripts.inc"
	.include "data/maps/OldaleTown_House2/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/OldaleTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/OldaleTown_Mart/scripts.inc"
	.include "data/maps/DewfordTown_House1/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/DewfordTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/DewfordTown_Gym/scripts.inc"
	.include "data/maps/DewfordTown_Hall/scripts.inc"
	.include "data/maps/DewfordTown_House2/scripts.inc"
	.include "data/maps/LavaridgeTown_HerbShop/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_Gym_B1F/scripts.inc"
	.include "data/maps/LavaridgeTown_House/scripts.inc"
	.include "data/maps/LavaridgeTown_Mart/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_Mart/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentLobby/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/FallarborTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FallarborTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FallarborTown_House1/scripts.inc"
	.include "data/maps/FallarborTown_House2/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentLobby/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentCorridor/scripts.inc"
	.include "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/VerdanturfTown_Mart/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/VerdanturfTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/VerdanturfTown_WandasHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.inc"
	.include "data/maps/VerdanturfTown_House/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PacifidlogTown_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PacifidlogTown_House1/scripts.inc"
	.include "data/maps/PacifidlogTown_House2/scripts.inc"
	.include "data/maps/PacifidlogTown_House3/scripts.inc"
	.include "data/maps/PacifidlogTown_House4/scripts.inc"
	.include "data/maps/PacifidlogTown_House5/scripts.inc"
	.include "data/maps/PetalburgCity_WallysHouse/scripts.inc"
	.include "data/maps/PetalburgCity_Gym/scripts.inc"
	.include "data/maps/PetalburgCity_House1/scripts.inc"
	.include "data/maps/PetalburgCity_House2/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/PetalburgCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/PetalburgCity_Mart/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_1F/scripts.inc"
	.include "data/maps/SlateportCity_SternsShipyard_2F/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentLobby/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentCorridor/scripts.inc"
	.include "data/maps/SlateportCity_BattleTentBattleRoom/scripts.inc"
	.include "data/maps/SlateportCity_House1/scripts.inc"
	.include "data/maps/SlateportCity_PokemonFanClub/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_1F/scripts.inc"
	.include "data/maps/SlateportCity_OceanicMuseum_2F/scripts.inc"
	.include "data/maps/SlateportCity_Harbor/scripts.inc"
	.include "data/maps/SlateportCity_House2/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SlateportCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SlateportCity_Mart/scripts.inc"
	.include "data/maps/MauvilleCity_Gym/scripts.inc"
	.include "data/maps/MauvilleCity_BikeShop/scripts.inc"
	.include "data/maps/MauvilleCity_House1/scripts.inc"
	.include "data/maps/MauvilleCity_GameCorner/scripts.inc"
	.include "data/maps/MauvilleCity_House2/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MauvilleCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MauvilleCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_1F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_2F/scripts.inc"
	.include "data/maps/RustboroCity_DevonCorp_3F/scripts.inc"
	.include "data/maps/RustboroCity_Gym/scripts.inc"
	.include "data/maps/RustboroCity_PokemonSchool/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/RustboroCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/RustboroCity_Mart/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat1_2F/scripts.inc"
	.include "data/maps/RustboroCity_House1/scripts.inc"
	.include "data/maps/RustboroCity_CuttersHouse/scripts.inc"
	.include "data/maps/RustboroCity_House2/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_1F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_2F/scripts.inc"
	.include "data/maps/RustboroCity_Flat2_3F/scripts.inc"
	.include "data/maps/RustboroCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House1/scripts.inc"
	.include "data/maps/FortreeCity_Gym/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/FortreeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/FortreeCity_Mart/scripts.inc"
	.include "data/maps/FortreeCity_House2/scripts.inc"
	.include "data/maps/FortreeCity_House3/scripts.inc"
	.include "data/maps/FortreeCity_House4/scripts.inc"
	.include "data/maps/FortreeCity_House5/scripts.inc"
	.include "data/maps/FortreeCity_DecorationShop/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc"
	.include "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc"
	.include "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc"
	.include "data/maps/LilycoveCity_ContestLobby/scripts.inc"
	.include "data/maps/LilycoveCity_ContestHall/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/LilycoveCity_UnusedMart/scripts.inc"
	.include "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc"
	.include "data/maps/LilycoveCity_Harbor/scripts.inc"
	.include "data/maps/LilycoveCity_MoveDeletersHouse/scripts.inc"
	.include "data/maps/LilycoveCity_House1/scripts.inc"
	.include "data/maps/LilycoveCity_House2/scripts.inc"
	.include "data/maps/LilycoveCity_House3/scripts.inc"
	.include "data/maps/LilycoveCity_House4/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_1F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_2F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.inc"
	.include "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.inc"
	.include "data/maps/MossdeepCity_Gym/scripts.inc"
	.include "data/maps/MossdeepCity_House1/scripts.inc"
	.include "data/maps/MossdeepCity_House2/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_Mart/scripts.inc"
	.include "data/maps/MossdeepCity_House3/scripts.inc"
	.include "data/maps/MossdeepCity_StevensHouse/scripts.inc"
	.include "data/maps/MossdeepCity_House4/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc"
	.include "data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_1F/scripts.inc"
	.include "data/maps/MossdeepCity_GameCorner_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_1F/scripts.inc"
	.include "data/maps/SootopolisCity_Gym_B1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/SootopolisCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/SootopolisCity_Mart/scripts.inc"
	.include "data/maps/SootopolisCity_House1/scripts.inc"
	.include "data/maps/SootopolisCity_House2/scripts.inc"
	.include "data/maps/SootopolisCity_House3/scripts.inc"
	.include "data/maps/SootopolisCity_House4/scripts.inc"
	.include "data/maps/SootopolisCity_House5/scripts.inc"
	.include "data/maps/SootopolisCity_House6/scripts.inc"
	.include "data/maps/SootopolisCity_House7/scripts.inc"
	.include "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc"
	.include "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.inc"
	.include "data/maps/EverGrandeCity_SidneysRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_PhoebesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_GlaciasRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_DrakesRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_ChampionsRoom/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall1/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall2/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall3/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall4/scripts.inc"
	.include "data/maps/EverGrandeCity_Hall5/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_HallOfFame/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonCenter_2F/scripts.inc"
	.include "data/maps/EverGrandeCity_PokemonLeague_2F/scripts.inc"
	.include "data/maps/Route104_MrBrineysHouse/scripts.inc"
	.include "data/maps/Route104_PrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route111_WinstrateFamilysHouse/scripts.inc"
	.include "data/maps/Route111_OldLadysRestStop/scripts.inc"
	.include "data/maps/Route112_CableCarStation/scripts.inc"
	.include "data/maps/MtChimney_CableCarStation/scripts.inc"
	.include "data/maps/Route114_FossilManiacsHouse/scripts.inc"
	.include "data/maps/Route114_FossilManiacsTunnel/scripts.inc"
	.include "data/maps/Route114_LanettesHouse/scripts.inc"
	.include "data/maps/Route116_TunnelersRestHouse/scripts.inc"
	.include "data/maps/Route117_PokemonDayCare/scripts.inc"
	.include "data/maps/Route121_SafariZoneEntrance/scripts.inc"
	.include "data/maps/MeteorFalls_1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_1F_2R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_1R/scripts.inc"
	.include "data/maps/MeteorFalls_B1F_2R/scripts.inc"
	.include "data/maps/RusturfTunnel/scripts.inc"
	.include "data/maps/Underwater_SootopolisCity/scripts.inc"
	.include "data/maps/DesertRuins/scripts.inc"
	.include "data/maps/GraniteCave_1F/scripts.inc"
	.include "data/maps/GraniteCave_B1F/scripts.inc"
	.include "data/maps/GraniteCave_B2F/scripts.inc"
	.include "data/maps/GraniteCave_StevensRoom/scripts.inc"
	.include "data/maps/PetalburgWoods/scripts.inc"
	.include "data/maps/MtChimney/scripts.inc"
	.include "data/maps/JaggedPass/scripts.inc"
	.include "data/maps/FieryPath/scripts.inc"
	.include "data/maps/MtPyre_1F/scripts.inc"
	.include "data/maps/MtPyre_2F/scripts.inc"
	.include "data/maps/MtPyre_3F/scripts.inc"
	.include "data/maps/MtPyre_4F/scripts.inc"
	.include "data/maps/MtPyre_5F/scripts.inc"
	.include "data/maps/MtPyre_6F/scripts.inc"
	.include "data/maps/MtPyre_Exterior/scripts.inc"
	.include "data/maps/MtPyre_Summit/scripts.inc"
	.include "data/maps/AquaHideout_1F/scripts.inc"
	.include "data/maps/AquaHideout_B1F/scripts.inc"
	.include "data/maps/AquaHideout_B2F/scripts.inc"
	.include "data/maps/Underwater_SeafloorCavern/scripts.inc"
	.include "data/maps/SeafloorCavern_Entrance/scripts.inc"
	.include "data/maps/SeafloorCavern_Room1/scripts.inc"
	.include "data/maps/SeafloorCavern_Room2/scripts.inc"
	.include "data/maps/SeafloorCavern_Room3/scripts.inc"
	.include "data/maps/SeafloorCavern_Room4/scripts.inc"
	.include "data/maps/SeafloorCavern_Room5/scripts.inc"
	.include "data/maps/SeafloorCavern_Room6/scripts.inc"
	.include "data/maps/SeafloorCavern_Room7/scripts.inc"
	.include "data/maps/SeafloorCavern_Room8/scripts.inc"
	.include "data/maps/SeafloorCavern_Room9/scripts.inc"
	.include "data/maps/CaveOfOrigin_Entrance/scripts.inc"
	.include "data/maps/CaveOfOrigin_1F/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap1/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap2/scripts.inc"
	.include "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.inc"
	.include "data/maps/CaveOfOrigin_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_1F/scripts.inc"
	.include "data/maps/VictoryRoad_B1F/scripts.inc"
	.include "data/maps/VictoryRoad_B2F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideInnerRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideStairsRoom/scripts.inc"
	.include "data/maps/ShoalCave_LowTideLowerRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideEntranceRoom/scripts.inc"
	.include "data/maps/ShoalCave_HighTideInnerRoom/scripts.inc"
	.include "data/maps/NewMauville_Entrance/scripts.inc"
	.include "data/maps/NewMauville_Inside/scripts.inc"
	.include "data/maps/AbandonedShip_Deck/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_1F/scripts.inc"
	.include "data/maps/AbandonedShip_Corridors_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater1/scripts.inc"
	.include "data/maps/AbandonedShip_Room_B1F/scripts.inc"
	.include "data/maps/AbandonedShip_Rooms2_1F/scripts.inc"
	.include "data/maps/AbandonedShip_CaptainsOffice/scripts.inc"
	.include "data/maps/AbandonedShip_Underwater2/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc"
	.include "data/maps/AbandonedShip_HiddenFloorRooms/scripts.inc"
	.include "data/maps/IslandCave/scripts.inc"
	.include "data/maps/AncientTomb/scripts.inc"
	.include "data/maps/Underwater_Route134/scripts.inc"
	.include "data/maps/Underwater_SealedChamber/scripts.inc"
	.include "data/maps/SealedChamber_OuterRoom/scripts.inc"
	.include "data/maps/SealedChamber_InnerRoom/scripts.inc"
	.include "data/maps/ScorchedSlab/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap1/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap2/scripts.inc"
	.include "data/maps/AquaHideout_UnusedRubyMap3/scripts.inc"
	.include "data/maps/SkyPillar_Entrance/scripts.inc"
	.include "data/maps/SkyPillar_Outside/scripts.inc"
	.include "data/maps/SkyPillar_1F/scripts.inc"
	.include "data/maps/SkyPillar_2F/scripts.inc"
	.include "data/maps/SkyPillar_3F/scripts.inc"
	.include "data/maps/SkyPillar_4F/scripts.inc"
	.include "data/maps/ShoalCave_LowTideIceRoom/scripts.inc"
	.include "data/maps/SkyPillar_5F/scripts.inc"
	.include "data/maps/SkyPillar_Top/scripts.inc"
	.include "data/maps/MagmaHideout_1F/scripts.inc"
	.include "data/maps/MagmaHideout_2F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_1R/scripts.inc"
	.include "data/maps/MagmaHideout_3F_2R/scripts.inc"
	.include "data/maps/MagmaHideout_4F/scripts.inc"
	.include "data/maps/MagmaHideout_3F_3R/scripts.inc"
	.include "data/maps/MagmaHideout_2F_3R/scripts.inc"
	.include "data/maps/MirageTower_1F/scripts.inc"
	.include "data/maps/MirageTower_2F/scripts.inc"
	.include "data/maps/MirageTower_3F/scripts.inc"
	.include "data/maps/MirageTower_4F/scripts.inc"
	.include "data/maps/DesertUnderpass/scripts.inc"
	.include "data/maps/ArtisanCave_B1F/scripts.inc"
	.include "data/maps/ArtisanCave_1F/scripts.inc"
	.include "data/maps/Underwater_MarineCave/scripts.inc"
	.include "data/maps/MarineCave_Entrance/scripts.inc"
	.include "data/maps/MarineCave_End/scripts.inc"
	.include "data/maps/TerraCave_Entrance/scripts.inc"
	.include "data/maps/TerraCave_End/scripts.inc"
	.include "data/maps/AlteringCave/scripts.inc"
	.include "data/maps/MeteorFalls_StevensCave/scripts.inc"
	.include "data/maps/SecretBase_BlueCave1/scripts.inc"
	.include "data/maps/SecretBase_BlueCave2/scripts.inc"
	.include "data/maps/SecretBase_BlueCave3/scripts.inc"
	.include "data/maps/SecretBase_BlueCave4/scripts.inc"
	.include "data/maps/SecretBase_BrownCave1/scripts.inc"
	.include "data/maps/SecretBase_BrownCave2/scripts.inc"
	.include "data/maps/SecretBase_BrownCave3/scripts.inc"
	.include "data/maps/SecretBase_BrownCave4/scripts.inc"
	.include "data/maps/SecretBase_RedCave1/scripts.inc"
	.include "data/maps/SecretBase_RedCave2/scripts.inc"
	.include "data/maps/SecretBase_RedCave3/scripts.inc"
	.include "data/maps/SecretBase_RedCave4/scripts.inc"
	.include "data/maps/SecretBase_Shrub1/scripts.inc"
	.include "data/maps/SecretBase_Shrub2/scripts.inc"
	.include "data/maps/SecretBase_Shrub3/scripts.inc"
	.include "data/maps/SecretBase_Shrub4/scripts.inc"
	.include "data/maps/SecretBase_Tree1/scripts.inc"
	.include "data/maps/SecretBase_Tree2/scripts.inc"
	.include "data/maps/SecretBase_Tree3/scripts.inc"
	.include "data/maps/SecretBase_Tree4/scripts.inc"
	.include "data/maps/SecretBase_YellowCave1/scripts.inc"
	.include "data/maps/SecretBase_YellowCave2/scripts.inc"
	.include "data/maps/SecretBase_YellowCave3/scripts.inc"
	.include "data/maps/SecretBase_YellowCave4/scripts.inc"

EventScript_SecretBasePC:: @ 823B4BB
	lockall
	playse SE_PC_LOGIN
	message Text_SecretBaseBootUpPC
	dofieldeffect FLDEFF_PCTURN_ON
	waitstate
	waitmessage
	waitbuttonpress
	playse SE_SELECT
	goto EventScript_SecretBasePCShowMainMenu
	end

EventScript_SecretBasePCShowMainMenu:: @ 823B4D3
	message Text_SecretBasePCStartMenu
	waitmessage
	goto_if_set FLAG_SECRET_BASE_REGISTRY_ENABLED, EventScript_SecretBasePCMainMenuChoice
	goto EventScript_23B531
	end

gUnknown_0823B4E8:: @ 823B4E8 ;EventScript_SecretBasePCCancel?
	lockall
	goto EventScript_SecretBasePCShowMainMenu
	end

EventScript_SecretBasePCMainMenuChoice:: @ 823B4EF
	multichoice 0, 0, 6, 0
	switch VAR_RESULT
	case 0, EventScript_23B581
	case 1, EventScript_23B568
	case 2, EventScript_23B585
	case 3, EventScript_23B66E
	case 127, EventScript_23B66E
	end

EventScript_23B531:: @ 823B531
	multichoice 0, 0, 5, 0
	switch VAR_RESULT
	case 0, EventScript_23B581
	case 1, EventScript_23B568
	case 2, EventScript_23B66E
	case 127, EventScript_23B66E
	end

EventScript_23B568:: @ 823B568
	msgbox Text_2766AA, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_SecretBasePCShowMainMenu
	closemessage
	special MoveOutOfSecretBase
	releaseall
	end

EventScript_23B581:: @ 823B581
	special ShowSecretBaseDecorationMenu
	end

EventScript_23B585:: @ 823B585
	special ShowSecretBaseRegistryMenu
	end

EventScript_RecordMixingSecretBasePC:: @ 823B589
	lockall
	message Text_SecretBaseBootUpPC
	playse SE_PC_LOGIN
	dofieldeffect FLDEFF_PCTURN_ON
	waitstate
	waitmessage
	waitbuttonpress
	playse SE_SELECT
	goto EventScript_23B5A1
	end

EventScript_23B5A1:: @ 823B5A1
	message Text_SecretBasePCStartMenu
	waitmessage
	multichoice 0, 0, 7, 0
	switch VAR_RESULT
	case 0, EventScript_23B5F0
	case 1, EventScript_23B585
	case 2, EventScript_23B660
	case 3, EventScript_23B66E
	case 127, EventScript_23B66E
	end

gUnknown_0823B5E9:: @ 823B5E9
	lockall
	goto EventScript_23B5A1
	end

EventScript_23B5F0:: @ 823B5F0
	special GetCurSecretBaseRegistrationValidity
	compare VAR_RESULT, 1
	goto_if_eq EventScript_23B62F
	compare VAR_RESULT, 2
	goto_if_eq EventScript_CantRegisterTooManyBases
	special CopyCurSecretBaseOwnerName_StrVar1
	msgbox Text_WantToRegisterSecretBase, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_23B5A1
	msgbox Text_2767D1, MSGBOX_SIGN
	special ToggleCurSecretBaseRegistry
	special DoSecretBasePCTurnOffEffect
	releaseall
	end

EventScript_23B62F:: @ 823B62F
	msgbox Text_276731, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_23B5A1
	msgbox Text_2767E9, MSGBOX_SIGN
	special ToggleCurSecretBaseRegistry
	special DoSecretBasePCTurnOffEffect
	releaseall
	end

EventScript_CantRegisterTooManyBases:: @ 823B652
	msgbox Text_TooManyBasesDeleteSome, MSGBOX_SIGN
	special DoSecretBasePCTurnOffEffect
	closemessage
	releaseall
	end

EventScript_23B660:: @ 823B660
	msgbox Text_276835, MSGBOX_DEFAULT
	goto EventScript_23B5A1
	end

EventScript_23B66E:: @ 823B66E
	special DoSecretBasePCTurnOffEffect
	closemessage
	releaseall
	end

EventScript_23B674:: @ 823B674
	special SetSecretBaseSecretsTvFlags_Poster
	end

EventScript_23B678:: @ 823B678
	special SetSecretBaseSecretsTvFlags_MiscFurnature
	end

EventScript_23B67C:: @ 823B67C
	special SetSecretBaseSecretsTvFlags_LargeDecorationSpot
	end

EventScript_23B680:: @ 823B680
	special SetSecretBaseSecretsTvFlags_SmallDecorationSpot
	end

EventScript_SecretBaseSandOrnament:: @ 823B684
	special SetSecretBaseSecretsTvFlags_SandOrnament
	dofieldeffect FLDEFF_SAND_PILLAR
	waitstate
	end

EventScript_SecretBaseShieldOrToyTV:: @ 823B68C
	special GetShieldToyTVDecorationInfo
	compare VAR_RESULT, 0
	goto_if_eq EventScript_23B6BC
	compare VAR_RESULT, 1
	goto_if_eq EventScript_23B6C5
	compare VAR_RESULT, 2
	goto_if_eq EventScript_23B6CE
	compare VAR_RESULT, 3
	goto_if_eq EventScript_23B6D7
	end

EventScript_23B6BC:: @ 823B6BC
	msgbox Text_27692B, MSGBOX_SIGN
	end

EventScript_23B6C5:: @ 823B6C5
	msgbox Text_276974, MSGBOX_SIGN
	end

EventScript_23B6CE:: @ 823B6CE
	msgbox Text_2769B8, MSGBOX_SIGN
	end

EventScript_23B6D7:: @ 823B6D7
	msgbox Text_2769FF, MSGBOX_SIGN
	end

gText_23B6E0:: @ 823B6E0
	.i18n 1

gText_23B704:: @ 823B704
	.i18n 2

gText_23B73E:: @ 823B73E
	.i18n 3

SecretBase_RedCave1_Text_23B759: @ 823B759
	.i18n 4

	.include "data/maps/SingleBattleColosseum/scripts.inc"
	.include "data/maps/TradeCenter/scripts.inc"
	.include "data/maps/RecordCorner/scripts.inc"
	.include "data/maps/DoubleBattleColosseum/scripts.inc"
	.include "data/maps/LinkContestRoom1/scripts.inc"
	.include "data/maps/UnknownLinkContestRoom_25_29/scripts.inc"
	.include "data/maps/UnknownLinkContestRoom_25_30/scripts.inc"
	.include "data/maps/UnknownLinkContestRoom_25_31/scripts.inc"
	.include "data/maps/UnknownLinkContestRoom_25_32/scripts.inc"
	.include "data/maps/UnknownLinkContestRoom_25_33/scripts.inc"
	.include "data/maps/UnknownLinkContestRoom_25_34/scripts.inc"
	.include "data/maps/LinkContestRoom2/scripts.inc"
	.include "data/maps/LinkContestRoom3/scripts.inc"
	.include "data/maps/LinkContestRoom4/scripts.inc"
	.include "data/maps/LinkContestRoom5/scripts.inc"
	.include "data/maps/LinkContestRoom6/scripts.inc"
	.include "data/maps/InsideOfTruck/scripts.inc"
	.include "data/maps/SSTidalCorridor/scripts.inc"
	.include "data/maps/SSTidalLowerDeck/scripts.inc"
	.include "data/maps/SSTidalRooms/scripts.inc"
	.include "data/maps/BattlePyramidSquare01/scripts.inc"
	.include "data/maps/BattlePyramidSquare02/scripts.inc"
	.include "data/maps/BattlePyramidSquare03/scripts.inc"
	.include "data/maps/BattlePyramidSquare04/scripts.inc"
	.include "data/maps/BattlePyramidSquare05/scripts.inc"
	.include "data/maps/BattlePyramidSquare06/scripts.inc"
	.include "data/maps/BattlePyramidSquare07/scripts.inc"
	.include "data/maps/BattlePyramidSquare08/scripts.inc"
	.include "data/maps/BattlePyramidSquare09/scripts.inc"
	.include "data/maps/BattlePyramidSquare10/scripts.inc"
	.include "data/maps/BattlePyramidSquare11/scripts.inc"
	.include "data/maps/BattlePyramidSquare12/scripts.inc"
	.include "data/maps/BattlePyramidSquare13/scripts.inc"
	.include "data/maps/BattlePyramidSquare14/scripts.inc"
	.include "data/maps/BattlePyramidSquare15/scripts.inc"
	.include "data/maps/BattlePyramidSquare16/scripts.inc"
	.include "data/maps/UnionRoom/scripts.inc"
	.include "data/maps/SafariZone_Northwest/scripts.inc"
	.include "data/maps/SafariZone_North/scripts.inc"
	.include "data/maps/SafariZone_Southwest/scripts.inc"
	.include "data/maps/SafariZone_South/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideWest/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerElevator/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc"
	.include "data/maps/SouthernIsland_Exterior/scripts.inc"
	.include "data/maps/SouthernIsland_Interior/scripts.inc"
	.include "data/maps/SafariZone_RestHouse/scripts.inc"
	.include "data/maps/SafariZone_Northeast/scripts.inc"
	.include "data/maps/SafariZone_Southeast/scripts.inc"
	.include "data/maps/BattleFrontier_OutsideEast/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerCorridor2/scripts.inc"
	.include "data/maps/BattleFrontier_BattleTowerBattleRoom2/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidEmptySquare/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePyramidTop/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeLobby/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeCorridor/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRandomRoom1/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRandomRoom2/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePikeRandomRoom3/scripts.inc"
	.include "data/maps/BattleFrontier_RankingHall/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge1/scripts.inc"
	.include "data/maps/BattleFrontier_BattlePointExchangeServiceCorner/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge2/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge3/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge4/scripts.inc"
	.include "data/maps/BattleFrontier_ScottsHouse/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge5/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge6/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge7/scripts.inc"
	.include "data/maps/BattleFrontier_ReceptionGate/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge8/scripts.inc"
	.include "data/maps/BattleFrontier_Lounge9/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_1F/scripts.inc"
	.include "data/maps/BattleFrontier_PokemonCenter_2F/scripts.inc"
	.include "data/maps/BattleFrontier_Mart/scripts.inc"
	.include "data/maps/FarawayIsland_Entrance/scripts.inc"
	.include "data/maps/FarawayIsland_Interior/scripts.inc"
	.include "data/maps/BirthIsland_Exterior/scripts.inc"
	.include "data/maps/BirthIsland_Harbor/scripts.inc"
	.include "data/maps/TrainerHill_Entrance/scripts.inc"
	.include "data/maps/TrainerHill_1F/scripts.inc"
	.include "data/maps/TrainerHill_2F/scripts.inc"
	.include "data/maps/TrainerHill_3F/scripts.inc"
	.include "data/maps/TrainerHill_4F/scripts.inc"
	.include "data/maps/TrainerHill_Roof/scripts.inc"
	.include "data/maps/NavelRock_Exterior/scripts.inc"
	.include "data/maps/NavelRock_Harbor/scripts.inc"
	.include "data/maps/NavelRock_Entrance/scripts.inc"
	.include "data/maps/NavelRock_B1F/scripts.inc"
	.include "data/maps/NavelRock_Fork/scripts.inc"
	.include "data/maps/NavelRock_Up1/scripts.inc"
	.include "data/maps/NavelRock_Up2/scripts.inc"
	.include "data/maps/NavelRock_Up3/scripts.inc"
	.include "data/maps/NavelRock_Up4/scripts.inc"
	.include "data/maps/NavelRock_Top/scripts.inc"
	.include "data/maps/NavelRock_Down01/scripts.inc"
	.include "data/maps/NavelRock_Down02/scripts.inc"
	.include "data/maps/NavelRock_Down03/scripts.inc"
	.include "data/maps/NavelRock_Down04/scripts.inc"
	.include "data/maps/NavelRock_Down05/scripts.inc"
	.include "data/maps/NavelRock_Down06/scripts.inc"
	.include "data/maps/NavelRock_Down07/scripts.inc"
	.include "data/maps/NavelRock_Down08/scripts.inc"
	.include "data/maps/NavelRock_Down09/scripts.inc"
	.include "data/maps/NavelRock_Down10/scripts.inc"
	.include "data/maps/NavelRock_Down11/scripts.inc"
	.include "data/maps/NavelRock_Bottom/scripts.inc"
	.include "data/maps/TrainerHill_Elevator/scripts.inc"
	.include "data/maps/Route104_Prototype/scripts.inc"
	.include "data/maps/Route104_PrototypePrettyPetalFlowerShop/scripts.inc"
	.include "data/maps/Route109_SeashoreHouse/scripts.inc"
	.include "data/maps/Route110_TrickHouseEntrance/scripts.inc"
	.include "data/maps/Route110_TrickHouseEnd/scripts.inc"
	.include "data/maps/Route110_TrickHouseCorridor/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle1/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle2/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle3/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle4/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle5/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle6/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle7/scripts.inc"
	.include "data/maps/Route110_TrickHousePuzzle8/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.inc"
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.inc"
	.include "data/maps/Route113_GlassWorkshop/scripts.inc"
	.include "data/maps/Route123_BerryMastersHouse/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_1F/scripts.inc"
	.include "data/maps/Route119_WeatherInstitute_2F/scripts.inc"
	.include "data/maps/Route119_House/scripts.inc"
	.include "data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc"

Std_MsgboxNPC: @ 8271315
	lock
	faceplayer
	message 0x0
	waitmessage
	waitbuttonpress
	release
	return

Std_MsgboxSign: @ 8271320
	lockall
	message 0x0
	waitmessage
	waitbuttonpress
	releaseall
	return

Std_MsgboxDefault: @ 827132A
	message 0x0
	waitmessage
	waitbuttonpress
	return

Std_MsgboxYesNo: @ 8271332
	message 0x0
	waitmessage
	yesnobox 20, 8
	return

Std_9: @ 827133C
	message 0x0
	playfanfare MUS_ME_POINTGET
	waitfanfare
	waitmessage
	return

Std_10: @ 8271347
	pokenavcall 0x0
	waitmessage
	return

EventScript_UnusedReturn: @ 827134E
	return

Common_EventScript_SaveGame:: @ 827134F
	special SaveGame
	waitstate
	return

EventScript_271354:: @ 8271354
	cmdD8
	cmdD9

	.include "data/scripts/trainer_battle.inc"

Std_MsgboxAutoclose:: @ 8271494
	message 0x0
	waitmessage
	waitbuttonpress
	release
	return

EventScript_ResetAllBerries:: @ 827149D
	setberrytree 2, ITEM_TO_BERRY(ITEM_ORAN_BERRY), 5
	setberrytree 1, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 11, ITEM_TO_BERRY(ITEM_ORAN_BERRY), 5
	setberrytree 13, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 4, ITEM_TO_BERRY(ITEM_ORAN_BERRY), 5
	setberrytree 76, ITEM_TO_BERRY(ITEM_CHERI_BERRY), 5
	setberrytree 8, ITEM_TO_BERRY(ITEM_CHERI_BERRY), 5
	setberrytree 10, ITEM_TO_BERRY(ITEM_LEPPA_BERRY), 5
	setberrytree 25, ITEM_TO_BERRY(ITEM_PINAP_BERRY), 5
	setberrytree 26, ITEM_TO_BERRY(ITEM_CHESTO_BERRY), 5
	setberrytree 66, ITEM_TO_BERRY(ITEM_CHESTO_BERRY), 5
	setberrytree 67, ITEM_TO_BERRY(ITEM_PINAP_BERRY), 5
	setberrytree 69, ITEM_TO_BERRY(ITEM_KELPSY_BERRY), 5
	setberrytree 70, ITEM_TO_BERRY(ITEM_KELPSY_BERRY), 5
	setberrytree 71, ITEM_TO_BERRY(ITEM_KELPSY_BERRY), 5
	setberrytree 55, ITEM_TO_BERRY(ITEM_BLUK_BERRY), 5
	setberrytree 56, ITEM_TO_BERRY(ITEM_BLUK_BERRY), 5
	setberrytree 5, ITEM_TO_BERRY(ITEM_CHERI_BERRY), 5
	setberrytree 6, ITEM_TO_BERRY(ITEM_LEPPA_BERRY), 5
	setberrytree 7, ITEM_TO_BERRY(ITEM_CHERI_BERRY), 5
	setberrytree 16, ITEM_TO_BERRY(ITEM_NANAB_BERRY), 5
	setberrytree 17, ITEM_TO_BERRY(ITEM_NANAB_BERRY), 5
	setberrytree 18, ITEM_TO_BERRY(ITEM_NANAB_BERRY), 5
	setberrytree 29, ITEM_TO_BERRY(ITEM_WEPEAR_BERRY), 5
	setberrytree 28, ITEM_TO_BERRY(ITEM_WEPEAR_BERRY), 5
	setberrytree 27, ITEM_TO_BERRY(ITEM_WEPEAR_BERRY), 5
	setberrytree 24, ITEM_TO_BERRY(ITEM_RAWST_BERRY), 5
	setberrytree 23, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 22, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 21, ITEM_TO_BERRY(ITEM_RAWST_BERRY), 5
	setberrytree 19, ITEM_TO_BERRY(ITEM_RAZZ_BERRY), 5
	setberrytree 20, ITEM_TO_BERRY(ITEM_RAZZ_BERRY), 5
	setberrytree 80, ITEM_TO_BERRY(ITEM_ORAN_BERRY), 5
	setberrytree 81, ITEM_TO_BERRY(ITEM_ORAN_BERRY), 5
	setberrytree 77, ITEM_TO_BERRY(ITEM_PERSIM_BERRY), 5
	setberrytree 78, ITEM_TO_BERRY(ITEM_PERSIM_BERRY), 5
	setberrytree 68, ITEM_TO_BERRY(ITEM_PERSIM_BERRY), 5
	setberrytree 31, ITEM_TO_BERRY(ITEM_SITRUS_BERRY), 5
	setberrytree 33, ITEM_TO_BERRY(ITEM_SITRUS_BERRY), 5
	setberrytree 34, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 35, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 36, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 83, ITEM_TO_BERRY(ITEM_HONDEW_BERRY), 5
	setberrytree 84, ITEM_TO_BERRY(ITEM_HONDEW_BERRY), 5
	setberrytree 85, ITEM_TO_BERRY(ITEM_SITRUS_BERRY), 5
	setberrytree 86, ITEM_TO_BERRY(ITEM_LEPPA_BERRY), 5
	setberrytree 37, ITEM_TO_BERRY(ITEM_ASPEAR_BERRY), 5
	setberrytree 38, ITEM_TO_BERRY(ITEM_ASPEAR_BERRY), 5
	setberrytree 39, ITEM_TO_BERRY(ITEM_ASPEAR_BERRY), 5
	setberrytree 40, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 41, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 42, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 46, ITEM_TO_BERRY(ITEM_WEPEAR_BERRY), 5
	setberrytree 45, ITEM_TO_BERRY(ITEM_PINAP_BERRY), 5
	setberrytree 44, ITEM_TO_BERRY(ITEM_NANAB_BERRY), 5
	setberrytree 43, ITEM_TO_BERRY(ITEM_RAZZ_BERRY), 5
	setberrytree 47, ITEM_TO_BERRY(ITEM_PERSIM_BERRY), 5
	setberrytree 48, ITEM_TO_BERRY(ITEM_ASPEAR_BERRY), 5
	setberrytree 49, ITEM_TO_BERRY(ITEM_RAWST_BERRY), 5
	setberrytree 50, ITEM_TO_BERRY(ITEM_CHESTO_BERRY), 5
	setberrytree 52, ITEM_TO_BERRY(ITEM_NANAB_BERRY), 5
	setberrytree 53, ITEM_TO_BERRY(ITEM_NANAB_BERRY), 5
	setberrytree 62, ITEM_TO_BERRY(ITEM_LEPPA_BERRY), 5
	setberrytree 64, ITEM_TO_BERRY(ITEM_LEPPA_BERRY), 5
	setberrytree 58, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 59, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 60, ITEM_TO_BERRY(ITEM_GREPA_BERRY), 5
	setberrytree 61, ITEM_TO_BERRY(ITEM_GREPA_BERRY), 5
	setberrytree 79, ITEM_TO_BERRY(ITEM_QUALOT_BERRY), 5
	setberrytree 14, ITEM_TO_BERRY(ITEM_QUALOT_BERRY), 5
	setberrytree 15, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 30, ITEM_TO_BERRY(ITEM_POMEG_BERRY), 5
	setberrytree 65, ITEM_TO_BERRY(ITEM_GREPA_BERRY), 5
	setberrytree 72, ITEM_TO_BERRY(ITEM_GREPA_BERRY), 5
	setberrytree 73, ITEM_TO_BERRY(ITEM_QUALOT_BERRY), 5
	setberrytree 74, ITEM_TO_BERRY(ITEM_QUALOT_BERRY), 5
	setberrytree 87, ITEM_TO_BERRY(ITEM_PECHA_BERRY), 5
	setberrytree 88, ITEM_TO_BERRY(ITEM_SITRUS_BERRY), 5
	setberrytree 89, ITEM_TO_BERRY(ITEM_RAWST_BERRY), 5
	setberrytree 82, ITEM_TO_BERRY(ITEM_LIECHI_BERRY), 5
	return

EventScript_ResetAllMapFlags:: @ 82715DE
	setflag FLAG_LINK_CONTEST_POKE_BALL
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
	setflag FLAG_UNKNOWN_0x363
	setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
	setflag FLAG_HIDE_RUSBORO_CITY_RIVAL
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_108_MR_BRINEY
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	setflag FLAG_HIDE_ROUTE_110_BIRCH
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_UNCLE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	setflag FLAG_HIDE_FANCLUB_OLD_LADY
	setflag FLAG_HIDE_FANCLUB_BOY
	setflag FLAG_HIDE_FANCLUB_LITTLE_BOY
	setflag FLAG_HIDE_FANCLUB_LADY
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_LOVER_MAN
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_LOVER_WOMAN
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_UNCLE
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
	setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_1
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_1
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
	setflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
	setflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
	setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
	setflag FLAG_HIDE_ROUTE_119_RIVAL
	setflag FLAG_HIDE_ROUTE_119_SCOTT
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	setflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	setflag FLAG_HIDE_RUSTURF_TUNNEL_OLD_MAN
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
	setflag FLAG_HIDE_RUSTURF_TUNNEL_LOVER_MAN
	setflag FLAG_HIDE_RUSTURF_TUNNEL_LOVER_WOMAN
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
	setflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setflag FLAG_HIDE_LITTLE_ROOT_TOWN_PLAYERS_BEDROOM_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	setflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_ROUTE_103_BIRCH
	setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
	setflag FLAG_HIDE_LILYCOVE_HARBOR_EON_TICKET_TAKER
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE
	setflag FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON
	setflag FLAG_UNKNOWN_0x393
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_SCOTT
	setflag FLAG_HIDE_CHAMPIONS_ROOM_RIVAL
	setflag FLAG_HIDE_CHAMPIONS_ROOM_BIRCH
	setflag FLAG_HIDE_ROUTE_110_RIVAL_2
	setflag FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE
	setflag FLAG_HIDE_ROUTE_104_RIVAL
	setflag FLAG_HIDE_LILCOVE_MOTEL_GAME_DESIGNERS
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_1
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_2
	setflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
	setflag FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
	setflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
	setflag FLAG_HIDE_FALLARBOR_HOUSE_1_PROF_COZMO
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	setflag FLAG_HIDE_ROUTE_128_STEVEN
	setflag FLAG_HIDE_ROUTE_128_ARCHIE
	setflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	setflag FLAG_HIDE_SLATEPORT_CITY_SCOTT
	setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	setflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	setflag FLAG_HIDE_ROUTE_101_BOY
	setflag FLAG_HIDE_PETALBURG_CITY_SCOTT
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	setflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
	setflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
	setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_ONLOOKERS
	setflag FLAG_HIDE_DEOXYS
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
	setflag FLAG_HIDE_FALLORBOR_TOWN_BATTLE_TENT_SCOTT
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	setflag FLAG_HIDE_SKY_PILLAR_WALLACE
	setflag FLAG_RAYQUAZA_ON_SKY_TOWER_SUMMIT
	call EventScript_ResetAllBerries
	end

EverGrandeCity_HallOfFame_EventScript_2717C1:: @ 82717C1
	special sub_81AFDD0
	setflag FLAG_IS_CHAMPION
	call EverGrandeCity_HallOfFame_EventScript_ResetDefeatedEventLegendaries
	compare VAR_FOSSIL_MANIAC_STATE, 0
	call_if_eq EverGrandeCity_HallOfFame_EventScript_271839
	clearflag FLAG_HIDE_LILCOVE_MOTEL_GAME_DESIGNERS
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
	setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	clearflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	clearflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
	clearflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
	clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
	special sub_813BA60
	call_if_unset FLAG_RECEIVED_SS_TICKET, EverGrandeCity_HallOfFame_EventScript_271843
	call_if_unset FLAG_RECEIVED_BELDUM, EverGrandeCity_HallOfFame_EventScript_27183F
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 0
	call_if_eq EverGrandeCity_HallOfFame_EventScript_271851
	return

EverGrandeCity_HallOfFame_EventScript_ResetDefeatedEventLegendaries:: @ 8271829
	clearflag FLAG_DEFEATED_MEW
	clearflag FLAG_DEFEATED_LATIAS_OR_LATIOS
	clearflag FLAG_DEFEATED_DEOXYS
	clearflag FLAG_DEFEATED_LUGIA
	clearflag FLAG_DEFEATED_HO_OH
	return

EverGrandeCity_HallOfFame_EventScript_271839:: @ 8271839
	setvar VAR_FOSSIL_MANIAC_STATE, 1
	return

EverGrandeCity_HallOfFame_EventScript_27183F:: @ 827183F
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
	return

EverGrandeCity_HallOfFame_EventScript_271843:: @ 8271843
	setvar VAR_LITTLEROOT_HOUSES_STATE, 3
	setvar VAR_LITTLEROOT_HOUSES_STATE_2, 3
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	return

EverGrandeCity_HallOfFame_EventScript_271851:: @ 8271851
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	return

EventScript_WhiteOut:: @ 8271857
	call EverGrandeCity_HallOfFame_EventScript_ResetEliteFour
	goto EventScript_ResetMrBriney
	end

EventScript_ResetMrBriney:: @ 8271862
	compare VAR_BRINEY_LOCATION, 1
	goto_if_eq EventScript_MoveMrBrineyToHouse
	compare VAR_BRINEY_LOCATION, 2
	goto_if_eq EventScript_MoveMrBrineyToDewford
	compare VAR_BRINEY_LOCATION, 3
	goto_if_eq EventScript_MoveMrBrineyToRoute108
	end

EventScript_MoveMrBrineyToHouse:: @ 8271884
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_108_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	end

EventScript_MoveMrBrineyToDewford:: @ 827189A
	setflag FLAG_HIDE_ROUTE_108_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	end

EventScript_MoveMrBrineyToRoute108:: @ 82718B3
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	clearflag FLAG_HIDE_ROUTE_108_MR_BRINEY
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	end

EverGrandeCity_HallOfFame_EventScript_ResetEliteFour:: @ 82718CC
	clearflag FLAG_DEFEATED_ELITE_4_SIDNEY
	clearflag FLAG_DEFEATED_ELITE_4_PHOEBE
	clearflag FLAG_DEFEATED_ELITE_4_GLACIA
	clearflag FLAG_DEFEATED_ELITE_4_DRAKE
	setvar VAR_ELITE_4_STATE, 0
	return

DewfordTown_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
FallarborTown_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
LavaridgeTown_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
MauvilleCity_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
OldaleTown_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
PetalburgCity_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
RustboroCity_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
SlateportCity_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
VerdanturfTown_PokemonCenter_1F_EventScript_2718DE:: @ 82718DE
	goto_if_unset FLAG_RECEIVED_POKENAV, Common_EventScript_NopReturn
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, Common_EventScript_NopReturn
	goto_if_unset FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT, OldaleTown_PokemonCenter_1F_EventScript_27190C
	goto_if_unset FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN, OldaleTown_PokemonCenter_1F_EventScript_271912
	goto_if_unset FLAG_HIDE_ROUTE_108_MR_BRINEY, OldaleTown_PokemonCenter_1F_EventScript_271918
	return

OldaleTown_PokemonCenter_1F_EventScript_27190C:: @ 827190C
	setvar VAR_BRINEY_LOCATION, 1
	return

OldaleTown_PokemonCenter_1F_EventScript_271912:: @ 8271912
	setvar VAR_BRINEY_LOCATION, 2
	return

OldaleTown_PokemonCenter_1F_EventScript_271918:: @ 8271918
	setvar VAR_BRINEY_LOCATION, 3
	return

BattleFrontier_PokemonCenter_1F_EventScript_27191E:: @ 827191E
DewfordTown_PokemonCenter_1F_EventScript_27191E:: @ 827191E
EverGrandeCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
EverGrandeCity_PokemonLeague_1F_EventScript_27191E:: @ 827191E
FallarborTown_PokemonCenter_1F_EventScript_27191E:: @ 827191E
FortreeCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
LavaridgeTown_PokemonCenter_1F_EventScript_27191E:: @ 827191E
LilycoveCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
MauvilleCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
MossdeepCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
OldaleTown_PokemonCenter_1F_EventScript_27191E:: @ 827191E
PacifidlogTown_PokemonCenter_1F_EventScript_27191E:: @ 827191E
PetalburgCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
RustboroCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
SlateportCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
SootopolisCity_PokemonCenter_1F_EventScript_27191E:: @ 827191E
TrainerHill_Entrance_EventScript_27191E:: @ 827191E
VerdanturfTown_PokemonCenter_1F_EventScript_27191E:: @ 827191E
	lock
	faceplayer
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, CountPlayerTrainerStars
	compare VAR_RESULT, 4
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_271A68
	msgbox gUnknown_082726EB, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_27195A
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_271954
	end

OldaleTown_PokemonCenter_1F_EventScript_271954:: @ 8271954
	message gUnknown_082727DB
	return

OldaleTown_PokemonCenter_1F_EventScript_27195A:: @ 827195A
	incrementgamestat 15
	compare VAR_0x8004, 0
	call_if_eq OldaleTown_PokemonCenter_1F_EventScript_271987
	compare VAR_0x8004, 1
	call_if_eq OldaleTown_PokemonCenter_1F_EventScript_27198D
	waitmessage
	call OldaleTown_PokemonCenter_1F_EventScript_271993
	goto_if_unset FLAG_POKERUS_EXPLAINED, OldaleTown_PokemonCenter_1F_EventScript_271A43
	goto OldaleTown_PokemonCenter_1F_EventScript_2719B1
	end

OldaleTown_PokemonCenter_1F_EventScript_271987:: @ 8271987
	message gUnknown_08272768
	return

OldaleTown_PokemonCenter_1F_EventScript_27198D:: @ 827198D
	message gUnknown_082729C0
	return

OldaleTown_PokemonCenter_1F_EventScript_271993:: @ 8271993
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceDown
	waitmovement 0
	special HealPlayerParty
	return

OldaleTown_PokemonCenter_1F_EventScript_2719B1:: @ 82719B1
	specialvar VAR_RESULT, sub_8139ED0
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_2719E2
	specialvar VAR_RESULT, sp182_move_string
	copyvar VAR_0x8008, VAR_RESULT
	compare VAR_0x8008, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_2719E2
	compare VAR_0x8008, 1
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_271A19
	end

OldaleTown_PokemonCenter_1F_EventScript_2719E2:: @ 82719E2
	compare VAR_0x8004, 1
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_271A03
	message gUnknown_08272798
	waitmessage
	applymovement VAR_0x800B, OldaleTown_PokemonCenter_1F_Movement_271AD0
	waitmovement 0
	message gUnknown_082727DB
	return

OldaleTown_PokemonCenter_1F_EventScript_271A03:: @ 8271A03
	message gUnknown_082729F0
	waitmessage
	applymovement VAR_0x800B, OldaleTown_PokemonCenter_1F_Movement_271AD0
	waitmovement 0
	message gUnknown_08272A07
	return

OldaleTown_PokemonCenter_1F_EventScript_271A19:: @ 8271A19
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, OldaleTown_PokemonCenter_1F_EventScript_2719E2
	msgbox gUnknown_08272798, MSGBOX_DEFAULT
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
	message OldaleTown_PokemonCenter_1F_Text_278A48
	waitmessage
	applymovement VAR_0x800B, OldaleTown_PokemonCenter_1F_Movement_271AD0
	waitmovement 0
	message gUnknown_082727DB
	return

OldaleTown_PokemonCenter_1F_EventScript_271A43:: @ 8271A43
	specialvar VAR_RESULT, IsPokerusInParty
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_Explain_Pokerus
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_2719B1
	end

OldaleTown_PokemonCenter_1F_EventScript_Explain_Pokerus:: @ 8271A5F
	message gText_PokerusExplanation
	setflag FLAG_POKERUS_EXPLAINED
	return

OldaleTown_PokemonCenter_1F_EventScript_271A68:: @ 8271A68
	goto_if_set FLAG_OLDALE_NURSE_MENTIONS_GOLD_CARD, OldaleTown_PokemonCenter_1F_EventScript_271AAC
	setflag FLAG_OLDALE_NURSE_MENTIONS_GOLD_CARD
	msgbox gUnknown_082727F5, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x800B, Common_Movement_Delay48
	waitmovement 0
	msgbox gUnknown_08272860, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_271AC5
	message gUnknown_08272A07
	return

OldaleTown_PokemonCenter_1F_EventScript_271AAC:: @ 8271AAC
	msgbox gUnknown_08272982, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq OldaleTown_PokemonCenter_1F_EventScript_271AC5
	message gUnknown_08272A07
	return

OldaleTown_PokemonCenter_1F_EventScript_271AC5:: @ 8271AC5
	setvar VAR_0x8004, 1
	goto OldaleTown_PokemonCenter_1F_EventScript_27195A
	end

OldaleTown_PokemonCenter_1F_Movement_271AD0: @ 8271AD0
	nurse_joy_bow
	delay_4
	step_end

Std_ObtainItem:: @ 8271AD3
	giveitem VAR_0x8000, VAR_0x8001
	copyvar VAR_0x8007, VAR_RESULT
	call EventScript_271AE3
	return

EventScript_271AE3:: @ 8271AE3
	bufferitemnameplural 1, VAR_0x8000, VAR_0x8001
	checkitemtype VAR_0x8000
	call EventScript_271B08
	compare VAR_0x8007, 1
	call_if_eq EventScript_271B95
	compare VAR_0x8007, 0
	call_if_eq EventScript_271BA9
	return

EventScript_271B08:: @ 8271B08
	switch VAR_RESULT
	case 1, EventScript_271B45
	case 5, EventScript_271B55
	case 2, EventScript_271B65
	case 3, EventScript_271B75
	case 4, EventScript_271B85
	end

EventScript_271B45:: @ 8271B45
	bufferstdstring 2, 14
	compare VAR_0x8007, 1
	call_if_eq EventScript_271BAF
	return

EventScript_271B55:: @ 8271B55
	bufferstdstring 2, 15
	compare VAR_0x8007, 1
	call_if_eq EventScript_271BAF
	return

EventScript_271B65:: @ 8271B65
	bufferstdstring 2, 16
	compare VAR_0x8007, 1
	call_if_eq EventScript_271BAF
	return

EventScript_271B75:: @ 8271B75
	bufferstdstring 2, 17
	compare VAR_0x8007, 1
	call_if_eq EventScript_271BB3
	return

EventScript_271B85:: @ 8271B85
	bufferstdstring 2, 18
	compare VAR_0x8007, 1
	call_if_eq EventScript_271BAF
	return

EventScript_271B95:: @ 8271B95
	message gUnknown_08272A78
	waitfanfare
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	setvar VAR_RESULT, 1
	return

EventScript_271BA9:: @ 8271BA9
	setvar VAR_RESULT, 0
	return

EventScript_271BAF:: @ 8271BAF
	playfanfare MUS_FANFA4
	return

EventScript_271BB3:: @ 8271BB3
	playfanfare MUS_ME_WAZA
	return

Std_ObtainDecoration:: @ 8271BB7
	givedecoration VAR_0x8000
	copyvar VAR_0x8007, VAR_RESULT
	call EventScript_271BC5
	return

EventScript_271BC5:: @ 8271BC5
	bufferdecorationname 1, VAR_0x8000
	compare VAR_0x8007, 1
	call_if_eq EventScript_271BE0
	compare VAR_0x8007, 0
	call_if_eq EventScript_271BF7
	return

EventScript_271BE0:: @ 8271BE0
	playfanfare MUS_FANFA4
	message gUnknown_08272B09
	waitfanfare
	msgbox gUnknown_08272B48, MSGBOX_DEFAULT
	setvar VAR_RESULT, 1
	return

EventScript_271BF7:: @ 8271BF7
	setvar VAR_RESULT, 0
	return

Std_FindItem:: @ 8271BFD
	lock
	faceplayer
	waitse
	copyvar VAR_0x8004, VAR_0x8000
	copyvar VAR_0x8005, VAR_0x8001
	checkitemspace VAR_0x8000, VAR_0x8001
	copyvar VAR_0x8007, VAR_RESULT
	bufferitemnameplural 1, VAR_0x8000, VAR_0x8001
	checkitemtype VAR_0x8000
	call EventScript_271B08
	compare VAR_0x8007, 1
	call_if_eq EventScript_PickItemUp
	compare VAR_0x8007, 0
	call_if_eq EventScript_271CA1
	release
	return

EventScript_PickItemUp:: @ 8271C3A
	removeobject VAR_LAST_TALKED
	giveitem VAR_0x8004, VAR_0x8005
	specialvar VAR_RESULT, sub_81398C0
	copyvar VAR_0x8008, VAR_RESULT
	compare VAR_0x8008, 1
	call_if_eq EventScript_271C8F
	compare VAR_0x8008, 0
	call_if_eq EventScript_271C9B
	waitfanfare
	waitmessage
	bufferitemnameplural 1, VAR_0x8004, VAR_0x8005
	setvar VAR_0x8004, 12
	special CallBattlePyramidFunction
	compare VAR_RESULT, 1
	goto_if_eq EventScript_271C86
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	return

EventScript_271C86:: @ 8271C86
	msgbox gText_PlayerPutItemInBag, MSGBOX_DEFAULT
	return

EventScript_271C8F:: @ 8271C8F
	bufferitemnameplural 0, VAR_0x8004, VAR_0x8005
	message gText_PlayerFoundOneItemTwoLines
	return

EventScript_271C9B:: @ 8271C9B
	message gText_PlayerFoundOneItem
	return

EventScript_271CA1:: @ 8271CA1
	msgbox gUnknown_08272A78, MSGBOX_DEFAULT
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	return

EventScript_HiddenItemScript:: @ 8271CB7
	lockall
	waitse
	giveitem VAR_0x8005, 1
	copyvar VAR_0x8007, VAR_RESULT
	bufferitemnameplural 1, VAR_0x8005, 1
	checkitemtype VAR_0x8005
	call EventScript_271B08
	compare VAR_0x8007, 1
	goto_if_eq EventScript_271CE8
	compare VAR_0x8007, 0
	goto_if_eq EventScript_271D47
	end

EventScript_271CE8:: @ 8271CE8
	copyvar VAR_0x8008, VAR_0x8004
	copyvar VAR_0x8004, VAR_0x8005
	specialvar VAR_RESULT, sub_81398C0
	compare VAR_RESULT, 1
	goto_if_eq EventScript_271D0E
	compare VAR_RESULT, 0
	goto_if_eq EventScript_271D1F
	end

EventScript_271D0E:: @ 8271D0E
	bufferitemnameplural 0, VAR_0x8004, 1
	message gText_PlayerFoundOneItemTwoLines
	goto EventScript_271D2A
	end

EventScript_271D1F:: @ 8271D1F
	message gText_PlayerFoundOneItem
	goto EventScript_271D2A
	end

EventScript_271D2A:: @ 8271D2A
	waitmessage
	waitfanfare
	bufferitemnameplural 1, VAR_0x8004, 1
	copyvar VAR_0x8004, VAR_0x8008
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	special sub_80EDCE8
	special SetFlagInVar
	releaseall
	end

EventScript_271D47:: @ 8271D47
	msgbox gText_PlayerFoundOneItem, MSGBOX_DEFAULT
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	setvar VAR_RESULT, 0
	releaseall
	end

EventScript_271D5E:: @ 8271D5E
	lock
	faceplayer
	msgbox Text_WouldYouLikeToMixRecords, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq EventScript_271D83
	compare VAR_RESULT, 0
	goto_if_eq EventScript_271D89
	goto EventScript_271D89

EventScript_271D83:: @ 8271D83
	special RecordMixingPlayerSpotTriggered
	waitstate
	lock
	faceplayer

EventScript_271D89:: @ 8271D89
	message Text_WouldNotLikeToMixRecords
	waitmessage
	waitbuttonpress
	release
	end

EventScript_PC:: @ 8271D92
	lockall
	setvar VAR_0x8004, 0
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox Text_BootUpPC, MSGBOX_DEFAULT
	goto EventScript_271DAC
	end

EventScript_271DAC:: @ 8271DAC
	message gText_WhichPCShouldBeAccessed
	waitmessage
	special ScrSpecial_CreatePCMenu
	waitstate
	goto EventScript_271DBC
	end

EventScript_271DBC:: @ 8271DBC
	switch VAR_RESULT
	case 0, EventScript_271E0E
	case 1, EventScript_271DF9
	case 2, EventScript_271E54
	case 3, EventScript_271E47
	case 127, EventScript_271E47
	end

EventScript_271DF9:: @ 8271DF9
	playse SE_PC_LOGIN
	msgbox gText_AccessedPlayersPC, MSGBOX_DEFAULT
	special PlayerPC
	waitstate
	goto EventScript_271DAC
	end

EventScript_271E0E:: @ 8271E0E
	playse SE_PC_LOGIN
	call_if_unset FLAG_SYS_PC_LANETTE, EventScript_271E35
	call_if_set FLAG_SYS_PC_LANETTE, EventScript_271E3E
	msgbox gText_StorageSystemOpened, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	goto EventScript_271DAC
	end

EventScript_271E35:: @ 8271E35
	msgbox gText_AccessedSomeonesPC, MSGBOX_DEFAULT
	return

EventScript_271E3E:: @ 8271E3E
	msgbox gText_AccessedLanettesPC, MSGBOX_DEFAULT
	return

EventScript_271E47:: @ 8271E47
	setvar VAR_0x8004, 0
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

EventScript_271E54:: @ 8271E54
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_271E47
	playse SE_PC_LOGIN
	special AccessHallOfFamePC
	waitstate
	goto EventScript_271DBC
	end

Common_EventScript_ShowPokemartSign:: @ 8271E6A
	msgbox gText_PokemartSign, MSGBOX_SIGN
	end

Common_EventScript_ShowPokemonCenterSign:: @ 8271E73
	msgbox gText_PokemonCenterSign, MSGBOX_SIGN
	end

Common_ShowEasyChatScreen:: @ 8271E7C
	fadescreen 1
	special ShowEasyChatScreen
	fadescreen 0
	return

DewfordTown_Gym_EventScript_271E84:: @ 8271E84
LavaridgeTown_Gym_1F_EventScript_271E84:: @ 8271E84
MauvilleCity_Gym_EventScript_271E84:: @ 8271E84
RustboroCity_Gym_EventScript_271E84:: @ 8271E84
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
	return

DewfordTown_EventScript_271E8B:: @ 8271E8B
DewfordTown_Hall_EventScript_271E8B:: @ 8271E8B
	dotimebasedevents
	setvar VAR_0x8004, 0
	special BufferTrendyPhraseString
	return

DewfordTown_EventScript_271E95:: @ 8271E95
Route104_MrBrineysHouse_EventScript_271E95:: @ 8271E95
Route109_EventScript_271E95:: @ 8271E95
	copyvar VAR_0x8008, VAR_BRINEY_LOCATION
	setvar VAR_BRINEY_LOCATION, 0
	return

EventScript_UseSurf:: @ 8271EA0
	checkpartymove MOVE_SURF
	compare VAR_RESULT, 6
	goto_if_eq EventScript_CantSurf
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CancelSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF

EventScript_CancelSurf:: @ 8271ED5
	releaseall

EventScript_CantSurf:: @ 8271ED6
	end

Common_EventScript_SetupRivalGender:: @ 8271ED7
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_271EEF
	compare VAR_RESULT, FEMALE
	goto_if_eq RustboroCity_EventScript_271EF5
	end

RustboroCity_EventScript_271EEF:: @ 8271EEF
	setvar VAR_OBJ_GFX_ID_0, EVENT_OBJ_GFX_RIVAL_MAY_NORMAL
	return

RustboroCity_EventScript_271EF5:: @ 8271EF5
	setvar VAR_OBJ_GFX_ID_0, EVENT_OBJ_GFX_RIVAL_BRENDAN_NORMAL
	return

Common_EventScript_SetupRivalOnBikeGender:: @ 8271EFB
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_271F13
	compare VAR_RESULT, FEMALE
	goto_if_eq LavaridgeTown_EventScript_271F19
	end

LavaridgeTown_EventScript_271F13:: @ 8271F13
	setvar VAR_OBJ_GFX_ID_3, EVENT_OBJ_GFX_RIVAL_MAY_MACH_BIKE
	return

LavaridgeTown_EventScript_271F19:: @ 8271F19
	setvar VAR_OBJ_GFX_ID_3, EVENT_OBJ_GFX_RIVAL_BRENDAN_MACH_BIKE
	return

EventScript_271F1F:: @ 8271F1F
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EventScript_271F37
	compare VAR_RESULT, FEMALE
	goto_if_eq EventScript_271F3D
	end

EventScript_271F37:: @ 8271F37
	setvar VAR_OBJ_GFX_ID_0, EVENT_OBJ_GFX_RIVAL_BRENDAN_NORMAL
	return

EventScript_271F3D:: @ 8271F3D
	setvar VAR_OBJ_GFX_ID_0, EVENT_OBJ_GFX_RIVAL_MAY_NORMAL
	return

DewfordTown_Gym_EventScript_271F43:: @ 8271F43
FortreeCity_Gym_EventScript_271F43:: @ 8271F43
LavaridgeTown_Gym_1F_EventScript_271F43:: @ 8271F43
MauvilleCity_Gym_EventScript_271F43:: @ 8271F43
MossdeepCity_Gym_EventScript_271F43:: @ 8271F43
PetalburgCity_Gym_EventScript_271F43:: @ 8271F43
RustboroCity_Gym_EventScript_271F43:: @ 8271F43
SootopolisCity_Gym_1F_EventScript_271F43:: @ 8271F43
	switch VAR_0x8008
	case 1, DewfordTown_Gym_EventScript_271FA1
	case 2, DewfordTown_Gym_EventScript_271FAB
	case 3, DewfordTown_Gym_EventScript_271FBE
	case 4, DewfordTown_Gym_EventScript_271FCE
	case 5, DewfordTown_Gym_EventScript_271FE7
	case 6, DewfordTown_Gym_EventScript_271FFD
	case 7, DewfordTown_Gym_EventScript_272010
	case 8, DewfordTown_Gym_EventScript_272035
	end

DewfordTown_Gym_EventScript_271FA1:: @ 8271FA1
	settrainerflag TRAINER_JOSH
	settrainerflag TRAINER_TOMMY
	settrainerflag TRAINER_MARC
	return

DewfordTown_Gym_EventScript_271FAB:: @ 8271FAB
	settrainerflag TRAINER_TAKAO
	settrainerflag TRAINER_JOCELYN
	settrainerflag TRAINER_LAURA
	settrainerflag TRAINER_BRENDEN
	settrainerflag TRAINER_CRISTIAN
	settrainerflag TRAINER_LILITH
	return

DewfordTown_Gym_EventScript_271FBE:: @ 8271FBE
	settrainerflag TRAINER_KIRK
	settrainerflag TRAINER_SHAWN
	settrainerflag TRAINER_BEN
	settrainerflag TRAINER_VIVIAN
	settrainerflag TRAINER_ANGELO
	return

DewfordTown_Gym_EventScript_271FCE:: @ 8271FCE
	settrainerflag TRAINER_COLE
	settrainerflag TRAINER_AXLE
	settrainerflag TRAINER_KEEGAN
	settrainerflag TRAINER_GERALD
	settrainerflag TRAINER_DANIELLE
	settrainerflag TRAINER_JACE
	settrainerflag TRAINER_JEFF
	settrainerflag TRAINER_ELI
	return

DewfordTown_Gym_EventScript_271FE7:: @ 8271FE7
	settrainerflag TRAINER_RANDALL
	settrainerflag TRAINER_PARKER
	settrainerflag TRAINER_GEORGE
	settrainerflag TRAINER_BERKE
	settrainerflag TRAINER_MARY
	settrainerflag TRAINER_ALEXIA
	settrainerflag TRAINER_JODY
	return

DewfordTown_Gym_EventScript_271FFD:: @ 8271FFD
	settrainerflag TRAINER_JARED
	settrainerflag TRAINER_FLINT
	settrainerflag TRAINER_ASHLEY
	settrainerflag TRAINER_EDWARDO
	settrainerflag TRAINER_HUMBERTO
	settrainerflag TRAINER_DARIUS
	return

DewfordTown_Gym_EventScript_272010:: @ 8272010
	settrainerflag TRAINER_PRESTON
	settrainerflag TRAINER_VIRGIL
	settrainerflag TRAINER_BLAKE
	settrainerflag TRAINER_HANNAH
	settrainerflag TRAINER_SAMANTHA
	settrainerflag TRAINER_MAURA
	settrainerflag TRAINER_SYLVIA
	settrainerflag TRAINER_NATE
	settrainerflag TRAINER_KATHLEEN
	settrainerflag TRAINER_CLIFFORD
	settrainerflag TRAINER_MACEY
	settrainerflag TRAINER_NICHOLAS
	return

DewfordTown_Gym_EventScript_272035:: @ 8272035
	settrainerflag TRAINER_ANDREA
	settrainerflag TRAINER_CRISSY
	settrainerflag TRAINER_BRIANNA
	settrainerflag TRAINER_CONNIE
	settrainerflag TRAINER_BRIDGET
	settrainerflag TRAINER_OLIVIA
	settrainerflag TRAINER_TIFFANY
	settrainerflag TRAINER_BETHANY
	settrainerflag TRAINER_ANNIKA
	settrainerflag TRAINER_DAPHNE
	return

Common_EventScript_ShowBagIsFull:: @ 8272054
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end

Common_EventScript_BagIsFull:: @ 827205E
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	return

Route114_LanettesHouse_EventScript_272067:: @ 8272067
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	release
	end

Common_EventScript_NoRoomLeftForAnother:: @ 8272071
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
	return

Common_EventScript_SetWeather15:: @ 827207A
	setweather WEATHER_ALTERNATING
	return

Common_EventScript_PlayGymBadgeFanfare:: @ 827207E
	playfanfare MUS_ME_BACHI
	waitfanfare
	return

Common_EventScript_OutOfCenterPartyHeal:: @ 8272083
	fadescreen 1
	playfanfare MUS_ME_ASA
	waitfanfare
	special HealPlayerParty
	fadescreen 0
	return

EventScript_RegionMap:: @ 827208F
	lockall
	msgbox Common_Text_LookCloserAtMap, MSGBOX_DEFAULT
	fadescreen 1
	special FieldShowRegionMap
	waitstate
	releaseall
	end

DewfordTown_EventScript_2720A0:: @ 82720A0
Route104_EventScript_2720A0:: @ 82720A0
Route109_EventScript_2720A0:: @ 82720A0
	setflag FLAG_SPECIAL_FLAG_0x4001
	playbgm MUS_M_BOAT, 0
	return

DewfordTown_EventScript_2720A8:: @ 82720A8
Route104_EventScript_2720A8:: @ 82720A8
Route109_EventScript_2720A8:: @ 82720A8
	clearflag FLAG_SPECIAL_FLAG_0x4001
	fadedefaultbgm
	return

LittlerootTown_ProfessorBirchsLab_EventScript_2720AD:: @ 82720AD
Route101_EventScript_2720AD:: @ 82720AD
Route103_EventScript_2720AD:: @ 82720AD
	compare VAR_PETALBURG_GYM_STATE, 0
	goto_if_eq Common_EventScript_NopReturn
	goto_if_set FLAG_SYS_GAME_CLEAR, Route101_EventScript_27211A
	compare VAR_BIRCH_STATE, 0
	call_if_eq Route101_EventScript_27211A
	compare VAR_BIRCH_STATE, 1
	call_if_eq Route101_EventScript_27211A
	compare VAR_BIRCH_STATE, 2
	call_if_eq Route101_EventScript_272127
	compare VAR_BIRCH_STATE, 3
	call_if_eq Route101_EventScript_272127
	compare VAR_BIRCH_STATE, 4
	call_if_eq Route101_EventScript_272134
	compare VAR_BIRCH_STATE, 5
	call_if_eq Route101_EventScript_272134
	compare VAR_BIRCH_STATE, 6
	call_if_eq Route101_EventScript_27211A
	compare VAR_BIRCH_STATE, 7
	call_if_eq Route101_EventScript_27211A
	return

Route101_EventScript_27211A:: @ 827211A
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_ROUTE_103_BIRCH
	return

Route101_EventScript_272127:: @ 8272127
	clearflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380
	setflag FLAG_HIDE_ROUTE_103_BIRCH
	return

Route101_EventScript_272134:: @ 8272134
	clearflag FLAG_HIDE_ROUTE_103_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380
	return

LittlerootTown_ProfessorBirchsLab_EventScript_272141:: @ 8272141
Route101_EventScript_272141:: @ 8272141
Route103_EventScript_272141:: @ 8272141
	lock
	faceplayer
	goto_if_unset FLAG_HAS_MATCH_CALL, Route101_EventScript_272155
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, Route101_EventScript_1FA2D2

Route101_EventScript_272155:: @ 8272155
	msgbox gUnknown_082A5C9C, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Route101_EventScript_27216F
	call Route101_EventScript_272184
	release
	end

Route101_EventScript_27216F:: @ 827216F
	msgbox Route101_Text_2A5CEB, MSGBOX_DEFAULT
	release
	end

Route101_EventScript_272179:: @ 8272179
	copyvar VAR_0x8004, VAR_0x8009
	special ShowPokedexRatingMessage
	waitmessage
	waitbuttonpress
	return

EverGrandeCity_ChampionsRoom_EventScript_272184:: @ 8272184
Route101_EventScript_272184:: @ 8272184
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	copyvar VAR_0x800A, VAR_RESULT
	buffernumberstring 0, VAR_0x8008
	buffernumberstring 1, VAR_0x8009
	msgbox gUnknown_082A5D2C, MSGBOX_DEFAULT
	call Route101_EventScript_272179
	compare VAR_0x800A, 0
	goto_if_eq Common_EventScript_NopReturn
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	buffernumberstring 0, VAR_0x8008
	buffernumberstring 1, VAR_0x8009
	msgbox gUnknown_082A633D, MSGBOX_DEFAULT
	return

BattleFrontier_OutsideWest_EventScript_2721E2:: @ 82721E2
LilycoveCity_Harbor_EventScript_2721E2:: @ 82721E2
SlateportCity_Harbor_EventScript_2721E2:: @ 82721E2
	delay 60
	applymovement VAR_0x8004, SlateportCity_Harbor_Movement_2721F0
	waitmovement 0
	return

SlateportCity_Harbor_Movement_2721F0: @ 82721F0
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PetalburgCity_Gym_EventScript_2721F8:: @ 82721F8
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_108_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 0
	return

RusturfTunnel_EventScript_272216:: @ 8272216
	removeobject 1
	removeobject 10
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_LOVER_MAN
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_LOVER_WOMAN
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
	setflag FLAG_RUSTURF_TUNNEL_OPENED
	return

EventScript_27222B:: @ 827222B
	delay 30
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	showobjectat 255, MAP_PETALBURG_CITY
	delay 30
	applymovement EVENT_OBJ_ID_PLAYER, Movement_27224E
	waitmovement 0
	delay 30
	return

Movement_27224E: @ 827224E
	walk_up
	step_end

BattleFrontier_OutsideWest_EventScript_272250:: @ 8272250
BirthIsland_Harbor_EventScript_272250:: @ 8272250
FarawayIsland_Entrance_EventScript_272250:: @ 8272250
NavelRock_Harbor_EventScript_272250:: @ 8272250
SouthernIsland_Exterior_EventScript_272250:: @ 8272250
	compare VAR_FACING, 1
	call_if_eq BattleFrontier_OutsideWest_EventScript_242A21
	compare VAR_FACING, 3
	call_if_eq BattleFrontier_OutsideWest_EventScript_242A2C
	delay 30
	hideobjectat 255, MAP_PETALBURG_CITY
	call BattleFrontier_OutsideWest_EventScript_2721E2
	return

EventScript_272274:: @ 8272274
	lockall
	waitse
	playmoncry SPECIES_KYOGRE, 2
	waitmoncry
	setvar VAR_TEMP_5, 1
	releaseall
	end

EventScript_272283:: @ 8272283
	lockall
	setvar VAR_TEMP_1, 1
	goto EventScript_2722A7
	end

EventScript_27228F:: @ 827228F
	lockall
	setvar VAR_TEMP_2, 1
	goto EventScript_2722A7
	end

EventScript_27229B:: @ 827229B
	lockall
	setvar VAR_TEMP_3, 1
	goto EventScript_2722A7
	end

EventScript_2722A7:: @ 82722A7
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special sub_8139560
	waitstate
	releaseall
	end

CaveOfOrigin_1F_EventScript_2722C1:: @ 82722C1
CaveOfOrigin_UnusedRubySapphireMap1_EventScript_2722C1:: @ 82722C1
CaveOfOrigin_UnusedRubySapphireMap2_EventScript_2722C1:: @ 82722C1
CaveOfOrigin_UnusedRubySapphireMap3_EventScript_2722C1:: @ 82722C1
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, 1
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_4, 1
	setvar VAR_TEMP_5, 1
	return

Route120_EventScript_2722DB:: @ 82722DB
	lock
	faceplayer
	setvar VAR_0x8009, 1
	goto Route120_EventScript_272336
	end

Route120_EventScript_2722E8:: @ 82722E8
	lock
	faceplayer
	setvar VAR_0x8009, 2
	goto Route120_EventScript_272336
	end

Route120_EventScript_2722F5:: @ 82722F5
	lock
	faceplayer
	setvar VAR_0x8009, 3
	goto Route120_EventScript_272336
	end

Route120_EventScript_272302:: @ 8272302
	lock
	faceplayer
	setvar VAR_0x8009, 4
	goto Route120_EventScript_272336
	end

Route120_EventScript_27230F:: @ 827230F
	lock
	faceplayer
	setvar VAR_0x8009, 5
	goto Route120_EventScript_272336
	end

Route119_EventScript_27231C:: @ 827231C
	lock
	faceplayer
	setvar VAR_0x8009, 6
	goto Route119_EventScript_272336
	end

Route119_EventScript_272329:: @ 8272329
	lock
	faceplayer
	setvar VAR_0x8009, 7
	goto Route119_EventScript_272336
	end

Route119_EventScript_272336:: @ 8272336
Route120_EventScript_272336:: @ 8272336
	checkitem ITEM_DEVON_SCOPE, 1
	compare VAR_RESULT, 1
	goto_if_eq Route119_EventScript_272350
	msgbox Route119_Text_1F5D00, MSGBOX_DEFAULT
	release
	end

Route119_EventScript_272350:: @ 8272350
	msgbox Route119_Text_1F5D23, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route119_EventScript_272365
	release
	end

Route119_EventScript_272365:: @ 8272365
	msgbox Route119_Text_1F5D63, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	applymovement VAR_LAST_TALKED, Route119_Movement_2723C7
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, 2
	delay 40
	waitmoncry
	setwildbattle SPECIES_KECLEON, 30, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, 1
	goto_if_eq Route119_EventScript_2723C1
	compare VAR_RESULT, 4
	goto_if_eq Route119_EventScript_2723C1
	compare VAR_RESULT, 5
	goto_if_eq Route119_EventScript_2723C1
	release
	end

Route119_EventScript_2723C1:: @ 82723C1
	goto Route119_EventScript_27376D
	end

FortreeCity_Movement_2723C7: @ 82723C7
Route119_Movement_2723C7: @ 82723C7
Route120_Movement_2723C7: @ 82723C7
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_16
	set_invisible
	delay_16
	set_visible
	step_end

Common_EventScript_NameReceivedPokemon:: @ 82723DD
	fadescreen 1
	special ChangePokemonNickname
	waitstate
	return

FallarborTown_House1_EventScript_2723E4:: @ 82723E4
GraniteCave_StevensRoom_EventScript_2723E4:: @ 82723E4
SlateportCity_OceanicMuseum_2F_EventScript_2723E4:: @ 82723E4
	bufferitemname 0, VAR_0x8004
	playfanfare MUS_ME_WAZA
	message gUnknown_08273161
	waitmessage
	waitfanfare
	takeitem VAR_0x8004, 1
	return

EverGrandeCity_DrakesRoom_EventScript_2723F8:: @ 82723F8
EverGrandeCity_GlaciasRoom_EventScript_2723F8:: @ 82723F8
EverGrandeCity_PhoebesRoom_EventScript_2723F8:: @ 82723F8
EverGrandeCity_SidneysRoom_EventScript_2723F8:: @ 82723F8
PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles:: @ 82723F8
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_2725C6
	waitmovement 0
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoor_Frame, 0
	setmetatile 6, 2, METATILE_EliteFour_OpenDoor_Opening, 0
	setmetatile 0, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 1, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 2, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 3, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 4, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 8, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 9, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 10, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 11, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 12, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	special DrawWholeMapView
	return

EverGrandeCity_DrakesRoom_EventScript_272475:: @ 8272475
EverGrandeCity_GlaciasRoom_EventScript_272475:: @ 8272475
EverGrandeCity_PhoebesRoom_EventScript_272475:: @ 8272475
EverGrandeCity_SidneysRoom_EventScript_272475:: @ 8272475
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_SidneysRoom_Movement_2725BA
	waitmovement 0
	playse SE_TRACK_DOOR
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	special DrawWholeMapView
	return

EverGrandeCity_DrakesRoom_EventScript_2724BC:: @ 82724BC
EverGrandeCity_GlaciasRoom_EventScript_2724BC:: @ 82724BC
EverGrandeCity_PhoebesRoom_EventScript_2724BC:: @ 82724BC
EverGrandeCity_SidneysRoom_EventScript_2724BC:: @ 82724BC
	setmetatile 6, 1, METATILE_EliteFour_OpenDoor_Frame, 0
	setmetatile 6, 2, METATILE_EliteFour_OpenDoor_Opening, 0
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 0, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 1, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 2, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 3, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 4, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 8, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 9, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 10, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	setmetatile 11, 2, METATILE_EliteFour_RightSpotlightOff, 1
	setmetatile 12, 2, METATILE_EliteFour_LeftSpotlightOff, 1
	return

EverGrandeCity_DrakesRoom_EventScript_27255F:: @ 827255F
EverGrandeCity_GlaciasRoom_EventScript_27255F:: @ 827255F
EverGrandeCity_PhoebesRoom_EventScript_27255F:: @ 827255F
EverGrandeCity_SidneysRoom_EventScript_27255F:: @ 827255F
	setmetatile 5, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 6, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 7, 12, METATILE_EliteFour_EntryDoor_ClosedTop, 1
	setmetatile 5, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 6, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	setmetatile 7, 13, METATILE_EliteFour_EntryDoor_ClosedBottom, 1
	return

SlateportCity_Movement_272596: @ 8272596
	emote_question_mark
	step_end

Common_Movement_ExclamationMark: @ 8272598
	emote_exclamation_mark
	step_end

Common_Movement_Delay48: @ 827259A
	delay_16
	delay_16
	delay_16
	step_end

Common_Movement_FacePlayer: @ 827259E
	face_player
	step_end

Common_Movement_FaceAwayPlayer: @ 82725A0
	face_away_player
	step_end

Common_Movement_FaceOriginalDirection: @ 82725A2
	face_original_direction
	step_end

Common_Movement_WalkInPlaceLeft: @ 82725A4
	walk_in_place_fastest_left
	step_end

Common_Movement_WalkInPlaceUp: @ 82725A6
	walk_in_place_fastest_up
	step_end

Common_Movement_WalkInPlaceRight: @ 82725A8
	walk_in_place_fastest_right
	step_end

Common_Movement_WalkInPlaceDown: @ 82725AA
	walk_in_place_fastest_down
	step_end

RustboroCity_Movement_2725AC: @ 82725AC
	face_right
	step_end

RustboroCity_Movement_2725AE: @ 82725AE
	face_left
	step_end

Common_Movement_FaceDown: @ 82725B0
	face_down
	step_end

Common_Movement_FaceUp: @ 82725B2
	face_up
	step_end

BattleFrontier_BattleDomeBattleRoom_Movement_2725B4: @ 82725B4
MeteorFalls_1F_1R_Movement_2725B4: @ 82725B4
	walk_in_place_down
	step_end

BattleFrontier_BattlePalaceBattleRoom_Movement_2725B6: @ 82725B6
BattleFrontier_BattleTowerBattleRoom_Movement_2725B6: @ 82725B6
	walk_in_place_left
	step_end

Route121_Movement_2725B8: @ 82725B8
	walk_in_place_right
	step_end

EverGrandeCity_SidneysRoom_Movement_2725BA: @ 82725BA
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_2725C1: @ 82725C1
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EverGrandeCity_SidneysRoom_Movement_2725C6: @ 82725C6
	delay_16
	delay_16
	step_end

Route110_TrickHouseEntrance_Movement_2725C9: @ 82725C9
	walk_up
	step_end

Movement_2725CB:: @ 82725CB
	walk_up
	walk_up
	step_end

EventScript_PictureBookShelf:: @ 82725CE
	msgbox Text_PictureBookShelf, MSGBOX_SIGN
	end

EventScript_BookShelf:: @ 82725D7
	msgbox Text_BookShelf, MSGBOX_SIGN
	end

EventScript_PokemonCenterBookShelf:: @ 82725E0
	msgbox Text_PokemonCenterBookShelf, MSGBOX_SIGN
	end

EventScript_Vase:: @ 82725E9
	msgbox Text_Vase, MSGBOX_SIGN
	end

EventScript_EmptyTrashCan:: @ 82725F2
	msgbox Text_EmptyTrashCan, MSGBOX_SIGN
	end

EventScript_ShopShelf:: @ 82725FB
	msgbox Text_ShopShelf, MSGBOX_SIGN
	end

EventScript_Blueprint:: @ 8272604
	msgbox Text_Blueprint, MSGBOX_SIGN
	end

Text_WouldYouLikeToMixRecords: @ 827260D
	.i18n 5

Text_WouldNotLikeToMixRecords: @ 8272640
	.i18n 6

Text_BootUpPC: @ 827265A
	.i18n 7

gText_WhichPCShouldBeAccessed:: @ 827266F
	.i18n 8

gText_AccessedSomeonesPC:: @ 827268C
	.i18n 9

gText_StorageSystemOpened:: @ 82726A3
	.i18n 10

gText_AccessedPlayersPC:: @ 82726C2
	.i18n 11

gText_AccessedLanettesPC:: @ 82726D4
	.i18n 12

gUnknown_082726EB:: @ 82726EB
	.i18n 13

gUnknown_08272768:: @ 8272768
	.i18n 14

gUnknown_08272798:: @ 8272798
	.i18n 15

gUnknown_082727DB:: @ 82727DB
	.i18n 16

gUnknown_082727F5:: @ 82727F5
	.i18n 17

gUnknown_08272860:: @ 8272860
	.i18n 18

gUnknown_08272982:: @ 8272982
	.i18n 19

gUnknown_082729C0:: @ 82729C0
	.i18n 20

gUnknown_082729F0:: @ 82729F0
	.i18n 21

gUnknown_08272A07:: @ 8272A07
	.i18n 22

gUnknown_08272A21:: @ 8272A21
	.i18n 23

gUnknown_08272A3F:: @ 8272A3F
	.i18n 24

gUnknown_08272A52:: @ 8272A52
	.i18n 25

gUnknown_08272A78:: @ 8272A78
	.i18n 26

gUnknown_08272A89:: @ 8272A89
	.i18n 27

gText_PutItemInPocket:: @ 8272A9A
	.i18n 28

gText_PlayerFoundOneItem:: @ 8272ABF
	.i18n 29

gText_TooBadBagIsFull:: @ 8272AD0
	.i18n 30

gText_PlayerPutItemInBag:: @ 8272AEA
	.i18n 31

gUnknown_08272B09:: @ 8272B09
	.i18n 32

gText_NoRoomLeftForAnother:: @ 8272B1A
	.i18n 33

gUnknown_08272B48:: @ 8272B48
	.i18n 34

gText_PokemartSign:: @ 8272B6A
	.i18n 35

gText_PokemonCenterSign:: @ 8272B9E
	.i18n 36

gUnknown_08272BCF:: @ 8272BCF
	.i18n 37

gUnknown_08272C1D:: @ 8272C1D
	.i18n 38

gUnknown_08272C5F:: @ 8272C5F
	.i18n 39

gText_SelectWithoutRegisteredItem:: @ 8272C98
	.i18n 40

gUnknown_08272CD5:: @ 8272CD5
	.i18n 41

gText_PlayerHouseBootPC:: @ 8272D87
	.i18n 42

gUnknown_08272D9C:: @ 8272D9C
	.i18n 43

gUnknown_08272DB3:: @ 8272DB3
	.i18n 44

gUnknown_08272DE3:: @ 8272DE3
	.i18n 45

gText_RegisteredTrainerinPokeNav:: @ 8272E0F
	.i18n 46

gUnknown_08272E30:: @ 8272E30
	.i18n 47

gText_PokerusExplanation:: @ 8272F07
	.i18n 48

	.include "data/text/surf.inc"

gUnknown_0827301B:: @ 827301B
	.i18n 49

gUnknown_0827304E:: @ 827304E
	.i18n 50

gUnknown_0827306F:: @ 827306F
	.i18n 51

gUnknown_082730BC:: @ 82730BC
	.i18n 52

gUnknown_082730E5:: @ 82730E5
	.i18n 53

gUnknown_08273125:: @ 8273125
	.i18n 54

gUnknown_08273161:: @ 8273161
	.i18n 55

gUnknown_08273178:: @ 8273178
	.i18n 56

gText_PlayerFoundOneItemTwoLines:: @ 82731A9
	.i18n 57

gText_Sudowoodo_Attacked:: @ 82731BD
	.i18n 58

gText_LegendaryFlewAway:: @ 8273204
	.i18n 59

gText_PkmnTransferredSomeonesPC:: @ 8273216
	.i18n 60

gText_PkmnTransferredLanettesPC:: @ 8273256
	.i18n 61

gText_PkmnBoxSomeonesPCFull:: @ 8273296
	.i18n 62

gText_PkmnBoxLanettesPCFull:: @ 82732D9
	.i18n 63

gUnknown_0827331C:: @ 827331C
	.i18n 64

gText_NicknameThisPokemon:: @ 8273374
	.i18n 65

gUnknown_0827339F:: @ 827339F
	.i18n 66

gUnknown_082733D8:: @ 82733D8
	.i18n 67

gUnknown_08273446:: @ 8273446
	.i18n 68

gUnknown_082734CC:: @ 82734CC
	.i18n 69

gUnknown_08273506:: @ 8273506
	.i18n 70

gUnknown_08273559:: @ 8273559
	.i18n 71

gUnknown_08273594:: @ 8273594
	.i18n 72

gUnknown_082735F2:: @ 82735F2
	.i18n 73

gText_UnusualWeatherEnded_Rain:: @ 8273656
	.i18n 74

gText_UnusualWeatherEnded_Sun:: @ 8273684
	.i18n 75

EventScript_SelectWithoutRegisteredItem:: @ 82736B3
	msgbox gText_SelectWithoutRegisteredItem, MSGBOX_SIGN
	end

EventScript_Poison:: @ 82736BC
	lockall
	special ExecuteWhiteOut
	waitstate
	compare VAR_RESULT, 1
	goto_if_eq EventScript_2736D9
	compare VAR_RESULT, 2
	goto_if_eq EventScript_2736F8
	releaseall
	end

EventScript_2736D9:: @ 82736D9
	message gUnknown_08272DE3
	waitmessage
	waitbuttonpress
	special sub_80B05B4
	waitstate
	fadescreen 1
	call_if_set FLAG_FLANNERY_GIVES_BADGE_INFO, EventScript_2736F4
	special sp0C8_whiteout_maybe
	waitstate
	end

EventScript_2736F4:: @ 82736F4
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	return

EventScript_2736F8:: @ 82736F8
	message gUnknown_08272DE3
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 16
	special CallBattlePikeFunction
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4222
	setvar VAR_0x8004, 12
	special CallBattlePyramidFunction
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_252B42
	setvar VAR_0x8004, TRAINER_HILL_FUNC_10
	special CallTrainerHillFunction
	compare VAR_RESULT, 1
	goto_if_eq TrainerHill_1F_EventScript_2C83C9
	special sub_80B05B4
	waitstate
	fadescreen 1
	special sp0C8_whiteout_maybe
	waitstate
	end

Common_EventScript_NopReturn:: @ 827374E
	return

EventScript_UnusedSetVarResult1:: @ 827374F
	setvar VAR_RESULT, 1
	return

OldaleTown_PokemonCenter_2F_EventScript_273755:: @ 8273755
	setvar VAR_RESULT, 0
	return

BattleFrontier_PokemonCenter_2F_EventScript_27375B:: @ 827375B
DewfordTown_PokemonCenter_2F_EventScript_27375B:: @ 827375B
EverGrandeCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
EverGrandeCity_PokemonLeague_2F_EventScript_27375B:: @ 827375B
FallarborTown_PokemonCenter_2F_EventScript_27375B:: @ 827375B
FortreeCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
LavaridgeTown_PokemonCenter_2F_EventScript_27375B:: @ 827375B
LilycoveCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
MauvilleCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
MossdeepCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
OldaleTown_PokemonCenter_2F_EventScript_27375B:: @ 827375B
PacifidlogTown_PokemonCenter_2F_EventScript_27375B:: @ 827375B
PetalburgCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
RustboroCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
SlateportCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
SootopolisCity_PokemonCenter_2F_EventScript_27375B:: @ 827375B
VerdanturfTown_PokemonCenter_2F_EventScript_27375B:: @ 827375B
	call OldaleTown_PokemonCenter_2F_EventScript_27751B
	end

BattleFrontier_PokemonCenter_2F_EventScript_273761:: @ 8273761
DewfordTown_PokemonCenter_2F_EventScript_273761:: @ 8273761
EverGrandeCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
EverGrandeCity_PokemonLeague_2F_EventScript_273761:: @ 8273761
FallarborTown_PokemonCenter_2F_EventScript_273761:: @ 8273761
FortreeCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
LavaridgeTown_PokemonCenter_2F_EventScript_273761:: @ 8273761
LilycoveCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
MauvilleCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
MossdeepCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
OldaleTown_PokemonCenter_2F_EventScript_273761:: @ 8273761
PacifidlogTown_PokemonCenter_2F_EventScript_273761:: @ 8273761
PetalburgCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
RustboroCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
SlateportCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
SootopolisCity_PokemonCenter_2F_EventScript_273761:: @ 8273761
VerdanturfTown_PokemonCenter_2F_EventScript_273761:: @ 8273761
	call OldaleTown_PokemonCenter_2F_EventScript_277672
	end

BattleFrontier_PokemonCenter_2F_EventScript_273767:: @ 8273767
DewfordTown_PokemonCenter_2F_EventScript_273767:: @ 8273767
EverGrandeCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
EverGrandeCity_PokemonLeague_2F_EventScript_273767:: @ 8273767
FallarborTown_PokemonCenter_2F_EventScript_273767:: @ 8273767
FortreeCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
LavaridgeTown_PokemonCenter_2F_EventScript_273767:: @ 8273767
LilycoveCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
MauvilleCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
MossdeepCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
OldaleTown_PokemonCenter_2F_EventScript_273767:: @ 8273767
PacifidlogTown_PokemonCenter_2F_EventScript_273767:: @ 8273767
PetalburgCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
RustboroCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
SlateportCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
SootopolisCity_PokemonCenter_2F_EventScript_273767:: @ 8273767
VerdanturfTown_PokemonCenter_2F_EventScript_273767:: @ 8273767
	call OldaleTown_PokemonCenter_2F_EventScript_2776A4
	end

AncientTomb_EventScript_27376D:: @ 827376D
AquaHideout_B1F_EventScript_27376D:: @ 827376D
DesertRuins_EventScript_27376D:: @ 827376D
IslandCave_EventScript_27376D:: @ 827376D
MarineCave_End_EventScript_27376D:: @ 827376D
NewMauville_Inside_EventScript_27376D:: @ 827376D
Route119_EventScript_27376D:: @ 827376D
TerraCave_End_EventScript_27376D:: @ 827376D
	fadescreenswapbuffers 1
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers 0
	release
	end

AncientTomb_EventScript_273776:: @ 8273776
BirthIsland_Exterior_EventScript_273776:: @ 8273776
DesertRuins_EventScript_273776:: @ 8273776
FarawayIsland_Interior_EventScript_273776:: @ 8273776
IslandCave_EventScript_273776:: @ 8273776
MarineCave_End_EventScript_273776:: @ 8273776
NavelRock_Bottom_EventScript_273776:: @ 8273776
NavelRock_Top_EventScript_273776:: @ 8273776
SouthernIsland_Interior_EventScript_273776:: @ 8273776
TerraCave_End_EventScript_273776:: @ 8273776
	fadescreenswapbuffers 1
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers 0
	bufferspeciesname 0, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_27378B:: @ 827378B
MossdeepCity_StevensHouse_EventScript_27378B:: @ 827378B
Route119_WeatherInstitute_2F_EventScript_27378B:: @ 827378B
RustboroCity_DevonCorp_2F_EventScript_27378B:: @ 827378B
	getpartysize
	subvar VAR_RESULT, 1
	copyvar VAR_0x8004, VAR_RESULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_273797:: @ 8273797
MossdeepCity_StevensHouse_EventScript_273797:: @ 8273797
Route119_WeatherInstitute_2F_EventScript_273797:: @ 8273797
RustboroCity_DevonCorp_2F_EventScript_273797:: @ 8273797
	fadescreen 1
	special ChangeBoxPokemonNickname
	waitstate
	lock
	faceplayer
	return

LittlerootTown_ProfessorBirchsLab_EventScript_2737A0:: @ 82737A0
MossdeepCity_StevensHouse_EventScript_2737A0:: @ 82737A0
Route119_WeatherInstitute_2F_EventScript_2737A0:: @ 82737A0
RustboroCity_DevonCorp_2F_EventScript_2737A0:: @ 82737A0
	bufferboxname 0, VAR_STORAGE_UNKNOWN
	bufferspeciesname 1, VAR_TEMP_1
	call_if_unset FLAG_SYS_PC_LANETTE, LittlerootTown_ProfessorBirchsLab_EventScript_2737BB
	call_if_set FLAG_SYS_PC_LANETTE, LittlerootTown_ProfessorBirchsLab_EventScript_2737E6
	return

LittlerootTown_ProfessorBirchsLab_EventScript_2737BB:: @ 82737BB
	specialvar VAR_RESULT, sub_813B21C
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_2737D4
	msgbox gText_PkmnTransferredSomeonesPC, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_2737D4:: @ 82737D4
	specialvar VAR_RESULT, get_unknown_box_id
	bufferboxname 2, VAR_RESULT
	msgbox gText_PkmnBoxSomeonesPCFull, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_2737E6:: @ 82737E6
	specialvar VAR_RESULT, sub_813B21C
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_2737FF
	msgbox gText_PkmnTransferredLanettesPC, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_2737FF:: @ 82737FF
	specialvar VAR_RESULT, get_unknown_box_id
	bufferboxname 2, VAR_RESULT
	msgbox gText_PkmnBoxLanettesPCFull, MSGBOX_DEFAULT
	return

LittlerootTown_ProfessorBirchsLab_EventScript_273811:: @ 8273811
MossdeepCity_StevensHouse_EventScript_273811:: @ 8273811
Route119_WeatherInstitute_2F_EventScript_273811:: @ 8273811
RustboroCity_DevonCorp_2F_EventScript_273811:: @ 8273811
	msgbox gUnknown_0827331C, MSGBOX_DEFAULT
	release
	end

EventScript_Questionnaire:: @ 827381B
	lockall
	msgbox gUnknown_0827339F, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq EventScript_2738FD
	setvar VAR_0x8004, EASY_CHAT_TYPE_QUESTIONNAIRE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	specialvar VAR_0x8008, sub_813B490
	compare VAR_0x8004, 1
	goto_if_eq EventScript_27386D
	compare VAR_0x8004, 2
	goto_if_eq EventScript_2738B5
	compare VAR_RESULT, 0
	goto_if_eq EventScript_2738FD
	compare VAR_RESULT, 1
	goto_if_eq EventScript_2738FF
	end

EventScript_27386D:: @ 827386D
	goto_if_unset FLAG_SYS_POKEDEX_GET, EventScript_2738FF
	goto_if_set FLAG_SYS_MYSTERY_EVENT_ENABLE, EventScript_2738FF
	applymovement VAR_0x8008, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8008, Common_Movement_Delay48
	waitmovement 0
	msgbox gUnknown_08273506, MSGBOX_DEFAULT
	setflag FLAG_SYS_MYSTERY_EVENT_ENABLE
	msgbox gUnknown_08273559, MSGBOX_DEFAULT
	releaseall
	end

EventScript_2738B5:: @ 82738B5
	goto_if_unset FLAG_SYS_POKEDEX_GET, EventScript_2738FF
	goto_if_set FLAG_SYS_MYSTERY_GIFT_ENABLE, EventScript_2738FF
	applymovement VAR_0x8008, Common_Movement_FaceDown
	waitmovement 0
	playse SE_PIN
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8008, Common_Movement_Delay48
	waitmovement 0
	msgbox gUnknown_08273446, MSGBOX_DEFAULT
	setflag FLAG_SYS_MYSTERY_GIFT_ENABLE
	msgbox gUnknown_082734CC, MSGBOX_DEFAULT
	releaseall
	end

EventScript_2738FD:: @ 82738FD
	releaseall
	end

EventScript_2738FF:: @ 82738FF
	applymovement VAR_0x8008, Common_Movement_FaceDown
	waitmovement 0
	msgbox gUnknown_082733D8, MSGBOX_DEFAULT
	releaseall
	end

UnusualWeather_EventScript_PlaceTilesRoute114North:: @ 8273913
	setmetatile 7, 3, METATILE_Fallarbor_RedCaveEntrance_Top, 1
	setmetatile 7, 4, METATILE_Fallarbor_RedCaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute114South:: @ 8273926
	setmetatile 6, 45, METATILE_Fallarbor_BrownCaveEntrance_Top, 1
	setmetatile 6, 46, METATILE_Fallarbor_BrownCaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute115West:: @ 8273939
	setmetatile 21, 5, METATILE_Fallarbor_BrownCaveEntrance_Top, 1
	setmetatile 21, 6, METATILE_Fallarbor_BrownCaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute115East:: @ 827394C
	setmetatile 36, 9, METATILE_Fallarbor_BrownCaveEntrance_Top, 1
	setmetatile 36, 10, METATILE_Fallarbor_BrownCaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute116North:: @ 827395F
	setmetatile 59, 12, METATILE_General_CaveEntrance_Top, 1
	setmetatile 59, 13, METATILE_General_CaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute116South:: @ 8273972
	setmetatile 79, 5, METATILE_General_CaveEntrance_Top, 1
	setmetatile 79, 6, METATILE_General_CaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute118East:: @ 8273985
	setmetatile 42, 5, METATILE_General_CaveEntrance_Top, 1
	setmetatile 42, 6, METATILE_General_CaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute118West:: @ 8273998
	setmetatile 9, 5, METATILE_General_CaveEntrance_Top, 1
	setmetatile 9, 6, METATILE_General_CaveEntrance_Bottom, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute105North:: @ 82739AB
	setmetatile 10, 28, METATILE_General_RoughWater, 0
	setmetatile 11, 28, METATILE_General_RoughWater, 0
	setmetatile 9, 29, METATILE_General_RoughWater, 0
	setmetatile 10, 29, METATILE_General_RoughDeepWater, 0
	setmetatile 11, 29, METATILE_General_RoughDeepWater, 0
	setmetatile 12, 29, METATILE_General_RoughWater, 0
	setmetatile 9, 30, METATILE_General_RoughWater, 0
	setmetatile 10, 30, METATILE_General_RoughDeepWater, 0
	setmetatile 11, 30, METATILE_General_RoughDeepWater, 0
	setmetatile 12, 30, METATILE_General_RoughWater, 0
	setmetatile 10, 31, METATILE_General_RoughWater, 0
	setmetatile 11, 31, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute105South:: @ 8273A18
	setmetatile 20, 53, METATILE_General_RoughWater, 0
	setmetatile 21, 53, METATILE_General_RoughWater, 0
	setmetatile 19, 54, METATILE_General_RoughWater, 0
	setmetatile 20, 54, METATILE_General_RoughDeepWater, 0
	setmetatile 21, 54, METATILE_General_RoughDeepWater, 0
	setmetatile 22, 54, METATILE_General_RoughWater, 0
	setmetatile 19, 55, METATILE_General_RoughWater, 0
	setmetatile 20, 55, METATILE_General_RoughDeepWater, 0
	setmetatile 21, 55, METATILE_General_RoughDeepWater, 0
	setmetatile 22, 55, METATILE_General_RoughWater, 0
	setmetatile 20, 56, METATILE_General_RoughWater, 0
	setmetatile 21, 56, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute125West:: @ 8273A85
	setmetatile 8, 16, METATILE_General_RoughWater, 0
	setmetatile 9, 16, METATILE_General_RoughWater, 0
	setmetatile 7, 17, METATILE_General_RoughWater, 0
	setmetatile 8, 17, METATILE_General_RoughDeepWater, 0
	setmetatile 9, 17, METATILE_General_RoughDeepWater, 0
	setmetatile 10, 17, METATILE_General_RoughWater, 0
	setmetatile 7, 18, METATILE_General_RoughWater, 0
	setmetatile 8, 18, METATILE_General_RoughDeepWater, 0
	setmetatile 9, 18, METATILE_General_RoughDeepWater, 0
	setmetatile 10, 18, METATILE_General_RoughWater, 0
	setmetatile 8, 19, METATILE_General_RoughWater, 0
	setmetatile 9, 19, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute125East:: @ 8273AF2
	setmetatile 53, 18, METATILE_General_RoughWater, 0
	setmetatile 54, 18, METATILE_General_RoughWater, 0
	setmetatile 52, 19, METATILE_General_RoughWater, 0
	setmetatile 53, 19, METATILE_General_RoughDeepWater, 0
	setmetatile 54, 19, METATILE_General_RoughDeepWater, 0
	setmetatile 55, 19, METATILE_General_RoughWater, 0
	setmetatile 52, 20, METATILE_General_RoughWater, 0
	setmetatile 53, 20, METATILE_General_RoughDeepWater, 0
	setmetatile 54, 20, METATILE_General_RoughDeepWater, 0
	setmetatile 55, 20, METATILE_General_RoughWater, 0
	setmetatile 53, 21, METATILE_General_RoughWater, 0
	setmetatile 54, 21, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute127North:: @ 8273B5F
	setmetatile 57, 9, METATILE_General_RoughWater, 0
	setmetatile 58, 9, METATILE_General_RoughWater, 0
	setmetatile 56, 10, METATILE_General_RoughWater, 0
	setmetatile 57, 10, METATILE_General_RoughDeepWater, 0
	setmetatile 58, 10, METATILE_General_RoughDeepWater, 0
	setmetatile 59, 10, METATILE_General_RoughWater, 0
	setmetatile 56, 11, METATILE_General_RoughWater, 0
	setmetatile 57, 11, METATILE_General_RoughDeepWater, 0
	setmetatile 58, 11, METATILE_General_RoughDeepWater, 0
	setmetatile 59, 11, METATILE_General_RoughWater, 0
	setmetatile 57, 12, METATILE_General_RoughWater, 0
	setmetatile 58, 12, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute127South:: @ 8273BCC
	setmetatile 61, 30, METATILE_General_RoughWater, 0
	setmetatile 62, 30, METATILE_General_RoughWater, 0
	setmetatile 60, 31, METATILE_General_RoughWater, 0
	setmetatile 61, 31, METATILE_General_RoughDeepWater, 0
	setmetatile 62, 31, METATILE_General_RoughDeepWater, 0
	setmetatile 63, 31, METATILE_General_RoughWater, 0
	setmetatile 60, 32, METATILE_General_RoughWater, 0
	setmetatile 61, 32, METATILE_General_RoughDeepWater, 0
	setmetatile 62, 32, METATILE_General_RoughDeepWater, 0
	setmetatile 63, 32, METATILE_General_RoughWater, 0
	setmetatile 61, 33, METATILE_General_RoughWater, 0
	setmetatile 62, 33, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute129West:: @ 8273C39
	setmetatile 16, 14, METATILE_General_RoughWater, 0
	setmetatile 17, 14, METATILE_General_RoughWater, 0
	setmetatile 15, 15, METATILE_General_RoughWater, 0
	setmetatile 16, 15, METATILE_General_RoughDeepWater, 0
	setmetatile 17, 15, METATILE_General_RoughDeepWater, 0
	setmetatile 18, 15, METATILE_General_RoughWater, 0
	setmetatile 15, 16, METATILE_General_RoughWater, 0
	setmetatile 16, 16, METATILE_General_RoughDeepWater, 0
	setmetatile 17, 16, METATILE_General_RoughDeepWater, 0
	setmetatile 18, 16, METATILE_General_RoughWater, 0
	setmetatile 16, 17, METATILE_General_RoughWater, 0
	setmetatile 17, 17, METATILE_General_RoughWater, 0
	return

UnusualWeather_EventScript_PlaceTilesRoute129East:: @ 8273CA6
	setmetatile 42, 19, METATILE_General_RoughWater, 0
	setmetatile 43, 19, METATILE_General_RoughWater, 0
	setmetatile 41, 20, METATILE_General_RoughWater, 0
	setmetatile 42, 20, METATILE_General_RoughDeepWater, 0
	setmetatile 43, 20, METATILE_General_RoughDeepWater, 0
	setmetatile 44, 20, METATILE_General_RoughWater, 0
	setmetatile 41, 21, METATILE_General_RoughWater, 0
	setmetatile 42, 21, METATILE_General_RoughDeepWater, 0
	setmetatile 43, 21, METATILE_General_RoughDeepWater, 0
	setmetatile 44, 21, METATILE_General_RoughWater, 0
	setmetatile 42, 22, METATILE_General_RoughWater, 0
	setmetatile 43, 22, METATILE_General_RoughWater, 0
	return

Route105_EventScript_273D13:: @ 8273D13
Route114_EventScript_273D13:: @ 8273D13
Route115_EventScript_273D13:: @ 8273D13
Route116_EventScript_273D13:: @ 8273D13
Route118_EventScript_273D13:: @ 8273D13
Route125_EventScript_273D13:: @ 8273D13
Route127_EventScript_273D13:: @ 8273D13
Route129_EventScript_273D13:: @ 8273D13
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

UnusualWeather_StartKyogreWeather:: @ 8273D17
	setweather WEATHER_RAIN_HEAVY
	return

UnusualWeather_StartGroudonWeather:: @ 8273D1B
	setweather WEATHER_DROUGHT
	return

UnusualWeather_EventScript_EndEventAndCleanup_1:: @ 8273D1F
	lockall
	compare VAR_UNUSUAL_WEATHER_LOCATION, UNUSUAL_WEATHER_KYOGRE_LOCATIONS_START
	goto_if_ge UnusualWeather_EventScript_ShowRainEndedMessage
	goto UnusualWeather_EventScript_ShowSunEndedMessage
	end

UnusualWeather_EventScript_EndEventAndCleanup_2:: @ 8273D31
	closemessage
	fadescreenswapbuffers 1
	setweather WEATHER_SUNNY
	doweather
	call UnusualWeather_EventScript_CleanupMapTiles
	special DrawWholeMapView
	setvar VAR_UNUSUAL_WEATHER_LOCATION, UNUSUAL_WEATHER_NONE
	setvar VAR_SHOULD_END_UNUSUAL_WEATHER, 0
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadescreenswapbuffers 0
	releaseall
	end

UnusualWeather_EventScript_ShowRainEndedMessage:: @ 8273D51
	msgbox gText_UnusualWeatherEnded_Rain, MSGBOX_DEFAULT
	goto UnusualWeather_EventScript_EndEventAndCleanup_2
	end

UnusualWeather_EventScript_ShowSunEndedMessage:: @ 8273D5F
	msgbox gText_UnusualWeatherEnded_Sun, MSGBOX_DEFAULT
	goto UnusualWeather_EventScript_EndEventAndCleanup_2
	end

UnusualWeather_EventScript_CleanupMapTiles:: @ 8273D6D
	switch VAR_UNUSUAL_WEATHER_LOCATION
	case UNUSUAL_WEATHER_ROUTE_114_NORTH, UnusualWeather_EventScript_CleanupRoute114North
	case UNUSUAL_WEATHER_ROUTE_114_SOUTH, UnusualWeather_EventScript_CleanupRoute114South
	case UNUSUAL_WEATHER_ROUTE_115_WEST, UnusualWeather_EventScript_CleanupRoute115West
	case UNUSUAL_WEATHER_ROUTE_115_EAST, UnusualWeather_EventScript_CleanupRoute115East
	case UNUSUAL_WEATHER_ROUTE_116_NORTH, UnusualWeather_EventScript_CleanupRoute116North
	case UNUSUAL_WEATHER_ROUTE_116_SOUTH, UnusualWeather_EventScript_CleanupRoute116South
	case UNUSUAL_WEATHER_ROUTE_118_EAST, UnusualWeather_EventScript_CleanupRoute118East
	case UNUSUAL_WEATHER_ROUTE_118_WEST, UnusualWeather_EventScript_CleanupRoute118West
	case UNUSUAL_WEATHER_ROUTE_105_NORTH, UnusualWeather_EventScript_CleanupRoute105North
	case UNUSUAL_WEATHER_ROUTE_105_SOUTH, UnusualWeather_EventScript_CleanupRoute105South
	case UNUSUAL_WEATHER_ROUTE_125_WEST, UnusualWeather_EventScript_CleanupRoute125West
	case UNUSUAL_WEATHER_ROUTE_125_EAST, UnusualWeather_EventScript_CleanupRoute125East
	case UNUSUAL_WEATHER_ROUTE_127_NORTH, UnusualWeather_EventScript_CleanupRoute127North
	case UNUSUAL_WEATHER_ROUTE_127_SOUTH, UnusualWeather_EventScript_CleanupRoute127South
	case UNUSUAL_WEATHER_ROUTE_129_WEST, UnusualWeather_EventScript_CleanupRoute129West
	case UNUSUAL_WEATHER_ROUTE_129_EAST, UnusualWeather_EventScript_CleanupRoute129East
	return

UnusualWeather_EventScript_CleanupRoute114North:: @ 8273E23
	setmetatile 7, 3, METATILE_Fallarbor_RedRockWall, 1
	setmetatile 7, 4, METATILE_Fallarbor_RedRockWall, 1
	return

UnusualWeather_EventScript_CleanupRoute114South:: @ 8273E36
	setmetatile 6, 45, METATILE_Fallarbor_BrownRockWall, 1
	setmetatile 6, 46, METATILE_Fallarbor_BrownRockWall, 1
	return

UnusualWeather_EventScript_CleanupRoute115West:: @ 8273E49
	setmetatile 21, 5, METATILE_Fallarbor_BrownRockWall, 1
	setmetatile 21, 6, METATILE_Fallarbor_BrownRockWall, 1
	return

UnusualWeather_EventScript_CleanupRoute115East:: @ 8273E5C
	setmetatile 36, 9, METATILE_Fallarbor_BrownRockWall, 1
	setmetatile 36, 10, METATILE_Fallarbor_BrownRockWall, 1
	return

UnusualWeather_EventScript_CleanupRoute116North:: @ 8273E6F
	setmetatile 59, 12, METATILE_General_RockWall_RockBase, 1
	setmetatile 59, 13, METATILE_General_RockWall_RockBase, 1
	return

UnusualWeather_EventScript_CleanupRoute116South:: @ 8273E82
	setmetatile 79, 5, METATILE_General_RockWall_RockBase, 1
	setmetatile 79, 6, METATILE_General_RockWall_RockBase, 1
	return

UnusualWeather_EventScript_CleanupRoute118East:: @ 8273E95
	setmetatile 42, 5, METATILE_General_RockWall_RockBase, 1
	setmetatile 42, 6, METATILE_General_RockWall_GrassBase, 1
	return

UnusualWeather_EventScript_CleanupRoute118West:: @ 8273EA8
	setmetatile 9, 5, METATILE_General_RockWall_RockBase, 1
	setmetatile 9, 6, METATILE_General_RockWall_GrassBase, 1
	return

UnusualWeather_EventScript_CleanupRoute105North:: @ 8273EBB
	setmetatile 10, 28, METATILE_General_CalmWater, 0
	setmetatile 11, 28, METATILE_General_CalmWater, 0
	setmetatile 9, 29, METATILE_General_CalmWater, 0
	setmetatile 10, 29, METATILE_General_CalmWater, 0
	setmetatile 11, 29, METATILE_General_CalmWater, 0
	setmetatile 12, 29, METATILE_General_CalmWater, 0
	setmetatile 9, 30, METATILE_General_CalmWater, 0
	setmetatile 10, 30, METATILE_General_CalmWater, 0
	setmetatile 11, 30, METATILE_General_CalmWater, 0
	setmetatile 12, 30, METATILE_General_CalmWater, 0
	setmetatile 10, 31, METATILE_General_CalmWater, 0
	setmetatile 11, 31, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute105South:: @ 8273F28
	setmetatile 20, 53, METATILE_General_CalmWater, 0
	setmetatile 21, 53, METATILE_General_CalmWater, 0
	setmetatile 19, 54, METATILE_General_CalmWater, 0
	setmetatile 20, 54, METATILE_General_CalmWater, 0
	setmetatile 21, 54, METATILE_General_CalmWater, 0
	setmetatile 22, 54, METATILE_General_CalmWater, 0
	setmetatile 19, 55, METATILE_General_CalmWater, 0
	setmetatile 20, 55, METATILE_General_CalmWater, 0
	setmetatile 21, 55, METATILE_General_CalmWater, 0
	setmetatile 22, 55, METATILE_General_CalmWater, 0
	setmetatile 20, 56, METATILE_General_CalmWater, 0
	setmetatile 21, 56, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute125West:: @ 8273F95
	setmetatile 8, 16, METATILE_General_CalmWater, 0
	setmetatile 9, 16, METATILE_General_CalmWater, 0
	setmetatile 7, 17, METATILE_General_CalmWater, 0
	setmetatile 8, 17, METATILE_General_CalmWater, 0
	setmetatile 9, 17, METATILE_General_CalmWater, 0
	setmetatile 10, 17, METATILE_General_CalmWater, 0
	setmetatile 7, 18, METATILE_General_CalmWater, 0
	setmetatile 8, 18, METATILE_General_CalmWater, 0
	setmetatile 9, 18, METATILE_General_CalmWater, 0
	setmetatile 10, 18, METATILE_General_CalmWater, 0
	setmetatile 8, 19, METATILE_General_CalmWater, 0
	setmetatile 9, 19, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute125East:: @ 8274002
	setmetatile 53, 18, METATILE_General_CalmWater, 0
	setmetatile 54, 18, METATILE_General_CalmWater, 0
	setmetatile 52, 19, METATILE_General_CalmWater, 0
	setmetatile 53, 19, METATILE_General_CalmWater, 0
	setmetatile 54, 19, METATILE_General_CalmWater, 0
	setmetatile 55, 19, METATILE_General_CalmWater, 0
	setmetatile 52, 20, METATILE_General_CalmWater, 0
	setmetatile 53, 20, METATILE_General_CalmWater, 0
	setmetatile 54, 20, METATILE_General_CalmWater, 0
	setmetatile 55, 20, METATILE_General_CalmWater, 0
	setmetatile 53, 21, METATILE_General_CalmWater, 0
	setmetatile 54, 21, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute127North:: @ 827406F
	setmetatile 57, 9, METATILE_General_CalmWater, 0
	setmetatile 58, 9, METATILE_General_CalmWater, 0
	setmetatile 56, 10, METATILE_General_CalmWater, 0
	setmetatile 57, 10, METATILE_General_CalmWater, 0
	setmetatile 58, 10, METATILE_General_CalmWater, 0
	setmetatile 59, 10, METATILE_General_CalmWater, 0
	setmetatile 56, 11, METATILE_General_CalmWater, 0
	setmetatile 57, 11, METATILE_General_CalmWater, 0
	setmetatile 58, 11, METATILE_General_CalmWater, 0
	setmetatile 59, 11, METATILE_General_CalmWater, 0
	setmetatile 57, 12, METATILE_General_CalmWater, 0
	setmetatile 58, 12, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute127South:: @ 82740DC
	setmetatile 61, 30, METATILE_General_CalmWater, 0
	setmetatile 62, 30, METATILE_General_CalmWater, 0
	setmetatile 60, 31, METATILE_General_CalmWater, 0
	setmetatile 61, 31, METATILE_General_CalmWater, 0
	setmetatile 62, 31, METATILE_General_CalmWater, 0
	setmetatile 63, 31, METATILE_General_CalmWater, 0
	setmetatile 60, 32, METATILE_General_CalmWater, 0
	setmetatile 61, 32, METATILE_General_CalmWater, 0
	setmetatile 62, 32, METATILE_General_CalmWater, 0
	setmetatile 63, 32, METATILE_General_CalmWater, 0
	setmetatile 61, 33, METATILE_General_CalmWater, 0
	setmetatile 62, 33, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute129West:: @ 8274149
	setmetatile 16, 14, METATILE_General_CalmWater, 0
	setmetatile 17, 14, METATILE_General_CalmWater, 0
	setmetatile 15, 15, METATILE_General_CalmWater, 0
	setmetatile 16, 15, METATILE_General_CalmWater, 0
	setmetatile 17, 15, METATILE_General_CalmWater, 0
	setmetatile 18, 15, METATILE_General_CalmWater, 0
	setmetatile 15, 16, METATILE_General_CalmWater, 0
	setmetatile 16, 16, METATILE_General_CalmWater, 0
	setmetatile 17, 16, METATILE_General_CalmWater, 0
	setmetatile 18, 16, METATILE_General_CalmWater, 0
	setmetatile 16, 17, METATILE_General_CalmWater, 0
	setmetatile 17, 17, METATILE_General_CalmWater, 0
	return

UnusualWeather_EventScript_CleanupRoute129East:: @ 82741B6
	setmetatile 42, 19, METATILE_General_CalmWater, 0
	setmetatile 43, 19, METATILE_General_CalmWater, 0
	setmetatile 41, 20, METATILE_General_CalmWater, 0
	setmetatile 42, 20, METATILE_General_CalmWater, 0
	setmetatile 43, 20, METATILE_General_CalmWater, 0
	setmetatile 44, 20, METATILE_General_CalmWater, 0
	setmetatile 41, 21, METATILE_General_CalmWater, 0
	setmetatile 42, 21, METATILE_General_CalmWater, 0
	setmetatile 43, 21, METATILE_General_CalmWater, 0
	setmetatile 44, 21, METATILE_General_CalmWater, 0
	setmetatile 42, 22, METATILE_General_CalmWater, 0
	setmetatile 43, 22, METATILE_General_CalmWater, 0
	return

UnusualWeather_Underwater_SetupEscapeWarp:: @ 8274223
	switch VAR_UNUSUAL_WEATHER_LOCATION
	case UNUSUAL_WEATHER_ROUTE_105_NORTH, UnusualWeather_Underwater_SetupEscapeWarpRoute105North
	case UNUSUAL_WEATHER_ROUTE_105_SOUTH, UnusualWeather_Underwater_SetupEscapeWarpRoute105South
	case UNUSUAL_WEATHER_ROUTE_125_WEST, UnusualWeather_Underwater_SetupEscapeWarpRoute125West
	case UNUSUAL_WEATHER_ROUTE_125_EAST, UnusualWeather_Underwater_SetupEscapeWarpRoute125East
	case UNUSUAL_WEATHER_ROUTE_127_NORTH, UnusualWeather_Underwater_SetupEscapeWarpRoute127North
	case UNUSUAL_WEATHER_ROUTE_127_SOUTH, UnusualWeather_Underwater_SetupEscapeWarpRoute127South
	case UNUSUAL_WEATHER_ROUTE_129_WEST, UnusualWeather_Underwater_SetupEscapeWarpRoute129West
	case UNUSUAL_WEATHER_ROUTE_129_EAST, UnusualWeather_Underwater_SetupEscapeWarpRoute129East
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute105North:: @ 8274281
	setescapewarp MAP_ROUTE105, 255, 11, 29
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute105South:: @ 827428A
	setescapewarp MAP_ROUTE105, 255, 21, 54
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute125West:: @ 8274293
	setescapewarp MAP_ROUTE125, 255, 9, 17
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute125East:: @ 827429C
	setescapewarp MAP_ROUTE125, 255, 54, 19
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute127North:: @ 82742A5
	setescapewarp MAP_ROUTE127, 255, 58, 10
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute127South:: @ 82742AE
	setescapewarp MAP_ROUTE127, 255, 62, 31
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute129West:: @ 82742B7
	setescapewarp MAP_ROUTE129, 255, 17, 15
	return

UnusualWeather_Underwater_SetupEscapeWarpRoute129East:: @ 82742C0
	setescapewarp MAP_ROUTE129, 255, 43, 20
	return

Std_RegisteredInMatchCall:: @ 82742C9
	buffertrainerclassname 0, VAR_0x8000
	buffertrainername 1, VAR_0x8000
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox gText_RegisteredTrainerinPokeNav, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	return

EventScript_TryGetTrainerScript:: @ 82742E6
	special ShouldTryGetTrainerScript
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GotoTrainerScript
	releaseall
	end

EventScript_GotoTrainerScript:: @ 82742F6
	gotobeatenscript
	releaseall
	end

	.include "data/scripts/berry_tree.inc"
	.include "data/scripts/secret_base.inc"
	.include "data/scripts/cable_club.inc"
	.include "data/scripts/contest_hall.inc"
	.include "data/text/contest_strings.inc"

gUnknown_0827E8CE:: @ 827E8CE
	.i18n 76

gText_LinkStandby4:: @ 827E8DA
	.i18n 77

gUnknown_0827E8E8:: @ 827E8E8
	.i18n 78

gUnknown_0827E910:: @ 827E910
	.i18n 79

gUnknown_0827E929:: @ 827E929
	.i18n 80

gUnknown_0827E943:: @ 827E943
	.i18n 81

gUnknown_0827E95F:: @ 827E95F
	.i18n 82

gUnknown_0827E973:: @ 827E973
	.i18n 83

gUnknown_0827E992:: @ 827E992
	.i18n 84

gUnknown_0827E9B9:: @ 827E9B9
	.i18n 85

gUnknown_0827E9CD:: @ 827E9CD
	.i18n 86

gUnknown_0827EA0C:: @ 827EA0C
	.i18n 87

gUnknown_0827EA17:: @ 827EA17
	.i18n 88

gContestRankNormal::
	.i18n 89

gContestRankSuper::
	.i18n 90

gContestRankHyper::
	.i18n 91

gContestRankMaster::
	.i18n 92

gContestLink::
	.i18n 93

gContestCoolness::
	.i18n 94

gContestBeauty::
	.i18n 95

gContestCuteness::
	.i18n 96

gContestSmartness::
	.i18n 97

gContestToughness::
	.i18n 98

gContestPaintingCool1::
	.i18n 99

gContestPaintingCool2::
	.i18n 100

gContestPaintingCool3::
	.i18n 101

gContestPaintingBeauty1::
	.i18n 102

gContestPaintingBeauty2::
	.i18n 103

gContestPaintingBeauty3::
	.i18n 104

gContestPaintingCute1::
	.i18n 105

gContestPaintingCute2::
	.i18n 106

gContestPaintingCute3::
	.i18n 107

gContestPaintingSmart1::
	.i18n 108

gContestPaintingSmart2::
	.i18n 109

gContestPaintingSmart3::
	.i18n 110

gContestPaintingTough1::
	.i18n 111

gContestPaintingTough2::
	.i18n 112

gContestPaintingTough3::
	.i18n 113

gUnknown_0827ECBC:: @ 27ECBC
	.i18n 114

gUnknown_0827ECC3:: @ 27ECC3
	.i18n 115

gUnknown_0827ECCD:: @ 27ECCD
	.i18n 116

gUnknown_0827ECD5:: @ 27ECD5
	.i18n 117

gUnknown_0827ECDD:: @ 27ECDD
	.i18n 118

gUnknown_0827ECE3:: @ 27ECE3
	.i18n 119

gUnknown_0827ECEB:: @ 27ECEB
	.i18n 120

gUnknown_0827ECF2:: @ 27ECF2
	.i18n 121

gUnknown_0827ECF8:: @ 27ECF8
	.i18n 122

gUnknown_0827ED00:: @ 27ED00
	.i18n 123

gUnknown_0827ED06:: @ 27ED06
	.i18n 124

gUnknown_0827ED10:: @ 27ED10
	.i18n 125

gUnknown_0827ED18:: @ 27ED18
	.i18n 126

gUnknown_0827ED22:: @ 27ED22
	.i18n 127

gUnknown_0827ED2C:: @ 27ED2C
	.i18n 128

gUnknown_0827ED36:: @ 27ED36
	.i18n 129

gUnknown_0827ED40:: @ 27ED40
	.i18n 130

gUnknown_0827ED46:: @ 27ED46
	.i18n 131

gUnknown_0827ED4F:: @ 27ED4F
	.i18n 132

gUnknown_0827ED59:: @ 27ED59
	.i18n 133

gUnknown_0827ED65:: @ 27ED65
	.i18n 134

gUnknown_0827ED70:: @ 27ED70
	.i18n 135

gUnknown_0827ED74:: @ 27ED74
	.i18n 136

gUnknown_0827ED78:: @ 27ED78
	.i18n 137

gUnknown_0827ED80:: @ 27ED80
	.i18n 138

gUnknown_0827ED95:: @ 27ED95
	.i18n 139

gUnknown_0827EDAA:: @ 27EDAA
	.i18n 140

gUnknown_0827EDB5:: @ 27EDB5
	.i18n 141

gUnknown_0827EDBA:: @ 27EDBA
	.i18n 142

gUnknown_0827EDC1:: @ 27EDC1
	.i18n 143

gUnknown_0827EDC9:: @ 27EDC9
	.i18n 144

gUnknown_0827EDD5:: @ 27EDD5
	.i18n 145

gUnknown_0827EDE4:: @ 27EDE4
	.i18n 146

gUnknown_0827EDF0:: @ 27EDF0
	.i18n 147

gUnknown_0827EDF5:: @ 27EDF5
	.i18n 148

gUnknown_0827EDF7:: @ 27EDF7
	.i18n 149

gUnknown_0827EDF9:: @ 27EDF9
	.i18n 150

gUnknown_0827EDFB:: @ 27EDFB
	.i18n 151

gUnknown_0827EDFD:: @ 27EDFD
	.i18n 152

gUnknown_0827EDFF:: @ 27EDFF
	.i18n 153

gUnknown_0827EE01:: @ 27EE01
	.i18n 154

gUnknown_0827EE03:: @ 27EE03
	.i18n 155

gUnknown_0827EE05:: @ 27EE05
	.i18n 156

gUnknown_0827EE07:: @ 27EE07
	.i18n 157

gUnknown_0827EE09:: @ 27EE09
	.i18n 158

	.include "data/scripts/tv.inc"
	.include "data/text/tv.inc"

BattleFrontier_BattleTowerLobby_EventScript_28C7E9:: @ 828C7E9
LilycoveCity_ContestLobby_EventScript_28C7E9:: @ 828C7E9
SlateportCity_OceanicMuseum_1F_EventScript_28C7E9:: @ 828C7E9
SlateportCity_PokemonFanClub_EventScript_28C7E9:: @ 828C7E9
	special InterviewAfter
	incrementgamestat 6
	release
	end

SlateportCity_PokemonFanClub_EventScript_28C7F0:: @ 828C7F0
	setvar VAR_0x8005, 1
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C879
	copyvar VAR_0x8009, VAR_0x8006
	msgbox SlateportCity_PokemonFanClub_Text_280674, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C827
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C85C
	end

SlateportCity_PokemonFanClub_EventScript_28C827:: @ 828C827
	msgbox SlateportCity_PokemonFanClub_Text_28073B, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_INTERVIEW
	copyvar VAR_0x8005, VAR_0x8009
	setvar VAR_0x8006, EASY_CHAT_PERSON_REPORTER_FEMALE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C866
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C85C
	end

SlateportCity_PokemonFanClub_EventScript_28C85C:: @ 828C85C
	msgbox SlateportCity_PokemonFanClub_Text_2805E2, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_28C866:: @ 828C866
	msgbox SlateportCity_PokemonFanClub_Text_280789, MSGBOX_DEFAULT
	setvar VAR_0x8005, 1
	goto SlateportCity_PokemonFanClub_EventScript_28C7E9
	end

SlateportCity_PokemonFanClub_EventScript_28C879:: @ 828C879
	msgbox SlateportCity_PokemonFanClub_Text_28062E, MSGBOX_DEFAULT
	release
	end

SlateportCity_OceanicMuseum_1F_EventScript_28C883:: @ 828C883
	lock
	faceplayer
	setvar VAR_0x8005, 2
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C939
	copyvar VAR_0x8009, VAR_0x8006
	goto_if_set FLAG_OCEANIC_MUSEUM_MET_REPORTER, SlateportCity_OceanicMuseum_1F_EventScript_28C8C8
	setflag FLAG_OCEANIC_MUSEUM_MET_REPORTER
	msgbox SlateportCity_OceanicMuseum_1F_Text_2811A0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C8E7
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C91C
	end

SlateportCity_OceanicMuseum_1F_EventScript_28C8C8:: @ 828C8C8
	msgbox SlateportCity_OceanicMuseum_1F_Text_28126D, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C8E7
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C91C
	end

SlateportCity_OceanicMuseum_1F_EventScript_28C8E7:: @ 828C8E7
	msgbox SlateportCity_OceanicMuseum_1F_Text_2812F2, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_INTERVIEW
	copyvar VAR_0x8005, VAR_0x8009
	setvar VAR_0x8006, EASY_CHAT_PERSON_REPORTER_MALE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C926
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_OceanicMuseum_1F_EventScript_28C91C
	end

SlateportCity_OceanicMuseum_1F_EventScript_28C91C:: @ 828C91C
	msgbox SlateportCity_OceanicMuseum_1F_Text_281367, MSGBOX_DEFAULT
	release
	end

SlateportCity_OceanicMuseum_1F_EventScript_28C926:: @ 828C926
	msgbox SlateportCity_OceanicMuseum_1F_Text_2813B9, MSGBOX_DEFAULT
	setvar VAR_0x8005, 2
	goto SlateportCity_OceanicMuseum_1F_EventScript_28C7E9
	end

SlateportCity_OceanicMuseum_1F_EventScript_28C939:: @ 828C939
	msgbox SlateportCity_OceanicMuseum_1F_Text_28144D, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_28C943:: @ 828C943
	lock
	faceplayer
	specialvar VAR_RESULT, sub_80EF8F8
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C7F0
	setvar VAR_0x8005, 3
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28CA4F
	copyvar VAR_0x8009, VAR_0x8006
	msgbox SlateportCity_PokemonFanClub_Text_280270, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28C98C
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28CA45
	end

SlateportCity_PokemonFanClub_EventScript_28C98C:: @ 828C98C
	msgbox SlateportCity_PokemonFanClub_Text_28034F, MSGBOX_DEFAULT
	random 3
	copyvar VAR_0x800A, VAR_RESULT
	switch VAR_RESULT
	case 0, SlateportCity_PokemonFanClub_EventScript_28C9C3
	case 1, SlateportCity_PokemonFanClub_EventScript_28C9D1
	case 2, SlateportCity_PokemonFanClub_EventScript_28C9DF
	end

SlateportCity_PokemonFanClub_EventScript_28C9C3:: @ 828C9C3
	msgbox SlateportCity_PokemonFanClub_Text_280393, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_28C9ED
	end

SlateportCity_PokemonFanClub_EventScript_28C9D1:: @ 828C9D1
	msgbox SlateportCity_PokemonFanClub_Text_2803EF, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_28C9ED
	end

SlateportCity_PokemonFanClub_EventScript_28C9DF:: @ 828C9DF
	msgbox SlateportCity_PokemonFanClub_Text_280454, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_28C9ED
	end

SlateportCity_PokemonFanClub_EventScript_28C9ED:: @ 828C9ED
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_CLUB
	copyvar VAR_0x8005, VAR_0x8009
	setvar VAR_0x8006, 0
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28CA45
	msgbox SlateportCity_PokemonFanClub_Text_2804AC, MSGBOX_DEFAULT
	setvar VAR_0x8006, 1
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_28CA45
	msgbox SlateportCity_PokemonFanClub_Text_280523, MSGBOX_DEFAULT
	copyvar VAR_0x8007, VAR_0x800A
	setvar VAR_0x8005, 3
	goto SlateportCity_PokemonFanClub_EventScript_28C7E9
	end

SlateportCity_PokemonFanClub_EventScript_28CA45:: @ 828CA45
	msgbox SlateportCity_PokemonFanClub_Text_2805E2, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_28CA4F:: @ 828CA4F
	msgbox SlateportCity_PokemonFanClub_Text_28062E, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_28CA59:: @ 828CA59
	lock
	faceplayer
	goto_if_set FLAG_TEMP_2, LilycoveCity_ContestLobby_EventScript_28CB21
	setvar VAR_0x8005, 6
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CB21
	copyvar VAR_0x8009, VAR_0x8006
	msgbox LilycoveCity_ContestLobby_Text_27EF15, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CA9B
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CAD0
	end

LilycoveCity_ContestLobby_EventScript_28CA9B:: @ 828CA9B
	msgbox LilycoveCity_ContestLobby_Text_27EFE7, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_CONTEST_INTERVIEW
	copyvar VAR_0x8005, VAR_0x8009
	setvar VAR_0x8006, 0
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CADA
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CAD0
	end

LilycoveCity_ContestLobby_EventScript_28CAD0:: @ 828CAD0
	msgbox LilycoveCity_ContestLobby_Text_27F1EF, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_28CADA:: @ 828CADA
	setvar VAR_0x8004, 24
	special SetContestCategoryStringVarForInterview
	msgbox LilycoveCity_ContestLobby_Text_27F03E, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_CONTEST_INTERVIEW
	copyvar VAR_0x8005, VAR_0x8009
	setvar VAR_0x8006, 1
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CAD0
	msgbox LilycoveCity_ContestLobby_Text_27F0EC, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	setvar VAR_0x8005, 6
	goto LilycoveCity_ContestLobby_EventScript_28C7E9
	end

LilycoveCity_ContestLobby_EventScript_28CB21:: @ 828CB21
	msgbox LilycoveCity_ContestLobby_Text_27F23F, MSGBOX_DEFAULT
	release
	end

LilycoveCity_ContestLobby_EventScript_28CB2B:: @ 828CB2B
	compare VAR_LINK_CONTEST_ROOM_STATE, 2
	goto_if_ne LilycoveCity_ContestLobby_EventScript_28CB95
	setvar VAR_0x8005, 6
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_28CB95
	switch VAR_CONTEST_LOCATION
	case 0, LilycoveCity_ContestLobby_EventScript_28CB95
	case 2, LilycoveCity_ContestLobby_EventScript_28CB91
	case 1, LilycoveCity_ContestLobby_EventScript_28CB91
	case 3, LilycoveCity_ContestLobby_EventScript_28CB91
	case 4, LilycoveCity_ContestLobby_EventScript_28CB91
	case 5, LilycoveCity_ContestLobby_EventScript_28CB95
	end

LilycoveCity_ContestLobby_EventScript_28CB91:: @ 828CB91
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	return

LilycoveCity_ContestLobby_EventScript_28CB95:: @ 828CB95
	return

BattleFrontier_BattleTowerLobby_EventScript_28CB96:: @ 828CB96
	lock
	faceplayer
	goto_if_set FLAG_TEMP_2, BattleFrontier_BattleTowerLobby_EventScript_28CC7A
	setvar VAR_0x8005, 7
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC7A
	copyvar VAR_0x8009, VAR_0x8006
	msgbox BattleFrontier_BattleTowerLobby_Text_27F704, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CBD8
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC2E
	end

BattleFrontier_BattleTowerLobby_EventScript_28CBD8:: @ 828CBD8
	message BattleFrontier_BattleTowerLobby_Text_27F7BA
	waitmessage
	multichoice 20, 8, 45, 1
	copyvar VAR_0x8008, VAR_RESULT
	compare VAR_RESULT, 0
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC38
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC41
	msgbox BattleFrontier_BattleTowerLobby_Text_27F97A, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_TOWER_INTERVIEW
	copyvar VAR_0x8005, VAR_0x8009
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC4A
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC70
	end

BattleFrontier_BattleTowerLobby_EventScript_28CC2E:: @ 828CC2E
	msgbox BattleFrontier_BattleTowerLobby_Text_27F84C, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_28CC38:: @ 828CC38
	msgbox BattleFrontier_BattleTowerLobby_Text_27F8AE, MSGBOX_DEFAULT
	return

BattleFrontier_BattleTowerLobby_EventScript_28CC41:: @ 828CC41
	msgbox BattleFrontier_BattleTowerLobby_Text_27F921, MSGBOX_DEFAULT
	return

BattleFrontier_BattleTowerLobby_EventScript_28CC4A:: @ 828CC4A
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CC70
	msgbox BattleFrontier_BattleTowerLobby_Text_27F9FD, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	copyvar VAR_0x8004, VAR_0x8008
	setvar VAR_0x8005, 7
	goto BattleFrontier_BattleTowerLobby_EventScript_28C7E9
	end

BattleFrontier_BattleTowerLobby_EventScript_28CC70:: @ 828CC70
	msgbox BattleFrontier_BattleTowerLobby_Text_27FA6F, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_28CC7A:: @ 828CC7A
	msgbox BattleFrontier_BattleTowerLobby_Text_27FAF3, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerLobby_EventScript_28CC84:: @ 828CC84
	compare VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CCA6
	setvar VAR_0x8005, 7
	special InterviewBefore
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_28CCA6
	clearflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	return

BattleFrontier_BattleTowerLobby_EventScript_28CCA6:: @ 828CCA6
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	return

	.include "data/scripts/gabby_and_ty.inc"
	.include "data/text/pokemon_news.inc"
	.include "data/scripts/mauville_man.inc"
	.include "data/scripts/field_move_scripts.inc"
	.include "data/scripts/item_ball_scripts.inc"
	.include "data/scripts/mystery_event_club.inc"
	.include "data/scripts/day_care.inc"

EventScript_2926F8:: @ 82926F8
	animateflash 1
	setflashradius 1
	end

	.include "data/scripts/players_house.inc"

EventScript_RunningShoesManual:: @ 8292DE5
	msgbox LittlerootTown_BrendansHouse_1F_Text_1F7F66, MSGBOX_SIGN
	end

	.include "data/scripts/pokeblocks.inc"

gText_SoPretty:: @ 8294295
	.i18n 159

gText_SoDarling:: @ 82942A1
	.i18n 160

gText_SoRelaxed:: @ 82942AE
	.i18n 161

gText_SoSunny:: @ 82942BB
	.i18n 162

gText_SoDesirable:: @ 82942C6
	.i18n 163

gText_SoExciting:: @ 82942D5
	.i18n 164

gText_SoAmusing:: @ 82942E3
	.i18n 165

gText_SoMagical:: @ 82942F0
	.i18n 166

gOtherText_Is:: @ 82942FD
	.i18n 167

gOtherText_DontYouAgree:: @ 8294301
	.i18n 168

gMauvilleManText_ISoWantToGoOnAVacation:: @ 8294313
	.i18n 169

gMauvilleManText_IBoughtCrayonsWith120Colors:: @ 8294359
	.i18n 170

gMauvilleManText_WouldntItBeNiceIfWeCouldFloat:: @ 8294398
	.i18n 171

gMauvilleManText_WhenYouWriteOnASandyBeach:: @ 82943DA
	.i18n 172

gMauvilleManText_WhatsTheBottomOfTheSeaLike:: @ 829441C
	.i18n 173

gMauvilleManText_WhenYouSeeTheSettingSunDoesIt:: @ 8294460
	.i18n 174

gMauvilleManText_LyingBackInTheGreenGrass:: @ 82944A0
	.i18n 175

gMauvilleManText_SecretBasesAreSoWonderful:: @ 82944D5
	.i18n 176

	.include "data/text/trainers.inc"

EventScript_RepelWoreOff:: @ 82A4B2A
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	end

Text_RepelWoreOff: @ 82A4B33
	.i18n 177

	.include "data/scripts/safari_zone.inc"

MauvilleCity_GameCorner_EventScript_2A5AB1:: @ 82A5AB1
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 0
	getpricereduction 2
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2A5B0D
	addvar VAR_0x8004, 128
	goto MauvilleCity_GameCorner_EventScript_2A5B0D
	end

MauvilleCity_GameCorner_EventScript_2A5ADF:: @ 82A5ADF
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_210456
	setvar VAR_0x8004, 1
	getpricereduction 2
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_2A5B0D
	addvar VAR_0x8004, 128
	goto MauvilleCity_GameCorner_EventScript_2A5B0D
	end

MauvilleCity_GameCorner_EventScript_2A5B0D:: @ 82A5B0D
	special PlayRoulette
	waitstate
	end

	.include "data/text/roulette.inc"
	.include "data/text/pokedex_rating.inc"
	.include "data/text/lottery_corner.inc"
	.include "data/text/eon_ticket.inc"
	.include "data/text/braille.inc"
	.include "data/text/berries.inc"
	.include "data/text/shoal_cave.inc"

Text_PictureBookShelf: @ 82A81E5
	.i18n 178

Text_BookShelf: @ 82A820D
	.i18n 179

Text_PokemonCenterBookShelf: @ 82A8232
	.i18n 180

Text_Vase: @ 82A8276
	.i18n 181

Text_EmptyTrashCan: @ 82A82B3
	.i18n 182

Text_ShopShelf: @ 82A82BF
	.i18n 183

Text_Blueprint: @ 82A82F7
	.i18n 184

GraniteCave_B1F_MapScript2_2A8327: @ 82A8327
MirageTower_2F_MapScript2_2A8327: @ 82A8327
MirageTower_3F_MapScript2_2A8327: @ 82A8327
MtPyre_2F_MapScript2_2A8327: @ 82A8327
SkyPillar_2F_MapScript2_2A8327: @ 82A8327
SkyPillar_4F_MapScript2_2A8327: @ 82A8327
	map_script_2 VAR_ICE_STEP_COUNT, 0, EventScript_FallDownHole
	.2byte 0

GraniteCave_B1F_MapScript1_2A8331: @ 82A8331
MirageTower_2F_MapScript1_2A8331: @ 82A8331
MirageTower_3F_MapScript1_2A8331: @ 82A8331
MtPyre_2F_MapScript1_2A8331: @ 82A8331
	copyvar VAR_ICE_STEP_COUNT, 0x1
	end

EventScript_FallDownHole:: @ 82A8337
	lockall
	delay 20
	applymovement EVENT_OBJ_ID_PLAYER, GraniteCave_B1F_Movement_2A8369
	waitmovement 0
	playse SE_RU_HYUU
	delay 60
	warphole MAP_UNDEFINED
	waitstate
	end

gUnknown_082A8350:: @ 82A8350
	lockall
	delay 20
	applymovement EVENT_OBJ_ID_PLAYER, GraniteCave_B1F_Movement_2A8369
	waitmovement 0
	playse SE_RU_HYUU
	delay 60
	special DoFallWarp
	waitstate
	end

GraniteCave_B1F_Movement_2A8369: @ 82A8369
	set_invisible
	step_end

LilycoveCity_PokemonCenter_1F_EventScript_2A836B:: @ 82A836B
	special sub_818DAEC
	switch VAR_RESULT
	case 0, LilycoveCity_PokemonCenter_1F_EventScript_2A8554
	case 1, LilycoveCity_PokemonCenter_1F_EventScript_2A8395
	case 2, LilycoveCity_PokemonCenter_1F_EventScript_2A882A
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8395:: @ 82A8395
	lock
	faceplayer
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8A69, MSGBOX_DEFAULT
	specialvar VAR_RESULT, sub_818DBE8
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A83D0
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A83C6
	compare VAR_RESULT, 2
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8510
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A83C6:: @ 82A83C6
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8AB1, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A83D0:: @ 82A83D0
	special sub_818DC2C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8A7D, MSGBOX_DEFAULT
	specialvar VAR_RESULT, sub_818DC60
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8435
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A83F7
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A83F7:: @ 82A83F7
	special sub_818DCC8
	special sub_818DD14
	specialvar VAR_RESULT, sub_818DD54
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8419
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8427
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8419:: @ 82A8419
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8ACE, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8435
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8427:: @ 82A8427
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8B36, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8435
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8435:: @ 82A8435
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8B69, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8454
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A845E
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8454:: @ 82A8454
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8BCD, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A845E:: @ 82A845E
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8BAD, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A846C
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A846C:: @ 82A846C
	fadescreen 1
	setvar VAR_RESULT, 0
	special sub_818DD78
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A848E
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A84AD
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A848E:: @ 82A848E
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8BEE, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8454
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A846C
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A84AD:: @ 82A84AD
	specialvar VAR_RESULT, sub_818DE44
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A84C9
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A84D6
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A84C9:: @ 82A84C9
	special sub_818DC2C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8C0F, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A84D6:: @ 82A84D6
	specialvar VAR_RESULT, sub_818DE5C
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A84F2
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A84FF
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A84F2:: @ 82A84F2
	special sub_818DC2C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8C6F, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A84FF:: @ 82A84FF
	special sub_818DC2C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8CC8, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8510
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8510:: @ 82A8510
	setvar VAR_0x8004, 0
	specialvar VAR_0x8004, sub_818DEA0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8D5D, MSGBOX_DEFAULT
	giveitem_std VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8545
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A854F
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8545:: @ 82A8545
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8DBD, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A854F:: @ 82A854F
	special sub_818DEDC
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8554:: @ 82A8554
	lock
	faceplayer
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8E2B, MSGBOX_DEFAULT
	specialvar VAR_RESULT, sub_818E038
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8585
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A85AC
	compare VAR_RESULT, 2
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A86EC
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8585:: @ 82A8585
	specialvar VAR_RESULT, sub_818E06C
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A85C8
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A85D2
	compare VAR_RESULT, 2
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A85E0
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A85AC:: @ 82A85AC
	specialvar VAR_RESULT, sub_818E2D8
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8759
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A85C8
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A85C8:: @ 82A85C8
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8E4E, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A85D2:: @ 82A85D2
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8EAC, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A85EE
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A85E0:: @ 82A85E0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8EAC, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A85EE
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A85EE:: @ 82A85EE
	setvar VAR_0x8004, 0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8EEC, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A861C
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8612
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8612:: @ 82A8612
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8F65, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A861C:: @ 82A861C
	special sub_818E3BC
	compare VAR_0x8004, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A864C
	compare VAR_0x8004, EASY_CHAT_TYPE_QUIZ_ANSWER
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8656

LilycoveCity_PokemonCenter_1F_EventScript_2A8635:: @ 82A8635
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8660
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8689
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A864C:: @ 82A864C
	special sub_811A858
	waitstate
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8635
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8656:: @ 82A8656
	special sub_818E2FC
	waitstate
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8635
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8660:: @ 82A8660
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8F7E, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A867F
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A861C
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A867F:: @ 82A867F
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8F9A, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8689:: @ 82A8689
	special sub_818E37C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8F4D, MSGBOX_DEFAULT
	specialvar VAR_RESULT, sub_818E308
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A86C7
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A86B0
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A86B0:: @ 82A86B0
	playse SE_SEIKAI
	delay 10
	playse SE_SEIKAI
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A8FC7, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A86EC
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A86C7:: @ 82A86C7
	special sub_818E538
	special sub_818E274
	playse SE_HAZURE
	delay 10
	playse SE_HAZURE
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A90A5, MSGBOX_DEFAULT
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A90CD, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8759
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A86EC:: @ 82A86EC
	specialvar VAR_RESULT, sub_818E298
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8708
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8716
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8708:: @ 82A8708
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9007, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8724
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8716:: @ 82A8716
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9007, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8724
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8724:: @ 82A8724
	setvar VAR_0x8005, 0
	special sub_818E358
	special sub_818E37C
	giveitem_std VAR_0x8005
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A874C
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8759
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A874C:: @ 82A874C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A906A, MSGBOX_DEFAULT
	special sub_818E39C
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8759:: @ 82A8759
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A90FB, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8785
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8778
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8778:: @ 82A8778
	special sub_818E3EC
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9131, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8785:: @ 82A8785
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9153, MSGBOX_DEFAULT

LilycoveCity_PokemonCenter_1F_EventScript_2A878D:: @ 82A878D
	fadescreen 1
	setvar VAR_RESULT, 0
	special sub_818E3E0
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A87AF
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A87CE
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A87AF:: @ 82A87AF
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9212, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8778
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A878D
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A87CE:: @ 82A87CE
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9270, MSGBOX_DEFAULT
	special sub_818E430
	special sub_818E3BC
	setvar VAR_0x8004, 16

LilycoveCity_PokemonCenter_1F_EventScript_2A87E1:: @ 82A87E1
	fadescreen 1
	special sub_818E47C
	waitstate
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A87F8
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A8817
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A87F8:: @ 82A87F8
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A92D3, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8778
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A87E1
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8817:: @ 82A8817
	special sub_818E490
	special sub_818E4A4
	special sub_818E510
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9336, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A882A:: @ 82A882A
	lock
	faceplayer
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A93A7, MSGBOX_DEFAULT
	specialvar VAR_RESULT, sub_818E8B4
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8850
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A886C
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8850:: @ 82A8850
	specialvar VAR_RESULT, sub_818E8E0
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8876
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A886C
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A886C:: @ 82A886C
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A93D6, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8876:: @ 82A8876
	special sub_818E914
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A93F4, MSGBOX_DEFAULT
	checkitem ITEM_POKEBLOCK_CASE, 1
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A89AE
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A94E8, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A88B0
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A88BA
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A88B0:: @ 82A88B0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9556, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A88BA:: @ 82A88BA
	fadescreen 1
	special sub_818E92C
	waitstate
	compare VAR_RESULT, 65535
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A88D7
	compare VAR_RESULT, 65535
	goto_if_ne LilycoveCity_PokemonCenter_1F_EventScript_2A88F6
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A88D7:: @ 82A88D7
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9537, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A88B0
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A88BA
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A88F6:: @ 82A88F6
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9571, MSGBOX_DEFAULT
	special sub_818E940
	special sub_818E960
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A890A
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A890A:: @ 82A890A
	applymovement 4, LilycoveCity_PokemonCenter_1F_Movement_2A89B8
	waitmovement 0
	delay 60
	applymovement 5, LilycoveCity_PokemonCenter_1F_Movement_2A89BB
	waitmovement 0
	delay 60
	waitse
	playmoncry VAR_0x8005, 0
	delay 120
	waitmoncry
	compare VAR_0x8004, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A893F
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A894C
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A893F:: @ 82A893F
	applymovement 5, LilycoveCity_PokemonCenter_1F_Movement_2A89C2
	waitmovement 0
	delay 60

LilycoveCity_PokemonCenter_1F_EventScript_2A894C:: @ 82A894C
	applymovement 4, LilycoveCity_PokemonCenter_1F_Movement_2A89C0
	waitmovement 0
	delay 60
	compare VAR_0x8004, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8970
	compare VAR_0x8004, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A897E
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8970:: @ 82A8970
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A95AD, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A898F
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A897E:: @ 82A897E
	special sub_818E914
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9605, MSGBOX_DEFAULT
	goto LilycoveCity_PokemonCenter_1F_EventScript_2A898F
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A898F:: @ 82A898F
	specialvar VAR_RESULT, sub_818E8E0
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A89A1
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A89A1:: @ 82A89A1
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9669, MSGBOX_DEFAULT
	special PutLilycoveContestLadyShowOnTheAir
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A89AE:: @ 82A89AE
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9451, MSGBOX_DEFAULT
	release
	end

LilycoveCity_PokemonCenter_1F_Movement_2A89B8: @ 82A89B8
	face_right
	delay_8
	step_end

LilycoveCity_PokemonCenter_1F_Movement_2A89BB: @ 82A89BB
	face_left
	delay_8
	step_end

LilycoveCity_PokemonCenter_1F_Movement_2A89BE: @ 82A89BE
	face_down
	step_end

LilycoveCity_PokemonCenter_1F_Movement_2A89C0: @ 82A89C0
	face_player
	step_end

LilycoveCity_PokemonCenter_1F_Movement_2A89C2: @ 82A89C2
	disable_jump_landing_ground_effect
	jump_in_place_left
	disable_jump_landing_ground_effect
	jump_in_place_left
	step_end

LilycoveCity_PokemonCenter_1F_EventScript_2A89C7:: @ 82A89C7
	specialvar VAR_RESULT, sub_818E990
	special sub_818E914
	special sub_818E960
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8A0A
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8A1D
	compare VAR_RESULT, 2
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8A30
	compare VAR_RESULT, 3
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8A43
	compare VAR_RESULT, 4
	goto_if_eq LilycoveCity_PokemonCenter_1F_EventScript_2A8A56
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8A0A:: @ 82A8A0A
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, 0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A96DA, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8A1D:: @ 82A8A1D
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, 0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A970E, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8A30:: @ 82A8A30
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, 0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A96F6, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8A43:: @ 82A8A43
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, 0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A96E6, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_2A8A56:: @ 82A8A56
	lock
	faceplayer
	waitse
	playmoncry VAR_0x8005, 0
	msgbox LilycoveCity_PokemonCenter_1F_Text_2A9703, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_PokemonCenter_1F_Text_2A8A69: @ 82A8A69
	.i18n 185

LilycoveCity_PokemonCenter_1F_Text_2A8A7D: @ 82A8A7D
	.i18n 186

LilycoveCity_PokemonCenter_1F_Text_2A8AB1: @ 82A8AB1
	.i18n 187

LilycoveCity_PokemonCenter_1F_Text_2A8ACE: @ 82A8ACE
	.i18n 188

LilycoveCity_PokemonCenter_1F_Text_2A8B36: @ 82A8B36
	.i18n 189

LilycoveCity_PokemonCenter_1F_Text_2A8B69: @ 82A8B69
	.i18n 190

LilycoveCity_PokemonCenter_1F_Text_2A8BAD: @ 82A8BAD
	.i18n 191

LilycoveCity_PokemonCenter_1F_Text_2A8BCD: @ 82A8BCD
	.i18n 192

LilycoveCity_PokemonCenter_1F_Text_2A8BEE: @ 82A8BEE
	.i18n 193

LilycoveCity_PokemonCenter_1F_Text_2A8C0F: @ 82A8C0F
	.i18n 194

LilycoveCity_PokemonCenter_1F_Text_2A8C6F: @ 82A8C6F
	.i18n 195

LilycoveCity_PokemonCenter_1F_Text_2A8CC8: @ 82A8CC8
	.i18n 196

LilycoveCity_PokemonCenter_1F_Text_2A8D5D: @ 82A8D5D
	.i18n 197

LilycoveCity_PokemonCenter_1F_Text_2A8DBD: @ 82A8DBD
	.i18n 198

LilycoveCity_PokemonCenter_1F_Text_2A8E2B: @ 82A8E2B
	.i18n 199

LilycoveCity_PokemonCenter_1F_Text_2A8E4E: @ 82A8E4E
	.i18n 200

LilycoveCity_PokemonCenter_1F_Text_2A8EAC: @ 82A8EAC
	.i18n 201

LilycoveCity_PokemonCenter_1F_Text_2A8EEC: @ 82A8EEC
	.i18n 202

LilycoveCity_PokemonCenter_1F_Text_2A8F4D: @ 82A8F4D
	.i18n 203

LilycoveCity_PokemonCenter_1F_Text_2A8F65: @ 82A8F65
	.i18n 204

LilycoveCity_PokemonCenter_1F_Text_2A8F7E: @ 82A8F7E
	.i18n 205

LilycoveCity_PokemonCenter_1F_Text_2A8F9A: @ 82A8F9A
	.i18n 206

LilycoveCity_PokemonCenter_1F_Text_2A8FC7: @ 82A8FC7
	.i18n 207

LilycoveCity_PokemonCenter_1F_Text_2A9007: @ 82A9007
	.i18n 208

LilycoveCity_PokemonCenter_1F_Text_2A9056: @ 82A9056
	.i18n 209

LilycoveCity_PokemonCenter_1F_Text_2A906A: @ 82A906A
	.i18n 210

LilycoveCity_PokemonCenter_1F_Text_2A90A5: @ 82A90A5
	.i18n 211

LilycoveCity_PokemonCenter_1F_Text_2A90CD: @ 82A90CD
	.i18n 212

LilycoveCity_PokemonCenter_1F_Text_2A90FB: @ 82A90FB
	.i18n 213

LilycoveCity_PokemonCenter_1F_Text_2A9131: @ 82A9131
	.i18n 214

LilycoveCity_PokemonCenter_1F_Text_2A9153: @ 82A9153
	.i18n 215

LilycoveCity_PokemonCenter_1F_Text_2A9212: @ 82A9212
	.i18n 216

LilycoveCity_PokemonCenter_1F_Text_2A9270: @ 82A9270
	.i18n 217

LilycoveCity_PokemonCenter_1F_Text_2A92D3: @ 82A92D3
	.i18n 218

LilycoveCity_PokemonCenter_1F_Text_2A9305: @ 82A9305
	.i18n 219

LilycoveCity_PokemonCenter_1F_Text_2A9336: @ 82A9336
	.i18n 220

LilycoveCity_PokemonCenter_1F_Text_2A93A7: @ 82A93A7
	.i18n 221

LilycoveCity_PokemonCenter_1F_Text_2A93D6: @ 82A93D6
	.i18n 222

LilycoveCity_PokemonCenter_1F_Text_2A93F4: @ 82A93F4
	.i18n 223

LilycoveCity_PokemonCenter_1F_Text_2A9451: @ 82A9451
	.i18n 224

LilycoveCity_PokemonCenter_1F_Text_2A94E8: @ 82A94E8
	.i18n 225

LilycoveCity_PokemonCenter_1F_Text_2A9537: @ 82A9537
	.i18n 226

LilycoveCity_PokemonCenter_1F_Text_2A9556: @ 82A9556
	.i18n 227

LilycoveCity_PokemonCenter_1F_Text_2A9571: @ 82A9571
	.i18n 228

LilycoveCity_PokemonCenter_1F_Text_2A95AD: @ 82A95AD
	.i18n 229

LilycoveCity_PokemonCenter_1F_Text_2A9605: @ 82A9605
	.i18n 230

LilycoveCity_PokemonCenter_1F_Text_2A9669: @ 82A9669
	.i18n 231

LilycoveCity_PokemonCenter_1F_Text_2A96DA: @ 82A96DA
	.i18n 232

LilycoveCity_PokemonCenter_1F_Text_2A96E6: @ 82A96E6
	.i18n 233

LilycoveCity_PokemonCenter_1F_Text_2A96F6: @ 82A96F6
	.i18n 234

LilycoveCity_PokemonCenter_1F_Text_2A9703: @ 82A9703
	.i18n 235

LilycoveCity_PokemonCenter_1F_Text_2A970E: @ 82A970E
	.i18n 236

	.include "data/text/match_call.inc"
	.include "data/scripts/apprentice.inc"

gBattleDomeOpponentPotentialText1::
	.i18n 237

gBattleDomeOpponentPotentialText2::
	.i18n 238

gBattleDomeOpponentPotentialText3::
	.i18n 239

gBattleDomeOpponentPotentialText4::
	.i18n 240

gBattleDomeOpponentPotentialText5::
	.i18n 241

gBattleDomeOpponentPotentialText6::
	.i18n 242

gBattleDomeOpponentPotentialText7::
	.i18n 243

gBattleDomeOpponentPotentialText8::
	.i18n 244

gBattleDomeOpponentPotentialText9::
	.i18n 245

gBattleDomeOpponentPotentialText10::
	.i18n 246

gBattleDomeOpponentPotentialText11::
	.i18n 247

gBattleDomeOpponentPotentialText12::
	.i18n 248

gBattleDomeOpponentPotentialText13::
	.i18n 249

gBattleDomeOpponentPotentialText14::
	.i18n 250

gBattleDomeOpponentPotentialText15::
	.i18n 251

gBattleDomeOpponentPotentialText16::
	.i18n 252

gBattleDomeOpponentPotentialText17::
	.i18n 253

gBattleDomeOpponentStyleText1::
	.i18n 254

gBattleDomeOpponentStyleText2::
	.i18n 255

gBattleDomeOpponentStyleText3::
	.i18n 256

gBattleDomeOpponentStyleText4::
	.i18n 257

gBattleDomeOpponentStyleText5::
	.i18n 258

gBattleDomeOpponentStyleText6::
	.i18n 259

gBattleDomeOpponentStyleText7::
	.i18n 260

gBattleDomeOpponentStyleText8::
	.i18n 261

gBattleDomeOpponentStyleText9::
	.i18n 262

gBattleDomeOpponentStyleText10::
	.i18n 263

gBattleDomeOpponentStyleText11::
	.i18n 264

gBattleDomeOpponentStyleText12::
	.i18n 265

gBattleDomeOpponentStyleText13::
	.i18n 266

gBattleDomeOpponentStyleText14::
	.i18n 267

gBattleDomeOpponentStyleText15::
	.i18n 268

gBattleDomeOpponentStyleText16::
	.i18n 269

gBattleDomeOpponentStyleText17::
	.i18n 270

gBattleDomeOpponentStyleText18::
	.i18n 271

gBattleDomeOpponentStyleText19::
	.i18n 272

gBattleDomeOpponentStyleText20::
	.i18n 273

gBattleDomeOpponentStyleText21::
	.i18n 274

gBattleDomeOpponentStyleText22::
	.i18n 275

gBattleDomeOpponentStyleText23::
	.i18n 276

gBattleDomeOpponentStyleText24::
	.i18n 277

gBattleDomeOpponentStyleText25::
	.i18n 278

gBattleDomeOpponentStyleText26::
	.i18n 279

gBattleDomeOpponentStyleText27::
	.i18n 280

gBattleDomeOpponentStyleText28::
	.i18n 281

gBattleDomeOpponentStyleTextUnused1::
	.i18n 282

gBattleDomeOpponentStyleTextUnused2::
	.i18n 283

gBattleDomeOpponentStyleTextUnused3::
	.i18n 284

gBattleDomeOpponentStyleTextUnused4::
	.i18n 285

gBattleDomeOpponentStatsText1::
	.i18n 286

gBattleDomeOpponentStatsText2::
	.i18n 287

gBattleDomeOpponentStatsText3::
	.i18n 288

gBattleDomeOpponentStatsText4::
	.i18n 289

gBattleDomeOpponentStatsText5::
	.i18n 290

gBattleDomeOpponentStatsText6::
	.i18n 291

gBattleDomeOpponentStatsText7::
	.i18n 292

gBattleDomeOpponentStatsText8::
	.i18n 293

gBattleDomeOpponentStatsText9::
	.i18n 294

gBattleDomeOpponentStatsText10::
	.i18n 295

gBattleDomeOpponentStatsText11::
	.i18n 296

gBattleDomeOpponentStatsText12::
	.i18n 297

gBattleDomeOpponentStatsText13::
	.i18n 298

gBattleDomeOpponentStatsText14::
	.i18n 299

gBattleDomeOpponentStatsText15::
	.i18n 300

gBattleDomeOpponentStatsText16::
	.i18n 301

gBattleDomeOpponentStatsText17::
	.i18n 302

gBattleDomeOpponentStatsText18::
	.i18n 303

gBattleDomeOpponentStatsText19::
	.i18n 304

gBattleDomeOpponentStatsText20::
	.i18n 305

gBattleDomeOpponentStatsText21::
	.i18n 306

gBattleDomeOpponentStatsText22::
	.i18n 307

gBattleDomeOpponentStatsText23::
	.i18n 308

gBattleDomeOpponentStatsText24::
	.i18n 309

gBattleDomeOpponentStatsText25::
	.i18n 310

gBattleDomeOpponentStatsText26::
	.i18n 311

gBattleDomeOpponentStatsText27::
	.i18n 312

gBattleDomeOpponentStatsText28::
	.i18n 313

gBattleDomeOpponentStatsText29::
	.i18n 314

gBattleDomeOpponentStatsText30::
	.i18n 315

gBattleDomeOpponentStatsText31::
	.i18n 316

gBattleDomeOpponentStatsText32::
	.i18n 317

gBattleDomeOpponentStatsText33::
	.i18n 318

gBattleDomeOpponentStatsText34::
	.i18n 319

gBattleDomeOpponentStatsText35::
	.i18n 320

gBattleDomeOpponentStatsText36::
	.i18n 321

gBattleDomeOpponentStatsText37::
	.i18n 322

gBattleDomeOpponentStatsText38::
	.i18n 323

gBattleDomeOpponentStatsText39::
	.i18n 324

gBattleDomeOpponentStatsText40::
	.i18n 325

gBattleDomeOpponentStatsText41::
	.i18n 326

gBattleDomeOpponentStatsText42::
	.i18n 327

gBattleDomeOpponentStatsText43::
	.i18n 328

gBattleDomeWinText1::
	.i18n 329

gBattleDomeWinText2::
	.i18n 330

gBattleDomeWinText3::
	.i18n 331

gBattleDomeWinText4::
	.i18n 332

gBattleDomeWinText5::
	.i18n 333

gBattleDomeWinText6::
	.i18n 334

gBattleDomeWinText7::
	.i18n 335

gBattleDomeMatchNumberText1::
	.i18n 336

gBattleDomeMatchNumberText2::
	.i18n 337

gBattleDomeMatchNumberText3::
	.i18n 338

gBattleDomeMatchNumberText4::
	.i18n 339

gBattleDomeMatchNumberText5::
	.i18n 340

gBattleDomeMatchNumberText6::
	.i18n 341

gBattleDomeMatchNumberText7::
	.i18n 342

gBattleDomeMatchNumberText8::
	.i18n 343

gBattleDomeMatchNumberText9::
	.i18n 344

gBattleDomeMatchNumberText10::
	.i18n 345

gBattleDomeMatchNumberText11::
	.i18n 346

gBattleDomeMatchNumberText12::
	.i18n 347

gBattleDomeMatchNumberText13::
	.i18n 348

gBattleDomeMatchNumberText14::
	.i18n 349

gBattleDomeMatchNumberText15::
	.i18n 350

BattleFrontier_BattlePikeRandomRoom1_MapScripts_2C3E1B: @ 82C3E1B
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePikeRandomRoom1_MapScript1_2C3E25
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRandomRoom1_MapScript2_2C3EDE

BattleFrontier_BattlePikeRandomRoom1_MapScript1_2C3E25: @ 82C3E25
	setvar VAR_0x8004, 4
	special CallBattlePikeFunction
	setvar VAR_0x8004, 5
	special CallBattlePikeFunction
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EB1
	case 1, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EB1
	case 2, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EC0
	case 3, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EA2
	case 4, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EB1
	case 7, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3E93
	case 6, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EA2
	case 8, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3ECF
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3E93:: @ 82C3E93
	setobjectxyperm 1, 2, 5
	setobjectxyperm 2, 6, 5
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EA2:: @ 82C3EA2
	setobjectxyperm 1, 4, 4
	setobjectxyperm 2, 3, 4
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EB1:: @ 82C3EB1
	setobjectxyperm 1, 4, 4
	setobjectxyperm 2, 0, 0
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EC0:: @ 82C3EC0
	setobjectxyperm 1, 5, 5
	setobjectxyperm 2, 0, 0
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3ECF:: @ 82C3ECF
	setobjectxyperm 1, 4, 3
	setobjectxyperm 2, 4, 4
	end

BattleFrontier_BattlePikeRandomRoom1_MapScript2_2C3EDE: @ 82C3EDE
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EE8
	.2byte 0

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3EE8:: @ 82C3EE8
	setvar VAR_OBJ_GFX_ID_1, EVENT_OBJ_GFX_LINK_RECEPTIONIST
	setvar VAR_OBJ_GFX_ID_0, EVENT_OBJ_GFX_LINK_RECEPTIONIST
	setvar VAR_0x8004, 5
	special CallBattlePikeFunction
	compare VAR_RESULT, 3
	goto_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3F35
	compare VAR_RESULT, 6
	goto_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3F35
	compare VAR_RESULT, 7
	goto_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3F35
	compare VAR_RESULT, 8
	goto_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3F3F
	hideobjectat 2, MAP_BATTLE_FRONTIER_BATTLE_PIKE_RANDOM_ROOM1
	setvar VAR_TEMP_4, 1
	turnobject 255, 2
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3F35:: @ 82C3F35
	setvar VAR_TEMP_4, 1
	turnobject 255, 2
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C3F3F:: @ 82C3F3F
	setvar VAR_TEMP_4, 1
	turnobject 255, 2
	hideobjectat 1, MAP_BATTLE_FRONTIER_BATTLE_PIKE_RANDOM_ROOM1
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F4E:: @ 82C3F4E
	setvar VAR_0x8007, 0
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F6F
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F59:: @ 82C3F59
	setvar VAR_0x8007, 1
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F6F
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F64:: @ 82C3F64
	setvar VAR_0x8007, 2
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F6F
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C3F6F:: @ 82C3F6F
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special CallBattlePikeFunction
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallBattlePikeFunction
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 0
	special CallBattlePikeFunction
	setvar VAR_0x8004, 5
	special CallBattlePikeFunction
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 2, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 3, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 4, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 5, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4049
	case 6, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 7, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	case 8, BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4030:: @ 82C4030
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePikeThreePathRoom_Movement_2C427A
	waitmovement 0
	call BattleFrontier_BattlePikeThreePathRoom_EventScript_25BB49
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_RANDOM_ROOM1, 255, 4, 7
	waitstate
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4049:: @ 82C4049
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePikeThreePathRoom_Movement_2C427A
	waitmovement 0
	call BattleFrontier_BattlePikeThreePathRoom_EventScript_25BB49
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_RANDOM_ROOM3, 255, 4, 19
	waitstate
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4062:: @ 82C4062
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_2, 1
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C406D:: @ 82C406D
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_2, 0
	lockall
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_25CE36, MSGBOX_DEFAULT
	closemessage
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4082:: @ 82C4082
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_2, 1
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C408D:: @ 82C408D
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_2, 0
	lockall
	msgbox BattleFrontier_BattlePikeRandomRoom1_Text_25CE36, MSGBOX_DEFAULT
	closemessage
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C40A2:: @ 82C40A2
	setvar VAR_0x8004, 25
	special CallBattlePikeFunction
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4128
	compare VAR_RESULT, 1
	call_if_ne BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4136
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special CallBattlePikeFunction
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallBattlePikeFunction
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 3
	special CallBattlePikeFunction
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4144
	compare VAR_RESULT, 0
	call_if_eq BattleFrontier_BattlePikeRandomRoom1_EventScript_2C415C
	waitstate
	end

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4128:: @ 82C4128
BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4128:: @ 82C4128
	setvar VAR_0x8004, 24
	setvar VAR_0x8005, 1
	special CallBattlePikeFunction
	return

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4136:: @ 82C4136
BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4136:: @ 82C4136
	setvar VAR_0x8004, 24
	setvar VAR_0x8005, 0
	special CallBattlePikeFunction
	return

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C4144:: @ 82C4144
BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4144:: @ 82C4144
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePikeRandomRoom1_Movement_2C427A
	waitmovement 0
	call BattleFrontier_BattlePikeRandomRoom1_EventScript_25BB49
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_RANDOM_ROOM2, 255, 2, 7
	return

BattleFrontier_BattlePikeRandomRoom1_EventScript_2C415C:: @ 82C415C
BattleFrontier_BattlePikeRandomRoom3_EventScript_2C415C:: @ 82C415C
	applymovement EVENT_OBJ_ID_PLAYER, BattleFrontier_BattlePikeRandomRoom1_Movement_2C427A
	waitmovement 0
	call BattleFrontier_BattlePikeRandomRoom1_EventScript_25BB49
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM, 255, 6, 10
	return

BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4174:: @ 82C4174
	setvar VAR_0x8004, 7
	special CallBattlePikeFunction
	setvar VAR_0x8004, 25
	special CallBattlePikeFunction
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4128
	compare VAR_RESULT, 1
	call_if_ne BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4136
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	special CallBattlePikeFunction
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	copyvar VAR_0x8006, VAR_RESULT
	special CallBattlePikeFunction
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 2
	special CallFrontierUtilFunc
	addvar VAR_RESULT, 1
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	copyvar VAR_0x8006, VAR_RESULT
	special CallFrontierUtilFunc
	setvar VAR_0x8004, 3
	special CallBattlePikeFunction
	compare VAR_RESULT, 1
	call_if_eq BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4144
	compare VAR_RESULT, 0
	call_if_eq BattleFrontier_BattlePikeRandomRoom3_EventScript_2C415C
	waitstate
	end

BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4202:: @ 82C4202
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_2, 1
	end

BattleFrontier_BattlePikeRandomRoom3_EventScript_2C420D:: @ 82C420D
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_2, 0
	lockall
	msgbox BattleFrontier_BattlePikeRandomRoom3_Text_25CE36, MSGBOX_DEFAULT
	closemessage
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4222:: @ 82C4222
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 4
	special CallFrontierUtilFunc
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 255, 5, 6
	waitstate
	end

BattleFrontier_BattlePikeRandomRoom1_MapScript1_2C423E: @ 82C423E
BattleFrontier_BattlePikeThreePathRoom_MapScript1_2C423E: @ 82C423E
	setorcopyvar VAR_0x8006, VAR_RESULT
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 0
	special CallFrontierUtilFunc
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_2C426B
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_2C426B
	call BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4271

BattleFrontier_BattlePikeThreePathRoom_EventScript_2C426B:: @ 82C426B
	setorcopyvar VAR_RESULT, VAR_0x8006
	end

BattleFrontier_BattlePikeRandomRoom3_EventScript_2C4271:: @ 82C4271
BattleFrontier_BattlePikeThreePathRoom_EventScript_2C4271:: @ 82C4271
	setvar VAR_0x8004, 21
	special CallFrontierUtilFunc
	return

BattleFrontier_BattlePikeRandomRoom1_Movement_2C427A: @ 82C427A
BattleFrontier_BattlePikeThreePathRoom_Movement_2C427A: @ 82C427A
	set_invisible
	step_end

LilycoveCity_ContestLobby_Text_2C427C: @ 82C427C
	.i18n 351

LilycoveCity_ContestLobby_Text_2C42F4: @ 82C42F4
	.i18n 352

LilycoveCity_ContestLobby_Text_2C4332: @ 82C4332
	.i18n 353

LilycoveCity_ContestLobby_Text_2C439D: @ 82C439D
	.i18n 354

LilycoveCity_ContestLobby_Text_2C43FA: @ 82C43FA
	.i18n 355

LilycoveCity_ContestLobby_Text_2C444C: @ 82C444C
	.i18n 356

LilycoveCity_ContestLobby_Text_2C451B: @ 82C451B
	.i18n 357

LilycoveCity_ContestLobby_Text_2C4573: @ 82C4573
	.i18n 358

LilycoveCity_ContestLobby_Text_2C45E8: @ 82C45E8
	.i18n 359

LilycoveCity_ContestLobby_Text_2C464B: @ 82C464B
	.i18n 360

LilycoveCity_ContestLobby_Text_2C465A: @ 82C465A
	.i18n 361

LilycoveCity_ContestLobby_Text_2C4669: @ 82C4669
	.i18n 362

LilycoveCity_ContestLobby_Text_2C4679: @ 82C4679
	.i18n 363

LilycoveCity_ContestLobby_Text_2C46B1: @ 82C46B1
	.i18n 364

LilycoveCity_ContestLobby_Text_2C4763: @ 82C4763
	.i18n 365

FallarborTown_BattleTentLobby_Text_2C47EB: @ 82C47EB
	.i18n 366

FallarborTown_BattleTentLobby_Text_2C4843: @ 82C4843
	.i18n 367

FallarborTown_BattleTentLobby_Text_2C487F: @ 82C487F
	.i18n 368

FallarborTown_BattleTentLobby_Text_2C48AC: @ 82C48AC
	.i18n 369

FallarborTown_BattleTentLobby_Text_2C4B35: @ 82C4B35
	.i18n 370

FallarborTown_BattleTentLobby_Text_2C4B77: @ 82C4B77
	.i18n 371

FallarborTown_BattleTentLobby_Text_2C4BC8: @ 82C4BC8
	.i18n 372

FallarborTown_BattleTentLobby_Text_2C4BFA: @ 82C4BFA
	.i18n 373

FallarborTown_BattleTentLobby_Text_2C4CC0: @ 82C4CC0
	.i18n 374

FallarborTown_BattleTentLobby_Text_2C4DC3: @ 82C4DC3
	.i18n 375

FallarborTown_BattleTentLobby_Text_2C4DED: @ 82C4DED
	.i18n 376

FallarborTown_BattleTentLobby_Text_2C4EC3: @ 82C4EC3
	.i18n 377

FallarborTown_BattleTentLobby_Text_2C4EFF: @ 82C4EFF
	.i18n 378

FallarborTown_BattleTentLobby_Text_2C4F22: @ 82C4F22
	.i18n 379

FallarborTown_BattleTentLobby_Text_2C4F69: @ 82C4F69
	.i18n 380

FallarborTown_BattleTentLobby_Text_2C4F83: @ 82C4F83
	.i18n 381

FallarborTown_BattleTentLobby_Text_2C4FD7: @ 82C4FD7
	.i18n 382

FallarborTown_BattleTentLobby_Text_2C501F: @ 82C501F
	.i18n 383

FallarborTown_BattleTentLobby_Text_2C504C: @ 82C504C
	.i18n 384

VerdanturfTown_BattleTentLobby_Text_2C50C3: @ 82C50C3
	.i18n 385

VerdanturfTown_BattleTentLobby_Text_2C5129: @ 82C5129
	.i18n 386

VerdanturfTown_BattleTentLobby_Text_2C5163: @ 82C5163
	.i18n 387

VerdanturfTown_BattleTentLobby_Text_2C539A: @ 82C539A
	.i18n 388

VerdanturfTown_BattleTentLobby_Text_2C53DB: @ 82C53DB
	.i18n 389

VerdanturfTown_BattleTentLobby_Text_2C543D: @ 82C543D
	.i18n 390

VerdanturfTown_BattleTentLobby_Text_2C5538: @ 82C5538
	.i18n 391

VerdanturfTown_BattleTentLobby_Text_2C5633: @ 82C5633
	.i18n 392

VerdanturfTown_BattleTentLobby_Text_2C5662: @ 82C5662
	.i18n 393

VerdanturfTown_BattleTentLobby_Text_2C56A2: @ 82C56A2
	.i18n 394

VerdanturfTown_BattleTentLobby_Text_2C56B8: @ 82C56B8
	.i18n 395

VerdanturfTown_BattleTentLobby_Text_2C5731: @ 82C5731
	.i18n 396

VerdanturfTown_BattleTentLobby_Text_2C5791: @ 82C5791
	.i18n 397

VerdanturfTown_BattleTentLobby_Text_2C57CD: @ 82C57CD
	.i18n 398

SlateportCity_BattleTentLobby_Text_2C5810: @ 82C5810
	.i18n 399

SlateportCity_BattleTentLobby_Text_2C586A: @ 82C586A
	.i18n 400

SlateportCity_BattleTentLobby_Text_2C589C: @ 82C589C
	.i18n 401

SlateportCity_BattleTentLobby_Text_2C5AA5: @ 82C5AA5
	.i18n 402

SlateportCity_BattleTentLobby_Text_2C5AC9: @ 82C5AC9
	.i18n 403

SlateportCity_BattleTentLobby_Text_2C5B06: @ 82C5B06
	.i18n 404

SlateportCity_BattleTentLobby_Text_2C5B4A: @ 82C5B4A
	.i18n 405

SlateportCity_BattleTentLobby_Text_2C5B8C: @ 82C5B8C
	.i18n 406

SlateportCity_BattleTentLobby_Text_2C5BA2: @ 82C5BA2
	.i18n 407

SlateportCity_BattleTentLobby_Text_2C5C30: @ 82C5C30
	.i18n 408

SlateportCity_BattleTentLobby_Text_2C5C6F: @ 82C5C6F
	.i18n 409

SlateportCity_BattleTentLobby_Text_2C5D14: @ 82C5D14
	.i18n 410

SlateportCity_BattleTentLobby_Text_2C5D52: @ 82C5D52
	.i18n 411

SlateportCity_BattleTentLobby_Text_2C5DA7: @ 82C5DA7
	.i18n 412

SlateportCity_BattleTentLobby_Text_2C5DFA: @ 82C5DFA
	.i18n 413

SlateportCity_BattleTentLobby_Text_2C5E85: @ 82C5E85
	.i18n 414

SlateportCity_BattleTentLobby_Text_2C5EA9: @ 82C5EA9
	.i18n 415

SlateportCity_BattleTentLobby_Text_2C5EC3: @ 82C5EC3
	.i18n 416

SlateportCity_BattleTentLobby_Text_2C5EE5: @ 82C5EE5
	.i18n 417

SlateportCity_BattleTentLobby_Text_2C5F08: @ 82C5F08
	.i18n 418

SlateportCity_BattleTentLobby_Text_2C5F9D: @ 82C5F9D
	.i18n 419

SlateportCity_BattleTentLobby_Text_2C6020: @ 82C6020
	.i18n 420

SlateportCity_BattleTentLobby_Text_2C60C0: @ 82C60C0
	.i18n 421

SlateportCity_BattleTentLobby_Text_2C61FE: @ 82C61FE
	.i18n 422

VerdanturfTown_BattleTentLobby_Text_2C6261: @ 82C6261
	.i18n 423

VerdanturfTown_BattleTentLobby_Text_2C628E: @ 82C628E
	.i18n 424

VerdanturfTown_BattleTentLobby_Text_2C62B1: @ 82C62B1
	.i18n 425

VerdanturfTown_BattleTentLobby_Text_2C636D: @ 82C636D
	.i18n 426

VerdanturfTown_BattleTentLobby_Text_2C64BA: @ 82C64BA
	.i18n 427

VerdanturfTown_BattleTentLobby_Text_2C6612: @ 82C6612
	.i18n 428

VerdanturfTown_BattleTentLobby_Text_2C671E: @ 82C671E
	.i18n 429

FallarborTown_BattleTentLobby_Text_2C67CD: @ 82C67CD
VerdanturfTown_BattleTentLobby_Text_2C67CD: @ 82C67CD
	.i18n 430

VerdanturfTown_BattleTentLobby_Text_2C6878: @ 82C6878
	.i18n 431

LilycoveCity_Harbor_Text_2C68A5: @ 82C68A5
	.i18n 432

LilycoveCity_Harbor_Text_2C6951: @ 82C6951
	.i18n 433

LilycoveCity_Harbor_Text_2C69AA: @ 82C69AA
	.i18n 434

LilycoveCity_Harbor_Text_2C6A71: @ 82C6A71
	.i18n 435

FarawayIsland_Entrance_Text_2C6B42: @ 82C6B42
	.i18n 436

BirthIsland_Harbor_Text_2C6B90: @ 82C6B90
	.i18n 437

LilycoveCity_Harbor_Text_2C6BD4: @ 82C6BD4
	.i18n 438

NavelRock_Harbor_Text_2C6CE6: @ 82C6CE6
	.i18n 439

FarawayIsland_Entrance_Text_2C6D5A: @ 82C6D5A
	.i18n 440

FarawayIsland_Interior_Text_2C6DFF: @ 82C6DFF
	.i18n 441

MauvilleCity_Text_2C6E05: @ 82C6E05
	.i18n 442

SlateportCity_PokemonFanClub_Text_2C6E37: @ 82C6E37
	.i18n 443

SlateportCity_PokemonFanClub_Text_2C6F33: @ 82C6F33
	.i18n 444

SlateportCity_PokemonFanClub_Text_2C6F66: @ 82C6F66
	.i18n 445

SlateportCity_PokemonFanClub_Text_2C6F9E: @ 82C6F9E
	.i18n 446

MauvilleCity_Text_2C6FDB: @ 82C6FDB
	.i18n 447

MauvilleCity_Text_2C70C4: @ 82C70C4
	.i18n 448

MauvilleCity_Text_2C70F3: @ 82C70F3
	.i18n 449

MauvilleCity_Text_2C7133: @ 82C7133
	.i18n 450

VerdanturfTown_PokemonCenter_1F_Text_2C7174: @ 82C7174
	.i18n 451

VerdanturfTown_PokemonCenter_1F_Text_2C7221: @ 82C7221
	.i18n 452

VerdanturfTown_PokemonCenter_1F_Text_2C7243: @ 82C7243
	.i18n 453

VerdanturfTown_PokemonCenter_1F_Text_2C726E: @ 82C726E
	.i18n 454

LavaridgeTown_House_Text_2C72B6: @ 82C72B6
	.i18n 455

LavaridgeTown_House_Text_2C737F: @ 82C737F
	.i18n 456

LavaridgeTown_House_Text_2C73B1: @ 82C73B1
	.i18n 457

LavaridgeTown_House_Text_2C73F6: @ 82C73F6
	.i18n 458

FallarborTown_Mart_Text_2C7449: @ 82C7449
	.i18n 459

FallarborTown_Mart_Text_2C7556: @ 82C7556
	.i18n 460

FallarborTown_Mart_Text_2C7582: @ 82C7582
	.i18n 461

FallarborTown_Mart_Text_2C75B5: @ 82C75B5
	.i18n 462

FortreeCity_House2_Text_2C7637: @ 82C7637
	.i18n 463

FortreeCity_House2_Text_2C76E2: @ 82C76E2
	.i18n 464

FortreeCity_House2_Text_2C7721: @ 82C7721
	.i18n 465

FortreeCity_House2_Text_2C775A: @ 82C775A
	.i18n 466

LilycoveCity_DepartmentStoreRooftop_Text_2C77C6: @ 82C77C6
	.i18n 467

LilycoveCity_DepartmentStoreRooftop_Text_2C78D1: @ 82C78D1
	.i18n 468

LilycoveCity_DepartmentStoreRooftop_Text_2C7911: @ 82C7911
	.i18n 469

LilycoveCity_DepartmentStoreRooftop_Text_2C794B: @ 82C794B
	.i18n 470

MossdeepCity_Text_2C79A6: @ 82C79A6
	.i18n 471

MossdeepCity_Text_2C7AD4: @ 82C7AD4
	.i18n 472

MossdeepCity_Text_2C7B0D: @ 82C7B0D
	.i18n 473

MossdeepCity_Text_2C7B4F: @ 82C7B4F
	.i18n 474

SootopolisCity_PokemonCenter_1F_Text_2C7B8E: @ 82C7B8E
	.i18n 475

SootopolisCity_PokemonCenter_1F_Text_2C7C7E: @ 82C7C7E
	.i18n 476

SootopolisCity_PokemonCenter_1F_Text_2C7C98: @ 82C7C98
	.i18n 477

SootopolisCity_PokemonCenter_1F_Text_2C7CC8: @ 82C7CC8
	.i18n 478

PacifidlogTown_PokemonCenter_1F_Text_2C7CFA: @ 82C7CFA
	.i18n 479

PacifidlogTown_PokemonCenter_1F_Text_2C7E04: @ 82C7E04
	.i18n 480

PacifidlogTown_PokemonCenter_1F_Text_2C7E40: @ 82C7E40
	.i18n 481

PacifidlogTown_PokemonCenter_1F_Text_2C7E7A: @ 82C7E7A
	.i18n 482

SlateportCity_PokemonFanClub_EventScript_2C7F16:: @ 82C7F16
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, SlateportCity_PokemonFanClub_EventScript_2C7F74
	msgbox SlateportCity_PokemonFanClub_Text_2C6E37, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_2C7F6A
	call SlateportCity_PokemonFanClub_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_2C7F6A
	msgbox SlateportCity_PokemonFanClub_Text_2C6F66, MSGBOX_DEFAULT
	setvar VAR_0x8005, 23
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_2C7F6A
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	goto SlateportCity_PokemonFanClub_EventScript_2C7F74
	end

SlateportCity_PokemonFanClub_EventScript_2C7F6A:: @ 82C7F6A
	msgbox SlateportCity_PokemonFanClub_Text_2C6F33, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_2C7F74:: @ 82C7F74
	msgbox SlateportCity_PokemonFanClub_Text_2C6F9E, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_2C7F7E:: @ 82C7F7E
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MauvilleCity_EventScript_2C7FDC
	msgbox MauvilleCity_Text_2C6FDB, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_EventScript_2C7FD2
	call MauvilleCity_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_EventScript_2C7FD2
	msgbox MauvilleCity_Text_2C70F3, MSGBOX_DEFAULT
	setvar VAR_0x8005, 16
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_EventScript_2C7FD2
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
	goto MauvilleCity_EventScript_2C7FDC
	end

MauvilleCity_EventScript_2C7FD2:: @ 82C7FD2
	msgbox MauvilleCity_Text_2C70C4, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_2C7FDC:: @ 82C7FDC
	msgbox MauvilleCity_Text_2C7133, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_2C7FE6:: @ 82C7FE6
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, VerdanturfTown_PokemonCenter_1F_EventScript_2C8044
	msgbox VerdanturfTown_PokemonCenter_1F_Text_2C7174, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_2C803A
	call VerdanturfTown_PokemonCenter_1F_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_2C803A
	msgbox VerdanturfTown_PokemonCenter_1F_Text_2C7243, MSGBOX_DEFAULT
	setvar VAR_0x8005, 29
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_2C803A
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	goto VerdanturfTown_PokemonCenter_1F_EventScript_2C8044
	end

VerdanturfTown_PokemonCenter_1F_EventScript_2C803A:: @ 82C803A
	msgbox VerdanturfTown_PokemonCenter_1F_Text_2C7221, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_2C8044:: @ 82C8044
	msgbox VerdanturfTown_PokemonCenter_1F_Text_2C726E, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_2C804E:: @ 82C804E
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, LavaridgeTown_House_EventScript_2C80AC
	msgbox LavaridgeTown_House_Text_2C72B6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LavaridgeTown_House_EventScript_2C80A2
	call LavaridgeTown_House_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq LavaridgeTown_House_EventScript_2C80A2
	msgbox LavaridgeTown_House_Text_2C73B1, MSGBOX_DEFAULT
	setvar VAR_0x8005, 7
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq LavaridgeTown_House_EventScript_2C80A2
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
	goto LavaridgeTown_House_EventScript_2C80AC
	end

LavaridgeTown_House_EventScript_2C80A2:: @ 82C80A2
	msgbox LavaridgeTown_House_Text_2C737F, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_2C80AC:: @ 82C80AC
	msgbox LavaridgeTown_House_Text_2C73F6, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_2C80B6:: @ 82C80B6
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, FallarborTown_Mart_EventScript_2C8114
	msgbox FallarborTown_Mart_Text_2C7449, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_Mart_EventScript_2C810A
	call FallarborTown_Mart_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_Mart_EventScript_2C810A
	msgbox FallarborTown_Mart_Text_2C7582, MSGBOX_DEFAULT
	setvar VAR_0x8005, 8
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_Mart_EventScript_2C810A
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
	goto FallarborTown_Mart_EventScript_2C8114
	end

FallarborTown_Mart_EventScript_2C810A:: @ 82C810A
	msgbox FallarborTown_Mart_Text_2C7556, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_2C8114:: @ 82C8114
	msgbox FallarborTown_Mart_Text_2C75B5, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_2C811E:: @ 82C811E
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, FortreeCity_House2_EventScript_2C817C
	msgbox FortreeCity_House2_Text_2C7637, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House2_EventScript_2C8172
	call FortreeCity_House2_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House2_EventScript_2C8172
	msgbox FortreeCity_House2_Text_2C7721, MSGBOX_DEFAULT
	setvar VAR_0x8005, 24
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House2_EventScript_2C8172
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	goto FortreeCity_House2_EventScript_2C817C
	end

FortreeCity_House2_EventScript_2C8172:: @ 82C8172
	msgbox FortreeCity_House2_Text_2C76E2, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_2C817C:: @ 82C817C
	msgbox FortreeCity_House2_Text_2C775A, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_2C8186:: @ 82C8186
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, LilycoveCity_DepartmentStoreRooftop_EventScript_2C81E4
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_2C77C6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_2C81DA
	call LilycoveCity_DepartmentStoreRooftop_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_2C81DA
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_2C7911, MSGBOX_DEFAULT
	setvar VAR_0x8005, 14
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_2C81DA
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_2C81E4
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_2C81DA:: @ 82C81DA
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_2C78D1, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_2C81E4:: @ 82C81E4
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_2C794B, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_2C81EE:: @ 82C81EE
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MossdeepCity_EventScript_2C824C
	msgbox MossdeepCity_Text_2C79A6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_EventScript_2C8242
	call MossdeepCity_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_EventScript_2C8242
	msgbox MossdeepCity_Text_2C7B0D, MSGBOX_DEFAULT
	setvar VAR_0x8005, 15
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_EventScript_2C8242
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	goto MossdeepCity_EventScript_2C824C
	end

MossdeepCity_EventScript_2C8242:: @ 82C8242
	msgbox MossdeepCity_Text_2C7AD4, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_2C824C:: @ 82C824C
	msgbox MossdeepCity_Text_2C7B4F, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_2C8256:: @ 82C8256
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, SootopolisCity_PokemonCenter_1F_EventScript_2C82B4
	msgbox SootopolisCity_PokemonCenter_1F_Text_2C7B8E, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_2C82AA
	call SootopolisCity_PokemonCenter_1F_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_2C82AA
	msgbox SootopolisCity_PokemonCenter_1F_Text_2C7C98, MSGBOX_DEFAULT
	setvar VAR_0x8005, 4
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_PokemonCenter_1F_EventScript_2C82AA
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
	goto SootopolisCity_PokemonCenter_1F_EventScript_2C82B4
	end

SootopolisCity_PokemonCenter_1F_EventScript_2C82AA:: @ 82C82AA
	msgbox SootopolisCity_PokemonCenter_1F_Text_2C7C7E, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_2C82B4:: @ 82C82B4
	msgbox SootopolisCity_PokemonCenter_1F_Text_2C7CC8, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2C82BE:: @ 82C82BE
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, PacifidlogTown_PokemonCenter_1F_EventScript_2C831C
	msgbox PacifidlogTown_PokemonCenter_1F_Text_2C7CFA, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_2C8312
	call PacifidlogTown_PokemonCenter_1F_EventScript_2C832D
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_2C8312
	msgbox PacifidlogTown_PokemonCenter_1F_Text_2C7E40, MSGBOX_DEFAULT
	setvar VAR_0x8005, 12
	call EventScript_ShowPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_2C8312
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	goto PacifidlogTown_PokemonCenter_1F_EventScript_2C831C
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2C8312:: @ 82C8312
	msgbox PacifidlogTown_PokemonCenter_1F_Text_2C7E04, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_2C831C:: @ 82C831C
	msgbox PacifidlogTown_PokemonCenter_1F_Text_2C7E7A, MSGBOX_DEFAULT
	release
	end

EventScript_ShowPartyMenu:: @ 82C8326
	special sub_81B892C
	waitstate
	lock
	faceplayer
	return

FallarborTown_Mart_EventScript_2C832D:: @ 82C832D
FortreeCity_House2_EventScript_2C832D:: @ 82C832D
LavaridgeTown_House_EventScript_2C832D:: @ 82C832D
LilycoveCity_DepartmentStoreRooftop_EventScript_2C832D:: @ 82C832D
MauvilleCity_EventScript_2C832D:: @ 82C832D
MossdeepCity_EventScript_2C832D:: @ 82C832D
PacifidlogTown_PokemonCenter_1F_EventScript_2C832D:: @ 82C832D
SlateportCity_PokemonFanClub_EventScript_2C832D:: @ 82C832D
SootopolisCity_PokemonCenter_1F_EventScript_2C832D:: @ 82C832D
VerdanturfTown_PokemonCenter_1F_EventScript_2C832D:: @ 82C832D
	msgbox MauvilleCity_Text_2C6E05, MSGBOX_YESNO
	return

TrainerHill_1F_MapScript1_2C8336: @ 82C8336
TrainerHill_2F_MapScript1_2C8336: @ 82C8336
TrainerHill_3F_MapScript1_2C8336: @ 82C8336
TrainerHill_4F_MapScript1_2C8336: @ 82C8336
TrainerHill_Roof_MapScript1_2C8336: @ 82C8336
	setvar VAR_TEMP_2, 0
	setvar VAR_0x8004, TRAINER_HILL_FUNC_RESUME_TIMER
	special CallTrainerHillFunction
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 5
	special CallFrontierUtilFunc
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq TrainerHill_1F_EventScript_2C83C9
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq TrainerHill_1F_EventScript_2C83C9
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq TrainerHill_1F_EventScript_2C83C9
	end

TrainerHill_1F_MapScript2_2C8372: @ 82C8372
TrainerHill_2F_MapScript2_2C8372: @ 82C8372
	map_script_2 VAR_TEMP_3, 0, TrainerHill_1F_EventScript_2C837C
	.2byte 0

TrainerHill_1F_EventScript_2C837C:: @ 82C837C
	setvar VAR_TEMP_3, 1
@ forced stop

TrainerHill_1F_MapScript2_2C8381: @ 82C8381
TrainerHill_2F_MapScript2_2C8381: @ 82C8381
TrainerHill_3F_MapScript2_2C8381: @ 82C8381
TrainerHill_4F_MapScript2_2C8381: @ 82C8381
TrainerHill_Roof_MapScript2_2C8381: @ 82C8381
	map_script_2 VAR_TEMP_2, 0, TrainerHill_1F_EventScript_2C83A6
	map_script_2 VAR_TEMP_1, 1, TrainerHill_1F_EventScript_2C83DF
	.2byte 0

EventScript_TrainerHillTimer:: @ 82C8393
	lockall
	setvar VAR_0x8004, TRAINER_HILL_FUNC_7
	special CallTrainerHillFunction
	msgbox TrainerHill_Entrance_Text_268D47, MSGBOX_DEFAULT
	releaseall
	end

TrainerHill_1F_EventScript_2C83A6:: @ 82C83A6
	setvar VAR_TEMP_2, 1
	setvar VAR_0x8004, TRAINER_HILL_FUNC_9
	special CallTrainerHillFunction
	compare VAR_RESULT, 1
	goto_if_eq TrainerHill_1F_EventScript_2C83BF
	end

TrainerHill_1F_EventScript_2C83BF:: @ 82C83BF
	warpsilent MAP_TRAINER_HILL_ENTRANCE, 255, 9, 6
	waitstate
	end

TrainerHill_1F_EventScript_2C83C9:: @ 82C83C9
	setvar VAR_0x8004, TRAINER_HILL_FUNC_12
	special CallTrainerHillFunction
	setvar VAR_0x8004, TRAINER_HILL_FUNC_SET_LOST
	special CallTrainerHillFunction
	setvar VAR_TEMP_1, 1
	end

TrainerHill_1F_EventScript_2C83DF:: @ 82C83DF
TrainerHill_Entrance_EventScript_2C83DF:: @ 82C83DF
	setvar VAR_TEMP_1, 0
	warp MAP_TRAINER_HILL_ENTRANCE, 255, 9, 6
	waitstate
	end

TrainerHill_1F_Movement_2C83EE:: @ 82C83EE
	set_invisible
	step_end

EventScript_2C83F0:: @ 82C83F0
	trainerbattle TRAINER_BATTLE_12, TRAINER_PHILLIP, 0, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText
	setvar VAR_0x8004, TRAINER_HILL_FUNC_11
	special CallTrainerHillFunction
	waitmessage
	waitbuttonpress
	closemessage
	end

Text_ThisIsATestSignpostMsg:: @ 82C840A
	.i18n 483

EventScript_TestSignpostMsg:: @ 82C8436
	msgbox Text_ThisIsATestSignpostMsg, MSGBOX_SIGN
	end

gText_082C843F:: @ 82C843F
	.i18n 484

gText_082C8458:: @ 82C8458
	.i18n 485

gText_082C846C:: @ 82C846C
	.i18n 486

gText_082C8480:: @ 82C8480
	.i18n 487

gText_082C848B:: @ 82C848B
	.i18n 488

gText_082C84C1:: @ 82C84C1
	.i18n 489

gText_082C84D0:: @ 82C84D0
	.i18n 490

gText_082C84F7:: @ 82C84F7
	.i18n 491

gText_082C8512:: @ 82C8512
	.i18n 492

gText_082C853B:: @ 82C853B
	.i18n 493

gText_082C8561:: @ 82C8561
	.i18n 494

gText_082C8589:: @ 82C8589
	.i18n 495

gText_082C859D:: @ 82C859D
	.i18n 496

gText_082C85A4:: @ 82C85A4
	.i18n 497

gText_082C85A9:: @ 82C85A9
	.i18n 498

gText_082C85AE:: @ 82C85AE
	.i18n 499

gText_082C85B4:: @ 82C85B4
	.i18n 500

gText_082C85E3:: @ 82C85E3
	.i18n 501

gText_082C85F5:: @ 82C85F5
	.i18n 502

gText_082C8611:: @ 82C8611
	.i18n 503

gText_082C8628:: @ 82C8628
	.i18n 504

gText_082C8662:: @ 82C8662
	.i18n 505

gText_082C8682:: @ 82C8682
	.i18n 506

gText_082C86B3:: @ 82C86B3
	.i18n 507

gText_082C86C3:: @ 82C86C3
	.i18n 508

gText_082C86FE:: @ 82C86FE
	.i18n 509

gText_082C8739:: @ 82C8739
	.i18n 510

gText_082C877B:: @ 82C877B
	.i18n 511

	.align 2
	.include "data/text/save.inc"
	.include "data/text/birch_speech.inc"
