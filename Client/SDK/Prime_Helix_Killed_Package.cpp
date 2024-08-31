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
	 * 		Name   -> Function Prime_Helix_Killed.Prime_Helix_Killed_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPrime_Helix_Killed_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prime_Helix_Killed.Prime_Helix_Killed_C.Construct");
		
		UPrime_Helix_Killed_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Prime_Helix_Killed.Prime_Helix_Killed_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrime_Helix_Killed_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prime_Helix_Killed.Prime_Helix_Killed_C.OnAnimationFinished");
		
		UPrime_Helix_Killed_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function Prime_Helix_Killed.Prime_Helix_Killed_C.ExecuteUbergraph_Prime_Helix_Killed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrime_Helix_Killed_C::ExecuteUbergraph_Prime_Helix_Killed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Prime_Helix_Killed.Prime_Helix_Killed_C.ExecuteUbergraph_Prime_Helix_Killed");
		
		UPrime_Helix_Killed_C_ExecuteUbergraph_Prime_Helix_Killed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrime_Helix_Killed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrime_Helix_Killed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Prime_Helix_Killed.Prime_Helix_Killed_C");
		return ptr;
	}

}


