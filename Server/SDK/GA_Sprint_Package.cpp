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
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.EndSprintHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::EndSprintHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.EndSprintHUD");
		
		UGA_Sprint_C_EndSprintHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.StartSprintHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CastTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Sprint_C::StartSprintHUD(float CastTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.StartSprintHUD");
		
		UGA_Sprint_C_StartSprintHUD_Params params {};
		params.CastTime = CastTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C");
		
		UGA_Sprint_C_OnStateInterrupted_D70BFB76427505AF993D609AC9934F2C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnStateEnded_D70BFB76427505AF993D609AC9934F2C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnStateEnded_D70BFB76427505AF993D609AC9934F2C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnStateEnded_D70BFB76427505AF993D609AC9934F2C");
		
		UGA_Sprint_C_OnStateEnded_D70BFB76427505AF993D609AC9934F2C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnApplied_A72AD8D04F3B3C97A2458FBE112A4790
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Sprint_C::OnApplied_A72AD8D04F3B3C97A2458FBE112A4790(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnApplied_A72AD8D04F3B3C97A2458FBE112A4790");
		
		UGA_Sprint_C_OnApplied_A72AD8D04F3B3C97A2458FBE112A4790_Params params {};
		params.Source = Source;
		params.SpecHandle = SpecHandle;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnCancel_8AE9FEA047AA7A870564CC93C44E1E24
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnCancel_8AE9FEA047AA7A870564CC93C44E1E24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnCancel_8AE9FEA047AA7A870564CC93C44E1E24");
		
		UGA_Sprint_C_OnCancel_8AE9FEA047AA7A870564CC93C44E1E24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnCancel_BD1837F2479F6C09633F78AD2862BAD2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnCancel_BD1837F2479F6C09633F78AD2862BAD2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnCancel_BD1837F2479F6C09633F78AD2862BAD2");
		
		UGA_Sprint_C_OnCancel_BD1837F2479F6C09633F78AD2862BAD2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnFinish_CE0FB0E74408B744FA5A7BB47046CB10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnFinish_CE0FB0E74408B744FA5A7BB47046CB10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnFinish_CE0FB0E74408B744FA5A7BB47046CB10");
		
		UGA_Sprint_C_OnFinish_CE0FB0E74408B744FA5A7BB47046CB10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.InvalidHandle_711037F745707DCAFF2A8C86C95CC031
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::InvalidHandle_711037F745707DCAFF2A8C86C95CC031()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.InvalidHandle_711037F745707DCAFF2A8C86C95CC031");
		
		UGA_Sprint_C_InvalidHandle_711037F745707DCAFF2A8C86C95CC031_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnRemoved_711037F745707DCAFF2A8C86C95CC031
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnRemoved_711037F745707DCAFF2A8C86C95CC031()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnRemoved_711037F745707DCAFF2A8C86C95CC031");
		
		UGA_Sprint_C_OnRemoved_711037F745707DCAFF2A8C86C95CC031_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Sprint_C::OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A");
		
		UGA_Sprint_C_OnActivate_4EC91BF54B2EA9FAB7A88D9A21C9F04A_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A");
		
		UGA_Sprint_C_OnStateInterrupted_CE0609CC454AB8343CE0618523CDB11A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnStateEnded_CE0609CC454AB8343CE0618523CDB11A
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Sprint_C::OnStateEnded_CE0609CC454AB8343CE0618523CDB11A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnStateEnded_CE0609CC454AB8343CE0618523CDB11A");
		
		UGA_Sprint_C_OnStateEnded_CE0609CC454AB8343CE0618523CDB11A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Sprint_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility");
		
		UGA_Sprint_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Sprint_C::K2_OnEndAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility");
		
		UGA_Sprint_C_K2_OnEndAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Sprint_C::ExecuteUbergraph_GA_Sprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint");
		
		UGA_Sprint_C_ExecuteUbergraph_GA_Sprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Sprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Sprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Sprint.GA_Sprint_C");
		return ptr;
	}

}


