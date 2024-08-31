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
	 * 		Name   -> PredefinedFunction UScoreboardHeaderIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreboardHeaderIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardHeaderIcons.ScoreboardHeaderIcons_C");
		return ptr;
	}

}


