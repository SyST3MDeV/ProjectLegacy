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
	 * 		Name   -> Function BundleScreen.BundleScreen_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBundleScreen_C::BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BundleScreen.BundleScreen_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature");
		
		UBundleScreen_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BundleScreen.BundleScreen_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBundleScreen_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BundleScreen.BundleScreen_C.OnActivated");
		
		UBundleScreen_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BundleScreen.BundleScreen_C.SetBundleScreenTitle
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        BundleTitle                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBundleScreen_C::SetBundleScreenTitle(const class FText& BundleTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BundleScreen.BundleScreen_C.SetBundleScreenTitle");
		
		UBundleScreen_C_SetBundleScreenTitle_Params params {};
		params.BundleTitle = BundleTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BundleScreen.BundleScreen_C.ExecuteUbergraph_BundleScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBundleScreen_C::ExecuteUbergraph_BundleScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BundleScreen.BundleScreen_C.ExecuteUbergraph_BundleScreen");
		
		UBundleScreen_C_ExecuteUbergraph_BundleScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBundleScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBundleScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BundleScreen.BundleScreen_C");
		return ptr;
	}

}


