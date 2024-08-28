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
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardMatchTime.ScoreboardMatchTime_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UScoreboardMatchTime_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardMatchTime.ScoreboardMatchTime_C.Construct");
		
		UScoreboardMatchTime_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ScoreboardMatchTime.ScoreboardMatchTime_C.ExecuteUbergraph_ScoreboardMatchTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreboardMatchTime_C::ExecuteUbergraph_ScoreboardMatchTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardMatchTime.ScoreboardMatchTime_C.ExecuteUbergraph_ScoreboardMatchTime");
		
		UScoreboardMatchTime_C_ExecuteUbergraph_ScoreboardMatchTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScoreboardMatchTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreboardMatchTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardMatchTime.ScoreboardMatchTime_C");
		return ptr;
	}

}


