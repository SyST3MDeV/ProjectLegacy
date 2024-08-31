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
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.IncreaseNumberSuperMinion
	 */
	struct ABP_OrionCharAISpawner_Lane_C_IncreaseNumberSuperMinion_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.SetNextWaveStartingLevel
	 */
	struct ABP_OrionCharAISpawner_Lane_C_SetNextWaveStartingLevel_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.IncreaseSiegeWaveFrequency
	 */
	struct ABP_OrionCharAISpawner_Lane_C_IncreaseSiegeWaveFrequency_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.SelfDestructSpawnedAI
	 */
	struct ABP_OrionCharAISpawner_Lane_C_SelfDestructSpawnedAI_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.DisableSuperWaves
	 */
	struct ABP_OrionCharAISpawner_Lane_C_DisableSuperWaves_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.EnableSuperWaves
	 */
	struct ABP_OrionCharAISpawner_Lane_C_EnableSuperWaves_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.WaveCounter
	 */
	struct ABP_OrionCharAISpawner_Lane_C_WaveCounter_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.UserConstructionScript
	 */
	struct ABP_OrionCharAISpawner_Lane_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.ReceiveBeginPlay
	 */
	struct ABP_OrionCharAISpawner_Lane_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.TriggerSelfDestruct
	 */
	struct ABP_OrionCharAISpawner_Lane_C_TriggerSelfDestruct_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.OnHandleMatchStart
	 */
	struct ABP_OrionCharAISpawner_Lane_C_OnHandleMatchStart_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.OnPostSpawnedAI
	 */
	struct ABP_OrionCharAISpawner_Lane_C_OnPostSpawnedAI_Params
	{
	public:
		class AOrionCharAI*                                        SpawnedAI;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.OnIntroSpawnForAI
	 */
	struct ABP_OrionCharAISpawner_Lane_C_OnIntroSpawnForAI_Params
	{
	public:
		class AOrionCharAI*                                        SpawnedAI;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.OnAIFormationSpawned
	 */
	struct ABP_OrionCharAISpawner_Lane_C_OnAIFormationSpawned_Params
	{
	public:
		class UOrionAIFormation*                                   NewFormation;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner_Lane.BP_OrionCharAISpawner_Lane_C.ExecuteUbergraph_BP_OrionCharAISpawner_Lane
	 */
	struct ABP_OrionCharAISpawner_Lane_C_ExecuteUbergraph_BP_OrionCharAISpawner_Lane_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GD09[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
