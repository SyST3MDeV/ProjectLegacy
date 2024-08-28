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
	 * 		Name   -> PredefinedFunction UGC_PrimeHelix_Spawn_Activate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_PrimeHelix_Spawn_Activate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_PrimeHelix_Spawn_Activate.GC_PrimeHelix_Spawn_Activate_C");
		return ptr;
	}

}


