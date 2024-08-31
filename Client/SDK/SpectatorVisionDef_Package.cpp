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
	 * 		Name   -> PredefinedFunction USpectatorVisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorVisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpectatorVisionDef.SpectatorVisionDef_C");
		return ptr;
	}

}


