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
	 * 		Name   -> PredefinedFunction UHeroDetails_Skins_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroDetails_Skins_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroDetails_Skins.HeroDetails_Skins_C");
		return ptr;
	}

}


