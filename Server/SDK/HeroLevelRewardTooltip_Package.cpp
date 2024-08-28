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
	 * 		Name   -> Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.OnUpdateLock
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOwned                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroLevelRewardTooltip_C::OnUpdateLock(bool bIsOwned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.OnUpdateLock");
		
		UHeroLevelRewardTooltip_C_OnUpdateLock_Params params {};
		params.bIsOwned = bIsOwned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.OnUpdateXPBonuses
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SelfBonus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TeammateBonus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroLevelRewardTooltip_C::OnUpdateXPBonuses(float SelfBonus, float TeammateBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.OnUpdateXPBonuses");
		
		UHeroLevelRewardTooltip_C_OnUpdateXPBonuses_Params params {};
		params.SelfBonus = SelfBonus;
		params.TeammateBonus = TeammateBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.ExecuteUbergraph_HeroLevelRewardTooltip
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroLevelRewardTooltip_C::ExecuteUbergraph_HeroLevelRewardTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroLevelRewardTooltip.HeroLevelRewardTooltip_C.ExecuteUbergraph_HeroLevelRewardTooltip");
		
		UHeroLevelRewardTooltip_C_ExecuteUbergraph_HeroLevelRewardTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroLevelRewardTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroLevelRewardTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroLevelRewardTooltip.HeroLevelRewardTooltip_C");
		return ptr;
	}

}


