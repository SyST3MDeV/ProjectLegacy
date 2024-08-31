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
	 * WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
	 * Size -> 0x00A8 (FullSize[0x0350] - InheritedSize[0x02A8])
	 */
	class ULoginScreen_C : public UOrionStateWidget_Login
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    LoginWindowFade_In;                                      // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCircularThrobber*                                   AsyncLoadingCircularThrobber;                            // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderLogoBackplate;                                     // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    CreateAccountButton;                                     // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageBacking;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageParagon;                                            // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULoginWindow_C*                                      LoginWindow;                                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    QuitGameButton;                                          // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    RunBenchmarkButton;                                      // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVersionInfo_C*                                      VersionInfo;                                             // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnAutoLoginStarted;                                      // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAutoLoginFinished;                                     // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USoundBase*                                          RequestPasswordSound;                                    // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CreateAccountSound;                                      // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                EmptyEmail;                                              // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnTimedOut_9B4AE3274E2C73847AC4CD823BF8C098();
		void OnKilled_9B4AE3274E2C73847AC4CD823BF8C098();
		void OnDeclined_9B4AE3274E2C73847AC4CD823BF8C098();
		void OnConfirmed_9B4AE3274E2C73847AC4CD823BF8C098();
		void OnEnterState(EOrionUIState PreviousState);
		void OnLoginComplete(ELoginResult Result, const class FText& Message);
		void BndEvt__LoginWindow_K2Node_ComponentBoundEvent_394_OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe);
		void BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_893_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__RunBenchmarkButton_K2Node_ComponentBoundEvent_133_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnWebCreateAccountComplete(bool bSuccess, const class FText& Message, const class FString& AuthCode);
		void OnWebForgotPasswordComplete(bool bSuccess, const class FText& Message);
		void OnLoginAuthCodeComplete(ELoginResult Result, const class FText& Message);
		void BndEvt__LoginWindow_K2Node_ComponentBoundEvent_1_OnForgotPasswordRequest__DelegateSignature(const class FText& Email);
		void BndEvt__CreateAccountButton_K2Node_ComponentBoundEvent_165_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Construct();
		void ExecuteUbergraph_LoginScreen(int32_t EntryPoint);
		void OnAutoLoginFinished__DelegateSignature();
		void OnAutoLoginStarted__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
