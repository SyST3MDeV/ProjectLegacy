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
	 * 		Name   -> Function ToggleEmotesPrompt.ToggleEmotesPrompt_C.Set Emote Mode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InEmoteMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToggleEmotesPrompt_C::SetEmoteMode(bool InEmoteMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToggleEmotesPrompt.ToggleEmotesPrompt_C.Set Emote Mode");
		
		UToggleEmotesPrompt_C_SetEmoteMode_Params params {};
		params.InEmoteMode = InEmoteMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToggleEmotesPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToggleEmotesPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToggleEmotesPrompt.ToggleEmotesPrompt_C");
		return ptr;
	}

}


