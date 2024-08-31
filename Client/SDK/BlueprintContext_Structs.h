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
	 * Enum BlueprintContext.EPingQuality
	 */

	enum class EPingQuality : uint8_t
	{
		Invalid   = 0,
		Excellent = 1,
		Good      = 2,
		Mediocre  = 3,
		Bad       = 4,
		MAX       = 5
	};

	/**
	 * Enum BlueprintContext.ECardFilterType
	 */
	enum class ECardFilterType : uint8_t
	{
		All         = 0,
		Equipment   = 1,
		Upgrades    = 2,
		Consumables = 3,
		MAX         = 4
	};

	/**
	 * Enum BlueprintContext.EOrionFriendshipStatus
	 */
	enum class EOrionFriendshipStatus : uint8_t
	{
		None            = 0,
		Friends         = 1,
		RequestReceived = 2,
		RequestSent     = 3,
		MAX             = 4
	};

	/**
	 * Enum BlueprintContext.ENavigationResult
	 */
	enum class ENavigationResult : uint8_t
	{
		Unhandled = 0,
		Partial   = 1,
		Complete  = 2,
		MAX       = 3
	};

	/**
	 * Enum BlueprintContext.EKeyBindingType
	 */
	enum class EKeyBindingType : uint8_t
	{
		Action       = 0,
		PositiveAxis = 1,
		NegativeAxis = 2,
		MAX          = 3
	};

	/**
	 * Enum BlueprintContext.EUnlockableFeature
	 */
	enum class EUnlockableFeature : uint8_t
	{
		DeckBuilder             = 0,
		PvP                     = 1,
		TeamBuilderCaptain      = 2,
		TeamBuilderRoles        = 3,
		StopHeroRecommendations = 4,
		EasyHeroes              = 5,
		Tier0Heroes             = 6,
		Tier1Heroes             = 7,
		Tier2Heroes             = 8,
		MAX                     = 9
	};

	/**
	 * Enum BlueprintContext.ETeamBuilderStep
	 */
	enum class ETeamBuilderStep : uint8_t
	{
		Hero  = 0,
		Role  = 1,
		Deck  = 2,
		Lane  = 3,
		Queue = 4,
		MAX   = 5
	};

	/**
	 * Enum BlueprintContext.EPartyMemberState
	 */
	enum class EPartyMemberState : uint8_t
	{
		Solo    = 0,
		InParty = 1,
		MAX     = 2
	};

	/**
	 * Enum BlueprintContext.ETestResult
	 */
	enum class ETestResult : uint8_t
	{
		Unknown   = 0,
		Failed    = 1,
		Succeeded = 2,
		MAX       = 3
	};

	/**
	 * Enum BlueprintContext.EInstallStatus
	 */
	enum class EInstallStatus : uint8_t
	{
		NotInstalled = 0,
		Installing   = 1,
		OnDisc       = 2,
		OnHardDrive  = 3,
		MAX          = 4
	};

	/**
	 * Enum BlueprintContext.EInstallPriority
	 */
	enum class EInstallPriority : uint8_t
	{
		Immediate = 0,
		High      = 1,
		Low       = 2,
		MAX       = 3
	};

	/**
	 * Enum BlueprintContext.EInstallSpeed
	 */
	enum class EInstallSpeed : uint8_t
	{
		Paused = 0,
		Slow   = 1,
		Fast   = 2,
		MAX    = 3
	};

	/**
	 * Enum BlueprintContext.ECardFilter
	 */
	enum class ECardFilter : uint8_t
	{
		Invalid           = 0,
		StatFilter        = 1,
		NameFilter        = 2,
		CostFilter        = 3,
		SlotFilter        = 4,
		CardUpgradeFilter = 5,
		CardCoreFilter    = 6,
		MAX               = 7
	};

	/**
	 * Enum BlueprintContext.EOrionPartyTransition
	 */
	enum class EOrionPartyTransition : uint8_t
	{
		Idle    = 0,
		Joining = 1,
		Leaving = 2,
		Max     = 3,
		MAX     = 4
	};

	/**
	 * Enum BlueprintContext.EHeroPickStatus
	 */
	enum class EHeroPickStatus : uint8_t
	{
		Available = 0,
		OtherPick = 1,
		Banned    = 2,
		NotOwned  = 3,
		MAX       = 4
	};

	/**
	 * Enum BlueprintContext.EDeckTooltipColumns
	 */
	enum class EDeckTooltipColumns : uint8_t
	{
		Offense                = 0,
		Defense                = 1,
		Utility                = 2,
		MAX_DECK_TOOLTIP_TYPES = 3,
		MAX                    = 4
	};

	/**
	 * Enum BlueprintContext.ETBQuickMatchRole
	 */
	enum class ETBQuickMatchRole : uint8_t
	{
		Solo    = 0,
		Captain = 1,
		MAX     = 2
	};

	/**
	 * Enum BlueprintContext.ETeamBuilderFlow
	 */
	enum class ETeamBuilderFlow : uint8_t
	{
		QuickMatch = 0,
		SoloRider  = 1,
		Captain    = 2,
		MAX        = 3
	};

	/**
	 * Enum BlueprintContext.EFeedbackType
	 */
	enum class EFeedbackType : uint8_t
	{
		Bug    = 0,
		Player = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct BlueprintContext.BannerItemIdent
	 * Size -> 0x0048
	 */
	/*
	struct FBannerItemIdent
	{
	public:
		class FString                                              EntryID;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OwnedAssetID;                                            // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Alterations;                                             // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ExistingAlterations;                                     // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAssetIsOwned;                                           // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAssetIsAssigned;                                        // 0x0041(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U1Z[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)
	};
	*/

	/**
	 * ScriptStruct BlueprintContext.WebEnvironmentUrl
	 * Size -> 0x0030
	 */
	struct FWebEnvironmentUrl
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectUrl;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Environment;                                             // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.FriendCode
	 * Size -> 0x0020
	 */
	struct FFriendCode
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CodeType;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.FriendCodeLocString
	 * Size -> 0x0020
	 */
	struct FFriendCodeLocString
	{
	public:
		class FString                                              Lang;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Text;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.BoundKeys
	 * Size -> 0x0040
	 */
	struct FBoundKeys
	{
	public:
		struct FInputChord                                         Primary;                                                 // 0x0000(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputChord                                         Secondary;                                               // 0x0020(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionPostGameLocalPlayerInfo
	 * Size -> 0x0010
	 */
	struct FOrionPostGameLocalPlayerInfo
	{
	public:
		EOrionTeam                                                 MyTeam;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrionTeam                                                 EnemyTeam;                                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AV7A[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionHeroData*                                      PlayerHeroData;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionTeammateOwnershipXP
	 * Size -> 0x0048
	 */
	struct FOrionTeammateOwnershipXP
	{
	public:
		class FText                                                PlayerName;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class FText                                                OwnedHeroName;                                           // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class UTexture2D*                                          OwnedHeroIcon;                                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OwnedHeroLevel;                                          // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusXP;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    bIsLocalPlayer;                                          // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C62L[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionEarnedXPInfo
	 * Size -> 0x0028
	 */
	struct FOrionEarnedXPInfo
	{
	public:
		TArray<struct FMCPKeyValue>                                XPSources;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<struct FOrionTeammateOwnershipXP>                   TeamOwnershipXPBonuses;                                  // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		int32_t                                                    TotalXP;                                                 // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CNJT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionPostGameLevelUpInfo
	 * Size -> 0x0048
	 */
	struct FOrionPostGameLevelUpInfo
	{
	public:
		class FText                                                OwnerName;                                               // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FOrionLevelInfo                                     OldLevelInfo;                                            // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FOrionLevelInfo                                     NewLevelInfo;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<struct FOrionLootReward>                            LootRewards;                                             // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionEarnedTimeCurrencyInfo
	 * Size -> 0x0018
	 */
	struct FOrionEarnedTimeCurrencyInfo
	{
	public:
		TArray<struct FMCPKeyValue>                                CurrencySources;                                         // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		int32_t                                                    Total;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C3M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.ReticleInfo
	 * Size -> 0x0010
	 */
	struct FReticleInfo
	{
	public:
		TWeakObjectPtr<class UOrionAbility>                        AssociatedAbility;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOrionUserWidget_Reticle>             AssociatedReticle;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.StoreOfferBP
	 * Size -> 0x0120
	 */
	/*
	struct FStoreOfferBP
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ShortDescription;                                        // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ECatalogOfferType                                          OfferType;                                               // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLT5[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QuantityRemaining;                                       // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TAssetPtr<class UObject>                                   LazyDisplayAsset;                                        // 0x0050(0x001C) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EUH[0x4];                                   // 0x006C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              OfferId;                                                 // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ItemGrants;                                              // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCatalogDynamicBundle                               DynamicBundleInfo;                                       // 0x0090(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROAH[0x68];                                  // 0x00B8(0x0068) MISSED OFFSET (PADDING)
	};
	*/

	/**
	 * ScriptStruct BlueprintContext.StorePurchase
	 * Size -> 0x0010
	 */
	struct FStorePurchase
	{
	public:
		class UOrionMcpItem*                                       ItemStack;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QuantityGained;                                          // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O311[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionStorePrice
	 * Size -> 0x0068
	 */
	struct FOrionStorePrice
	{
	public:
		EOrionCurrencyType                                         Currency;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKV2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumericPrice;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                FinalPriceText;                                          // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumericBasePrice;                                        // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HN1C[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                BasePriceText;                                           // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                DiscountDescription;                                     // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6QC[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionCardEffectBase
	 * Size -> 0x0003
	 */
	struct FOrionCardEffectBase
	{
	public:
		bool                                                       bIsMaxed;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUnique;                                                 // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionCardStatEffectInfo
	 * Size -> 0x0075 (FullSize[0x0078] - InheritedSize[0x0003])
	 */
	struct FOrionCardStatEffectInfo : public FOrionCardEffectBase
	{
	public:
		unsigned char                                              UnknownData_LE4S[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            SourceTagReqs;                                           // 0x0028(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      BaseMagnitude;                                           // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpgradeMagnitudeBonus;                                   // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxedMagnitudeBonus;                                     // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESBR[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionCardSpecialEffectInfo
	 * Size -> 0x002D (FullSize[0x0030] - InheritedSize[0x0003])
	 */
	struct FOrionCardSpecialEffectInfo : public FOrionCardEffectBase
	{
	public:
		unsigned char                                              UnknownData_CRAV[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumCharges;                                              // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cooldown;                                                // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPassive;                                                // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMCS[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionCardStatUpgradeInfo
	 * Size -> 0x0068
	 */
	struct FOrionCardStatUpgradeInfo
	{
	public:
		struct FGameplayAttribute                                  Attribute;                                               // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagRequirements                            SourceTagReqs;                                           // 0x0020(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      Magnitude;                                               // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C333[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionUpgradeCardInfo
	 * Size -> 0x0058
	 */
	struct FOrionUpgradeCardInfo
	{
	public:
		class UOrionCardData*                                      UpgradeCard;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UProperty*, struct FOrionCardStatUpgradeInfo>   StatUpgradesByProperty;                                  // 0x0008(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionCardEffectSummary
	 * Size -> 0x0060
	 */
	struct FOrionCardEffectSummary
	{
	public:
		class UOrionCardData*                                      CardData;                                                // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalCost;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YB78[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOrionCardStatEffectInfo>                    StatEffects;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionCardStatEffectInfo>                    MaxedStatEffects;                                        // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionCardSpecialEffectInfo>                 SpecialEffects;                                          // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionCardSpecialEffectInfo>                 MaxedSpecialEffects;                                     // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOrionUpgradeCardInfo>                       Upgrades;                                                // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionTooltipHelper
	 * Size -> 0x0138
	 */
	struct FOrionTooltipHelper
	{
	public:
		unsigned char                                              UnknownData_9FPD[0x80];                                  // 0x0000(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOrionCardEffectSummary                             CardSummary;                                             // 0x0080(0x0060) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_87IR[0x58];                                  // 0x00E0(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.DeckCategoryDesc
	 * Size -> 0x0010
	 */
	struct FDeckCategoryDesc
	{
	public:
		float                                                      Overall;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Middle;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionComponentReward
	 * Size -> 0x0010
	 */
	struct FOrionComponentReward
	{
	public:
		class UOrionComponentItemDefinition*                       CraftingComponent;                                       // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BLQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.DeckOutline
	 * Size -> 0x00B0
	 */
	/*
	struct FDeckOutline
	{
	public:
		class UOrionCardDeckEntry*                                 PrimeHelix;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UOrionCardDeckEntry*>            CoreCards;                                               // 0x0008(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, class UOrionCardDeckEntry*>            UpgradeCards;                                            // 0x0058(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		struct FOrionAffinityStruct                                Affinity;                                                // 0x00A8(0x0004) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MD1F[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};
	*/

	/**
	 * ScriptStruct BlueprintContext.ServicePriceBP
	 * Size -> 0x0008
	 */
	struct FServicePriceBP
	{
	public:
		EOrionCurrencyType                                         Currency;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3K9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Price;                                                   // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionMtxOffer
	 * Size -> 0x0060
	 */
	struct FOrionMtxOffer
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    MtxTotal;                                                // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MtxBonus;                                                // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                RealMoneyPrice;                                          // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EIM[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.OrionAbilityValueSummary
	 * Size -> 0x01D8
	 */
	struct FOrionAbilityValueSummary
	{
	public:
		unsigned char                                              UnknownData_PTTU[0x1D8];                                 // 0x0000(0x01D8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BlueprintContext.TeamBuilderEntry
	 * Size -> 0x0100
	 */
	struct FTeamBuilderEntry
	{
	public:
		struct FOrionTBPlayerChoices                               PlayerChoices;                                           // 0x0000(0x00F0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		class UOrionHeroData*                                      HeroData;                                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOrionMcpDeckItem*                                   DeckData;                                                // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.TeamBuilderProcess
	 * Size -> 0x0018
	 */
	struct FTeamBuilderProcess
	{
	public:
		ETeamBuilderFlow                                           DesiredFlow;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamBuilderStep                                           CurrentStep;                                             // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IB2D[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStepChanged;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BlueprintContext.OrionComponentRewardsWrapper
	 * Size -> 0x0010
	 */
	struct FOrionComponentRewardsWrapper
	{
	public:
		TArray<struct FOrionComponentReward>                       Components;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
