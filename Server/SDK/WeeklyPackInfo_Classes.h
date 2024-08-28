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
	 * WidgetBlueprintGeneratedClass WeeklyPackInfo.WeeklyPackInfo_C
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UWeeklyPackInfo_C : public UOrionCustomStoreContentWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBoxOffers;                                     // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetPackData(class UOrionMcpCardPackItemDefinition* CardPack);
		void OnLoaded_9E0F18934046E07FEF6F4EAEE2D4D84F(class UObject* Loaded);
		void OnOfferSet(const struct FStoreOfferBP& InOffer);
		void ExecuteUbergraph_WeeklyPackInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
