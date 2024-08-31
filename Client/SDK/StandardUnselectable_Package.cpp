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
	 * 		Name   -> PredefinedFunction UStandardUnselectable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandardUnselectable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandardUnselectable.StandardUnselectable_C");
		return ptr;
	}

}


