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
	 * 		Name   -> PredefinedFunction UBannerItem_Charm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBannerItem_Charm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BannerItem_Charm.BannerItem_Charm_C");
		return ptr;
	}

}


