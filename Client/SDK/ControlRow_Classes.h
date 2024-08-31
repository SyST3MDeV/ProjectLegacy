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
	 * WidgetBlueprintGeneratedClass ControlRow.ControlRow_C
	 * Size -> 0x0181 (FullSize[0x0429] - InheritedSize[0x02A8])
	 */
	class UControlRow_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BindingImage;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BindingKEy;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BindingName;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UNamedSlot*                                          CustomImageSlot;                                         // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                BindingDisplayText;                                      // 0x02D8(0x0018) Edit, BlueprintVisible
		class FText                                                BindingKeyText;                                          // 0x02F0(0x0018) Edit, BlueprintVisible
		struct FSlateBrush                                         KeyboardBrush;                                           // 0x0308(0x0090) Edit, BlueprintVisible
		struct FSlateBrush                                         GamepadBrush;                                            // 0x0398(0x0090) Edit, BlueprintVisible
		bool                                                       NotUsedOnConsole;                                        // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateVisibleWidget();
		void UpdateBindingBrush(bool IsGamepadEnabled);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ControlRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
