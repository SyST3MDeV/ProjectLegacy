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
	 * 		Name   -> PredefinedFunction UCentral_message_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCentral_message_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Central_message_Widget.Central_message_Widget_C");
		return ptr;
	}

}


