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
	 * 		Name   -> PredefinedFunction UScoreboardTeamTotals_EnemyV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreboardTeamTotals_EnemyV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardTeamTotals_Enemy_V4.ScoreboardTeamTotals_Enemy-V4_C");
		return ptr;
	}

}


