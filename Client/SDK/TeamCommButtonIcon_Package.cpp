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
	 * 		Name   -> PredefinedFunction UTeamCommButtonIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommButtonIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamCommButtonIcon.TeamCommButtonIcon_C");
		return ptr;
	}

}


