#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DisplayNameSelect

#include "Basic.hpp"

#include "DisplayNameSelect_classes.hpp"
#include "DisplayNameSelect_parameters.hpp"


namespace SDK
{

// Function DisplayNameSelect.DisplayNameSelect_C.OnDisplayNameUpdateComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDisplayNameSelect_C::OnDisplayNameUpdateComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "OnDisplayNameUpdateComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayNameSelect.DisplayNameSelect_C.ExecuteUbergraph_DisplayNameSelect
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDisplayNameSelect_C::ExecuteUbergraph_DisplayNameSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "ExecuteUbergraph_DisplayNameSelect");

	Params::DisplayNameSelect_C_ExecuteUbergraph_DisplayNameSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisplayNameSelect.DisplayNameSelect_C.OnUpdateDisplayName
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             MESSAGE                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDisplayNameSelect_C::OnUpdateDisplayName(bool bSuccess, const class FText& MESSAGE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "OnUpdateDisplayName");

	Params::DisplayNameSelect_C_OnUpdateDisplayName Parms{};

	Parms.bSuccess = bSuccess;
	Parms.MESSAGE = std::move(MESSAGE);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisplayNameSelect.DisplayNameSelect_C.BndEvt__UpdateButton_K2Node_ComponentBoundEvent_1_OrionBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UOrionBaseButton*                 Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDisplayNameSelect_C::BndEvt__UpdateButton_K2Node_ComponentBoundEvent_1_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "BndEvt__UpdateButton_K2Node_ComponentBoundEvent_1_OrionBaseButtonClicked__DelegateSignature");

	Params::DisplayNameSelect_C_BndEvt__UpdateButton_K2Node_ComponentBoundEvent_1_OrionBaseButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisplayNameSelect.DisplayNameSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDisplayNameSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DisplayNameSelect.DisplayNameSelect_C.ShowErrorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             MESSAGE                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    PlaySoundOnError                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDisplayNameSelect_C::ShowErrorMessage(const class FText& MESSAGE, bool PlaySoundOnError)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "ShowErrorMessage");

	Params::DisplayNameSelect_C_ShowErrorMessage Parms{};

	Parms.MESSAGE = std::move(MESSAGE);
	Parms.PlaySoundOnError = PlaySoundOnError;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DisplayNameSelect.DisplayNameSelect_C.GetWelcomeTextBlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UDisplayNameSelect_C::GetWelcomeTextBlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "GetWelcomeTextBlock");

	Params::DisplayNameSelect_C_GetWelcomeTextBlock Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DisplayNameSelect.DisplayNameSelect_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UDisplayNameSelect_C::IsInteractable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DisplayNameSelect_C", "IsInteractable");

	Params::DisplayNameSelect_C_IsInteractable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
