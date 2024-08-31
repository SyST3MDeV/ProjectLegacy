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
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPostGameSummary_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.OnActivated");
		
		UPostGameSummary_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPostGameSummary_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.OnDeactivated");
		
		UPostGameSummary_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPostGameSummary_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.Construct");
		
		UPostGameSummary_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.BndEvt__Intro_K2Node_ComponentBoundEvent_867_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPostGameSummary_C::BndEvt__Intro_K2Node_ComponentBoundEvent_867_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.BndEvt__Intro_K2Node_ComponentBoundEvent_867_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UPostGameSummary_C_BndEvt__Intro_K2Node_ComponentBoundEvent_867_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.BndEvt__ActivatableSwitcherSections_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     ActiveWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ActiveWidgetIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostGameSummary_C::BndEvt__ActivatableSwitcherSections_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32_t ActiveWidgetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.BndEvt__ActivatableSwitcherSections_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");
		
		UPostGameSummary_C_BndEvt__ActivatableSwitcherSections_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params params {};
		params.ActiveWidget = ActiveWidget;
		params.ActiveWidgetIndex = ActiveWidgetIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.OnExitScreen
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPostGameSummary_C::OnExitScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.OnExitScreen");
		
		UPostGameSummary_C_OnExitScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.HandleSurveyComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPostGameSummary_C::HandleSurveyComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.HandleSurveyComplete");
		
		UPostGameSummary_C_HandleSurveyComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.BndEvt__Player_Rating_K2Node_ComponentBoundEvent_59_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostGameSummary_C::BndEvt__Player_Rating_K2Node_ComponentBoundEvent_59_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.BndEvt__Player_Rating_K2Node_ComponentBoundEvent_59_OrionBaseButtonClicked__DelegateSignature");
		
		UPostGameSummary_C_BndEvt__Player_Rating_K2Node_ComponentBoundEvent_59_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_24_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostGameSummary_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_24_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_24_OrionBaseButtonClicked__DelegateSignature");
		
		UPostGameSummary_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_24_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PostGameSummary.PostGameSummary_C.ExecuteUbergraph_PostGameSummary
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostGameSummary_C::ExecuteUbergraph_PostGameSummary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostGameSummary.PostGameSummary_C.ExecuteUbergraph_PostGameSummary");
		
		UPostGameSummary_C_ExecuteUbergraph_PostGameSummary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostGameSummary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostGameSummary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PostGameSummary.PostGameSummary_C");
		return ptr;
	}

}


