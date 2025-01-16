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
	 * 		Name   -> Function GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C.OnApplied_F496FCFC47E7B1F67E5588BB80A651FD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FSpecHandle*                                 Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FActiveHandle                               SpecHandle                                                 (Parm)
	 */
	void UGA_Card_OnHit_WhenCW_Burn_C::OnApplied_F496FCFC47E7B1F67E5588BB80A651FD(class FSpecHandle* Target, const struct FActiveHandle& SpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C.OnApplied_F496FCFC47E7B1F67E5588BB80A651FD");
		
		UGA_Card_OnHit_WhenCW_Burn_C_OnApplied_F496FCFC47E7B1F67E5588BB80A651FD_Params params {};
		params.Target = Target;
		params.SpecHandle = SpecHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Card_OnHit_WhenCW_Burn_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C.K2_ActivateAbility");
		
		UGA_Card_OnHit_WhenCW_Burn_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EEF450
	 * 		Name   -> Function GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C.ExecuteUbergraph_GA_Card_OnHit_WhenCW_Burn
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Card_OnHit_WhenCW_Burn_C::ExecuteUbergraph_GA_Card_OnHit_WhenCW_Burn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C.ExecuteUbergraph_GA_Card_OnHit_WhenCW_Burn");
		
		UGA_Card_OnHit_WhenCW_Burn_C_ExecuteUbergraph_GA_Card_OnHit_WhenCW_Burn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Card_OnHit_WhenCW_Burn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_OnHit_WhenCW_Burn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GA_Card_OnHit_WhenCW_Burn.GA_Card_OnHit_WhenCW_Burn_C");
		return ptr;
	}

}


