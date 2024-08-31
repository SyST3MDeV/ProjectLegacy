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
	 * 		Name   -> PredefinedFunction UGE_RecallTeleportFinishedFailSafe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_RecallTeleportFinishedFailSafe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_RecallTeleportFinishedFailSafe.GE_RecallTeleportFinishedFailSafe_C");
		return ptr;
	}

}


