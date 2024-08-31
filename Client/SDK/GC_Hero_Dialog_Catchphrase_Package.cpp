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
	 * 		Name   -> Function GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGC_Hero_Dialog_Catchphrase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C.UserConstructionScript");
		
		AGC_Hero_Dialog_Catchphrase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C.K2_OnExecute
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UParticleSystemComponent*                    BurstParticleSystems                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UParticleSystemComponent*>            AdditionalParticleSystems                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AGC_Hero_Dialog_Catchphrase_C::K2_OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystems, TArray<class UParticleSystemComponent*> AdditionalParticleSystems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C.K2_OnExecute");
		
		AGC_Hero_Dialog_Catchphrase_C_K2_OnExecute_Params params {};
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
	 * 		Name   -> Function GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C.ExecuteUbergraph_GC_Hero_Dialog_Catchphrase
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGC_Hero_Dialog_Catchphrase_C::ExecuteUbergraph_GC_Hero_Dialog_Catchphrase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C.ExecuteUbergraph_GC_Hero_Dialog_Catchphrase");
		
		AGC_Hero_Dialog_Catchphrase_C_ExecuteUbergraph_GC_Hero_Dialog_Catchphrase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Hero_Dialog_Catchphrase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Hero_Dialog_Catchphrase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Hero_Dialog_Catchphrase.GC_Hero_Dialog_Catchphrase_C");
		return ptr;
	}

}


