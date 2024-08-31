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
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.UserConstructionScript
	 */
	struct AGC_Standard_PhaseShift_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeIn__FinishedFunc
	 */
	struct AGC_Standard_PhaseShift_C_FadeIn__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeIn__UpdateFunc
	 */
	struct AGC_Standard_PhaseShift_C_FadeIn__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOut__FinishedFunc
	 */
	struct AGC_Standard_PhaseShift_C_FadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOut__UpdateFunc
	 */
	struct AGC_Standard_PhaseShift_C_FadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.K2_WhileActive
	 */
	struct AGC_Standard_PhaseShift_C_K2_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UParticleSystemComponent*                            LoopingParticleSystem;                                   // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UParticleSystemComponent*>                    AdditionalParticleSystem;                                // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.K2_OnRemove
	 */
	struct AGC_Standard_PhaseShift_C_K2_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UParticleSystemComponent*                            RemovalParticleSystem;                                   // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UParticleSystemComponent*>                    AdditionalParticleSystems;                               // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeInMaterial
	 */
	struct AGC_Standard_PhaseShift_C_FadeInMaterial_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOutMaterial
	 */
	struct AGC_Standard_PhaseShift_C_FadeOutMaterial_Params
	{	};

	/**
	 * Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.ExecuteUbergraph_GC_Standard_PhaseShift
	 */
	struct AGC_Standard_PhaseShift_C_ExecuteUbergraph_GC_Standard_PhaseShift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
