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
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.InitCarriedBuff
	 */
	struct ABP_CarriedBuff_Base_C_InitCarriedBuff_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.UserConstructionScript
	 */
	struct ABP_CarriedBuff_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveBeginPlay
	 */
	struct ABP_CarriedBuff_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ReceiveTick
	 */
	struct ABP_CarriedBuff_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.RefreshDespawnTimer
	 */
	struct ABP_CarriedBuff_Base_C_RefreshDespawnTimer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.StopDespawnTimer
	 */
	struct ABP_CarriedBuff_Base_C_StopDespawnTimer_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.StartDespawnTimer
	 */
	struct ABP_CarriedBuff_Base_C_StartDespawnTimer_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.PauseDespawnTimer
	 */
	struct ABP_CarriedBuff_Base_C_PauseDespawnTimer_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnObjectiveDropped
	 */
	struct ABP_CarriedBuff_Base_C_OnObjectiveDropped_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ChangeAlphaOnPickup
	 */
	struct ABP_CarriedBuff_Base_C_ChangeAlphaOnPickup_Params
	{
	public:
		float                                                      NewAlpha;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnDespawnCarriedObjective
	 */
	struct ABP_CarriedBuff_Base_C_OnDespawnCarriedObjective_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickedUp
	 */
	struct ABP_CarriedBuff_Base_C_OnPickedUp_Params
	{
	public:
		class AOrionChar*                                          Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickupActivated
	 */
	struct ABP_CarriedBuff_Base_C_OnPickupActivated_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.OnPickupDeactivated
	 */
	struct ABP_CarriedBuff_Base_C_OnPickupDeactivated_Params
	{	};

	/**
	 * Function BP_CarriedBuff_Base.BP_CarriedBuff_Base_C.ExecuteUbergraph_BP_CarriedBuff_Base
	 */
	struct ABP_CarriedBuff_Base_C_ExecuteUbergraph_BP_CarriedBuff_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
