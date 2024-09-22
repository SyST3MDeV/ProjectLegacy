/**
 * Name: Paragon
 * Version: v34
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02A70180
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InAbilityToActivate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowRemoteActivation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass");
		
		UAbilitySystemComponent_TryActivateAbilityByClass_Params params {};
		params.InAbilityToActivate = InAbilityToActivate;
		params.bAllowRemoteActivation = bAllowRemoteActivation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70070
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTagContainer                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowRemoteActivation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag");
		
		UAbilitySystemComponent_TryActivateAbilitiesByTag_Params params {};
		params.GameplayTagContainer = GameplayTagContainer;
		params.bAllowRemoteActivation = bAllowRemoteActivation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FC50
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAbilitySystemComponent::TargetConfirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm");
		
		UAbilitySystemComponent_TargetConfirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FC30
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAbilitySystemComponent::TargetCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetCancel");
		
		UAbilitySystemComponent_TargetCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F810
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               NewInhibit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited");
		
		UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params params {};
		params.NewInhibit = NewInhibit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F250
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel");
		
		UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params params {};
		params.ActiveHandle = ActiveHandle;
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6EFB0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               InputPressed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          TriggerEventData                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");
		
		UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		params.InputPressed = InputPressed;
		params.PredictionKey = PredictionKey;
		params.TriggerEventData = TriggerEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6EE50
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               InputPressed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");
		
		UAbilitySystemComponent_ServerTryActivateAbility_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		params.InputPressed = InputPressed;
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6ECC0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              CurrentPredictionKey                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled");
		
		UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params params {};
		params.AbilityHandle = AbilityHandle;
		params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
		params.CurrentPredictionKey = CurrentPredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6EA80
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ApplicationTag                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              CurrentPredictionKey                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData");
		
		UAbilitySystemComponent_ServerSetReplicatedTargetData_Params params {};
		params.AbilityHandle = AbilityHandle;
		params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
		params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
		params.ApplicationTag = ApplicationTag;
		params.CurrentPredictionKey = CurrentPredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E840
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		EAbilityGenericReplicatedEvent                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              CurrentPredictionKey                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      VectorPayload                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload");
		
		UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params params {};
		params.EventType = EventType;
		params.AbilityHandle = AbilityHandle;
		params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
		params.CurrentPredictionKey = CurrentPredictionKey;
		params.VectorPayload = VectorPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E670
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		EAbilityGenericReplicatedEvent                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              CurrentPredictionKey                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent");
		
		UAbilitySystemComponent_ServerSetReplicatedEvent_Params params {};
		params.EventType = EventType;
		params.AbilityHandle = AbilityHandle;
		params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
		params.CurrentPredictionKey = CurrentPredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E5C0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased");
		
		UAbilitySystemComponent_ServerSetInputReleased_Params params {};
		params.AbilityHandle = AbilityHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E510
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed");
		
		UAbilitySystemComponent_ServerSetInputPressed_Params params {};
		params.AbilityHandle = AbilityHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E4C0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void UAbilitySystemComponent::ServerPrintDebug_Request()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request");
		
		UAbilitySystemComponent_ServerPrintDebug_Request_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E2F0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToEnd                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility");
		
		UAbilitySystemComponent_ServerEndAbility_Params params {};
		params.AbilityToEnd = AbilityToEnd;
		params.ActivationInfo = ActivationInfo;
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E1F0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate");
		
		UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params params {};
		params.ClientAnimMontage = ClientAnimMontage;
		params.InPlayRate = InPlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6E070
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClientPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NextSectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const class FName& SectionName, const class FName& NextSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName");
		
		UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params params {};
		params.ClientAnimMontage = ClientAnimMontage;
		params.ClientPosition = ClientPosition;
		params.SectionName = SectionName;
		params.NextSectionName = NextSectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6DF70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName");
		
		UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params params {};
		params.ClientAnimMontage = ClientAnimMontage;
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6DE10
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToCancel                                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility");
		
		UAbilitySystemComponent_ServerCancelAbility_Params params {};
		params.AbilityToCancel = AbilityToCancel;
		params.ActivationInfo = ActivationInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D890
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect");
		
		UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
		params.StacksToRemove = StacksToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D7C0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32_t StacksToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect");
		
		UAbilitySystemComponent_RemoveActiveGameplayEffect_Params params {};
		params.Handle = Handle;
		params.StacksToRemove = StacksToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D6E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Tags                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags");
		
		UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params params {};
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D600
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Tags                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags");
		
		UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params params {};
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D520
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Tags                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags");
		
		UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params params {};
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D520
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       Tags                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags");
		
		UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params params {};
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D220
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage");
		
		UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D200
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilitySystemComponent::OnRep_PredictionKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey");
		
		UAbilitySystemComponent_OnRep_PredictionKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D1E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilitySystemComponent::OnRep_OwningActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor");
		
		UAbilitySystemComponent_OnRep_OwningActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D1C0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UAbilitySystemComponent::OnRep_ActivateAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities");
		
		UAbilitySystemComponent_OnRep_ActivateAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6B890
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayCueTags                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params params {};
		params.GameplayCueTags = GameplayCueTags;
		params.PredictionKey = PredictionKey;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6B6C0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayCueTags                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params params {};
		params.GameplayCueTags = GameplayCueTags;
		params.PredictionKey = PredictionKey;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6B450
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayCueTags                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params params {};
		params.GameplayCueTags = GameplayCueTags;
		params.PredictionKey = PredictionKey;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6B220
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.PredictionKey = PredictionKey;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6B110
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayEffectSpecForRPC                   Spec                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params params {};
		params.Spec = Spec;
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6AF90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.PredictionKey = PredictionKey;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6AB30
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.PredictionKey = PredictionKey;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6AA30
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayEffectSpecForRPC                   Spec                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params params {};
		params.Spec = Spec;
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6AD60
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.PredictionKey = PredictionKey;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A8B0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded");
		
		UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.PredictionKey = PredictionKey;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A050
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec");
		
		UAbilitySystemComponent_MakeOutgoingSpec_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.Level = Level;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69D90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext");
		
		UAbilitySystemComponent_MakeEffectContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69C40
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Attributes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDataTable*                                  DataTable                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UDataTable* DataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats");
		
		UAbilitySystemComponent_K2_InitStats_Params params {};
		params.Attributes = Attributes;
		params.DataTable = DataTable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69380
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameplayEffect*                             GameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget");
		
		UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.Target = Target;
		params.Level = Level;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69200
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf");
		
		UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.Level = Level;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68830
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive");
		
		UAbilitySystemComponent_IsGameplayCueActive_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68650
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited");
		
		UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A681A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemComponent::GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec");
		
		UAbilitySystemComponent_GetOutgoingSpec_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A675A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude");
		
		UAbilitySystemComponent_GetGameplayEffectMagnitude_Params params {};
		params.Handle = Handle;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A674A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      SourceGameplayEffect                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnforceOnGoingCheck                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount");
		
		UAbilitySystemComponent_GetGameplayEffectCount_Params params {};
		params.SourceGameplayEffect = SourceGameplayEffect;
		params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
		params.bEnforceOnGoingCheck = bEnforceOnGoingCheck;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A669A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayEffectContextHandle UAbilitySystemComponent::GetEffectContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetEffectContext");
		
		UAbilitySystemComponent_GetEffectContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A637E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility");
		
		UAbilitySystemComponent_ClientTryActivateAbility_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A636B0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		EAbilityGenericReplicatedEvent                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent");
		
		UAbilitySystemComponent_ClientSetReplicatedEvent_Params params {};
		params.EventType = EventType;
		params.AbilityHandle = AbilityHandle;
		params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A635B0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<class FString>                              Strings                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameFlags                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<class FString> Strings, int32_t GameFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response");
		
		UAbilitySystemComponent_ClientPrintDebug_Response_Params params {};
		params.Strings = Strings;
		params.GameFlags = GameFlags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A634A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToEnd                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility");
		
		UAbilitySystemComponent_ClientEndAbility_Params params {};
		params.AbilityToEnd = AbilityToEnd;
		params.ActivationInfo = ActivationInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63390
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToCancel                                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility");
		
		UAbilitySystemComponent_ClientCancelAbility_Params params {};
		params.AbilityToCancel = AbilityToCancel;
		params.ActivationInfo = ActivationInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63190
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          TriggerEventData                                           (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData");
		
		UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		params.PredictionKey = PredictionKey;
		params.TriggerEventData = TriggerEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A630A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPredictionKey                              PredictionKey                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed");
		
		UAbilitySystemComponent_ClientActivateAbilitySucceed_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62FD0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm, NativeAccessSpecifierPublic)
	 * 		int16_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed");
		
		UAbilitySystemComponent_ClientActivateAbilityFailed_Params params {};
		params.AbilityToActivate = AbilityToActivate;
		params.PredictionKey = PredictionKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A623D0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget");
		
		UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.Target = Target;
		params.Level = Level;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62250
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf");
		
		UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.Level = Level;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62020
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle* SpecHandle, class UAbilitySystemComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget");
		
		UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecHandle != nullptr)
			*SpecHandle = params.SpecHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A61F40
	 * 		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf");
		
		UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecHandle != nullptr)
			*SpecHandle = params.SpecHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature");
		
		UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32_t InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature");
		
		UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params params {};
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilitySystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilitySystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F510
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldBlockAbilities                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities");
		
		UGameplayAbility_SetShouldBlockOtherAbilities_Params params {};
		params.bShouldBlockAbilities = bShouldBlockAbilities;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F320
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanBeCanceled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled");
		
		UGameplayAbility_SetCanBeCanceled_Params params {};
		params.bCanBeCanceled = bCanBeCanceled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6DAB0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          Payload                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SendGameplayEvent");
		
		UGameplayAbility_SendGameplayEvent_Params params {};
		params.EventTag = EventTag;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D990
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameplayAbility::RemoveGrantedByEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect");
		
		UGameplayAbility_RemoveGrantedByEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A670
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.MontageStop
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              OverrideBlendOutTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageStop");
		
		UGameplayAbility_MontageStop_Params params {};
		params.OverrideBlendOutTime = OverrideBlendOutTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A5B0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        FromSectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ToSectionName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::MontageSetNextSectionName(const class FName& FromSectionName, const class FName& ToSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName");
		
		UGameplayAbility_MontageSetNextSectionName_Params params {};
		params.FromSectionName = FromSectionName;
		params.ToSectionName = ToSectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A530
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::MontageJumpToSection(const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageJumpToSection");
		
		UGameplayAbility_MontageJumpToSection_Params params {};
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A440
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");
		
		UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A3B0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
	 */
	struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor");
		
		UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69F50
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec");
		
		UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          Payload                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent");
		
		UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params params {};
		params.ActorInfo = ActorInfo;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69D00
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue");
		
		UGameplayAbility_K2_RemoveGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGameplayAbility::K2_OnEndAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility");
		
		UGameplayAbility_K2_OnEndAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69A80
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	 * 		Flags  -> (Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams");
		
		UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69950
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue");
		
		UGameplayAbility_K2_ExecuteGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69910
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_EndAbility
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 */
	void UGameplayAbility::K2_EndAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_EndAbility");
		
		UGameplayAbility_K2_EndAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGameplayAbility::K2_CommitExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitExecute");
		
		UGameplayAbility_K2_CommitExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69870
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               BroadcastCommitEvent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost");
		
		UGameplayAbility_K2_CommitAbilityCost_Params params {};
		params.BroadcastCommitEvent = BroadcastCommitEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69790
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               BroadcastCommitEvent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceCooldown                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown");
		
		UGameplayAbility_K2_CommitAbilityCooldown_Params params {};
		params.BroadcastCommitEvent = BroadcastCommitEvent;
		params.ForceCooldown = ForceCooldown;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69760
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameplayAbility::K2_CommitAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbility");
		
		UGameplayAbility_K2_CommitAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69730
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameplayAbility::K2_CheckAbilityCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost");
		
		UGameplayAbility_K2_CheckAbilityCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69700
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameplayAbility::K2_CheckAbilityCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown");
		
		UGameplayAbility_K2_CheckAbilityCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility");
		
		UGameplayAbility_K2_CanActivateAbility_Params params {};
		params.ActorInfo = ActorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RelevantTags != nullptr)
			*RelevantTags = params.RelevantTags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69530
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Stacks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget");
		
		UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params params {};
		params.TargetData = TargetData;
		params.GameplayEffect = GameplayEffect;
		params.GameplayEffectLevel = GameplayEffectLevel;
		params.Stacks = Stacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A690F0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Stacks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner");
		
		UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.GameplayEffectLevel = GameplayEffectLevel;
		params.Stacks = Stacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68F40
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   EffectSpecHandle                                           (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget");
		
		UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params params {};
		params.EffectSpecHandle = EffectSpecHandle;
		params.TargetData = TargetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68E50
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   EffectSpecHandle                                           (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner");
		
		UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params params {};
		params.EffectSpecHandle = EffectSpecHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68CF0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemoveOnAbilityEnd                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue");
		
		UGameplayAbility_K2_AddGameplayCue_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.Context = Context;
		params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent");
		
		UGameplayAbility_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGameplayAbility::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility");
		
		UGameplayAbility_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68810
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UGameplayAbility::InvalidateClientPredictionKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey");
		
		UGameplayAbility_InvalidateClientPredictionKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A682D0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo");
		
		UGameplayAbility_GetOwningComponentFromActorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A682A0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo");
		
		UGameplayAbility_GetOwningActorFromActorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A680A0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UGameplayAbility::GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec");
		
		UGameplayAbility_GetOutgoingGameplayEffectSpec_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A676F0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext");
		
		UGameplayAbility_GetGrantedByEffectContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A667A0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UGameplayAbility::GetCurrentSourceObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject");
		
		UGameplayAbility_GetCurrentSourceObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66770
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAnimMontage* UGameplayAbility::GetCurrentMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentMontage");
		
		UGameplayAbility_GetCurrentMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66740
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGameplayAbility::GetCooldownTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining");
		
		UGameplayAbility_GetCooldownTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66640
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            OptionalTargetData                                         (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetContextFromOwner");
		
		UGameplayAbility_GetContextFromOwner_Params params {};
		params.OptionalTargetData = OptionalTargetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66610
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo");
		
		UGameplayAbility_GetAvatarActorFromActorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66440
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetActorInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetActorInfo");
		
		UGameplayAbility_GetActorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65E60
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UGameplayAbility::GetAbilityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilityLevel");
		
		UGameplayAbility_GetAbilityLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64D30
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::EndTaskByInstanceName(const class FName& InstanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName");
		
		UGameplayAbility_EndTaskByInstanceName_Params params {};
		params.InstanceName = InstanceName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64CB0
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.EndAbilityState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        OptionalStateNameToEnd                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::EndAbilityState(const class FName& OptionalStateNameToEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndAbilityState");
		
		UGameplayAbility_EndAbilityState_Params params {};
		params.OptionalStateNameToEnd = OptionalStateNameToEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63860
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEndTask                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::ConfirmTaskByInstanceName(const class FName& InstanceName, bool bEndTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName");
		
		UGameplayAbility_ConfirmTaskByInstanceName_Params params {};
		params.InstanceName = InstanceName;
		params.bEndTask = bEndTask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62F50
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::CancelTaskByInstanceName(const class FName& InstanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName");
		
		UGameplayAbility_CancelTaskByInstanceName_Params params {};
		params.InstanceName = InstanceName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62860
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       WithGrantedTags                                            (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32_t StacksToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags");
		
		UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params params {};
		params.WithGrantedTags = WithGrantedTags;
		params.StacksToRemove = StacksToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62750
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       WithAssetTags                                              (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32_t StacksToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags");
		
		UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params params {};
		params.WithAssetTags = WithAssetTags;
		params.StacksToRemove = StacksToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62580
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Stacks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget");
		
		UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params params {};
		params.TargetData = TargetData;
		params.GameplayEffectClass = GameplayEffectClass;
		params.GameplayEffectLevel = GameplayEffectLevel;
		params.Stacks = Stacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62140
	 * 		Name   -> Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Stacks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner");
		
		UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.GameplayEffectLevel = GameplayEffectLevel;
		params.Stacks = Stacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024EC3E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts");
		
		UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024E3880
	 * 		Name   -> Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns");
		
		UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilitySystemGlobals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilitySystemGlobals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x024E39E0
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	 * 		Flags  -> (Native, Public)
	 */
	void AGameplayAbilityTargetActor::ConfirmTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting");
		
		AGameplayAbilityTargetActor_ConfirmTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00ABDE50
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	 * 		Flags  -> (Native, Public)
	 */
	void AGameplayAbilityTargetActor::CancelTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting");
		
		AGameplayAbilityTargetActor_CancelTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityTargetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityTargetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72800
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayTargetingConfirmation                     ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetDataUsingActor(class UObject* WorldContextObject, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor");
		
		UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.ConfirmationType = ConfirmationType;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A726C0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayTargetingConfirmation                     ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetData(class UObject* WorldContextObject, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData");
		
		UAbilityTask_WaitTargetData_WaitTargetData_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.ConfirmationType = ConfirmationType;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D500
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback");
		
		UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D400
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActivationTag                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback");
		
		UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params {};
		params.Data = Data;
		params.ActivationTag = ActivationTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D340
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback");
		
		UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D280
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback");
		
		UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65A90
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitTargetData::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor");
		
		UAbilityTask_WaitTargetData_FinishSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62C20
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor");
		
		UAbilityTask_WaitTargetData_BeginSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitTargetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitTargetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectCalculation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectCalculation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65490
	 * 		Name   -> Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FGameplayEffectCustomExecutionParameters    ExecutionParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute");
		
		UGameplayEffectExecutionCalculation_Execute_Params params {};
		params.ExecutionParams = ExecutionParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExecutionOutput != nullptr)
			*OutExecutionOutput = params.OutExecutionOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectExecutionCalculation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectExecutionCalculation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62D30
	 * 		Name   -> Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude");
		
		UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayModMagnitudeCalculation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayModMagnitudeCalculation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72940
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive");
		
		AGameplayCueNotify_Actor_WhileActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CE40
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove");
		
		AGameplayCueNotify_Actor_OnRemove_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CD70
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed");
		
		AGameplayCueNotify_Actor_OnOwnerDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C350
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute");
		
		AGameplayCueNotify_Actor_OnExecute_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6BDA0
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive");
		
		AGameplayCueNotify_Actor_OnActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue");
		
		AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params params {};
		params.MyTarget = MyTarget;
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69930
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AGameplayCueNotify_Actor::K2_EndGameplayCue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue");
		
		AGameplayCueNotify_Actor_K2_EndGameplayCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayCueNotify_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayCueNotify_Actor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72B00
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive");
		
		UGameplayCueNotify_Static_WhileActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D000
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove");
		
		UGameplayCueNotify_Static_OnRemove_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C510
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute");
		
		UGameplayCueNotify_Static_OnExecute_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6BF60
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnActive");
		
		UGameplayCueNotify_Static_OnActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue");
		
		UGameplayCueNotify_Static_K2_HandleGameplayCue_Params params {};
		params.MyTarget = MyTarget;
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueNotify_Static.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueNotify_Static::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueTranslator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueTranslator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62E00
	 * 		Name   -> Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect");
		
		UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params params {};
		params.GameplayEffect = GameplayEffect;
		params.Spec = Spec;
		params.ASC = ASC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectCustomApplicationRequirement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectCustomApplicationRequirement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65B50
	 * 		Name   -> Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UGameplayCueInterface::ForwardGameplayCueToParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent");
		
		UGameplayCueInterface_ForwardGameplayCueToParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGameplayCueInterface::BlueprintCustomHandler(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler");
		
		UGameplayCueInterface_BlueprintCustomHandler_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FF70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin");
		
		UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FE70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult");
		
		UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params params {};
		params.HitResult = HitResult;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FD70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint");
		
		UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FC70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor");
		
		UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F700
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax");
		
		UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params params {};
		params.SpecHandle = SpecHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F5A0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32_t StackCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount");
		
		UAbilitySystemBlueprintLibrary_SetStackCount_Params params {};
		params.SpecHandle = SpecHandle;
		params.StackCount = StackCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F3B0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration");
		
		UAbilitySystemBlueprintLibrary_SetDuration_Params params {};
		params.SpecHandle = SpecHandle;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6DC50
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                EventTag                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          Payload                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemBlueprintLibrary::STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor");
		
		UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params params {};
		params.Actor = Actor;
		params.EventTag = EventTag;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6BB00
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAttribute                          AttributeA                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          AttributeB                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute");
		
		UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params params {};
		params.AttributeA = AttributeA;
		params.AttributeB = AttributeB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A220
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UGameplayEffect*                             InGameplayEffect                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InEffectCauser                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle");
		
		UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params {};
		params.InGameplayEffect = InGameplayEffect;
		params.InInstigator = InInstigator;
		params.InEffectCauser = InEffectCauser;
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A69E00
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTargetDataFilter                   Filter                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      FilterActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle");
		
		UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params params {};
		params.Filter = Filter;
		params.FilterActor = FilterActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68BF0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_IsValid(const struct FGameplayAttribute& Attribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid");
		
		UAbilitySystemBlueprintLibrary_IsValid_Params params {};
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68A60
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer");
		
		UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A688D0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled");
		
		UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68680
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult");
		
		UAbilitySystemBlueprintLibrary_HasHitResult_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68530
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin");
		
		UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68410
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform");
		
		UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A68300
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint");
		
		UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67F00
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin");
		
		UAbilitySystemBlueprintLibrary_GetOrigin_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67D70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude");
		
		UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params params {};
		params.SpecHandle = SpecHandle;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67BB0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform");
		
		UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67A20
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor");
		
		UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67900
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData");
		
		UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params params {};
		params.HitResult = HitResult;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67760
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult");
		
		UAbilitySystemBlueprintLibrary_GetHitResult_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67230
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal");
		
		UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params params {};
		params.TargetActor = TargetActor;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Normal != nullptr)
			*Normal = params.Normal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A67010
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection");
		
		UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params params {};
		params.TargetActor = TargetActor;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66E90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     AbilitySystem                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccessfullyFoundAttribute                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent");
		
		UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params params {};
		params.AbilitySystem = AbilitySystem;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccessfullyFoundAttribute != nullptr)
			*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66D10
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     AbilitySystemComponent                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccessfullyFoundAttribute                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent");
		
		UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params params {};
		params.AbilitySystemComponent = AbilitySystemComponent;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccessfullyFoundAttribute != nullptr)
			*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66B90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccessfullyFoundAttribute                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase");
		
		UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params params {};
		params.Actor = Actor;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccessfullyFoundAttribute != nullptr)
			*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66A10
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccessfullyFoundAttribute                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute");
		
		UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params params {};
		params.Actor = Actor;
		params.Attribute = Attribute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccessfullyFoundAttribute != nullptr)
			*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66890
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext");
		
		UAbilitySystemBlueprintLibrary_GetEffectContext_Params params {};
		params.SpecHandle = SpecHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A667D0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemBlueprintLibrary::STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData");
		
		UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params params {};
		params.TargetData = TargetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A664D0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UAbilitySystemBlueprintLibrary::STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData");
		
		UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A662B0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemBlueprintLibrary::STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount");
		
		UAbilitySystemBlueprintLibrary_GetActorCount_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A660E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex");
		
		UAbilitySystemBlueprintLibrary_GetActorByIndex_Params params {};
		params.Parameters = Parameters;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A66060
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount");
		
		UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params params {};
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65FE0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount");
		
		UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params params {};
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65F10
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString");
		
		UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params params {};
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65E90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::STATIC_GetAbilitySystemComponent(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent");
		
		UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65B70
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGameplayCueEvent                                  EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemBlueprintLibrary::STATIC_ForwardGameplayCueToTarget(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget");
		
		UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params params {};
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65700
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetDataHandle                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTargetDataFilterHandle             ActorFilterClass                                           (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData");
		
		UAbilitySystemBlueprintLibrary_FilterTargetData_Params params {};
		params.TargetDataHandle = TargetDataHandle;
		params.ActorFilterClass = ActorFilterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A651D0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     AbilitySystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       SourceTags                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       TargetTags                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BaseValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase");
		
		UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params params {};
		params.AbilitySystem = AbilitySystem;
		params.Attribute = Attribute;
		params.SourceTags = SourceTags;
		params.TargetTags = TargetTags;
		params.BaseValue = BaseValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64F50
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     AbilitySystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       SourceTags                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       TargetTags                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UAbilitySystemBlueprintLibrary::STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags");
		
		UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params params {};
		params.AbilitySystem = AbilitySystem;
		params.Attribute = Attribute;
		params.SourceTags = SourceTags;
		params.TargetTags = TargetTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64DB0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAttribute                          AttributeA                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          AttributeB                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute");
		
		UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params params {};
		params.AttributeA = AttributeA;
		params.AttributeB = AttributeB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64B90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemBlueprintLibrary::STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin");
		
		UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params params {};
		params.EffectContext = EffectContext;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64AB0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid");
		
		UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A649D0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled");
		
		UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A648F0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult");
		
		UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64810
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class UObject* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject");
		
		UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64730
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor");
		
		UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64640
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVector UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin");
		
		UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64560
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor");
		
		UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64460
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult");
		
		UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64380
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser");
		
		UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params params {};
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A64120
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  HitResult                                                  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAbilitySystemBlueprintLibrary::STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult");
		
		UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params params {};
		params.EffectContext = EffectContext;
		params.HitResult = HitResult;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63FE0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor");
		
		UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params params {};
		params.TargetData = TargetData;
		params.Index = Index;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63D00
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    SourceTagReqs                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    TargetTagReqs                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAbilitySystemBlueprintLibrary::STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements");
		
		UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceTagReqs != nullptr)
			*SourceTagReqs = params.SourceTagReqs;
		if (TargetTagReqs != nullptr)
			*TargetTagReqs = params.TargetTagReqs;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A61D90
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        DataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const class FName& DataName, float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude");
		
		UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params params {};
		params.SpecHandle = SpecHandle;
		params.DataName = DataName;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60B80
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetHandle                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            HandleToAdd                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle");
		
		UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params params {};
		params.TargetHandle = TargetHandle;
		params.HandleToAdd = HandleToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A609E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec                                   (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec");
		
		UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params params {};
		params.SpecHandle = SpecHandle;
		params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60840
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       NewGameplayTags                                            (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags");
		
		UAbilitySystemBlueprintLibrary_AddGrantedTags_Params params {};
		params.SpecHandle = SpecHandle;
		params.NewGameplayTags = NewGameplayTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A606E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                NewGameplayTag                                             (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag");
		
		UAbilitySystemBlueprintLibrary_AddGrantedTag_Params params {};
		params.SpecHandle = SpecHandle;
		params.NewGameplayTag = NewGameplayTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60540
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       NewGameplayTags                                            (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags");
		
		UAbilitySystemBlueprintLibrary_AddAssetTags_Params params {};
		params.SpecHandle = SpecHandle;
		params.NewGameplayTags = NewGameplayTags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A603E0
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                NewGameplayTag                                             (Parm, NativeAccessSpecifierPublic)
	 */
	struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag");
		
		UAbilitySystemBlueprintLibrary_AddAssetTag_Params params {};
		params.SpecHandle = SpecHandle;
		params.NewGameplayTag = NewGameplayTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60230
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayAbilityTargetingLocationInfo       SourceLocation                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetingLocationInfo       TargetLocation                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations");
		
		UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params params {};
		params.SourceLocation = SourceLocation;
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60130
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult");
		
		UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60010
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OneTargetPerHandle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray");
		
		UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params params {};
		params.ActorArray = ActorArray;
		params.OneTargetPerHandle = OneTargetPerHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A5FF50
	 * 		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor");
		
		UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilitySystemBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilitySystemBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbilitySystemDebugHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbilitySystemDebugHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilitySystemInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilitySystemInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbilitySystemTestPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbilitySystemTestPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60CC0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldDirection                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAdditive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bDisableImpartingVelocityOnRemoval                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 StrengthOverTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::STATIC_ApplyRootMotionConstantForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, bool bDisableImpartingVelocityOnRemoval, class UCurveFloat* StrengthOverTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce");
		
		UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.WorldDirection = WorldDirection;
		params.Strength = Strength;
		params.Duration = Duration;
		params.bIsAdditive = bIsAdditive;
		params.bDisableImpartingVelocityOnRemoval = bDisableImpartingVelocityOnRemoval;
		params.StrengthOverTime = StrengthOverTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_ApplyRootMotionConstantForce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_ApplyRootMotionConstantForce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C990
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback");
		
		UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65870
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAbilityTask_ApplyRootMotionJumpForce::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish");
		
		UAbilityTask_ApplyRootMotionJumpForce_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A60F10
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinimumLandedTriggerTime                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFinishOnLanded                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UCurveVector*                                PathOffsetCurve                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 TimeMappingCurve                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::STATIC_ApplyRootMotionJumpForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce");
		
		UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.Rotation = Rotation;
		params.Distance = Distance;
		params.Height = Height;
		params.Duration = Duration;
		params.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
		params.bFinishOnLanded = bFinishOnLanded;
		params.PathOffsetCurve = PathOffsetCurve;
		params.TimeMappingCurve = TimeMappingCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_ApplyRootMotionJumpForce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_ApplyRootMotionJumpForce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D240
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation");
		
		UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A611D0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetLocationOffset                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERootMotionMoveToActorTargetOffsetType             OffsetAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 TargetLerpSpeedHorizontal                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 TargetLerpSpeedVertical                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetNewMovementMode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      MovementMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestrictSpeedToExpected                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UCurveVector*                                PathOffsetCurve                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 TimeMappingCurve                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERootMotionFinishVelocityMode                      VelocityOnFinishMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SetVelocityOnFinish                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bDisableDestinationReachedInterrupt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::STATIC_ApplyRootMotionMoveToActorForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce");
		
		UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.TargetActor = TargetActor;
		params.TargetLocationOffset = TargetLocationOffset;
		params.OffsetAlignment = OffsetAlignment;
		params.Duration = Duration;
		params.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
		params.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
		params.bSetNewMovementMode = bSetNewMovementMode;
		params.MovementMode = MovementMode;
		params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
		params.PathOffsetCurve = PathOffsetCurve;
		params.TimeMappingCurve = TimeMappingCurve;
		params.VelocityOnFinishMode = VelocityOnFinishMode;
		params.SetVelocityOnFinish = SetVelocityOnFinish;
		params.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_ApplyRootMotionMoveToActorForce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A61630
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetNewMovementMode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      MovementMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestrictSpeedToExpected                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UCurveVector*                                PathOffsetCurve                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERootMotionFinishVelocityMode                      VelocityOnFinishMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SetVelocityOnFinish                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::STATIC_ApplyRootMotionMoveToForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce");
		
		UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.TargetLocation = TargetLocation;
		params.Duration = Duration;
		params.bSetNewMovementMode = bSetNewMovementMode;
		params.MovementMode = MovementMode;
		params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
		params.PathOffsetCurve = PathOffsetCurve;
		params.VelocityOnFinishMode = VelocityOnFinishMode;
		params.SetVelocityOnFinish = SetVelocityOnFinish;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_ApplyRootMotionMoveToForce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_ApplyRootMotionMoveToForce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A61910
	 * 		Name   -> Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      LocationActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPush                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAdditive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoZForce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 StrengthDistanceFalloff                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 StrengthOverTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseFixedWorldDirection                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    FixedWorldDirection                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERootMotionFinishVelocityMode                      VelocityOnFinishMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SetVelocityOnFinish                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::STATIC_ApplyRootMotionRadialForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce");
		
		UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.Location = Location;
		params.LocationActor = LocationActor;
		params.Strength = Strength;
		params.Duration = Duration;
		params.Radius = Radius;
		params.bIsPush = bIsPush;
		params.bIsAdditive = bIsAdditive;
		params.bNoZForce = bNoZForce;
		params.StrengthDistanceFalloff = StrengthDistanceFalloff;
		params.StrengthOverTime = StrengthOverTime;
		params.bUseFixedWorldDirection = bUseFixedWorldDirection;
		params.FixedWorldDirection = FixedWorldDirection;
		params.VelocityOnFinishMode = VelocityOnFinishMode;
		params.SetVelocityOnFinish = SetVelocityOnFinish;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_ApplyRootMotionRadialForce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_ApplyRootMotionRadialForce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6A6F0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 OptionalInterpolationCurve                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveVector*                                OptionalVectorInterpolationCurve                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::STATIC_MoveToLocation(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation");
		
		UAbilityTask_MoveToLocation_MoveToLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.Location = Location;
		params.Duration = Duration;
		params.OptionalInterpolationCurve = OptionalInterpolationCurve;
		params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_MoveToLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_MoveToLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72600
	 * 		Name   -> Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAbilityTaskNetSyncType                            SyncType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::STATIC_WaitNetSync(class UObject* WorldContextObject, EAbilityTaskNetSyncType SyncType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync");
		
		UAbilityTask_NetworkSyncPoint_WaitNetSync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SyncType = SyncType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D260
	 * 		Name   -> Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback");
		
		UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_NetworkSyncPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_NetworkSyncPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CC50
	 * 		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted");
		
		UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CB80
	 * 		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded");
		
		UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CAB0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut");
		
		UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63930
	 * 		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAbilityEnds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              AnimRootMotionTranslationScale                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::STATIC_CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy");
		
		UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TaskInstanceName = TaskInstanceName;
		params.MontageToPlay = MontageToPlay;
		params.Rate = Rate;
		params.StartSection = StartSection;
		params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
		params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_PlayMontageAndWait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_PlayMontageAndWait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6D9B0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeBetweenActions                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalActionCount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_Repeat* UAbilityTask_Repeat::STATIC_RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int32_t TotalActionCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction");
		
		UAbilityTask_Repeat_RepeatAction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TimeBetweenActions = TimeBetweenActions;
		params.TotalActionCount = TotalActionCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_Repeat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_Repeat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F8A0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::STATIC_SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor");
		
		UAbilityTask_SpawnActor_SpawnActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TargetData = TargetData;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65890
	 * 		Name   -> Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor");
		
		UAbilityTask_SpawnActor_FinishSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TargetData = TargetData;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62970
	 * 		Name   -> Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilityTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor");
		
		UAbilityTask_SpawnActor_BeginSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TargetData = TargetData;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_SpawnActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_SpawnActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6F9F0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StateName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEndCurrentState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::STATIC_StartAbilityState(class UObject* WorldContextObject, const class FName& StateName, bool bEndCurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState");
		
		UAbilityTask_StartAbilityState_StartAbilityState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StateName = StateName;
		params.bEndCurrentState = bEndCurrentState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_StartAbilityState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_StartAbilityState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70380
	 * 		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const class FName& TaskInstanceName, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor");
		
		UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TargetActor = TargetActor;
		params.TaskInstanceName = TaskInstanceName;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70240
	 * 		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const class FName& TaskInstanceName, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting");
		
		UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Class = Class;
		params.TaskInstanceName = TaskInstanceName;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A659D0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor");
		
		UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A62B10
	 * 		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor");
		
		UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_VisualizeTargeting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_VisualizeTargeting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A708A0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    TagRequirements                                            (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeTriggeredAbilities                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivateWithTagRequirements(class UObject* WorldContextObject, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements");
		
		UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TagRequirements = TagRequirements;
		params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70710
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                WithTag                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                WithoutTag                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeTriggeredAbilities                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate");
		
		UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WithTag = WithTag;
		params.WithoutTag = WithoutTag;
		params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6BCA0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate");
		
		UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitAbilityActivate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitAbilityActivate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70A80
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                WithTag                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                WithoutTage                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::STATIC_WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit");
		
		UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WithTag = WithTag;
		params.WithoutTage = WithoutTage;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6BD20
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit");
		
		UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitAbilityCommit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitAbilityCommit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A71240
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          InAttribute                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                InWithTag                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                InWithoutTag                                               (Parm, NativeAccessSpecifierPublic)
	 * 		EWaitAttributeChangeComparison                     InComparisonType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InComparisonValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison");
		
		UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InAttribute = InAttribute;
		params.InWithTag = InWithTag;
		params.InWithoutTag = InWithoutTag;
		params.InComparisonType = InComparisonType;
		params.InComparisonValue = InComparisonValue;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70BB0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                WithSrcTag                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                WithoutSrcTag                                              (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange");
		
		UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Attribute = Attribute;
		params.WithSrcTag = WithSrcTag;
		params.WithoutSrcTag = WithoutSrcTag;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitAttributeChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitAttributeChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70DA0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          AttributeNumerator                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          AttributeDenominator                                       (Parm, NativeAccessSpecifierPublic)
	 * 		EWaitAttributeChangeComparison                     ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ComparisonValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriggerOnce                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::STATIC_WaitForAttributeChangeRatioThreshold(class UObject* WorldContextObject, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold");
		
		UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AttributeNumerator = AttributeNumerator;
		params.AttributeDenominator = AttributeDenominator;
		params.ComparisonType = ComparisonType;
		params.ComparisonValue = ComparisonValue;
		params.bTriggerOnce = bTriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitAttributeChangeRatioThreshold.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A71040
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		EWaitAttributeChangeComparison                     ComparisonType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ComparisonValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTriggerOnce                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::STATIC_WaitForAttributeChangeThreshold(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold");
		
		UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Attribute = Attribute;
		params.ComparisonType = ComparisonType;
		params.ComparisonValue = ComparisonValue;
		params.bTriggerOnce = bTriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitAttributeChangeThreshold.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitAttributeChangeThreshold::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A704C0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::STATIC_WaitCancel(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel");
		
		UAbilityTask_WaitCancel_WaitCancel_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CA50
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitCancel::OnLocalCancelCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback");
		
		UAbilityTask_WaitCancel_OnLocalCancelCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C270
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitCancel::OnCancelCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback");
		
		UAbilityTask_WaitCancel_OnCancelCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitCancel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitCancel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70540
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::STATIC_WaitConfirm(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm");
		
		UAbilityTask_WaitConfirm_WaitConfirm_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C2B0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UGameplayAbility*                            InAbility                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback");
		
		UAbilityTask_WaitConfirm_OnConfirmCallback_Params params {};
		params.InAbility = InAbility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitConfirm.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitConfirm::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A705C0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::STATIC_WaitConfirmCancel(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel");
		
		UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CA90
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback");
		
		UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CA70
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback");
		
		UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C330
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback");
		
		UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C290
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback");
		
		UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitConfirmCancel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitConfirmCancel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A70640
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::STATIC_WaitDelay(class UObject* WorldContextObject, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay");
		
		UAbilityTask_WaitDelay_WaitDelay_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitDelay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitDelay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C120
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectSpec                         SpecApplied                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback");
		
		UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params params {};
		params.Target = Target;
		params.SpecApplied = SpecApplied;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEffectApplied.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEffectApplied::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A716E0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTargetDataFilterHandle             SourceFilter                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    SourceTagRequirements                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    TargetTagRequirements                                      (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalExternalOwner                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ListenForPeriodicEffect                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::STATIC_WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf");
		
		UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SourceFilter = SourceFilter;
		params.SourceTagRequirements = SourceTagRequirements;
		params.TargetTagRequirements = TargetTagRequirements;
		params.TriggerOnce = TriggerOnce;
		params.OptionalExternalOwner = OptionalExternalOwner;
		params.ListenForPeriodicEffect = ListenForPeriodicEffect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEffectApplied_Self.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEffectApplied_Self::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A71A90
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTargetDataFilterHandle             TargetFilter                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    SourceTagRequirements                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    TargetTagRequirements                                      (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalExternalOwner                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ListenForPeriodicEffects                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::STATIC_WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget");
		
		UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TargetFilter = TargetFilter;
		params.SourceTagRequirements = SourceTagRequirements;
		params.TargetTagRequirements = TargetTagRequirements;
		params.TriggerOnce = TriggerOnce;
		params.OptionalExternalOwner = OptionalExternalOwner;
		params.ListenForPeriodicEffects = ListenForPeriodicEffects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEffectApplied_Target.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A71E40
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    SourceTagRequirements                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagRequirements                    TargetTagRequirements                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalExternalTarget                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyTriggerOnce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::STATIC_WaitGameplayEffectBlockedByImmunity(class UObject* WorldContextObject, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity");
		
		UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SourceTagRequirements = SourceTagRequirements;
		params.TargetTagRequirements = TargetTagRequirements;
		params.OptionalExternalTarget = OptionalExternalTarget;
		params.OnlyTriggerOnce = OnlyTriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEffectBlockedImmunity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEffectBlockedImmunity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A714C0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::STATIC_WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved");
		
		UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00AA7130
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved");
		
		UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEffectRemoved.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEffectRemoved::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A71590
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::STATIC_WaitForGameplayEffectStackChange(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange");
		
		UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C6D0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OldCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32_t NewCount, int32_t OldCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange");
		
		UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params params {};
		params.Handle = Handle;
		params.NewCount = NewCount;
		params.OldCount = OldCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEffectStackChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEffectStackChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A720F0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                EventTag                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OptionalExternalTarget                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyTriggerOnce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::STATIC_WaitGameplayEvent(class UObject* WorldContextObject, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent");
		
		UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.EventTag = EventTag;
		params.OptionalExternalTarget = OptionalExternalTarget;
		params.OnlyTriggerOnce = OnlyTriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65D90
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int32_t NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback");
		
		UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params params {};
		params.Tag = Tag;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72220
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InOptionalExternalTarget                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyTriggerOnce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::STATIC_WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd");
		
		UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Tag = Tag;
		params.InOptionalExternalTarget = InOptionalExternalTarget;
		params.OnlyTriggerOnce = OnlyTriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayTagAdded.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayTagAdded::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72350
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InOptionalExternalTarget                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyTriggerOnce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::STATIC_WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove");
		
		UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Tag = Tag;
		params.InOptionalExternalTarget = InOptionalExternalTarget;
		params.OnlyTriggerOnce = OnlyTriggerOnce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitGameplayTagRemoved.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitGameplayTagRemoved::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72480
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestAlreadyPressed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::STATIC_WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress");
		
		UAbilityTask_WaitInputPress_WaitInputPress_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bTestAlreadyPressed = bTestAlreadyPressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CE00
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitInputPress::OnPressCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback");
		
		UAbilityTask_WaitInputPress_OnPressCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitInputPress.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitInputPress::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A72540
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestAlreadyReleased                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::STATIC_WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease");
		
		UAbilityTask_WaitInputRelease_WaitInputRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bTestAlreadyReleased = bTestAlreadyReleased;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CE20
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbilityTask_WaitInputRelease::OnReleaseCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback");
		
		UAbilityTask_WaitInputRelease_OnReleaseCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitInputRelease.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitInputRelease::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6CC70
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange");
		
		UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63B20
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::STATIC_CreateWaitMovementModeChange(class UObject* WorldContextObject, EMovementMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange");
		
		UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitMovementModeChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitMovementModeChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A71660
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::STATIC_WaitForOverlap(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap");
		
		UAbilityTask_WaitOverlap_WaitForOverlap_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6C7E0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback");
		
		UAbilityTask_WaitOverlap_OnHitCallback_Params params {};
		params.HitComp = HitComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitOverlap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitOverlap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A63BE0
	 * 		Name   -> Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinimumMagnitude                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::STATIC_CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange");
		
		UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Direction = Direction;
		params.MinimumMagnitude = MinimumMagnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilityTask_WaitVelocityChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilityTask_WaitVelocityChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbilitySystemTestAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilitySystemTestAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayAbility_CharacterJump.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayAbility_CharacterJump::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayAbility_Montage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayAbility_Montage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayAbilityBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayAbilityBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayAbilityBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayAbilityBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayAbilitySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayAbilitySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const class FName& ParamName, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector");
		
		AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params params {};
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const class FName& ParamName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat");
		
		AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params params {};
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged");
		
		AGameplayAbilityWorldReticle_OnValidTargetChanged_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor");
		
		AGameplayAbilityWorldReticle_OnTargetingAnActor_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGameplayAbilityWorldReticle::OnParametersInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized");
		
		AGameplayAbilityWorldReticle_OnParametersInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A65670
	 * 		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFaceIn2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource");
		
		AGameplayAbilityWorldReticle_FaceTowardSource_Params params {};
		params.bFaceIn2D = bFaceIn2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityWorldReticle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityWorldReticle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityTargetActor_Radius.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityTargetActor_Radius::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityTargetActor_Trace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityTargetActor_Trace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityTargetActor_GroundTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityTargetActor_GroundTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityWorldReticle_ActorVisualization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityWorldReticle_ActorVisualization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityTargetActor_ActorPlacement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityTargetActor_ActorPlacement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayAbilityTargetActor_SingleLineTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayAbilityTargetActor_SingleLineTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueTranslator_Test.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueTranslator_Test::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueNotify_HitImpact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueNotify_HitImpact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayCueSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayCueSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectExtension.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectExtension::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectExtension_LifestealTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectExtension_LifestealTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_LifestealTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectExtension_ShieldTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectExtension_ShieldTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_ShieldTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectUIData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectUIData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayEffectUIData_TextOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayEffectUIData_TextOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A6FAF0
	 * 		Name   -> Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            idx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent");
		
		UGameplayTagReponseTable_TagResponseEvent_Params params {};
		params.Tag = Tag;
		params.NewCount = NewCount;
		params.ASC = ASC;
		params.idx = idx;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayTagReponseTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayTagReponseTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableAttributeSetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableAttributeSetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}

}


