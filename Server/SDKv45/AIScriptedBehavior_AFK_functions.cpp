#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIScriptedBehavior_AFK

#include "Basic.hpp"

#include "AIScriptedBehavior_AFK_classes.hpp"
#include "AIScriptedBehavior_AFK_parameters.hpp"


namespace SDK
{

// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.ExecuteUbergraph_AIScriptedBehavior_AFK
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIScriptedBehavior_AFK_C::ExecuteUbergraph_AIScriptedBehavior_AFK(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "ExecuteUbergraph_AIScriptedBehavior_AFK");

	Params::AIScriptedBehavior_AFK_C_ExecuteUbergraph_AIScriptedBehavior_AFK Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.Go
// (BlueprintCallable, BlueprintEvent)

void UAIScriptedBehavior_AFK_C::Go()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "Go");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.BehaviorFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionAIController*               AIController_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIScriptedBehavior_AFK_C::BehaviorFinished(class AOrionAIController* AIController_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "BehaviorFinished");

	Params::AIScriptedBehavior_AFK_C_BehaviorFinished Parms{};

	Parms.AIController_0 = AIController_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.OnFinish_6603ED9A4CBFC92580AF749D7F045D8E
// (BlueprintCallable, BlueprintEvent)

void UAIScriptedBehavior_AFK_C::OnFinish_6603ED9A4CBFC92580AF749D7F045D8E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "OnFinish_6603ED9A4CBFC92580AF749D7F045D8E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.OnRequestFailed_4180D2B8423863ABDA5907BDA15CB0E0
// (BlueprintCallable, BlueprintEvent)

void UAIScriptedBehavior_AFK_C::OnRequestFailed_4180D2B8423863ABDA5907BDA15CB0E0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "OnRequestFailed_4180D2B8423863ABDA5907BDA15CB0E0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.OnMoveFinished_4180D2B8423863ABDA5907BDA15CB0E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*                    AIController_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIScriptedBehavior_AFK_C::OnMoveFinished_4180D2B8423863ABDA5907BDA15CB0E0(EPathFollowingResult Result, class AAIController* AIController_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "OnMoveFinished_4180D2B8423863ABDA5907BDA15CB0E0");

	Params::AIScriptedBehavior_AFK_C_OnMoveFinished_4180D2B8423863ABDA5907BDA15CB0E0 Parms{};

	Parms.Result = Result;
	Parms.AIController_0 = AIController_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.RunBehavior
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionAIController*               AIController_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIScriptedBehavior_AFK_C::RunBehavior(class AOrionAIController* AIController_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "RunBehavior");

	Params::AIScriptedBehavior_AFK_C_RunBehavior Parms{};

	Parms.AIController_0 = AIController_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AIScriptedBehavior_AFK.AIScriptedBehavior_AFK_C.LockLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOrionAIBot*                      BotController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIScriptedBehavior_AFK_C::LockLogic(class AOrionAIBot* BotController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIScriptedBehavior_AFK_C", "LockLogic");

	Params::AIScriptedBehavior_AFK_C_LockLogic Parms{};

	Parms.BotController = BotController;

	UObject::ProcessEvent(Func, &Parms);
}

}
