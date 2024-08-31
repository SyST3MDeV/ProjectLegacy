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
	 * 		Name   -> PredefinedFunction UTextStyleMarquee_Bold_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextStyleMarquee_Bold_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextStyle_Marquee_Bold.TextStyle-Marquee_Bold_C");
		return ptr;
	}

}


