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
	 * 		Name   -> Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.Cancelled_18986A34449C88795589FAB68ED62EBF
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_BenefitBasedOnTargets_Parent_C::Cancelled_18986A34449C88795589FAB68ED62EBF(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.Cancelled_18986A34449C88795589FAB68ED62EBF");
		
		UGA_BenefitBasedOnTargets_Parent_C_Cancelled_18986A34449C88795589FAB68ED62EBF_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.Confirmed_18986A34449C88795589FAB68ED62EBF
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Targets                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_BenefitBasedOnTargets_Parent_C::Confirmed_18986A34449C88795589FAB68ED62EBF(const struct FGameplayAbilityTargetDataHandle& Targets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.Confirmed_18986A34449C88795589FAB68ED62EBF");
		
		UGA_BenefitBasedOnTargets_Parent_C_Confirmed_18986A34449C88795589FAB68ED62EBF_Params params {};
		params.Targets = Targets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_BenefitBasedOnTargets_Parent_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.K2_ActivateAbility");
		
		UGA_BenefitBasedOnTargets_Parent_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.ExecuteUbergraph_GA_BenefitBasedOnTargets_Parent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_BenefitBasedOnTargets_Parent_C::ExecuteUbergraph_GA_BenefitBasedOnTargets_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C.ExecuteUbergraph_GA_BenefitBasedOnTargets_Parent");
		
		UGA_BenefitBasedOnTargets_Parent_C_ExecuteUbergraph_GA_BenefitBasedOnTargets_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_BenefitBasedOnTargets_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_BenefitBasedOnTargets_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_BenefitBasedOnTargets_Parent.GA_BenefitBasedOnTargets_Parent_C");
		return ptr;
	}

}


