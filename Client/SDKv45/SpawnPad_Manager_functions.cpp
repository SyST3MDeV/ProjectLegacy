#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpawnPad_Manager

#include "Basic.hpp"

#include "SpawnPad_Manager_classes.hpp"
#include "SpawnPad_Manager_parameters.hpp"


namespace SDK
{

// Function SpawnPad_Manager.SpawnPad_Manager_C.ExecuteUbergraph_SpawnPad_Manager
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPad_Manager_C::ExecuteUbergraph_SpawnPad_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPad_Manager_C", "ExecuteUbergraph_SpawnPad_Manager");

	Params::SpawnPad_Manager_C_ExecuteUbergraph_SpawnPad_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpawnPad_Manager.SpawnPad_Manager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpawnPad_Manager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPad_Manager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpawnPad_Manager.SpawnPad_Manager_C.OnTeamChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EOrionTeam                              NewTeamIdx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPad_Manager_C::OnTeamChanged(EOrionTeam NewTeamIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPad_Manager_C", "OnTeamChanged");

	Params::SpawnPad_Manager_C_OnTeamChanged Parms{};

	Parms.NewTeamIdx = NewTeamIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpawnPad_Manager.SpawnPad_Manager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpawnPad_Manager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPad_Manager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpawnPad_Manager.SpawnPad_Manager_C.HandleTeamColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASpawnPad_Manager_C::HandleTeamColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPad_Manager_C", "HandleTeamColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpawnPad_Manager.SpawnPad_Manager_C.DrivePad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DriverValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Pad_ID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPad_Manager_C::DrivePad(float DriverValue, int32 Pad_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpawnPad_Manager_C", "DrivePad");

	Params::SpawnPad_Manager_C_DrivePad Parms{};

	Parms.DriverValue = DriverValue;
	Parms.Pad_ID = Pad_ID;

	UObject::ProcessEvent(Func, &Parms);
}

}
