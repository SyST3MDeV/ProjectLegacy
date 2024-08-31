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
	 * 		Name   -> PredefinedFunction UButtonStyleImageOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonStyleImageOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_ImageOnly.ButtonStyle-ImageOnly_C");
		return ptr;
	}

}


