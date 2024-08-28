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
	 * WidgetBlueprintGeneratedClass RejoinMatchRoot.RejoinMatchRoot_C
	 * Size -> 0x0088 (FullSize[0x0330] - InheritedSize[0x02A8])
	 */
	class URejoinMatchRoot_C : public UOrionUIStateWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    AbandonButton;                                           // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_26;                                                // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageThrobber;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_3;                                // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    RejoinButton;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      RejoinButtons;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     RejoinMessage;                                           // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_10;                                             // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVersionInfo_C*                                      VersionInfo;                                             // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                RejoinFoundText;                                         // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RejoiningMatchText;                                      // 0x0318(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ShowRejoinButtons();
		void ShowRejoinInProgress();
		void OnTimedOut_C55C791C4783817F3A0C30A6E503F4C1();
		void OnKilled_C55C791C4783817F3A0C30A6E503F4C1();
		void OnDeclined_C55C791C4783817F3A0C30A6E503F4C1();
		void OnConfirmed_C55C791C4783817F3A0C30A6E503F4C1();
		void BndEvt__AbandonButton_K2Node_ComponentBoundEvent_177_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__RejoinButton_K2Node_ComponentBoundEvent_328_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnEnterState(EOrionUIState PreviousState);
		void HideSpinner(bool bSuccess);
		void ExecuteUbergraph_RejoinMatchRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
