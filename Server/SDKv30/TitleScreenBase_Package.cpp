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
	 * 		Name   -> Function TitleScreenBase.TitleScreenBase_C.NavigateBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenBase_C::NavigateBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenBase.TitleScreenBase_C.NavigateBack");
		
		UTitleScreenBase_C_NavigateBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function TitleScreenBase.TitleScreenBase_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInKeyEvent                                 MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		struct FReturnValue                                InKeyEvent                                                 (Parm)
	 */
	struct FCallFunc_GetKey_ReturnValue UTitleScreenBase_C::OnKeyDown(const struct FInKeyEvent& MyGeometry, const struct FReturnValue& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenBase.TitleScreenBase_C.OnKeyDown");
		
		UTitleScreenBase_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function TitleScreenBase.TitleScreenBase_C.NavigateScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTitleScreenBase_C::NavigateScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleScreenBase.TitleScreenBase_C.NavigateScreen");
		
		UTitleScreenBase_C_NavigateScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitleScreenBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitleScreenBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TitleScreenBase.TitleScreenBase_C");
		return ptr;
	}

}


