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
	 * WidgetBlueprintGeneratedClass SettingsOption.SettingsOption_C
	 * Size -> 0x0080 (FullSize[0x0328] - InheritedSize[0x02A8])
	 */
	class USettingsOption_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBoxRadioOptions;                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextLabel;                                          // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UNamedSlot*                                          SlotCustom;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SwitcherOptionTypes;                                     // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCheckBox_C*                                         CheckBox;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            SizeboxLabelContainer;                                   // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                Label;                                                   // 0x02E0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UOrionBaseButton_Group*                              ButtonGroup;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESettingsOptionType                                        Type;                                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_PVZ6[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        RadioButtons;                                            // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetToggleButtonState(bool IsActive);
		void SelectIndex(int32_t Index);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ForwardSelectedButtonChanged(class UOrionBaseButton* SelectedButton, int32_t ButtonIndex);
		void BndEvt__CheckBox_K2Node_ComponentBoundEvent_11_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void ExecuteUbergraph_SettingsOption(int32_t EntryPoint);
		void OnSelectionChanged__DelegateSignature(int32_t Selection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
