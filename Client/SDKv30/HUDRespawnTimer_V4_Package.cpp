/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDRespawnTimerV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.Construct");
		
		UHUDRespawnTimerV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.ShowWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDRespawnTimerV4_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.ShowWidget");
		
		UHUDRespawnTimerV4_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.HideWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHUDRespawnTimerV4_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.HideWidget");
		
		UHUDRespawnTimerV4_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.ExecuteUbergraph_HUDRespawnTimer-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDRespawnTimerV4_C::ExecuteUbergraph_HUDRespawnTimerV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDRespawnTimer-V4.HUDRespawnTimer-V4_C.ExecuteUbergraph_HUDRespawnTimer-V4");
		
		UHUDRespawnTimerV4_C_ExecuteUbergraph_HUDRespawnTimerV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDRespawnTimerV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDRespawnTimerV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDRespawnTimer_V4.HUDRespawnTimer-V4_C");
		return ptr;
	}

}


