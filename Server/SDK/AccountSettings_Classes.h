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
	 * WidgetBlueprintGeneratedClass AccountSettings.AccountSettings_C
	 * Size -> 0x0070 (FullSize[0x04A8] - InheritedSize[0x0438])
	 */
	class UAccountSettings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_RC4R[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_676;                                       // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBox_1666;                                      // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      HorizontalBox_2027;                                      // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    ManageEpicAccount;                                       // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextBlock_658;                                      // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextBlock_1596;                                     // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextBlock_1933;                                     // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    UnlinkPSN;                                               // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    UpdateEpicAccount;                                       // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bUnlinkingPSN;                                           // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7QCW[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CloseSettings;                                           // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class FText GetPSNOnlineIdText();
		class FText GetEpicAccountEmailText();
		bool GetManageAccountEnabled();
		ESlateVisibility GetUnlinkPSNVisibility();
		bool GetUnlinkingPSN();
		ESlateVisibility GetUpgradeAccountVisibility();
		void Refresh();
		void OnActivated();
		void BndEvt__UpdateEpicAccount_K2Node_ComponentBoundEvent_1092_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__UnlinkPSN_K2Node_ComponentBoundEvent_1094_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__ManageEpicAccount_K2Node_ComponentBoundEvent_1097_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnUpgradeAccountComplete(bool bSuccess, const class FText& Message);
		void OnUnlinkConsoleAccountComplete(bool bSuccess, const class FText& Message);
		void ExecuteUbergraph_AccountSettings(int32_t EntryPoint);
		void CloseSettings__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
