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
	 * 		Name   -> Function VideoSettings.VideoSettings_C.WindowModeToIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWindowMode                                        WindowMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::WindowModeToIndex(EWindowMode WindowMode, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.WindowModeToIndex");
		
		UVideoSettings_C_WindowModeToIndex_Params params {};
		params.WindowMode = WindowMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.HandleOneResolution
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::HandleOneResolution(int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.HandleOneResolution");
		
		UVideoSettings_C_HandleOneResolution_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.RefreshRenderScale
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::RefreshRenderScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.RefreshRenderScale");
		
		UVideoSettings_C_RefreshRenderScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.Apply
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.Apply");
		
		UVideoSettings_C_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.Reset");
		
		UVideoSettings_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.GenerateResolutionOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Item                                                       (Parm, ZeroConstructor)
	 */
	class UWidget* UVideoSettings_C::GenerateResolutionOption(const class FString& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.GenerateResolutionOption");
		
		UVideoSettings_C_GenerateResolutionOption_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.FrameRateToIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              FPSLimit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FPSLimitIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::FrameRateToIndex(float FPSLimit, int32_t* FPSLimitIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.FrameRateToIndex");
		
		UVideoSettings_C_FrameRateToIndex_Params params {};
		params.FPSLimit = FPSLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FPSLimitIndex != nullptr)
			*FPSLimitIndex = params.FPSLimitIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.Refresh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.Refresh");
		
		UVideoSettings_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.OnTimedOut_FEC7EC3548374E37011E3A929232AC00
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::OnTimedOut_FEC7EC3548374E37011E3A929232AC00()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.OnTimedOut_FEC7EC3548374E37011E3A929232AC00");
		
		UVideoSettings_C_OnTimedOut_FEC7EC3548374E37011E3A929232AC00_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.OnKilled_FEC7EC3548374E37011E3A929232AC00
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::OnKilled_FEC7EC3548374E37011E3A929232AC00()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.OnKilled_FEC7EC3548374E37011E3A929232AC00");
		
		UVideoSettings_C_OnKilled_FEC7EC3548374E37011E3A929232AC00_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.OnDeclined_FEC7EC3548374E37011E3A929232AC00
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::OnDeclined_FEC7EC3548374E37011E3A929232AC00()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.OnDeclined_FEC7EC3548374E37011E3A929232AC00");
		
		UVideoSettings_C_OnDeclined_FEC7EC3548374E37011E3A929232AC00_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.OnConfirmed_FEC7EC3548374E37011E3A929232AC00
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::OnConfirmed_FEC7EC3548374E37011E3A929232AC00()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.OnConfirmed_FEC7EC3548374E37011E3A929232AC00");
		
		UVideoSettings_C_OnConfirmed_FEC7EC3548374E37011E3A929232AC00_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UVideoSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.Construct");
		
		UVideoSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] Window Mode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionWindowMode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] Window Mode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionWindowMode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] FPS Limit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionFPSLimit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] FPS Limit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionFPSLimit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] VSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionVSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] VSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionVSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] Overall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionOverall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] Overall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionOverall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] View Distance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionViewDistance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] View Distance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionViewDistance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] Shadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionShadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] Shadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionShadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] AA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionAA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] AA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionAA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] Textures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionTextures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] Textures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionTextures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] FX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionFX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] FX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionFX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Option] Post-Process_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionPostProcess_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Option] Post-Process_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionPostProcess_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UVideoSettings_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.OnActivated");
		
		UVideoSettings_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UVideoSettings_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.Destruct");
		
		UVideoSettings_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Slider] Resolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__SliderResolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Slider] Resolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature");
		
		UVideoSettings_C_BndEvt__SliderResolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__[Combo Box] Resolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (Parm, ZeroConstructor)
	 * 		ESelectInfo                                        SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__ComboBoxResolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__[Combo Box] Resolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature");
		
		UVideoSettings_C_BndEvt__ComboBoxResolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.ApplySettingsCE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::ApplySettingsCE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.ApplySettingsCE");
		
		UVideoSettings_C_ApplySettingsCE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.RunVideoBenchmark
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVideoSettings_C::RunVideoBenchmark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.RunVideoBenchmark");
		
		UVideoSettings_C_RunVideoBenchmark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature");
		
		UVideoSettings_C_BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function VideoSettings.VideoSettings_C.ExecuteUbergraph_VideoSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVideoSettings_C::ExecuteUbergraph_VideoSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VideoSettings.VideoSettings_C.ExecuteUbergraph_VideoSettings");
		
		UVideoSettings_C_ExecuteUbergraph_VideoSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVideoSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideoSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VideoSettings.VideoSettings_C");
		return ptr;
	}

}


