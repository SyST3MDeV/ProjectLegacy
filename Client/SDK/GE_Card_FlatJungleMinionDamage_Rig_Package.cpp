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
	 * 		Name   -> PredefinedFunction UGE_Card_FlatJungleMinionDamage_Rig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Card_FlatJungleMinionDamage_Rig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Card_FlatJungleMinionDamage_Rig.GE_Card_FlatJungleMinionDamage_Rig_C");
		return ptr;
	}

}


