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
	 * WidgetBlueprintGeneratedClass OptionsTabButton.OptionsTabButton_C
	 * Size -> 0x00FE (FullSize[0x0BAE] - InheritedSize[0x0AB0])
	 */
	class UOptionsTabButton_C : public UOrionBaseButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Deselect;                                                // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Click;                                                   // 0x0AC0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBoxContent;                                    // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageIcon;                                               // 0x0AD0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageShadow;                                             // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextLabel;                                          // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            OverlayIconArea;                                         // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SizeBoxContainer;                                        // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                Label;                                                   // 0x0AF8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         IconBrush;                                               // 0x0B10(0x0090) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bHasText;                                                // 0x0BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasIcon;                                                // 0x0BA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_51PN[0x2];                                   // 0x0BA2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HeightOverride;                                          // 0x0BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		int32_t                                                    WidthOverride;                                           // 0x0BA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EOrionTextColor                                            TextColorNormal;                                         // 0x0BAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EOrionTextColor                                            TextColorHovered;                                        // 0x0BAD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UpdateSizeBox();
		void UpdatePadding();
		void UpdateIcon(struct FSlateBrush* Brush);
		void UpdateText(const class FText& Text);
		void PreConstruct(bool IsDesignTime);
		void BP_OnSelected();
		void BP_OnDeselected();
		void BP_OnClicked();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_OptionsTabButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
