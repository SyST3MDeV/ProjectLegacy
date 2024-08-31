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
	 * 		Name   -> Function ContinueButton-V4.ContinueButton-V4_C.Update Visuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UContinueButtonV4_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContinueButton-V4.ContinueButton-V4_C.Update Visuals");
		
		UContinueButtonV4_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ContinueButton-V4.ContinueButton-V4_C.StartTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UContinueButtonV4_C::StartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContinueButton-V4.ContinueButton-V4_C.StartTimer");
		
		UContinueButtonV4_C_StartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ContinueButton-V4.ContinueButton-V4_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_447_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UContinueButtonV4_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_447_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContinueButton-V4.ContinueButton-V4_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_447_OnButtonClickedEvent__DelegateSignature");
		
		UContinueButtonV4_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_447_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ContinueButton-V4.ContinueButton-V4_C.TimerOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UContinueButtonV4_C::TimerOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContinueButton-V4.ContinueButton-V4_C.TimerOver");
		
		UContinueButtonV4_C_TimerOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ContinueButton-V4.ContinueButton-V4_C.ExecuteUbergraph_ContinueButton-V4
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContinueButtonV4_C::ExecuteUbergraph_ContinueButtonV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContinueButton-V4.ContinueButton-V4_C.ExecuteUbergraph_ContinueButton-V4");
		
		UContinueButtonV4_C_ExecuteUbergraph_ContinueButtonV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContinueButtonV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContinueButtonV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContinueButton_V4.ContinueButton-V4_C");
		return ptr;
	}

}


