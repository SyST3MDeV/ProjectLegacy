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
	 * 		Name   -> PredefinedFunction UGE_Aura_PH_MvM_By_LvL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Aura_PH_MvM_By_LvL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Aura_PH_MvM_By_LvL.GE_Aura_PH_MvM_By_LvL_C");
		return ptr;
	}

}


