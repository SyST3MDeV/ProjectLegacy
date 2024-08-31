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
	 * 		Name   -> Function DecoFanAnimBP.DecoFanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_1CE521294B2FA22B737A68975931F878
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDecoFanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_1CE521294B2FA22B737A68975931F878()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DecoFanAnimBP.DecoFanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_1CE521294B2FA22B737A68975931F878");
		
		UDecoFanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_1CE521294B2FA22B737A68975931F878_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DecoFanAnimBP.DecoFanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_70DD1AC44C76A22596BA28BCA2D2E72A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDecoFanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_70DD1AC44C76A22596BA28BCA2D2E72A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DecoFanAnimBP.DecoFanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_70DD1AC44C76A22596BA28BCA2D2E72A");
		
		UDecoFanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DecoFanAnimBP_AnimGraphNode_TransitionResult_70DD1AC44C76A22596BA28BCA2D2E72A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function DecoFanAnimBP.DecoFanAnimBP_C.ExecuteUbergraph_DecoFanAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDecoFanAnimBP_C::ExecuteUbergraph_DecoFanAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DecoFanAnimBP.DecoFanAnimBP_C.ExecuteUbergraph_DecoFanAnimBP");
		
		UDecoFanAnimBP_C_ExecuteUbergraph_DecoFanAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecoFanAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecoFanAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DecoFanAnimBP.DecoFanAnimBP_C");
		return ptr;
	}

}


