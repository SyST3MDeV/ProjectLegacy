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
	 * 		Name   -> PredefinedFunction UGC_Damage_PrimeHelix_Attack1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Damage_PrimeHelix_Attack1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Damage_PrimeHelix_Attack1.GC_Damage_PrimeHelix_Attack1_C");
		return ptr;
	}

}


