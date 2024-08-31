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
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.GetData
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UObject* UHeroStatRow_C::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.GetData");
		
		UHeroStatRow_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.UpdateStatValues
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UHeroStatRow_C::UpdateStatValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.UpdateStatValues");
		
		UHeroStatRow_C_UpdateStatValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UHeroStatRow_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.Initialize");
		
		UHeroStatRow_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.RegisterOnClicked
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UHeroStatRow_C::RegisterOnClicked(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.RegisterOnClicked");
		
		UHeroStatRow_C_RegisterOnClicked_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.RegisterOnHover
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UHeroStatRow_C::RegisterOnHover(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.RegisterOnHover");
		
		UHeroStatRow_C_RegisterOnHover_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.RegisterOnSelected
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UHeroStatRow_C::RegisterOnSelected(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.RegisterOnSelected");
		
		UHeroStatRow_C_RegisterOnSelected_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.RegisterOnUnhover
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UHeroStatRow_C::RegisterOnUnhover(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.RegisterOnUnhover");
		
		UHeroStatRow_C_RegisterOnUnhover_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.Reset
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UHeroStatRow_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.Reset");
		
		UHeroStatRow_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.SetRowColumn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Row                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Column                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroStatRow_C::SetRowColumn(int32_t Row, int32_t Column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.SetRowColumn");
		
		UHeroStatRow_C_SetRowColumn_Params params {};
		params.Row = Row;
		params.Column = Column;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.SetData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     SourceData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroStatRow_C::SetData(class UObject* SourceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.SetData");
		
		UHeroStatRow_C_SetData_Params params {};
		params.SourceData = SourceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroStatRow.HeroStatRow_C.ExecuteUbergraph_HeroStatRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroStatRow_C::ExecuteUbergraph_HeroStatRow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroStatRow.HeroStatRow_C.ExecuteUbergraph_HeroStatRow");
		
		UHeroStatRow_C_ExecuteUbergraph_HeroStatRow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroStatRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroStatRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroStatRow.HeroStatRow_C");
		return ptr;
	}

}


