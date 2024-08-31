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
	 * 		Name   -> PredefinedFunction UPrimeHelixSpawnerVisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimeHelixSpawnerVisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimeHelixSpawnerVisionDef.PrimeHelixSpawnerVisionDef_C");
		return ptr;
	}

}


