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
	 * 		Name   -> Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.OnApplied_5096090645BC58FAB37B5CACC775BEF7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_CarriedBuff_BurnStructureOnHit_C::OnApplied_5096090645BC58FAB37B5CACC775BEF7(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.OnApplied_5096090645BC58FAB37B5CACC775BEF7");
		
		UGA_CarriedBuff_BurnStructureOnHit_C_OnApplied_5096090645BC58FAB37B5CACC775BEF7_Params params {};
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
	 * 		Name   -> Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_CarriedBuff_BurnStructureOnHit_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.K2_ActivateAbility");
		
		UGA_CarriedBuff_BurnStructureOnHit_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_CarriedBuff_BurnStructureOnHit_C::ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C.ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit");
		
		UGA_CarriedBuff_BurnStructureOnHit_C_ExecuteUbergraph_GA_CarriedBuff_BurnStructureOnHit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_CarriedBuff_BurnStructureOnHit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_CarriedBuff_BurnStructureOnHit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_CarriedBuff_BurnStructureOnHit.GA_CarriedBuff_BurnStructureOnHit_C");
		return ptr;
	}

}


