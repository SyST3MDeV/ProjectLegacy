#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Intellect_Decal_Glow

#include "Basic.hpp"

#include "BP_Intellect_Decal_Glow_classes.hpp"
#include "BP_Intellect_Decal_Glow_parameters.hpp"


namespace SDK
{

// Function BP_Intellect_Decal_Glow.BP_Intellect_Decal_Glow_C.ExecuteUbergraph_BP_Intellect_Decal_Glow
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Intellect_Decal_Glow_C::ExecuteUbergraph_BP_Intellect_Decal_Glow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Intellect_Decal_Glow_C", "ExecuteUbergraph_BP_Intellect_Decal_Glow");

	Params::BP_Intellect_Decal_Glow_C_ExecuteUbergraph_BP_Intellect_Decal_Glow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Intellect_Decal_Glow.BP_Intellect_Decal_Glow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Intellect_Decal_Glow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Intellect_Decal_Glow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Intellect_Decal_Glow.BP_Intellect_Decal_Glow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Intellect_Decal_Glow_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Intellect_Decal_Glow_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
