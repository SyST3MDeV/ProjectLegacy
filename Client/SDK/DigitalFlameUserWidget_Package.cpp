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
	 * 		Name   -> PredefinedFunction UDigitalFlameUserWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDigitalFlameUserWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DigitalFlameUserWidget.DigitalFlameUserWidget_C");
		return ptr;
	}

}


