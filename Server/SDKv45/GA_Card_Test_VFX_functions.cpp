#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Test_VFX

#include "Basic.hpp"

#include "GA_Card_Test_VFX_classes.hpp"
#include "GA_Card_Test_VFX_parameters.hpp"


namespace SDK
{

// Function GA_Card_Test_VFX.GA_Card_Test_VFX_C.ExecuteUbergraph_GA_Card_Test_VFX
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Test_VFX_C::ExecuteUbergraph_GA_Card_Test_VFX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Test_VFX_C", "ExecuteUbergraph_GA_Card_Test_VFX");

	Params::GA_Card_Test_VFX_C_ExecuteUbergraph_GA_Card_Test_VFX Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Test_VFX.GA_Card_Test_VFX_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Card_Test_VFX_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Test_VFX_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_Test_VFX.GA_Card_Test_VFX_C.OnInput_225184C343B05525724A44AC9E473B39
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_Test_VFX_C::OnInput_225184C343B05525724A44AC9E473B39()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Test_VFX_C", "OnInput_225184C343B05525724A44AC9E473B39");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_Test_VFX.GA_Card_Test_VFX_C.OnInput_F59437704D73E2F7C61D12B5D97527DC
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_Test_VFX_C::OnInput_F59437704D73E2F7C61D12B5D97527DC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Test_VFX_C", "OnInput_F59437704D73E2F7C61D12B5D97527DC");

	UObject::ProcessEvent(Func, nullptr);
}

}
