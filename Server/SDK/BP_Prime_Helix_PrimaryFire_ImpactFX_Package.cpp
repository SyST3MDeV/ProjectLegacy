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
	 * 		Name   -> Function BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Prime_Helix_PrimaryFire_ImpactFX_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C.UserConstructionScript");
		
		ABP_Prime_Helix_PrimaryFire_ImpactFX_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Prime_Helix_PrimaryFire_ImpactFX_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C.ReceiveBeginPlay");
		
		ABP_Prime_Helix_PrimaryFire_ImpactFX_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C.ExecuteUbergraph_BP_Prime_Helix_PrimaryFire_ImpactFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Prime_Helix_PrimaryFire_ImpactFX_C::ExecuteUbergraph_BP_Prime_Helix_PrimaryFire_ImpactFX(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C.ExecuteUbergraph_BP_Prime_Helix_PrimaryFire_ImpactFX");
		
		ABP_Prime_Helix_PrimaryFire_ImpactFX_C_ExecuteUbergraph_BP_Prime_Helix_PrimaryFire_ImpactFX_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prime_Helix_PrimaryFire_ImpactFX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prime_Helix_PrimaryFire_ImpactFX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prime_Helix_PrimaryFire_ImpactFX.BP_Prime_Helix_PrimaryFire_ImpactFX_C");
		return ptr;
	}

}


