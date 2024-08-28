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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AudioSettings.AudioSettings_C.PlayVoicePreviewSound
	 */
	struct UAudioSettings_C_PlayVoicePreviewSound_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.FormatNumberForDisplay
	 */
	struct UAudioSettings_C_FormatNumberForDisplay_Params
	{
	public:
		float                                                      Num;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_72H6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
		float                                                      Float;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AudioSettings.AudioSettings_C.Reset
	 */
	struct UAudioSettings_C_Reset_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.Apply
	 */
	struct UAudioSettings_C_Apply_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.Refresh
	 */
	struct UAudioSettings_C_Refresh_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.Destruct
	 */
	struct UAudioSettings_C_Destruct_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.Construct
	 */
	struct UAudioSettings_C_Construct_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_29_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AudioSettings.AudioSettings_C.OnActivated
	 */
	struct UAudioSettings_C_OnActivated_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_48_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderMainVolume_K2Node_ComponentBoundEvent_181_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_251_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_262_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderMusicVolume_K2Node_ComponentBoundEvent_276_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_452_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_472_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderVoiceVolume_K2Node_ComponentBoundEvent_526_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_587_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_612_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AudioSettings.AudioSettings_C.BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UAudioSettings_C_BndEvt__SliderOtherVolume_K2Node_ComponentBoundEvent_681_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AudioSettings.AudioSettings_C.ExecuteUbergraph_AudioSettings
	 */
	struct UAudioSettings_C_ExecuteUbergraph_AudioSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
