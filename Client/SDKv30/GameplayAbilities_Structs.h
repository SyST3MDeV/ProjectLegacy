#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
	 */
	enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
	{
		CancelAbilityImmediately = 0,
		RemoveAbilityOnEnd       = 1,
		DoNothing                = 2,
		MAX                      = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
	 */
	enum class EGameplayEffectAttributeCaptureSource : uint8_t
	{
		Source = 0,
		Target = 1,
		MAX    = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityActivationMode
	 */
	enum class EGameplayAbilityActivationMode : uint8_t
	{
		Authority    = 0,
		NonAuthority = 1,
		Predicting   = 2,
		Confirmed    = 3,
		Rejected     = 4,
		MAX          = 5
	};

	/**
	 * Enum GameplayAbilities.EAbilityGenericReplicatedEvent
	 */
	enum class EAbilityGenericReplicatedEvent : uint8_t
	{
		GenericConfirm          = 0,
		GenericCancel           = 1,
		InputPressed            = 2,
		InputReleased           = 3,
		GenericSignalFromClient = 4,
		GenericSignalFromServer = 5,
		GameCustom1             = 6,
		GameCustom2             = 7,
		GameCustom3             = 8,
		GameCustom4             = 9,
		GameCustom5             = 10,
		MAX                     = 11,
		MAX01                   = 12
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityInputBinds
	 */
	enum class EGameplayAbilityInputBinds : uint8_t
	{
		Ability1 = 0,
		Ability2 = 1,
		Ability3 = 2,
		Ability4 = 3,
		Ability5 = 4,
		Ability6 = 5,
		Ability7 = 6,
		Ability8 = 7,
		Ability9 = 8,
		MAX      = 9
	};

	/**
	 * Enum GameplayAbilities.EGameplayTagEventType
	 */
	enum class EGameplayTagEventType : uint8_t
	{
		NewOrRemoved   = 0,
		AnyCountChange = 1,
		MAX            = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayCueEvent
	 */
	enum class EGameplayCueEvent : uint8_t
	{
		OnActive    = 0,
		WhileActive = 1,
		Executed    = 2,
		Removed     = 3,
		MAX         = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingType
	 */
	enum class EGameplayEffectStackingType : uint8_t
	{
		None              = 0,
		AggregateBySource = 1,
		AggregateByTarget = 2,
		MAX               = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayModOp
	 */
	enum class EGameplayModOp : uint8_t
	{
		Additive       = 0,
		Multiplicitive = 1,
		Division       = 2,
		Override       = 3,
		Max            = 4,
		MAX            = 5
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
	 */
	enum class EGameplayAbilityTargetingLocationType : uint8_t
	{
		LiteralTransform = 0,
		ActorTransform   = 1,
		SocketTransform  = 2,
		MAX              = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayTargetingConfirmation
	 */
	enum class EGameplayTargetingConfirmation : uint8_t
	{
		Instant       = 0,
		UserConfirmed = 1,
		Custom        = 2,
		CustomMulti   = 3,
		MAX           = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
	 */
	enum class EGameplayEffectStackingExpirationPolicy : uint8_t
	{
		ClearEntireStack                    = 0,
		RemoveSingleStackAndRefreshDuration = 1,
		RefreshDuration                     = 2,
		MAX                                 = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
	 */
	enum class EGameplayEffectStackingPeriodPolicy : uint8_t
	{
		ResetOnSuccessfulApplication = 0,
		NeverReset                   = 1,
		MAX                          = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
	 */
	enum class EGameplayEffectStackingDurationPolicy : uint8_t
	{
		RefreshOnSuccessfulApplication = 0,
		NeverRefresh                   = 1,
		MAX                            = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectDurationType
	 */
	enum class EGameplayEffectDurationType : uint8_t
	{
		Instant     = 0,
		Infinite    = 1,
		HasDuration = 2,
		MAX         = 3
	};

	/**
	 * Enum GameplayAbilities.EAttributeBasedFloatCalculationType
	 */
	enum class EAttributeBasedFloatCalculationType : uint8_t
	{
		AttributeMagnitude      = 0,
		AttributeBaseValue      = 1,
		AttributeBonusMagnitude = 2,
		MAX                     = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
	 */
	enum class EGameplayEffectMagnitudeCalculation : uint8_t
	{
		ScalableFloat          = 0,
		AttributeBased         = 1,
		CustomCalculationClass = 2,
		SetByCaller            = 3,
		MAX                    = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityTriggerSource
	 */
	enum class EGameplayAbilityTriggerSource : uint8_t
	{
		GameplayEvent   = 0,
		OwnedTagAdded   = 1,
		OwnedTagPresent = 2,
		MAX             = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
	 */
	enum class EGameplayAbilityReplicationPolicy : uint8_t
	{
		ReplicateNo  = 0,
		ReplicateYes = 1,
		MAX          = 2
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
	 */
	enum class EGameplayAbilityNetExecutionPolicy : uint8_t
	{
		LocalPredicted  = 0,
		LocalOnly       = 1,
		ServerInitiated = 2,
		ServerOnly      = 3,
		MAX             = 4
	};

	/**
	 * Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
	 */
	enum class EGameplayAbilityInstancingPolicy : uint8_t
	{
		NonInstanced          = 0,
		InstancedPerActor     = 1,
		InstancedPerExecution = 2,
		MAX                   = 3
	};

	/**
	 * Enum GameplayAbilities.ETargetDataFilterSelf
	 */
	enum class ETargetDataFilterSelf : uint8_t
	{
		TDFS_Any      = 0,
		TDFS_NoSelf   = 1,
		TDFS_NoOthers = 2,
		TDFS_MAX      = 3
	};

	/**
	 * Enum GameplayAbilities.EReplicationMode
	 */
	enum class EReplicationMode : uint8_t
	{
		Minimal = 0,
		Mixed   = 1,
		Full    = 2,
		MAX     = 3
	};

	/**
	 * Enum GameplayAbilities.EAbilityTaskWaitState
	 */
	enum class EAbilityTaskWaitState : uint8_t
	{
		WaitingOnGame   = 0,
		WaitingOnUser   = 1,
		WaitingOnAvatar = 2,
		MAX             = 3
	};

	/**
	 * Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
	 */
	enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
	{
		AlignFromTargetToSource = 0,
		AlignToTargetForward    = 1,
		AlignToWorldSpace       = 2,
		MAX                     = 3
	};

	/**
	 * Enum GameplayAbilities.EAbilityTaskNetSyncType
	 */
	enum class EAbilityTaskNetSyncType : uint8_t
	{
		BothWait       = 0,
		OnlyServerWait = 1,
		OnlyClientWait = 2,
		MAX            = 3
	};

	/**
	 * Enum GameplayAbilities.EWaitAttributeChangeComparison
	 */
	enum class EWaitAttributeChangeComparison : uint8_t
	{
		None                 = 0,
		GreaterThan          = 1,
		LessThan             = 2,
		GreaterThanOrEqualTo = 3,
		LessThanOrEqualTo    = 4,
		NotEqualTo           = 5,
		ExactlyEqualTo       = 6,
		MAX                  = 7,
		MAX01                = 8
	};

	/**
	 * Enum GameplayAbilities.ETargetAbilitySelfSelection
	 */
	enum class ETargetAbilitySelfSelection : uint8_t
	{
		TASS_Permit  = 0,
		TASS_Forbid  = 1,
		TASS_Require = 2,
		TASS_MAX     = 3
	};

	/**
	 * Enum GameplayAbilities.EGameplayCuePayloadType
	 */
	enum class EGameplayCuePayloadType : uint8_t
	{
		EffectContext = 0,
		CueParameters = 1,
		FromSpec      = 2,
		MAX           = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
