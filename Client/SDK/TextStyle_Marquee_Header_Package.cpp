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
	 * 		Name   -> PredefinedFunction UTextStyleMarqueeHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextStyleMarqueeHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TextStyle_Marquee_Header.TextStyle-Marquee-Header_C");
		return ptr;
	}

}


