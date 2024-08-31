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
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.Update Dye Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlot_Banner_C::UpdateDyeVisibility(int32_t SlotCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.Update Dye Visibility");
		
		USlot_Banner_C_UpdateDyeVisibility_Params params {};
		params.SlotCount = SlotCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USlot_Banner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.Construct");
		
		USlot_Banner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.BP_OnItemSet
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionSlotDisplayInfo                       ItemInfo                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void USlot_Banner_C::BP_OnItemSet(const struct FOrionSlotDisplayInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.BP_OnItemSet");
		
		USlot_Banner_C_BP_OnItemSet_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void USlot_Banner_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.OnMouseEnter");
		
		USlot_Banner_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void USlot_Banner_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.OnMouseLeave");
		
		USlot_Banner_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.BP_OnSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlot_Banner_C::BP_OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.BP_OnSelectionChanged");
		
		USlot_Banner_C_BP_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.BP_FinishLoadingDye
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DyeSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  Dye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlot_Banner_C::BP_FinishLoadingDye(int32_t DyeSlot, class UTexture2D* Dye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.BP_FinishLoadingDye");
		
		USlot_Banner_C_BP_FinishLoadingDye_Params params {};
		params.DyeSlot = DyeSlot;
		params.Dye = Dye;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.BP_OnReset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USlot_Banner_C::BP_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.BP_OnReset");
		
		USlot_Banner_C_BP_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Slot_Banner.Slot_Banner_C.ExecuteUbergraph_Slot_Banner
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlot_Banner_C::ExecuteUbergraph_Slot_Banner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Slot_Banner.Slot_Banner_C.ExecuteUbergraph_Slot_Banner");
		
		USlot_Banner_C_ExecuteUbergraph_Slot_Banner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlot_Banner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlot_Banner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Slot_Banner.Slot_Banner_C");
		return ptr;
	}

}


