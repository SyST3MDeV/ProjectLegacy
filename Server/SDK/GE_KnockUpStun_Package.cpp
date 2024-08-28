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
	 * 		Name   -> PredefinedFunction UGE_KnockUpStun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_KnockUpStun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_KnockUpStun.GE_KnockUpStun_C");
		return ptr;
	}

}


