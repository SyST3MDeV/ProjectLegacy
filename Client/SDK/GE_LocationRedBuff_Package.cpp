﻿/**
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
	 * 		Name   -> PredefinedFunction UGE_LocationRedBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_LocationRedBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_LocationRedBuff.GE_LocationRedBuff_C");
		return ptr;
	}

}

