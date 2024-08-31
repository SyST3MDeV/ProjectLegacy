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
	 * WidgetBlueprintGeneratedClass SpectatorHUDWidget.SpectatorHUDWidget_C
	 * Size -> 0x00B8 (FullSize[0x03A0] - InheritedSize[0x02E8])
	 */
	class USpectatorHUDWidget_C : public UOrionSpectatorHUDWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          AnalogCursorHint;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          CameraModeDisplay;                                       // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDigitalFlameUserWidget_C*                           DigitalFlameUserWidget;                                  // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGameEventMessageWidget_C*                           GameEventMessageWidget;                                  // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHUDIndicatorOverlayWidget_C*                        HUDIndicatorOverlayWidget;                               // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardMenuV4_C*                                 InGameScoreboardV4;                                      // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            MainHUD;                                                 // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMatch_Info_Text_Widget_C*                           Match_Info_Text_Widget;                                  // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionMenuManagerWidget*                             MenuManagerWidget;                                       // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMiniMapWidget_C*                                    MiniMapWidget;                                           // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UReplayEscapeMenu_C*                                 ReplayEscapeMenuWidget2;                                 // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URespawnTimerContaier_V2_C*                          RespawnTimerContaier_V2;                                 // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UReticle_Container_Widget_C*                         Reticle_Container_Widget;                                // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_2;                                              // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USpectatorViewOptions_C*                             SpectatorViewOptions;                                    // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTeam_Info_Widget_Spectator_Blue_C*                  Team_Info_Widget_Spectator_Blue;                         // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTeam_Info_Widget_Spectator_Red_C*                   Team_Info_Widget_Spectator_Red;                          // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UFollowedHeroWidget_C*                               WatchedHeroWidget;                                       // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWatermark_C*                                        Watermark;                                               // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		ESlateVisibility                                           HUDVisibility;                                           // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           IndicatorVisibility;                                     // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           HealthandStatusVis;                                      // 0x039A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           AbilityWidgetVis;                                        // 0x039B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           TeamInfoVis;                                             // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           EnemyInfoVis;                                            // 0x039D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESlateVisibility                                           MiniMapVis;                                              // 0x039E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowControllerCursor;                                   // 0x039F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HandleChangeInMenuState(EOrionMenuSlotTypes MenuSlotType, bool IsNewlyVisible);
		void SetAnalogCursorToProperState();
		void UpdateWatchedHeroWidgetVisibility();
		void OnWatchedHeroChange(EOrionTeam NewHeroTeam, int32_t NewHeroIndex);
		void SetShowControllerCursor(bool NewShowControllerCursor);
		void OnToggleSpectatorControllerCursor();
		void OnUsingGamepadToggle(bool bNewUsingGamepad);
		void OnMobaCamChangeCameraAngle(EIsometricCamAngle NewCameraAngle);
		void SetMinimapRotation(EIsometricCamAngle CamAngle);
		void UpdateHUDToggles();
		void Construct();
		void OnSpectatorCameraModeChange(ESpectatorCameraType NewCameraMode);
		void HideSpectatorCameraModeText();
		void OnEnterState(EOrionUIState PreviousState);
		void OnSetHudVisibility(bool bMainVisible, bool bIndicatorsVisible);
		void OnWatchedHeroChange_Event(EOrionTeam HeroTeam, int32_t HeroIndex);
		void OnUsingGamepadToggle_Event(bool UsingAnalog);
		void OnToggleSpectatorControllerCursor_Event();
		void HandleChangeInMenuState_Event(EOrionMenuSlotTypes MenuSlot, bool bNewIsOpenState);
		void SetAnalogCursorToProperState_Event();
		void OnExitState(EOrionUIState NextState);
		void ExecuteUbergraph_SpectatorHUDWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
