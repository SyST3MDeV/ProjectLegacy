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
	 * 		Name   -> PredefinedFunction UGA_OrionRigPlacement_Advanced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_OrionRigPlacement_Advanced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_OrionRigPlacement_Advanced.GA_OrionRigPlacement_Advanced_C");
		return ptr;
	}

}


