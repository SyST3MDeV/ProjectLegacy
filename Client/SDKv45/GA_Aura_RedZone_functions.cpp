#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Aura_RedZone

#include "Basic.hpp"

#include "GA_Aura_RedZone_classes.hpp"
#include "GA_Aura_RedZone_parameters.hpp"


namespace SDK
{

// Function GA_Aura_RedZone.GA_Aura_RedZone_C.ExecuteUbergraph_GA_Aura_RedZone
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Aura_RedZone_C::ExecuteUbergraph_GA_Aura_RedZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Aura_RedZone_C", "ExecuteUbergraph_GA_Aura_RedZone");

	Params::GA_Aura_RedZone_C_ExecuteUbergraph_GA_Aura_RedZone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Aura_RedZone.GA_Aura_RedZone_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Aura_RedZone_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Aura_RedZone_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
