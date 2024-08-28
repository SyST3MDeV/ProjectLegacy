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
	 * 		Name   -> Function BannerEditor_ItemPicker.BannerEditor_ItemPicker_C.BP_OnShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSkipAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBannerEditor_ItemPicker_C::BP_OnShow(bool bSkipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerEditor_ItemPicker.BannerEditor_ItemPicker_C.BP_OnShow");
		
		UBannerEditor_ItemPicker_C_BP_OnShow_Params params {};
		params.bSkipAnim = bSkipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BannerEditor_ItemPicker.BannerEditor_ItemPicker_C.BP_OnHide
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSkipAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBannerEditor_ItemPicker_C::BP_OnHide(bool bSkipAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerEditor_ItemPicker.BannerEditor_ItemPicker_C.BP_OnHide");
		
		UBannerEditor_ItemPicker_C_BP_OnHide_Params params {};
		params.bSkipAnim = bSkipAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BannerEditor_ItemPicker.BannerEditor_ItemPicker_C.ExecuteUbergraph_BannerEditor_ItemPicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBannerEditor_ItemPicker_C::ExecuteUbergraph_BannerEditor_ItemPicker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerEditor_ItemPicker.BannerEditor_ItemPicker_C.ExecuteUbergraph_BannerEditor_ItemPicker");
		
		UBannerEditor_ItemPicker_C_ExecuteUbergraph_BannerEditor_ItemPicker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBannerEditor_ItemPicker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBannerEditor_ItemPicker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BannerEditor_ItemPicker.BannerEditor_ItemPicker_C");
		return ptr;
	}

}


