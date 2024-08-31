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
	 * 		Name   -> PredefinedFunction UCombatMessageManagerWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatMessageManagerWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CombatMessageManagerWidget_V4.CombatMessageManagerWidget-V4_C");
		return ptr;
	}

}


