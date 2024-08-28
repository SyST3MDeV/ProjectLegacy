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
	 * 		Name   -> Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.OnStateInterrupted_28708DD64829120CD9B1BDA9A8409AA7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_First_Spawn_Move_C::OnStateInterrupted_28708DD64829120CD9B1BDA9A8409AA7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.OnStateInterrupted_28708DD64829120CD9B1BDA9A8409AA7");
		
		UGA_First_Spawn_Move_C_OnStateInterrupted_28708DD64829120CD9B1BDA9A8409AA7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.OnStateEnded_28708DD64829120CD9B1BDA9A8409AA7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_First_Spawn_Move_C::OnStateEnded_28708DD64829120CD9B1BDA9A8409AA7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.OnStateEnded_28708DD64829120CD9B1BDA9A8409AA7");
		
		UGA_First_Spawn_Move_C_OnStateEnded_28708DD64829120CD9B1BDA9A8409AA7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.Removed_914D4E904BF944CEBCCC019994B4F83A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_First_Spawn_Move_C::Removed_914D4E904BF944CEBCCC019994B4F83A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.Removed_914D4E904BF944CEBCCC019994B4F83A");
		
		UGA_First_Spawn_Move_C_Removed_914D4E904BF944CEBCCC019994B4F83A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_First_Spawn_Move_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.K2_ActivateAbility");
		
		UGA_First_Spawn_Move_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.ShowTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_First_Spawn_Move_C::ShowTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.ShowTutorial");
		
		UGA_First_Spawn_Move_C_ShowTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.ExecuteUbergraph_GA_First_Spawn_Move
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_First_Spawn_Move_C::ExecuteUbergraph_GA_First_Spawn_Move(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_First_Spawn_Move.GA_First_Spawn_Move_C.ExecuteUbergraph_GA_First_Spawn_Move");
		
		UGA_First_Spawn_Move_C_ExecuteUbergraph_GA_First_Spawn_Move_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_First_Spawn_Move_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_First_Spawn_Move_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_First_Spawn_Move.GA_First_Spawn_Move_C");
		return ptr;
	}

}


