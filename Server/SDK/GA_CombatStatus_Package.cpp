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
	 * 		Name   -> Function GA_CombatStatus.GA_CombatStatus_C.OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_CombatStatus_C::OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CombatStatus.GA_CombatStatus_C.OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E");
		
		UGA_CombatStatus_C_OnApplied_A4DE1B3E4FDD95590DCA4AA580E2F36E_Params params {};
		params.Source = Source;
		params.SpecHandle = SpecHandle;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CombatStatus.GA_CombatStatus_C.OnActivate_5557742B48383E21515A3C98055058C9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_CombatStatus_C::OnActivate_5557742B48383E21515A3C98055058C9(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CombatStatus.GA_CombatStatus_C.OnActivate_5557742B48383E21515A3C98055058C9");
		
		UGA_CombatStatus_C_OnActivate_5557742B48383E21515A3C98055058C9_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CombatStatus.GA_CombatStatus_C.OnCommit_87A4669C4A05FC7DF48639A5B1158FAB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_CombatStatus_C::OnCommit_87A4669C4A05FC7DF48639A5B1158FAB(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CombatStatus.GA_CombatStatus_C.OnCommit_87A4669C4A05FC7DF48639A5B1158FAB");
		
		UGA_CombatStatus_C_OnCommit_87A4669C4A05FC7DF48639A5B1158FAB_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CombatStatus.GA_CombatStatus_C.EventReceived_B8F68E77472AF693BD3EB7A90BA944BB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (Parm)
	 */
	void UGA_CombatStatus_C::EventReceived_B8F68E77472AF693BD3EB7A90BA944BB(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CombatStatus.GA_CombatStatus_C.EventReceived_B8F68E77472AF693BD3EB7A90BA944BB");
		
		UGA_CombatStatus_C_EventReceived_B8F68E77472AF693BD3EB7A90BA944BB_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CombatStatus.GA_CombatStatus_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_CombatStatus_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CombatStatus.GA_CombatStatus_C.K2_ActivateAbility");
		
		UGA_CombatStatus_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CombatStatus.GA_CombatStatus_C.ExecuteUbergraph_GA_CombatStatus
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_CombatStatus_C::ExecuteUbergraph_GA_CombatStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CombatStatus.GA_CombatStatus_C.ExecuteUbergraph_GA_CombatStatus");
		
		UGA_CombatStatus_C_ExecuteUbergraph_GA_CombatStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_CombatStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_CombatStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_CombatStatus.GA_CombatStatus_C");
		return ptr;
	}

}


