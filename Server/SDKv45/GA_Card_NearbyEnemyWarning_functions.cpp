#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Card_NearbyEnemyWarning

#include "Basic.hpp"

#include "GA_Card_NearbyEnemyWarning_classes.hpp"
#include "GA_Card_NearbyEnemyWarning_parameters.hpp"


namespace SDK
{

// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.ExecuteUbergraph_GA_Card_NearbyEnemyWarning
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_NearbyEnemyWarning_C::ExecuteUbergraph_GA_Card_NearbyEnemyWarning(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "ExecuteUbergraph_GA_Card_NearbyEnemyWarning");

	Params::GA_Card_NearbyEnemyWarning_C_ExecuteUbergraph_GA_Card_NearbyEnemyWarning Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_NearbyEnemyWarning_C::FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7");

	Params::GA_Card_NearbyEnemyWarning_C_FailedToSpawn_FF25A69141E4AE39BFF6D9B868FAC6F7 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Card_NearbyEnemyWarning_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_NearbyEnemyWarning_C::NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7");

	Params::GA_Card_NearbyEnemyWarning_C_NotAuthority_FF25A69141E4AE39BFF6D9B868FAC6F7 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.OnStateEnded_E31D193B410A6D2E1FFFA2B54F4D1938
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_NearbyEnemyWarning_C::OnStateEnded_E31D193B410A6D2E1FFFA2B54F4D1938()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "OnStateEnded_E31D193B410A6D2E1FFFA2B54F4D1938");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.OnStateInterrupted_E31D193B410A6D2E1FFFA2B54F4D1938
// (BlueprintCallable, BlueprintEvent)

void UGA_Card_NearbyEnemyWarning_C::OnStateInterrupted_E31D193B410A6D2E1FFFA2B54F4D1938()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "OnStateInterrupted_E31D193B410A6D2E1FFFA2B54F4D1938");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Card_NearbyEnemyWarning.GA_Card_NearbyEnemyWarning_C.Success_FF25A69141E4AE39BFF6D9B868FAC6F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Card_NearbyEnemyWarning_C::Success_FF25A69141E4AE39BFF6D9B868FAC6F7(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Card_NearbyEnemyWarning_C", "Success_FF25A69141E4AE39BFF6D9B868FAC6F7");

	Params::GA_Card_NearbyEnemyWarning_C_Success_FF25A69141E4AE39BFF6D9B868FAC6F7 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}

}
