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
	 * Function GC_CarriedBuff_BlueBuff.GC_CarriedBuff_BlueBuff_C.UserConstructionScript
	 */
	struct AGC_CarriedBuff_BlueBuff_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GC_CarriedBuff_BlueBuff.GC_CarriedBuff_BlueBuff_C.K2_OnActive
	 */
	struct AGC_CarriedBuff_BlueBuff_C_K2_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UParticleSystemComponent*                            ApplicationParticleSystem;                               // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UParticleSystemComponent*>                    AdditionalParticleSystems;                               // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UCameraShake*                                        ApplicationCameraShakeInstance;                          // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_CarriedBuff_BlueBuff.GC_CarriedBuff_BlueBuff_C.K2_WhileActive
	 */
	struct AGC_CarriedBuff_BlueBuff_C_K2_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UParticleSystemComponent*                            LoopingParticleSystem;                                   // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UParticleSystemComponent*>                    AdditionalParticleSystem;                                // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function GC_CarriedBuff_BlueBuff.GC_CarriedBuff_BlueBuff_C.ExecuteUbergraph_GC_CarriedBuff_BlueBuff
	 */
	struct AGC_CarriedBuff_BlueBuff_C_ExecuteUbergraph_GC_CarriedBuff_BlueBuff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7PM4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif