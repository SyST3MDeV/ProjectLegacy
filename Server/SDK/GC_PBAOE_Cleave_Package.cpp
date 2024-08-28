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
	 * 		Name   -> PredefinedFunction UGC_PBAOE_Cleave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_PBAOE_Cleave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_PBAOE_Cleave.GC_PBAOE_Cleave_C");
		return ptr;
	}

}


