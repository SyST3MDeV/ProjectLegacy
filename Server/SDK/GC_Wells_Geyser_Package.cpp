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
	 * 		Name   -> Function GC_Wells_Geyser.GC_Wells_Geyser_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Wells_Geyser_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Wells_Geyser.GC_Wells_Geyser_C.UserConstructionScript");
		
		AGC_Wells_Geyser_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Wells_Geyser.GC_Wells_Geyser_C.K2_OnActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    ApplicationParticleSystem                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UCameraShake*                                ApplicationCameraShakeInstance                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Wells_Geyser_C::K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Wells_Geyser.GC_Wells_Geyser_C.K2_OnActive");
		
		AGC_Wells_Geyser_C_K2_OnActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		params.ApplicationParticleSystem = ApplicationParticleSystem;
		params.AdditionalParticleSystems = AdditionalParticleSystems;
		params.ApplicationCameraShakeInstance = ApplicationCameraShakeInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Wells_Geyser.GC_Wells_Geyser_C.ExecuteUbergraph_GC_Wells_Geyser
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Wells_Geyser_C::ExecuteUbergraph_GC_Wells_Geyser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Wells_Geyser.GC_Wells_Geyser_C.ExecuteUbergraph_GC_Wells_Geyser");
		
		AGC_Wells_Geyser_C_ExecuteUbergraph_GC_Wells_Geyser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Wells_Geyser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Wells_Geyser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Wells_Geyser.GC_Wells_Geyser_C");
		return ptr;
	}

}


