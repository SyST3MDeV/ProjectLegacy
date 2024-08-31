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
	 * 		Name   -> PredefinedFunction UStandardLifeSteal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardLifeSteal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardLifeSteal.StandardLifeSteal_C");
		return ptr;
	}

}


