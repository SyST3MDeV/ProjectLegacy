#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Buff_Gold_PrimaryAttack

#include "Basic.hpp"

#include "GA_Buff_Gold_PrimaryAttack_classes.hpp"
#include "GA_Buff_Gold_PrimaryAttack_parameters.hpp"


namespace SDK
{

// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.ExecuteUbergraph_GA_Buff_Gold_PrimaryAttack
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::ExecuteUbergraph_GA_Buff_Gold_PrimaryAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "ExecuteUbergraph_GA_Buff_Gold_PrimaryAttack");

	Params::GA_Buff_Gold_PrimaryAttack_C_ExecuteUbergraph_GA_Buff_Gold_PrimaryAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.Cancelled_E7B86EA84984694E31D659AC2514E6D8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Targets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Buff_Gold_PrimaryAttack_C::Cancelled_E7B86EA84984694E31D659AC2514E6D8(const struct FGameplayAbilityTargetDataHandle& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "Cancelled_E7B86EA84984694E31D659AC2514E6D8");

	Params::GA_Buff_Gold_PrimaryAttack_C_Cancelled_E7B86EA84984694E31D659AC2514E6D8 Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.Confirmed_E7B86EA84984694E31D659AC2514E6D8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Targets                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Buff_Gold_PrimaryAttack_C::Confirmed_E7B86EA84984694E31D659AC2514E6D8(const struct FGameplayAbilityTargetDataHandle& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "Confirmed_E7B86EA84984694E31D659AC2514E6D8");

	Params::GA_Buff_Gold_PrimaryAttack_C_Confirmed_E7B86EA84984694E31D659AC2514E6D8 Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Buff_Gold_PrimaryAttack_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.OnBlendOut_0DCFD75043AB4FC79A8AC58407987B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::OnBlendOut_0DCFD75043AB4FC79A8AC58407987B24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "OnBlendOut_0DCFD75043AB4FC79A8AC58407987B24");

	Params::GA_Buff_Gold_PrimaryAttack_C_OnBlendOut_0DCFD75043AB4FC79A8AC58407987B24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.OnCancelled_0DCFD75043AB4FC79A8AC58407987B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::OnCancelled_0DCFD75043AB4FC79A8AC58407987B24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "OnCancelled_0DCFD75043AB4FC79A8AC58407987B24");

	Params::GA_Buff_Gold_PrimaryAttack_C_OnCancelled_0DCFD75043AB4FC79A8AC58407987B24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.OnCompleted_0DCFD75043AB4FC79A8AC58407987B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::OnCompleted_0DCFD75043AB4FC79A8AC58407987B24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "OnCompleted_0DCFD75043AB4FC79A8AC58407987B24");

	Params::GA_Buff_Gold_PrimaryAttack_C_OnCompleted_0DCFD75043AB4FC79A8AC58407987B24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.OnInterrupted_0DCFD75043AB4FC79A8AC58407987B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::OnInterrupted_0DCFD75043AB4FC79A8AC58407987B24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "OnInterrupted_0DCFD75043AB4FC79A8AC58407987B24");

	Params::GA_Buff_Gold_PrimaryAttack_C_OnInterrupted_0DCFD75043AB4FC79A8AC58407987B24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.OnNotifyBegin_0DCFD75043AB4FC79A8AC58407987B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::OnNotifyBegin_0DCFD75043AB4FC79A8AC58407987B24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "OnNotifyBegin_0DCFD75043AB4FC79A8AC58407987B24");

	Params::GA_Buff_Gold_PrimaryAttack_C_OnNotifyBegin_0DCFD75043AB4FC79A8AC58407987B24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Buff_Gold_PrimaryAttack.GA_Buff_Gold_PrimaryAttack_C.OnNotifyEnd_0DCFD75043AB4FC79A8AC58407987B24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Buff_Gold_PrimaryAttack_C::OnNotifyEnd_0DCFD75043AB4FC79A8AC58407987B24(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Buff_Gold_PrimaryAttack_C", "OnNotifyEnd_0DCFD75043AB4FC79A8AC58407987B24");

	Params::GA_Buff_Gold_PrimaryAttack_C_OnNotifyEnd_0DCFD75043AB4FC79A8AC58407987B24 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}

}
