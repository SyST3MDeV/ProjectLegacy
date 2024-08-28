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
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.DoesItemHaveChildren
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t UQuickInviteEntry_C::DoesItemHaveChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.DoesItemHaveChildren");
		
		UQuickInviteEntry_C_DoesItemHaveChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.GetIndentLevel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t UQuickInviteEntry_C::GetIndentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.GetIndentLevel");
		
		UQuickInviteEntry_C_GetIndentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.GetSelectionMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	ESelectionMode UQuickInviteEntry_C::GetSelectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.GetSelectionMode");
		
		UQuickInviteEntry_C_GetSelectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.IsItemExpanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UQuickInviteEntry_C::IsItemExpanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.IsItemExpanded");
		
		UQuickInviteEntry_C_IsItemExpanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.GetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UObject* UQuickInviteEntry_C::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.GetData");
		
		UQuickInviteEntry_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.Private_OnExpanderArrowShiftClicked
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQuickInviteEntry_C::Private_OnExpanderArrowShiftClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.Private_OnExpanderArrowShiftClicked");
		
		UQuickInviteEntry_C_Private_OnExpanderArrowShiftClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.SetIndexInList
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InIndexInList                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickInviteEntry_C::SetIndexInList(int32_t InIndexInList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.SetIndexInList");
		
		UQuickInviteEntry_C_SetIndexInList_Params params {};
		params.InIndexInList = InIndexInList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.SetSelected
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickInviteEntry_C::SetSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.SetSelected");
		
		UQuickInviteEntry_C_SetSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.ToggleExpansion
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQuickInviteEntry_C::ToggleExpansion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.ToggleExpansion");
		
		UQuickInviteEntry_C_ToggleExpansion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.Reset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQuickInviteEntry_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.Reset");
		
		UQuickInviteEntry_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickInviteEntry_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature");
		
		UQuickInviteEntry_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.SetData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InData                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickInviteEntry_C::SetData(class UObject* InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.SetData");
		
		UQuickInviteEntry_C_SetData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.RegisterOnClicked
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UQuickInviteEntry_C::RegisterOnClicked(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.RegisterOnClicked");
		
		UQuickInviteEntry_C_RegisterOnClicked_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.ExecuteUbergraph_QuickInviteEntry
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickInviteEntry_C::ExecuteUbergraph_QuickInviteEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.ExecuteUbergraph_QuickInviteEntry");
		
		UQuickInviteEntry_C_ExecuteUbergraph_QuickInviteEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickInviteEntry.QuickInviteEntry_C.OnInviteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickInviteEntry_C::OnInviteClicked__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickInviteEntry.QuickInviteEntry_C.OnInviteClicked__DelegateSignature");
		
		UQuickInviteEntry_C_OnInviteClicked__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickInviteEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickInviteEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickInviteEntry.QuickInviteEntry_C");
		return ptr;
	}

}


