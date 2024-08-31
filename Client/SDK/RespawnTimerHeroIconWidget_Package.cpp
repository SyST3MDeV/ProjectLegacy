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
	 * 		Name   -> Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URespawnTimerHeroIconWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.Construct");
		
		URespawnTimerHeroIconWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.SetHeroIcon
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  HeroIconTexture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URespawnTimerHeroIconWidget_C::SetHeroIcon(class UTexture2D* HeroIconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.SetHeroIcon");
		
		URespawnTimerHeroIconWidget_C_SetHeroIcon_Params params {};
		params.HeroIconTexture = HeroIconTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.SetIsFriendly
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFriendly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URespawnTimerHeroIconWidget_C::SetIsFriendly(bool bIsFriendly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.SetIsFriendly");
		
		URespawnTimerHeroIconWidget_C_SetIsFriendly_Params params {};
		params.bIsFriendly = bIsFriendly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.StartRemoving
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void URespawnTimerHeroIconWidget_C::StartRemoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.StartRemoving");
		
		URespawnTimerHeroIconWidget_C_StartRemoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.OnAnimationFinished_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URespawnTimerHeroIconWidget_C::OnAnimationFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.OnAnimationFinished_Event_1");
		
		URespawnTimerHeroIconWidget_C_OnAnimationFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.ExecuteUbergraph_RespawnTimerHeroIconWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URespawnTimerHeroIconWidget_C::ExecuteUbergraph_RespawnTimerHeroIconWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C.ExecuteUbergraph_RespawnTimerHeroIconWidget");
		
		URespawnTimerHeroIconWidget_C_ExecuteUbergraph_RespawnTimerHeroIconWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnTimerHeroIconWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnTimerHeroIconWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RespawnTimerHeroIconWidget.RespawnTimerHeroIconWidget_C");
		return ptr;
	}

}


