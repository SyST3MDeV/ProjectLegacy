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
	 * 		Name   -> PredefinedFunction UDraft_CustomizeHero_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraft_CustomizeHero_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Draft_CustomizeHero.Draft_CustomizeHero_C");
		return ptr;
	}

}


