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
	 * WidgetBlueprintGeneratedClass VideoSettings.VideoSettings_C
	 * Size -> 0x0105 (FullSize[0x053D] - InheritedSize[0x0438])
	 */
	class UVideoSettings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_39UC[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UComboBoxString*                                     ComboBoxResolution;                                      // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionAA;                                                // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionFPSLimit;                                          // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionFX;                                                // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionPostProcess;                                       // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionResolution;                                        // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionResolutionScale;                                   // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionShadows;                                           // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionTextures;                                          // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionViewDistance;                                      // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionVSync;                                             // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionWindowMode;                                        // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextCurrentResolution;                              // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USlider*                                             SliderResolution;                                        // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     DisplayAdapterLabel;                                     // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionDisplayAdapter;                                    // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionFoliage;                                           // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionFullscreenType;                                    // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URenderResolutionStatusIcon_C*                       RenderResolutionStatusIcon;                              // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SliderGreenPortion;                                      // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SliderRedPortion;                                        // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              SliderYellowPortion;                                     // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionGameUserSettings*                              GameUserSettings;                                        // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            AvailableResolutionsX;                                   // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            AvailableResolutionsY;                                   // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FString>                                      AvalableResolutionStrings;                               // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    TempNewResolutionIndex;                                  // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WantToRunBenchmark;                                      // 0x0534(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K5RT[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalizedIdeal3dScale;                                  // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWindowMode                                                CurrentPreferredFullscreenMode;                          // 0x053C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void WindowModeToIndex(EWindowMode WindowMode, int32_t* Index);
		void HandleOneResolution(int32_t Width, int32_t Height);
		void RefreshRenderScale();
		void Apply();
		void Reset();
		class UWidget* GenerateResolutionOption(const class FString& Item);
		void FrameRateToIndex(float FPSLimit, int32_t* FPSLimitIndex);
		void Refresh();
		void OnTimedOut_FEC7EC3548374E37011E3A929232AC00();
		void OnKilled_FEC7EC3548374E37011E3A929232AC00();
		void OnDeclined_FEC7EC3548374E37011E3A929232AC00();
		void OnConfirmed_FEC7EC3548374E37011E3A929232AC00();
		void Construct();
		void BndEvt__OptionWindowMode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionFPSLimit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionVSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionOverall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionViewDistance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionShadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionAA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionTextures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionFX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionPostProcess_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void OnActivated();
		void Destruct();
		void BndEvt__SliderResolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__ComboBoxResolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void ApplySettingsCE();
		void RunVideoBenchmark();
		void BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void ExecuteUbergraph_VideoSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
