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
	 * WidgetBlueprintGeneratedClass TutorialMessage.TutorialMessage_C
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class UTutorialMessage_C : public UOrionTutorialMessageWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Appear;                                                  // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BndEvt__Appear_K2Node_ComponentBoundEvent_9_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void BndEvt__Appear_K2Node_ComponentBoundEvent_10_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnShowNewStage();
		void ExecuteUbergraph_TutorialMessage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
