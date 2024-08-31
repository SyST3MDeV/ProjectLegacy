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
	 * 		Name   -> Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Card_StasisGemActivate_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.UserConstructionScript");
		
		AGC_Card_StasisGemActivate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.K2_WhileActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    LoopingParticleSystem                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystem                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Card_StasisGemActivate_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.K2_WhileActive");
		
		AGC_Card_StasisGemActivate_C_K2_WhileActive_Params params {};
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
	 * 		Name   -> Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.K2_OnRemove
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    RemovalParticleSystem                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Card_StasisGemActivate_C::K2_OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* RemovalParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.K2_OnRemove");
		
		AGC_Card_StasisGemActivate_C_K2_OnRemove_Params params {};
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
	 * 		Name   -> Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.ExecuteUbergraph_GC_Card_StasisGemActivate
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Card_StasisGemActivate_C::ExecuteUbergraph_GC_Card_StasisGemActivate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C.ExecuteUbergraph_GC_Card_StasisGemActivate");
		
		AGC_Card_StasisGemActivate_C_ExecuteUbergraph_GC_Card_StasisGemActivate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Card_StasisGemActivate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Card_StasisGemActivate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_StasisGemActivate.GC_Card_StasisGemActivate_C");
		return ptr;
	}

}


