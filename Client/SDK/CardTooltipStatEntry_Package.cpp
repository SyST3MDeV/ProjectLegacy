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
	 * 		Name   -> PredefinedFunction UCardTooltipStatEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardTooltipStatEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardTooltipStatEntry.CardTooltipStatEntry_C");
		return ptr;
	}

}


