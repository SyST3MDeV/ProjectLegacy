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
	 * 		Name   -> Function KeyboardSettings.KeyboardSettings_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UKeyboardSettings_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardSettings.KeyboardSettings_C.Reset");
		
		UKeyboardSettings_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function KeyboardSettings.KeyboardSettings_C.Refresh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UKeyboardSettings_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyboardSettings.KeyboardSettings_C.Refresh");
		
		UKeyboardSettings_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyboardSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyboardSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyboardSettings.KeyboardSettings_C");
		return ptr;
	}

}


