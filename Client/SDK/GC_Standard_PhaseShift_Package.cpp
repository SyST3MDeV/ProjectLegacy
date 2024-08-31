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
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.UserConstructionScript");
		
		AGC_Standard_PhaseShift_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeIn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::FadeIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeIn__FinishedFunc");
		
		AGC_Standard_PhaseShift_C_FadeIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeIn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::FadeIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeIn__UpdateFunc");
		
		AGC_Standard_PhaseShift_C_FadeIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::FadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOut__FinishedFunc");
		
		AGC_Standard_PhaseShift_C_FadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::FadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOut__UpdateFunc");
		
		AGC_Standard_PhaseShift_C_FadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.K2_WhileActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    LoopingParticleSystem                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystem                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Standard_PhaseShift_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.K2_WhileActive");
		
		AGC_Standard_PhaseShift_C_K2_WhileActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		params.LoopingParticleSystem = LoopingParticleSystem;
		params.AdditionalParticleSystem = AdditionalParticleSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.K2_OnRemove
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    RemovalParticleSystem                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Standard_PhaseShift_C::K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.K2_OnRemove");
		
		AGC_Standard_PhaseShift_C_K2_OnRemove_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		params.RemovalParticleSystem = RemovalParticleSystem;
		params.AdditionalParticleSystems = AdditionalParticleSystems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeInMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::FadeInMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeInMaterial");
		
		AGC_Standard_PhaseShift_C_FadeInMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOutMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Standard_PhaseShift_C::FadeOutMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.FadeOutMaterial");
		
		AGC_Standard_PhaseShift_C_FadeOutMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.ExecuteUbergraph_GC_Standard_PhaseShift
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Standard_PhaseShift_C::ExecuteUbergraph_GC_Standard_PhaseShift(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Standard_PhaseShift.GC_Standard_PhaseShift_C.ExecuteUbergraph_GC_Standard_PhaseShift");
		
		AGC_Standard_PhaseShift_C_ExecuteUbergraph_GC_Standard_PhaseShift_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Standard_PhaseShift_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Standard_PhaseShift_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Standard_PhaseShift.GC_Standard_PhaseShift_C");
		return ptr;
	}

}


