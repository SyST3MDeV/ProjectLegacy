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
	 * 		Name   -> PredefinedFunction UBuildGuide_Group_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildGuide_Group_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuildGuide_Group.BuildGuide_Group_C");
		return ptr;
	}

}


