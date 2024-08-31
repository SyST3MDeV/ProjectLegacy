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
	 * 		Name   -> Function GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C.OnApplied_06FF9A3D4ECEBF76962748A14DD149EB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_CarriedBuff_MoveSpeedOnHit_C::OnApplied_06FF9A3D4ECEBF76962748A14DD149EB(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C.OnApplied_06FF9A3D4ECEBF76962748A14DD149EB");
		
		UGA_CarriedBuff_MoveSpeedOnHit_C_OnApplied_06FF9A3D4ECEBF76962748A14DD149EB_Params params {};
		params.Target = Target;
		params.SpecHandle = SpecHandle;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_CarriedBuff_MoveSpeedOnHit_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C.K2_ActivateAbility");
		
		UGA_CarriedBuff_MoveSpeedOnHit_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C.ExecuteUbergraph_GA_CarriedBuff_MoveSpeedOnHit
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_CarriedBuff_MoveSpeedOnHit_C::ExecuteUbergraph_GA_CarriedBuff_MoveSpeedOnHit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C.ExecuteUbergraph_GA_CarriedBuff_MoveSpeedOnHit");
		
		UGA_CarriedBuff_MoveSpeedOnHit_C_ExecuteUbergraph_GA_CarriedBuff_MoveSpeedOnHit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_CarriedBuff_MoveSpeedOnHit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_CarriedBuff_MoveSpeedOnHit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_CarriedBuff_MoveSpeedOnHit.GA_CarriedBuff_MoveSpeedOnHit_C");
		return ptr;
	}

}


