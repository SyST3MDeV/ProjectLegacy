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
	 * 		Name   -> Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePanelPullTabV4_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.On Open");
		
		UAbilityUpgradePanelPullTabV4_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePanelPullTabV4_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.On Close");
		
		UAbilityUpgradePanelPullTabV4_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityUpgradePanelPullTabV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.Construct");
		
		UAbilityUpgradePanelPullTabV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.HideWidget
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UAbilityUpgradePanelPullTabV4_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.HideWidget");
		
		UAbilityUpgradePanelPullTabV4_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.ExecuteUbergraph_AbilityUpgradePanelPullTab-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityUpgradePanelPullTabV4_C::ExecuteUbergraph_AbilityUpgradePanelPullTabV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradePanelPullTab-V4.AbilityUpgradePanelPullTab-V4_C.ExecuteUbergraph_AbilityUpgradePanelPullTab-V4");
		
		UAbilityUpgradePanelPullTabV4_C_ExecuteUbergraph_AbilityUpgradePanelPullTabV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityUpgradePanelPullTabV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityUpgradePanelPullTabV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityUpgradePanelPullTab_V4.AbilityUpgradePanelPullTab-V4_C");
		return ptr;
	}

}


