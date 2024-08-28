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
	 * 		Name   -> PredefinedFunction UGE_BasicRig_StackCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_BasicRig_StackCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_BasicRig_StackCount.GE_BasicRig_StackCount_C");
		return ptr;
	}

}


