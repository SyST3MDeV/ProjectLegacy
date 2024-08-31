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
	 * WidgetBlueprintGeneratedClass BundleScreen.BundleScreen_C
	 * Size -> 0x0018 (FullSize[0x0768] - InheritedSize[0x0750])
	 */
	class UBundleScreen_C : public UOrionBundlePurchaseScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0750(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UExclusiveModeMenu_C*                                ExclusiveModeMenu;                                       // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_3;                                                 // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_0_OnBackClicked__DelegateSignature();
		void OnActivated();
		void SetBundleScreenTitle(const class FText& BundleTitle);
		void ExecuteUbergraph_BundleScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
