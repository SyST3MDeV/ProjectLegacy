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
	 * WidgetBlueprintGeneratedClass SpectatorViewOptions.SpectatorViewOptions_C
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class USpectatorViewOptions_C : public UOrionSpectatorViewOptions
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void OnSetButtonSelectedEvent(class UOrionUserWidgetBase* Button, bool bIsSelected);
		void BndEvt__CameraType_Drone_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void BndEvt__CameraType_Chase_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void BndEvt__CameraType_Moba_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void OnSpectatorCameraModeChangeEvent(ESpectatorCameraType NewCameraMode);
		void BndEvt__ChaseOption_Free_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void BndEvt__ChaseOption_Auto_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void BndEvt__MobaOption_Free_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void BndEvt__MobaOption_Auto_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void Destruct();
		void BndEvt__CameraType_Foliage_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature(class UToggleButton_C* Button);
		void ExecuteUbergraph_SpectatorViewOptions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
