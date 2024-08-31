/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnMinionKill_5B6A02074C1ADFCF0B64F2B75776B167_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		params.KillingEffectContext = KillingEffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnMinionAssist_5B6A02074C1ADFCF0B64F2B75776B167_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		params.KillingEffectContext = KillingEffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnPlayerKill_5B6A02074C1ADFCF0B64F2B75776B167_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		params.KillingEffectContext = KillingEffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnPlayerAssist_5B6A02074C1ADFCF0B64F2B75776B167_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		params.KillingEffectContext = KillingEffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.InvalidHandle_D6838B7842C21942D41A9A865DD10D9F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::InvalidHandle_D6838B7842C21942D41A9A865DD10D9F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.InvalidHandle_D6838B7842C21942D41A9A865DD10D9F");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_InvalidHandle_D6838B7842C21942D41A9A865DD10D9F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnRemoved_D6838B7842C21942D41A9A865DD10D9F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnRemoved_D6838B7842C21942D41A9A865DD10D9F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnRemoved_D6838B7842C21942D41A9A865DD10D9F");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnRemoved_D6838B7842C21942D41A9A865DD10D9F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.Cancelled_6174A304472985BFC017B6B145EAE20A
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::Cancelled_6174A304472985BFC017B6B145EAE20A(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.Cancelled_6174A304472985BFC017B6B145EAE20A");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_Cancelled_6174A304472985BFC017B6B145EAE20A_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.Confirmed_6174A304472985BFC017B6B145EAE20A
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::Confirmed_6174A304472985BFC017B6B145EAE20A(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.Confirmed_6174A304472985BFC017B6B145EAE20A");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_Confirmed_6174A304472985BFC017B6B145EAE20A_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnStateInterrupted_85A74A444B7DA53BCAE454A6E32C6314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_OnStateEnded_85A74A444B7DA53BCAE454A6E32C6314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.K2_ActivateAbility");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssist-NEW
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssistNEW(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_Reset_On_KillOrAssist-NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C.ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssist-NEW");
		
		UGA_Card_Blink_Reset_On_KillOrAssistNEW_C_ExecuteUbergraph_GA_Card_Blink_Reset_On_KillOrAssistNEW_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Blink_Reset_On_KillOrAssistNEW_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Blink_Reset_On_KillOrAssistNEW_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Card_Blink_Reset_On_KillOrAssist_NEW.GA_Card_Blink_Reset_On_KillOrAssist-NEW_C");
		return ptr;
	}

}


