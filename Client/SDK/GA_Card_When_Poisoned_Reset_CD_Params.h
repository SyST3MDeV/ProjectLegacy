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
	 * Function GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C.OnStateInterrupted_05189C80442421CB2954518E4D7BD9D2
	 */
	struct UGA_Card_When_Poisoned_Reset_CD_C_OnStateInterrupted_05189C80442421CB2954518E4D7BD9D2_Params
	{	};

	/**
	 * Function GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C.OnStateEnded_05189C80442421CB2954518E4D7BD9D2
	 */
	struct UGA_Card_When_Poisoned_Reset_CD_C_OnStateEnded_05189C80442421CB2954518E4D7BD9D2_Params
	{	};

	/**
	 * Function GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C.OnApplied_304F67414A1107E311F07CAA51A79768
	 */
	struct UGA_Card_When_Poisoned_Reset_CD_C_OnApplied_304F67414A1107E311F07CAA51A79768_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C.Added_AD5A46104B7257D583C5EFB009FD98A1
	 */
	struct UGA_Card_When_Poisoned_Reset_CD_C_Added_AD5A46104B7257D583C5EFB009FD98A1_Params
	{	};

	/**
	 * Function GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C.K2_ActivateAbility
	 */
	struct UGA_Card_When_Poisoned_Reset_CD_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_When_Poisoned_Reset_CD.GA_Card_When_Poisoned_Reset_CD_C.ExecuteUbergraph_GA_Card_When_Poisoned_Reset_CD
	 */
	struct UGA_Card_When_Poisoned_Reset_CD_C_ExecuteUbergraph_GA_Card_When_Poisoned_Reset_CD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q6V2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
