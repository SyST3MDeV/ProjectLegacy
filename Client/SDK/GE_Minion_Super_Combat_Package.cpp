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
	 * 		Name   -> PredefinedFunction UGE_Minion_Super_Combat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Minion_Super_Combat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Minion_Super_Combat.GE_Minion_Super_Combat_C");
		return ptr;
	}

}

