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
	 * WidgetBlueprintGeneratedClass HUDWidget_V4.HUDWidget-V4_C
	 * Size -> 0x0168 (FullSize[0x05E8] - InheritedSize[0x0480])
	 */
	class UHUDWidgetV4_C : public UOrionHUDWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOutHUD_Fast;                                         // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    FadeOutHUD;                                              // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityWidgetContainerV4_C*                         AbilityContainer;                                        // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAFKWidget_C*                                        AFKWidget;                                               // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAutobuyPopupHUDWidget_C*                            AutobuyPopupHUDWidget;                                   // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBP_XPWidgetWrapper_C*                               BP_XPWidgetWrapper_260;                                  // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBuff_Status_HUD_Widget_C*                           Buff_Status_HUD_Widget_254;                              // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBuffStatusEffectContainer_C*                        BuffStatusEffectContainer_46;                            // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardAbilityWidgetContainerV4_C*                     CardContainer;                                           // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UInGameChatWidget_C*                                 ChatWindow_Widget;                                       // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCombatMessageManagerWidgetV4_C*                     CombatMessageManagerWidget;                              // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UConfirmCancelWidget_C*                              ConfirmCancelWidget;                                     // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCoreWidgetV4_Enemy_C*                               CoreWidget_Enemy;                                        // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCoreWidgetV4_C*                                     CoreWidget_Friendly;                                     // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDamageOverlayWidgetV4_C*                            DamageOverlayWidgetV4;                                   // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDeathCamWidget_C*                                   DeathCamWidget_137;                                      // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        DeathLog_14;                                             // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDeathLogPanel_C*                                    DeathLogPanel_7;                                         // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDevelopmentLabelWidget_C*                           DevelopmentLabelWidget_41;                               // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             FaderBorder;                                             // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionFPSAndPing*                                    FPSWidget;                                               // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGameEventMessageWidget_C*                           GameEventMessageWidget;                                  // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHUDIndicatorOverlayWidget_C*                        HUDIndicatorOverlay;                                     // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHUD_Menu_Manager_Widget_C*                          HUD_Menu_Manager_Widget;                                 // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHUDAlertPresenter_C*                                HUDAlertPresenter;                                       // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHUDRespawnTimerV4_C*                                HUDRespawnTimerV4;                                       // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UKDAWidgetV4_C*                                      KDAWidgetV4_78;                                          // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCanvasPanel*                                        MainCanvasPanel;                                         // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMatch_Info_Text_Widget_C*                           Match_Info_Text_Widget;                                  // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMiniMapWidget_C*                                    MiniMapWidget;                                           // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMiscAbilityWidget_C*                                MiscAbilityWidget;                                       // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlayerStatusAssembly_C*                             PlayerStatusAssembly;                                    // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UQuestLogWidget_C*                                   QuestLogWidget_54;                                       // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URespawnTimerContaier_V2_C*                          RespawnTimerContaier;                                    // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UReticle_Container_Widget_C*                         ReticleWidget;                                           // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USprintWidget_C*                                     SprintWidget_30;                                         // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USurrenderStatus_C*                                  SurrenderStatus;                                         // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        SurrenderStatus_14;                                      // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVictoryDefeatScreen_C*                              VictoryDefeatScreen;                                     // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        WellProgress_14;                                         // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWellProgressWidgetV4_C*                             WellProgressWidget;                                      // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bMatchOver;                                              // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EHC9[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionTutorial*                                      NewVar_1;                                                // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void MapModeChanged(bool bIsLargeMap);
		void Construct();
		void UpdateFPSAndPingSettings();
		void OnMatchEnd_BlueprintEvent();
		void OnShowKillCam_BlueprintEvent();
		void OnHideKillCam_BlueprintEvent();
		void OnFadeHUDOut_BlueprintEvent();
		void OnFadeHUDIn_BlueprintEvent();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void TutorialTest(int32_t TutorialIndex);
		void ExecuteUbergraph_HUDWidgetV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
