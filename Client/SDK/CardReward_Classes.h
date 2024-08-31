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
	 * WidgetBlueprintGeneratedClass CardReward.CardReward_C
	 * Size -> 0x0048 (FullSize[0x0AF8] - InheritedSize[0x0AB0])
	 */
	class UCardReward_C : public UOrionBaseButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Appear;                                                  // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    ShowRarity;                                              // 0x0AC0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Float;                                                   // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Reveal;                                                  // 0x0AD0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderRarityIndicator;                                   // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCard_C*                                             Card_2;                                                  // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Mask;                                                    // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              TempLogo;                                                // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetCard(class UOrionCardData* CardData);
		void Reset();
		void Construct();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BP_OnSelected();
		void BndEvt__Reveal_K2Node_ComponentBoundEvent_1323_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void ExecuteUbergraph_CardReward(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
