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
	 * Function GA_EnergyPotion.GA_EnergyPotion_C.K2_CanActivateAbility
	 */
	struct UGA_EnergyPotion_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0040(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_703B[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GA_EnergyPotion.GA_EnergyPotion_C.K2_ActivateAbility
	 */
	struct UGA_EnergyPotion_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_EnergyPotion.GA_EnergyPotion_C.ExecuteUbergraph_GA_EnergyPotion
	 */
	struct UGA_EnergyPotion_C_ExecuteUbergraph_GA_EnergyPotion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
