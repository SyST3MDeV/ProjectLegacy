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
	 * 		Name   -> Function TabList.TabList_C.ClearCallToAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTabList_C::ClearCallToAction(const class FName& TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TabList.TabList_C.ClearCallToAction");
		
		UTabList_C_ClearCallToAction_Params params {};
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TabList.TabList_C.SetCallToAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Tooltip                                                    (Parm)
	 */
	void UTabList_C::SetCallToAction(const class FName& TabId, const class FText& Tooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TabList.TabList_C.SetCallToAction");
		
		UTabList_C_SetCallToAction_Params params {};
		params.TabId = TabId;
		params.Tooltip = Tooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TabList.TabList_C.OnCreateNewTab
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UOrionBaseButton* UTabList_C::OnCreateNewTab(const class FText& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TabList.TabList_C.OnCreateNewTab");
		
		UTabList_C_OnCreateNewTab_Params params {};
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TabList.TabList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTabList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TabList.TabList_C.PreConstruct");
		
		UTabList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function TabList.TabList_C.ExecuteUbergraph_TabList
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTabList_C::ExecuteUbergraph_TabList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TabList.TabList_C.ExecuteUbergraph_TabList");
		
		UTabList_C_ExecuteUbergraph_TabList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTabList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTabList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabList.TabList_C");
		return ptr;
	}

}


