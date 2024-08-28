/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C.GetPlayerLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_OneShotBuff_Parent_C::GetPlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C.GetPlayerLevel");
		
		UGA_Card_OneShotBuff_Parent_C_GetPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_OneShotBuff_Parent_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C.K2_ActivateAbility");
		
		UGA_Card_OneShotBuff_Parent_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C.ExecuteUbergraph_GA_Card_OneShotBuff_Parent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OneShotBuff_Parent_C::ExecuteUbergraph_GA_Card_OneShotBuff_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C.ExecuteUbergraph_GA_Card_OneShotBuff_Parent");
		
		UGA_Card_OneShotBuff_Parent_C_ExecuteUbergraph_GA_Card_OneShotBuff_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_OneShotBuff_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_OneShotBuff_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_OneShotBuff_Parent.GA_Card_OneShotBuff_Parent_C");
		return ptr;
	}

}


