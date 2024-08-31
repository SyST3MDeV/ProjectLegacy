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
	 * Function BaseRig.BaseRig_C.GetBaseAttackingMesh
	 */
	struct ABaseRig_C_GetBaseAttackingMesh_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.GetCoinSpawnLocation
	 */
	struct ABaseRig_C_GetCoinSpawnLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.GetInverseTeamColor
	 */
	struct ABaseRig_C_GetInverseTeamColor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.GetTargetingLocation
	 */
	struct ABaseRig_C_GetTargetingLocation_Params
	{
	public:
		struct FVector                                             OutPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.GetNumberPopLocation
	 */
	struct ABaseRig_C_GetNumberPopLocation_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.DropCoinsOnDeath
	 */
	struct ABaseRig_C_DropCoinsOnDeath_Params
	{	};

	/**
	 * Function BaseRig.BaseRig_C.GetAimTargetSensingLocation
	 */
	struct ABaseRig_C_GetAimTargetSensingLocation_Params
	{
	public:
		struct FVector                                             AimPosition;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.UserConstructionScript
	 */
	struct ABaseRig_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseRig.BaseRig_C.ReceiveTick
	 */
	struct ABaseRig_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.ReceiveBeginPlay
	 */
	struct ABaseRig_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseRig.BaseRig_C.OnAttachedToWell
	 */
	struct ABaseRig_C_OnAttachedToWell_Params
	{
	public:
		class AOrionWell_Base*                                     InWell;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.OnDeath
	 */
	struct ABaseRig_C_OnDeath_Params
	{	};

	/**
	 * Function BaseRig.BaseRig_C.Build
	 */
	struct ABaseRig_C_Build_Params
	{	};

	/**
	 * Function BaseRig.BaseRig_C.GameplayCue.Rigs.Building
	 */
	struct ABaseRig_C_GameplayCue_Rigs_Building_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RX1B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BaseRig.BaseRig_C.OnTeamChanged
	 */
	struct ABaseRig_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.OnDamageTaken
	 */
	struct ABaseRig_C_OnDamageTaken_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1AWE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageInstigator;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.ExecuteUbergraph_BaseRig
	 */
	struct ABaseRig_C_ExecuteUbergraph_BaseRig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseRig.BaseRig_C.FinishedBuilding__DelegateSignature
	 */
	struct ABaseRig_C_FinishedBuilding__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
