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
	 * 		Name   -> Function RewardsTodayToolTip.RewardsTodayToolTip_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URewardsTodayToolTip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardsTodayToolTip.RewardsTodayToolTip_C.Construct");
		
		URewardsTodayToolTip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RewardsTodayToolTip.RewardsTodayToolTip_C.ExecuteUbergraph_RewardsTodayToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardsTodayToolTip_C::ExecuteUbergraph_RewardsTodayToolTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardsTodayToolTip.RewardsTodayToolTip_C.ExecuteUbergraph_RewardsTodayToolTip");
		
		URewardsTodayToolTip_C_ExecuteUbergraph_RewardsTodayToolTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardsTodayToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardsTodayToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsTodayToolTip.RewardsTodayToolTip_C");
		return ptr;
	}

}


