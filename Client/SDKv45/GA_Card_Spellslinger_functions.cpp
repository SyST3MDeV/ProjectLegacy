#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_Spellslinger

#include "Basic.hpp"

#include "GA_Card_Spellslinger_classes.hpp"
#include "GA_Card_Spellslinger_parameters.hpp"


namespace SDK
{

// Function GA_Card_Spellslinger.GA_Card_Spellslinger_C.ExecuteUbergraph_GA_Card_Spellslinger
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Spellslinger_C::ExecuteUbergraph_GA_Card_Spellslinger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Spellslinger_C", "ExecuteUbergraph_GA_Card_Spellslinger");

	Params::GA_Card_Spellslinger_C_ExecuteUbergraph_GA_Card_Spellslinger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Spellslinger.GA_Card_Spellslinger_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Card_Spellslinger_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Spellslinger_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_Spellslinger.GA_Card_Spellslinger_C.OnCommit_7DB6562E4C593DFDCE6D3084A8ADA247
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*                 ActivatedAbility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_Spellslinger_C::OnCommit_7DB6562E4C593DFDCE6D3084A8ADA247(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Spellslinger_C", "OnCommit_7DB6562E4C593DFDCE6D3084A8ADA247");

	Params::GA_Card_Spellslinger_C_OnCommit_7DB6562E4C593DFDCE6D3084A8ADA247 Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_Spellslinger.GA_Card_Spellslinger_C.OnStateEnded_057EB3564A19A7120E288785FD7A6F3C
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_Spellslinger_C::OnStateEnded_057EB3564A19A7120E288785FD7A6F3C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Spellslinger_C", "OnStateEnded_057EB3564A19A7120E288785FD7A6F3C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_Spellslinger.GA_Card_Spellslinger_C.OnStateInterrupted_057EB3564A19A7120E288785FD7A6F3C
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_Spellslinger_C::OnStateInterrupted_057EB3564A19A7120E288785FD7A6F3C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_Spellslinger_C", "OnStateInterrupted_057EB3564A19A7120E288785FD7A6F3C");

	UObject::ProcessEvent(Func, nullptr);
}

}
