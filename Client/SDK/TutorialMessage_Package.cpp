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
	 * 		Name   -> Function TutorialMessage.TutorialMessage_C.BndEvt__Appear_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTutorialMessage_C::BndEvt__Appear_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialMessage.TutorialMessage_C.BndEvt__Appear_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UTutorialMessage_C_BndEvt__Appear_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TutorialMessage.TutorialMessage_C.BndEvt__Appear_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTutorialMessage_C::BndEvt__Appear_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialMessage.TutorialMessage_C.BndEvt__Appear_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");
		
		UTutorialMessage_C_BndEvt__Appear_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TutorialMessage.TutorialMessage_C.OnShowNewStage
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorialMessage_C::OnShowNewStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialMessage.TutorialMessage_C.OnShowNewStage");
		
		UTutorialMessage_C_OnShowNewStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TutorialMessage.TutorialMessage_C.ExecuteUbergraph_TutorialMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialMessage_C::ExecuteUbergraph_TutorialMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialMessage.TutorialMessage_C.ExecuteUbergraph_TutorialMessage");
		
		UTutorialMessage_C_ExecuteUbergraph_TutorialMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialMessage.TutorialMessage_C");
		return ptr;
	}

}


