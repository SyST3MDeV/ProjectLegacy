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
	 * 		Name   -> Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.ReturnValidOverlapActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlapActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ReturnActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionDamageableObjective_Base_C::ReturnValidOverlapActor(class AActor* OverlapActor, class AActor** ReturnActor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.ReturnValidOverlapActor");
		
		ABP_OrionDamageableObjective_Base_C_ReturnValidOverlapActor_Params params {};
		params.OverlapActor = OverlapActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnActor != nullptr)
			*ReturnActor = params.ReturnActor;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.HandleLootDrop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumDrops                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrionDamageableObjective_Base_C::HandleLootDrop(int32_t* NumDrops, class AActor* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.HandleLootDrop");
		
		ABP_OrionDamageableObjective_Base_C_HandleLootDrop_Params params {};
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumDrops != nullptr)
			*NumDrops = params.NumDrops;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OrionDamageableObjective_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C.UserConstructionScript");
		
		ABP_OrionDamageableObjective_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrionDamageableObjective_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrionDamageableObjective_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrionDamageableObjective_Base.BP_OrionDamageableObjective_Base_C");
		return ptr;
	}

}


