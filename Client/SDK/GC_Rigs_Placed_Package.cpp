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
	 * 		Name   -> PredefinedFunction UGC_Rigs_Placed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Rigs_Placed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Rigs_Placed.GC_Rigs_Placed_C");
		return ptr;
	}

}


