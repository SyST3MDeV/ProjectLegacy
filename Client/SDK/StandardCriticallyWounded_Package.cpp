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
	 * 		Name   -> PredefinedFunction UStandardCriticallyWounded_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardCriticallyWounded_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardCriticallyWounded.StandardCriticallyWounded_C");
		return ptr;
	}

}


