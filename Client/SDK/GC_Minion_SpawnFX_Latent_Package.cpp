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
	 * 		Name   -> Function GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Minion_SpawnFX_Latent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C.UserConstructionScript");
		
		AGC_Minion_SpawnFX_Latent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C.K2_OnExecute
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    BurstParticleSystems                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Minion_SpawnFX_Latent_C::K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystems, TArray<class UParticleSystemComponent*> AdditionalParticleSystems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C.K2_OnExecute");
		
		AGC_Minion_SpawnFX_Latent_C_K2_OnExecute_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		params.BurstParticleSystems = BurstParticleSystems;
		params.AdditionalParticleSystems = AdditionalParticleSystems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C.ExecuteUbergraph_GC_Minion_SpawnFX_Latent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Minion_SpawnFX_Latent_C::ExecuteUbergraph_GC_Minion_SpawnFX_Latent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C.ExecuteUbergraph_GC_Minion_SpawnFX_Latent");
		
		AGC_Minion_SpawnFX_Latent_C_ExecuteUbergraph_GC_Minion_SpawnFX_Latent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Minion_SpawnFX_Latent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Minion_SpawnFX_Latent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Minion_SpawnFX_Latent.GC_Minion_SpawnFX_Latent_C");
		return ptr;
	}

}


