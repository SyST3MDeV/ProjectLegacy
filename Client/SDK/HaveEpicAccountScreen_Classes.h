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
	 * WidgetBlueprintGeneratedClass HaveEpicAccountScreen.HaveEpicAccountScreen_C
	 * Size -> 0x0040 (FullSize[0x0488] - InheritedSize[0x0448])
	 */
	class UHaveEpicAccountScreen_C : public UTitleScreenBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_3;                                                 // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_9;                                                 // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_130;                                               // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    LoginButton;                                             // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    NoThanksButton;                                          // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_3;                                         // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SignUpButton;                                            // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BndEvt__YesButton_K2Node_ComponentBoundEvent_483_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__NoButton_K2Node_ComponentBoundEvent_506_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void NavigateBack();
		void BndEvt__SignUpButton_K2Node_ComponentBoundEvent_131_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_HaveEpicAccountScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
