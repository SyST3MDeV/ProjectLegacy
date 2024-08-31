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
	 * 		Name   -> PredefinedFunction AGC_Minion_LastHitVulnerable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Minion_LastHitVulnerable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Minion_LastHitVulnerable.GC_Minion_LastHitVulnerable_C");
		return ptr;
	}

}


