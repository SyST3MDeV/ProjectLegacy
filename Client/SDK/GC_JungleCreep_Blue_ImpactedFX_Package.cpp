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
	 * 		Name   -> PredefinedFunction UGC_JungleCreep_Blue_ImpactedFX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_JungleCreep_Blue_ImpactedFX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_JungleCreep_Blue_ImpactedFX.GC_JungleCreep_Blue_ImpactedFX_C");
		return ptr;
	}

}


