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
	 * 		Name   -> PredefinedFunction ABannerEditorPlacementActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABannerEditorPlacementActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BannerEditorPlacementActor.BannerEditorPlacementActor_C");
		return ptr;
	}

}


