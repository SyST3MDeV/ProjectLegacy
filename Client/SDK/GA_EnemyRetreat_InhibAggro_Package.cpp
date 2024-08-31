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
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnStateInterrupted_F8B03C1C4977B4E0091561A45E0A9FD1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::OnStateInterrupted_F8B03C1C4977B4E0091561A45E0A9FD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnStateInterrupted_F8B03C1C4977B4E0091561A45E0A9FD1");
		
		UGA_EnemyRetreat_InhibAggro_C_OnStateInterrupted_F8B03C1C4977B4E0091561A45E0A9FD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnStateEnded_F8B03C1C4977B4E0091561A45E0A9FD1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::OnStateEnded_F8B03C1C4977B4E0091561A45E0A9FD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnStateEnded_F8B03C1C4977B4E0091561A45E0A9FD1");
		
		UGA_EnemyRetreat_InhibAggro_C_OnStateEnded_F8B03C1C4977B4E0091561A45E0A9FD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnChange_3BE6FE2D4C721C6DE8B3009F33090C20
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::OnChange_3BE6FE2D4C721C6DE8B3009F33090C20()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnChange_3BE6FE2D4C721C6DE8B3009F33090C20");
		
		UGA_EnemyRetreat_InhibAggro_C_OnChange_3BE6FE2D4C721C6DE8B3009F33090C20_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnChange_A5AC29F948947A0D0A67588E793EBB54
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::OnChange_A5AC29F948947A0D0A67588E793EBB54()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnChange_A5AC29F948947A0D0A67588E793EBB54");
		
		UGA_EnemyRetreat_InhibAggro_C_OnChange_A5AC29F948947A0D0A67588E793EBB54_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnFail_5E7B391549BCF2C49DDFE3965ED9736F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::OnFail_5E7B391549BCF2C49DDFE3965ED9736F(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnFail_5E7B391549BCF2C49DDFE3965ED9736F");
		
		UGA_EnemyRetreat_InhibAggro_C_OnFail_5E7B391549BCF2C49DDFE3965ED9736F_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnSuccess_5E7B391549BCF2C49DDFE3965ED9736F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::OnSuccess_5E7B391549BCF2C49DDFE3965ED9736F(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.OnSuccess_5E7B391549BCF2C49DDFE3965ED9736F");
		
		UGA_EnemyRetreat_InhibAggro_C_OnSuccess_5E7B391549BCF2C49DDFE3965ED9736F_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.K2_ActivateAbility");
		
		UGA_EnemyRetreat_InhibAggro_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.ExecuteUbergraph_GA_EnemyRetreat_InhibAggro
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_EnemyRetreat_InhibAggro_C::ExecuteUbergraph_GA_EnemyRetreat_InhibAggro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C.ExecuteUbergraph_GA_EnemyRetreat_InhibAggro");
		
		UGA_EnemyRetreat_InhibAggro_C_ExecuteUbergraph_GA_EnemyRetreat_InhibAggro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_EnemyRetreat_InhibAggro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_EnemyRetreat_InhibAggro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_EnemyRetreat_InhibAggro.GA_EnemyRetreat_InhibAggro_C");
		return ptr;
	}

}


