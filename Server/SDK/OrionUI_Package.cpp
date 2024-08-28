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
	 * 		Name   -> DelegateFunction OrionUI.EventWidget.OnMouseEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UEventWidget::OnMouseEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction OrionUI.EventWidget.OnMouseEvent__DelegateSignature");
		
		UEventWidget_OnMouseEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction OrionUI.EventWidget.OnMouseButtonEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEventWidget::OnMouseButtonEvent__DelegateSignature(const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction OrionUI.EventWidget.OnMouseButtonEvent__DelegateSignature");
		
		UEventWidget_OnMouseButtonEvent__DelegateSignature_Params params {};
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.EventWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x018C8F60
	 * 		Name   -> Function OrionUI.EventWidgetSlot.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEventWidgetSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.EventWidgetSlot.SetVerticalAlignment");
		
		UEventWidgetSlot_SetVerticalAlignment_Params params {};
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01860
	 * 		Name   -> Function OrionUI.EventWidgetSlot.SetPadding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void UEventWidgetSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.EventWidgetSlot.SetPadding");
		
		UEventWidgetSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01580
	 * 		Name   -> Function OrionUI.EventWidgetSlot.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEventWidgetSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.EventWidgetSlot.SetHorizontalAlignment");
		
		UEventWidgetSlot_SetHorizontalAlignment_Params params {};
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventWidgetSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventWidgetSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.EventWidgetSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01450
	 * 		Name   -> Function OrionUI.OrionBannerEditor.SaveBanner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOrionBannerEditor::SaveBanner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.SaveBanner");
		
		UOrionBannerEditor_SaveBanner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01220
	 * 		Name   -> Function OrionUI.OrionBannerEditor.HandleBannerNameCommitted
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETextCommit                                        CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::HandleBannerNameCommitted(const class FText& NewText, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.HandleBannerNameCommitted");
		
		UOrionBannerEditor_HandleBannerNameCommitted_Params params {};
		params.NewText = NewText;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01150
	 * 		Name   -> Function OrionUI.OrionBannerEditor.HandleBannerNameChanged
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FText                                        NewText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::HandleBannerNameChanged(const class FText& NewText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.HandleBannerNameChanged");
		
		UOrionBannerEditor_HandleBannerNameChanged_Params params {};
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B005D0
	 * 		Name   -> Function OrionUI.OrionBannerEditor.EditBanner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionMcpBannerItem*                         InBanner                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::EditBanner(class UOrionMcpBannerItem* InBanner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.EditBanner");
		
		UOrionBannerEditor_EditBanner_Params params {};
		params.InBanner = InBanner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditor.BP_OnSaveStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionBannerEditor::BP_OnSaveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.BP_OnSaveStarted");
		
		UOrionBannerEditor_BP_OnSaveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditor.BP_OnSaveFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::BP_OnSaveFinished(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.BP_OnSaveFinished");
		
		UOrionBannerEditor_BP_OnSaveFinished_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditor.BP_OnHighlightGroup
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ESlotGroup                                         GroupToHighlight                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::BP_OnHighlightGroup(ESlotGroup GroupToHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.BP_OnHighlightGroup");
		
		UOrionBannerEditor_BP_OnHighlightGroup_Params params {};
		params.GroupToHighlight = GroupToHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditor.BP_OnCommandsChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CommandCount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::BP_OnCommandsChanged(int32_t CommandCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.BP_OnCommandsChanged");
		
		UOrionBannerEditor_BP_OnCommandsChanged_Params params {};
		params.CommandCount = CommandCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditor.BP_OnBannerNameChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        bannerName                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditor::BP_OnBannerNameChanged(const class FText& bannerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditor.BP_OnBannerNameChanged");
		
		UOrionBannerEditor_BP_OnBannerNameChanged_Params params {};
		params.bannerName = bannerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerEditor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerEditor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerEditor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOrionBannerEditorActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOrionBannerEditorActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerEditorActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditorItemPicker.BP_OnShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSkipAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditorItemPicker::BP_OnShow(bool bSkipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditorItemPicker.BP_OnShow");
		
		UOrionBannerEditorItemPicker_BP_OnShow_Params params {};
		params.bSkipAnim = bSkipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerEditorItemPicker.BP_OnHide
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSkipAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerEditorItemPicker::BP_OnHide(bool bSkipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerEditorItemPicker.BP_OnHide");
		
		UOrionBannerEditorItemPicker_BP_OnHide_Params params {};
		params.bSkipAnim = bSkipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerEditorItemPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerEditorItemPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerEditorItemPicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem.BP_OnSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem::BP_OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem.BP_OnSelectionChanged");
		
		UOrionInventoryItem_BP_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem.BP_OnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionInventoryItem::BP_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem.BP_OnReset");
		
		UOrionInventoryItem_BP_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem.BP_OnLoadStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionInventoryItem::BP_OnLoadStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem.BP_OnLoadStarted");
		
		UOrionInventoryItem_BP_OnLoadStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem.BP_OnItemSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FInventoryItemDisplayData                   DisplayData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem::BP_OnItemSet(const struct FInventoryItemDisplayData& DisplayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem.BP_OnItemSet");
		
		UOrionInventoryItem_BP_OnItemSet_Params params {};
		params.DisplayData = DisplayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerItem_Charm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerItem_Charm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerItem_Charm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerItem_Dye.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerItem_Dye::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerItem_Dye");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerItem_Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerItem_Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerItem_Effect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerItem_Group.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerItem_Group::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerItem_Group");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerSlot.BP_StartLoadingDyes
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionBannerSlot::BP_StartLoadingDyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerSlot.BP_StartLoadingDyes");
		
		UOrionBannerSlot_BP_StartLoadingDyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerSlot.BP_OnSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerSlot::BP_OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerSlot.BP_OnSelectionChanged");
		
		UOrionBannerSlot_BP_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerSlot.BP_OnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionBannerSlot::BP_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerSlot.BP_OnReset");
		
		UOrionBannerSlot_BP_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerSlot.BP_OnItemSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionSlotDisplayInfo                       ItemInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerSlot::BP_OnItemSet(const struct FOrionSlotDisplayInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerSlot.BP_OnItemSet");
		
		UOrionBannerSlot_BP_OnItemSet_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionBannerSlot.BP_FinishLoadingDye
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DyeSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Dye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionBannerSlot::BP_FinishLoadingDye(int32_t DyeSlot, class UTexture2D* Dye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionBannerSlot.BP_FinishLoadingDye");
		
		UOrionBannerSlot_BP_FinishLoadingDye_Params params {};
		params.DyeSlot = DyeSlot;
		params.Dye = Dye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerSlot_Banner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerSlot_Banner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerSlot_Banner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerSlot_Charm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerSlot_Charm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerSlot_Charm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerSlot_Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerSlot_Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerSlot_Effect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBannerSlot_Group.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBannerSlot_Group::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBannerSlot_Group");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionBlurWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionBlurWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionBlurWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionComponentInventoryEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionComponentInventoryEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionComponentInventoryEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionComponentInventorySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionComponentInventorySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionComponentInventorySection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionComponentInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionComponentInventory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionComponentInventory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionRequiredComponentEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionRequiredComponentEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionRequiredComponentEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01470
	 * 		Name   -> Function OrionUI.OrionCraftingRoot.SetCardBeingCrafted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOrionCardData*                              Card                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionCraftingRoot::SetCardBeingCrafted(class UOrionCardData* Card)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionCraftingRoot.SetCardBeingCrafted");
		
		UOrionCraftingRoot_SetCardBeingCrafted_Params params {};
		params.Card = Card;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionCraftingRoot.OnCraftStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionCraftingRoot::OnCraftStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionCraftingRoot.OnCraftStarted");
		
		UOrionCraftingRoot_OnCraftStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionCraftingRoot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionCraftingRoot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionCraftingRoot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01970
	 * 		Name   -> Function OrionUI.OrionEULAText.SetText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UOrionEULAText::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionEULAText.SetText");
		
		UOrionEULAText_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionEULAText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionEULAText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionEULAText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01A80
	 * 		Name   -> Function OrionUI.OrionFPSAndPing.UpdateForCurrentSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOrionFPSAndPing::UpdateForCurrentSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionFPSAndPing.UpdateForCurrentSettings");
		
		UOrionFPSAndPing_UpdateForCurrentSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B018F0
	 * 		Name   -> Function OrionUI.OrionFPSAndPing.SetPlayerController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           InController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionFPSAndPing::SetPlayerController(class APlayerController* InController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionFPSAndPing.SetPlayerController");
		
		UOrionFPSAndPing_SetPlayerController_Params params {};
		params.InController = InController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionFPSAndPing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionFPSAndPing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionFPSAndPing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryHeader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryHeader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryHeader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Banner.BP_OnDefaultChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDefault                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Banner::BP_OnDefaultChanged(bool bDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Banner.BP_OnDefaultChanged");
		
		UOrionInventoryItem_Banner_BP_OnDefaultChanged_Params params {};
		params.bDefault = bDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryItem_Banner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryItem_Banner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryItem_Banner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Charm.BP_OnStackCountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Charm::BP_OnStackCountChanged(int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Charm.BP_OnStackCountChanged");
		
		UOrionInventoryItem_Charm_BP_OnStackCountChanged_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Charm.BP_OnSetItemInUse
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Charm::BP_OnSetItemInUse(bool bInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Charm.BP_OnSetItemInUse");
		
		UOrionInventoryItem_Charm_BP_OnSetItemInUse_Params params {};
		params.bInUse = bInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Charm.BP_OnDyesLoading
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOrionInventoryItem_Charm::BP_OnDyesLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Charm.BP_OnDyesLoading");
		
		UOrionInventoryItem_Charm_BP_OnDyesLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Charm.BP_OnDyeLoaded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Dye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  DyeTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Charm::BP_OnDyeLoaded(int32_t Dye, class UTexture2D* DyeTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Charm.BP_OnDyeLoaded");
		
		UOrionInventoryItem_Charm_BP_OnDyeLoaded_Params params {};
		params.Dye = Dye;
		params.DyeTexture = DyeTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryItem_Charm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryItem_Charm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryItem_Charm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Dye.BP_OnStackCountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Dye::BP_OnStackCountChanged(int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Dye.BP_OnStackCountChanged");
		
		UOrionInventoryItem_Dye_BP_OnStackCountChanged_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Dye.BP_OnIsDefaultDyeChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsDefaultDye                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Dye::BP_OnIsDefaultDyeChanged(bool bIsDefaultDye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Dye.BP_OnIsDefaultDyeChanged");
		
		UOrionInventoryItem_Dye_BP_OnIsDefaultDyeChanged_Params params {};
		params.bIsDefaultDye = bIsDefaultDye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryItem_Dye.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryItem_Dye::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryItem_Dye");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Effect.BP_OnStackCountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Effect::BP_OnStackCountChanged(int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Effect.BP_OnStackCountChanged");
		
		UOrionInventoryItem_Effect_BP_OnStackCountChanged_Params params {};
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryItem_Effect.BP_OnSetItemInUse
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryItem_Effect::BP_OnSetItemInUse(bool bInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryItem_Effect.BP_OnSetItemInUse");
		
		UOrionInventoryItem_Effect_BP_OnSetItemInUse_Params params {};
		params.bInUse = bInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryItem_Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryItem_Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryItem_Effect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryItem_Group.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryItem_Group::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryItem_Group");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip.BP_OnItemNameChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ItemName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip::BP_OnItemNameChanged(const class FText& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip.BP_OnItemNameChanged");
		
		UOrionInventoryTooltip_BP_OnItemNameChanged_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip.BP_OnHelpTextChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        HelpText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip::BP_OnHelpTextChanged(const class FText& HelpText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip.BP_OnHelpTextChanged");
		
		UOrionInventoryTooltip_BP_OnHelpTextChanged_Params params {};
		params.HelpText = HelpText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip.BP_OnFlavorTextChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        FlavorText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip::BP_OnFlavorTextChanged(const class FText& FlavorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip.BP_OnFlavorTextChanged");
		
		UOrionInventoryTooltip_BP_OnFlavorTextChanged_Params params {};
		params.FlavorText = FlavorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryTooltip.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryTooltip::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryTooltip");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip_Banner.BP_OnImpactEffectChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Effect                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip_Banner::BP_OnImpactEffectChanged(const class FText& Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip_Banner.BP_OnImpactEffectChanged");
		
		UOrionInventoryTooltip_Banner_BP_OnImpactEffectChanged_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip_Banner.BP_OnDyesChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Dyes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip_Banner::BP_OnDyesChanged(TArray<class FText> Dyes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip_Banner.BP_OnDyesChanged");
		
		UOrionInventoryTooltip_Banner_BP_OnDyesChanged_Params params {};
		params.Dyes = Dyes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip_Banner.BP_OnCharmsChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Charms                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip_Banner::BP_OnCharmsChanged(TArray<class FText> Charms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip_Banner.BP_OnCharmsChanged");
		
		UOrionInventoryTooltip_Banner_BP_OnCharmsChanged_Params params {};
		params.Charms = Charms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip_Banner.BP_OnBannerTypeChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        BannerType                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip_Banner::BP_OnBannerTypeChanged(const class FText& BannerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip_Banner.BP_OnBannerTypeChanged");
		
		UOrionInventoryTooltip_Banner_BP_OnBannerTypeChanged_Params params {};
		params.BannerType = BannerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip_Banner.BP_OnActivationEffectChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Effect                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip_Banner::BP_OnActivationEffectChanged(const class FText& Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip_Banner.BP_OnActivationEffectChanged");
		
		UOrionInventoryTooltip_Banner_BP_OnActivationEffectChanged_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryTooltip_Banner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryTooltip_Banner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryTooltip_Banner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function OrionUI.OrionInventoryTooltip_Charm.BP_OnDyesChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                Dyes                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOrionInventoryTooltip_Charm::BP_OnDyesChanged(TArray<class FText> Dyes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionInventoryTooltip_Charm.BP_OnDyesChanged");
		
		UOrionInventoryTooltip_Charm_BP_OnDyesChanged_Params params {};
		params.Dyes = Dyes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionInventoryTooltip_Charm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionInventoryTooltip_Charm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionInventoryTooltip_Charm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01AA0
	 * 		Name   -> Function OrionUI.OrionLegacySlateWidget.UpdateSlateWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionLegacySlateWidgetType                        SlateWidgetType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionLegacySlateWidget::UpdateSlateWidget(EOrionLegacySlateWidgetType SlateWidgetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionLegacySlateWidget.UpdateSlateWidget");
		
		UOrionLegacySlateWidget_UpdateSlateWidget_Params params {};
		params.SlateWidgetType = SlateWidgetType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B017A0
	 * 		Name   -> Function OrionUI.OrionLegacySlateWidget.SetOnCloseHandler
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnCloseHandler                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionLegacySlateWidget::SetOnCloseHandler(const class FScriptDelegate& OnCloseHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionLegacySlateWidget.SetOnCloseHandler");
		
		UOrionLegacySlateWidget_SetOnCloseHandler_Params params {};
		params.OnCloseHandler = OnCloseHandler;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionLegacySlateWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionLegacySlateWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionLegacySlateWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01A30
	 * 		Name   -> Function OrionUI.OrionMiniMap.SetupMiniMap
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UOrionMiniMap::SetupMiniMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionMiniMap.SetupMiniMap");
		
		UOrionMiniMap_SetupMiniMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01680
	 * 		Name   -> Function OrionUI.OrionMiniMap.SetMapModeIsLarge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsLargeMap                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionMiniMap::SetMapModeIsLarge(bool bIsLargeMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionMiniMap.SetMapModeIsLarge");
		
		UOrionMiniMap_SetMapModeIsLarge_Params params {};
		params.bIsLargeMap = bIsLargeMap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01600
	 * 		Name   -> Function OrionUI.OrionMiniMap.SetLocalPlayerController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           LocalPlayerController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionMiniMap::SetLocalPlayerController(class APlayerController* LocalPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionMiniMap.SetLocalPlayerController");
		
		UOrionMiniMap_SetLocalPlayerController_Params params {};
		params.LocalPlayerController = LocalPlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01430
	 * 		Name   -> Function OrionUI.OrionMiniMap.ResetMinimapScaling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOrionMiniMap::ResetMinimapScaling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionMiniMap.ResetMinimapScaling");
		
		UOrionMiniMap_ResetMinimapScaling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01380
	 * 		Name   -> Function OrionUI.OrionMiniMap.OnTeamChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamNum                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOrionMiniMap::OnTeamChanged(EOrionTeam NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionMiniMap.OnTeamChanged");
		
		UOrionMiniMap_OnTeamChanged_Params params {};
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00CA0
	 * 		Name   -> Function OrionUI.OrionMiniMap.GetMapModeIsLarge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOrionMiniMap::GetMapModeIsLarge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionMiniMap.GetMapModeIsLarge");
		
		UOrionMiniMap_GetMapModeIsLarge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionMiniMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionMiniMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionMiniMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B010F0
	 * 		Name   -> Function OrionUI.OrionURLs.GetURLs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UOrionURLs* UOrionURLs::STATIC_GetURLs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionURLs.GetURLs");
		
		UOrionURLs_GetURLs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00880
	 * 		Name   -> Function OrionUI.OrionURLs.GetCustomerServiceURLInLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      LanguageCode                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UOrionURLs::GetCustomerServiceURLInLanguage(const class FString& LanguageCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionURLs.GetCustomerServiceURLInLanguage");
		
		UOrionURLs_GetCustomerServiceURLInLanguage_Params params {};
		params.LanguageCode = LanguageCode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionURLs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionURLs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionURLs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01A50
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.ToggleNeedsMouse
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UOrionUserWidget_HUD::ToggleNeedsMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.ToggleNeedsMouse");
		
		UOrionUserWidget_HUD_ToggleNeedsMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01710
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.SetNeedsMouse
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewNeedsMouse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionUserWidget_HUD::SetNeedsMouse(bool bNewNeedsMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.SetNeedsMouse");
		
		UOrionUserWidget_HUD_SetNeedsMouse_Params params {};
		params.bNewNeedsMouse = bNewNeedsMouse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B014F0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.SetEscapeMenuState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOpen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOrionUserWidget_HUD::SetEscapeMenuState(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.SetEscapeMenuState");
		
		UOrionUserWidget_HUD_SetEscapeMenuState_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01400
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.QuitToMainMenu
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UOrionUserWidget_HUD::QuitToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.QuitToMainMenu");
		
		UOrionUserWidget_HUD_QuitToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01340
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.IsInTravelMode
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOrionUserWidget_HUD::IsInTravelMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.IsInTravelMode");
		
		UOrionUserWidget_HUD_IsInTravelMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B01120
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetViewModel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOrionViewModel_HUD* UOrionUserWidget_HUD::GetViewModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetViewModel");
		
		UOrionUserWidget_HUD_GetViewModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B010A0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetUIToggles
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionDeveloperUIToggles UOrionUserWidget_HUD::GetUIToggles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetUIToggles");
		
		UOrionUserWidget_HUD_GetUIToggles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00FE0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetTowerTargetingInfo
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOrionTowerTargetingInfo UOrionUserWidget_HUD::GetTowerTargetingInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetTowerTargetingInfo");
		
		UOrionUserWidget_HUD_GetTowerTargetingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00FA0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetPlayerPortrait
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTexture2D* UOrionUserWidget_HUD::GetPlayerPortrait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetPlayerPortrait");
		
		UOrionUserWidget_HUD_GetPlayerPortrait_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00F10
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetPlayerName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UOrionUserWidget_HUD::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetPlayerName");
		
		UOrionUserWidget_HUD_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00EC0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetPlayerLocation
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UOrionUserWidget_HUD::GetPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetPlayerLocation");
		
		UOrionUserWidget_HUD_GetPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00E80
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetPlayerLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UOrionUserWidget_HUD::GetPlayerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetPlayerLevel");
		
		UOrionUserWidget_HUD_GetPlayerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00E30
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetPlayerCameraLocation
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UOrionUserWidget_HUD::GetPlayerCameraLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetPlayerCameraLocation");
		
		UOrionUserWidget_HUD_GetPlayerCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00DE0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetPlayerCameraDirection
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UOrionUserWidget_HUD::GetPlayerCameraDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetPlayerCameraDirection");
		
		UOrionUserWidget_HUD_GetPlayerCameraDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00D40
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetMyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               AllowSpectator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOrionTeam UOrionUserWidget_HUD::GetMyTeam(bool AllowSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetMyTeam");
		
		UOrionUserWidget_HUD_GetMyTeam_Params params {};
		params.AllowSpectator = AllowSpectator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00D00
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetMiniMapRotation
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UOrionUserWidget_HUD::GetMiniMapRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetMiniMapRotation");
		
		UOrionUserWidget_HUD_GetMiniMapRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00CC0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetMiniMapBackground
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTexture2D* UOrionUserWidget_HUD::GetMiniMapBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetMiniMapBackground");
		
		UOrionUserWidget_HUD_GetMiniMapBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00C60
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetLevelHasMiniMapVolume
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOrionUserWidget_HUD::GetLevelHasMiniMapVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetLevelHasMiniMapVolume");
		
		UOrionUserWidget_HUD_GetLevelHasMiniMapVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00C20
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetKills
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UOrionUserWidget_HUD::GetKills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetKills");
		
		UOrionUserWidget_HUD_GetKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00B90
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetHeroName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UOrionUserWidget_HUD::GetHeroName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetHeroName");
		
		UOrionUserWidget_HUD_GetHeroName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00AF0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetEnemyTeam
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               AllowSpectator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOrionTeam UOrionUserWidget_HUD::GetEnemyTeam(bool AllowSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetEnemyTeam");
		
		UOrionUserWidget_HUD_GetEnemyTeam_Params params {};
		params.AllowSpectator = AllowSpectator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00AB0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetDeaths
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UOrionUserWidget_HUD::GetDeaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetDeaths");
		
		UOrionUserWidget_HUD_GetDeaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B009B0
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetDamageIndicatorRotation
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     PlayerLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InstigatorLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UOrionUserWidget_HUD::GetDamageIndicatorRotation(const struct FVector& PlayerLocation, const struct FVector& InstigatorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetDamageIndicatorRotation");
		
		UOrionUserWidget_HUD_GetDamageIndicatorRotation_Params params {};
		params.PlayerLocation = PlayerLocation;
		params.InstigatorLocation = InstigatorLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00790
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetCoreInfo
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionTeam                                         TeamNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionCoreInfo UOrionUserWidget_HUD::GetCoreInfo(EOrionTeam TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetCoreInfo");
		
		UOrionUserWidget_HUD_GetCoreInfo_Params params {};
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00690
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetCardAbilityData
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOrionAbilityBinding                               InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FOrionCardAbilityData UOrionUserWidget_HUD::GetCardAbilityData(EOrionAbilityBinding InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetCardAbilityData");
		
		UOrionUserWidget_HUD_GetCardAbilityData_Params params {};
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00650
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.GetAssists
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UOrionUserWidget_HUD::GetAssists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.GetAssists");
		
		UOrionUserWidget_HUD_GetAssists_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00450
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.CreateMessageWidget
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOrionGameEventMessageData                  MessageData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOrionUserWidget_GameEventMessage* UOrionUserWidget_HUD::CreateMessageWidget(const struct FOrionGameEventMessageData& MessageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.CreateMessageWidget");
		
		UOrionUserWidget_HUD_CreateMessageWidget_Params params {};
		params.MessageData = MessageData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02B00390
	 * 		Name   -> Function OrionUI.OrionUserWidget_HUD.CreateLogMessageWidget
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOrionHUDLogMessageData                     MessageData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOrionUserWidget_LogMessage* UOrionUserWidget_HUD::CreateLogMessageWidget(const struct FOrionHUDLogMessageData& MessageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OrionUI.OrionUserWidget_HUD.CreateLogMessageWidget");
		
		UOrionUserWidget_HUD_CreateLogMessageWidget_Params params {};
		params.MessageData = MessageData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionUserWidget_HUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionUserWidget_HUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionUserWidget_HUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOrionWindowControls.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrionWindowControls::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OrionUI.OrionWindowControls");
		return ptr;
	}

}


