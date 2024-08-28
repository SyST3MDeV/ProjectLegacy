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
	 * 		Name   -> Function GA_RigExtraction.GA_RigExtraction_C.Cancelled_2395268F4C49BECCCD431FAC9723ED13
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_RigExtraction_C::Cancelled_2395268F4C49BECCCD431FAC9723ED13(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RigExtraction.GA_RigExtraction_C.Cancelled_2395268F4C49BECCCD431FAC9723ED13");
		
		UGA_RigExtraction_C_Cancelled_2395268F4C49BECCCD431FAC9723ED13_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RigExtraction.GA_RigExtraction_C.ValidData_2395268F4C49BECCCD431FAC9723ED13
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UGA_RigExtraction_C::ValidData_2395268F4C49BECCCD431FAC9723ED13(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RigExtraction.GA_RigExtraction_C.ValidData_2395268F4C49BECCCD431FAC9723ED13");
		
		UGA_RigExtraction_C_ValidData_2395268F4C49BECCCD431FAC9723ED13_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RigExtraction.GA_RigExtraction_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_RigExtraction_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RigExtraction.GA_RigExtraction_C.K2_ActivateAbility");
		
		UGA_RigExtraction_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RigExtraction.GA_RigExtraction_C.ExecuteUbergraph_GA_RigExtraction
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RigExtraction_C::ExecuteUbergraph_GA_RigExtraction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RigExtraction.GA_RigExtraction_C.ExecuteUbergraph_GA_RigExtraction");
		
		UGA_RigExtraction_C_ExecuteUbergraph_GA_RigExtraction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_RigExtraction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_RigExtraction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_RigExtraction.GA_RigExtraction_C");
		return ptr;
	}

}


