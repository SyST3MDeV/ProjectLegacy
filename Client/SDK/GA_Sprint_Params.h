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
	 * Function GA_Sprint.GA_Sprint_C.EndSprintHUD
	 */
	struct UGA_Sprint_C_EndSprintHUD_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.StartSprintHUD
	 */
	struct UGA_Sprint_C_StartSprintHUD_Params
	{
	public:
		float                                                      CastTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C
	 */
	struct UGA_Sprint_C_OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnStateEnded_D70BFB76427505AF993D609AC9934F2C
	 */
	struct UGA_Sprint_C_OnStateEnded_D70BFB76427505AF993D609AC9934F2C_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnApplied_A72AD8D04F3B3C97A2458FBE112A4790
	 */
	struct UGA_Sprint_C_OnApplied_A72AD8D04F3B3C97A2458FBE112A4790_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnCancel_8AE9FEA047AA7A870564CC93C44E1E24
	 */
	struct UGA_Sprint_C_OnCancel_8AE9FEA047AA7A870564CC93C44E1E24_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnCancel_BD1837F2479F6C09633F78AD2862BAD2
	 */
	struct UGA_Sprint_C_OnCancel_BD1837F2479F6C09633F78AD2862BAD2_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnFinish_CE0FB0E74408B744FA5A7BB47046CB10
	 */
	struct UGA_Sprint_C_OnFinish_CE0FB0E74408B744FA5A7BB47046CB10_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.InvalidHandle_711037F745707DCAFF2A8C86C95CC031
	 */
	struct UGA_Sprint_C_InvalidHandle_711037F745707DCAFF2A8C86C95CC031_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnRemoved_711037F745707DCAFF2A8C86C95CC031
	 */
	struct UGA_Sprint_C_OnRemoved_711037F745707DCAFF2A8C86C95CC031_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A
	 */
	struct UGA_Sprint_C_OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A
	 */
	struct UGA_Sprint_C_OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnStateEnded_CE0609CC454AB8343CE0618523CDB11A
	 */
	struct UGA_Sprint_C_OnStateEnded_CE0609CC454AB8343CE0618523CDB11A_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility
	 */
	struct UGA_Sprint_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility
	 */
	struct UGA_Sprint_C_K2_OnEndAbility_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
	 */
	struct UGA_Sprint_C_ExecuteUbergraph_GA_Sprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N3VP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
