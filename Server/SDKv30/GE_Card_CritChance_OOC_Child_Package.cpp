﻿/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGE_Card_CritChance_OOC_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Card_CritChance_OOC_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Card_CritChance_OOC_Child.GE_Card_CritChance_OOC_Child_C");
		return ptr;
	}

}


