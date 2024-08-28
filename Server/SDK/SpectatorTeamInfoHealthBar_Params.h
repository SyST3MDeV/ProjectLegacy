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
	 * Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.SetPlayer
	 */
	struct USpectatorTeamInfoHealthBar_C_SetPlayer_Params
	{
	public:
		EOrionTeam                                                 Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J95Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Update Hero Health and Energy
	 */
	struct USpectatorTeamInfoHealthBar_C_UpdateHeroHealthandEnergy_Params
	{	};

	/**
	 * Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Internal Get Team UI Info
	 */
	struct USpectatorTeamInfoHealthBar_C_InternalGetTeamUIInfo_Params
	{
	public:
		struct FOrionSpectatorHUDPlayerInfo                        ReturnInfo;                                              // 0x0000(0x00B0)  (Parm, OutParm)
	};

	/**
	 * Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Update Hero Level
	 */
	struct USpectatorTeamInfoHealthBar_C_UpdateHeroLevel_Params
	{	};

	/**
	 * Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.Construct
	 */
	struct USpectatorTeamInfoHealthBar_C_Construct_Params
	{	};

	/**
	 * Function SpectatorTeamInfoHealthBar.SpectatorTeamInfoHealthBar_C.ExecuteUbergraph_SpectatorTeamInfoHealthBar
	 */
	struct USpectatorTeamInfoHealthBar_C_ExecuteUbergraph_SpectatorTeamInfoHealthBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S6Z7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
