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
	 * 		Name   -> Function GC_PrimeHelix_SpawnComet_SonicBoom.GC_PrimeHelix_SpawnComet_SonicBoom_C.OnBurst
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    BurstParticleSystem                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UCameraShake*                                BurstCameraShakeInstance                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGC_PrimeHelix_SpawnComet_SonicBoom_C::OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* BurstCameraShakeInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_PrimeHelix_SpawnComet_SonicBoom.GC_PrimeHelix_SpawnComet_SonicBoom_C.OnBurst");
		
		UGC_PrimeHelix_SpawnComet_SonicBoom_C_OnBurst_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		params.BurstParticleSystem = BurstParticleSystem;
		params.AdditionalParticleSystems = AdditionalParticleSystems;
		params.BurstCameraShakeInstance = BurstCameraShakeInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGC_PrimeHelix_SpawnComet_SonicBoom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_PrimeHelix_SpawnComet_SonicBoom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_PrimeHelix_SpawnComet_SonicBoom.GC_PrimeHelix_SpawnComet_SonicBoom_C");
		return ptr;
	}

}


