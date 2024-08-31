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
	 * WidgetBlueprintGeneratedClass HUD_Menu_Manager_Widget.HUD_Menu_Manager_Widget_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UHUD_Menu_Manager_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAbilityUpgradePanelV4_C*                            AbilityUpgradePanelV4;                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UAbilityUpgradePanelPullTabV4_C*                     AbilityUpgradePanelPullTabV4;                            // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCardMenuV3_C*                                       CardMenuV3;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEndGameScoreboardV4_C*                              EndGameScoreboardV4;                                     // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UEscape_Menu_Widget_C*                               Escape_Menu_Widget;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULargeMap_C*                                         LargeMap;                                                // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionMenuManagerWidget*                             MenuManagerWidget;                                       // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UScoreboardMenuV4_C*                                 ScoreboardMenuV4;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTeamCommsMenuV3_C*                                  TeamCommsMenuV3;                                         // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdateAnalogCursorState();
		void HandleChangeInOpenState(EOrionMenuSlotTypes MenuSlotType, bool IsNewlyVisible);
		void Construct();
		void ExecuteUbergraph_HUD_Menu_Manager_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
