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
	 * 		Name   -> Function GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C.OnFinish_BF49B0B84F58C7406D7E02A63E40EB2B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Card_Ethereal_Gem_C::OnFinish_BF49B0B84F58C7406D7E02A63E40EB2B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C.OnFinish_BF49B0B84F58C7406D7E02A63E40EB2B");
		
		UGA_Card_Ethereal_Gem_C_OnFinish_BF49B0B84F58C7406D7E02A63E40EB2B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Ethereal_Gem_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C.K2_ActivateAbility");
		
		UGA_Card_Ethereal_Gem_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C.ExecuteUbergraph_GA_Card_Ethereal_Gem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Ethereal_Gem_C::ExecuteUbergraph_GA_Card_Ethereal_Gem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C.ExecuteUbergraph_GA_Card_Ethereal_Gem");
		
		UGA_Card_Ethereal_Gem_C_ExecuteUbergraph_GA_Card_Ethereal_Gem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Ethereal_Gem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Ethereal_Gem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Ethereal_Gem.GA_Card_Ethereal_Gem_C");
		return ptr;
	}

}


