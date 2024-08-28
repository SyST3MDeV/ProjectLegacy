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
	 * 		Name   -> PredefinedFunction UGA_OrionCharacterJump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_OrionCharacterJump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_OrionCharacterJump.GA_OrionCharacterJump_C");
		return ptr;
	}

}


