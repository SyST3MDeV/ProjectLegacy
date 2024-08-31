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
	 * WidgetBlueprintGeneratedClass HandSlot.HandSlot_C
	 * Size -> 0x00B1 (FullSize[0x07E1] - InheritedSize[0x0730])
	 */
	class UHandSlot_C : public UOrionHandSlotWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0730(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    IdealSlot;                                               // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    SelectedAnim;                                            // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    CardAdded;                                               // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    AutoSlotShow;                                            // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    PointSpendAnim;                                          // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    PointAnim;                                               // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Border_Background;                                       // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             Border_CostAnim;                                         // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            Box_Input;                                               // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USizeBox*                                            Box_Trash;                                               // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             ButtonState;                                             // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              HotkeyHightlight;                                        // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImagePendingChange;                                      // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Input_Container;                                         // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             SlotRollover;                                            // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              UpgradeApplied;                                          // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x07C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USoundBase*                                          CardSlotSound;                                           // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class USoundBase*                                          CardUpgradeSound;                                        // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOrionHandSlotState                                        LastState;                                               // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnActionPressed();
		void ApplyUpgradeorReplace();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdatePassiveorAction();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BP_OnCardStateChanged(EOrionHandSlotState NewState);
		void BndEvt__Card_K2Node_ComponentBoundEvent_44_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnSelectionChanged(bool bSelected);
		void OnReadOnlyChanged(bool bIsReadOnly);
		void ExecuteUbergraph_HandSlot(int32_t EntryPoint);
		void OnClick__DelegateSignature(class UHandSlot_C* HandSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
