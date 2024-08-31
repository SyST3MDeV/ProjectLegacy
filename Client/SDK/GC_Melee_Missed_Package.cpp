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
	 * 		Name   -> PredefinedFunction UGC_Melee_Missed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Melee_Missed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Melee_Missed.GC_Melee_Missed_C");
		return ptr;
	}

}


