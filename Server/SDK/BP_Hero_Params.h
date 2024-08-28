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
	 * Function BP_Hero.BP_Hero_C.DirectionalCameraHitFeedback
	 */
	struct ABP_Hero_C_DirectionalCameraHitFeedback_Params
	{
	public:
		struct FGameplayCueParameters                              CueParams;                                               // 0x0000(0x00B8)  (Parm, ContainsInstancedReference)
		class UCameraAnim*                                         Anim;                                                    // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.HeroLootDrop
	 */
	struct ABP_Hero_C_HeroLootDrop_Params
	{
	public:
		class AActor*                                              Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.SetupTeamColors
	 */
	struct ABP_Hero_C_SetupTeamColors_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.UserConstructionScript
	 */
	struct ABP_Hero_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.InpActEvt_L_K2Node_InputKeyEvent_4
	 */
	struct ABP_Hero_C_InpActEvt_L_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.InpActEvt_Shift_L_K2Node_InputKeyEvent_3
	 */
	struct ABP_Hero_C_InpActEvt_Shift_L_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.Damage.Hero
	 */
	struct ABP_Hero_C_GameplayCue_Damage_Hero_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_67CF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.OnTeamChanged
	 */
	struct ABP_Hero_C_OnTeamChanged_Params
	{
	public:
		EOrionTeam                                                 NewTeamIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.ReceiveBeginPlay
	 */
	struct ABP_Hero_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.Death
	 */
	struct ABP_Hero_C_GameplayCue_Death_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WLX6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.OnDeath_Bind
	 */
	struct ABP_Hero_C_OnDeath_Bind_Params
	{
	public:
		class AOrionChar*                                          DeadChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         Killer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.ApplyShadowPlaneMaterials
	 */
	struct ABP_Hero_C_ApplyShadowPlaneMaterials_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.RemoveShadowPlaneMaterials
	 */
	struct ABP_Hero_C_RemoveShadowPlaneMaterials_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.Distances
	 */
	struct ABP_Hero_C_Distances_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.Distances_World
	 */
	struct ABP_Hero_C_Distances_World_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.Distances_Camera
	 */
	struct ABP_Hero_C_Distances_Camera_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.Distances_Camera_World
	 */
	struct ABP_Hero_C_Distances_Camera_World_Params
	{	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.Knockback
	 */
	struct ABP_Hero_C_GameplayCue_Knockback_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VENB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.ShieldDamage
	 */
	struct ABP_Hero_C_GameplayCue_ShieldDamage_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8MF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.Damage.CriticalHit
	 */
	struct ABP_Hero_C_GameplayCue_Damage_CriticalHit_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XS7U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.RecallTeleport
	 */
	struct ABP_Hero_C_GameplayCue_RecallTeleport_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4LX3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.DoDamageReaction
	 */
	struct ABP_Hero_C_DoDamageReaction_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.GameplayCue.Damage
	 */
	struct ABP_Hero_C_GameplayCue_Damage_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LMMM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Hero.BP_Hero_C.ExecuteUbergraph_BP_Hero
	 */
	struct ABP_Hero_C_ExecuteUbergraph_BP_Hero_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
