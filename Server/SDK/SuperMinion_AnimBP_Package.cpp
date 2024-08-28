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
	 * 		Name   -> Function SuperMinion_AnimBP.SuperMinion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SuperMinion_AnimBP_AnimGraphNode_BlendSpacePlayer_FD59DC6C4AB768279CEE4CACE8882E75
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USuperMinion_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SuperMinion_AnimBP_AnimGraphNode_BlendSpacePlayer_FD59DC6C4AB768279CEE4CACE8882E75()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SuperMinion_AnimBP.SuperMinion_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SuperMinion_AnimBP_AnimGraphNode_BlendSpacePlayer_FD59DC6C4AB768279CEE4CACE8882E75");
		
		USuperMinion_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SuperMinion_AnimBP_AnimGraphNode_BlendSpacePlayer_FD59DC6C4AB768279CEE4CACE8882E75_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function SuperMinion_AnimBP.SuperMinion_AnimBP_C.ExecuteUbergraph_SuperMinion_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USuperMinion_AnimBP_C::ExecuteUbergraph_SuperMinion_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SuperMinion_AnimBP.SuperMinion_AnimBP_C.ExecuteUbergraph_SuperMinion_AnimBP");
		
		USuperMinion_AnimBP_C_ExecuteUbergraph_SuperMinion_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USuperMinion_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USuperMinion_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SuperMinion_AnimBP.SuperMinion_AnimBP_C");
		return ptr;
	}

}


