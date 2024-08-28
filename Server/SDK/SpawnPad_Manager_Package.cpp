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
	 * 		Name   -> Function SpawnPad_Manager.SpawnPad_Manager_C.DrivePad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DriverValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PadID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpawnPad_Manager_C::DrivePad(float DriverValue, int32_t PadID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnPad_Manager.SpawnPad_Manager_C.DrivePad");
		
		ASpawnPad_Manager_C_DrivePad_Params params {};
		params.DriverValue = DriverValue;
		params.PadID = PadID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpawnPad_Manager.SpawnPad_Manager_C.HandleTeamColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpawnPad_Manager_C::HandleTeamColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnPad_Manager.SpawnPad_Manager_C.HandleTeamColors");
		
		ASpawnPad_Manager_C_HandleTeamColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpawnPad_Manager.SpawnPad_Manager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpawnPad_Manager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnPad_Manager.SpawnPad_Manager_C.UserConstructionScript");
		
		ASpawnPad_Manager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpawnPad_Manager.SpawnPad_Manager_C.OnTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         NewTeamIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpawnPad_Manager_C::OnTeamChanged(EOrionTeam NewTeamIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnPad_Manager.SpawnPad_Manager_C.OnTeamChanged");
		
		ASpawnPad_Manager_C_OnTeamChanged_Params params {};
		params.NewTeamIdx = NewTeamIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpawnPad_Manager.SpawnPad_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ASpawnPad_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnPad_Manager.SpawnPad_Manager_C.ReceiveBeginPlay");
		
		ASpawnPad_Manager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SpawnPad_Manager.SpawnPad_Manager_C.ExecuteUbergraph_SpawnPad_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpawnPad_Manager_C::ExecuteUbergraph_SpawnPad_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnPad_Manager.SpawnPad_Manager_C.ExecuteUbergraph_SpawnPad_Manager");
		
		ASpawnPad_Manager_C_ExecuteUbergraph_SpawnPad_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpawnPad_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawnPad_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPad_Manager.SpawnPad_Manager_C");
		return ptr;
	}

}


