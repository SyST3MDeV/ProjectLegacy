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
	 * 		Name   -> PredefinedFunction UDraftPlayerTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraftPlayerTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DraftPlayerTooltip.DraftPlayerTooltip_C");
		return ptr;
	}

}


