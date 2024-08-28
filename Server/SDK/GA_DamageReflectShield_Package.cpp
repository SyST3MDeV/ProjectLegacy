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
	 * 		Name   -> Function GA_DamageReflectShield.GA_DamageReflectShield_C.OnApplied_8758D8584F272E3A942EC6B2E7E3368A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_DamageReflectShield_C::OnApplied_8758D8584F272E3A942EC6B2E7E3368A(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DamageReflectShield.GA_DamageReflectShield_C.OnApplied_8758D8584F272E3A942EC6B2E7E3368A");
		
		UGA_DamageReflectShield_C_OnApplied_8758D8584F272E3A942EC6B2E7E3368A_Params params {};
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
	 * 		Name   -> Function GA_DamageReflectShield.GA_DamageReflectShield_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_DamageReflectShield_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DamageReflectShield.GA_DamageReflectShield_C.K2_ActivateAbility");
		
		UGA_DamageReflectShield_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_DamageReflectShield.GA_DamageReflectShield_C.ExecuteUbergraph_GA_DamageReflectShield
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_DamageReflectShield_C::ExecuteUbergraph_GA_DamageReflectShield(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DamageReflectShield.GA_DamageReflectShield_C.ExecuteUbergraph_GA_DamageReflectShield");
		
		UGA_DamageReflectShield_C_ExecuteUbergraph_GA_DamageReflectShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_DamageReflectShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_DamageReflectShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_DamageReflectShield.GA_DamageReflectShield_C");
		return ptr;
	}

}


