#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicPurchaseFlowDisplay

#include "Basic.hpp"

#include "EpicPurchaseFlowDisplay_classes.hpp"
#include "EpicPurchaseFlowDisplay_parameters.hpp"


namespace SDK
{

// Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.ExecuteUbergraph_EpicPurchaseFlowDisplay
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEpicPurchaseFlowDisplay_C::ExecuteUbergraph_EpicPurchaseFlowDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicPurchaseFlowDisplay_C", "ExecuteUbergraph_EpicPurchaseFlowDisplay");

	Params::EpicPurchaseFlowDisplay_C_ExecuteUbergraph_EpicPurchaseFlowDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOrionBaseButton*                 Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEpicPurchaseFlowDisplay_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicPurchaseFlowDisplay_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature");

	Params::EpicPurchaseFlowDisplay_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_462_OrionBaseButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEpicPurchaseFlowDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicPurchaseFlowDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEpicPurchaseFlowDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicPurchaseFlowDisplay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Dismiss Widget
// (BlueprintCallable, BlueprintEvent)

void UEpicPurchaseFlowDisplay_C::Dismiss_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicPurchaseFlowDisplay_C", "Dismiss Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EpicPurchaseFlowDisplay.EpicPurchaseFlowDisplay_C.Display Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WebWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OfferId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEpicPurchaseFlowDisplay_C::Display_Widget(class UWidget* WebWidget, const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicPurchaseFlowDisplay_C", "Display Widget");

	Params::EpicPurchaseFlowDisplay_C_Display_Widget Parms{};

	Parms.WebWidget = WebWidget;
	Parms.OfferId = std::move(OfferId);

	UObject::ProcessEvent(Func, &Parms);
}

}
