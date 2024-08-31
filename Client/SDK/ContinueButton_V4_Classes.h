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
	 * WidgetBlueprintGeneratedClass ContinueButton_V4.ContinueButton-V4_C
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UContinueButtonV4_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             ContinueButton;                                          // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          ContinueText;                                            // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FTimerHandle                                        EndTimerHandle;                                          // 0x0250(0x0008) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        UpdateVisualsTimerHandle;                                // 0x0258(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateVisuals();
		void StartTimer();
		void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_447_OnButtonClickedEvent__DelegateSignature();
		void TimerOver();
		void ExecuteUbergraph_ContinueButtonV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
