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
	 * WidgetBlueprintGeneratedClass ScoreboardRow_Friendly_V4.ScoreboardRow_Friendly-V4_C
	 * Size -> 0x00E8 (FullSize[0x04A0] - InheritedSize[0x03B8])
	 */
	class UScoreboardRow_FriendlyV4_C : public UOrionScoreboardRow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BP_AssistsText;                                          // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_CardPointTotalText;                                   // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_CardXPText;                                           // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_DeathsText;                                           // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BP_HeroIcon;                                             // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_HeroName;                                             // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_KillsText;                                            // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     BP_LevelNumSwitcher;                                     // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_MinionsText;                                          // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              BP_PCPlatformImage;                                      // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_PlayerLevel;                                          // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_PlayerName;                                           // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          BP_RespawnTimerText;                                     // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card0;                                                   // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card1;                                                   // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card2;                                                   // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card3;                                                   // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card4;                                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card5;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardCardWidgetV4_C*                           Card6;                                                   // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              DisconnectedIcon;                                        // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              LevelBorder;                                             // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             VisBorder;                                               // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FLinearColor                                        BackgroundColor;                                         // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        FadedBackgroundColor;                                    // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetLocalPlayercolors();
		void Construct();
		void OnRespawned();
		void OnDeath();
		void UpdateIsLocalPlayer(bool bIsLocalPlayer);
		void UpdateVisibleToLocalPlayer(bool bVisibleToLocalPlayer);
		void OnDisconnectedChange(bool bIsDisconnected);
		void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_ScoreboardRow_FriendlyV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
