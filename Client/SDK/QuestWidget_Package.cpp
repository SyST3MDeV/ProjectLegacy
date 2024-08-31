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
	 * 		Name   -> Function QuestWidget.QuestWidget_C.CompleteQuest
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UQuestWidget_C::CompleteQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.CompleteQuest");
		
		UQuestWidget_C_CompleteQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuestWidget.QuestWidget_C.ShowQuestWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UQuestWidget_C::ShowQuestWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.ShowQuestWidget");
		
		UQuestWidget_C_ShowQuestWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuestWidget.QuestWidget_C.OnProgressBarUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UQuestWidget_C::OnProgressBarUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.OnProgressBarUpdated");
		
		UQuestWidget_C_OnProgressBarUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuestWidget.QuestWidget_C.ExecuteUbergraph_QuestWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestWidget_C::ExecuteUbergraph_QuestWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestWidget.QuestWidget_C.ExecuteUbergraph_QuestWidget");
		
		UQuestWidget_C_ExecuteUbergraph_QuestWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestWidget.QuestWidget_C");
		return ptr;
	}

}


