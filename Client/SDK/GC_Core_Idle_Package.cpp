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
	 * 		Name   -> PredefinedFunction AGC_Core_Idle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Core_Idle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Core_Idle.GC_Core_Idle_C");
		return ptr;
	}

}

