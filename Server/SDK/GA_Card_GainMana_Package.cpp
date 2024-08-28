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
	 * 		Name   -> Function GA_Card_GainMana.GA_Card_GainMana_C.OnMinionKill_C866FAD6486496ACAD9A3298CD20BB3D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_GainMana_C::OnMinionKill_C866FAD6486496ACAD9A3298CD20BB3D(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_GainMana.GA_Card_GainMana_C.OnMinionKill_C866FAD6486496ACAD9A3298CD20BB3D");
		
		UGA_Card_GainMana_C_OnMinionKill_C866FAD6486496ACAD9A3298CD20BB3D_Params params {};
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
	 * 		Name   -> Function GA_Card_GainMana.GA_Card_GainMana_C.OnMinionAssist_C866FAD6486496ACAD9A3298CD20BB3D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_GainMana_C::OnMinionAssist_C866FAD6486496ACAD9A3298CD20BB3D(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_GainMana.GA_Card_GainMana_C.OnMinionAssist_C866FAD6486496ACAD9A3298CD20BB3D");
		
		UGA_Card_GainMana_C_OnMinionAssist_C866FAD6486496ACAD9A3298CD20BB3D_Params params {};
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
	 * 		Name   -> Function GA_Card_GainMana.GA_Card_GainMana_C.OnPlayerKill_C866FAD6486496ACAD9A3298CD20BB3D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_GainMana_C::OnPlayerKill_C866FAD6486496ACAD9A3298CD20BB3D(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_GainMana.GA_Card_GainMana_C.OnPlayerKill_C866FAD6486496ACAD9A3298CD20BB3D");
		
		UGA_Card_GainMana_C_OnPlayerKill_C866FAD6486496ACAD9A3298CD20BB3D_Params params {};
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
	 * 		Name   -> Function GA_Card_GainMana.GA_Card_GainMana_C.OnPlayerAssist_C866FAD6486496ACAD9A3298CD20BB3D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_GainMana_C::OnPlayerAssist_C866FAD6486496ACAD9A3298CD20BB3D(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_GainMana.GA_Card_GainMana_C.OnPlayerAssist_C866FAD6486496ACAD9A3298CD20BB3D");
		
		UGA_Card_GainMana_C_OnPlayerAssist_C866FAD6486496ACAD9A3298CD20BB3D_Params params {};
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
	 * 		Name   -> Function GA_Card_GainMana.GA_Card_GainMana_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_GainMana_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_GainMana.GA_Card_GainMana_C.K2_ActivateAbility");
		
		UGA_Card_GainMana_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_GainMana.GA_Card_GainMana_C.ExecuteUbergraph_GA_Card_GainMana
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_GainMana_C::ExecuteUbergraph_GA_Card_GainMana(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_GainMana.GA_Card_GainMana_C.ExecuteUbergraph_GA_Card_GainMana");
		
		UGA_Card_GainMana_C_ExecuteUbergraph_GA_Card_GainMana_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_GainMana_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_GainMana_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_GainMana.GA_Card_GainMana_C");
		return ptr;
	}

}


