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
	 * 		Name   -> PredefinedFunction UMatchmakingAnimRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchmakingAnimRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchmakingAnimRoot.MatchmakingAnimRoot_C");
		return ptr;
	}

}


