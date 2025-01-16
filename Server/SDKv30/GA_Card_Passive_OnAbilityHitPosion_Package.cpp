/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.OnApplied_F8D8D1CF494908AE35A3279D5FB18D84
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FSpecHandle*                                 Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FActiveHandle                               SpecHandle                                                 (Parm)
	 */
	void UGA_Card_Passive_OnAbilityHitPosion_C::OnApplied_F8D8D1CF494908AE35A3279D5FB18D84(class FSpecHandle* Target, const struct FActiveHandle& SpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.OnApplied_F8D8D1CF494908AE35A3279D5FB18D84");
		
		UGA_Card_Passive_OnAbilityHitPosion_C_OnApplied_F8D8D1CF494908AE35A3279D5FB18D84_Params params {};
		params.Target = Target;
		params.SpecHandle = SpecHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_Passive_OnAbilityHitPosion_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.K2_ActivateAbility");
		
		UGA_Card_Passive_OnAbilityHitPosion_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_Passive_OnAbilityHitPosion_C::ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C.ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion");
		
		UGA_Card_Passive_OnAbilityHitPosion_C_ExecuteUbergraph_GA_Card_Passive_OnAbilityHitPosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_Passive_OnAbilityHitPosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Passive_OnAbilityHitPosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_Passive_OnAbilityHitPosion.GA_Card_Passive_OnAbilityHitPosion_C");
		return ptr;
	}

}


