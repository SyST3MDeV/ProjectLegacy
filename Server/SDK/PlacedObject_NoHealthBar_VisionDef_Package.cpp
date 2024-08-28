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
	 * 		Name   -> PredefinedFunction UPlacedObject_NoHealthBar_VisionDef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlacedObject_NoHealthBar_VisionDef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlacedObject_NoHealthBar_VisionDef.PlacedObject_NoHealthBar_VisionDef_C");
		return ptr;
	}

}


