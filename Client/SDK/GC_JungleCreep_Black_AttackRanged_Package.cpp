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
	 * 		Name   -> PredefinedFunction UGC_JungleCreep_Black_AttackRanged_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_JungleCreep_Black_AttackRanged_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_JungleCreep_Black_AttackRanged.GC_JungleCreep_Black_AttackRanged_C");
		return ptr;
	}

}

