#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Item_Aura_HealthRegen

#include "Basic.hpp"

#include "GC_Item_Aura_HealthRegen_classes.hpp"


namespace SDK
{

// Function GC_Item_Aura_HealthRegen.GC_Item_Aura_HealthRegen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Item_Aura_HealthRegen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Item_Aura_HealthRegen_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
