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
	 * 		Name   -> PredefinedFunction UButtonStyleAcceptBody_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonStyleAcceptBody_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_Accept_Body.ButtonStyle-Accept-Body_C");
		return ptr;
	}

}


