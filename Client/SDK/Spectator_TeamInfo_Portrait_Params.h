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
	 * Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.SetPlayer
	 */
	struct USpectator_TeamInfo_Portrait_C_SetPlayer_Params
	{
	public:
		EOrionTeam                                                 Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B032[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.On_Portrait_MouseButtonDown_1
	 */
	struct USpectator_TeamInfo_Portrait_C_On_Portrait_MouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7T2Y[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.Update Visuals
	 */
	struct USpectator_TeamInfo_Portrait_C_UpdateVisuals_Params
	{
	public:
		struct FOrionSpectatorHUDPlayerInfo                        PlayerInfo;                                              // 0x0000(0x00B0)  (Parm)
	};

	/**
	 * Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.Construct
	 */
	struct USpectator_TeamInfo_Portrait_C_Construct_Params
	{	};

	/**
	 * Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.OnPlayerInfoUpdated
	 */
	struct USpectator_TeamInfo_Portrait_C_OnPlayerInfoUpdated_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NEUL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FOrionSpectatorHUDPlayerInfo                        NewPlayerInfo;                                           // 0x0008(0x00B0)  (Parm)
	};

	/**
	 * Function Spectator_TeamInfo_Portrait.Spectator_TeamInfo_Portrait_C.ExecuteUbergraph_Spectator_TeamInfo_Portrait
	 */
	struct USpectator_TeamInfo_Portrait_C_ExecuteUbergraph_Spectator_TeamInfo_Portrait_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
