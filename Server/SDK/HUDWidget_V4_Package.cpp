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
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.MapModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLargeMap                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidgetV4_C::MapModeChanged(bool bIsLargeMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.MapModeChanged");
		
		UHUDWidgetV4_C_MapModeChanged_Params params {};
		params.bIsLargeMap = bIsLargeMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.Construct");
		
		UHUDWidgetV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.UpdateFPSAndPingSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::UpdateFPSAndPingSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.UpdateFPSAndPingSettings");
		
		UHUDWidgetV4_C_UpdateFPSAndPingSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.OnMatchEnd_BlueprintEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::OnMatchEnd_BlueprintEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.OnMatchEnd_BlueprintEvent");
		
		UHUDWidgetV4_C_OnMatchEnd_BlueprintEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.OnShowKillCam_BlueprintEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::OnShowKillCam_BlueprintEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.OnShowKillCam_BlueprintEvent");
		
		UHUDWidgetV4_C_OnShowKillCam_BlueprintEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.OnHideKillCam_BlueprintEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::OnHideKillCam_BlueprintEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.OnHideKillCam_BlueprintEvent");
		
		UHUDWidgetV4_C_OnHideKillCam_BlueprintEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.OnFadeHUDOut_BlueprintEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::OnFadeHUDOut_BlueprintEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.OnFadeHUDOut_BlueprintEvent");
		
		UHUDWidgetV4_C_OnFadeHUDOut_BlueprintEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.OnFadeHUDIn_BlueprintEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDWidgetV4_C::OnFadeHUDIn_BlueprintEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.OnFadeHUDIn_BlueprintEvent");
		
		UHUDWidgetV4_C_OnFadeHUDIn_BlueprintEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidgetV4_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.OnAnimationFinished");
		
		UHUDWidgetV4_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.TutorialTest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TutorialIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidgetV4_C::TutorialTest(int32_t TutorialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.TutorialTest");
		
		UHUDWidgetV4_C_TutorialTest_Params params {};
		params.TutorialIndex = TutorialIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDWidget-V4.HUDWidget-V4_C.ExecuteUbergraph_HUDWidget-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidgetV4_C::ExecuteUbergraph_HUDWidgetV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget-V4.HUDWidget-V4_C.ExecuteUbergraph_HUDWidget-V4");
		
		UHUDWidgetV4_C_ExecuteUbergraph_HUDWidgetV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDWidgetV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDWidgetV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDWidget_V4.HUDWidget-V4_C");
		return ptr;
	}

}


