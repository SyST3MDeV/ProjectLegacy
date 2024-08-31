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
	 * WidgetBlueprintGeneratedClass Storefront_Popup.Storefront_Popup_C
	 * Size -> 0x0020 (FullSize[0x0690] - InheritedSize[0x0670])
	 */
	class UStorefront_Popup_C : public UOrionStorefrontPopup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Appear;                                                  // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             StoreClosed;                                             // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnActivated();
		void OnDeactivated();
		void ExecuteUbergraph_Storefront_Popup(int32_t EntryPoint);
		void StoreClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
