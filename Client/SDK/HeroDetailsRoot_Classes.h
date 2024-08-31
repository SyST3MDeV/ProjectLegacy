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
	 * WidgetBlueprintGeneratedClass HeroDetailsRoot.HeroDetailsRoot_C
	 * Size -> 0x0060 (FullSize[0x0498] - InheritedSize[0x0438])
	 */
	class UHeroDetailsRoot_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_E0T7[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBackgroundDisplay_C*                                BackgroundDisplay;                                       // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UExclusiveModeMenu_C*                                ExclusiveModeMenu;                                       // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHeroDetails_Path_C*                                 HeroDetails_Path;                                        // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UHeroDetails_Skins_C*                                HeroDetails_Skins;                                       // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherTabs;                                       // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            OverlayAbilities;                                        // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVerticalAbilityDisplay_C*                           VerticalAbilityDisplay;                                  // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVideoTile_C*                                        VideoTutorial;                                           // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionHeroData*                                      HeroData;                                                // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                PreviousSceneName;                                       // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetHero(class UOrionHeroData* NewHero);
		void Construct();
		void OnActivated();
		void OnDeactivated();
		void BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature();
		void ExecuteUbergraph_HeroDetailsRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
