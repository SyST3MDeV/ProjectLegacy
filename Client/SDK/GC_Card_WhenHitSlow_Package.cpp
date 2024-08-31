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
	 * 		Name   -> PredefinedFunction AGC_Card_WhenHitSlow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Card_WhenHitSlow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_WhenHitSlow.GC_Card_WhenHitSlow_C");
		return ptr;
	}

}


