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
	 * WidgetBlueprintGeneratedClass UIManager.UIManager_C
	 * Size -> 0x0038 (FullSize[0x0708] - InheritedSize[0x06D0])
	 */
	class UUIManager_C : public UOrionUIManagerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNotificationManager_C*                              NotificationManager;                                     // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            BoxPreMatchInfoText;                                     // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEpicPurchaseFlowDisplay_C*                          EpicPurchaseFlowDisplay;                                 // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMatch_Info_Text_Widget_C*                           Match_Info_Text_Widget;                                  // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionUIStateWidget*                                 CurrentState;                                            // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOrionUIStateWidget*                                 PreviousState;                                           // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBoxContent(class USizeBox* Box, class UOrionUIStateWidget* Widget);
		void OnTimedOut_1304D0084FAF86AA0C7457A14A356F8D();
		void OnKilled_1304D0084FAF86AA0C7457A14A356F8D();
		void OnDeclined_1304D0084FAF86AA0C7457A14A356F8D();
		void OnConfirmed_1304D0084FAF86AA0C7457A14A356F8D();
		void Construct();
		void Destruct();
		void OnShowError(const struct FOrionDialogDescription& Description);
		void OnSetMatchInfoText(const class FText& InText);
		void OnSetMatchInfoVisibility(bool bVisible);
		void OnStateTransitionComplete();
		void ExecuteUbergraph_UIManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
