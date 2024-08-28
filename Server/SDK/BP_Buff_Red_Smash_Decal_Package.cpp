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
	 * 		Name   -> Function BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Buff_Red_Smash_Decal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C.UserConstructionScript");
		
		ABP_Buff_Red_Smash_Decal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Buff_Red_Smash_Decal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C.ReceiveBeginPlay");
		
		ABP_Buff_Red_Smash_Decal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C.ExecuteUbergraph_BP_Buff_Red_Smash_Decal
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Buff_Red_Smash_Decal_C::ExecuteUbergraph_BP_Buff_Red_Smash_Decal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C.ExecuteUbergraph_BP_Buff_Red_Smash_Decal");
		
		ABP_Buff_Red_Smash_Decal_C_ExecuteUbergraph_BP_Buff_Red_Smash_Decal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Buff_Red_Smash_Decal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Buff_Red_Smash_Decal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Buff_Red_Smash_Decal.BP_Buff_Red_Smash_Decal_C");
		return ptr;
	}

}


