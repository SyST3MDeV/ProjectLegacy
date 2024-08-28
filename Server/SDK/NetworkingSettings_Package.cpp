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
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.Apply
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNetworkingSettings_C::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.Apply");
		
		UNetworkingSettings_C_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.OnLanguageChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LanguageCode                                               (Parm, ZeroConstructor)
	 */
	void UNetworkingSettings_C::OnLanguageChanged(const class FString& LanguageCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.OnLanguageChanged");
		
		UNetworkingSettings_C_OnLanguageChanged_Params params {};
		params.LanguageCode = LanguageCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.OnGetMenuContent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UNetworkingSettings_C::OnGetMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.OnGetMenuContent_1");
		
		UNetworkingSettings_C_OnGetMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.Refresh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNetworkingSettings_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.Refresh");
		
		UNetworkingSettings_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UNetworkingSettings_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.OnActivated");
		
		UNetworkingSettings_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNetworkingSettings_C::BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature");
		
		UNetworkingSettings_C_BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNetworkingSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.Construct");
		
		UNetworkingSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NetworkingSettings.NetworkingSettings_C.ExecuteUbergraph_NetworkingSettings
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNetworkingSettings_C::ExecuteUbergraph_NetworkingSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkingSettings.NetworkingSettings_C.ExecuteUbergraph_NetworkingSettings");
		
		UNetworkingSettings_C_ExecuteUbergraph_NetworkingSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkingSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkingSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NetworkingSettings.NetworkingSettings_C");
		return ptr;
	}

}


