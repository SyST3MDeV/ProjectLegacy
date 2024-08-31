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
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Get_OrionTextPlayerName_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText ULocalPlayerInfoCard_C::Get_OrionTextPlayerName_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Get_OrionTextPlayerName_Text_1");
		
		ULocalPlayerInfoCard_C_Get_OrionTextPlayerName_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.HandleProfileStatsUpdated
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ULocalPlayerInfoCard_C::HandleProfileStatsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.HandleProfileStatsUpdated");
		
		ULocalPlayerInfoCard_C_HandleProfileStatsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.HandlePartyChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULocalPlayerInfoCard_C::HandlePartyChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.HandlePartyChanged");
		
		ULocalPlayerInfoCard_C_HandlePartyChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Close Context Menu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULocalPlayerInfoCard_C::CloseContextMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Close Context Menu");
		
		ULocalPlayerInfoCard_C_CloseContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.GetMemberContextMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* ULocalPlayerInfoCard_C::GetMemberContextMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.GetMemberContextMenu");
		
		ULocalPlayerInfoCard_C_GetMemberContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULocalPlayerInfoCard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.Construct");
		
		ULocalPlayerInfoCard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.BndEvt__[Menu] Actions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULocalPlayerInfoCard_C::BndEvt__MenuActions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.BndEvt__[Menu] Actions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature");
		
		ULocalPlayerInfoCard_C_BndEvt__MenuActions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.BP_OnClicked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ULocalPlayerInfoCard_C::BP_OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.BP_OnClicked");
		
		ULocalPlayerInfoCard_C_BP_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.ExecuteUbergraph_LocalPlayerInfoCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULocalPlayerInfoCard_C::ExecuteUbergraph_LocalPlayerInfoCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocalPlayerInfoCard.LocalPlayerInfoCard_C.ExecuteUbergraph_LocalPlayerInfoCard");
		
		ULocalPlayerInfoCard_C_ExecuteUbergraph_LocalPlayerInfoCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalPlayerInfoCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalPlayerInfoCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocalPlayerInfoCard.LocalPlayerInfoCard_C");
		return ptr;
	}

}


