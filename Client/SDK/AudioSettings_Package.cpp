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
	 * 		Name   -> Function AudioSettings.AudioSettings_C.PlayVoicePreviewSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAudioSettings_C::PlayVoicePreviewSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.PlayVoicePreviewSound");
		
		UAudioSettings_C_PlayVoicePreviewSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.FormatNumberForDisplay
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 * 		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAudioSettings_C::FormatNumberForDisplay(float Num, class FText* Text, float* Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.FormatNumberForDisplay");
		
		UAudioSettings_C_FormatNumberForDisplay_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (Float != nullptr)
			*Float = params.Float;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAudioSettings_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.Reset");
		
		UAudioSettings_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.Apply
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAudioSettings_C::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.Apply");
		
		UAudioSettings_C_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.Refresh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAudioSettings_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.Refresh");
		
		UAudioSettings_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAudioSettings_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.Destruct");
		
		UAudioSettings_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAudioSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.Construct");
		
		UAudioSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAudioSettings_C::BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAudioSettings_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.OnActivated");
		
		UAudioSettings_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAudioSettings_C::BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAudioSettings_C::BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAudioSettings_C::BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAudioSettings_C::BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature");
		
		UAudioSettings_C_BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AudioSettings.AudioSettings_C.ExecuteUbergraph_AudioSettings
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAudioSettings_C::ExecuteUbergraph_AudioSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSettings.AudioSettings_C.ExecuteUbergraph_AudioSettings");
		
		UAudioSettings_C_ExecuteUbergraph_AudioSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioSettings.AudioSettings_C");
		return ptr;
	}

}


