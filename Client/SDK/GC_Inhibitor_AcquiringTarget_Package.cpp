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
	 * 		Name   -> PredefinedFunction AGC_Inhibitor_AcquiringTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Inhibitor_AcquiringTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Inhibitor_AcquiringTarget.GC_Inhibitor_AcquiringTarget_C");
		return ptr;
	}

}

