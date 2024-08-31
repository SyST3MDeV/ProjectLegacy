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
	 * 		Name   -> PredefinedFunction UGC_Minion_Ranged_Impact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Minion_Ranged_Impact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Minion_Ranged_Impact.GC_Minion_Ranged_Impact_C");
		return ptr;
	}

}


