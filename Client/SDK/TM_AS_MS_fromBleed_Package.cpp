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
	 * 		Name   -> PredefinedFunction ATM_AS_MS_fromBleed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_AS_MS_fromBleed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_AS_MS_fromBleed.TM_AS_MS_fromBleed_C");
		return ptr;
	}

}


