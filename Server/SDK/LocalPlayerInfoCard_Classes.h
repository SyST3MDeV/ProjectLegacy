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
	 * WidgetBlueprintGeneratedClass LocalPlayerInfoCard.LocalPlayerInfoCard_C
	 * Size -> 0x0048 (FullSize[0x0AF8] - InheritedSize[0x0AB0])
	 */
	class ULocalPlayerInfoCard_C : public UOrionBaseButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImagePartyLeaderIcon;                                    // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImagePortrait;                                           // 0x0AC0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMenuAnchor*                                         MenuActions;                                             // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        ProgressBarExp;                                          // 0x0AD0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_10592;                                             // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextAccountLevel;                                   // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPartyContextMenu_C*                                 ContextMenu;                                             // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FText Get_OrionTextPlayerName_Text_1();
		void HandleProfileStatsUpdated();
		void HandlePartyChanged();
		void CloseContextMenu();
		class UWidget* GetMemberContextMenu();
		void Construct();
		void BndEvt__MenuActions_K2Node_ComponentBoundEvent_732_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void BP_OnClicked();
		void ExecuteUbergraph_LocalPlayerInfoCard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
