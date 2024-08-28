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
	 * 		Name   -> Function Minion_Leader_AnimBP.Minion_Leader_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Leader_AnimBP_AnimGraphNode_BlendSpacePlayer_810600424809D40448D1B4BC6A535349
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMinion_Leader_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Leader_AnimBP_AnimGraphNode_BlendSpacePlayer_810600424809D40448D1B4BC6A535349()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minion_Leader_AnimBP.Minion_Leader_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Leader_AnimBP_AnimGraphNode_BlendSpacePlayer_810600424809D40448D1B4BC6A535349");
		
		UMinion_Leader_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Minion_Leader_AnimBP_AnimGraphNode_BlendSpacePlayer_810600424809D40448D1B4BC6A535349_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Minion_Leader_AnimBP.Minion_Leader_AnimBP_C.ExecuteUbergraph_Minion_Leader_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMinion_Leader_AnimBP_C::ExecuteUbergraph_Minion_Leader_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Minion_Leader_AnimBP.Minion_Leader_AnimBP_C.ExecuteUbergraph_Minion_Leader_AnimBP");
		
		UMinion_Leader_AnimBP_C_ExecuteUbergraph_Minion_Leader_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinion_Leader_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinion_Leader_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Minion_Leader_AnimBP.Minion_Leader_AnimBP_C");
		return ptr;
	}

}


