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
	 * Enum GameSubCatalog.ECatalogOfferType
	 */
	enum class ECatalogOfferType : uint8_t
	{
		StaticPrice   = 0,
		DynamicBundle = 1,
		MAX           = 2
	};

	/**
	 * Enum GameSubCatalog.ECatalogSaleType
	 */
	enum class ECatalogSaleType : uint8_t
	{
		NotOnSale           = 0,
		UndecoratedNewPrice = 1,
		AmountOff           = 2,
		PercentOff          = 3,
		PercentOn           = 4,
		Strikethrough       = 5,
		MAX                 = 6,
		MAX01               = 7
	};

	/**
	 * Enum GameSubCatalog.EAppStore
	 */
	enum class EAppStore : uint8_t
	{
		DebugStore            = 0,
		EpicPurchasingService = 1,
		IOSAppStore           = 2,
		WeChatAppStore        = 3,
		GooglePlayAppStore    = 4,
		KindleStore           = 5,
		PlayStationStore      = 6,
		XboxLiveStore         = 7,
		MAX                   = 8,
		MAX01                 = 9
	};

	/**
	 * Enum GameSubCatalog.EStoreCurrencyType
	 */
	enum class EStoreCurrencyType : uint8_t
	{
		RealMoney   = 0,
		MtxCurrency = 1,
		GameItem    = 2,
		Other       = 3,
		MAX         = 4,
		MAX01       = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameSubCatalog.ItemQuantity
	 * Size -> 0x0038
	 */
	struct FItemQuantity
	{
	public:
		class FString                                              TemplateId;                                              // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQWS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FJsonObjectWrapper                                  Attributes;                                              // 0x0018(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
	 * Size -> 0x0078
	 */
	struct FCatalogDynamicBundleItem
	{
	public:
		struct FItemQuantity                                       Item;                                                    // 0x0000(0x0038) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bCanOwnMultiple;                                         // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4026[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegularPrice;                                            // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DiscountedPrice;                                         // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AlreadyOwnedPriceReduction;                              // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0048(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0060(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogDynamicBundle
	 * Size -> 0x0028
	 */
	struct FCatalogDynamicBundle
	{
	public:
		int32_t                                                    BasePrice;                                               // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStoreCurrencyType                                         CurrencyType;                                            // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X25B[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencySubType;                                         // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCatalogDynamicBundleItem>                   BundleItems;                                             // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogPurchaseNotification
	 * Size -> 0x0020
	 */
	struct FCatalogPurchaseNotification
	{
	public:
		struct FMcpLootResult                                      LootResult;                                              // 0x0000(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogKeyValue
	 * Size -> 0x0020
	 */
	struct FCatalogKeyValue
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogItemPrice
	 * Size -> 0x0048
	 */
	struct FCatalogItemPrice
	{
	public:
		EStoreCurrencyType                                         CurrencyType;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YXM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencySubType;                                         // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RegularPrice;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FinalPrice;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                PriceTextOverride;                                       // 0x0020(0x0018) NativeAccessSpecifierPublic
		ECatalogSaleType                                           SaleType;                                                // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPJA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SaleExpiration;                                          // 0x0040(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
	 * Size -> 0x0030
	 */
	struct FCatalogMetaAssetInfo
	{
	public:
		class FString                                              StructName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FJsonObjectWrapper                                  Payload;                                                 // 0x0010(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogOffer
	 * Size -> 0x01D8
	 */
	struct FCatalogOffer
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCatalogKeyValue>                            MetaInfo;                                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ECatalogOfferType                                          OfferType;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLGS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCatalogItemPrice>                           Prices;                                                  // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCatalogDynamicBundle                               DynamicBundleInfo;                                       // 0x0038(0x0028) Edit, NativeAccessSpecifierPublic
		int32_t                                                    DailyLimit;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeeklyLimit;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Categories;                                              // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CatalogGroup;                                            // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CatalogGroupPriority;                                    // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SortPriority;                                            // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0090(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                ShortDescription;                                        // 0x00A8(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x00C0(0x0018) Edit, NativeAccessSpecifierPublic
		class FString                                              AppStoreId[0x8];                                         // 0x00D8(0x0080) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCatalogMetaAssetInfo                               MetaAssetInfo;                                           // 0x0158(0x0030) NativeAccessSpecifierPublic
		class FString                                              DisplayAssetPath;                                        // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RequiredFulfillmentIds;                                  // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      DenyFulfillmentIds;                                      // 0x01A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      DenyItemTemplateIds;                                     // 0x01B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemQuantity>                               ItemGrants;                                              // 0x01C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.Storefront
	 * Size -> 0x0020
	 */
	struct FStorefront
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCatalogOffer>                               CatalogEntries;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogDownload
	 * Size -> 0x0020
	 */
	struct FCatalogDownload
	{
	public:
		int32_t                                                    RefreshIntervalHrs;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DailyPurchaseHrs;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Expiration;                                              // 0x0008(0x0008) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStorefront>                                 Storefronts;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogItemSalePrice
	 * Size -> 0x0018
	 */
	struct FCatalogItemSalePrice
	{
	public:
		int32_t                                                    SalePrice;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECatalogSaleType                                           SaleType;                                                // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DAZH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartTime;                                               // 0x0008(0x0008) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           EndTime;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogPurchaseInfo
	 * Size -> 0x0030
	 */
	struct FCatalogPurchaseInfo
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchaseQuantity;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStoreCurrencyType                                         Currency;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7GT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencySubType;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpectedPrice;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEOF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameSubCatalog.CatalogReceiptInfo
	 * Size -> 0x0038
	 */
	struct FCatalogReceiptInfo
	{
	public:
		EAppStore                                                  AppStore;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_173S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AppStoreId;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptId;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptInfo;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
