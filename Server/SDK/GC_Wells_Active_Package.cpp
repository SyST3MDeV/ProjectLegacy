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
	 * 		Name   -> PredefinedFunction AGC_Wells_Active_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Wells_Active_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Wells_Active.GC_Wells_Active_C");
		return ptr;
	}

}


