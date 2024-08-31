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
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowBundlePurchaseScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      OfferId                                                    (Parm, ZeroConstructor)
	 */
	void UExclusiveModeMenus_C::ShowBundlePurchaseScreen(const class FString& OfferId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowBundlePurchaseScreen");
		
		UExclusiveModeMenus_C_ShowBundlePurchaseScreen_Params params {};
		params.OfferId = OfferId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowCraftingScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionCardData*                              Card                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::ShowCraftingScreen(class UOrionCardData* Card)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowCraftingScreen");
		
		UExclusiveModeMenus_C_ShowCraftingScreen_Params params {};
		params.Card = Card;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowBannerEditor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpBannerItem*                         BannerToEdit                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::ShowBannerEditor(class UOrionMcpBannerItem* BannerToEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowBannerEditor");
		
		UExclusiveModeMenus_C_ShowBannerEditor_Params params {};
		params.BannerToEdit = BannerToEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowPostGameSummary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UExclusiveModeMenus_C::ShowPostGameSummary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowPostGameSummary");
		
		UExclusiveModeMenus_C_ShowPostGameSummary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.EstablishActiveMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionActivatableWidget*                     Menu                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UExclusiveModeMenu_C*                        ExclusiveModeFrame                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::EstablishActiveMenu(class UOrionActivatableWidget* Menu, class UExclusiveModeMenu_C* ExclusiveModeFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.EstablishActiveMenu");
		
		UExclusiveModeMenus_C_EstablishActiveMenu_Params params {};
		params.Menu = Menu;
		params.ExclusiveModeFrame = ExclusiveModeFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowPackOpenScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpCardPackItem*                       Pack                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::ShowPackOpenScreen(class UOrionMcpCardPackItem* Pack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowPackOpenScreen");
		
		UExclusiveModeMenus_C_ShowPackOpenScreen_Params params {};
		params.Pack = Pack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowDeckBuilder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionMcpDeckItem*                           Deck                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::ShowDeckBuilder(class UOrionMcpDeckItem* Deck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowDeckBuilder");
		
		UExclusiveModeMenus_C_ShowDeckBuilder_Params params {};
		params.Deck = Deck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowHeroDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionHeroData*                              Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UOrionSkinItemDefinition*                    Skin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::ShowHeroDetails(class UOrionHeroData* Hero, class UOrionSkinItemDefinition* Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ShowHeroDetails");
		
		UExclusiveModeMenus_C_ShowHeroDetails_Params params {};
		params.Hero = Hero;
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UExclusiveModeMenus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.Construct");
		
		UExclusiveModeMenus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UOrionActivatableWidget*                     DeactivatedWidget                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature(class UOrionActivatableWidget* DeactivatedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature");
		
		UExclusiveModeMenus_C_BndEvt__ActivatableSwitcherExclusiveMenus_K2Node_ComponentBoundEvent_727_OnActiveWidgetDeactivated__DelegateSignature_Params params {};
		params.DeactivatedWidget = DeactivatedWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.ExecuteUbergraph_ExclusiveModeMenus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExclusiveModeMenus_C::ExecuteUbergraph_ExclusiveModeMenus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.ExecuteUbergraph_ExclusiveModeMenus");
		
		UExclusiveModeMenus_C_ExecuteUbergraph_ExclusiveModeMenus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.OnExclusiveModeLeft__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UExclusiveModeMenus_C::OnExclusiveModeLeft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.OnExclusiveModeLeft__DelegateSignature");
		
		UExclusiveModeMenus_C_OnExclusiveModeLeft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function ExclusiveModeMenus.ExclusiveModeMenus_C.OnExclusiveModeEntered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UExclusiveModeMenus_C::OnExclusiveModeEntered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExclusiveModeMenus.ExclusiveModeMenus_C.OnExclusiveModeEntered__DelegateSignature");
		
		UExclusiveModeMenus_C_OnExclusiveModeEntered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExclusiveModeMenus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExclusiveModeMenus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExclusiveModeMenus.ExclusiveModeMenus_C");
		return ptr;
	}

}


