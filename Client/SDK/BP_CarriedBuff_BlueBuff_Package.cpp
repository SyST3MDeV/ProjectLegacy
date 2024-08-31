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
	 * 		Name   -> PredefinedFunction ABP_CarriedBuff_BlueBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CarriedBuff_BlueBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CarriedBuff_BlueBuff.BP_CarriedBuff_BlueBuff_C");
		return ptr;
	}

}


