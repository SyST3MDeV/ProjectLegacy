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
	 * Enum GameplayAbilities.EGameplayModEvaluationChannel
	 */
	enum class EGameplayModEvaluationChannel : uint8_t
	{
		Channel0    = 0,
		Channel1    = 1,
		Channel2    = 2,
		Channel3    = 3,
		Channel4    = 4,
		Channel5    = 5,
		Channel6    = 6,
		Channel7    = 7,
		Channel8    = 8,
		Channel9    = 9,
		Channel_MAX = 10,
		MAX         = 11
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
		AttributeMagnitude                     = 0,
		AttributeBaseValue                     = 1,
		AttributeBonusMagnitude                = 2,
		AttributeMagnitudeEvaluatedUpToChannel = 3,
		MAX                                    = 4
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

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayAbilities.AttributeDefaults
	 * Size -> 0x0010
	 */
	struct FAttributeDefaults
	{
	public:
		class UClass*                                              Attributes;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          DefaultStartingTable;                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.PredictionKey
	 * Size -> 0x0018
	 */
	struct FPredictionKey
	{
	public:
		int16_t                                                    Current;                                                 // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Base;                                                    // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPackageMap*                                         PredictiveConnection;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStale;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsServerInitiated;                                      // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69K3[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
	 * Size -> 0x0004
	 */
	struct FGameplayAbilitySpecHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
	 * Size -> 0x0020
	 */
	struct FGameplayAbilityActivationInfo
	{
	public:
		EGameplayAbilityActivationMode                             ActivationMode;                                          // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeEndedByOtherInstance : 1;                          // 0x0001(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1F9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKeyWhenActivated;                              // 0x0008(0x0018) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
	 * Size -> 0x0008
	 */
	struct FActiveGameplayEffectHandle
	{
	public:
		int32_t                                                    Handle;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPassedFiltersAndWasExecuted;                            // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A7TZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpec
	 * Size -> 0x006C (FullSize[0x0078] - InheritedSize[0x000C])
	 */
	struct FGameplayAbilitySpec : public FFastArraySerializerItem
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x000C(0x0004) NativeAccessSpecifierPublic
		class UGameplayAbility*                                    Ability;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputID;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             SourceObject;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActiveCount;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InputPressed : 1;                                        // 0x0029(0x0001) BIT_FIELD RepSkip, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       RemoveAfterActivation : 1;                               // 0x0029(0x0001) BIT_FIELD RepSkip, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       PendingRemove : 1;                                       // 0x0029(0x0001) BIT_FIELD RepSkip, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCGH[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0030(0x0020) RepSkip, NativeAccessSpecifierPublic
		TArray<class UGameplayAbility*>                            NonReplicatedInstances;                                  // 0x0050(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		TArray<class UGameplayAbility*>                            ReplicatedInstances;                                     // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FActiveGameplayEffectHandle                         GameplayEffectHandle;                                    // 0x0070(0x0008) RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FGameplayAbilitySpecContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FGameplayAbilitySpec>                        Items;                                                   // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RN1G[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
	 * Size -> 0x0030
	 */
	struct FGameplayAbilityRepAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Position;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NextSectionID;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsStopped : 1;                                           // 0x0015(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ForcePlayBit : 1;                                        // 0x0015(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2X0[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
	 * Size -> 0x0030
	 */
	struct FGameplayAbilityLocalAnimMontage
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayBit;                                                 // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL69[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0010(0x0018) NativeAccessSpecifierPublic
		class UGameplayAbility*                                    AnimatingAbility;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAttribute
	 * Size -> 0x0020
	 */
	struct FGameplayAttribute
	{
	public:
		class UProperty*                                           Attribute;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              AttributeName;                                           // 0x0008(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStruct*                                             AttributeOwner;                                          // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
	 * Size -> 0x0028
	 */
	struct FGameplayEffectModifiedAttribute
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0020) NativeAccessSpecifierPublic
		float                                                      TotalMagnitude;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTBE[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
	 * Size -> 0x0028
	 */
	struct FGameplayEffectAttributeCaptureDefinition
	{
	public:
		struct FGameplayAttribute                                  AttributeToCapture;                                      // 0x0000(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EGameplayEffectAttributeCaptureSource                      AttributeSource;                                         // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapshot;                                               // 0x0021(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S95F[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
	 * Size -> 0x0038
	 */
	struct FGameplayEffectAttributeCaptureSpec
	{
	public:
		struct FGameplayEffectAttributeCaptureDefinition           BackingDefinition;                                       // 0x0000(0x0028) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7K2P[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
	 * Size -> 0x0028
	 */
	struct FGameplayEffectAttributeCaptureSpecContainer
	{
	public:
		TArray<struct FGameplayEffectAttributeCaptureSpec>         SourceAttributes;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FGameplayEffectAttributeCaptureSpec>         TargetAttributes;                                        // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bHasNonSnapshottedAttributes;                            // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7U5N[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.TagContainerAggregator
	 * Size -> 0x0088
	 */
	struct FTagContainerAggregator
	{
	public:
		struct FGameplayTagContainer                               CapturedActorTags;                                       // 0x0000(0x0020) NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               CapturedSpecTags;                                        // 0x0020(0x0020) NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               ScopedTags;                                              // 0x0040(0x0020) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J6TS[0x28];                                  // 0x0060(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ModifierSpec
	 * Size -> 0x0004
	 */
	struct FModifierSpec
	{
	public:
		float                                                      EvaluatedMagnitude;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.ScalableFloat
	 * Size -> 0x0028
	 */
	struct FScalableFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JIZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCurveTableRowHandle                                Curve;                                                   // 0x0008(0x0010) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJQQ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
	 * Size -> 0x0050
	 */
	struct FGameplayAbilitySpecDef
	{
	public:
		class UClass*                                              Ability;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVZH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      LevelScalableFloat;                                      // 0x0010(0x0028) Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic
		int32_t                                                    InputID;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectGrantedAbilityRemovePolicy                  RemovalPolicy;                                           // 0x003C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRX2[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             SourceObject;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilitySpecHandle                          AssignedHandle;                                          // 0x0048(0x0004) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2J4[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectContextHandle
	 * Size -> 0x0018
	 */
	struct FGameplayEffectContextHandle
	{
	public:
		unsigned char                                              UnknownData_GV4P[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpec
	 * Size -> 0x0248
	 */
	struct FGameplayEffectSpec
	{
	public:
		class UGameplayEffect*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectModifiedAttribute>            ModifiedAttributes;                                      // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayEffectAttributeCaptureSpecContainer        CapturedRelevantAttributes;                              // 0x0018(0x0028) RepSkip, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VWO[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToApplyToTarget;                                   // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSSB[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagContainerAggregator                             CapturedSourceTags;                                      // 0x0060(0x0088) RepSkip, NativeAccessSpecifierPublic
		struct FTagContainerAggregator                             CapturedTargetTags;                                      // 0x00E8(0x0088) RepSkip, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DynamicGrantedTags;                                      // 0x0170(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DynamicAssetTags;                                        // 0x0190(0x0020) NativeAccessSpecifierPublic
		TArray<struct FModifierSpec>                               Modifiers;                                               // 0x01B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompletedSourceAttributeCapture : 1;                    // 0x01C4(0x0001) BIT_FIELD RepSkip, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCompletedTargetAttributeCapture : 1;                    // 0x01C4(0x0001) BIT_FIELD RepSkip, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDurationLocked : 1;                                     // 0x01C4(0x0001) BIT_FIELD RepSkip, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCN0[0x3];                                   // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilitySpecDef>                     GrantedAbilitySpecs;                                     // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHGE[0x50];                                  // 0x01D8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0228(0x0018) NativeAccessSpecifierPrivate
		float                                                      Level;                                                   // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UCD3[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffect
	 * Size -> 0x03F4 (FullSize[0x0400] - InheritedSize[0x000C])
	 */
	struct FActiveGameplayEffect : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_ERKR[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0018(0x0248) NativeAccessSpecifierPublic
		struct FPredictionKey                                      PredictionKey;                                           // 0x0260(0x0018) NativeAccessSpecifierPublic
		float                                                      StartServerWorldTime;                                    // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedStartServerWorldTime;                              // 0x027C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartWorldTime;                                          // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInhibited;                                            // 0x0284(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTKM[0x17B];                                 // 0x0285(0x017B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
	 * Size -> 0x03F0 (FullSize[0x04A0] - InheritedSize[0x00B0])
	 */
	struct FActiveGameplayEffectsContainer : public FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_ESMZ[0x90];                                  // 0x00B0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGameplayEffect>                       GameplayEffects_Internal;                                // 0x0140(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OR8R[0x320];                                 // 0x0150(0x0320) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameplayEffect*>                             ApplicationImmunityQueryEffects;                         // 0x0470(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P9VM[0x20];                                  // 0x0480(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueParameters
	 * Size -> 0x00B8
	 */
	struct FGameplayCueParameters
	{
	public:
		float                                                      NormalizedMagnitude;                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawMagnitude;                                            // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MatchedTagName;                                          // 0x0020(0x0008) BlueprintVisible, RepSkip, NativeAccessSpecifierPublic
		struct FGameplayTag                                        OriginalTag;                                             // 0x0028(0x0008) BlueprintVisible, RepSkip, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0030(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0050(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector_NetQuantize10                               Location;                                                // 0x0070(0x000C) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           Normal;                                                  // 0x007C(0x000C) BlueprintVisible, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0088(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               EffectCauser;                                            // 0x0090(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0098(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPhysicalMaterial>                    PhysicalMaterial;                                        // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    GameplayEffectLevel;                                     // 0x00A8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityLevel;                                            // 0x00AC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      TargetAttachComponent;                                   // 0x00B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayCue
	 * Size -> 0x00E4 (FullSize[0x00F0] - InheritedSize[0x000C])
	 */
	struct FActiveGameplayCue : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_0744[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0010(0x0008) NativeAccessSpecifierPublic
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0018) NativeAccessSpecifierPublic
		struct FGameplayCueParameters                              Parameters;                                              // 0x0030(0x00B8) ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bPredictivelyRemoved;                                    // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI10[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
	 * Size -> 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
	 */
	struct FActiveGameplayCueContainer : public FFastArraySerializer
	{
	public:
		TArray<struct FActiveGameplayCue>                          GameplayCues;                                            // 0x00B0(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             Owner;                                                   // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWFI[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
	 * Size -> 0x0060
	 */
	struct FMinimalReplicationTagCountMap
	{
	public:
		unsigned char                                              UnknownData_Q8MP[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             Owner;                                                   // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0OX[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEventData
	 * Size -> 0x0088
	 */
	struct FGameplayEventData
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             OptionalObject;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             OptionalObject2;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayEffectContextHandle                        ContextHandle;                                           // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               InstigatorTags;                                          // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TargetTags;                                              // 0x0060(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      EventMagnitude;                                          // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUPQ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
	 * Size -> 0x0020
	 */
	struct FGameplayAbilityTargetDataHandle
	{
	public:
		unsigned char                                              UnknownData_RJUX[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
	 * Size -> 0x0078
	 */
	struct FGameplayEffectSpecForRPC
	{
	public:
		class UGameplayEffect*                                     Def;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectModifiedAttribute>            ModifiedAttributes;                                      // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0018(0x0018) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedSourceTags;                                    // 0x0030(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AggregatedTargetTags;                                    // 0x0050(0x0020) NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbilityLevel;                                            // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
	 * Size -> 0x0018
	 */
	struct FGameplayEffectSpecHandle
	{
	public:
		unsigned char                                              UnknownData_E93Q[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AbilityTriggerData
	 * Size -> 0x0010
	 */
	struct FAbilityTriggerData
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008) Edit, NativeAccessSpecifierPublic
		EGameplayAbilityTriggerSource                              TriggerSource;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDJG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
	 * Size -> 0x0070
	 */
	struct FGameplayAbilityTargetingLocationInfo
	{
	public:
		unsigned char                                              UnknownData_C2E4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGameplayAbilityTargetingLocationType                      LocationType;                                            // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47NR[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LiteralTransform;                                        // 0x0020(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshComponent*                                      SourceComponent;                                         // 0x0058(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayAbility*                                    SourceAbility;                                           // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceSocketName;                                        // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
	 * Size -> 0x0040
	 */
	struct FGameplayAbilityActorInfo
	{
	public:
		unsigned char                                              UnknownData_MWQV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               OwnerActor;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               AvatarActor;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerController>                    PlayerController;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAbilitySystemComponent>              AbilitySystemComponent;                                  // 0x0020(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USkeletalMeshComponent>               SkeletalMeshComponent;                                   // 0x0028(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAnimInstance>                        AnimInstance;                                            // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMovementComponent>                   MovementComponent;                                       // 0x0038(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.WorldReticleParameters
	 * Size -> 0x000C
	 */
	struct FWorldReticleParameters
	{
	public:
		struct FVector                                             AOEScale;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
	 * Size -> 0x0010
	 */
	struct FGameplayTargetDataFilterHandle
	{
	public:
		unsigned char                                              UnknownData_NG01[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
	 * Size -> 0x00A8
	 */
	struct FGameplayEffectCustomExecutionParameters
	{
	public:
		TMap<FGameplayEffectAttributeCaptureDefinition, void*> ScopedModifierAggregators;
		unsigned char                                              UnknownData_1QRB[0xA8 - sizeof(TMap<FGameplayEffectAttributeCaptureDefinition, void*>)];                                  // 0x0000(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
	 * Size -> 0x0038
	 */
	struct FGameplayModifierEvaluatedData
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0020) NativeAccessSpecifierPublic
		EGameplayModOp                                             ModifierOp;                                              // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PGP[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Magnitude;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FActiveGameplayEffectHandle                         Handle;                                                  // 0x0028(0x0008) NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS5F[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
	 * Size -> 0x0018
	 */
	struct FGameplayEffectCustomExecutionOutput
	{
	public:
		TArray<struct FGameplayModifierEvaluatedData>              OutputModifiers;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bTriggerConditionalGameplayEffects : 1;                  // 0x0010(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bHandledStackCountManually : 1;                          // 0x0010(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bHandledGameplayCuesManually : 1;                        // 0x0010(0x0001) BIT_FIELD NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_22CN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
	 * Size -> 0x00C0
	 */
	struct FGameplayCueObjectLibrary
	{
	public:
		TArray<class FString>                                      Paths;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9I8[0x80];                                  // 0x0010(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObjectLibrary*                                      ActorObjectLibrary;                                      // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObjectLibrary*                                      StaticObjectLibrary;                                     // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XNS[0x4];                                   // 0x00A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShouldSyncScan;                                         // 0x00A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShouldAsyncLoad;                                        // 0x00A5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShouldSyncLoad;                                         // 0x00A6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GWO[0x1];                                   // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayCueSet*                                     CueSet;                                                  // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenInitialized;                                     // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRAL[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCuePendingExecute
	 * Size -> 0x0170
	 */
	struct FGameplayCuePendingExecute
	{
	public:
		unsigned char                                              UnknownData_2W8A[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPredictionKey                                      PredictionKey;                                           // 0x0018(0x0018) NativeAccessSpecifierPublic
		EGameplayCuePayloadType                                    PayloadType;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQTZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilitySystemComponent*                             OwningComponent;                                         // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayEffectSpecForRPC                           FromSpec;                                                // 0x0040(0x0078) NativeAccessSpecifierPublic
		struct FGameplayCueParameters                              CueParameters;                                           // 0x00B8(0x00B8) ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.PreallocationInfo
	 * Size -> 0x0068
	 */
	struct FPreallocationInfo
	{
	public:
		unsigned char                                              UnknownData_D6VS[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGameplayCueNotify_Actor*>                    ClassesNeedingPreallocation;                             // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EMPX[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeBasedFloat
	 * Size -> 0x00F8
	 */
	struct FAttributeBasedFloat
	{
	public:
		struct FScalableFloat                                      Coefficient;                                             // 0x0000(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PreMultiplyAdditiveValue;                                // 0x0028(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PostMultiplyAdditiveValue;                               // 0x0050(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayEffectAttributeCaptureDefinition           BackingAttribute;                                        // 0x0078(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCurveTableRowHandle                                AttributeCurve;                                          // 0x00A0(0x0010) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EAttributeBasedFloatCalculationType                        AttributeCalculationType;                                // 0x00B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayModEvaluationChannel                              FinalChannel;                                            // 0x00B1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y087[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               SourceTagFilter;                                         // 0x00B8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TargetTagFilter;                                         // 0x00D8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
	 * Size -> 0x0080
	 */
	struct FCustomCalculationBasedFloat
	{
	public:
		class UClass*                                              CalculationClassMagnitude;                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScalableFloat                                      Coefficient;                                             // 0x0008(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PreMultiplyAdditiveValue;                                // 0x0030(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FScalableFloat                                      PostMultiplyAdditiveValue;                               // 0x0058(0x0028) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.SetByCallerFloat
	 * Size -> 0x0008
	 */
	struct FSetByCallerFloat
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
	 * Size -> 0x01B0
	 */
	struct FGameplayEffectModifierMagnitude
	{
	public:
		EGameplayEffectMagnitudeCalculation                        MagnitudeCalculationType;                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_350Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      ScalableFloatMagnitude;                                  // 0x0008(0x0028) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FAttributeBasedFloat                                AttributeBasedMagnitude;                                 // 0x0030(0x00F8) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FCustomCalculationBasedFloat                        CustomMagnitude;                                         // 0x0128(0x0080) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSetByCallerFloat                                   SetByCallerMagnitude;                                    // 0x01A8(0x0008) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
	 * Size -> 0x0001
	 */
	struct FGameplayModEvaluationChannelSettings
	{
	public:
		EGameplayModEvaluationChannel                              Channel;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagRequirements
	 * Size -> 0x0040
	 */
	struct FGameplayTagRequirements
	{
	public:
		struct FGameplayTagContainer                               RequireTags;                                             // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               IgnoreTags;                                              // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayModifierInfo
	 * Size -> 0x0288
	 */
	struct FGameplayModifierInfo
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		EGameplayModOp                                             ModifierOp;                                              // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29L5[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      Magnitude;                                               // 0x0028(0x0028) NativeAccessSpecifierPublic
		struct FGameplayEffectModifierMagnitude                    ModifierMagnitude;                                       // 0x0050(0x01B0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayModEvaluationChannelSettings               EvaluationChannelSettings;                               // 0x0200(0x0001) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82SN[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x0208(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0248(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
	 * Size -> 0x0268
	 */
	struct FGameplayEffectExecutionScopedModifierInfo
	{
	public:
		struct FGameplayEffectAttributeCaptureDefinition           CapturedAttribute;                                       // 0x0000(0x0028) Edit, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		EGameplayModOp                                             ModifierOp;                                              // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLMD[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEffectModifierMagnitude                    ModifierMagnitude;                                       // 0x0030(0x01B0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayModEvaluationChannelSettings               EvaluationChannelSettings;                               // 0x01E0(0x0001) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9U7[0x7];                                   // 0x01E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagRequirements                            SourceTags;                                              // 0x01E8(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            TargetTags;                                              // 0x0228(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
	 * Size -> 0x0048
	 */
	struct FGameplayEffectExecutionDefinition
	{
	public:
		class UClass*                                              CalculationClass;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               PassedInTags;                                            // 0x0008(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectExecutionScopedModifierInfo>  CalculationModifiers;                                    // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ConditionalGameplayEffectClasses;                        // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectCue
	 * Size -> 0x0048
	 */
	struct FGameplayEffectCue
	{
	public:
		struct FGameplayAttribute                                  MagnitudeAttribute;                                      // 0x0000(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MinLevel;                                                // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLevel;                                                // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayCueTags;                                         // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.InheritedTagContainer
	 * Size -> 0x0060
	 */
	struct FInheritedTagContainer
	{
	public:
		struct FGameplayTagContainer                               CombinedTags;                                            // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Added;                                                   // 0x0020(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Removed;                                                 // 0x0040(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectQuery
	 * Size -> 0x0170
	 */
	struct FGameplayEffectQuery
	{
	public:
		unsigned char                                              UnknownData_IA69[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CustomMatchDelegate_BP;                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   OwningTagQuery;                                          // 0x0050(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   EffectTagQuery;                                          // 0x0098(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   SourceTagQuery;                                          // 0x00E0(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayAttribute                                  ModifyingAttribute;                                      // 0x0128(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UObject*                                             EffectSource;                                            // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EffectDefinition;                                        // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V62[0x18];                                  // 0x0158(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTargetDataFilter
	 * Size -> 0x0028
	 */
	struct FGameplayTargetDataFilter
	{
	public:
		unsigned char                                              UnknownData_CER4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SelfActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETargetDataFilterSelf                                      SelfFilter;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66QZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RequiredActorClass;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseFilter;                                          // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FWN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
	 * Size -> 0x0010
	 */
	struct FGameplayAbilityBindInfo
	{
	public:
		EGameplayAbilityInputBinds                                 Command;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_934T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameplayAbilityClass;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueNotifyData
	 * Size -> 0x0028
	 */
	struct FGameplayCueNotifyData
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008) Edit, NativeAccessSpecifierPublic
		struct FStringAssetReference                               GameplayCueNotifyObj;                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              LoadedGameplayCueClass;                                  // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PE2[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagReponsePair
	 * Size -> 0x0028
	 */
	struct FGameplayTagReponsePair
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, NativeAccessSpecifierPublic
		class UClass*                                              ResponseGameplayEffect;                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ResponseGameplayEffects;                                 // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int32_t                                                    SoftCountCap;                                            // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQWU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
	 * Size -> 0x0050
	 */
	struct FGameplayTagResponseTableEntry
	{
	public:
		struct FGameplayTagReponsePair                             Positive;                                                // 0x0000(0x0028) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagReponsePair                             Negative;                                                // 0x0028(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTag
	 * Size -> 0x0008
	 */
	struct FGameplayCueTag
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData
	 * Size -> 0x0008
	 */
	struct FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_7SKY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AttributeMetaData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAttributeMetaData : public FTableRowBase
	{
	public:
		float                                                      BaseValue;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL44[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DerivedAttributeInfo;                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanStack;                                               // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3ZE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GlobalCurveDataOverride
	 * Size -> 0x0010
	 */
	struct FGlobalCurveDataOverride
	{
	public:
		unsigned char                                              UnknownData_7B5R[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAttributeData
	 * Size -> 0x0010
	 */
	struct FGameplayAttributeData
	{
	public:
		unsigned char                                              UnknownData_GC0L[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseValue;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentValue;                                            // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayEffectContext
	 * Size -> 0x0068
	 */
	struct FGameplayEffectContext
	{
	public:
		unsigned char                                              UnknownData_BIQG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TWeakObjectPtr<class AActor>                               EffectCauser;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UClass*                                              Ability;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AbilityLevel;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAbilitySystemComponent>              InstigatorAbilitySystemComponent;                        // 0x002C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JR3V[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class AActor>>                       Actors;                                                  // 0x0038(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QRDI[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldOrigin;                                             // 0x0058(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasWorldOrigin;                                         // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_13A0[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_DJKH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0010(0x0070) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class AActor>>                       TargetActorArray;                                        // 0x0080(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
	{
	public:
		unsigned char                                              UnknownData_MIM0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAbilityTargetingLocationInfo               SourceLocation;                                          // 0x0010(0x0070) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGameplayAbilityTargetingLocationInfo               TargetLocation;                                          // 0x0080(0x0070) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
	 * Size -> 0x00A0
	 */
	struct FActiveGameplayEffectQuery
	{
	public:
		unsigned char                                              UnknownData_F38P[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
	 * Size -> 0x0018
	 */
	struct FAbilityTaskDebugMessage
	{
	public:
		class UGameplayTask*                                       FromTask;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y08[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
	 * Size -> 0x0008
	 */
	struct FGameplayAbilitySpecHandleAndPredictionKey
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilityHandle;                                           // 0x0000(0x0004) NativeAccessSpecifierPrivate
		int32_t                                                    PredictionKeyAtCreation;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslationLink
	 * Size -> 0x0018
	 */
	struct FGameplayCueTranslationLink
	{
	public:
		class UGameplayCueTranslator*                              RulesCDO;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X8OO[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
	 * Size -> 0x0004
	 */
	struct FGameplayCueTranslatorNodeIndex
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
	 * Size -> 0x0078
	 */
	struct FGameplayCueTranslatorNode
	{
	public:
		TArray<struct FGameplayCueTranslationLink>                 Links;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayCueTranslatorNodeIndex                     CachedIndex;                                             // 0x0010(0x0004) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LH86[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        CachedGameplayTag;                                       // 0x0018(0x0008) NativeAccessSpecifierPublic
		class FName                                                CachedGameplayTagName;                                   // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J2Z[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayAbilities.GameplayCueTranslationManager
	 * Size -> 0x0080
	 */
	struct FGameplayCueTranslationManager
	{
	public:
		TArray<struct FGameplayCueTranslatorNode>                  TranslationLUT;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, struct FGameplayCueTranslatorNodeIndex>  TranslationNameToIndexMap;                               // 0x0010(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		class UGameplayTagsManager*                                TagManager;                                              // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V2EU[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
