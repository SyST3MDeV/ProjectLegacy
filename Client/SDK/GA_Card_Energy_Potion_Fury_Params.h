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
	 * Function GA_Card_Energy_Potion_Fury.GA_Card_Energy_Potion_Fury_C.K2_CanActivateAbility
	 */
	struct UGA_Card_Energy_Potion_Fury_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0040(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6C5J[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
