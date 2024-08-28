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
	 * 		Name   -> Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.OnStateInterrupted_13ED170945060F3DD0D44EAD5F84DBDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Toggle_DMG_Armor_MRegen_C::OnStateInterrupted_13ED170945060F3DD0D44EAD5F84DBDD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.OnStateInterrupted_13ED170945060F3DD0D44EAD5F84DBDD");
		
		UGA_Card_Toggle_DMG_Armor_MRegen_C_OnStateInterrupted_13ED170945060F3DD0D44EAD5F84DBDD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.OnStateEnded_13ED170945060F3DD0D44EAD5F84DBDD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Toggle_DMG_Armor_MRegen_C::OnStateEnded_13ED170945060F3DD0D44EAD5F84DBDD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.OnStateEnded_13ED170945060F3DD0D44EAD5F84DBDD");
		
		UGA_Card_Toggle_DMG_Armor_MRegen_C_OnStateEnded_13ED170945060F3DD0D44EAD5F84DBDD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.OnPress_25CE4FFC463E8F6C06A604B78A885198
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeWaited                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Toggle_DMG_Armor_MRegen_C::OnPress_25CE4FFC463E8F6C06A604B78A885198(float TimeWaited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.OnPress_25CE4FFC463E8F6C06A604B78A885198");
		
		UGA_Card_Toggle_DMG_Armor_MRegen_C_OnPress_25CE4FFC463E8F6C06A604B78A885198_Params params {};
		params.TimeWaited = TimeWaited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Toggle_DMG_Armor_MRegen_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.K2_ActivateAbility");
		
		UGA_Card_Toggle_DMG_Armor_MRegen_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.ExecuteUbergraph_GA_Card_Toggle_DMG_Armor_MRegen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Toggle_DMG_Armor_MRegen_C::ExecuteUbergraph_GA_Card_Toggle_DMG_Armor_MRegen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C.ExecuteUbergraph_GA_Card_Toggle_DMG_Armor_MRegen");
		
		UGA_Card_Toggle_DMG_Armor_MRegen_C_ExecuteUbergraph_GA_Card_Toggle_DMG_Armor_MRegen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Toggle_DMG_Armor_MRegen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Toggle_DMG_Armor_MRegen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Toggle_DMG_Armor_MRegen.GA_Card_Toggle_DMG_Armor_MRegen_C");
		return ptr;
	}

}


