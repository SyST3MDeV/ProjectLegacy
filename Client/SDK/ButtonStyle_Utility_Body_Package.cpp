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
	 * 		Name   -> PredefinedFunction UButtonStyleUtilityBody_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonStyleUtilityBody_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_Utility_Body.ButtonStyle-Utility-Body_C");
		return ptr;
	}

}


