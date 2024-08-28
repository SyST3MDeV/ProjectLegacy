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
	 * 		Name   -> PredefinedFunction UVerticalAbilityDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVerticalAbilityDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VerticalAbilityDisplay.VerticalAbilityDisplay_C");
		return ptr;
	}

}


