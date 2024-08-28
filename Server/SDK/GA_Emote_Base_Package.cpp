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
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnChange_089A8CA14C8FB7A21B3B3CB58875951F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Emote_Base_C::OnChange_089A8CA14C8FB7A21B3B3CB58875951F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnChange_089A8CA14C8FB7A21B3B3CB58875951F");
		
		UGA_Emote_Base_C_OnChange_089A8CA14C8FB7A21B3B3CB58875951F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnApplied_469E76E14A18DA440CC1ABB3348B6E48
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_Emote_Base_C::OnApplied_469E76E14A18DA440CC1ABB3348B6E48(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnApplied_469E76E14A18DA440CC1ABB3348B6E48");
		
		UGA_Emote_Base_C_OnApplied_469E76E14A18DA440CC1ABB3348B6E48_Params params {};
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
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Emote_Base_C::OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE");
		
		UGA_Emote_Base_C_OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1");
		
		UGA_Emote_Base_C_OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1");
		
		UGA_Emote_Base_C_OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1");
		
		UGA_Emote_Base_C_OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnCancelled_25F51C8A425E753C13138E92FB4B3BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnCancelled_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnCancelled_25F51C8A425E753C13138E92FB4B3BC1");
		
		UGA_Emote_Base_C_OnCancelled_25F51C8A425E753C13138E92FB4B3BC1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1");
		
		UGA_Emote_Base_C_OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1");
		
		UGA_Emote_Base_C_OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.OnCompleted_25F51C8A425E753C13138E92FB4B3BC1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::OnCompleted_25F51C8A425E753C13138E92FB4B3BC1(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.OnCompleted_25F51C8A425E753C13138E92FB4B3BC1");
		
		UGA_Emote_Base_C_OnCompleted_25F51C8A425E753C13138E92FB4B3BC1_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_Emote_Base_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.K2_ActivateAbility");
		
		UGA_Emote_Base_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_Emote_Base.GA_Emote_Base_C.ExecuteUbergraph_GA_Emote_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_Base_C::ExecuteUbergraph_GA_Emote_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote_Base.GA_Emote_Base_C.ExecuteUbergraph_GA_Emote_Base");
		
		UGA_Emote_Base_C_ExecuteUbergraph_GA_Emote_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Emote_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Emote_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Emote_Base.GA_Emote_Base_C");
		return ptr;
	}

}


