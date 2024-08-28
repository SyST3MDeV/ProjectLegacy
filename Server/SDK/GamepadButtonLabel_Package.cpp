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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGamepadButtonLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadButtonLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLabel.GamepadButtonLabel_C");
		return ptr;
	}

}


