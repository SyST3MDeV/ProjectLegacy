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
	 * 		Name   -> PredefinedFunction UTeam_Info_Widget_Spectator_Blue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeam_Info_Widget_Spectator_Blue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Team_Info_Widget_Spectator_Blue.Team_Info_Widget_Spectator_Blue_C");
		return ptr;
	}

}


