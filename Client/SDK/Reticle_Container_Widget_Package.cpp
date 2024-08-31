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
	 * 		Name   -> PredefinedFunction UReticle_Container_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReticle_Container_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Reticle_Container_Widget.Reticle_Container_Widget_C");
		return ptr;
	}

}


