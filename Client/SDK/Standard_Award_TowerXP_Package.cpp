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
	 * 		Name   -> PredefinedFunction UStandard_Award_TowerXP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandard_Award_TowerXP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Standard_Award_TowerXP.Standard_Award_TowerXP_C");
		return ptr;
	}

}


