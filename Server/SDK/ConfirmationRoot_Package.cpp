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
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.SetErrorMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InErrorMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationRoot_C::SetErrorMode(bool InErrorMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.SetErrorMode");
		
		UConfirmationRoot_C_SetErrorMode_Params params {};
		params.InErrorMode = InErrorMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.HandleTimeOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationRoot_C::HandleTimeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.HandleTimeOut");
		
		UConfirmationRoot_C_HandleTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.HandleResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionDialogResult                                 Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationRoot_C::HandleResult(EOrionDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.HandleResult");
		
		UConfirmationRoot_C_HandleResult_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.UpdateButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDefaultButton_C*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Text                                                       (Parm, OutParm, ReferenceParm)
	 */
	void UConfirmationRoot_C::UpdateButton(class UDefaultButton_C* Button, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.UpdateButton");
		
		UConfirmationRoot_C_UpdateButton_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.Is Timer Visible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UConfirmationRoot_C::IsTimerVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.Is Timer Visible");
		
		UConfirmationRoot_C_IsTimerVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.Get Timer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UConfirmationRoot_C::GetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.Get Timer");
		
		UConfirmationRoot_C_GetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UConfirmationRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.Construct");
		
		UConfirmationRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.OnShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UConfirmationRoot_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.OnShow");
		
		UConfirmationRoot_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.OnKill
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UConfirmationRoot_C::OnKill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.OnKill");
		
		UConfirmationRoot_C_OnKill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UConfirmationRoot_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.Destruct");
		
		UConfirmationRoot_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Accept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationRoot_C::BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Accept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature");
		
		UConfirmationRoot_C_BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Decline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationRoot_C::BndEvt__DefaultButtonDecline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Decline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature");
		
		UConfirmationRoot_C_BndEvt__DefaultButtonDecline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Cancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationRoot_C::BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.BndEvt__[Default Button] Cancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature");
		
		UConfirmationRoot_C_BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UConfirmationRoot_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.OnDeactivated");
		
		UConfirmationRoot_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UConfirmationRoot_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.OnActivated");
		
		UConfirmationRoot_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ConfirmationRoot.ConfirmationRoot_C.ExecuteUbergraph_ConfirmationRoot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationRoot_C::ExecuteUbergraph_ConfirmationRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationRoot.ConfirmationRoot_C.ExecuteUbergraph_ConfirmationRoot");
		
		UConfirmationRoot_C_ExecuteUbergraph_ConfirmationRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfirmationRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmationRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationRoot.ConfirmationRoot_C");
		return ptr;
	}

}


