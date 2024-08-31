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
	 * 		Name   -> PredefinedFunction UButtonStyleTabLoginScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonStyleTabLoginScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle_Tab_LoginScreen.ButtonStyle-Tab-LoginScreen_C");
		return ptr;
	}

}


