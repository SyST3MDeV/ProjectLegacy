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
	 * 		Name   -> PredefinedFunction AGC_PrimeHelix_SpecialAttack1_Marked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_PrimeHelix_SpecialAttack1_Marked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_PrimeHelix_SpecialAttack1_Marked.GC_PrimeHelix_SpecialAttack1_Marked_C");
		return ptr;
	}

}


