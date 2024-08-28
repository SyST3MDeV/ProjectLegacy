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
	 * 		Name   -> PredefinedFunction ABP_LensEffect_ShadowPlane_Loop_Timer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LensEffect_ShadowPlane_Loop_Timer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LensEffect_ShadowPlane_Loop_Timer.BP_LensEffect_ShadowPlane_Loop_Timer_C");
		return ptr;
	}

}


