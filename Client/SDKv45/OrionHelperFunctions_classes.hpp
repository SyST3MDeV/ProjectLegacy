#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OrionHelperFunctions

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "OrionGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass OrionHelperFunctions.OrionHelperFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UOrionHelperFunctions_C final : public UBlueprintFunctionLibrary
{
public:
	static void MakeLootDenominations(int32 NumDrops, int32 SmallDenominationThreshold, class UObject* __WorldContext, int32* SmallDrops, int32* MediumDrops, int32* LargeDrops);
	static int32 GetExtraRandomInt(float SeedValue, int32 MaxReturnValue, class UObject* __WorldContext);
	static void GetHumanControlledPlayerStates(class AGameStateBase* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* PlayerStateArray);
	static void GetAIControlledPlayerStates(class AGameStateBase* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* PlayerStateArray);
	static void GetSpectatorControlledPlayerStates(class AGameStateBase* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* PlayerStateArray);
	static void GetAllPlayerStates(class AGameStateBase* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* PlayerStateArray);
	static void GetAllPlayerStatesOnTeam(class AGameStateBase* GameState, EOrionTeam TeamNum, class UObject* __WorldContext, TArray<class APlayerState*>* PlayerStateArray);
	static void GetHumanAndAIControlledPlayerStates(class AGameStateBase* GameState, class UObject* __WorldContext, TArray<class APlayerState*>* PlayerStateArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OrionHelperFunctions_C">();
	}
	static class UOrionHelperFunctions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOrionHelperFunctions_C>();
	}
};
static_assert(alignof(UOrionHelperFunctions_C) == 0x000008, "Wrong alignment on UOrionHelperFunctions_C");
static_assert(sizeof(UOrionHelperFunctions_C) == 0x000028, "Wrong size on UOrionHelperFunctions_C");

}
