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
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.IsInteractable
	 */
	struct UBuildGuide_Pip_C_IsInteractable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.Construct
	 */
	struct UBuildGuide_Pip_C_Construct_Params
	{	};

	/**
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnHighlighted
	 */
	struct UBuildGuide_Pip_C_BP_OnHighlighted_Params
	{
	public:
		bool                                                       bHighlighted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnSelected
	 */
	struct UBuildGuide_Pip_C_BP_OnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnInfoChanged
	 */
	struct UBuildGuide_Pip_C_BP_OnInfoChanged_Params
	{
	public:
		struct FCardBuildGuideInfo                                 Info;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnConsumedChanged
	 */
	struct UBuildGuide_Pip_C_BP_OnConsumedChanged_Params
	{
	public:
		bool                                                       bIsConsumed;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuildGuide_Pip.BuildGuide_Pip_C.ExecuteUbergraph_BuildGuide_Pip
	 */
	struct UBuildGuide_Pip_C_ExecuteUbergraph_BuildGuide_Pip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
