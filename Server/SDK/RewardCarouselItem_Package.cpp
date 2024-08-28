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
	 * 		Name   -> Function RewardCarouselItem.RewardCarouselItem_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardCarouselItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCarouselItem.RewardCarouselItem_C.PreConstruct");
		
		URewardCarouselItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RewardCarouselItem.RewardCarouselItem_C.RefreshLayout
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void URewardCarouselItem_C::RefreshLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCarouselItem.RewardCarouselItem_C.RefreshLayout");
		
		URewardCarouselItem_C_RefreshLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RewardCarouselItem.RewardCarouselItem_C.OnRewardEarned
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void URewardCarouselItem_C::OnRewardEarned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCarouselItem.RewardCarouselItem_C.OnRewardEarned");
		
		URewardCarouselItem_C_OnRewardEarned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RewardCarouselItem.RewardCarouselItem_C.ExecuteUbergraph_RewardCarouselItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URewardCarouselItem_C::ExecuteUbergraph_RewardCarouselItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardCarouselItem.RewardCarouselItem_C.ExecuteUbergraph_RewardCarouselItem");
		
		URewardCarouselItem_C_ExecuteUbergraph_RewardCarouselItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardCarouselItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardCarouselItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardCarouselItem.RewardCarouselItem_C");
		return ptr;
	}

}


