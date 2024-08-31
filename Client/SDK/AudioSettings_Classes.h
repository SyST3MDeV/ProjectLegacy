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
	 * WidgetBlueprintGeneratedClass AudioSettings.AudioSettings_C
	 * Size -> 0x00A0 (FullSize[0x04D8] - InheritedSize[0x0438])
	 */
	class UAudioSettings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_9ZZX[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionTextBlock*                                     OrionTextMasterVolume;                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextMusicVolume;                                    // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextOtherVolume;                                    // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextVoiceVolume;                                    // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USlider*                                             SliderMasterVolume;                                      // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USlider*                                             SliderMusicVolume;                                       // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USlider*                                             SliderOtherVolume;                                       // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USlider*                                             SliderVoiceVolume;                                       // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAudioComponent*                                     SliderAudioComp;                                         // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          SliderSound;                                             // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentMasterVolume;                                     // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L081[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundMix*                                           Mix_AudioSettings;                                       // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentMusicVolume;                                      // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentVoiceVolume;                                      // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrentOtherVolume;                                      // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U87L[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Music;                                                   // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     MusicAudioComp;                                          // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          Voice;                                                   // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAudioComponent*                                     VoiceAudioComp;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayVoicePreviewSound();
		void FormatNumberForDisplay(float Num, class FText* Text, float* Float);
		void Reset();
		void Apply();
		void Refresh();
		void Destruct();
		void Construct();
		void BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void OnActivated();
		void BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void ExecuteUbergraph_AudioSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
