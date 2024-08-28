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
	 * WidgetBlueprintGeneratedClass EcosystemRoot.EcosystemRoot_C
	 * Size -> 0x0049 (FullSize[0x0481] - InheritedSize[0x0438])
	 */
	class UEcosystemRoot_C : public UOrionActivatableWidget
	{
	public:
		unsigned char                                              UnknownData_09UK[0x8];                                   // 0x0438(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMenuAnchor*                                         AnchorFriendsList;                                       // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMenuAnchor*                                         AnchorOptions;                                           // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Friends;                                                 // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USelectableIconButton_C*                             SelectableIconButtonFriends;                             // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USelectableIconButton_C*                             SelectableIconButtonOptions;                             // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionBaseButton_Group*                              ButtonGroup;                                             // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UOrionBaseButton*                                    CurrentButton;                                           // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHamburgerOnly;                                          // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		bool OnHandleBackAction();
		void CloseOptionsMenu();
		class UWidget* GetOptionsMenuContent();
		void HandleMenuAnchorChanged(bool IsOpen, class UOrionBaseButton* Button);
		void ClearActiveMenu();
		void HandleButtonClicked(class UOrionBaseButton* Button, class UMenuAnchor* Anchor);
		void Construct();
		void BndEvt__AnchorFriendsList_K2Node_ComponentBoundEvent_1224_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void BndEvt__AnchorOptions_K2Node_ComponentBoundEvent_1343_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1287_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__SelectableIconButtonOptions_K2Node_ComponentBoundEvent_1301_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1314_OrionSelectedStateChanged__DelegateSignature(class UOrionBaseButton* Button, bool Selected);
		void BndEvt__SelectableIconButtonFriends_K2Node_ComponentBoundEvent_1330_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_EcosystemRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
