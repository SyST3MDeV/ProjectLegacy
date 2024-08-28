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
	 * 		Name   -> Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.OnStateInterrupted_449C9A67441F6F08FEA31F92634F3303
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_C::OnStateInterrupted_449C9A67441F6F08FEA31F92634F3303()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.OnStateInterrupted_449C9A67441F6F08FEA31F92634F3303");
		
		UGA_Inhib_Aggro_Hero_C_OnStateInterrupted_449C9A67441F6F08FEA31F92634F3303_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.OnStateEnded_449C9A67441F6F08FEA31F92634F3303
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_C::OnStateEnded_449C9A67441F6F08FEA31F92634F3303()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.OnStateEnded_449C9A67441F6F08FEA31F92634F3303");
		
		UGA_Inhib_Aggro_Hero_C_OnStateEnded_449C9A67441F6F08FEA31F92634F3303_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.K2_ActivateAbility");
		
		UGA_Inhib_Aggro_Hero_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.OnStop_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_C::OnStop_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.OnStop_Bind");
		
		UGA_Inhib_Aggro_Hero_C_OnStop_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.ExecuteUbergraph_GA_Inhib_Aggro_Hero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhib_Aggro_Hero_C::ExecuteUbergraph_GA_Inhib_Aggro_Hero(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C.ExecuteUbergraph_GA_Inhib_Aggro_Hero");
		
		UGA_Inhib_Aggro_Hero_C_ExecuteUbergraph_GA_Inhib_Aggro_Hero_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Inhib_Aggro_Hero_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Inhib_Aggro_Hero_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Inhib_Aggro_Hero.GA_Inhib_Aggro_Hero_C");
		return ptr;
	}

}


