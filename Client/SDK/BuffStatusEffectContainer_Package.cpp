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
	 * 		Name   -> PredefinedFunction UBuffStatusEffectContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffStatusEffectContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuffStatusEffectContainer.BuffStatusEffectContainer_C");
		return ptr;
	}

}

