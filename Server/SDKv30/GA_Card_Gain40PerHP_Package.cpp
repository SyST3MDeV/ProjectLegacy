/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnMinionKill_E8EFD428448A47D1F42967A33E267392
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FKillingEffectContext*                       KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Gain40PerHP_C::OnMinionKill_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnMinionKill_E8EFD428448A47D1F42967A33E267392");
		
		UGA_Card_Gain40PerHP_C_OnMinionKill_E8EFD428448A47D1F42967A33E267392_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnMinionAssist_E8EFD428448A47D1F42967A33E267392
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FKillingEffectContext*                       KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Gain40PerHP_C::OnMinionAssist_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnMinionAssist_E8EFD428448A47D1F42967A33E267392");
		
		UGA_Card_Gain40PerHP_C_OnMinionAssist_E8EFD428448A47D1F42967A33E267392_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnPlayerKill_E8EFD428448A47D1F42967A33E267392
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FKillingEffectContext*                       KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Gain40PerHP_C::OnPlayerKill_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnPlayerKill_E8EFD428448A47D1F42967A33E267392");
		
		UGA_Card_Gain40PerHP_C_OnPlayerKill_E8EFD428448A47D1F42967A33E267392_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnPlayerAssist_E8EFD428448A47D1F42967A33E267392
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FKillingEffectContext*                       KilledActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Gain40PerHP_C::OnPlayerAssist_E8EFD428448A47D1F42967A33E267392(int32_t NewValue, class FKillingEffectContext* KilledActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.OnPlayerAssist_E8EFD428448A47D1F42967A33E267392");
		
		UGA_Card_Gain40PerHP_C_OnPlayerAssist_E8EFD428448A47D1F42967A33E267392_Params params {};
		params.NewValue = NewValue;
		params.KilledActor = KilledActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Gain40PerHP_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.K2_ActivateAbility");
		
		UGA_Card_Gain40PerHP_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.ExecuteUbergraph_GA_Card_Gain40PerHP
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Gain40PerHP_C::ExecuteUbergraph_GA_Card_Gain40PerHP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C.ExecuteUbergraph_GA_Card_Gain40PerHP");
		
		UGA_Card_Gain40PerHP_C_ExecuteUbergraph_GA_Card_Gain40PerHP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Gain40PerHP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Gain40PerHP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Gain40PerHP.GA_Card_Gain40PerHP_C");
		return ptr;
	}

}


