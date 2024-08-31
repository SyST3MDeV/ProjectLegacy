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
	 * WidgetBlueprintGeneratedClass ToggleButton.ToggleButton_C
	 * Size -> 0x00B4 (FullSize[0x035C] - InheritedSize[0x02A8])
	 */
	class UToggleButton_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button;                                                  // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          Text;                                                    // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         NormalTextColor;                                         // 0x02D0(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         HoverTextColor;                                          // 0x02F8(0x0028) Edit, BlueprintVisible
		class FText                                                Label;                                                   // 0x0320(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    FontSize;                                                // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        SelectedButtonBGColor;                                   // 0x033C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        NormalButtonBGColor;                                     // 0x034C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetSelected(bool bIsSelected);
		void BndEvt__BgButton_K2Node_ComponentBoundEvent_481_OnButtonClickedEvent__DelegateSignature();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BndEvt__BgButton_K2Node_ComponentBoundEvent_147_OnButtonPressedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ToggleButton(int32_t EntryPoint);
		void OnClicked__DelegateSignature(class UToggleButton_C* Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
