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
	 * 		Name   -> Function GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C.OnApplied_54CB9E854E634D97223FB09F7A09EEE5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Card_Blink_CD_On_Hero_Damage_C::OnApplied_54CB9E854E634D97223FB09F7A09EEE5(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C.OnApplied_54CB9E854E634D97223FB09F7A09EEE5");
		
		UGA_Card_Blink_CD_On_Hero_Damage_C_OnApplied_54CB9E854E634D97223FB09F7A09EEE5_Params params {};
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
	 * 		Name   -> Function GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Blink_CD_On_Hero_Damage_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C.K2_ActivateAbility");
		
		UGA_Card_Blink_CD_On_Hero_Damage_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C.ExecuteUbergraph_GA_Card_Blink_CD_On_Hero_Damage
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Blink_CD_On_Hero_Damage_C::ExecuteUbergraph_GA_Card_Blink_CD_On_Hero_Damage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C.ExecuteUbergraph_GA_Card_Blink_CD_On_Hero_Damage");
		
		UGA_Card_Blink_CD_On_Hero_Damage_C_ExecuteUbergraph_GA_Card_Blink_CD_On_Hero_Damage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Blink_CD_On_Hero_Damage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Blink_CD_On_Hero_Damage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Card_Blink_CD_On_Hero_Damage.GA_Card_Blink_CD_On_Hero_Damage_C");
		return ptr;
	}

}


