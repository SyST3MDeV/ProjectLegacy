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
	 * 		Name   -> Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.OnStateInterrupted_E7D361854EAB78E42679388FE63B9EFF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_OnAttrThreshold_Parent_C::OnStateInterrupted_E7D361854EAB78E42679388FE63B9EFF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.OnStateInterrupted_E7D361854EAB78E42679388FE63B9EFF");
		
		UGA_Card_OnAttrThreshold_Parent_C_OnStateInterrupted_E7D361854EAB78E42679388FE63B9EFF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.OnStateEnded_E7D361854EAB78E42679388FE63B9EFF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_OnAttrThreshold_Parent_C::OnStateEnded_E7D361854EAB78E42679388FE63B9EFF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.OnStateEnded_E7D361854EAB78E42679388FE63B9EFF");
		
		UGA_Card_OnAttrThreshold_Parent_C_OnStateEnded_E7D361854EAB78E42679388FE63B9EFF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.OnChange_B7C203274C3DB085B7FEEEAC791B1542
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMatchesComparison                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentRatio                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OnAttrThreshold_Parent_C::OnChange_B7C203274C3DB085B7FEEEAC791B1542(bool bMatchesComparison, float CurrentRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.OnChange_B7C203274C3DB085B7FEEEAC791B1542");
		
		UGA_Card_OnAttrThreshold_Parent_C_OnChange_B7C203274C3DB085B7FEEEAC791B1542_Params params {};
		params.bMatchesComparison = bMatchesComparison;
		params.CurrentRatio = CurrentRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_OnAttrThreshold_Parent_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.K2_ActivateAbility");
		
		UGA_Card_OnAttrThreshold_Parent_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.ExecuteUbergraph_GA_Card_OnAttrThreshold_Parent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OnAttrThreshold_Parent_C::ExecuteUbergraph_GA_Card_OnAttrThreshold_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C.ExecuteUbergraph_GA_Card_OnAttrThreshold_Parent");
		
		UGA_Card_OnAttrThreshold_Parent_C_ExecuteUbergraph_GA_Card_OnAttrThreshold_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_OnAttrThreshold_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_OnAttrThreshold_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Card_OnAttrThreshold_Parent.GA_Card_OnAttrThreshold_Parent_C");
		return ptr;
	}

}


