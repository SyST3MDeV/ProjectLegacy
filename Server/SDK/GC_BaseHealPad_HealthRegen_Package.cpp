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
	 * 		Name   -> PredefinedFunction AGC_BaseHealPad_HealthRegen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_BaseHealPad_HealthRegen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_BaseHealPad_HealthRegen.GC_BaseHealPad_HealthRegen_C");
		return ptr;
	}

}


