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
	 * 		Name   -> PredefinedFunction UGA_Card_AttackSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_AttackSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_AttackSpeed.GA_Card_AttackSpeed_C");
		return ptr;
	}

}

