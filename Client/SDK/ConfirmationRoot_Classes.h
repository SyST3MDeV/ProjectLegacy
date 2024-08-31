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
	 * WidgetBlueprintGeneratedClass ConfirmationRoot.ConfirmationRoot_C
	 * Size -> 0x0061 (FullSize[0x0551] - InheritedSize[0x04F0])
	 */
	class UConfirmationRoot_C : public UOrionDialogWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Enter;                                                   // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAccept;                                     // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonCancel;                                     // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonDecline;                                    // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextMessageBody;                                    // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          TextErrorHeader;                                         // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextCountdown;                                      // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextTitle;                                          // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SwitcherHeader;                                          // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		float                                                      EndTime;                                                 // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsClosing;                                               // 0x0544(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XIRO[0x3];                                   // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimeoutTimerHandle;                                      // 0x0548(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInErrorMode;                                           // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetErrorMode(bool InErrorMode);
		void HandleTimeOut();
		void HandleResult(EOrionDialogResult Result);
		void UpdateButton(class UDefaultButton_C* Button, class FText* Text);
		ESlateVisibility IsTimerVisible();
		class FText GetTimer();
		void Construct();
		void OnShow();
		void OnKill();
		void Destruct();
		void BndEvt__DefaultButtonAccept_K2Node_ComponentBoundEvent_205_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonDecline_K2Node_ComponentBoundEvent_212_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonCancel_K2Node_ComponentBoundEvent_811_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnDeactivated();
		void OnActivated();
		void ExecuteUbergraph_ConfirmationRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
