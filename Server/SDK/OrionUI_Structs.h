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
	 * Enum OrionUI.ESlotGroup
	 */
	enum class ESlotGroup : uint8_t
	{
		Invalid = 0,
		Staff   = 1,
		Charms  = 2,
		Effects = 3,
		MAX     = 4
	};

	/**
	 * Enum OrionUI.EOrionLegacySlateWidgetType
	 */
	enum class EOrionLegacySlateWidgetType : uint8_t
	{
		None          = 0,
		Watermark     = 1,
		DeveloperMenu = 2,
		MAX           = 3,
		MAX01         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OrionUI.InventoryItemDisplayData
	 * Size -> 0x0028
	 */
	struct FInventoryItemDisplayData
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF3J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionUI.OrionSlotDisplayInfo
	 * Size -> 0x0030
	 */
	struct FOrionSlotDisplayInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  DyeImages;                                               // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    DyeCount;                                                // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X50I[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OrionUI.CustomerServiceURLInLanguage
	 * Size -> 0x0020
	 */
	struct FCustomerServiceURLInLanguage
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URLString;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
