#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameplayAbilities.AbilitySystemComponent
	 * Size -> 0x1350 (FullSize[0x14A0] - InheritedSize[0x0150])
	 */
	class UAbilitySystemComponent : public UGameplayTasksComponent
	{
	public:
		unsigned char                                              UnknownData_80GB[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAttributeDefaults>                          DefaultStartingData;                                     // 0x0158(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UAttributeSet*>                               SpawnedAttributes;                                       // 0x0168(0x0010) ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68DG[0x7];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		enum EReplicationMode replicationMode;
		struct FPredictionKey                                      ReplicatedPredictionKey;                                 // 0x0180(0x0018) Net, RepNotify, NativeAccessSpecifierPublic
		struct FPredictionKey									   ScopedPredictionKey;
		unsigned char                                              UnknownData_IH6E[0x260];                                 // 0x0198(0x0278) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutgoingDuration;                                        // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IncomingDuration;                                        // 0x0414(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59JE[0x7];                                   // 0x0418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool cachedIsNetSimulated;
		struct FGameplayAbilitySpecContainer                       ActivatableAbilities;                                    // 0x0420(0x00C8) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BBQJ[0x50];                                  // 0x04E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		//TMap<FGameplayAbilitySpecHandleAndPredictionKey, FAbilityReplicatedDataCache> AbilityTargetDataMap;
		TArray<class UGameplayAbility*>                            AllReplicatedInstancedAbilities;                         // 0x0538(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IKBG[0x3D8];                                 // 0x0548(0x03D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGameplayAbilityTargetActor*>                 SpawnedTargetActors;                                     // 0x0920(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayAbilityRepAnimMontage                      RepAnimMontageInfo;                                      // 0x0930(0x0030) Net, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WH2W[0x8];                                   // 0x0960(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityLocalAnimMontage                    LocalAnimMontageInfo;                                    // 0x0968(0x0030) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5A3P[0x118];                                 // 0x0998(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwnerActor;                                              // 0x0AB0(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              AvatarActor;                                             // 0x0AB8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		//TSharedPtr<class FGameplayAbilityActorInfo>					   AbilityActorInfo;
		unsigned char                                              UnknownData_24BU[0x20];                                  // 0x0AC0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActiveGameplayEffectsContainer                     ActiveGameplayEffects;                                   // 0x0AE0(0x04A0) Net, Protected, NativeAccessSpecifierProtected
		struct FActiveGameplayCueContainer                         ActiveGameplayCues;                                      // 0x0F80(0x00D0) Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FActiveGameplayCueContainer                         MinimalReplicationGameplayCues;                          // 0x1050(0x00D0) Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GXE4[0x180];                                 // 0x1120(0x0180) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      BlockedAbilityBindings;                                  // 0x12A0(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNG4[0x180];                                 // 0x12B0(0x0180) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinimalReplicationTagCountMap                      MinimalReplicationTags;                                  // 0x1430(0x0060) Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DCYT[0x10];                                  // 0x1490(0x0010) MISSED OFFSET (PADDING)

	public:
		bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
		bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
		void TargetConfirm();
		void TargetCancel();
		void SetUserAbilityActivationInhibited(bool NewInhibit);
		void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32_t NewLevel);
		void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
		void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
		void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
		void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
		void ServerSetReplicatedEventWithPayload(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
		void ServerSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
		void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
		void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
		void ServerPrintDebug_Request();
		void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
		void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
		void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const class FName& SectionName, const class FName& NextSectionName);
		void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const class FName& SectionName);
		void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove);
		bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32_t StacksToRemove);
		int32_t RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
		int32_t RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
		int32_t RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
		int32_t RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
		void OnRep_ReplicatedAnimMontage();
		void OnRep_PredictionKey();
		void OnRep_OwningActor();
		void OnRep_ActivateAbilities();
		void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
		void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
		void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
		void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
		void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
		struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
		struct FGameplayEffectContextHandle MakeEffectContext();
		void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
		struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
		struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext);
		bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
		bool GetUserAbilityActivationInhibited();
		struct FGameplayEffectSpecHandle GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level);
		float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
		int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
		struct FGameplayEffectContextHandle GetEffectContext();
		void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
		void ClientSetReplicatedEvent(EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
		void ClientPrintDebug_Response(TArray<class FString> Strings, int32_t GameFlags);
		void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
		void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
		void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle* SpecHandle, class UAbilitySystemComponent* Target);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
		void AbilityConfirmOrCancel__DelegateSignature();
		void AbilityAbilityKey__DelegateSignature(int32_t InputID);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AttributeSet
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAttributeSet : public UObject
	{
	public:
		unsigned char                                              UnknownData_UVDR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbility
	 * Size -> 0x0550 (FullSize[0x0578] - InheritedSize[0x0028])
	 */
	class UGameplayAbility : public UObject
	{
	public:
		unsigned char                                              UnknownData_NE83[0x158];                                 // 0x0028(0x0158) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               AbilityTags;                                             // 0x0180(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCKU[0x70];                                  // 0x01A0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bReplicateInputDirectly;                                 // 0x0210(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BF5J[0x28];                                  // 0x0211(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayAbilityReplicationPolicy                          ReplicationPolicy;                                       // 0x0239(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameplayAbilityInstancingPolicy                           InstancingPolicy;                                        // 0x023A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bServerRespectsRemoteAbilityCancellation;                // 0x023B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bRetriggerInstancedAbility;                              // 0x023C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YP1H[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityActivationInfo                      CurrentActivationInfo;                                   // 0x0240(0x0020) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FGameplayEventData                                  CurrentEventData;                                        // 0x0260(0x0088) BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		EGameplayAbilityNetExecutionPolicy                         NetExecutionPolicy;                                      // 0x02E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EU1S[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CostGameplayEffectClass;                                 // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayEffect*                                     CostGameplayEffect;                                      // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAbilityTriggerData>                         AbilityTriggers;                                         // 0x0300(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UClass*                                              CooldownGameplayEffectClass;                             // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayEffect*                                     CooldownGameplayEffect;                                  // 0x0318(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagQuery                                   CancelAbilitiesMatchingTagQuery;                         // 0x0320(0x0048) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagQuery                                   ConstTagQuery;                                           // 0x0368(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               CancelAbilitiesWithTag;                                  // 0x03B0(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               BlockAbilitiesWithTag;                                   // 0x03D0(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ActivationOwnedTags;                                     // 0x03F0(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ActivationRequiredTags;                                  // 0x0410(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               ActivationBlockedTags;                                   // 0x0430(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               SourceRequiredTags;                                      // 0x0450(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               SourceBlockedTags;                                       // 0x0470(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               TargetRequiredTags;                                      // 0x0490(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               TargetBlockedTags;                                       // 0x04B0(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class UGameplayTask*>                               ActiveTasks;                                             // 0x04D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JFZP[0x70];                                  // 0x04E0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CurrentMontage;                                          // 0x0550(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsActive;                                               // 0x0558(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsCancelable;                                           // 0x0559(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YMKR[0x16];                                  // 0x055A(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsBlockingOtherAbilities;                               // 0x0570(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HOOR[0x7];                                   // 0x0571(0x0007) Fix size for supers

	public:
		void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
		void SetCanBeCanceled(bool bCanBeCanceled);
		void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
		void RemoveGrantedByEffect();
		void MontageStop(float OverrideBlendOutTime);
		void MontageSetNextSectionName(const class FName& FromSectionName, const class FName& ToSectionName);
		void MontageJumpToSection(const class FName& SectionName);
		struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const class FName& SocketName);
		struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
		struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
		bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
		void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
		void K2_OnEndAbility();
		void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
		void K2_EndAbility();
		void K2_CommitExecute();
		bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
		bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
		bool K2_CommitAbility();
		bool K2_CheckAbilityCost();
		bool K2_CheckAbilityCooldown();
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks);
		struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int32_t GameplayEffectLevel, int32_t Stacks);
		TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
		struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
		void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void K2_ActivateAbility();
		void InvalidateClientPredictionKey();
		class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
		class AActor* GetOwningActorFromActorInfo();
		struct FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level);
		struct FGameplayEffectContextHandle GetGrantedByEffectContext();
		class UObject* GetCurrentSourceObject();
		class UAnimMontage* GetCurrentMontage();
		float GetCooldownTimeRemaining();
		struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
		class AActor* GetAvatarActorFromActorInfo();
		struct FGameplayAbilityActorInfo GetActorInfo();
		int32_t GetAbilityLevel();
		void EndTaskByInstanceName(const class FName& InstanceName);
		void EndAbilityState(const class FName& OptionalStateNameToEnd);
		void ConfirmTaskByInstanceName(const class FName& InstanceName, bool bEndTask);
		void CancelTaskByInstanceName(const class FName& InstanceName);
		void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32_t StacksToRemove);
		void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32_t StacksToRemove);
		TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemGlobals
	 * Size -> 0x02E8 (FullSize[0x0310] - InheritedSize[0x0028])
	 */
	class UAbilitySystemGlobals : public UObject
	{
	public:
		struct FStringClassReference                               AbilitySystemGlobalsClassName;                           // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K560[0x88];                                  // 0x0038(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ActivateFailCooldownTag;                                 // 0x00C0(0x0008) NativeAccessSpecifierPublic
		class FName                                                ActivateFailCooldownName;                                // 0x00C8(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailCostTag;                                     // 0x00D0(0x0008) NativeAccessSpecifierPublic
		class FName                                                ActivateFailCostName;                                    // 0x00D8(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailTagsBlockedTag;                              // 0x00E0(0x0008) NativeAccessSpecifierPublic
		class FName                                                ActivateFailTagsBlockedName;                             // 0x00E8(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailTagsMissingTag;                              // 0x00F0(0x0008) NativeAccessSpecifierPublic
		class FName                                                ActivateFailTagsMissingName;                             // 0x00F8(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActivateFailNetworkingTag;                               // 0x0100(0x0008) NativeAccessSpecifierPublic
		class FName                                                ActivateFailNetworkingName;                              // 0x0108(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimalReplicationTagCountBits;                          // 0x0110(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGameplayModEvaluationChannels;                     // 0x0114(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EGameplayModEvaluationChannel                              DefaultGameplayModEvaluationChannel;                     // 0x0115(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z9DE[0x2];                                   // 0x0116(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GameplayModEvaluationChannelAliases[0xA];                // 0x0118(0x0050) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FStringAssetReference                               GlobalCurveTableName;                                    // 0x0168(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FStringAssetReference                               GlobalAttributeMetaDataTableName;                        // 0x0178(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FStringAssetReference                               GlobalAttributeSetDefaultsTableName;                     // 0x0188(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FStringAssetReference>                       GlobalAttributeSetDefaultsTableNames;                    // 0x0198(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FStringAssetReference                               GlobalGameplayCueManagerClass;                           // 0x01A8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FStringAssetReference                               GlobalGameplayCueManagerName;                            // 0x01B8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      GameplayCueNotifyPaths;                                  // 0x01C8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FStringAssetReference                               GameplayTagResponseTableName;                            // 0x01D8(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class UGameplayTagReponseTable*                            GameplayTagResponseTable;                                // 0x01E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       PredictTargetGameplayEffects;                            // 0x01F0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8AAH[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveTable*                                         GlobalCurveTable;                                        // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UCurveTable*>                                 GlobalAttributeDefaultsTables;                           // 0x0200(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UDataTable*                                          GlobalAttributeMetaDataTable;                            // 0x0210(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayCueManager*                                 GlobalGameplayCueManager;                                // 0x0218(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4X1D[0xF0];                                  // 0x0220(0x00F0) MISSED OFFSET (PADDING)

	public:
		void ToggleIgnoreAbilitySystemCosts();
		void ToggleIgnoreAbilitySystemCooldowns();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor
	 * Size -> 0x01CC (FullSize[0x054C] - InheritedSize[0x0380])
	 */
	class AGameplayAbilityTargetActor : public AActor
	{
	public:
		bool                                                       ShouldProduceTargetDataOnServer;                         // 0x0380(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44UG[0xF];                                   // 0x0381(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               StartLocation;                                           // 0x0390(0x0070) BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0XJT[0xE0];                                  // 0x0400(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   MasterPC;                                                // 0x04E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayAbility*                                    OwningAbility;                                           // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroyOnConfirmation;                                  // 0x04F0(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAE6[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SourceActor;                                             // 0x04F8(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWorldReticleParameters                             ReticleParams;                                           // 0x0500(0x000C) BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32NX[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReticleClass;                                            // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTargetDataFilterHandle                     Filter;                                                  // 0x0518(0x0010) BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bDebug;                                                  // 0x0528(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4S3C[0x17];                                  // 0x0529(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             GenericDelegateBoundASC;                                 // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CY8X[0x4];                                   // 0x0548(0x0004) Fix size for supers

	public:
		void ConfirmTargeting();
		void CancelTargeting();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UAbilityTask : public UGameplayTask
	{
	public:
		class UGameplayAbility*                                    Ability;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZUF[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitTargetData
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitTargetData : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cancelled;                                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCKP[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GT36[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UObject* WorldContextObject, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
		class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UObject* WorldContextObject, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class UClass* Class);
		void OnTargetDataReplicatedCancelledCallback();
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectCalculation
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayEffectCalculation : public UObject
	{
	public:
		TArray<struct FGameplayEffectAttributeCaptureDefinition>   RelevantAttributesToCapture;                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectExecutionCalculation
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
	{
	public:
		bool                                                       bRequiresPassedInTags;                                   // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UDKO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayModMagnitudeCalculation
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
	{
	public:
		bool                                                       bAllowNonNetAuthorityDependencyRegistration;             // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YKH2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueManager
	 * Size -> 0x0348 (FullSize[0x0370] - InheritedSize[0x0028])
	 */
	class UGameplayCueManager : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_BKSL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayCueObjectLibrary                           RuntimeGameplayCueObjectLibrary;                         // 0x0030(0x00C0) Transient, Protected, NativeAccessSpecifierProtected
		struct FGameplayCueObjectLibrary                           EditorGameplayCueObjectLibrary;                          // 0x00F0(0x00C0) Transient, Protected, NativeAccessSpecifierProtected
		struct FStreamableManager                                  StreamableManager;                                       // 0x01B0(0x00A0) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IBW[0xD0];                                  // 0x0250(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LoadedGameplayCueNotifyClasses;                          // 0x0320(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class AGameplayCueNotify_Actor*>                    GameplayCueClassesForPreallocation;                      // 0x0330(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayCuePendingExecute>                  PendingExecuteCues;                                      // 0x0340(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		int32_t                                                    GameplayCueSendContextCount;                             // 0x0350(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFN5[0xC];                                   // 0x0354(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPreallocationInfo>                          PreallocationInfoList_Internal;                          // 0x0360(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueNotify_Actor
	 * Size -> 0x0058 (FullSize[0x03D8] - InheritedSize[0x0380])
	 */
	class AGameplayCueNotify_Actor : public AActor
	{
	public:
		bool                                                       bAutoDestroyOnRemove;                                    // 0x0380(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q25B[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoDestroyDelay;                                        // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0388(0x0008) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                GameplayCueName;                                         // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAttachToOwner;                                      // 0x0398(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsOverride;                                              // 0x0399(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUniqueInstancePerInstigator;                            // 0x039A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUniqueInstancePerSourceObject;                          // 0x039B(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleOnActiveEvents;                            // 0x039C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleWhileActiveEvents;                         // 0x039D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78NO[0x2];                                   // 0x039E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPreallocatedInstances;                                // 0x03A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YP5[0x34];                                  // 0x03A4(0x0034) MISSED OFFSET (PADDING)

	public:
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void OnOwnerDestroyed(class AActor* DestroyedActor);
		bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		void K2_EndGameplayCue();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueNotify_Static
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGameplayCueNotify_Static : public UObject
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0028(0x0008) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                GameplayCueName;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOverride;                                              // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z53[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueTranslator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCueTranslator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayEffectCustomApplicationRequirement : public UObject
	{
	public:
		bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffect
	 * Size -> 0x0698 (FullSize[0x06C0] - InheritedSize[0x0028])
	 */
	class UGameplayEffect : public UObject
	{
	public:
		unsigned char                                              UnknownData_XEKP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayEffectDurationType                                DurationPolicy;                                          // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBX3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectModifierMagnitude                    DurationMagnitude;                                       // 0x0038(0x01B0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      Period;                                                  // 0x01E8(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bExecutePeriodicEffectOnApplication;                     // 0x0210(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHCC[0x7];                                   // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayModifierInfo>                       Modifiers;                                               // 0x0218(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectExecutionDefinition>          Executions;                                              // 0x0228(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      ChanceToApplyToTarget;                                   // 0x0238(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ApplicationRequirements;                                 // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      TargetEffectClasses;                                     // 0x0270(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UGameplayEffect*>                             TargetEffects;                                           // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      OverflowEffects;                                         // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bDenyOverflowApplication;                                // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClearStackOnOverflow;                                   // 0x02A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8JR[0x6];                                   // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      PrematureExpirationEffectClasses;                        // 0x02A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      RoutineExpirationEffectClasses;                          // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bRequireModifierSuccessToTriggerCues;                    // 0x02C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSuppressStackingCues;                                   // 0x02C9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7GX[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayEffectCue>                          GameplayCues;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UGameplayEffectUIData*                               UIData;                                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInheritedTagContainer                              InheritableGameplayEffectTags;                           // 0x02E8(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayEffectTags;                                      // 0x0348(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FInheritedTagContainer                              InheritableOwnedTagsContainer;                           // 0x0368(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               OwnedTagsContainer;                                      // 0x03C8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            OngoingTagRequirements;                                  // 0x03E8(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            ApplicationTagRequirements;                              // 0x0428(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FInheritedTagContainer                              RemoveGameplayEffectsWithTags;                           // 0x0468(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ClearTagsContainer;                                      // 0x04C8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            GrantedApplicationImmunityTags;                          // 0x04E8(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUWG[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectQuery                                GrantedApplicationImmunityQuery;                         // 0x0530(0x0170) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PH4[0x1];                                   // 0x06A0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayEffectStackingType                                StackingType;                                            // 0x06A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5U5[0x2];                                   // 0x06A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackLimitCount;                                         // 0x06A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectStackingDurationPolicy                      StackDurationRefreshPolicy;                              // 0x06A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectStackingPeriodPolicy                        StackPeriodResetPolicy;                                  // 0x06A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectStackingExpirationPolicy                    StackExpirationPolicy;                                   // 0x06AA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IQB[0x5];                                   // 0x06AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilitySpecDef>                     GrantedAbilities;                                        // 0x06B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCueInterface : public UInterface
	{
	public:
		void ForwardGameplayCueToParent();
		void BlueprintCustomHandler(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		bool STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);
		bool STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		bool STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
		struct FGameplayEffectSpecHandle STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32_t StackCount);
		struct FGameplayEffectSpecHandle STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
		void STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
		bool STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
		struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
		struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
		bool STATIC_IsValid(const struct FGameplayAttribute& Attribute);
		bool STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
		bool STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
		bool STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters);
		struct FTransform STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FTransform STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FVector STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		struct FVector STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters);
		float STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
		struct FTransform STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
		class AActor* STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
		struct FHitResult STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);
		struct FHitResult STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters);
		bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
		bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
		float STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		float STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		float STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		float STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
		struct FGameplayEffectContextHandle STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
		int32_t STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
		TArray<class AActor*> STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);
		int32_t STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters);
		class AActor* STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32_t Index);
		int32_t STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
		int32_t STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
		class FString STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
		class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);
		void STATIC_ForwardGameplayCueToTarget(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
		struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
		float STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
		float STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess);
		bool STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
		void STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
		bool STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
		bool STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
		bool STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
		class UObject* STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
		class AActor* STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
		struct FVector STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
		class AActor* STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
		struct FHitResult STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
		class AActor* STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
		void STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
		bool STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);
		bool STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
		struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const class FName& DataName, float Magnitude);
		struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
		struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
		struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
		struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
		struct FGameplayEffectSpecHandle STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
		struct FGameplayEffectSpecHandle STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
		struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
		struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
		struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
		struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemDebugHUD
	 * Size -> 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
	 */
	class AAbilitySystemDebugHUD : public AHUD
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbilitySystemInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemTestPawn
	 * Size -> 0x0020 (FullSize[0x0428] - InheritedSize[0x0408])
	 */
	class AAbilitySystemTestPawn : public ADefaultPawn
	{
	public:
		unsigned char                                              UnknownData_3X1V[0x18];                                  // 0x0408(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ForceName;                                               // 0x0090(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             WorldDirection;                                          // 0x0098(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x00A4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00A8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAdditive;                                             // 0x00AC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bDisableImpartingVelocityOnRemoval;                      // 0x00AD(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VHYK[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x00B0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_42J4[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x00C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, bool bDisableImpartingVelocityOnRemoval, class UCurveFloat* StrengthOverTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
	 * Size -> 0x0070 (FullSize[0x00F0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLanded;                                                // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ForceName;                                               // 0x00A0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Rotation;                                                // 0x00A8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      Distance;                                                // 0x00B4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x00B8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00BC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumLandedTriggerTime;                                // 0x00C0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFinishOnLanded;                                         // 0x00C4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S021[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00D0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U8LP[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnLandedCallback(const struct FHitResult& Hit);
		void Finish();
		class UAbilityTask_ApplyRootMotionJumpForce* STATIC_ApplyRootMotionJumpForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
	 * Size -> 0x00A0 (FullSize[0x0120] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ForceName;                                               // 0x0090(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             StartLocation;                                           // 0x0098(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocation;                                          // 0x00A4(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		class AActor*                                              TargetActor;                                             // 0x00B0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocationOffset;                                    // 0x00B8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		ERootMotionMoveToActorTargetOffsetType                     OffsetAlignment;                                         // 0x00C4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KKCC[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x00C8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisableDestinationReachedInterrupt;                     // 0x00CC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bSetNewMovementMode;                                     // 0x00CD(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EMovementMode                                              NewMovementMode;                                         // 0x00CE(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x00CF(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00D0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x00D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TargetLerpSpeedHorizontalCurve;                          // 0x00E0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         TargetLerpSpeedVerticalCurve;                            // 0x00E8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x00F0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZPMP[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SetVelocityOnFinish;                                     // 0x00F4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MUR3[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnRep_TargetLocation();
		class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToActorForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
	 * Size -> 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTimedOut;                                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimedOutAndDestinationReached;                         // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ForceName;                                               // 0x00A0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             StartLocation;                                           // 0x00A8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocation;                                          // 0x00B4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00C0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSetNewMovementMode;                                     // 0x00C4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EMovementMode                                              NewMovementMode;                                         // 0x00C5(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x00C6(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I48W[0x1];                                   // 0x00C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x00C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x00D0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5EM7[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SetVelocityOnFinish;                                     // 0x00D4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4AIU[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x00F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ForceName;                                               // 0x0090(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Location;                                                // 0x0098(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QHC8[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LocationActor;                                           // 0x00A8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x00B0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00B4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x00B8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsPush;                                                 // 0x00BC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsAdditive;                                             // 0x00BD(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bNoZForce;                                               // 0x00BE(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RLX3[0x1];                                   // 0x00BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         StrengthDistanceFalloff;                                 // 0x00C0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x00C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseFixedWorldDirection;                                 // 0x00D0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FHYK[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            FixedWorldDirection;                                     // 0x00D4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x00E0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W7BU[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SetVelocityOnFinish;                                     // 0x00E4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PBY1[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x0100(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_MoveToLocation
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_MoveToLocation : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTargetLocationReached;                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKWC[0x4];                                   // 0x0090(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLocation;                                           // 0x0094(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             TargetLocation;                                          // 0x00A0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DurationOfMovement;                                      // 0x00AC(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BSL3[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         LerpCurve;                                               // 0x00B8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        LerpCurveVector;                                         // 0x00C0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UObject* WorldContextObject, const class FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_NetworkSyncPoint
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_NetworkSyncPoint : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnSync;                                                  // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1SA[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UObject* WorldContextObject, EAbilityTaskNetSyncType SyncType);
		void OnSignalCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_PlayMontageAndWait
	 * Size -> 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
	 */
	class UAbilityTask_PlayMontageAndWait : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKYB[0xB0];                                  // 0x00C0(0x00B0) MISSED OFFSET (PADDING)

	public:
		void OnMontageInterrupted();
		void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
		void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
		class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_Repeat
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_Repeat : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPerformAction;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SULU[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_Repeat* STATIC_RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int32_t TotalActionCount);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_SpawnActor
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_SpawnActor : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             Success;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DidNotSpawn;                                             // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2NO[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
		void FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_StartAbilityState
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_StartAbilityState : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnStateEnded;                                            // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStateInterrupted;                                      // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDWH[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UObject* WorldContextObject, const class FName& StateName, bool bEndCurrentState);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_VisualizeTargeting
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_VisualizeTargeting : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             TimeElapsed;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z63B[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const class FName& TaskInstanceName, float Duration);
		class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const class FName& TaskInstanceName, float Duration);
		void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
		bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAbilityActivate
	 * Size -> 0x0070 (FullSize[0x00F0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAbilityActivate : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnActivate;                                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTM4[0x60];                                  // 0x0090(0x0060) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivateWithTagRequirements(class UObject* WorldContextObject, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
		class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
		void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAbilityCommit
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAbilityCommit : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCommit;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9HS[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
		void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAttributeChange
	 * Size -> 0x0058 (FullSize[0x00D8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAttributeChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOUX[0x48];                                  // 0x0090(0x0048) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce);
		class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
	 * Size -> 0x0088 (FullSize[0x0108] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE12[0x78];                                  // 0x0090(0x0078) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAttributeChangeRatioThreshold* STATIC_WaitForAttributeChangeRatioThreshold(class UObject* WorldContextObject, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCXJ[0x40];                                  // 0x0090(0x0040) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitAttributeChangeThreshold* STATIC_WaitForAttributeChangeThreshold(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitCancel
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitCancel : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DJA[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UObject* WorldContextObject);
		void OnLocalCancelCallback();
		void OnCancelCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitConfirm
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitConfirm : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnConfirm;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKNI[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UObject* WorldContextObject);
		void OnConfirmCallback(class UGameplayAbility* InAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitConfirmCancel
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitConfirmCancel : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnConfirm;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDX0[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UObject* WorldContextObject);
		void OnLocalConfirmCallback();
		void OnLocalCancelCallback();
		void OnConfirmCallback();
		void OnCancelCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitDelay
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitDelay : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CPJ[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UObject* WorldContextObject, float Time);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
	 * Size -> 0x00A8 (FullSize[0x0128] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_DEBM[0x98];                                  // 0x0080(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FTEJ[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
	 * Size -> 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
	 */
	class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
	{
	public:
		class FScriptMulticastDelegate                             OnApplied;                                               // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGWL[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
	 * Size -> 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
	 */
	class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
	{
	public:
		class FScriptMulticastDelegate                             OnApplied;                                               // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CLS[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
	 * Size -> 0x00A8 (FullSize[0x0128] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             bLocked;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FMGY[0x88];                                  // 0x0090(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             ExternalOwner;                                           // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LPFE[0x8];                                   // 0x0120(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectBlockedImmunity* STATIC_WaitGameplayEffectBlockedByImmunity(class UObject* WorldContextObject, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnRemoved;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InvalidHandle;                                           // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93JT[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
		void OnGameplayEffectRemoved();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InvalidHandle;                                           // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0AZ[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
		void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32_t NewCount, int32_t OldCount);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayEvent
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG1H[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x0098(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWV1[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UObject* WorldContextObject, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayTag
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitGameplayTag : public UAbilityTask
	{
	public:
		unsigned char                                              UnknownData_7XLP[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OptionalExternalTarget;                                  // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RV32[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		void GameplayTagCallback(const struct FGameplayTag& Tag, int32_t NewCount);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
	{
	public:
		class FScriptMulticastDelegate                             Added;                                                   // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
	{
	public:
		class FScriptMulticastDelegate                             Removed;                                                 // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitInputPress
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitInputPress : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPress;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTYY[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed);
		void OnPressCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitInputRelease
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitInputRelease : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnRelease;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KT2[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased);
		void OnReleaseCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitMovementModeChange
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitMovementModeChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnChange;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IFA[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UObject* WorldContextObject, EMovementMode NewMode);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitOverlap
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitOverlap : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnOverlap;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UObject* WorldContextObject);
		void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilityTask_WaitVelocityChange
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAbilityTask_WaitVelocityChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnVelocityChage;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMovementComponent*                                  CachedMovementComponent;                                 // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VXVG[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.AbilitySystemTestAttributeSet
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAbilitySystemTestAttributeSet : public UAttributeSet
	{
	public:
		float                                                      MaxHealth;                                               // 0x0030(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mana;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMana;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpellDamage;                                             // 0x0044(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicalDamage;                                          // 0x0048(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CritChance;                                              // 0x004C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CritMultiplier;                                          // 0x0050(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorDamageReduction;                                    // 0x0054(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DodgeChance;                                             // 0x0058(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSteal;                                               // 0x005C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0060(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StackingAttribute1;                                      // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StackingAttribute2;                                      // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoStackAttribute;                                        // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbility_CharacterJump
	 * Size -> 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
	 */
	class UGameplayAbility_CharacterJump : public UGameplayAbility
	{
	public:
		unsigned char                                              UnknownData_YNF7[0x8];                                   // 0x0578(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbility_Montage
	 * Size -> 0x0038 (FullSize[0x05B0] - InheritedSize[0x0578])
	 */
	class UGameplayAbility_Montage : public UGameplayAbility
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0578(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0580(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2ZI[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SectionName;                                             // 0x0588(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      GameplayEffectClassesWhileAnimating;                     // 0x0590(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UGameplayEffect*>                             GameplayEffectsWhileAnimating;                           // 0x05A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityBlueprint
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UGameplayAbilityBlueprint : public UBlueprint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class UGameplayAbilityBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilitySet
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayAbilitySet : public UDataAsset
	{
	public:
		TArray<struct FGameplayAbilityBindInfo>                    Abilities;                                               // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityWorldReticle
	 * Size -> 0x0020 (FullSize[0x03A0] - InheritedSize[0x0380])
	 */
	class AGameplayAbilityWorldReticle : public AActor
	{
	public:
		struct FWorldReticleParameters                             Parameters;                                              // 0x0380(0x000C) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bFaceOwnerFlat;                                          // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bSnapToTargetedActor;                                    // 0x038D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bIsTargetValid;                                          // 0x038E(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsTargetAnActor;                                        // 0x038F(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class APlayerController*                                   MasterPC;                                                // 0x0390(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              TargetingActor;                                          // 0x0398(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetReticleMaterialParamVector(const class FName& ParamName, const struct FVector& Value);
		void SetReticleMaterialParamFloat(const class FName& ParamName, float Value);
		void OnValidTargetChanged(bool bNewValue);
		void OnTargetingAnActor(bool bNewValue);
		void OnParametersInitialized();
		void FaceTowardSource(bool bFaceIn2D);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_Radius
	 * Size -> 0x0004 (FullSize[0x0550] - InheritedSize[0x054C])
	 */
	class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_8KUF[0x4];                                   // 0x054C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_Trace
	 * Size -> 0x0020 (FullSize[0x056C] - InheritedSize[0x054C])
	 */
	class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
	{
	public:
		unsigned char                                              UnknownData_POAJ[0x4];                                   // 0x054C(0x0004) Fix Super Size
		struct FCollisionProfileName                               TraceProfile;                                            // 0x0550(0x0008) Edit, BlueprintVisible, Config, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       bTraceAffectsAimPitch;                                   // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SQJ[0x13];                                  // 0x0559(0x0013) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
	 * Size -> 0x001C (FullSize[0x0588] - InheritedSize[0x056C])
	 */
	class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
	{
	public:
		float                                                      CollisionHeight;                                         // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVMX[0x18];                                  // 0x0570(0x0018) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
	 * Size -> 0x0018 (FullSize[0x03B8] - InheritedSize[0x03A0])
	 */
	class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
	{
	public:
		class UCapsuleComponent*                                   CollisionComponent;                                      // 0x03A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UActorComponent*>                             VisualizationComponents;                                 // 0x03A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
	 * Size -> 0x0018 (FullSize[0x05A0] - InheritedSize[0x0588])
	 */
	class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
	{
	public:
		class UClass*                                              PlacedActorClass;                                        // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  PlacedActorMaterial;                                     // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_533S[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
	 * Size -> 0x0004 (FullSize[0x0570] - InheritedSize[0x056C])
	 */
	class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
	{
	public:
		unsigned char                                              UnknownData_FM8K[0x4];                                   // 0x056C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueTranslator_Test
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayCueTranslator_Test : public UGameplayCueTranslator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueNotify_HitImpact
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayCueSet
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UGameplayCueSet : public UDataAsset
	{
	public:
		TArray<struct FGameplayCueNotifyData>                      GameplayCueData;                                         // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KU8[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectTemplate
	 * Size -> 0x0000 (FullSize[0x06C0] - InheritedSize[0x06C0])
	 */
	class UGameplayEffectTemplate : public UGameplayEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectExtension
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGameplayEffectExtension : public UObject
	{
	public:
		TArray<struct FGameplayAttribute>                          RelevantSourceAttributes;                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayAttribute>                          RelevantTargetAttributes;                                // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectExtension_LifestealTest
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
	{
	public:
		class UGameplayEffect*                                     HealthRestoreGameplayEffect;                             // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectExtension_ShieldTest
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
	{
	public:
		class UGameplayEffect*                                     ShieldRemoveGameplayEffect;                              // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectUIData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayEffectUIData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayEffectUIData_TextOnly
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
	{
	public:
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.GameplayTagReponseTable
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class UGameplayTagReponseTable : public UDataAsset
	{
	public:
		TArray<struct FGameplayTagResponseTableEntry>              Entries;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYMS[0x1D8];                                 // 0x0038(0x01D8) MISSED OFFSET (PADDING)

	public:
		void TagResponseEvent(const struct FGameplayTag& Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayAbilities.TickableAttributeSetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTickableAttributeSetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
