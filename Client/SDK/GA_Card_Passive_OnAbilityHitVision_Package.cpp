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
	 * 		Name   -> Function GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C.OnApplied_F8D8D1CF494908AE35A3279DEE1993B6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Card_Passive_OnAbilityHitVision_C::OnApplied_F8D8D1CF494908AE35A3279DEE1993B6(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C.OnApplied_F8D8D1CF494908AE35A3279DEE1993B6");
		
		UGA_Card_Passive_OnAbilityHitVision_C_OnApplied_F8D8D1CF494908AE35A3279DEE1993B6_Params params {};
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
	 * 		Name   -> Function GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Passive_OnAbilityHitVision_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C.K2_ActivateAbility");
		
		UGA_Card_Passive_OnAbilityHitVision_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C.ExecuteUbergraph_GA_Card_Passive_OnAbilityHitVision
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Passive_OnAbilityHitVision_C::ExecuteUbergraph_GA_Card_Passive_OnAbilityHitVision(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C.ExecuteUbergraph_GA_Card_Passive_OnAbilityHitVision");
		
		UGA_Card_Passive_OnAbilityHitVision_C_ExecuteUbergraph_GA_Card_Passive_OnAbilityHitVision_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Passive_OnAbilityHitVision_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Passive_OnAbilityHitVision_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_OnAbilityHitVision.GA_Card_Passive_OnAbilityHitVision_C");
		return ptr;
	}

}


