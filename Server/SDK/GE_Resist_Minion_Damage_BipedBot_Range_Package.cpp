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
	 * 		Name   -> PredefinedFunction UGE_Resist_Minion_Damage_BipedBot_Range_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Resist_Minion_Damage_BipedBot_Range_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Resist_Minion_Damage_BipedBot_Range.GE_Resist_Minion_Damage_BipedBot_Range_C");
		return ptr;
	}

}


