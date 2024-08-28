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
	 * 		Name   -> Function GV_Card_Aura_Parent.GV_Card_Aura_Parent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGV_Card_Aura_Parent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GV_Card_Aura_Parent.GV_Card_Aura_Parent_C.UserConstructionScript");
		
		AGV_Card_Aura_Parent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GV_Card_Aura_Parent.GV_Card_Aura_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGV_Card_Aura_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GV_Card_Aura_Parent.GV_Card_Aura_Parent_C.ReceiveBeginPlay");
		
		AGV_Card_Aura_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GV_Card_Aura_Parent.GV_Card_Aura_Parent_C.ExecuteUbergraph_GV_Card_Aura_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGV_Card_Aura_Parent_C::ExecuteUbergraph_GV_Card_Aura_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GV_Card_Aura_Parent.GV_Card_Aura_Parent_C.ExecuteUbergraph_GV_Card_Aura_Parent");
		
		AGV_Card_Aura_Parent_C_ExecuteUbergraph_GV_Card_Aura_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGV_Card_Aura_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGV_Card_Aura_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GV_Card_Aura_Parent.GV_Card_Aura_Parent_C");
		return ptr;
	}

}


