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
	 * Function BP_PortalFans.BP_PortalFans_C.OnRep_bMatchEnded
	 */
	struct ABP_PortalFans_C_OnRep_bMatchEnded_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.OnRep_bMatchStarted
	 */
	struct ABP_PortalFans_C_OnRep_bMatchStarted_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.HandleTeamColors
	 */
	struct ABP_PortalFans_C_HandleTeamColors_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.UserConstructionScript
	 */
	struct ABP_PortalFans_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PortalFans_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PortalFans_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.PowerUpFanAudio__FinishedFunc
	 */
	struct ABP_PortalFans_C_PowerUpFanAudio__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.PowerUpFanAudio__UpdateFunc
	 */
	struct ABP_PortalFans_C_PowerUpFanAudio__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.PowerDownFanAudio__FinishedFunc
	 */
	struct ABP_PortalFans_C_PowerDownFanAudio__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.PowerDownFanAudio__UpdateFunc
	 */
	struct ABP_PortalFans_C_PowerDownFanAudio__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.ReceiveBeginPlay
	 */
	struct ABP_PortalFans_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.SpinUpFans
	 */
	struct ABP_PortalFans_C_SpinUpFans_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.TurnOffFans
	 */
	struct ABP_PortalFans_C_TurnOffFans_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.OnTeamChanged
	 */
	struct ABP_PortalFans_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.MatchHasStarted
	 */
	struct ABP_PortalFans_C_MatchHasStarted_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.MatchHasEnded
	 */
	struct ABP_PortalFans_C_MatchHasEnded_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.StartFanAudio
	 */
	struct ABP_PortalFans_C_StartFanAudio_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.StopFanAudio
	 */
	struct ABP_PortalFans_C_StopFanAudio_Params
	{	};

	/**
	 * Function BP_PortalFans.BP_PortalFans_C.ExecuteUbergraph_BP_PortalFans
	 */
	struct ABP_PortalFans_C_ExecuteUbergraph_BP_PortalFans_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PXR4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
