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
	 * 		Name   -> PredefinedFunction UTextStyleBodyPronounced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextStyleBodyPronounced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextStyle_Body_Pronounced.TextStyle-Body-Pronounced_C");
		return ptr;
	}

}


