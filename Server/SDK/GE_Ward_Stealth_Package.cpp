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
	 * 		Name   -> PredefinedFunction UGE_Ward_Stealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Ward_Stealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Ward_Stealth.GE_Ward_Stealth_C");
		return ptr;
	}

}


