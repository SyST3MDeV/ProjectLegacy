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
	 * 		Name   -> PredefinedFunction UAbilityWidgetContainerV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityWidgetContainerV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilityWidgetContainer_V4.AbilityWidgetContainer-V4_C");
		return ptr;
	}

}


