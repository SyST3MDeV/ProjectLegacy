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
	 * 		Name   -> PredefinedFunction UGE_BonusDamage_Inhib_Damage_BipedBot_Super_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_BonusDamage_Inhib_Damage_BipedBot_Super_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_BonusDamage_Inhib_Damage_BipedBot_Super.GE_BonusDamage_Inhib_Damage_BipedBot_Super_C");
		return ptr;
	}

}


