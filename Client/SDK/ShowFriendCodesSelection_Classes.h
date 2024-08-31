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
	 * WidgetBlueprintGeneratedClass ShowFriendCodesSelection.ShowFriendCodesSelection_C
	 * Size -> 0x0030 (FullSize[0x0468] - InheritedSize[0x0438])
	 */
	class UShowFriendCodesSelection_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_H2AY[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        CodesList;                                               // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButton;                                           // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UFriendCodePC_C*                                     FriendCodePC;                                            // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UFriendCodePC_C*                                     FriendCodePC_1;                                          // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_41_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_ShowFriendCodesSelection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
