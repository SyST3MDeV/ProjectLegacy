﻿#pragma once

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
	 * Function GC_Hero_Dialog_Recall.GC_Hero_Dialog_Recall_C.UserConstructionScript
	 */
	struct AGC_Hero_Dialog_Recall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GC_Hero_Dialog_Recall.GC_Hero_Dialog_Recall_C.K2_OnExecute
	 */
	struct AGC_Hero_Dialog_Recall_C_K2_OnExecute_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UParticleSystemComponent*                            BurstParticleSystems;                                    // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UParticleSystemComponent*>                    AdditionalParticleSystems;                               // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function GC_Hero_Dialog_Recall.GC_Hero_Dialog_Recall_C.ExecuteUbergraph_GC_Hero_Dialog_Recall
	 */
	struct AGC_Hero_Dialog_Recall_C_ExecuteUbergraph_GC_Hero_Dialog_Recall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ZQ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif