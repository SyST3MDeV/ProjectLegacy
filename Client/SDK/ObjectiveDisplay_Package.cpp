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
	 * 		Name   -> Function ObjectiveDisplay.ObjectiveDisplay_C.SetQuestText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        QuestText                                                  (Parm)
	 */
	void UObjectiveDisplay_C::SetQuestText(const class FText& QuestText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectiveDisplay.ObjectiveDisplay_C.SetQuestText");
		
		UObjectiveDisplay_C_SetQuestText_Params params {};
		params.QuestText = QuestText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectiveDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectiveDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveDisplay.ObjectiveDisplay_C");
		return ptr;
	}

}


