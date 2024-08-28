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
	 * WidgetBlueprintGeneratedClass EULAWidget.EULAWidget_C
	 * Size -> 0x0068 (FullSize[0x04A0] - InheritedSize[0x0438])
	 */
	class UEULAWidget_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_348R[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    AcceptButton;                                            // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DeclineButton;                                           // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionEULAText*                                      EulaText;                                                // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionEULAStyleData*                                 EulaStyleData;                                           // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FText                                                EulaTextStr;                                             // 0x0468(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnEulaAccept;                                            // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEulaDecline;                                           // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetEulaText(const class FText& EulaText);
		bool OnHandleBackAction();
		void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_193_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnActivated();
		void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_161_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnDeactivated();
		void ExecuteUbergraph_EULAWidget(int32_t EntryPoint);
		void OnEulaDecline__DelegateSignature();
		void OnEulaAccept__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
