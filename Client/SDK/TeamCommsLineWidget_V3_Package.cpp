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
	 * 		Name   -> PredefinedFunction UTeamCommsLineWidgetV3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamCommsLineWidgetV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamCommsLineWidget_V3.TeamCommsLineWidget-V3_C");
		return ptr;
	}

}


