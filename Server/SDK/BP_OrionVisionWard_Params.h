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
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetNumberPopLocation
	 */
	struct ABP_OrionVisionWard_C_GetNumberPopLocation_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetTargetingLocation
	 */
	struct ABP_OrionVisionWard_C_GetTargetingLocation_Params
	{
	public:
		struct FVector                                             OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.DropCoins
	 */
	struct ABP_OrionVisionWard_C_DropCoins_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.GetAimTargetSensingLocation
	 */
	struct ABP_OrionVisionWard_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FVector                                             AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.SetupColors
	 */
	struct ABP_OrionVisionWard_C_SetupColors_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J2IP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.UserConstructionScript
	 */
	struct ABP_OrionVisionWard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.ReceiveBeginPlay
	 */
	struct ABP_OrionVisionWard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnTeamChanged
	 */
	struct ABP_OrionVisionWard_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnDeath
	 */
	struct ABP_OrionVisionWard_C_OnDeath_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.ApplyShadowPlaneMaterials
	 */
	struct ABP_OrionVisionWard_C_ApplyShadowPlaneMaterials_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.RemoveShadowPlaneMaterials
	 */
	struct ABP_OrionVisionWard_C_RemoveShadowPlaneMaterials_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.OnDamageTaken
	 */
	struct ABP_OrionVisionWard_C_OnDamageTaken_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4D9Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.EnterShadowPlane
	 */
	struct ABP_OrionVisionWard_C_EnterShadowPlane_Params
	{	};

	/**
	 * Function BP_OrionVisionWard.BP_OrionVisionWard_C.ExecuteUbergraph_BP_OrionVisionWard
	 */
	struct ABP_OrionVisionWard_C_ExecuteUbergraph_BP_OrionVisionWard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
