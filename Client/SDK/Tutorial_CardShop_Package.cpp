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
	 * 		Name   -> PredefinedFunction UTutorial_CardShop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorial_CardShop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_CardShop.Tutorial_CardShop_C");
		return ptr;
	}

}

