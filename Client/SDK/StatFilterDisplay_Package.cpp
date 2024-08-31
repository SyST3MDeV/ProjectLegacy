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
	 * 		Name   -> PredefinedFunction UStatFilterDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatFilterDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatFilterDisplay.StatFilterDisplay_C");
		return ptr;
	}

}


