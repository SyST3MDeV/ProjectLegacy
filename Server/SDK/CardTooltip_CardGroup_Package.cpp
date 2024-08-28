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
	 * 		Name   -> PredefinedFunction UCardTooltip_CardGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardTooltip_CardGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardTooltip_CardGroup.CardTooltip_CardGroup_C");
		return ptr;
	}

}


