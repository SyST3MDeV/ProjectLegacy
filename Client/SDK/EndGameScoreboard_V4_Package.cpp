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
	 * 		Name   -> Function EndGameScoreboard-V4.EndGameScoreboard-V4_C.On Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameScoreboardV4_C::OnOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameScoreboard-V4.EndGameScoreboard-V4_C.On Open");
		
		UEndGameScoreboardV4_C_OnOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EndGameScoreboard-V4.EndGameScoreboard-V4_C.On Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameScoreboardV4_C::OnClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameScoreboard-V4.EndGameScoreboard-V4_C.On Close");
		
		UEndGameScoreboardV4_C_OnClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function EndGameScoreboard-V4.EndGameScoreboard-V4_C.ExecuteUbergraph_EndGameScoreboard-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEndGameScoreboardV4_C::ExecuteUbergraph_EndGameScoreboardV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameScoreboard-V4.EndGameScoreboard-V4_C.ExecuteUbergraph_EndGameScoreboard-V4");
		
		UEndGameScoreboardV4_C_ExecuteUbergraph_EndGameScoreboardV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndGameScoreboardV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGameScoreboardV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EndGameScoreboard_V4.EndGameScoreboard-V4_C");
		return ptr;
	}

}


