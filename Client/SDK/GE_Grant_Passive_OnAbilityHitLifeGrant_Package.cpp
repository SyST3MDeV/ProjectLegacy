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
	 * 		Name   -> PredefinedFunction UGE_Grant_Passive_OnAbilityHitLifeGrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Grant_Passive_OnAbilityHitLifeGrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Grant_Passive_OnAbilityHitLifeGrant.GE_Grant_Passive_OnAbilityHitLifeGrant_C");
		return ptr;
	}

}

