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
	 * 		Name   -> PredefinedFunction ABP_CameraLensTimer_Recall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraLensTimer_Recall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLensTimer_Recall.BP_CameraLensTimer_Recall_C");
		return ptr;
	}

}


