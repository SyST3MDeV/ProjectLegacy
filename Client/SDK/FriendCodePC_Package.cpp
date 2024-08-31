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
	 * 		Name   -> Function FriendCodePC.FriendCodePC_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFriendCodePC_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.Construct");
		
		UFriendCodePC_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodePC.FriendCodePC_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodePC_C::BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature");
		
		UFriendCodePC_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFriendCodePC_C::ExecuteUbergraph_FriendCodePC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC");
		
		UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFriendCodePC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendCodePC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendCodePC.FriendCodePC_C");
		return ptr;
	}

}


