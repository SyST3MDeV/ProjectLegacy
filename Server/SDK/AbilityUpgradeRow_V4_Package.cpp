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
	 * 		Name   -> Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityUpgradeRowV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.Construct");
		
		UAbilityUpgradeRowV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.OnAbilityUpgraded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityUpgradeRowV4_C::OnAbilityUpgraded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.OnAbilityUpgraded");
		
		UAbilityUpgradeRowV4_C_OnAbilityUpgraded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.ShowUpgrades
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityUpgradeRowV4_C::ShowUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.ShowUpgrades");
		
		UAbilityUpgradeRowV4_C_ShowUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.HideUpgrades
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityUpgradeRowV4_C::HideUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.HideUpgrades");
		
		UAbilityUpgradeRowV4_C_HideUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.HideLocks
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbilityUpgradeRowV4_C::HideLocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.HideLocks");
		
		UAbilityUpgradeRowV4_C_HideLocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.ExecuteUbergraph_AbilityUpgradeRow-V4
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityUpgradeRowV4_C::ExecuteUbergraph_AbilityUpgradeRowV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow-V4.AbilityUpgradeRow-V4_C.ExecuteUbergraph_AbilityUpgradeRow-V4");
		
		UAbilityUpgradeRowV4_C_ExecuteUbergraph_AbilityUpgradeRowV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityUpgradeRowV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityUpgradeRowV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityUpgradeRow_V4.AbilityUpgradeRow-V4_C");
		return ptr;
	}

}


