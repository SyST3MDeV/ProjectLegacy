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
	 * Function LevelReward.LevelReward_C.PreConstruct
	 */
	struct ULevelReward_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelReward.LevelReward_C.RefreshLayout
	 */
	struct ULevelReward_C_RefreshLayout_Params
	{	};

	/**
	 * Function LevelReward.LevelReward_C.OnRewardEarned
	 */
	struct ULevelReward_C_OnRewardEarned_Params
	{	};

	/**
	 * Function LevelReward.LevelReward_C.ExecuteUbergraph_LevelReward
	 */
	struct ULevelReward_C_ExecuteUbergraph_LevelReward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
