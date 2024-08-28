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
	 * WidgetBlueprintGeneratedClass FrontEndPartyMember.FrontEndPartyMember_C
	 * Size -> 0x0060 (FullSize[0x0308] - InheritedSize[0x02A8])
	 */
	class UFrontEndPartyMember_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMenuAnchor*                                         AnchorInvite;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMenuAnchor*                                         AnchorPartyMemberOptions;                                // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImagePartyLeaderIcon;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextAccountLevel;                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetSwitcher*                                     SwitcherContent;                                         // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             BorderBanIndicator;                                      // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageReadyStatus;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USelectableIconButton_C*                             SelectableIconButtonInvite;                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USelectableIconButton_C*                             SelectableIconButtonMember;                              // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionPersistentPartyMember*                         MemberState;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UPartyContextMenu_C*                                 ContextMenu;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UWidget* GetQuickInviteMenu();
		void RefreshWidget();
		void CloseInviteMenu();
		void ClosePartyMemberMenu();
		class UWidget* GetPartyMemberContextMenu();
		void UpdatePartyMember(class UOrionPersistentPartyMember* PartyMember);
		void BndEvt__AnchorPartyMemberOptions_K2Node_ComponentBoundEvent_504_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void BndEvt__AnchorInvite_K2Node_ComponentBoundEvent_511_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_61_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__SelectableIconButtonInvite_K2Node_ComponentBoundEvent_72_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1017_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__SelectableIconButtonMember_K2Node_ComponentBoundEvent_1028_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void Construct();
		void ExecuteUbergraph_FrontEndPartyMember(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
