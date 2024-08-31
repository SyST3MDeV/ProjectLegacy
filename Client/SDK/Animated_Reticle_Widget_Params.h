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
	 * Function Animated_Reticle_Widget.Animated_Reticle_Widget_C.Construct
	 */
	struct UAnimated_Reticle_Widget_C_Construct_Params
	{	};

	/**
	 * Function Animated_Reticle_Widget.Animated_Reticle_Widget_C.OnSuccessfulHitDel_Event_1
	 */
	struct UAnimated_Reticle_Widget_C_OnSuccessfulHitDel_Event_1_Params
	{	};

	/**
	 * Function Animated_Reticle_Widget.Animated_Reticle_Widget_C.OnActivelyTargetingDelegate_Event_1
	 */
	struct UAnimated_Reticle_Widget_C_OnActivelyTargetingDelegate_Event_1_Params
	{
	public:
		bool                                                       CurrentlyTargeting;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animated_Reticle_Widget.Animated_Reticle_Widget_C.ExecuteUbergraph_Animated_Reticle_Widget
	 */
	struct UAnimated_Reticle_Widget_C_ExecuteUbergraph_Animated_Reticle_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FMPU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
