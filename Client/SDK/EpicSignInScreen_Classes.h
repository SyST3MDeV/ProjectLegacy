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
	 * WidgetBlueprintGeneratedClass EpicSignInScreen.EpicSignInScreen_C
	 * Size -> 0x0058 (FullSize[0x04A0] - InheritedSize[0x0448])
	 */
	class UEpicSignInScreen_C : public UTitleScreenBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_3;                                                 // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_9;                                                 // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_130;                                               // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULoginWindow_C*                                      LoginWindow;                                             // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_3;                                         // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_4;                                         // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnLoginRequest;                                          // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnForgotPasswordRequest;                                 // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__LoginWindow_K2Node_ComponentBoundEvent_28_OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe);
		void BndEvt__LoginWindow_K2Node_ComponentBoundEvent_40_OnForgotPasswordRequest__DelegateSignature(const class FText& Email);
		void NavigateBack();
		void ExecuteUbergraph_EpicSignInScreen(int32_t EntryPoint);
		void OnForgotPasswordRequest__DelegateSignature(const class FText& Email);
		void OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
