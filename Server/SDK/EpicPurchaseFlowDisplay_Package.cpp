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
	 * 		Name   -> Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UEpicPurchaseFlowDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Construct");
		
		UEpicPurchaseFlowDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Display Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     WebWidget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OfferId                                                    (Parm, ZeroConstructor)
	 */
	void UEpicPurchaseFlowDisplay_C::DisplayWidget(class UWidget* WebWidget, const class FString& OfferId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Display Widget");
		
		UEpicPurchaseFlowDisplay_C_DisplayWidget_Params params {};
		params.WebWidget = WebWidget;
		params.OfferId = OfferId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Dismiss Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEpicPurchaseFlowDisplay_C::DismissWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Dismiss Widget");
		
		UEpicPurchaseFlowDisplay_C_DismissWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEpicPurchaseFlowDisplay_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature");
		
		UEpicPurchaseFlowDisplay_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UEpicPurchaseFlowDisplay_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Destruct");
		
		UEpicPurchaseFlowDisplay_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.ExecuteUbergraph_EpicPurchaseFlowDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEpicPurchaseFlowDisplay_C::ExecuteUbergraph_EpicPurchaseFlowDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.ExecuteUbergraph_EpicPurchaseFlowDisplay");
		
		UEpicPurchaseFlowDisplay_C_ExecuteUbergraph_EpicPurchaseFlowDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEpicPurchaseFlowDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEpicPurchaseFlowDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C");
		return ptr;
	}

}


