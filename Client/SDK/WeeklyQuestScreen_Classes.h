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
	 * WidgetBlueprintGeneratedClass WeeklyQuestScreen.WeeklyQuestScreen_C
	 * Size -> 0x0060 (FullSize[0x0550] - InheritedSize[0x04F0])
	 */
	class UWeeklyQuestScreen_C : public UOrionWeeklyQuestScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    DefaultButtonAbandonCancel;                              // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAbandonConfirm;                             // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonAbandonQuest;                               // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonDismiss;                                    // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionLazyImage*                                     OrionLazyImageWeeklyQuestSecondaryObjective;             // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_1;                                         // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextSecondaryObjective;                             // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                SwitcherAbandon;                                         // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWeeklyPackInfo_C*                                   Weekly_Pack_Info;                                        // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWeeklyPackInfo_C*                                   Weekly_Pack_Info_New;                                    // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWeeklyPackInfo_C*                                   Weekly_Pack_Info_Old;                                    // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void SetupData();
		void OnResetData();
		void Construct();
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonAbandonQuest_K2Node_ComponentBoundEvent_4_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonAbandonConfirm_K2Node_ComponentBoundEvent_23_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonAbandonCancel_K2Node_ComponentBoundEvent_39_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_WeeklyQuestScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
