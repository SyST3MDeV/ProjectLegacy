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
	 * WidgetBlueprintGeneratedClass GameplaySettings.GameplaySettings_C
	 * Size -> 0x0094 (FullSize[0x04CC] - InheritedSize[0x0438])
	 */
	class UGameplaySettings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_6FWF[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USettingsOption_C*                                   OptionHealthOverHead;                                    // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   BasicAttackRange;                                        // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   EnableDeathcam;                                          // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionControllerInvertHorizontal;                        // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionControllerInvertVertical;                          // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionControllerRSItemUsage;                             // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionControllerSensitivityHorizontal;                   // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionControllerSensitivityVertical;                     // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionMouseInvertVertical;                               // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   OptionShowAbilityConfirm;                                // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextMouseLookSensitivity;                           // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_1;                                // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_2;                                // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   ShowPingAndFPS;                                          // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USettingsOption_C*                                   ShowXPPerMinute;                                         // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USlider*                                             SliderMouseLookSensitivity;                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		float                                                      SensitivityValue;                                        // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Apply();
		void Reset();
		void Refresh();
		void OnActivated();
		void BndEvt__OptionHealthOverHead_K2Node_ComponentBoundEvent_943_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_946_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionInvertHorizontal_K2Node_ComponentBoundEvent_950_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionSensitivityVertical_K2Node_ComponentBoundEvent_955_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionSensitivityHorizontal_K2Node_ComponentBoundEvent_961_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void Destruct();
		void Construct();
		void BndEvt__ShowPing_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionInvertVertical_K2Node_ComponentBoundEvent_392_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionControllerRSItemUsage_K2Node_ComponentBoundEvent_1182_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__Slider_1_K2Node_ComponentBoundEvent_567_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__SettingsOption_C_0_K2Node_ComponentBoundEvent_75_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__OptionShowAbilityConfirm_K2Node_ComponentBoundEvent_188_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__SettingsOption_82_K2Node_ComponentBoundEvent_101_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void BndEvt__SettingsOption_K2Node_ComponentBoundEvent_309_OnSelectionChanged__DelegateSignature(int32_t Selection);
		void ExecuteUbergraph_GameplaySettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
