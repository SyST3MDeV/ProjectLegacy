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
	 * 		Name   -> PredefinedFunction UButtonStyleOutLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonStyleOutLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_Outline.ButtonStyle-OutLine_C");
		return ptr;
	}

}


