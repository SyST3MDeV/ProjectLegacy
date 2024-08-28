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
	 * 		Name   -> Function XP_Fill.XP_Fill_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UXP_Fill_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Fill.XP_Fill_C.PreConstruct");
		
		UXP_Fill_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function XP_Fill.XP_Fill_C.OnShowLevelUp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAtMaxLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UXP_Fill_C::OnShowLevelUp(bool bAtMaxLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Fill.XP_Fill_C.OnShowLevelUp");
		
		UXP_Fill_C_OnShowLevelUp_Params params {};
		params.bAtMaxLevel = bAtMaxLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function XP_Fill.XP_Fill_C.OnOwningHeroSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UXP_Fill_C::OnOwningHeroSet(class UOrionHeroData* HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Fill.XP_Fill_C.OnOwningHeroSet");
		
		UXP_Fill_C_OnOwningHeroSet_Params params {};
		params.HeroData = HeroData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function XP_Fill.XP_Fill_C.ExecuteUbergraph_XP_Fill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UXP_Fill_C::ExecuteUbergraph_XP_Fill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function XP_Fill.XP_Fill_C.ExecuteUbergraph_XP_Fill");
		
		UXP_Fill_C_ExecuteUbergraph_XP_Fill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXP_Fill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UXP_Fill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass XP_Fill.XP_Fill_C");
		return ptr;
	}

}


