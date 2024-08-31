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
	 * 		Name   -> PredefinedFunction URespawnTimerContaier_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnTimerContaier_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RespawnTimerContaier_V2.RespawnTimerContaier_V2_C");
		return ptr;
	}

}


