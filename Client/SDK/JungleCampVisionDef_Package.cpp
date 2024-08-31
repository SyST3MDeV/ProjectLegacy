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
	 * 		Name   -> PredefinedFunction UJungleCampVisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJungleCampVisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JungleCampVisionDef.JungleCampVisionDef_C");
		return ptr;
	}

}


