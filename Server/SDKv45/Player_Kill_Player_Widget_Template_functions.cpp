#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_Kill_Player_Widget_Template

#include "Basic.hpp"

#include "Player_Kill_Player_Widget_Template_classes.hpp"
#include "Player_Kill_Player_Widget_Template_parameters.hpp"


namespace SDK
{

// Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.ExecuteUbergraph_Player_Kill_Player_Widget_Template
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_Kill_Player_Widget_Template_C::ExecuteUbergraph_Player_Kill_Player_Widget_Template(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Kill_Player_Widget_Template_C", "ExecuteUbergraph_Player_Kill_Player_Widget_Template");

	Params::Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayer_Kill_Player_Widget_Template_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Kill_Player_Widget_Template_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayer_Kill_Player_Widget_Template_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Kill_Player_Widget_Template_C", "OnAnimationFinished");

	Params::Player_Kill_Player_Widget_Template_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.PlayMessage
// (Event, Public, BlueprintEvent)

void UPlayer_Kill_Player_Widget_Template_C::PlayMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Kill_Player_Widget_Template_C", "PlayMessage");

	UObject::ProcessEvent(Func, nullptr);
}

}
