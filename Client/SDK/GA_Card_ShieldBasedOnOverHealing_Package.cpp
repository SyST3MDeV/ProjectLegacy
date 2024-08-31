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
	 * 		Name   -> Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Card_ShieldBasedOnOverHealing_C::OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF");
		
		UGA_Card_ShieldBasedOnOverHealing_C_OnApplied_9C7A653D4E9BEE35410E4B8D8A1E57EF_Params params {};
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
	 * 		Name   -> Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_ShieldBasedOnOverHealing_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.K2_ActivateAbility");
		
		UGA_Card_ShieldBasedOnOverHealing_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.AddShieldForRegen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_ShieldBasedOnOverHealing_C::AddShieldForRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.AddShieldForRegen");
		
		UGA_Card_ShieldBasedOnOverHealing_C_AddShieldForRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_ShieldBasedOnOverHealing_C::ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C.ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing");
		
		UGA_Card_ShieldBasedOnOverHealing_C_ExecuteUbergraph_GA_Card_ShieldBasedOnOverHealing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_ShieldBasedOnOverHealing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_ShieldBasedOnOverHealing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Card_ShieldBasedOnOverHealing.GA_Card_ShieldBasedOnOverHealing_C");
		return ptr;
	}

}


