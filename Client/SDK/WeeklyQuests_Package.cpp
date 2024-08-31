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
	 * 		Name   -> Function WeeklyQuests.WeeklyQuests_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWeeklyQuests_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuests.WeeklyQuests_C.OnMouseButtonDown");
		
		UWeeklyQuests_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuests.WeeklyQuests_C.OnQuestPanelAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionQuestProgressBarBase*                  NewQuestPanel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPanelSlot*                                  AddedToSlot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuests_C::OnQuestPanelAdded(class UOrionQuestProgressBarBase* NewQuestPanel, class UPanelSlot* AddedToSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuests.WeeklyQuests_C.OnQuestPanelAdded");
		
		UWeeklyQuests_C_OnQuestPanelAdded_Params params {};
		params.NewQuestPanel = NewQuestPanel;
		params.AddedToSlot = AddedToSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuests.WeeklyQuests_C.ExecuteUbergraph_WeeklyQuests
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuests_C::ExecuteUbergraph_WeeklyQuests(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuests.WeeklyQuests_C.ExecuteUbergraph_WeeklyQuests");
		
		UWeeklyQuests_C_ExecuteUbergraph_WeeklyQuests_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeeklyQuests_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeeklyQuests_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeeklyQuests.WeeklyQuests_C");
		return ptr;
	}

}


