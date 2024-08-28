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
	 * 		Name   -> PredefinedFunction ATM_Card_PBAoE_Slow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Card_PBAoE_Slow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Card_PBAoE_Slow.TM_Card_PBAoE_Slow_C");
		return ptr;
	}

}


