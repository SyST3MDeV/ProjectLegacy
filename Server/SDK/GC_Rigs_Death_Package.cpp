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
	 * 		Name   -> PredefinedFunction UGC_Rigs_Death_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Rigs_Death_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Rigs_Death.GC_Rigs_Death_C");
		return ptr;
	}

}


