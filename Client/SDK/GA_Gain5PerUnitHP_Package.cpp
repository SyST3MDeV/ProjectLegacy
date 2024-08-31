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
	 * 		Name   -> Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Gain5PerUnitHP_C::OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F");
		
		UGA_Gain5PerUnitHP_C_OnMinionKill_F2577EC946E580FA8419A7A0235B9F9F_Params params {};
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
	 * 		Name   -> Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Gain5PerUnitHP_C::OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F");
		
		UGA_Gain5PerUnitHP_C_OnMinionAssist_F2577EC946E580FA8419A7A0235B9F9F_Params params {};
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
	 * 		Name   -> Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Gain5PerUnitHP_C::OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F");
		
		UGA_Gain5PerUnitHP_C_OnPlayerKill_F2577EC946E580FA8419A7A0235B9F9F_Params params {};
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
	 * 		Name   -> Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Gain5PerUnitHP_C::OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F");
		
		UGA_Gain5PerUnitHP_C_OnPlayerAssist_F2577EC946E580FA8419A7A0235B9F9F_Params params {};
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
	 * 		Name   -> Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Gain5PerUnitHP_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.K2_ActivateAbility");
		
		UGA_Gain5PerUnitHP_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.ExecuteUbergraph_GA_Gain5PerUnitHP
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Gain5PerUnitHP_C::ExecuteUbergraph_GA_Gain5PerUnitHP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C.ExecuteUbergraph_GA_Gain5PerUnitHP");
		
		UGA_Gain5PerUnitHP_C_ExecuteUbergraph_GA_Gain5PerUnitHP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Gain5PerUnitHP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Gain5PerUnitHP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Gain5PerUnitHP.GA_Gain5PerUnitHP_C");
		return ptr;
	}

}


