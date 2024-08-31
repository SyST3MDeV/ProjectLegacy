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
	 * 		Name   -> Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_Bot_UpdateEnemy_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.ReceiveTickAI");
		
		UBTService_Bot_UpdateEnemy_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.QueryDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_Bot_UpdateEnemy_C::QueryDone(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.QueryDone");
		
		UBTService_Bot_UpdateEnemy_C_QueryDone_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.ExecuteUbergraph_BTService_Bot_UpdateEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTService_Bot_UpdateEnemy_C::ExecuteUbergraph_BTService_Bot_UpdateEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C.ExecuteUbergraph_BTService_Bot_UpdateEnemy");
		
		UBTService_Bot_UpdateEnemy_C_ExecuteUbergraph_BTService_Bot_UpdateEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_Bot_UpdateEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_Bot_UpdateEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTService_Bot_UpdateEnemy.BTService_Bot_UpdateEnemy_C");
		return ptr;
	}

}


