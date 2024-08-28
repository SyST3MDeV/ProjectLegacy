/**
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
	 * 		Name   -> PredefinedFunction UGE_Blue_Buff_Damage_Ranged_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Blue_Buff_Damage_Ranged_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Blue_Buff_Damage_Ranged.GE_Blue_Buff_Damage_Ranged_C");
		return ptr;
	}

}


