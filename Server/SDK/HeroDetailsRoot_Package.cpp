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
	 * 		Name   -> Function HeroDetailsRoot.HeroDetailsRoot_C.Set Hero
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionHeroData*                              NewHero                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroDetailsRoot_C::SetHero(class UOrionHeroData* NewHero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetailsRoot.HeroDetailsRoot_C.Set Hero");
		
		UHeroDetailsRoot_C_SetHero_Params params {};
		params.NewHero = NewHero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDetailsRoot.HeroDetailsRoot_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHeroDetailsRoot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetailsRoot.HeroDetailsRoot_C.Construct");
		
		UHeroDetailsRoot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDetailsRoot.HeroDetailsRoot_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroDetailsRoot_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetailsRoot.HeroDetailsRoot_C.OnActivated");
		
		UHeroDetailsRoot_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDetailsRoot.HeroDetailsRoot_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeroDetailsRoot_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetailsRoot.HeroDetailsRoot_C.OnDeactivated");
		
		UHeroDetailsRoot_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDetailsRoot.HeroDetailsRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHeroDetailsRoot_C::BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetailsRoot.HeroDetailsRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature");
		
		UHeroDetailsRoot_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroDetailsRoot.HeroDetailsRoot_C.ExecuteUbergraph_HeroDetailsRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroDetailsRoot_C::ExecuteUbergraph_HeroDetailsRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroDetailsRoot.HeroDetailsRoot_C.ExecuteUbergraph_HeroDetailsRoot");
		
		UHeroDetailsRoot_C_ExecuteUbergraph_HeroDetailsRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroDetailsRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroDetailsRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroDetailsRoot.HeroDetailsRoot_C");
		return ptr;
	}

}


