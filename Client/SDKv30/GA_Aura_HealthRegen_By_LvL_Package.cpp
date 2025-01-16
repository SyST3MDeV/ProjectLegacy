/**
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
	 * 		Name   -> PredefinedFunction UGA_Aura_HealthRegen_By_LvL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Aura_HealthRegen_By_LvL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Aura_HealthRegen_By_LvL.GA_Aura_HealthRegen_By_LvL_C");
		return ptr;
	}

}


