/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.On Category Changed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FNewParam*                                   Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_Blueprint_C::OnCategoryChanged(class FNewParam* Widget, const class FName& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.On Category Changed");
		
		AFrontEndManager_Blueprint_C_OnCategoryChanged_Params params {};
		params.Widget = Widget;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.Handle Scene Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Scene                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_Blueprint_C::HandleSceneChanged(const class FName& Scene)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.Handle Scene Changed");
		
		AFrontEndManager_Blueprint_C_HandleSceneChanged_Params params {};
		params.Scene = Scene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontEndManager_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.UserConstructionScript");
		
		AFrontEndManager_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFrontEndManager_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.ReceiveBeginPlay");
		
		AFrontEndManager_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.ExecuteUbergraph_FrontEndManager_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrontEndManager_Blueprint_C::ExecuteUbergraph_FrontEndManager_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndManager_Blueprint.FrontEndManager_Blueprint_C.ExecuteUbergraph_FrontEndManager_Blueprint");
		
		AFrontEndManager_Blueprint_C_ExecuteUbergraph_FrontEndManager_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrontEndManager_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontEndManager_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontEndManager_Blueprint.FrontEndManager_Blueprint_C");
		return ptr;
	}

}


