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
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.UserConstructionScript
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__FinishedFunc
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_SpawnFall_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__UpdateFunc
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_SpawnFall_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.SpawnFall_Timeline__SonicBoom__EventFunc
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_SpawnFall_Timeline__SonicBoom__EventFunc_Params
	{	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.ReceiveBeginPlay
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.OnDeath_Event_1
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_OnDeath_Event_1_Params
	{
	public:
		class AOrionChar*                                          DeadChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         Killer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.GameplayCue.PrimeHelix.PrimaryAttack
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_GameplayCue_PrimeHelix_PrimaryAttack_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X1RB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_OrionCharAI_JungleCreep_PrimeHelix_V2.BP_OrionCharAI_JungleCreep_PrimeHelix_V2_C.ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2
	 */
	struct ABP_OrionCharAI_JungleCreep_PrimeHelix_V2_C_ExecuteUbergraph_BP_OrionCharAI_JungleCreep_PrimeHelix_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
