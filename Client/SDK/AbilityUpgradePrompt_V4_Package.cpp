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
	 * 		Name   -> Function AbilityUpgradePrompt-V4.AbilityUpgradePrompt-V4_C.ShowWidget
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePromptV4_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePrompt-V4.AbilityUpgradePrompt-V4_C.ShowWidget");
		
		UAbilityUpgradePromptV4_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePrompt-V4.AbilityUpgradePrompt-V4_C.HideWidget
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePromptV4_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePrompt-V4.AbilityUpgradePrompt-V4_C.HideWidget");
		
		UAbilityUpgradePromptV4_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePrompt-V4.AbilityUpgradePrompt-V4_C.ExecuteUbergraph_AbilityUpgradePrompt-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityUpgradePromptV4_C::ExecuteUbergraph_AbilityUpgradePromptV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePrompt-V4.AbilityUpgradePrompt-V4_C.ExecuteUbergraph_AbilityUpgradePrompt-V4");
		
		UAbilityUpgradePromptV4_C_ExecuteUbergraph_AbilityUpgradePromptV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityUpgradePromptV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityUpgradePromptV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityUpgradePrompt_V4.AbilityUpgradePrompt-V4_C");
		return ptr;
	}

}


