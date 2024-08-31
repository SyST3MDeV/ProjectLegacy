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
	 * 		Name   -> Function ComponentInventory.ComponentInventory_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UComponentInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentInventory.ComponentInventory_C.Construct");
		
		UComponentInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ComponentInventory.ComponentInventory_C.BndEvt__Button_Show_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UComponentInventory_C::BndEvt__Button_Show_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentInventory.ComponentInventory_C.BndEvt__Button_Show_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature");
		
		UComponentInventory_C_BndEvt__Button_Show_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ComponentInventory.ComponentInventory_C.BndEvt__Button_Show_K2Node_ComponentBoundEvent_171_OrionSelectedStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UComponentInventory_C::BndEvt__Button_Show_K2Node_ComponentBoundEvent_171_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentInventory.ComponentInventory_C.BndEvt__Button_Show_K2Node_ComponentBoundEvent_171_OrionSelectedStateChanged__DelegateSignature");
		
		UComponentInventory_C_BndEvt__Button_Show_K2Node_ComponentBoundEvent_171_OrionSelectedStateChanged__DelegateSignature_Params params {};
		params.Button = Button;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ComponentInventory.ComponentInventory_C.ExecuteUbergraph_ComponentInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UComponentInventory_C::ExecuteUbergraph_ComponentInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentInventory.ComponentInventory_C.ExecuteUbergraph_ComponentInventory");
		
		UComponentInventory_C_ExecuteUbergraph_ComponentInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComponentInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComponentInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ComponentInventory.ComponentInventory_C");
		return ptr;
	}

}


