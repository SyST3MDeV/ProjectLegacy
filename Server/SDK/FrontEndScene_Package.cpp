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
	 * 		Name   -> Function FrontEndScene.FrontEndScene_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFrontEndScene_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndScene.FrontEndScene_C.ReceiveBeginPlay");
		
		AFrontEndScene_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndScene.FrontEndScene_C.UpdateSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndScene_C::UpdateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndScene.FrontEndScene_C.UpdateSettings");
		
		AFrontEndScene_C_UpdateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndScene.FrontEndScene_C.ExecuteUbergraph_FrontEndScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndScene_C::ExecuteUbergraph_FrontEndScene(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndScene.FrontEndScene_C.ExecuteUbergraph_FrontEndScene");
		
		AFrontEndScene_C_ExecuteUbergraph_FrontEndScene_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrontEndScene_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontEndScene_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontEndScene.FrontEndScene_C");
		return ptr;
	}

}


