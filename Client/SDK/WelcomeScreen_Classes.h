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
	 * WidgetBlueprintGeneratedClass WelcomeScreen.WelcomeScreen_C
	 * Size -> 0x00B9 (FullSize[0x04F1] - InheritedSize[0x0438])
	 */
	class UWelcomeScreen_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_TWST[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CloseAndMatchmake;                                       // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    PageForward_In;                                          // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    PageForward_Out;                                         // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Intro;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonBack;                                       // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonPlay;                                       // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButtonSkip;                                       // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_3;                                                 // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherContent;                                    // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherPlay;                                       // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextHeading;                                        // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextSubHeading;                                     // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVeterancyOption_C*                                  VeterancyBeginner;                                       // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVeterancyOption_C*                                  VeterancyExperienced;                                    // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVeterancyOption_C*                                  VeterancyNew;                                            // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVeterancyOption_C*                                  VeterancyVeteran;                                        // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		EOrionVeterancy                                            Veterancy;                                               // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHeroDetailsVisible;                                     // 0x04C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2XFK[0x6];                                   // 0x04CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionHeroData*                                      SelectedHero;                                            // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayAfterSettingVeterancy;                              // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K48P[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOrionHeroData*>                              AvailableHeroes;                                         // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bValidMMR;                                               // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__VeterancyBeginner_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__VeterancyNew_K2Node_ComponentBoundEvent_10_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__VeterancyExperienced_K2Node_ComponentBoundEvent_11_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__VeterancyVeteran_K2Node_ComponentBoundEvent_12_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__PageForward_Out_K2Node_ComponentBoundEvent_13_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__PageForward_Out_K2Node_ComponentBoundEvent_14_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnActivated();
		void BndEvt__PageForward_In_K2Node_ComponentBoundEvent_15_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__ShowHeroDetails_K2Node_ComponentBoundEvent_18_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__DefaultButtonBack_K2Node_ComponentBoundEvent_19_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonPlay_K2Node_ComponentBoundEvent_20_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__DefaultButtonSkip_K2Node_ComponentBoundEvent_21_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__PageForward_In_K2Node_ComponentBoundEvent_22_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void HandleSetVeterancy();
		void HandleVeterancySet(bool bSuccess, const class FText& ErrorMessage);
		void BndEvt__CloseAndMatchmake_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void ExecuteUbergraph_WelcomeScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
