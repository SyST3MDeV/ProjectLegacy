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
	 * 		Name   -> PredefinedFunction ACameraLensEffect_TravelMode_Loop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraLensEffect_TravelMode_Loop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraLensEffect_TravelMode_Loop.CameraLensEffect_TravelMode_Loop_C");
		return ptr;
	}

}


