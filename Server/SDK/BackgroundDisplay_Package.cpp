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
	 * 		Name   -> Function BackgroundDisplay.BackgroundDisplay_C.SetHero
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionHeroData*                              HeroData                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBackgroundDisplay_C::SetHero(class UOrionHeroData** HeroData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BackgroundDisplay.BackgroundDisplay_C.SetHero");
		
		UBackgroundDisplay_C_SetHero_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeroData != nullptr)
			*HeroData = params.HeroData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBackgroundDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBackgroundDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BackgroundDisplay.BackgroundDisplay_C");
		return ptr;
	}

}


