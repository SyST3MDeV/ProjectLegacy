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
	 * 		Name   -> Function MuteMenuRow.MuteMenuRow_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_49_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMuteMenuRow_C::BndEvt__MuteButton_K2Node_ComponentBoundEvent_49_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuRow.MuteMenuRow_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_49_OrionBaseButtonClicked__DelegateSignature");
		
		UMuteMenuRow_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_49_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function MuteMenuRow.MuteMenuRow_C.ExecuteUbergraph_MuteMenuRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMuteMenuRow_C::ExecuteUbergraph_MuteMenuRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MuteMenuRow.MuteMenuRow_C.ExecuteUbergraph_MuteMenuRow");
		
		UMuteMenuRow_C_ExecuteUbergraph_MuteMenuRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMuteMenuRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMuteMenuRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MuteMenuRow.MuteMenuRow_C");
		return ptr;
	}

}


