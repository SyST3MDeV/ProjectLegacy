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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
