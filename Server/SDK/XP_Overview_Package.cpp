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
	 * 		Name   -> Function XP_Overview.XP_Overview_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UXP_Overview_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Overview.XP_Overview_C.Reset");
		
		UXP_Overview_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function XP_Overview.XP_Overview_C.SetOwnerName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        OwnerName                                                  (Parm)
	 */
	void UXP_Overview_C::SetOwnerName(const class FText& OwnerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Overview.XP_Overview_C.SetOwnerName");
		
		UXP_Overview_C_SetOwnerName_Params params {};
		params.OwnerName = OwnerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function XP_Overview.XP_Overview_C.BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumRewardsDisplayed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UXP_Overview_C::BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature(int32_t NumRewardsDisplayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Overview.XP_Overview_C.BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature");
		
		UXP_Overview_C_BndEvt__RewardCarousel_K2Node_ComponentBoundEvent_9_OnRewardCarouselFilled__DelegateSignature_Params params {};
		params.NumRewardsDisplayed = NumRewardsDisplayed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function XP_Overview.XP_Overview_C.ExecuteUbergraph_XP_Overview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UXP_Overview_C::ExecuteUbergraph_XP_Overview(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Overview.XP_Overview_C.ExecuteUbergraph_XP_Overview");
		
		UXP_Overview_C_ExecuteUbergraph_XP_Overview_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXP_Overview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UXP_Overview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass XP_Overview.XP_Overview_C");
		return ptr;
	}

}


