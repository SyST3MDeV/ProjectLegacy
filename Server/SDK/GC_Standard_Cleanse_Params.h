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
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.OnRemove
	 */
	struct AGC_Standard_Cleanse_C_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.WhileActive
	 */
	struct AGC_Standard_Cleanse_C_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.UserConstructionScript
	 */
	struct AGC_Standard_Cleanse_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.Fadeon__FinishedFunc
	 */
	struct AGC_Standard_Cleanse_C_Fadeon__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.Fadeon__UpdateFunc
	 */
	struct AGC_Standard_Cleanse_C_Fadeon__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOut__FinishedFunc
	 */
	struct AGC_Standard_Cleanse_C_FadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOut__UpdateFunc
	 */
	struct AGC_Standard_Cleanse_C_FadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeInMaterial
	 */
	struct AGC_Standard_Cleanse_C_FadeInMaterial_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOutMaterial
	 */
	struct AGC_Standard_Cleanse_C_FadeOutMaterial_Params
	{	};

	/**
	 * Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.ExecuteUbergraph_GC_Standard_Cleanse
	 */
	struct AGC_Standard_Cleanse_C_ExecuteUbergraph_GC_Standard_Cleanse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
