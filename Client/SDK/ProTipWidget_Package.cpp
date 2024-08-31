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
	 * 		Name   -> Function ProTipWidget.ProTipWidget_C.OnPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDAlertAsset*                              InAlertToShow                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProTipWidget_C::OnPlay(class UHUDAlertAsset* InAlertToShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProTipWidget.ProTipWidget_C.OnPlay");
		
		UProTipWidget_C_OnPlay_Params params {};
		params.InAlertToShow = InAlertToShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ProTipWidget.ProTipWidget_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProTipWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProTipWidget.ProTipWidget_C.OnAnimationFinished");
		
		UProTipWidget_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ProTipWidget.ProTipWidget_C.ExecuteUbergraph_ProTipWidget
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProTipWidget_C::ExecuteUbergraph_ProTipWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProTipWidget.ProTipWidget_C.ExecuteUbergraph_ProTipWidget");
		
		UProTipWidget_C_ExecuteUbergraph_ProTipWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProTipWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProTipWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProTipWidget.ProTipWidget_C");
		return ptr;
	}

}


