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
	 * 		Name   -> PredefinedFunction UGE_Grant_Steal_PhysicalArmor_When_Bleeding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Grant_Steal_PhysicalArmor_When_Bleeding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Grant_Steal_PhysicalArmor_When_Bleeding.GE_Grant_Steal_PhysicalArmor_When_Bleeding_C");
		return ptr;
	}

}

