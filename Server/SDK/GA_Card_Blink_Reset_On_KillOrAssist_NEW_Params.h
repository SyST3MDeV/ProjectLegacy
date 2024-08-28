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
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G4BP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IAUQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YD17[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFYJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              KilledActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectContextHandle                        KillingEffectContext;                                    // 0x0010(0x0018)  (Parm)
	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.InvalidHandle_D6838B7842C21942D41A9A865DD10D9F
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_InvalidHandle_D6838B7842C21942D41A9A865DD10D9F_Params
	{	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnRemoved_D6838B7842C21942D41A9A865DD10D9F
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnRemoved_D6838B7842C21942D41A9A865DD10D9F_Params
	{	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.Cancelled_6174A304472985BFC017B6B145EAE20A
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_Cancelled_6174A304472985BFC017B6B145EAE20A_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.Confirmed_6174A304472985BFC017B6B145EAE20A
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_Confirmed_6174A304472985BFC017B6B145EAE20A_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314_Params
	{	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314_Params
	{	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.K2_ActivateAbility
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssist-NEW
	 */
	struct UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssistNEW_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
