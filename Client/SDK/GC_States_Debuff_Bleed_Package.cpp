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
	 * 		Name   -> PredefinedFunction AGC_States_Debuff_Bleed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_States_Debuff_Bleed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_States_Debuff_Bleed.GC_States_Debuff_Bleed_C");
		return ptr;
	}

}

