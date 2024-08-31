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
	 * 		Name   -> PredefinedFunction UCountdownTimerPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCountdownTimerPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CountdownTimerPanel.CountdownTimerPanel_C");
		return ptr;
	}

}


