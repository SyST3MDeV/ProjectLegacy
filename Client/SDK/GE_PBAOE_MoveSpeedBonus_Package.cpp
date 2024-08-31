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
	 * 		Name   -> PredefinedFunction UGE_PBAOE_MoveSpeedBonus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_PBAOE_MoveSpeedBonus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_PBAOE_MoveSpeedBonus.GE_PBAOE_MoveSpeedBonus_C");
		return ptr;
	}

}


