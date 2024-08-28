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
	 * 		Name   -> Function ReportPlayer.ReportPlayer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UReportPlayer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.Construct");
		
		UReportPlayer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportPlayer.ReportPlayer_C.BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportPlayer_C::BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature");
		
		UReportPlayer_C_BndEvt__DefaultButton_C_6_K2Node_ComponentBoundEvent_409_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportPlayer.ReportPlayer_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportPlayer_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature");
		
		UReportPlayer_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_838_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportPlayer.ReportPlayer_C.OnFeedbackScreenshotReady_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UReportPlayer_C::OnFeedbackScreenshotReady_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnFeedbackScreenshotReady_Event_1");
		
		UReportPlayer_C_OnFeedbackScreenshotReady_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportPlayer.ReportPlayer_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportPlayer_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature");
		
		UReportPlayer_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_207_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ReportPlayer.ReportPlayer_C.ExecuteUbergraph_ReportPlayer
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UReportPlayer_C::ExecuteUbergraph_ReportPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.ExecuteUbergraph_ReportPlayer");
		
		UReportPlayer_C_ExecuteUbergraph_ReportPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReportPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReportPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReportPlayer.ReportPlayer_C");
		return ptr;
	}

}


