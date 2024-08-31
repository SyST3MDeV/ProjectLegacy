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
	 * 		Name   -> PredefinedFunction UTextStyleBase_Keybind_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextStyleBase_Keybind_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextStyle_Base_Keybind.TextStyle-Base_Keybind_C");
		return ptr;
	}

}


