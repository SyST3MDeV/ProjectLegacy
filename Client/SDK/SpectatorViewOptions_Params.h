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
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.Construct
	 */
	struct USpectatorViewOptions_C_Construct_Params
	{	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.OnSetButtonSelectedEvent
	 */
	struct USpectatorViewOptions_C_OnSetButtonSelectedEvent_Params
	{
	public:
		class UOrionUserWidgetBase*                                Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.OnSpectatorCameraModeChangeEvent
	 */
	struct USpectatorViewOptions_C_OnSpectatorCameraModeChangeEvent_Params
	{
	public:
		ESpectatorCameraType                                       NewCameraMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.Destruct
	 */
	struct USpectatorViewOptions_C_Destruct_Params
	{	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_On Clicked__DelegateSignature
	 */
	struct USpectatorViewOptions_C_BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params
	{
	public:
		class UToggleButton_C*                                     Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpectatorViewOptions.SpectatorViewOptions_C.ExecuteUbergraph_SpectatorViewOptions
	 */
	struct USpectatorViewOptions_C_ExecuteUbergraph_SpectatorViewOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06V8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
