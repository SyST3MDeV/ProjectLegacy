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
	 * 		Name   -> PredefinedFunction ATM_Teleport_Forward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATM_Teleport_Forward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TM_Teleport_Forward.TM_Teleport_Forward_C");
		return ptr;
	}

}


