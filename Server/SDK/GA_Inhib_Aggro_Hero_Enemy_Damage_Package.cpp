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
	 * 		Name   -> Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.OnStateInterrupted_4680361C44E069BC1F40D69501A253B1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_Enemy_Damage_C::OnStateInterrupted_4680361C44E069BC1F40D69501A253B1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.OnStateInterrupted_4680361C44E069BC1F40D69501A253B1");
		
		UGA_Inhib_Aggro_Hero_Enemy_Damage_C_OnStateInterrupted_4680361C44E069BC1F40D69501A253B1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.OnStateEnded_4680361C44E069BC1F40D69501A253B1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_Enemy_Damage_C::OnStateEnded_4680361C44E069BC1F40D69501A253B1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.OnStateEnded_4680361C44E069BC1F40D69501A253B1");
		
		UGA_Inhib_Aggro_Hero_Enemy_Damage_C_OnStateEnded_4680361C44E069BC1F40D69501A253B1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_Enemy_Damage_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.K2_ActivateAbility");
		
		UGA_Inhib_Aggro_Hero_Enemy_Damage_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.OnStop_Bind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Inhib_Aggro_Hero_Enemy_Damage_C::OnStop_Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.OnStop_Bind");
		
		UGA_Inhib_Aggro_Hero_Enemy_Damage_C_OnStop_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.ExecuteUbergraph_GA_Inhib_Aggro_Hero_Enemy_Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Inhib_Aggro_Hero_Enemy_Damage_C::ExecuteUbergraph_GA_Inhib_Aggro_Hero_Enemy_Damage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C.ExecuteUbergraph_GA_Inhib_Aggro_Hero_Enemy_Damage");
		
		UGA_Inhib_Aggro_Hero_Enemy_Damage_C_ExecuteUbergraph_GA_Inhib_Aggro_Hero_Enemy_Damage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Inhib_Aggro_Hero_Enemy_Damage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Inhib_Aggro_Hero_Enemy_Damage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Inhib_Aggro_Hero_Enemy_Damage.GA_Inhib_Aggro_Hero_Enemy_Damage_C");
		return ptr;
	}

}


