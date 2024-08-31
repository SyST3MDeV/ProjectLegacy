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
	 * 		Name   -> Function HUDAlertPresenter.HUDAlertPresenter_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDAlertPresenter_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDAlertPresenter.HUDAlertPresenter_C.Construct");
		
		UHUDAlertPresenter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HUDAlertPresenter.HUDAlertPresenter_C.ExecuteUbergraph_HUDAlertPresenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDAlertPresenter_C::ExecuteUbergraph_HUDAlertPresenter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDAlertPresenter.HUDAlertPresenter_C.ExecuteUbergraph_HUDAlertPresenter");
		
		UHUDAlertPresenter_C_ExecuteUbergraph_HUDAlertPresenter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDAlertPresenter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDAlertPresenter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDAlertPresenter.HUDAlertPresenter_C");
		return ptr;
	}

}


