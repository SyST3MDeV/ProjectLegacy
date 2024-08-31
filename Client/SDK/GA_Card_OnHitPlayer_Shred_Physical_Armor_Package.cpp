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
	 * 		Name   -> Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.OnApplied_5E0AB5954050FE2E537882A1985AE628
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Card_OnHitPlayer_Shred_Physical_Armor_C::OnApplied_5E0AB5954050FE2E537882A1985AE628(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.OnApplied_5E0AB5954050FE2E537882A1985AE628");
		
		UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_OnApplied_5E0AB5954050FE2E537882A1985AE628_Params params {};
		params.Target = Target;
		params.SpecHandle = SpecHandle;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.OnFinish_CF56A64144C46819C653A18DD5AA8B72
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_OnHitPlayer_Shred_Physical_Armor_C::OnFinish_CF56A64144C46819C653A18DD5AA8B72()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.OnFinish_CF56A64144C46819C653A18DD5AA8B72");
		
		UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_OnFinish_CF56A64144C46819C653A18DD5AA8B72_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_OnHitPlayer_Shred_Physical_Armor_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.K2_ActivateAbility");
		
		UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Physical_Armor
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OnHitPlayer_Shred_Physical_Armor_C::ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Physical_Armor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C.ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Physical_Armor");
		
		UGA_Card_OnHitPlayer_Shred_Physical_Armor_C_ExecuteUbergraph_GA_Card_OnHitPlayer_Shred_Physical_Armor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_OnHitPlayer_Shred_Physical_Armor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_OnHitPlayer_Shred_Physical_Armor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_OnHitPlayer_Shred_Physical_Armor.GA_Card_OnHitPlayer_Shred_Physical_Armor_C");
		return ptr;
	}

}


