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
	 * 		Name   -> Function DeathCamWidget.DeathCamWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDeathCamWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeathCamWidget.DeathCamWidget_C.Construct");
		
		UDeathCamWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeathCamWidget.DeathCamWidget_C.HandleInputMethodChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingAnalog                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeathCamWidget_C::HandleInputMethodChanged(bool UsingAnalog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeathCamWidget.DeathCamWidget_C.HandleInputMethodChanged");
		
		UDeathCamWidget_C_HandleInputMethodChanged_Params params {};
		params.UsingAnalog = UsingAnalog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DeathCamWidget.DeathCamWidget_C.ExecuteUbergraph_DeathCamWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDeathCamWidget_C::ExecuteUbergraph_DeathCamWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DeathCamWidget.DeathCamWidget_C.ExecuteUbergraph_DeathCamWidget");
		
		UDeathCamWidget_C_ExecuteUbergraph_DeathCamWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeathCamWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeathCamWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeathCamWidget.DeathCamWidget_C");
		return ptr;
	}

}


