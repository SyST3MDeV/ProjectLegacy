/**
 * Name: Paragon
 * Version: v34
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PrimeHelix_v2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.UserConstructionScript");
		
		ABP_PrimeHelix_v2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnObjectiveDropped
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PrimeHelix_v2_C::OnObjectiveDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnObjectiveDropped");
		
		ABP_PrimeHelix_v2_C_OnObjectiveDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnScoredObjective
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PrimeHelix_v2_C::OnScoredObjective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnScoredObjective");
		
		ABP_PrimeHelix_v2_C_OnScoredObjective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickedUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionChar*                                  Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PrimeHelix_v2_C::OnPickedUp(class AOrionChar* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickedUp");
		
		ABP_PrimeHelix_v2_C_OnPickedUp_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickupActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PrimeHelix_v2_C::OnPickupActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickupActivated");
		
		ABP_PrimeHelix_v2_C_OnPickupActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickupDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PrimeHelix_v2_C::OnPickupDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.OnPickupDeactivated");
		
		ABP_PrimeHelix_v2_C_OnPickupDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.ExecuteUbergraph_BP_PrimeHelix_v2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PrimeHelix_v2_C::ExecuteUbergraph_BP_PrimeHelix_v2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PrimeHelix_v2.BP_PrimeHelix_v2_C.ExecuteUbergraph_BP_PrimeHelix_v2");
		
		ABP_PrimeHelix_v2_C_ExecuteUbergraph_BP_PrimeHelix_v2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PrimeHelix_v2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PrimeHelix_v2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrimeHelix_v2.BP_PrimeHelix_v2_C");
		return ptr;
	}

}


