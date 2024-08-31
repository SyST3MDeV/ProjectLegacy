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
	 * 		Name   -> PredefinedFunction UGE_WeakenAI_Health_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_WeakenAI_Health_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_WeakenAI_Health.GE_WeakenAI_Health_C");
		return ptr;
	}

}


