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
	 * 		Name   -> PredefinedFunction UCardShopDeckOutline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardShopDeckOutline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardShopDeckOutline.CardShopDeckOutline_C");
		return ptr;
	}

}


