#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TM_Beam

#include "Basic.hpp"

#include "TM_Beam_classes.hpp"
#include "TM_Beam_parameters.hpp"


namespace SDK
{

// Function TM_Beam.TM_Beam_C.ExecuteUbergraph_TM_Beam
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATM_Beam_C::ExecuteUbergraph_TM_Beam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "ExecuteUbergraph_TM_Beam");

	Params::TM_Beam_C_ExecuteUbergraph_TM_Beam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TM_Beam.TM_Beam_C.OnStartBuildingFacets
// (Event, Public, BlueprintEvent)

void ATM_Beam_C::OnStartBuildingFacets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "OnStartBuildingFacets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_Beam.TM_Beam_C.Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATM_Beam_C::Value_Changed(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "Value Changed");

	Params::TM_Beam_C_Value_Changed Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TM_Beam.TM_Beam_C.OnFacetBeamBuilt
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          Start                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          End                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATM_Beam_C::OnFacetBeamBuilt(const struct FVector& Start, const struct FVector& End, float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "OnFacetBeamBuilt");

	Params::TM_Beam_C_OnFacetBeamBuilt Parms{};

	Parms.Start = std::move(Start);
	Parms.End = std::move(End);
	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TM_Beam.TM_Beam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATM_Beam_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_Beam.TM_Beam_C.OnTargetingModeConfirm
// (Event, Public, BlueprintEvent)

void ATM_Beam_C::OnTargetingModeConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "OnTargetingModeConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_Beam.TM_Beam_C.OnTargetingModeCancel
// (Event, Public, BlueprintEvent)

void ATM_Beam_C::OnTargetingModeCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "OnTargetingModeCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_Beam.TM_Beam_C.OnTargetingModeActivate
// (Event, Public, BlueprintEvent)

void ATM_Beam_C::OnTargetingModeActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "OnTargetingModeActivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TM_Beam.TM_Beam_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATM_Beam_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TM_Beam_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
