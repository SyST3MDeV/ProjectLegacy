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
	 * 		Name   -> Function ControllerDisconnectWarning.ControllerDisconnectWarning_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UControllerDisconnectWarning_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerDisconnectWarning.ControllerDisconnectWarning_C.OnActivated");
		
		UControllerDisconnectWarning_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ControllerDisconnectWarning.ControllerDisconnectWarning_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UControllerDisconnectWarning_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerDisconnectWarning.ControllerDisconnectWarning_C.OnDeactivated");
		
		UControllerDisconnectWarning_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ControllerDisconnectWarning.ControllerDisconnectWarning_C.ExecuteUbergraph_ControllerDisconnectWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControllerDisconnectWarning_C::ExecuteUbergraph_ControllerDisconnectWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControllerDisconnectWarning.ControllerDisconnectWarning_C.ExecuteUbergraph_ControllerDisconnectWarning");
		
		UControllerDisconnectWarning_C_ExecuteUbergraph_ControllerDisconnectWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControllerDisconnectWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControllerDisconnectWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerDisconnectWarning.ControllerDisconnectWarning_C");
		return ptr;
	}

}


