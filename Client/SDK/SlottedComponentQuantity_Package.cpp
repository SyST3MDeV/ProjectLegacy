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
	 * 		Name   -> PredefinedFunction USlottedComponentQuantity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlottedComponentQuantity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlottedComponentQuantity.SlottedComponentQuantity_C");
		return ptr;
	}

}


