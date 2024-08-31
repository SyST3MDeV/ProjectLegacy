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
	 * 		Name   -> PredefinedFunction UGC_JungleCreep_Black_HitFXRanged_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_JungleCreep_Black_HitFXRanged_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_JungleCreep_Black_HitFXRanged.GC_JungleCreep_Black_HitFXRanged_C");
		return ptr;
	}

}


