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
	 * Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.OnUpdateLock
	 */
	struct UHeroLevelRewardTooltip_C_OnUpdateLock_Params
	{
	public:
		bool                                                       bIsOwned;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.OnUpdateXPBonuses
	 */
	struct UHeroLevelRewardTooltip_C_OnUpdateXPBonuses_Params
	{
	public:
		float                                                      SelfBonus;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TeammateBonus;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.ExecuteUbergraph_HeroLevelRewardTooltip
	 */
	struct UHeroLevelRewardTooltip_C_ExecuteUbergraph_HeroLevelRewardTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
