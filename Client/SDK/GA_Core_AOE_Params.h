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
	 * Function GA_Core_AOE.GA_Core_AOE_C.K2_CanActivateAbility
	 */
	struct UGA_Core_AOE_C_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0040(0x0020)  (Parm, OutParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Core_AOE.GA_Core_AOE_C.FireProjectile_6555388B4A7770C78460C99981717FD7
	 */
	struct UGA_Core_AOE_C_FireProjectile_6555388B4A7770C78460C99981717FD7_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Core_AOE.GA_Core_AOE_C.K2_ActivateAbility
	 */
	struct UGA_Core_AOE_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Core_AOE.GA_Core_AOE_C.ExecuteUbergraph_GA_Core_AOE
	 */
	struct UGA_Core_AOE_C_ExecuteUbergraph_GA_Core_AOE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6436[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
