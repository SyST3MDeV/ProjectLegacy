#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SpawnPad_Manager.SpawnPad_Manager_C.DrivePad
	 */
	struct ASpawnPad_Manager_C_DrivePad_Params
	{
	public:
		float                                                      DriverValue;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PadID;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnPad_Manager.SpawnPad_Manager_C.HandleTeamColors
	 */
	struct ASpawnPad_Manager_C_HandleTeamColors_Params
	{	};

	/**
	 * Function SpawnPad_Manager.SpawnPad_Manager_C.UserConstructionScript
	 */
	struct ASpawnPad_Manager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SpawnPad_Manager.SpawnPad_Manager_C.OnTeamChanged
	 */
	struct ASpawnPad_Manager_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnPad_Manager.SpawnPad_Manager_C.ReceiveBeginPlay
	 */
	struct ASpawnPad_Manager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SpawnPad_Manager.SpawnPad_Manager_C.ExecuteUbergraph_SpawnPad_Manager
	 */
	struct ASpawnPad_Manager_C_ExecuteUbergraph_SpawnPad_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
