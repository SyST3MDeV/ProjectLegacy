﻿/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_EnergyDamage_Based_on_EnergyArmor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_EnergyDamage_Based_on_EnergyArmor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_EnergyDamage_Based_on_EnergyArmor.GA_Card_EnergyDamage_Based_on_EnergyArmor_C");
		return ptr;
	}

}


