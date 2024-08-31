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
	 * Function Structure_Destroyed.Structure_Destroyed_C.Construct
	 */
	struct UStructure_Destroyed_C_Construct_Params
	{	};

	/**
	 * Function Structure_Destroyed.Structure_Destroyed_C.OnAnimationFinished
	 */
	struct UStructure_Destroyed_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Structure_Destroyed.Structure_Destroyed_C.ExecuteUbergraph_Structure_Destroyed
	 */
	struct UStructure_Destroyed_C_ExecuteUbergraph_Structure_Destroyed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
