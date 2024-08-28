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
	 * 		Name   -> Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UShowFriendCodesSelection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.Construct");
		
		UShowFriendCodesSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_41_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShowFriendCodesSelection_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_41_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_41_OrionBaseButtonClicked__DelegateSignature");
		
		UShowFriendCodesSelection_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_41_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.ExecuteUbergraph_ShowFriendCodesSelection
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShowFriendCodesSelection_C::ExecuteUbergraph_ShowFriendCodesSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowFriendCodesSelection.ShowFriendCodesSelection_C.ExecuteUbergraph_ShowFriendCodesSelection");
		
		UShowFriendCodesSelection_C_ExecuteUbergraph_ShowFriendCodesSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShowFriendCodesSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShowFriendCodesSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShowFriendCodesSelection.ShowFriendCodesSelection_C");
		return ptr;
	}

}


