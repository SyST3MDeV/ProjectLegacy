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
	 * 		Name   -> PredefinedFunction UGameEventMessageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameEventMessageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameEventMessageWidget.GameEventMessageWidget_C");
		return ptr;
	}

}


