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
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.IsInteractable
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBuildGuide_Pip_C::IsInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.IsInteractable");
		
		UBuildGuide_Pip_C_IsInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBuildGuide_Pip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.Construct");
		
		UBuildGuide_Pip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnHighlighted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHighlighted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuildGuide_Pip_C::BP_OnHighlighted(bool bHighlighted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnHighlighted");
		
		UBuildGuide_Pip_C_BP_OnHighlighted_Params params {};
		params.bHighlighted = bHighlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuildGuide_Pip_C::BP_OnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnSelected");
		
		UBuildGuide_Pip_C_BP_OnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnInfoChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCardBuildGuideInfo                         Info                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBuildGuide_Pip_C::BP_OnInfoChanged(const struct FCardBuildGuideInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnInfoChanged");
		
		UBuildGuide_Pip_C_BP_OnInfoChanged_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnConsumedChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsConsumed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuildGuide_Pip_C::BP_OnConsumedChanged(bool bIsConsumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.BP_OnConsumedChanged");
		
		UBuildGuide_Pip_C_BP_OnConsumedChanged_Params params {};
		params.bIsConsumed = bIsConsumed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BuildGuide_Pip.BuildGuide_Pip_C.ExecuteUbergraph_BuildGuide_Pip
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBuildGuide_Pip_C::ExecuteUbergraph_BuildGuide_Pip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildGuide_Pip.BuildGuide_Pip_C.ExecuteUbergraph_BuildGuide_Pip");
		
		UBuildGuide_Pip_C_ExecuteUbergraph_BuildGuide_Pip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuildGuide_Pip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildGuide_Pip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuildGuide_Pip.BuildGuide_Pip_C");
		return ptr;
	}

}


