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
	 * Function VideoSettings.VideoSettings_C.WindowModeToIndex
	 */
	struct UVideoSettings_C_WindowModeToIndex_Params
	{
	public:
		EWindowMode                                                WindowMode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y6VO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.HandleOneResolution
	 */
	struct UVideoSettings_C_HandleOneResolution_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.RefreshRenderScale
	 */
	struct UVideoSettings_C_RefreshRenderScale_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.Apply
	 */
	struct UVideoSettings_C_Apply_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.Reset
	 */
	struct UVideoSettings_C_Reset_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.GenerateResolutionOption
	 */
	struct UVideoSettings_C_GenerateResolutionOption_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.FrameRateToIndex
	 */
	struct UVideoSettings_C_FrameRateToIndex_Params
	{
	public:
		float                                                      FPSLimit;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    FPSLimitIndex;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.Refresh
	 */
	struct UVideoSettings_C_Refresh_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.OnTimedOut_FEC7EC3548374E37011E3A929232AC00
	 */
	struct UVideoSettings_C_OnTimedOut_FEC7EC3548374E37011E3A929232AC00_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.OnKilled_FEC7EC3548374E37011E3A929232AC00
	 */
	struct UVideoSettings_C_OnKilled_FEC7EC3548374E37011E3A929232AC00_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.OnDeclined_FEC7EC3548374E37011E3A929232AC00
	 */
	struct UVideoSettings_C_OnDeclined_FEC7EC3548374E37011E3A929232AC00_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.OnConfirmed_FEC7EC3548374E37011E3A929232AC00
	 */
	struct UVideoSettings_C_OnConfirmed_FEC7EC3548374E37011E3A929232AC00_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.Construct
	 */
	struct UVideoSettings_C_Construct_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] Window Mode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionWindowMode_K2Node_ComponentBoundEvent_932_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] FPS Limit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionFPSLimit_K2Node_ComponentBoundEvent_940_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] VSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionVSync_K2Node_ComponentBoundEvent_945_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] Overall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionOverall_K2Node_ComponentBoundEvent_956_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] View Distance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionViewDistance_K2Node_ComponentBoundEvent_963_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] Shadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionShadows_K2Node_ComponentBoundEvent_970_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] AA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionAA_K2Node_ComponentBoundEvent_978_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] Textures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionTextures_K2Node_ComponentBoundEvent_987_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] FX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionFX_K2Node_ComponentBoundEvent_997_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Option] Post-Process_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionPostProcess_K2Node_ComponentBoundEvent_1008_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.OnActivated
	 */
	struct UVideoSettings_C_OnActivated_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.Destruct
	 */
	struct UVideoSettings_C_Destruct_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Slider] Resolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__SliderResolution_K2Node_ComponentBoundEvent_753_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__[Combo Box] Resolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__ComboBoxResolution_K2Node_ComponentBoundEvent_483_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.ApplySettingsCE
	 */
	struct UVideoSettings_C_ApplySettingsCE_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.RunVideoBenchmark
	 */
	struct UVideoSettings_C_RunVideoBenchmark_Params
	{	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionFullscreenType_K2Node_ComponentBoundEvent_279_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature
	 */
	struct UVideoSettings_C_BndEvt__OptionFoliage_K2Node_ComponentBoundEvent_139_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoSettings.VideoSettings_C.ExecuteUbergraph_VideoSettings
	 */
	struct UVideoSettings_C_ExecuteUbergraph_VideoSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
