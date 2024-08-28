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
	 * 		Name   -> Function QuickChatTooltipWrapper.QuickChatTooltipWrapper_C.OnToggleChatOptions
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowChatOptions                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickChatTooltipWrapper_C::OnToggleChatOptions(bool bShowChatOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickChatTooltipWrapper.QuickChatTooltipWrapper_C.OnToggleChatOptions");
		
		UQuickChatTooltipWrapper_C_OnToggleChatOptions_Params params {};
		params.bShowChatOptions = bShowChatOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function QuickChatTooltipWrapper.QuickChatTooltipWrapper_C.ExecuteUbergraph_QuickChatTooltipWrapper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickChatTooltipWrapper_C::ExecuteUbergraph_QuickChatTooltipWrapper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickChatTooltipWrapper.QuickChatTooltipWrapper_C.ExecuteUbergraph_QuickChatTooltipWrapper");
		
		UQuickChatTooltipWrapper_C_ExecuteUbergraph_QuickChatTooltipWrapper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickChatTooltipWrapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickChatTooltipWrapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickChatTooltipWrapper.QuickChatTooltipWrapper_C");
		return ptr;
	}

}


