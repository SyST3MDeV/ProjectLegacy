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
	 * 		Name   -> PredefinedFunction UAutobuyCardShopWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutobuyCardShopWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AutobuyCardShopWidget.AutobuyCardShopWidget_C");
		return ptr;
	}

}


