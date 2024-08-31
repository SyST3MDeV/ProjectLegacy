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
	 * WidgetBlueprintGeneratedClass KeyboardBinding.KeyboardBinding_C
	 * Size -> 0x0089 (FullSize[0x0331] - InheritedSize[0x02A8])
	 */
	class UKeyboardBinding_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionTextBlock*                                     BindingLabel;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionInputKeySelector*                              PrimaryKeySelector;                                      // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionInputKeySelector*                              SecondaryKeySelector;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FName                                                BindingName;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FText                                                BindingDisplayName;                                      // 0x02D0(0x0018) Edit, BlueprintVisible
		//EKeyBindingType                                            BindingType;                                             // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JAX1[0x1];
		unsigned char                                              UnknownData_JAXD[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         CurrentPrimaryKey;                                       // 0x02F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FInputChord                                         CurrentSecondaryKey;                                     // 0x0310(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AllowModifierKeys;                                       // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Refresh();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_876_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_9_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void BndEvt__PrimaryKeySelector_K2Node_ComponentBoundEvent_15_OnIsSelectingKeyChanged__DelegateSignature();
		void BndEvt__SecondaryKeySelector_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature();
		void ExecuteUbergraph_KeyboardBinding(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
