#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TM_WardPlacement

#include "Basic.hpp"

#include "TM_WardPlacement_classes.hpp"
#include "TM_WardPlacement_parameters.hpp"


namespace SDK
{

// Function TM_WardPlacement.TM_WardPlacement_C.ExecuteUbergraph_TM_WardPlacement
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATM_WardPlacement_C::ExecuteUbergraph_TM_WardPlacement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "ExecuteUbergraph_TM_WardPlacement");

	Params::TM_WardPlacement_C_ExecuteUbergraph_TM_WardPlacement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TM_WardPlacement.TM_WardPlacement_C.OnConfirmAllowedChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ConfirmAllowed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATM_WardPlacement_C::OnConfirmAllowedChange(bool ConfirmAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "OnConfirmAllowedChange");

	Params::TM_WardPlacement_C_OnConfirmAllowedChange Parms{};

	Parms.ConfirmAllowed = ConfirmAllowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TM_WardPlacement.TM_WardPlacement_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATM_WardPlacement_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "ReceiveTick");

	Params::TM_WardPlacement_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeActivate
// (Event, Public, BlueprintEvent)

void ATM_WardPlacement_C::OnTargetingModeActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "OnTargetingModeActivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeCancel
// (Event, Public, BlueprintEvent)

void ATM_WardPlacement_C::OnTargetingModeCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "OnTargetingModeCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_WardPlacement.TM_WardPlacement_C.OnTargetingModeConfirm
// (Event, Public, BlueprintEvent)

void ATM_WardPlacement_C::OnTargetingModeConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "OnTargetingModeConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_WardPlacement.TM_WardPlacement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATM_WardPlacement_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_WardPlacement.TM_WardPlacement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATM_WardPlacement_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_WardPlacement_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
