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
	 * 		Name   -> Function LightBox.LightBox_C.OnContentActivationChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActivated                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULightBox_C::OnContentActivationChanged(bool bActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.OnContentActivationChanged");
		
		ULightBox_C_OnContentActivationChanged_Params params {};
		params.bActivated = bActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function LightBox.LightBox_C.ExecuteUbergraph_LightBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULightBox_C::ExecuteUbergraph_LightBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.ExecuteUbergraph_LightBox");
		
		ULightBox_C_ExecuteUbergraph_LightBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LightBox.LightBox_C");
		return ptr;
	}

}


