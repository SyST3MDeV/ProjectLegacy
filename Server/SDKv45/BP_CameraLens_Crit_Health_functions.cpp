#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraLens_Crit_Health

#include "Basic.hpp"

#include "BP_CameraLens_Crit_Health_classes.hpp"
#include "BP_CameraLens_Crit_Health_parameters.hpp"


namespace SDK
{

// Function BP_CameraLens_Crit_Health.BP_CameraLens_Crit_Health_C.ExecuteUbergraph_BP_CameraLens_Crit_Health
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraLens_Crit_Health_C::ExecuteUbergraph_BP_CameraLens_Crit_Health(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLens_Crit_Health_C", "ExecuteUbergraph_BP_CameraLens_Crit_Health");

	Params::BP_CameraLens_Crit_Health_C_ExecuteUbergraph_BP_CameraLens_Crit_Health Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraLens_Crit_Health.BP_CameraLens_Crit_Health_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraLens_Crit_Health_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLens_Crit_Health_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraLens_Crit_Health.BP_CameraLens_Crit_Health_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraLens_Crit_Health_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLens_Crit_Health_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
