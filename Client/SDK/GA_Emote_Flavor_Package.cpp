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
	 * 		Name   -> Function GA_Emote_Flavor.GA_Emote_Flavor_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Emote_Flavor_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Flavor.GA_Emote_Flavor_C.K2_ActivateAbility");
		
		UGA_Emote_Flavor_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Flavor.GA_Emote_Flavor_C.ExecuteUbergraph_GA_Emote_Flavor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Flavor_C::ExecuteUbergraph_GA_Emote_Flavor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Flavor.GA_Emote_Flavor_C.ExecuteUbergraph_GA_Emote_Flavor");
		
		UGA_Emote_Flavor_C_ExecuteUbergraph_GA_Emote_Flavor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Emote_Flavor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Emote_Flavor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Emote_Flavor.GA_Emote_Flavor_C");
		return ptr;
	}

}


