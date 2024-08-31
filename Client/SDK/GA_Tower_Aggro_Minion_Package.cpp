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
	 * 		Name   -> Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.OnStateInterrupted_7A534AAB45DA966B438CBB8535FDC866
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Tower_Aggro_Minion_C::OnStateInterrupted_7A534AAB45DA966B438CBB8535FDC866()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.OnStateInterrupted_7A534AAB45DA966B438CBB8535FDC866");
		
		UGA_Tower_Aggro_Minion_C_OnStateInterrupted_7A534AAB45DA966B438CBB8535FDC866_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.OnStateEnded_7A534AAB45DA966B438CBB8535FDC866
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Tower_Aggro_Minion_C::OnStateEnded_7A534AAB45DA966B438CBB8535FDC866()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.OnStateEnded_7A534AAB45DA966B438CBB8535FDC866");
		
		UGA_Tower_Aggro_Minion_C_OnStateEnded_7A534AAB45DA966B438CBB8535FDC866_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Tower_Aggro_Minion_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.K2_ActivateAbility");
		
		UGA_Tower_Aggro_Minion_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.OnStop_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Tower_Aggro_Minion_C::OnStop_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.OnStop_Bind");
		
		UGA_Tower_Aggro_Minion_C_OnStop_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.ExecuteUbergraph_GA_Tower_Aggro_Minion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Tower_Aggro_Minion_C::ExecuteUbergraph_GA_Tower_Aggro_Minion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C.ExecuteUbergraph_GA_Tower_Aggro_Minion");
		
		UGA_Tower_Aggro_Minion_C_ExecuteUbergraph_GA_Tower_Aggro_Minion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Tower_Aggro_Minion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Tower_Aggro_Minion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Tower_Aggro_Minion.GA_Tower_Aggro_Minion_C");
		return ptr;
	}

}


