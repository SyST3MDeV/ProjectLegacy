#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_OOC_HPRegMaxHP

#include "Basic.hpp"

#include "GA_Card_OOC_HPRegMaxHP_classes.hpp"
#include "GA_Card_OOC_HPRegMaxHP_parameters.hpp"


namespace SDK
{

// Function GA_Card_OOC_HPRegMaxHP.GA_Card_OOC_HPRegMaxHP_C.ExecuteUbergraph_GA_Card_OOC_HPRegMaxHP
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_OOC_HPRegMaxHP_C::ExecuteUbergraph_GA_Card_OOC_HPRegMaxHP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_OOC_HPRegMaxHP_C", "ExecuteUbergraph_GA_Card_OOC_HPRegMaxHP");

	Params::GA_Card_OOC_HPRegMaxHP_C_ExecuteUbergraph_GA_Card_OOC_HPRegMaxHP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_OOC_HPRegMaxHP.GA_Card_OOC_HPRegMaxHP_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Card_OOC_HPRegMaxHP_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_OOC_HPRegMaxHP_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_OOC_HPRegMaxHP.GA_Card_OOC_HPRegMaxHP_C.OnStateEnded_8DA9797C4C37BC7CDD9D12BFC568B9B6
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_OOC_HPRegMaxHP_C::OnStateEnded_8DA9797C4C37BC7CDD9D12BFC568B9B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_OOC_HPRegMaxHP_C", "OnStateEnded_8DA9797C4C37BC7CDD9D12BFC568B9B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_OOC_HPRegMaxHP.GA_Card_OOC_HPRegMaxHP_C.OnStateInterrupted_8DA9797C4C37BC7CDD9D12BFC568B9B6
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_OOC_HPRegMaxHP_C::OnStateInterrupted_8DA9797C4C37BC7CDD9D12BFC568B9B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_OOC_HPRegMaxHP_C", "OnStateInterrupted_8DA9797C4C37BC7CDD9D12BFC568B9B6");

	UObject::ProcessEvent(Func, nullptr);
}

}
