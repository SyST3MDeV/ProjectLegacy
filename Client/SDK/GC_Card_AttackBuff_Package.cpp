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
	 * 		Name   -> PredefinedFunction AGC_Card_AttackBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Card_AttackBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_AttackBuff.GC_Card_AttackBuff_C");
		return ptr;
	}

}

