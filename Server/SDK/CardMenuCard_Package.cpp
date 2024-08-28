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
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardMenuCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.Construct");
		
		UCardMenuCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.OnStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EOrionCardMenuCardState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EOrionCardMenuCardState                            OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuCard_C::OnStateChanged(EOrionCardMenuCardState NewState, EOrionCardMenuCardState OldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.OnStateChanged");
		
		UCardMenuCard_C_OnStateChanged_Params params {};
		params.NewState = NewState;
		params.OldState = OldState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCardMenuCard_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.OnMouseLeave");
		
		UCardMenuCard_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCardMenuCard_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.OnMouseEnter");
		
		UCardMenuCard_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.Reset Animations
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCardMenuCard_C::ResetAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.Reset Animations");
		
		UCardMenuCard_C_ResetAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.BP_ShowActionPompt
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuCard_C::BP_ShowActionPompt(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.BP_ShowActionPompt");
		
		UCardMenuCard_C_BP_ShowActionPompt_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.BP_ChangeRecentlyUnlocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsRecentlyUnlocked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuCard_C::BP_ChangeRecentlyUnlocked(bool bIsRecentlyUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.BP_ChangeRecentlyUnlocked");
		
		UCardMenuCard_C_BP_ChangeRecentlyUnlocked_Params params {};
		params.bIsRecentlyUnlocked = bIsRecentlyUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.BP_Reset
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCardMenuCard_C::BP_Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.BP_Reset");
		
		UCardMenuCard_C_BP_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardMenuCard.CardMenuCard_C.ExecuteUbergraph_CardMenuCard
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardMenuCard_C::ExecuteUbergraph_CardMenuCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardMenuCard.CardMenuCard_C.ExecuteUbergraph_CardMenuCard");
		
		UCardMenuCard_C_ExecuteUbergraph_CardMenuCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardMenuCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardMenuCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardMenuCard.CardMenuCard_C");
		return ptr;
	}

}


