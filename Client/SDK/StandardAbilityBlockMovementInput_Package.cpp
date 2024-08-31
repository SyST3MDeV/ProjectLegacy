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
	 * 		Name   -> PredefinedFunction UStandardAbilityBlockMovementInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardAbilityBlockMovementInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardAbilityBlockMovementInput.StandardAbilityBlockMovementInput_C");
		return ptr;
	}

}


