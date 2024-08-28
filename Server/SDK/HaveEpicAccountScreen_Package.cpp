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
	 * 		Name   -> Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_483_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHaveEpicAccountScreen_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_483_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_483_OrionBaseButtonClicked__DelegateSignature");
		
		UHaveEpicAccountScreen_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_483_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_506_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHaveEpicAccountScreen_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_506_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_506_OrionBaseButtonClicked__DelegateSignature");
		
		UHaveEpicAccountScreen_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_506_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHaveEpicAccountScreen_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.NavigateBack");
		
		UHaveEpicAccountScreen_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.BndEvt__SignUpButton_K2Node_ComponentBoundEvent_131_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHaveEpicAccountScreen_C::BndEvt__SignUpButton_K2Node_ComponentBoundEvent_131_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.BndEvt__SignUpButton_K2Node_ComponentBoundEvent_131_OrionBaseButtonClicked__DelegateSignature");
		
		UHaveEpicAccountScreen_C_BndEvt__SignUpButton_K2Node_ComponentBoundEvent_131_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.ExecuteUbergraph_HaveEpicAccountScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHaveEpicAccountScreen_C::ExecuteUbergraph_HaveEpicAccountScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HaveEpicAccountScreen.HaveEpicAccountScreen_C.ExecuteUbergraph_HaveEpicAccountScreen");
		
		UHaveEpicAccountScreen_C_ExecuteUbergraph_HaveEpicAccountScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHaveEpicAccountScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHaveEpicAccountScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HaveEpicAccountScreen.HaveEpicAccountScreen_C");
		return ptr;
	}

}


