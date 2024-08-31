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
	 * 		Name   -> PredefinedFunction UTextStyleMarquee_Victory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextStyleMarquee_Victory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextStyle_Marquee_Victory.TextStyle-Marquee_Victory_C");
		return ptr;
	}

}


