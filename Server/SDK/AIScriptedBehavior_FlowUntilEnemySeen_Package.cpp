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
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.RunBehavior
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionAIController*                          AIController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAIScriptedBehavior_FlowUntilEnemySeen_C::RunBehavior(class AOrionAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.RunBehavior");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_RunBehavior_Params params {};
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnFinish_4016BB134EB9080C2EDA7CB625816B19
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::OnFinish_4016BB134EB9080C2EDA7CB625816B19()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnFinish_4016BB134EB9080C2EDA7CB625816B19");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_OnFinish_4016BB134EB9080C2EDA7CB625816B19_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnFinish_81B41A9F4A1860E88BB263A806ACABAE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::OnFinish_81B41A9F4A1860E88BB263A806ACABAE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnFinish_81B41A9F4A1860E88BB263A806ACABAE");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_OnFinish_81B41A9F4A1860E88BB263A806ACABAE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E(EPathFollowingResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_OnMoveFinished_623B680040E2A42E4DABDF8D1D61043E_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_OnRequestFailed_623B680040E2A42E4DABDF8D1D61043E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.BehaviorFinished
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOrionAIController*                          AIController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::BehaviorFinished(class AOrionAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.BehaviorFinished");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_BehaviorFinished_Params params {};
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.FlowUntilEnemySeen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::FlowUntilEnemySeen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.FlowUntilEnemySeen");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_FlowUntilEnemySeen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIScriptedBehavior_FlowUntilEnemySeen_C::ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C.ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen");
		
		UAIScriptedBehavior_FlowUntilEnemySeen_C_ExecuteUbergraph_AIScriptedBehavior_FlowUntilEnemySeen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIScriptedBehavior_FlowUntilEnemySeen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIScriptedBehavior_FlowUntilEnemySeen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIScriptedBehavior_FlowUntilEnemySeen.AIScriptedBehavior_FlowUntilEnemySeen_C");
		return ptr;
	}

}


