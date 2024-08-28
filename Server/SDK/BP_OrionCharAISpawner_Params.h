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
	 * Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.UserConstructionScript
	 */
	struct ABP_OrionCharAISpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.OnPostSpawnedAI
	 */
	struct ABP_OrionCharAISpawner_C_OnPostSpawnedAI_Params
	{
	public:
		class AOrionCharAI*                                        SpawnedAI;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OrionCharAISpawner.BP_OrionCharAISpawner_C.ExecuteUbergraph_BP_OrionCharAISpawner
	 */
	struct ABP_OrionCharAISpawner_C_ExecuteUbergraph_BP_OrionCharAISpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
