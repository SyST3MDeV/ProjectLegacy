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
	 * Function GC_CriticallyWounded.GC_CriticallyWounded_C.UserConstructionScript
	 */
	struct AGC_CriticallyWounded_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GC_CriticallyWounded.GC_CriticallyWounded_C.ReceiveTick
	 */
	struct AGC_CriticallyWounded_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_CriticallyWounded.GC_CriticallyWounded_C.K2_OnActive
	 */
	struct AGC_CriticallyWounded_C_K2_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UParticleSystemComponent*                            ApplicationParticleSystem;                               // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UParticleSystemComponent*>                    AdditionalParticleSystems;                               // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UCameraShake*                                        ApplicationCameraShakeInstance;                          // 0x00D8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_CriticallyWounded.GC_CriticallyWounded_C.AdjustStrength
	 */
	struct AGC_CriticallyWounded_C_AdjustStrength_Params
	{	};

	/**
	 * Function GC_CriticallyWounded.GC_CriticallyWounded_C.ExecuteUbergraph_GC_CriticallyWounded
	 */
	struct AGC_CriticallyWounded_C_ExecuteUbergraph_GC_CriticallyWounded_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
