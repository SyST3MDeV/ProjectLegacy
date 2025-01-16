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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ToggleButton.ToggleButton_C
	 * Size -> 0x00B4 (FullSize[0x035C] - InheritedSize[0x02A8])
	 */
	class UToggleButton_C : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_PQLK[0xB4];                                  // 0x02A8(0x00B4) MISSED OFFSET (PADDING)

	public:
		void SetSelected(bool bIsSelected);
		void BndEvt__BgButton_K2Node_ComponentBoundEvent_481_OnButtonClickedEvent__DelegateSignature();
		void OnMouseEnter(const struct FMouseEvent& MyGeometry);
		void OnMouseLeave();
		void BndEvt__BgButton_K2Node_ComponentBoundEvent_147_OnButtonPressedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ToggleButton(int32_t EntryPoint);
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
