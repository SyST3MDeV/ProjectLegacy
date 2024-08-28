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
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.OnRemove
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool AGC_Standard_Cleanse_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.OnRemove");
		
		AGC_Standard_Cleanse_C_OnRemove_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.WhileActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool AGC_Standard_Cleanse_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.WhileActive");
		
		AGC_Standard_Cleanse_C_WhileActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.UserConstructionScript");
		
		AGC_Standard_Cleanse_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.Fadeon__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::Fadeon__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.Fadeon__FinishedFunc");
		
		AGC_Standard_Cleanse_C_Fadeon__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.Fadeon__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::Fadeon__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.Fadeon__UpdateFunc");
		
		AGC_Standard_Cleanse_C_Fadeon__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::FadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOut__FinishedFunc");
		
		AGC_Standard_Cleanse_C_FadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::FadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOut__UpdateFunc");
		
		AGC_Standard_Cleanse_C_FadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeInMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::FadeInMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeInMaterial");
		
		AGC_Standard_Cleanse_C_FadeInMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOutMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Standard_Cleanse_C::FadeOutMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.FadeOutMaterial");
		
		AGC_Standard_Cleanse_C_FadeOutMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.ExecuteUbergraph_GC_Standard_Cleanse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Standard_Cleanse_C::ExecuteUbergraph_GC_Standard_Cleanse(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_Cleanse.GC_Standard_Cleanse_C.ExecuteUbergraph_GC_Standard_Cleanse");
		
		AGC_Standard_Cleanse_C_ExecuteUbergraph_GC_Standard_Cleanse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Standard_Cleanse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Standard_Cleanse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Standard_Cleanse.GC_Standard_Cleanse_C");
		return ptr;
	}

}


