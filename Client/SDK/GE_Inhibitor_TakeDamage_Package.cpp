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
	 * 		Name   -> PredefinedFunction UGE_Inhibitor_TakeDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Inhibitor_TakeDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Inhibitor_TakeDamage.GE_Inhibitor_TakeDamage_C");
		return ptr;
	}

}

