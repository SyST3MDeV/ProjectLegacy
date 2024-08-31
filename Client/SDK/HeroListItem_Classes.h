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
	 * WidgetBlueprintGeneratedClass HeroListItem.HeroListItem_C
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class UHeroListItem_C : public UOrionHeroListItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageSelectionOverlay;                                   // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BP_OnSelected();
		void BP_OnDeselected();
		void ExecuteUbergraph_HeroListItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
