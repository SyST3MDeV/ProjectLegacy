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
	 * 		Name   -> PredefinedFunction UGC_Recall_TeleportFinished_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Recall_TeleportFinished_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Recall_TeleportFinished.GC_Recall_TeleportFinished_C");
		return ptr;
	}

}


