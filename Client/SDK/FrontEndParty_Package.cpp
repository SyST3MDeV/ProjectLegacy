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
	 * 		Name   -> Function FrontEndParty.FrontEndParty_C.Update Party
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFrontEndParty_C::UpdateParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndParty.FrontEndParty_C.Update Party");
		
		UFrontEndParty_C_UpdateParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndParty.FrontEndParty_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFrontEndParty_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndParty.FrontEndParty_C.Construct");
		
		UFrontEndParty_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndParty.FrontEndParty_C.OnHeroChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionHeroData*                              NewHero                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndParty_C::OnHeroChanged_Event_1(class UOrionHeroData* NewHero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndParty.FrontEndParty_C.OnHeroChanged_Event_1");
		
		UFrontEndParty_C_OnHeroChanged_Event_1_Params params {};
		params.NewHero = NewHero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function FrontEndParty.FrontEndParty_C.ExecuteUbergraph_FrontEndParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontEndParty_C::ExecuteUbergraph_FrontEndParty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontEndParty.FrontEndParty_C.ExecuteUbergraph_FrontEndParty");
		
		UFrontEndParty_C_ExecuteUbergraph_FrontEndParty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrontEndParty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontEndParty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndParty.FrontEndParty_C");
		return ptr;
	}

}


