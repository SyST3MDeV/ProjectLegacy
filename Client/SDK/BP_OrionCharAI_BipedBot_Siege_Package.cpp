﻿/**
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
	 * 		Name   -> PredefinedFunction ABP_OrionCharAI_BipedBot_Siege_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionCharAI_BipedBot_Siege_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionCharAI_BipedBot_Siege.BP_OrionCharAI_BipedBot_Siege_C");
		return ptr;
	}

}

