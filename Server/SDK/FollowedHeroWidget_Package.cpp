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
	 * 		Name   -> Function FollowedHeroWidget.FollowedHeroWidget_C.InitInHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseHUDWidget*                         InHUDWidget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFollowedHeroWidget_C::InitInHUD(class UOrionBaseHUDWidget* InHUDWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FollowedHeroWidget.FollowedHeroWidget_C.InitInHUD");
		
		UFollowedHeroWidget_C_InitInHUD_Params params {};
		params.InHUDWidget = InHUDWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FollowedHeroWidget.FollowedHeroWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFollowedHeroWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FollowedHeroWidget.FollowedHeroWidget_C.Construct");
		
		UFollowedHeroWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FollowedHeroWidget.FollowedHeroWidget_C.OnSpectatorWatchedHeroChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOrionTeam                                         HeroTeam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            HeroIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFollowedHeroWidget_C::OnSpectatorWatchedHeroChange(EOrionTeam HeroTeam, int32_t HeroIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FollowedHeroWidget.FollowedHeroWidget_C.OnSpectatorWatchedHeroChange");
		
		UFollowedHeroWidget_C_OnSpectatorWatchedHeroChange_Params params {};
		params.HeroTeam = HeroTeam;
		params.HeroIndex = HeroIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FollowedHeroWidget.FollowedHeroWidget_C.ExecuteUbergraph_FollowedHeroWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFollowedHeroWidget_C::ExecuteUbergraph_FollowedHeroWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FollowedHeroWidget.FollowedHeroWidget_C.ExecuteUbergraph_FollowedHeroWidget");
		
		UFollowedHeroWidget_C_ExecuteUbergraph_FollowedHeroWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFollowedHeroWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFollowedHeroWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FollowedHeroWidget.FollowedHeroWidget_C");
		return ptr;
	}

}


