#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GlowingRarityText

#include "Basic.hpp"

#include "GlowingRarityText_classes.hpp"
#include "GlowingRarityText_parameters.hpp"


namespace SDK
{

// Function GlowingRarityText.GlowingRarityText_C.ExecuteUbergraph_GlowingRarityText
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlowingRarityText_C::ExecuteUbergraph_GlowingRarityText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GlowingRarityText_C", "ExecuteUbergraph_GlowingRarityText");

	Params::GlowingRarityText_C_ExecuteUbergraph_GlowingRarityText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GlowingRarityText.GlowingRarityText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlowingRarityText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GlowingRarityText_C", "PreConstruct");

	Params::GlowingRarityText_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GlowingRarityText.GlowingRarityText_C.SetRarityBP
// (Event, Public, BlueprintEvent)
// Parameters:
// EOrionItemRarity                        ItemRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHideGlowingText                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlowingRarityText_C::SetRarityBP(EOrionItemRarity ItemRarity, bool bHideGlowingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GlowingRarityText_C", "SetRarityBP");

	Params::GlowingRarityText_C_SetRarityBP Parms{};

	Parms.ItemRarity = ItemRarity;
	Parms.bHideGlowingText = bHideGlowingText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GlowingRarityText.GlowingRarityText_C.SetRarityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOrionItemRarity                        ItemRarity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HideGlowingText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlowingRarityText_C::SetRarityValue(EOrionItemRarity ItemRarity, bool HideGlowingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GlowingRarityText_C", "SetRarityValue");

	Params::GlowingRarityText_C_SetRarityValue Parms{};

	Parms.ItemRarity = ItemRarity;
	Parms.HideGlowingText = HideGlowingText;

	UObject::ProcessEvent(Func, &Parms);
}

}
