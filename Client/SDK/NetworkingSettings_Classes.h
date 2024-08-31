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
	 * WidgetBlueprintGeneratedClass NetworkingSettings.NetworkingSettings_C
	 * Size -> 0x0039 (FullSize[0x0471] - InheritedSize[0x0438])
	 */
	class UNetworkingSettings_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_9JW5[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    LanguageButton;                                          // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMenuAnchor*                                         MenuAnchor_407;                                          // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlatformSpecificWidget*                             PlatformSpecificWidget_1;                                // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URegionList_C*                                       RegionList_51;                                           // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULanguagePopup_C*                                    LanguagePopupWidget;                                     // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LanguageChanged;                                         // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Apply();
		void OnLanguageChanged(const class FString& LanguageCode);
		class UWidget* OnGetMenuContent_1();
		void Refresh();
		void OnActivated();
		void BndEvt__LanguageButton_K2Node_ComponentBoundEvent_268_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Construct();
		void ExecuteUbergraph_NetworkingSettings(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
