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
	 * 		Name   -> PredefinedFunction AGC_Rigs_Working_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Rigs_Working_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Rigs_Working.GC_Rigs_Working_C");
		return ptr;
	}

}


