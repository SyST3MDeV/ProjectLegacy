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
	 * 		Name   -> PredefinedFunction UStandardEnergyCost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardEnergyCost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardEnergyCost.StandardEnergyCost_C");
		return ptr;
	}

}


