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
	 * 		Name   -> PredefinedFunction UGC_Core_IntroRise_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Core_IntroRise_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Core_IntroRise.GC_Core_IntroRise_C");
		return ptr;
	}

}


