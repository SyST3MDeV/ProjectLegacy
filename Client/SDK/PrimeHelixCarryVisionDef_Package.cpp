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
	 * 		Name   -> PredefinedFunction UPrimeHelixCarryVisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimeHelixCarryVisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimeHelixCarryVisionDef.PrimeHelixCarryVisionDef_C");
		return ptr;
	}

}


