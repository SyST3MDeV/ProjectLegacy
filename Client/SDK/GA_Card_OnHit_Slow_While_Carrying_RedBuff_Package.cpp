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
	 * 		Name   -> Function GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C.OnApplied_D050AAC84908D87B99A0A6BB951EDBBC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C::OnApplied_D050AAC84908D87B99A0A6BB951EDBBC(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C.OnApplied_D050AAC84908D87B99A0A6BB951EDBBC");
		
		UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C_OnApplied_D050AAC84908D87B99A0A6BB951EDBBC_Params params {};
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
	 * 		Name   -> Function GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C.K2_ActivateAbility");
		
		UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C.ExecuteUbergraph_GA_Card_OnHit_Slow_While_Carrying_RedBuff
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C::ExecuteUbergraph_GA_Card_OnHit_Slow_While_Carrying_RedBuff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C.ExecuteUbergraph_GA_Card_OnHit_Slow_While_Carrying_RedBuff");
		
		UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C_ExecuteUbergraph_GA_Card_OnHit_Slow_While_Carrying_RedBuff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_OnHit_Slow_While_Carrying_RedBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_OnHit_Slow_While_Carrying_RedBuff.GA_Card_OnHit_Slow_While_Carrying_RedBuff_C");
		return ptr;
	}

}


