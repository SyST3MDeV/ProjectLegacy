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
	 * 		Name   -> Function PreGameLoadingScreen.PreGameLoadingScreen_C.UpdateMidScreenInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPreGameLoadingScreen_C::UpdateMidScreenInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreGameLoadingScreen.PreGameLoadingScreen_C.UpdateMidScreenInfo");
		
		UPreGameLoadingScreen_C_UpdateMidScreenInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PreGameLoadingScreen.PreGameLoadingScreen_C.UpdateLoadingScreenImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPreGameLoadingScreen_C::UpdateLoadingScreenImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreGameLoadingScreen.PreGameLoadingScreen_C.UpdateLoadingScreenImage");
		
		UPreGameLoadingScreen_C_UpdateLoadingScreenImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PreGameLoadingScreen.PreGameLoadingScreen_C.Update Loading Screen Tip
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPreGameLoadingScreen_C::UpdateLoadingScreenTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreGameLoadingScreen.PreGameLoadingScreen_C.Update Loading Screen Tip");
		
		UPreGameLoadingScreen_C_UpdateLoadingScreenTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PreGameLoadingScreen.PreGameLoadingScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPreGameLoadingScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreGameLoadingScreen.PreGameLoadingScreen_C.Construct");
		
		UPreGameLoadingScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PreGameLoadingScreen.PreGameLoadingScreen_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LoadingPercent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPreGameLoadingScreen_C::CustomEvent_1(float LoadingPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreGameLoadingScreen.PreGameLoadingScreen_C.CustomEvent_1");
		
		UPreGameLoadingScreen_C_CustomEvent_1_Params params {};
		params.LoadingPercent = LoadingPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function PreGameLoadingScreen.PreGameLoadingScreen_C.ExecuteUbergraph_PreGameLoadingScreen
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPreGameLoadingScreen_C::ExecuteUbergraph_PreGameLoadingScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreGameLoadingScreen.PreGameLoadingScreen_C.ExecuteUbergraph_PreGameLoadingScreen");
		
		UPreGameLoadingScreen_C_ExecuteUbergraph_PreGameLoadingScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreGameLoadingScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreGameLoadingScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PreGameLoadingScreen.PreGameLoadingScreen_C");
		return ptr;
	}

}


