#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_PlaceWard

#include "Basic.hpp"

#include "BTTask_PlaceWard_classes.hpp"
#include "BTTask_PlaceWard_parameters.hpp"


namespace SDK
{

// Function BTTask_PlaceWard.BTTask_PlaceWard_C.ExecuteUbergraph_BTTask_PlaceWard
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlaceWard_C::ExecuteUbergraph_BTTask_PlaceWard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_PlaceWard_C", "ExecuteUbergraph_BTTask_PlaceWard");

	Params::BTTask_PlaceWard_C_ExecuteUbergraph_BTTask_PlaceWard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_PlaceWard.BTTask_PlaceWard_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_PlaceWard_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_PlaceWard_C", "ReceiveExecuteAI");

	Params::BTTask_PlaceWard_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
