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
	 * 		Name   -> PredefinedFunction UGC_KillingStreakEnded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_KillingStreakEnded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_KillingStreakEnded.GC_KillingStreakEnded_C");
		return ptr;
	}

}


