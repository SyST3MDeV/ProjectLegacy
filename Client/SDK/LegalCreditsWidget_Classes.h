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
	 * WidgetBlueprintGeneratedClass LegalCreditsWidget.LegalCreditsWidget_C
	 * Size -> 0x0058 (FullSize[0x0490] - InheritedSize[0x0438])
	 */
	class ULegalCreditsWidget_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_3RCL[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    Button_Cancel;                                           // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionEULAText*                                      LegalText;                                               // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultTab_C*                                       Tab_Credits;                                             // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultTab_C*                                       Tab_EULA;                                                // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionEULAStyleData*                                 EulaStyleData;                                           // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FText                                                LegalCreditText;                                         // 0x0470(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UOrionBaseButton_Group*                              TabGroup;                                                // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_281_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Construct();
		void OnSelectedButtonChanged_Event_1(class UOrionBaseButton* SelectedButton, int32_t ButtonIndex);
		void ExecuteUbergraph_LegalCreditsWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
