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
	 * WidgetBlueprintGeneratedClass SkipSignInScreen.SkipSignInScreen_C
	 * Size -> 0x0050 (FullSize[0x0498] - InheritedSize[0x0448])
	 */
	class USkipSignInScreen_C : public UTitleScreenBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    ContinuePlayButton;                                      // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     ContinueSwitcher;                                        // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_3;                                                 // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_130;                                               // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    LoginButton;                                             // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_3;                                         // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SignUpButton;                                            // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScaleBox*                                           WaitOption;                                              // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		bool Get_ContinuePlayButton_bIsEnabled_1();
		void BndEvt__LoginButton_K2Node_ComponentBoundEvent_103_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__ContinuePlayButton_K2Node_ComponentBoundEvent_114_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void NavigateBack();
		void OnActivated();
		void OnDoneWaiting();
		void BndEvt__SignUpButton_K2Node_ComponentBoundEvent_175_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_SkipSignInScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
