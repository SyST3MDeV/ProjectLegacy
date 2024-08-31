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
	 * 		Name   -> Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.OnStateInterrupted_27ED586F4917CF1E251498BDA1DEFAAA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_EnemyHero_Introduction_C::OnStateInterrupted_27ED586F4917CF1E251498BDA1DEFAAA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.OnStateInterrupted_27ED586F4917CF1E251498BDA1DEFAAA");
		
		UGA_EnemyHero_Introduction_C_OnStateInterrupted_27ED586F4917CF1E251498BDA1DEFAAA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.OnStateEnded_27ED586F4917CF1E251498BDA1DEFAAA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_EnemyHero_Introduction_C::OnStateEnded_27ED586F4917CF1E251498BDA1DEFAAA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.OnStateEnded_27ED586F4917CF1E251498BDA1DEFAAA");
		
		UGA_EnemyHero_Introduction_C_OnStateEnded_27ED586F4917CF1E251498BDA1DEFAAA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_EnemyHero_Introduction_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.K2_ActivateAbility");
		
		UGA_EnemyHero_Introduction_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.ExecuteUbergraph_GA_EnemyHero_Introduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_EnemyHero_Introduction_C::ExecuteUbergraph_GA_EnemyHero_Introduction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C.ExecuteUbergraph_GA_EnemyHero_Introduction");
		
		UGA_EnemyHero_Introduction_C_ExecuteUbergraph_GA_EnemyHero_Introduction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_EnemyHero_Introduction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_EnemyHero_Introduction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_EnemyHero_Introduction.GA_EnemyHero_Introduction_C");
		return ptr;
	}

}


