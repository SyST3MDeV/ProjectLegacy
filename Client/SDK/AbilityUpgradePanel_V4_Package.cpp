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
	 * 		Name   -> Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityUpgradePanelV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.Construct");
		
		UAbilityUpgradePanelV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePanelV4_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.On Open");
		
		UAbilityUpgradePanelV4_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePanelV4_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.On Close");
		
		UAbilityUpgradePanelV4_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.ExecuteUbergraph_AbilityUpgradePanel-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityUpgradePanelV4_C::ExecuteUbergraph_AbilityUpgradePanelV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanel-V4.AbilityUpgradePanel-V4_C.ExecuteUbergraph_AbilityUpgradePanel-V4");
		
		UAbilityUpgradePanelV4_C_ExecuteUbergraph_AbilityUpgradePanelV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityUpgradePanelV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityUpgradePanelV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityUpgradePanel_V4.AbilityUpgradePanel-V4_C");
		return ptr;
	}

}


