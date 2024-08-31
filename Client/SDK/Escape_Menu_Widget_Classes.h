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
	 * WidgetBlueprintGeneratedClass Escape_Menu_Widget.Escape_Menu_Widget_C
	 * Size -> 0x00B9 (FullSize[0x02E9] - InheritedSize[0x0230])
	 */
	class UEscape_Menu_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEcosystemRoot_C*                                    EcosystemRoot;                                           // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    ExitButton;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UGamepadLayout_C*                                    GamepadLayout;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_3;                                                 // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_6;                                                 // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    MutePlayersButton;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    ResumeButton;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_50;                                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SettingsButton;                                          // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SurrenderButton;                                         // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        SurrenderInfo;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SurrenderNoButton;                                       // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     SurrenderStatusText;                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     SurrenderTitle;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalBox*                                        SurrenderVoting;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHorizontalBox*                                      SurrenderVotingButtons;                                  // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SurrenderYesButton;                                      // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWindowControls_C*                                   WindowControls;                                          // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                SurrenderString;                                         // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        SurrenderUpdateHandle;                                   // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		EOrionMatchmakingType                                      NewVar_1;                                                // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GamepadSwitch(bool IsUsingGamepad);
		void UpdateSurrenderButton();
		void SurrenderStatusChanged(class AOrionPlayerState_Game* PlayerState, ETeamSurrenderStatus VoteStatus, ESurrenderVote Vote);
		void SubMenuClosed();
		void SubMenuOpened();
		void EscapeButtonPressed();
		void UnregisterforInput();
		void RegisterforInput();
		void OnTimedOut_DEDCF13B44E528AEDE242588C04FFBB3();
		void OnKilled_DEDCF13B44E528AEDE242588C04FFBB3();
		void OnDeclined_DEDCF13B44E528AEDE242588C04FFBB3();
		void OnConfirmed_DEDCF13B44E528AEDE242588C04FFBB3();
		void OnOpen();
		void OnClose();
		void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_210_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__ExitButton_K2Node_ComponentBoundEvent_240_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__SurrenderButton_K2Node_ComponentBoundEvent_224_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__SurrenderYesButton_K2Node_ComponentBoundEvent_42_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__SurrenderNoButton_K2Node_ComponentBoundEvent_52_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_173_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Construct();
		void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_219_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__MutePlayersButton_K2Node_ComponentBoundEvent_126_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_Escape_Menu_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
