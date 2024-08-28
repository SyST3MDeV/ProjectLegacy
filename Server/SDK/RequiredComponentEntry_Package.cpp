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
	 * 		Name   -> PredefinedFunction URequiredComponentEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequiredComponentEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RequiredComponentEntry.RequiredComponentEntry_C");
		return ptr;
	}

}


