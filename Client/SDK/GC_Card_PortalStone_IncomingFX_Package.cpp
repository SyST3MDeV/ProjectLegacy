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
	 * 		Name   -> Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Card_PortalStone_IncomingFX_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.UserConstructionScript");
		
		AGC_Card_PortalStone_IncomingFX_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.K2_OnActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    ApplicationParticleSystem                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UCameraShake*                                ApplicationCameraShakeInstance                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Card_PortalStone_IncomingFX_C::K2_OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* ApplicationParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* ApplicationCameraShakeInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.K2_OnActive");
		
		AGC_Card_PortalStone_IncomingFX_C_K2_OnActive_Params params {};
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
	 * 		Name   -> Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.K2_WhileActive
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    LoopingParticleSystem                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystem                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Card_PortalStone_IncomingFX_C::K2_WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* LoopingParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.K2_WhileActive");
		
		AGC_Card_PortalStone_IncomingFX_C_K2_WhileActive_Params params {};
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
	 * 		Name   -> Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.ExecuteUbergraph_GC_Card_PortalStone_IncomingFX
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Card_PortalStone_IncomingFX_C::ExecuteUbergraph_GC_Card_PortalStone_IncomingFX(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C.ExecuteUbergraph_GC_Card_PortalStone_IncomingFX");
		
		AGC_Card_PortalStone_IncomingFX_C_ExecuteUbergraph_GC_Card_PortalStone_IncomingFX_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Card_PortalStone_IncomingFX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Card_PortalStone_IncomingFX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Card_PortalStone_IncomingFX.GC_Card_PortalStone_IncomingFX_C");
		return ptr;
	}

}


