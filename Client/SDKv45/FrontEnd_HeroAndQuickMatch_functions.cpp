#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEnd_HeroAndQuickMatch

#include "Basic.hpp"

#include "FrontEnd_HeroAndQuickMatch_classes.hpp"
#include "FrontEnd_HeroAndQuickMatch_parameters.hpp"


namespace SDK
{

// Function FrontEnd_HeroAndQuickMatch.FrontEnd_HeroAndQuickMatch_C.ExecuteUbergraph_FrontEnd_HeroAndQuickMatch
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontEnd_HeroAndQuickMatch_C::ExecuteUbergraph_FrontEnd_HeroAndQuickMatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_HeroAndQuickMatch_C", "ExecuteUbergraph_FrontEnd_HeroAndQuickMatch");

	Params::FrontEnd_HeroAndQuickMatch_C_ExecuteUbergraph_FrontEnd_HeroAndQuickMatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEnd_HeroAndQuickMatch.FrontEnd_HeroAndQuickMatch_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontEnd_HeroAndQuickMatch_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_HeroAndQuickMatch_C", "ReceiveTick");

	Params::FrontEnd_HeroAndQuickMatch_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEnd_HeroAndQuickMatch.FrontEnd_HeroAndQuickMatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_HeroAndQuickMatch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_HeroAndQuickMatch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEnd_HeroAndQuickMatch.FrontEnd_HeroAndQuickMatch_C.SendMoon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_HeroHomeWorld                      NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_HeroHomeWorld                      NewParam1                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontEnd_HeroAndQuickMatch_C::SendMoon(Enum_HeroHomeWorld NewParam, Enum_HeroHomeWorld* NewParam1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_HeroAndQuickMatch_C", "SendMoon");

	Params::FrontEnd_HeroAndQuickMatch_C_SendMoon Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam1 != nullptr)
		*NewParam1 = Parms.NewParam1;
}

}
