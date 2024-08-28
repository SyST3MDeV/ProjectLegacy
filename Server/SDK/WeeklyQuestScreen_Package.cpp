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
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.Setup Data
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UWeeklyQuestScreen_C::SetupData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.Setup Data");
		
		UWeeklyQuestScreen_C_SetupData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.OnResetData
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UWeeklyQuestScreen_C::OnResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.OnResetData");
		
		UWeeklyQuestScreen_C_OnResetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWeeklyQuestScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.Construct");
		
		UWeeklyQuestScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuestScreen_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature");
		
		UWeeklyQuestScreen_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButtonAbandonQuest_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuestScreen_C::BndEvt__DefaultButtonAbandonQuest_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButtonAbandonQuest_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature");
		
		UWeeklyQuestScreen_C_BndEvt__DefaultButtonAbandonQuest_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButtonAbandonConfirm_K2Node_ComponentBoundEvent_23_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuestScreen_C::BndEvt__DefaultButtonAbandonConfirm_K2Node_ComponentBoundEvent_23_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButtonAbandonConfirm_K2Node_ComponentBoundEvent_23_OrionBaseButtonClicked__DelegateSignature");
		
		UWeeklyQuestScreen_C_BndEvt__DefaultButtonAbandonConfirm_K2Node_ComponentBoundEvent_23_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButtonAbandonCancel_K2Node_ComponentBoundEvent_39_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuestScreen_C::BndEvt__DefaultButtonAbandonCancel_K2Node_ComponentBoundEvent_39_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.BndEvt__DefaultButtonAbandonCancel_K2Node_ComponentBoundEvent_39_OrionBaseButtonClicked__DelegateSignature");
		
		UWeeklyQuestScreen_C_BndEvt__DefaultButtonAbandonCancel_K2Node_ComponentBoundEvent_39_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function WeeklyQuestScreen.WeeklyQuestScreen_C.ExecuteUbergraph_WeeklyQuestScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeeklyQuestScreen_C::ExecuteUbergraph_WeeklyQuestScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeeklyQuestScreen.WeeklyQuestScreen_C.ExecuteUbergraph_WeeklyQuestScreen");
		
		UWeeklyQuestScreen_C_ExecuteUbergraph_WeeklyQuestScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeeklyQuestScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeeklyQuestScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeeklyQuestScreen.WeeklyQuestScreen_C");
		return ptr;
	}

}


