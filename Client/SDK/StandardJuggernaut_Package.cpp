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
	 * 		Name   -> PredefinedFunction UStandardJuggernaut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardJuggernaut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardJuggernaut.StandardJuggernaut_C");
		return ptr;
	}

}


