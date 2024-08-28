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
	 * 		Name   -> Function HeroAttributesDisplay.HeroAttributesDisplay_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHeroAttributesDisplay_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroAttributesDisplay.HeroAttributesDisplay_C.Update");
		
		UHeroAttributesDisplay_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroAttributesDisplay.HeroAttributesDisplay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHeroAttributesDisplay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroAttributesDisplay.HeroAttributesDisplay_C.Construct");
		
		UHeroAttributesDisplay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroAttributesDisplay.HeroAttributesDisplay_C.Refresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHeroAttributesDisplay_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroAttributesDisplay.HeroAttributesDisplay_C.Refresh");
		
		UHeroAttributesDisplay_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroAttributesDisplay.HeroAttributesDisplay_C.Clear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHeroAttributesDisplay_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroAttributesDisplay.HeroAttributesDisplay_C.Clear");
		
		UHeroAttributesDisplay_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function HeroAttributesDisplay.HeroAttributesDisplay_C.ExecuteUbergraph_HeroAttributesDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHeroAttributesDisplay_C::ExecuteUbergraph_HeroAttributesDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeroAttributesDisplay.HeroAttributesDisplay_C.ExecuteUbergraph_HeroAttributesDisplay");
		
		UHeroAttributesDisplay_C_ExecuteUbergraph_HeroAttributesDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeroAttributesDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeroAttributesDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroAttributesDisplay.HeroAttributesDisplay_C");
		return ptr;
	}

}


