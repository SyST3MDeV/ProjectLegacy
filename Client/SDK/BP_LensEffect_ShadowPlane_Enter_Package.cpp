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
	 * 		Name   -> PredefinedFunction ABP_LensEffect_ShadowPlane_Enter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LensEffect_ShadowPlane_Enter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LensEffect_ShadowPlane_Enter.BP_LensEffect_ShadowPlane_Enter_C");
		return ptr;
	}

}

