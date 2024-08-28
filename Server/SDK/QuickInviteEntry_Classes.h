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
	 * WidgetBlueprintGeneratedClass QuickInviteEntry.QuickInviteEntry_C
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UQuickInviteEntry_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    DefaultButtonInvite;                                     // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionFriendItem*                                    FriendItem;                                              // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnInviteClicked;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		int32_t DoesItemHaveChildren();
		int32_t GetIndentLevel();
		ESelectionMode GetSelectionMode();
		bool IsItemExpanded();
		class UObject* GetData();
		void Private_OnExpanderArrowShiftClicked();
		void SetIndexInList(int32_t InIndexInList);
		void SetSelected(bool bSelected);
		void ToggleExpansion();
		void Reset();
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_511_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void SetData(class UObject* InData);
		void RegisterOnClicked(const class FScriptDelegate& Callback);
		void ExecuteUbergraph_QuickInviteEntry(int32_t EntryPoint);
		void OnInviteClicked__DelegateSignature(class UUserWidget* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
