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
	 * 		Name   -> PredefinedFunction UGE_Core_Critical_Alarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Core_Critical_Alarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Core_Critical_Alarm.GE_Core_Critical_Alarm_C");
		return ptr;
	}

}

