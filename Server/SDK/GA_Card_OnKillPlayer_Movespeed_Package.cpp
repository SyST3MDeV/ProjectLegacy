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
	 * 		Name   -> Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnMinionKill_E8EFD428448A47D1F42967A37BE4BE96
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_OnKillPlayer_Movespeed_C::OnMinionKill_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnMinionKill_E8EFD428448A47D1F42967A37BE4BE96");
		
		UGA_Card_OnKillPlayer_Movespeed_C_OnMinionKill_E8EFD428448A47D1F42967A37BE4BE96_Params params {};
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
	 * 		Name   -> Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnMinionAssist_E8EFD428448A47D1F42967A37BE4BE96
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_OnKillPlayer_Movespeed_C::OnMinionAssist_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnMinionAssist_E8EFD428448A47D1F42967A37BE4BE96");
		
		UGA_Card_OnKillPlayer_Movespeed_C_OnMinionAssist_E8EFD428448A47D1F42967A37BE4BE96_Params params {};
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
	 * 		Name   -> Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnPlayerKill_E8EFD428448A47D1F42967A37BE4BE96
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_OnKillPlayer_Movespeed_C::OnPlayerKill_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnPlayerKill_E8EFD428448A47D1F42967A37BE4BE96");
		
		UGA_Card_OnKillPlayer_Movespeed_C_OnPlayerKill_E8EFD428448A47D1F42967A37BE4BE96_Params params {};
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
	 * 		Name   -> Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnPlayerAssist_E8EFD428448A47D1F42967A37BE4BE96
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectContextHandle                KillingEffectContext                                       (Parm)
	 */
	void UGA_Card_OnKillPlayer_Movespeed_C::OnPlayerAssist_E8EFD428448A47D1F42967A37BE4BE96(int32_t NewValue, class AActor* KilledActor, const struct FGameplayEffectContextHandle& KillingEffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.OnPlayerAssist_E8EFD428448A47D1F42967A37BE4BE96");
		
		UGA_Card_OnKillPlayer_Movespeed_C_OnPlayerAssist_E8EFD428448A47D1F42967A37BE4BE96_Params params {};
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
	 * 		Name   -> Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_OnKillPlayer_Movespeed_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.K2_ActivateAbility");
		
		UGA_Card_OnKillPlayer_Movespeed_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.ExecuteUbergraph_GA_Card_OnKillPlayer_Movespeed
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OnKillPlayer_Movespeed_C::ExecuteUbergraph_GA_Card_OnKillPlayer_Movespeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C.ExecuteUbergraph_GA_Card_OnKillPlayer_Movespeed");
		
		UGA_Card_OnKillPlayer_Movespeed_C_ExecuteUbergraph_GA_Card_OnKillPlayer_Movespeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_OnKillPlayer_Movespeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_OnKillPlayer_Movespeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_OnKillPlayer_Movespeed.GA_Card_OnKillPlayer_Movespeed_C");
		return ptr;
	}

}


