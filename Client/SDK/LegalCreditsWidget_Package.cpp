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
	 * 		Name   -> Function LegalCreditsWidget.LegalCreditsWidget_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULegalCreditsWidget_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalCreditsWidget.LegalCreditsWidget_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature");
		
		ULegalCreditsWidget_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LegalCreditsWidget.LegalCreditsWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULegalCreditsWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalCreditsWidget.LegalCreditsWidget_C.Construct");
		
		ULegalCreditsWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LegalCreditsWidget.LegalCreditsWidget_C.OnSelectedButtonChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            SelectedButton                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULegalCreditsWidget_C::OnSelectedButtonChanged_Event_1(class UOrionBaseButton* SelectedButton, int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalCreditsWidget.LegalCreditsWidget_C.OnSelectedButtonChanged_Event_1");
		
		ULegalCreditsWidget_C_OnSelectedButtonChanged_Event_1_Params params {};
		params.SelectedButton = SelectedButton;
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LegalCreditsWidget.LegalCreditsWidget_C.ExecuteUbergraph_LegalCreditsWidget
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULegalCreditsWidget_C::ExecuteUbergraph_LegalCreditsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalCreditsWidget.LegalCreditsWidget_C.ExecuteUbergraph_LegalCreditsWidget");
		
		ULegalCreditsWidget_C_ExecuteUbergraph_LegalCreditsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegalCreditsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegalCreditsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegalCreditsWidget.LegalCreditsWidget_C");
		return ptr;
	}

}


