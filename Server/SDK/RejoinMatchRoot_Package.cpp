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
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.ShowRejoinButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URejoinMatchRoot_C::ShowRejoinButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.ShowRejoinButtons");
		
		URejoinMatchRoot_C_ShowRejoinButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.ShowRejoinInProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URejoinMatchRoot_C::ShowRejoinInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.ShowRejoinInProgress");
		
		URejoinMatchRoot_C_ShowRejoinInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URejoinMatchRoot_C::OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1");
		
		URejoinMatchRoot_C_OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.OnKilled_C55C791C4783817F3A0C30A6E503F4C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URejoinMatchRoot_C::OnKilled_C55C791C4783817F3A0C30A6E503F4C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.OnKilled_C55C791C4783817F3A0C30A6E503F4C1");
		
		URejoinMatchRoot_C_OnKilled_C55C791C4783817F3A0C30A6E503F4C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.OnDeclined_C55C791C4783817F3A0C30A6E503F4C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URejoinMatchRoot_C::OnDeclined_C55C791C4783817F3A0C30A6E503F4C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.OnDeclined_C55C791C4783817F3A0C30A6E503F4C1");
		
		URejoinMatchRoot_C_OnDeclined_C55C791C4783817F3A0C30A6E503F4C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URejoinMatchRoot_C::OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1");
		
		URejoinMatchRoot_C_OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URejoinMatchRoot_C::BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature");
		
		URejoinMatchRoot_C_BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URejoinMatchRoot_C::BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature");
		
		URejoinMatchRoot_C_BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.OnEnterState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionUIState                                      PreviousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URejoinMatchRoot_C::OnEnterState(EOrionUIState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.OnEnterState");
		
		URejoinMatchRoot_C_OnEnterState_Params params {};
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.HideSpinner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URejoinMatchRoot_C::HideSpinner(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.HideSpinner");
		
		URejoinMatchRoot_C_HideSpinner_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RejoinMatchRoot.RejoinMatchRoot_C.ExecuteUbergraph_RejoinMatchRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URejoinMatchRoot_C::ExecuteUbergraph_RejoinMatchRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RejoinMatchRoot.RejoinMatchRoot_C.ExecuteUbergraph_RejoinMatchRoot");
		
		URejoinMatchRoot_C_ExecuteUbergraph_RejoinMatchRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URejoinMatchRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URejoinMatchRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RejoinMatchRoot.RejoinMatchRoot_C");
		return ptr;
	}

}


