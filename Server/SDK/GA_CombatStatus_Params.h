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
	 * Function GA_CombatStatus.GA_CombatStatus_C.OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E
	 */
	struct UGA_CombatStatus_C_OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_CombatStatus.GA_CombatStatus_C.OnActivate_5557742B48383E21515A3C98055058C9
	 */
	struct UGA_CombatStatus_C_OnActivate_5557742B48383E21515A3C98055058C9_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_CombatStatus.GA_CombatStatus_C.OnCommit_87A4669C4A05FC7DF48639A5B1158FAB
	 */
	struct UGA_CombatStatus_C_OnCommit_87A4669C4A05FC7DF48639A5B1158FAB_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_CombatStatus.GA_CombatStatus_C.EventReceived_B8F68E77472AF693BD3EB7A90BA944BB
	 */
	struct UGA_CombatStatus_C_EventReceived_B8F68E77472AF693BD3EB7A90BA944BB_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x0088)  (Parm)
	};

	/**
	 * Function GA_CombatStatus.GA_CombatStatus_C.K2_ActivateAbility
	 */
	struct UGA_CombatStatus_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_CombatStatus.GA_CombatStatus_C.ExecuteUbergraph_GA_CombatStatus
	 */
	struct UGA_CombatStatus_C_ExecuteUbergraph_GA_CombatStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
