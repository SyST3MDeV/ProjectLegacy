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
	 * 		Name   -> PredefinedFunction UGE_Grant_Aura_PowerRegen_By_LvL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Grant_Aura_PowerRegen_By_LvL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Grant_Aura_PowerRegen_By_LvL.GE_Grant_Aura_PowerRegen_By_LvL_C");
		return ptr;
	}

}


