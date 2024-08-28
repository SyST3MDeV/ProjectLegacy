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
	 * 		Name   -> PredefinedFunction UCardShop_Suggestions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardShop_Suggestions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardShop_Suggestions.CardShop_Suggestions_C");
		return ptr;
	}

}


