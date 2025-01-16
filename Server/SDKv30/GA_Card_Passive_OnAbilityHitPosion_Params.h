#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.OnApplied_F8D8D1CF494908AE35A3279D5FB18D84
	 */
	struct UGA_Card_Passive_OnAbilityHitPosion_C_OnApplied_F8D8D1CF494908AE35A3279D5FB18D84_Params
	{
	public:
		class FSpecHandle*                                         Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FActiveHandle                                       SpecHandle;                                              // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.K2_ActivateAbility
	 */
	struct UGA_Card_Passive_OnAbilityHitPosion_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion
	 */
	struct UGA_Card_Passive_OnAbilityHitPosion_C_ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
