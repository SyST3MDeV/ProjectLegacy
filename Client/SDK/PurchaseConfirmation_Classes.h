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
	 * WidgetBlueprintGeneratedClass PurchaseConfirmation.PurchaseConfirmation_C
	 * Size -> 0x0030 (FullSize[0x06D0] - InheritedSize[0x06A0])
	 */
	class UPurchaseConfirmation_C : public UOrionPurchaseConfirmationWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Dismiss;                                                 // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Appear;                                                  // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCircularThrobber*                                   CircularThrobber_1;                                      // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionWidgetSwitcher*                                OrionSwitcherPurchaseFlow;                               // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextPurchaseResult;                                 // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void OnBeginPurchase();
		void OnPurchaseComplete(bool bSuccessful);
		void OnActivated();
		void BndEvt__Appear_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
		void OnDeactivated();
		void ExecuteUbergraph_PurchaseConfirmation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
