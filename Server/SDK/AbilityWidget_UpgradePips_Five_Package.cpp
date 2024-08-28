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
	 * 		Name   -> Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityWidget_UpgradePips_Five_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.Construct");
		
		UAbilityWidget_UpgradePips_Five_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityWidget_UpgradePips_Five_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.PreConstruct");
		
		UAbilityWidget_UpgradePips_Five_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.SetNumOfPips
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAbilityPipType                                    _NumOfPips                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityWidget_UpgradePips_Five_C::SetNumOfPips(EAbilityPipType _NumOfPips)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.SetNumOfPips");
		
		UAbilityWidget_UpgradePips_Five_C_SetNumOfPips_Params params {};
		params._NumOfPips = _NumOfPips;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.ExecuteUbergraph_AbilityWidget_UpgradePips_Five
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityWidget_UpgradePips_Five_C::ExecuteUbergraph_AbilityWidget_UpgradePips_Five(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C.ExecuteUbergraph_AbilityWidget_UpgradePips_Five");
		
		UAbilityWidget_UpgradePips_Five_C_ExecuteUbergraph_AbilityWidget_UpgradePips_Five_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityWidget_UpgradePips_Five_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityWidget_UpgradePips_Five_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityWidget_UpgradePips_Five.AbilityWidget_UpgradePips_Five_C");
		return ptr;
	}

}


