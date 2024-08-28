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
	 * WidgetBlueprintGeneratedClass Card_Tooltip.Card_Tooltip_C
	 * Size -> 0x0070 (FullSize[0x0488] - InheritedSize[0x0418])
	 */
	class UCard_Tooltip_C : public UOrionCardTooltip
	{
	public:
		class UBackgroundBlurWidget*                               BackgroundBlurWidget_1;                                  // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardTooltipStatEntry_C*                             CardTooltipStatEntry;                                    // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardTooltipStatEntry_C*                             CardTooltipStatEntry_1;                                  // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardTooltipStatEntry_C*                             CardTooltipStatEntry_2;                                  // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardTooltipUpgradeEntry_C*                          CardTooltipUpgradeEntry_C_6;                             // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardTooltipUpgradeEntry_C*                          CardTooltipUpgradeEntry_C_7;                             // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardTooltipUpgradeEntry_C*                          CardTooltipUpgradeEntry_C_8;                             // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1014;                                              // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1019;                                              // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1021;                                              // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionCardData*                                      Card;                                                    // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UOrionMcpCardItem*                                   McpCard;                                                 // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class UOrionCardData*>                              UpgradeCards;                                            // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
