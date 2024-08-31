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
	 * 		Name   -> Function AccountSettings.AccountSettings_C.GetPSNOnlineIdText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UAccountSettings_C::GetPSNOnlineIdText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.GetPSNOnlineIdText");
		
		UAccountSettings_C_GetPSNOnlineIdText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.GetEpicAccountEmailText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UAccountSettings_C::GetEpicAccountEmailText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.GetEpicAccountEmailText");
		
		UAccountSettings_C_GetEpicAccountEmailText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.GetManageAccountEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UAccountSettings_C::GetManageAccountEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.GetManageAccountEnabled");
		
		UAccountSettings_C_GetManageAccountEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.GetUnlinkPSNVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UAccountSettings_C::GetUnlinkPSNVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.GetUnlinkPSNVisibility");
		
		UAccountSettings_C_GetUnlinkPSNVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.GetUnlinkingPSN
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UAccountSettings_C::GetUnlinkingPSN()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.GetUnlinkingPSN");
		
		UAccountSettings_C_GetUnlinkingPSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.GetUpgradeAccountVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UAccountSettings_C::GetUpgradeAccountVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.GetUpgradeAccountVisibility");
		
		UAccountSettings_C_GetUpgradeAccountVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.Refresh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAccountSettings_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.Refresh");
		
		UAccountSettings_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAccountSettings_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.OnActivated");
		
		UAccountSettings_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAccountSettings_C::BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature");
		
		UAccountSettings_C_BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAccountSettings_C::BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature");
		
		UAccountSettings_C_BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAccountSettings_C::BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature");
		
		UAccountSettings_C_BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.OnUpgradeAccountComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UAccountSettings_C::OnUpgradeAccountComplete(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.OnUpgradeAccountComplete");
		
		UAccountSettings_C_OnUpgradeAccountComplete_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.OnUnlinkConsoleAccountComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UAccountSettings_C::OnUnlinkConsoleAccountComplete(bool bSuccess, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.OnUnlinkConsoleAccountComplete");
		
		UAccountSettings_C_OnUnlinkConsoleAccountComplete_Params params {};
		params.bSuccess = bSuccess;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.ExecuteUbergraph_AccountSettings
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAccountSettings_C::ExecuteUbergraph_AccountSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.ExecuteUbergraph_AccountSettings");
		
		UAccountSettings_C_ExecuteUbergraph_AccountSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AccountSettings.AccountSettings_C.CloseSettings__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UAccountSettings_C::CloseSettings__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AccountSettings.AccountSettings_C.CloseSettings__DelegateSignature");
		
		UAccountSettings_C_CloseSettings__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAccountSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAccountSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AccountSettings.AccountSettings_C");
		return ptr;
	}

}


