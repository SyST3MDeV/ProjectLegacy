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
	 * Function RewardCarouselItem.RewardCarouselItem_C.PreConstruct
	 */
	struct URewardCarouselItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RewardCarouselItem.RewardCarouselItem_C.RefreshLayout
	 */
	struct URewardCarouselItem_C_RefreshLayout_Params
	{	};

	/**
	 * Function RewardCarouselItem.RewardCarouselItem_C.OnRewardEarned
	 */
	struct URewardCarouselItem_C_OnRewardEarned_Params
	{	};

	/**
	 * Function RewardCarouselItem.RewardCarouselItem_C.ExecuteUbergraph_RewardCarouselItem
	 */
	struct URewardCarouselItem_C_ExecuteUbergraph_RewardCarouselItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
