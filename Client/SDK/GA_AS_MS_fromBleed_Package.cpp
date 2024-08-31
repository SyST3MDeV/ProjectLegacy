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
	 * 		Name   -> PredefinedFunction UGA_AS_MS_fromBleed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_AS_MS_fromBleed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_AS_MS_fromBleed.GA_AS_MS_fromBleed_C");
		return ptr;
	}

}


