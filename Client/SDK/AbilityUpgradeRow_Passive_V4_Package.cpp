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
	 * 		Name   -> Function AbilityUpgradeRow_Passive-V4.AbilityUpgradeRow_Passive-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAbilityUpgradeRow_PassiveV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow_Passive-V4.AbilityUpgradeRow_Passive-V4_C.Construct");
		
		UAbilityUpgradeRow_PassiveV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AbilityUpgradeRow_Passive-V4.AbilityUpgradeRow_Passive-V4_C.ExecuteUbergraph_AbilityUpgradeRow_Passive-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbilityUpgradeRow_PassiveV4_C::ExecuteUbergraph_AbilityUpgradeRow_PassiveV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilityUpgradeRow_Passive-V4.AbilityUpgradeRow_Passive-V4_C.ExecuteUbergraph_AbilityUpgradeRow_Passive-V4");
		
		UAbilityUpgradeRow_PassiveV4_C_ExecuteUbergraph_AbilityUpgradeRow_PassiveV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityUpgradeRow_PassiveV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityUpgradeRow_PassiveV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityUpgradeRow_Passive_V4.AbilityUpgradeRow_Passive-V4_C");
		return ptr;
	}

}


