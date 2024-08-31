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
	 * 		Name   -> PredefinedFunction ABP_Muriel_Ultimate_Reticle3D_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Muriel_Ultimate_Reticle3D_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Muriel_Ultimate_Reticle3D.BP_Muriel_Ultimate_Reticle3D_C");
		return ptr;
	}

}


