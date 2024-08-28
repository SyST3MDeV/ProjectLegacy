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
	 * 		Name   -> Function ReportBug.ReportBug_C.OnHandleBackAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UReportBug_C::OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.OnHandleBackAction");
		
		UReportBug_C_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportBug.ReportBug_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UReportBug_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.Construct");
		
		UReportBug_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportBug.ReportBug_C.BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportBug_C::BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature");
		
		UReportBug_C_BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportBug.ReportBug_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportBug_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature");
		
		UReportBug_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportBug.ReportBug_C.OnFeedbackScreenshotReady_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UReportBug_C::OnFeedbackScreenshotReady_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.OnFeedbackScreenshotReady_Event_1");
		
		UReportBug_C_OnFeedbackScreenshotReady_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportBug.ReportBug_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportBug_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature");
		
		UReportBug_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportBug.ReportBug_C.ExecuteUbergraph_ReportBug
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportBug_C::ExecuteUbergraph_ReportBug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportBug.ReportBug_C.ExecuteUbergraph_ReportBug");
		
		UReportBug_C_ExecuteUbergraph_ReportBug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReportBug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReportBug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReportBug.ReportBug_C");
		return ptr;
	}

}


