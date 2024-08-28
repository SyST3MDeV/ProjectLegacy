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
	 * 		Name   -> PredefinedFunction UGE_ApplyGameplayCueToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_ApplyGameplayCueToTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_ApplyGameplayCueToTarget.GE_ApplyGameplayCueToTarget_C");
		return ptr;
	}

}


