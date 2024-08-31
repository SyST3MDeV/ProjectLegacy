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
	 * 		Name   -> Function GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C.Added_39751D1743CCD7A2462549A121C7F377
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_PrimeHelix_Passive_C::Added_39751D1743CCD7A2462549A121C7F377()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C.Added_39751D1743CCD7A2462549A121C7F377");
		
		UGA_PrimeHelix_Passive_C_Added_39751D1743CCD7A2462549A121C7F377_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_PrimeHelix_Passive_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C.K2_ActivateAbility");
		
		UGA_PrimeHelix_Passive_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C.ExecuteUbergraph_GA_PrimeHelix_Passive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_PrimeHelix_Passive_C::ExecuteUbergraph_GA_PrimeHelix_Passive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C.ExecuteUbergraph_GA_PrimeHelix_Passive");
		
		UGA_PrimeHelix_Passive_C_ExecuteUbergraph_GA_PrimeHelix_Passive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_PrimeHelix_Passive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_PrimeHelix_Passive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_PrimeHelix_Passive.GA_PrimeHelix_Passive_C");
		return ptr;
	}

}


