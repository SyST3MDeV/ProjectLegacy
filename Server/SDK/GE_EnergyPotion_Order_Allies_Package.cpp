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
	 * 		Name   -> PredefinedFunction UGE_EnergyPotion_Order_Allies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_EnergyPotion_Order_Allies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_EnergyPotion_Order_Allies.GE_EnergyPotion_Order_Allies_C");
		return ptr;
	}

}


