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
	 * 		Name   -> PredefinedFunction UPS4MediaSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPS4MediaSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PS4MediaFactory.PS4MediaSettings");
		return ptr;
	}

}


