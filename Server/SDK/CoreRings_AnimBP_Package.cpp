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
	 * 		Name   -> Function CoreRings_AnimBP.CoreRings_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_2F118F244C5729AEDD03D695BF25735A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCoreRings_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_2F118F244C5729AEDD03D695BF25735A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreRings_AnimBP.CoreRings_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_2F118F244C5729AEDD03D695BF25735A");
		
		UCoreRings_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_2F118F244C5729AEDD03D695BF25735A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CoreRings_AnimBP.CoreRings_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_00032C89494BB9FD54939F9EA5AE36A9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCoreRings_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_00032C89494BB9FD54939F9EA5AE36A9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreRings_AnimBP.CoreRings_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_00032C89494BB9FD54939F9EA5AE36A9");
		
		UCoreRings_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CoreRings_AnimBP_AnimGraphNode_TransitionResult_00032C89494BB9FD54939F9EA5AE36A9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CoreRings_AnimBP.CoreRings_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoreRings_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreRings_AnimBP.CoreRings_AnimBP_C.BlueprintUpdateAnimation");
		
		UCoreRings_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CoreRings_AnimBP.CoreRings_AnimBP_C.ExecuteUbergraph_CoreRings_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoreRings_AnimBP_C::ExecuteUbergraph_CoreRings_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreRings_AnimBP.CoreRings_AnimBP_C.ExecuteUbergraph_CoreRings_AnimBP");
		
		UCoreRings_AnimBP_C_ExecuteUbergraph_CoreRings_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreRings_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRings_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CoreRings_AnimBP.CoreRings_AnimBP_C");
		return ptr;
	}

}


