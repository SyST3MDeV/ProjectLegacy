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
	 * Function XP_Overview.XP_Overview_C.Reset
	 */
	struct UXP_Overview_C_Reset_Params
	{	};

	/**
	 * Function XP_Overview.XP_Overview_C.SetOwnerName
	 */
	struct UXP_Overview_C_SetOwnerName_Params
	{
	public:
		class FText                                                OwnerName;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function XP_Overview.XP_Overview_C.BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature
	 */
	struct UXP_Overview_C_BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature_Params
	{
	public:
		int32_t                                                    NumRewardsDisplayed;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function XP_Overview.XP_Overview_C.ExecuteUbergraph_XP_Overview
	 */
	struct UXP_Overview_C_ExecuteUbergraph_XP_Overview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
