#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSM_BaseMOBA

#include "Basic.hpp"

#include "BP_GSM_BaseMOBA_classes.hpp"
#include "BP_GSM_BaseMOBA_parameters.hpp"


namespace SDK
{

// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TestPlayMatinee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::TestPlayMatinee__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "TestPlayMatinee__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled_Dispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              HeroTeam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::HeroHasRecalled_Dispatch__DelegateSignature(EOrionTeam HeroTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "HeroHasRecalled_Dispatch__DelegateSignature");

	Params::BP_GSM_BaseMOBA_C_HeroHasRecalled_Dispatch__DelegateSignature Parms{};

	Parms.HeroTeam = HeroTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.TriggerVictoryEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              WinningTeam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::TriggerVictoryEvent__DelegateSignature(EOrionTeam WinningTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "TriggerVictoryEvent__DelegateSignature");

	Params::BP_GSM_BaseMOBA_C_TriggerVictoryEvent__DelegateSignature Parms{};

	Parms.WinningTeam = WinningTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.DecoyWasCreated_Dispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetableActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::DecoyWasCreated_Dispatch__DelegateSignature(class AActor* TargetableActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "DecoyWasCreated_Dispatch__DelegateSignature");

	Params::BP_GSM_BaseMOBA_C_DecoyWasCreated_Dispatch__DelegateSignature Parms{};

	Parms.TargetableActor = TargetableActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasSpawned_Dispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedHero                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::HeroHasSpawned_Dispatch__DelegateSignature(class AActor* SpawnedHero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "HeroHasSpawned_Dispatch__DelegateSignature");

	Params::BP_GSM_BaseMOBA_C_HeroHasSpawned_Dispatch__DelegateSignature Parms{};

	Parms.SpawnedHero = SpawnedHero;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasDied_Dispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DeadHero                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::HeroHasDied_Dispatch__DelegateSignature(class AActor* DeadHero, class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "HeroHasDied_Dispatch__DelegateSignature");

	Params::BP_GSM_BaseMOBA_C_HeroHasDied_Dispatch__DelegateSignature Parms{};

	Parms.DeadHero = DeadHero;
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.MinionsSpawning_Dispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::MinionsSpawning_Dispatch__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "MinionsSpawning_Dispatch__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.PrimeHelixKilled_Dispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              TeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::PrimeHelixKilled_Dispatch__DelegateSignature(EOrionTeam TeamNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "PrimeHelixKilled_Dispatch__DelegateSignature");

	Params::BP_GSM_BaseMOBA_C_PrimeHelixKilled_Dispatch__DelegateSignature Parms{};

	Parms.TeamNum = TeamNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.StopVictoryDefeatMusicDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::StopVictoryDefeatMusicDispatch__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "StopVictoryDefeatMusicDispatch__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ExecuteUbergraph_BP_GSM_BaseMOBA
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::ExecuteUbergraph_BP_GSM_BaseMOBA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "ExecuteUbergraph_BP_GSM_BaseMOBA");

	Params::BP_GSM_BaseMOBA_C_ExecuteUbergraph_BP_GSM_BaseMOBA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.StopVictoryDefeatMusic
// (BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::StopVictoryDefeatMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "StopVictoryDefeatMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.PlayVictoryDefeatMusic
// (BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::PlayVictoryDefeatMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "PlayVictoryDefeatMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.MatchStartMusic
// (BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::MatchStartMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "MatchStartMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.OnGameStateMatchStarted_Bind
// (BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::OnGameStateMatchStarted_Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "OnGameStateMatchStarted_Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.MinionsSpawning
// (BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::MinionsSpawning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "MinionsSpawning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.PlayEndMatchSequence
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              WinningTeamNum_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::PlayEndMatchSequence(EOrionTeam WinningTeamNum_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "PlayEndMatchSequence");

	Params::BP_GSM_BaseMOBA_C_PlayEndMatchSequence Parms{};

	Parms.WinningTeamNum_0 = WinningTeamNum_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.HeroHasRecalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              HeroTeam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::HeroHasRecalled(EOrionTeam HeroTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "HeroHasRecalled");

	Params::BP_GSM_BaseMOBA_C_HeroHasRecalled Parms{};

	Parms.HeroTeam = HeroTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GSM_LevelUpTowers
// (BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::GSM_LevelUpTowers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "GSM_LevelUpTowers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GSM_BaseMOBA_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.Register Team Objective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionDamageableObjective_Base*   InObjective                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::Register_Team_Objective(class AOrionDamageableObjective_Base* InObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "Register Team Objective");

	Params::BP_GSM_BaseMOBA_C_Register_Team_Objective Parms{};

	Parms.InObjective = InObjective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.GetWinningTeamNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              WinningTeam                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::GetWinningTeamNum(EOrionTeam* WinningTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "GetWinningTeamNum");

	Params::BP_GSM_BaseMOBA_C_GetWinningTeamNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WinningTeam != nullptr)
		*WinningTeam = Parms.WinningTeam;
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.IsMatchOver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    GameOver                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GSM_BaseMOBA_C::IsMatchOver(bool* GameOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "IsMatchOver");

	Params::BP_GSM_BaseMOBA_C_IsMatchOver Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GameOver != nullptr)
		*GameOver = Parms.GameOver;
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.RegisterTeamTowers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionDamageableObjective_Base*   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::RegisterTeamTowers(class AOrionDamageableObjective_Base* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "RegisterTeamTowers");

	Params::BP_GSM_BaseMOBA_C_RegisterTeamTowers Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSM_BaseMOBA.BP_GSM_BaseMOBA_C.ForceDestroyCore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionTeam                              TeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GSM_BaseMOBA_C::ForceDestroyCore(EOrionTeam TeamNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSM_BaseMOBA_C", "ForceDestroyCore");

	Params::BP_GSM_BaseMOBA_C_ForceDestroyCore Parms{};

	Parms.TeamNum = TeamNum;

	UObject::ProcessEvent(Func, &Parms);
}

}
