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
	 * 		Name   -> PredefinedFunction UPlayerStatusAssembly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerStatusAssembly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerStatusAssembly.PlayerStatusAssembly_C");
		return ptr;
	}

}


