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
	 * 		Name   -> PredefinedFunction UJungle_Buff_HUD_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJungle_Buff_HUD_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Jungle_Buff_HUD_Widget.Jungle_Buff_HUD_Widget_C");
		return ptr;
	}

}


