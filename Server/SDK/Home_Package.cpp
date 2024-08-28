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
	 * 		Name   -> Function Home.Home_C.OnHandleBackAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UHome_C::OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnHandleBackAction");
		
		UHome_C_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHome_C::OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18");
		
		UHome_C_OnTimedOut_9B73DB17499BD4294FA6BCA78A58FA18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.OnKilled_9B73DB17499BD4294FA6BCA78A58FA18
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHome_C::OnKilled_9B73DB17499BD4294FA6BCA78A58FA18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnKilled_9B73DB17499BD4294FA6BCA78A58FA18");
		
		UHome_C_OnKilled_9B73DB17499BD4294FA6BCA78A58FA18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHome_C::OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18");
		
		UHome_C_OnDeclined_9B73DB17499BD4294FA6BCA78A58FA18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHome_C::OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18");
		
		UHome_C_OnConfirmed_9B73DB17499BD4294FA6BCA78A58FA18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHome_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.Construct");
		
		UHome_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHome_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnActivated");
		
		UHome_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHome_C::BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature");
		
		UHome_C_BndEvt__HomePlayButton_122_K2Node_ComponentBoundEvent_64_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHome_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.OnDeactivated");
		
		UHome_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHome_C::BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature");
		
		UHome_C_BndEvt__CraftIterationButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHome_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.PreConstruct");
		
		UHome_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Home.Home_C.ExecuteUbergraph_Home
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHome_C::ExecuteUbergraph_Home(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Home.Home_C.ExecuteUbergraph_Home");
		
		UHome_C_ExecuteUbergraph_Home_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHome_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHome_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Home.Home_C");
		return ptr;
	}

}


