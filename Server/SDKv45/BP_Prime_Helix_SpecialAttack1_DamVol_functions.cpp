#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Prime_Helix_SpecialAttack1_DamVol

#include "Basic.hpp"

#include "BP_Prime_Helix_SpecialAttack1_DamVol_classes.hpp"
#include "BP_Prime_Helix_SpecialAttack1_DamVol_parameters.hpp"


namespace SDK
{

// Function BP_Prime_Helix_SpecialAttack1_DamVol.BP_Prime_Helix_SpecialAttack1_DamVol_C.ExecuteUbergraph_BP_Prime_Helix_SpecialAttack1_DamVol
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Prime_Helix_SpecialAttack1_DamVol_C::ExecuteUbergraph_BP_Prime_Helix_SpecialAttack1_DamVol(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Prime_Helix_SpecialAttack1_DamVol_C", "ExecuteUbergraph_BP_Prime_Helix_SpecialAttack1_DamVol");

	Params::BP_Prime_Helix_SpecialAttack1_DamVol_C_ExecuteUbergraph_BP_Prime_Helix_SpecialAttack1_DamVol Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Prime_Helix_SpecialAttack1_DamVol.BP_Prime_Helix_SpecialAttack1_DamVol_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Prime_Helix_SpecialAttack1_DamVol_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Prime_Helix_SpecialAttack1_DamVol_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Prime_Helix_SpecialAttack1_DamVol.BP_Prime_Helix_SpecialAttack1_DamVol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Prime_Helix_SpecialAttack1_DamVol_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Prime_Helix_SpecialAttack1_DamVol_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
