﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	 */
	struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
	{
	public:
		class UClass*                                              InAbilityToActivate;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowRemoteActivation;                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	 */
	struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowRemoteActivation;                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
	 */
	struct UAbilitySystemComponent_TargetConfirm_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.TargetCancel
	 */
	struct UAbilitySystemComponent_TargetCancel_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	 */
	struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
	{
	public:
		bool                                                       NewInhibit;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	 */
	struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    NewLevel;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	 */
	struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       InputPressed;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3EEW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0020(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	 */
	struct UAbilitySystemComponent_ServerTryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       InputPressed;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LB9X[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NMLY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UBL4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReplicatedTargetDataHandle;                              // 0x0020(0x0020)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ApplicationTag;                                          // 0x0040(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0048(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
	{
	public:
		EAbilityGenericReplicatedEvent                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QH04[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0004(0x0004)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              VectorPayload;                                           // 0x0038(0x000C)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	 */
	struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
	{
	public:
		EAbilityGenericReplicatedEvent                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V4J2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0004(0x0004)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      CurrentPredictionKey;                                    // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	 */
	struct UAbilitySystemComponent_ServerSetInputReleased_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	 */
	struct UAbilitySystemComponent_ServerSetInputPressed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	 */
	struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	 */
	struct UAbilitySystemComponent_ServerEndAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToEnd;                                            // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8BGT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0028(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	 */
	struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
	{
	public:
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	 */
	struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
	{
	public:
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClientPosition;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q3AL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SectionName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NextSectionName;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	 */
	struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
	{
	public:
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	 */
	struct UAbilitySystemComponent_ServerCancelAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToCancel;                                         // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EOI7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	 */
	struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
	{
	public:
		class UClass*                                              GameplayEffect;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             InstigatorAbilitySystemComponent;                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	 */
	struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	 */
	struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	 */
	struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
	 */
	struct UAbilitySystemComponent_OnRep_PredictionKey_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	 */
	struct UAbilitySystemComponent_OnRep_OwningActor_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	 */
	struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0038(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0038(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0038(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0020(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           Spec;                                                    // 0x0000(0x0078)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0078(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0020(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
	{
	public:
		struct FGameplayEffectSpecForRPC                           Spec;                                                    // 0x0000(0x0078)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0078(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0020(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	 */
	struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0020(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	 */
	struct UAbilitySystemComponent_MakeOutgoingSpec_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P012[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	 */
	struct UAbilitySystemComponent_MakeEffectContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
	 */
	struct UAbilitySystemComponent_K2_InitStats_Params
	{
	public:
		class UClass*                                              Attributes;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          DataTable;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
	 */
	struct UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_302H[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
	 */
	struct UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TN4X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	 */
	struct UAbilitySystemComponent_IsGameplayCueActive_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	 */
	struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
	 */
	struct UAbilitySystemComponent_GetOutgoingSpec_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WIH8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	 */
	struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	 */
	struct UAbilitySystemComponent_GetGameplayEffectCount_Params
	{
	public:
		class UClass*                                              SourceGameplayEffect;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             OptionalInstigatorFilterComponent;                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnforceOnGoingCheck;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5HUZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
	 */
	struct UAbilitySystemComponent_GetEffectContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	 */
	struct UAbilitySystemComponent_ClientTryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	 */
	struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
	{
	public:
		EAbilityGenericReplicatedEvent                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O3BC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0004(0x0004)  (Parm, NativeAccessSpecifierPublic)
		struct FPredictionKey                                      AbilityOriginalPredictionKey;                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	 */
	struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
	{
	public:
		TArray<class FString>                                      Strings;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    GameFlags;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	 */
	struct UAbilitySystemComponent_ClientEndAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToEnd;                                            // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UWCR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	 */
	struct UAbilitySystemComponent_ClientCancelAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToCancel;                                         // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VKCF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	 */
	struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6HNO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  TriggerEventData;                                        // 0x0020(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	 */
	struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CZNL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPredictionKey                                      PredictionKey;                                           // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	 */
	struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityToActivate;                                       // 0x0000(0x0004)  (Parm, NativeAccessSpecifierPublic)
		int16_t                                                    PredictionKey;                                           // 0x0004(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JIJT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PPP3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             Target;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	 */
	struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	 */
	struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	 */
	struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	 */
	struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
	{
	public:
		bool                                                       bShouldBlockAbilities;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
	 */
	struct UGameplayAbility_SetCanBeCanceled_Params
	{
	public:
		bool                                                       bCanBeCanceled;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.SendGameplayEvent
	 */
	struct UGameplayAbility_SendGameplayEvent_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  Payload;                                                 // 0x0008(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	 */
	struct UGameplayAbility_RemoveGrantedByEffect_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MontageStop
	 */
	struct UGameplayAbility_MontageStop_Params
	{
	public:
		float                                                      OverrideBlendOutTime;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	 */
	struct UGameplayAbility_MontageSetNextSectionName_Params
	{
	public:
		class FName                                                FromSectionName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToSectionName;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MontageJumpToSection
	 */
	struct UGameplayAbility_MontageJumpToSection_Params
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	 */
	struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HRM0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetingLocationInfo               ReturnValue;                                             // 0x0010(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	 */
	struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
	{
	public:
		struct FGameplayAbilityTargetingLocationInfo               ReturnValue;                                             // 0x0000(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	 */
	struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_25GY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	 */
	struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  Payload;                                                 // 0x0040(0x0088)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	 */
	struct UGameplayAbility_K2_RemoveGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
	 */
	struct UGameplayAbility_K2_OnEndAbility_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	 */
	struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	 */
	struct UGameplayAbility_K2_ExecuteGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_EndAbility
	 */
	struct UGameplayAbility_K2_EndAbility_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitExecute
	 */
	struct UGameplayAbility_K2_CommitExecute_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	 */
	struct UGameplayAbility_K2_CommitAbilityCost_Params
	{
	public:
		bool                                                       BroadcastCommitEvent;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	 */
	struct UGameplayAbility_K2_CommitAbilityCooldown_Params
	{
	public:
		bool                                                       BroadcastCommitEvent;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ForceCooldown;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CommitAbility
	 */
	struct UGameplayAbility_K2_CommitAbility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	 */
	struct UGameplayAbility_K2_CheckAbilityCost_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	 */
	struct UGameplayAbility_K2_CheckAbilityCooldown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	 */
	struct UGameplayAbility_K2_CanActivateAbility_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0000(0x0040)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0040(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
	 */
	struct UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Stacks;                                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
	 */
	struct UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Stacks;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	 */
	struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           EffectSpecHandle;                                        // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	 */
	struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           EffectSpecHandle;                                        // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	 */
	struct UGameplayAbility_K2_AddGameplayCue_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bRemoveOnAbilityEnd;                                     // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	 */
	struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
	 */
	struct UGameplayAbility_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	 */
	struct UGameplayAbility_InvalidateClientPredictionKey_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	 */
	struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	 */
	struct UGameplayAbility_GetOwningActorFromActorInfo_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
	 */
	struct UGameplayAbility_GetOutgoingGameplayEffectSpec_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LW0R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	 */
	struct UGameplayAbility_GetGrantedByEffectContext_Params
	{
	public:
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	 */
	struct UGameplayAbility_GetCurrentSourceObject_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetCurrentMontage
	 */
	struct UGameplayAbility_GetCurrentMontage_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	 */
	struct UGameplayAbility_GetCooldownTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetContextFromOwner
	 */
	struct UGameplayAbility_GetContextFromOwner_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    OptionalTargetData;                                      // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	 */
	struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetActorInfo
	 */
	struct UGameplayAbility_GetActorInfo_Params
	{
	public:
		struct FGameplayAbilityActorInfo                           ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.GetAbilityLevel
	 */
	struct UGameplayAbility_GetAbilityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	 */
	struct UGameplayAbility_EndTaskByInstanceName_Params
	{
	public:
		class FName                                                InstanceName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.EndAbilityState
	 */
	struct UGameplayAbility_EndAbilityState_Params
	{
	public:
		class FName                                                OptionalStateNameToEnd;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	 */
	struct UGameplayAbility_ConfirmTaskByInstanceName_Params
	{
	public:
		class FName                                                InstanceName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEndTask;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	 */
	struct UGameplayAbility_CancelTaskByInstanceName_Params
	{
	public:
		class FName                                                InstanceName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	 */
	struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
	{
	public:
		struct FGameplayTagContainer                               WithGrantedTags;                                         // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	 */
	struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
	{
	public:
		struct FGameplayTagContainer                               WithAssetTags;                                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StacksToRemove;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	 */
	struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              GameplayEffectClass;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Stacks;                                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	 */
	struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameplayEffectLevel;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Stacks;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	 */
	struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	 */
	struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	 */
	struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	 */
	struct AGameplayAbilityTargetActor_CancelTargeting_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	 */
	struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UA9L[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitTargetData*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	 */
	struct UAbilityTask_WaitTargetData_WaitTargetData_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q05B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Class;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitTargetData*                         ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0020(0x0008)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	 */
	struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	 */
	struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	 */
	struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	 */
	struct UGameplayEffectExecutionCalculation_Execute_Params
	{
	public:
		struct FGameplayEffectCustomExecutionParameters            ExecutionParams;                                         // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayEffectCustomExecutionOutput                OutExecutionOutput;                                      // 0x00A8(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	 */
	struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0248)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0248(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	 */
	struct AGameplayCueNotify_Actor_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	 */
	struct AGameplayCueNotify_Actor_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	 */
	struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	 */
	struct AGameplayCueNotify_Actor_OnExecute_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
	 */
	struct AGameplayCueNotify_Actor_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	 */
	struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LBJZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	 */
	struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
	 */
	struct UGameplayCueNotify_Static_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
	 */
	struct UGameplayCueNotify_Static_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
	 */
	struct UGameplayCueNotify_Static_OnExecute_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.OnActive
	 */
	struct UGameplayCueNotify_Static_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	 */
	struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HOAR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	 */
	struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
	{
	public:
		class UGameplayEffect*                                     GameplayEffect;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0008(0x0248)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0250(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0258(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	 */
	struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	 */
	struct UGameplayCueInterface_BlueprintCustomHandler_Params
	{
	public:
		EGameplayCueEvent                                          EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KCVX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    HitResult;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	 */
	struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	 */
	struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	 */
	struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    StackCount;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EYJY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	 */
	struct UAbilitySystemBlueprintLibrary_SetDuration_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SZFV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	 */
	struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  Payload;                                                 // 0x0010(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	 */
	struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
	{
	public:
		struct FGameplayAttribute                                  AttributeA;                                              // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeB;                                              // 0x0020(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	 */
	struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
	{
	public:
		class UGameplayEffect*                                     InGameplayEffect;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InInstigator;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InEffectCauser;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InLevel;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L55G[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	 */
	struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
	{
	public:
		struct FGameplayTargetDataFilter                           Filter;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              FilterActor;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	 */
	struct UAbilitySystemBlueprintLibrary_IsValid_Params
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	 */
	struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	 */
	struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3PFA[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	 */
	struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A3SA[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	 */
	struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00B8(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	 */
	struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	 */
	struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S0GU[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x00C0(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	 */
	struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    HitResult;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_90H1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          ReturnValue;                                             // 0x0028(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x00B8(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x00C0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Normal;                                                  // 0x00CC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	 */
	struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x00C0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00CC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M9VF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q8Y4[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_89RV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	 */
	struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSuccessfullyFoundAttribute;                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_STBH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	 */
	struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectContextHandle                        ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L6RM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	 */
	struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	 */
	struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O6JL[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	 */
	struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	 */
	struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	 */
	struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
	{
	public:
		unsigned char                                              UnknownData_9CD7[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		EGameplayCueEvent                                          EventType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UCW0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0018(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	 */
	struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetDataHandle;                                        // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     ActorFilterClass;                                        // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0030(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	 */
	struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0028(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0048(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BaseValue;                                               // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F79W[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	 */
	struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               SourceTags;                                              // 0x0028(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0048(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PE62[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x006C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	 */
	struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
	{
	public:
		struct FGameplayAttribute                                  AttributeA;                                              // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeB;                                              // 0x0020(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x0018(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
	{
	public:
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bReset;                                                  // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	 */
	struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HI1D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	 */
	struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagReqs;                                           // 0x00B8(0x0040)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagReqs;                                           // 0x00F8(0x0040)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0138(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	 */
	struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FName                                                DataName;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Magnitude;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XJ3F[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	 */
	struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetHandle;                                            // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    HandleToAdd;                                             // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0040(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	 */
	struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           LinkedGameplayEffectSpec;                                // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	 */
	struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               NewGameplayTags;                                         // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	 */
	struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        NewGameplayTag;                                          // 0x0018(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	 */
	struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               NewGameplayTags;                                         // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	 */
	struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
	{
	public:
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        NewGameplayTag;                                          // 0x0018(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpecHandle                           ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
	{
	public:
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetingLocationInfo               TargetLocation;                                          // 0x0070(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x00E0(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0088(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
	{
	public:
		TArray<class AActor*>                                      ActorArray;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       OneTargetPerHandle;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2JMA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0018(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	 */
	struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	 */
	struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldDirection;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAdditive;                                             // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDisableImpartingVelocityOnRemoval;                      // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OM4N[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_ApplyRootMotionConstantForce*           ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	 */
	struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	 */
	struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	 */
	struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinimumLandedTriggerTime;                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFinishOnLanded;                                         // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_63LP[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_ApplyRootMotionJumpForce*               ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	 */
	struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	 */
	struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocationOffset;                                    // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ERootMotionMoveToActorTargetOffsetType                     OffsetAlignment;                                         // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W3P2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N6B1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         TargetLerpSpeedHorizontal;                               // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TargetLerpSpeedVertical;                                 // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNewMovementMode;                                     // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EMovementMode                                              MovementMode;                                            // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestrictSpeedToExpected;                                // 0x0042(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5F6Y[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         TimeMappingCurve;                                        // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ESGM[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x005C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDisableDestinationReachedInterrupt;                     // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F91A[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_ApplyRootMotionMoveToActorForce*        ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	 */
	struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetNewMovementMode;                                     // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EMovementMode                                              MovementMode;                                            // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestrictSpeedToExpected;                                // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H41D[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveVector*                                        PathOffsetCurve;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2314[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UAbilityTask_ApplyRootMotionMoveToForce*             ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	 */
	struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GVVO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              LocationActor;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPush;                                                 // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIsAdditive;                                             // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bNoZForce;                                               // 0x0036(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8M4R[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCurveFloat*                                         StrengthDistanceFalloff;                                 // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         StrengthOverTime;                                        // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseFixedWorldDirection;                                 // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JTLX[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            FixedWorldDirection;                                     // 0x004C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ERootMotionFinishVelocityMode                              VelocityOnFinishMode;                                    // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JOR7[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetVelocityOnFinish;                                     // 0x005C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UAbilityTask_ApplyRootMotionRadialForce*             ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	 */
	struct UAbilityTask_MoveToLocation_MoveToLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         OptionalInterpolationCurve;                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveVector*                                        OptionalVectorInterpolationCurve;                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_MoveToLocation*                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	 */
	struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAbilityTaskNetSyncType                                    SyncType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_282V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_NetworkSyncPoint*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	 */
	struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	 */
	struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	 */
	struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	 */
	struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInterrupted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	 */
	struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZNSW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                StartSection;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R26D[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_PlayMontageAndWait*                     ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
	 */
	struct UAbilityTask_Repeat_RepeatAction_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeBetweenActions;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalActionCount;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_Repeat*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	 */
	struct UAbilityTask_SpawnActor_SpawnActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_SpawnActor*                             ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	 */
	struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	 */
	struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnedActor;                                            // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	 */
	struct UAbilityTask_StartAbilityState_StartAbilityState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StateName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEndCurrentState;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7IL7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_StartAbilityState*                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	 */
	struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_15XY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_VisualizeTargeting*                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	 */
	struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QT05[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_VisualizeTargeting*                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	 */
	struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	 */
	struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameplayAbilityTargetActor*                         SpawnedActor;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	 */
	struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TagRequirements;                                         // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DNRX[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityActivate*                    ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	 */
	struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTag;                                              // 0x0010(0x0008)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       IncludeTriggeredAbilities;                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_612Q[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityActivate*                    ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	 */
	struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	 */
	struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithTag;                                                 // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutTage;                                             // 0x0010(0x0008)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0CD5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAbilityCommit*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	 */
	struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	 */
	struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  InAttribute;                                             // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InWithTag;                                               // 0x0028(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        InWithoutTag;                                            // 0x0030(0x0008)  (Parm, NativeAccessSpecifierPublic)
		EWaitAttributeChangeComparison                             InComparisonType;                                        // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O8C9[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InComparisonValue;                                       // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0ZTM[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAttributeChange*                    ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	 */
	struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithSrcTag;                                              // 0x0028(0x0008)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        WithoutSrcTag;                                           // 0x0030(0x0008)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AH1E[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAttributeChange*                    ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	 */
	struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeNumerator;                                      // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  AttributeDenominator;                                    // 0x0028(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EWaitAttributeChangeComparison                             ComparisonType;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GWAK[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ComparisonValue;                                         // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTriggerOnce;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R92B[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAttributeChangeRatioThreshold*      ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	 */
	struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EWaitAttributeChangeComparison                             ComparisonType;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K5FZ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ComparisonValue;                                         // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTriggerOnce;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V8R0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitAttributeChangeThreshold*           ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	 */
	struct UAbilityTask_WaitCancel_WaitCancel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitCancel*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	 */
	struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	 */
	struct UAbilityTask_WaitCancel_OnCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	 */
	struct UAbilityTask_WaitConfirm_WaitConfirm_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitConfirm*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	 */
	struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
	{
	public:
		class UGameplayAbility*                                    InAbility;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	 */
	struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitConfirmCancel*                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	 */
	struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	 */
	struct UAbilityTask_WaitDelay_WaitDelay_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P6JK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitDelay*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
	{
	public:
		class UAbilitySystemComponent*                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEffectSpec                                 SpecApplied;                                             // 0x0008(0x0248)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0250(0x0008)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     SourceFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0018(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0058(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M3SU[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffect;                                 // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TWB7[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectApplied_Self*         ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	 */
	struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTargetDataFilterHandle                     TargetFilter;                                            // 0x0008(0x0010)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0018(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0058(0x0040)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WRE8[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalExternalOwner;                                   // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ListenForPeriodicEffects;                                // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V7V1[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectApplied_Target*       ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	 */
	struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            SourceTagRequirements;                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagRequirements                            TargetTagRequirements;                                   // 0x0048(0x0040)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalExternalTarget;                                  // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8U0G[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEffectBlockedImmunity*      ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	 */
	struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitGameplayEffectRemoved*              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	 */
	struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	 */
	struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitGameplayEffectStackChange*          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	 */
	struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0000(0x0008)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldCount;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	 */
	struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              OptionalExternalTarget;                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K8BH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayEvent*                      ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	 */
	struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	 */
	struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NLKS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayTagAdded*                   ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	 */
	struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NativeAccessSpecifierPublic)
		class AActor*                                              InOptionalExternalTarget;                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OnlyTriggerOnce;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1K3J[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitGameplayTagRemoved*                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	 */
	struct UAbilityTask_WaitInputPress_WaitInputPress_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestAlreadyPressed;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8BAK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitInputPress*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	 */
	struct UAbilityTask_WaitInputPress_OnPressCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	 */
	struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTestAlreadyReleased;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P502[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitInputRelease*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	 */
	struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
	{	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	 */
	struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              PrevMovementMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PreviousCustomMode;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	 */
	struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementMode                                              NewMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MQTY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilityTask_WaitMovementModeChange*                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	 */
	struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitOverlap*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	 */
	struct UAbilityTask_WaitOverlap_OnHitCallback_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WTS1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	 */
	struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinimumMagnitude;                                        // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilityTask_WaitVelocityChange*                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	 */
	struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	 */
	struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	 */
	struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	 */
	struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	 */
	struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
	{	};

	/**
	 * Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	 */
	struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
	{
	public:
		bool                                                       bFaceIn2D;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	 */
	struct UGameplayTagReponseTable_TagResponseEvent_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    NewCount;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FDCP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    idx;                                                     // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
