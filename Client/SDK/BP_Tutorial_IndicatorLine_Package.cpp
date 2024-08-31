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
	 * 		Name   -> Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.Draw ID No.s
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Tutorial_IndicatorLine_C::DrawIDNo_s()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.Draw ID No.s");
		
		ABP_Tutorial_IndicatorLine_C_DrawIDNo_s_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Tutorial_IndicatorLine_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.UserConstructionScript");
		
		ABP_Tutorial_IndicatorLine_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Tutorial_IndicatorLine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.ReceiveBeginPlay");
		
		ABP_Tutorial_IndicatorLine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.CreateBeamEmitters
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Tutorial_IndicatorLine_C::CreateBeamEmitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.CreateBeamEmitters");
		
		ABP_Tutorial_IndicatorLine_C_CreateBeamEmitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.ExecuteUbergraph_BP_Tutorial_IndicatorLine
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Tutorial_IndicatorLine_C::ExecuteUbergraph_BP_Tutorial_IndicatorLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C.ExecuteUbergraph_BP_Tutorial_IndicatorLine");
		
		ABP_Tutorial_IndicatorLine_C_ExecuteUbergraph_BP_Tutorial_IndicatorLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Tutorial_IndicatorLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Tutorial_IndicatorLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C");
		return ptr;
	}

}


