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
	 * 		Name   -> PredefinedFunction UGE_Steal_EnergyArmorEnemy_When_Burning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Steal_EnergyArmorEnemy_When_Burning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Steal_EnergyArmorEnemy_When_Burning.GE_Steal_EnergyArmorEnemy_When_Burning_C");
		return ptr;
	}

}

