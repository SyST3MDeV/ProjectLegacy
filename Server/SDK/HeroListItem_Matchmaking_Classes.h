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
	 * WidgetBlueprintGeneratedClass HeroListItem_Matchmaking.HeroListItem_Matchmaking_C
	 * Size -> 0x0029 (FullSize[0x0B29] - InheritedSize[0x0B00])
	 */
	class UHeroListItem_Matchmaking_C : public UOrionHeroListItem_Matchmaking
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B00(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hover;                                                   // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageSelectedBorder;                                     // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageSelectionOverlay;                                   // 0x0B18(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Port_Border;                                             // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       WasHovered;                                              // 0x0B28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BP_OnHovered();
		void BP_OnUnhovered();
		void BP_OnSelected();
		void BP_OnDeselected();
		void ExecuteUbergraph_HeroListItem_Matchmaking(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
