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
	 * WidgetBlueprintGeneratedClass SettingsRoot.SettingsRoot_C
	 * Size -> 0x00B8 (FullSize[0x04F0] - InheritedSize[0x0438])
	 */
	class USettingsRoot_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_LVXH[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioSettings_C*                                    AudioSettings;                                           // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonReset;                                      // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGameplaySettings_C*                                 GameplaySettings;                                        // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTabList_C*                                          TabListCategories;                                       // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVideoSettings_C*                                    VideoSettings;                                           // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAccountSettings_C*                                  AccountSettings;                                         // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ApplyHBox;                                               // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Buttons;                                                 // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAccept;                                     // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonApply;                                      // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonCancel;                                     // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAutoDetect;                                 // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadLayout_C*                                    GamepadLayout;                                           // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeybindings_C*                                      Keybindings;                                             // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKeyboardSettings_C*                                 KeyboardSettings;                                        // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UNetworkingSettings_C*                               NetworkingSettings;                                      // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherMenus;                                      // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      ResetToDefaultsHBox;                                     // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionGameUserSettings*                              GameUserSettings;                                        // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void InputStub();
		ESlateVisibility GetCancelButtonVisibility();
		ESlateVisibility GetAutoDetectButtonVisibility();
		ESlateVisibility GetApplyButtonVisibility();
		ESlateVisibility GetResetToDefaultsButtonVisibility();
		void SetActiveTab(const class FName& TabId);
		void ApplySettings();
		void ResetActiveMenu();
		bool OnHandleBackAction();
		void Construct();
		void BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonReset_K2Node_ComponentBoundEvent_886_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonApply_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_901_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnActivated();
		void OnDeactivated();
		void OnBackPressed();
		void BndEvt__DefaultButtonAutoDetect_K2Node_ComponentBoundEvent_974_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void CustomEvent_1();
		void ExecuteUbergraph_SettingsRoot(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
