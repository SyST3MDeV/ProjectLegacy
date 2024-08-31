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
	 * WidgetBlueprintGeneratedClass BuyAccessScreen.BuyAccessScreen_C
	 * Size -> 0x0038 (FullSize[0x0480] - InheritedSize[0x0448])
	 */
	class UBuyAccessScreen_C : public UTitleScreenBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0448(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    GoToPlaystationStoreButton;                              // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_3;                                                 // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_130;                                               // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_2;                                         // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionRichText*                                      OrionRichText_4;                                         // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    SignInForAccessButton;                                   // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		ESlateVisibility Get_SignInForAccessButton_Visibility_1();
		void BndEvt__SignInForAccessButton_K2Node_ComponentBoundEvent_5_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void NavigateBack();
		void BndEvt__GoToPlaystationStoreButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnStoreClosed(bool bPurchased);
		void OnActivated();
		void ExecuteUbergraph_BuyAccessScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
