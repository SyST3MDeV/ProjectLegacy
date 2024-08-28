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
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectatorViewOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.Construct");
		
		USpectatorViewOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.OnSetButtonSelectedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionUserWidgetBase*                        Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::OnSetButtonSelectedEvent(class UOrionUserWidgetBase* Button, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.OnSetButtonSelectedEvent");
		
		USpectatorViewOptions_C_OnSetButtonSelectedEvent_Params params {};
		params.Button = Button;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.OnSpectatorCameraModeChangeEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESpectatorCameraType                               NewCameraMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::OnSpectatorCameraModeChangeEvent(ESpectatorCameraType NewCameraMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.OnSpectatorCameraModeChangeEvent");
		
		USpectatorViewOptions_C_OnSpectatorCameraModeChangeEvent_Params params {};
		params.NewCameraMode = NewCameraMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectatorViewOptions_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.Destruct");
		
		USpectatorViewOptions_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_On Clicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UToggleButton_C*                             Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature(class UToggleButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_On Clicked__DelegateSignature");
		
		USpectatorViewOptions_C_BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpectatorViewOptions.SpectatorViewOptions_C.ExecuteUbergraph_SpectatorViewOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorViewOptions_C::ExecuteUbergraph_SpectatorViewOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorViewOptions.SpectatorViewOptions_C.ExecuteUbergraph_SpectatorViewOptions");
		
		USpectatorViewOptions_C_ExecuteUbergraph_SpectatorViewOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorViewOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorViewOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorViewOptions.SpectatorViewOptions_C");
		return ptr;
	}

}


