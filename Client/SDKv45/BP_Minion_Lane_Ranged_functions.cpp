#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Minion_Lane_Ranged

#include "Basic.hpp"

#include "BP_Minion_Lane_Ranged_classes.hpp"


namespace SDK
{

// Function BP_Minion_Lane_Ranged.BP_Minion_Lane_Ranged_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Minion_Lane_Ranged_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Minion_Lane_Ranged_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Minion_Lane_Ranged.BP_Minion_Lane_Ranged_C.OnRep_IsInMeleeDistance
// (BlueprintCallable, BlueprintEvent)

void ABP_Minion_Lane_Ranged_C::OnRep_IsInMeleeDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Minion_Lane_Ranged_C", "OnRep_IsInMeleeDistance");

	UObject::ProcessEvent(Func, nullptr);
}

}
