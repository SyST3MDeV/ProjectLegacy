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
	 * WidgetBlueprintGeneratedClass WeeklyQuests.WeeklyQuests_C
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UWeeklyQuests_C : public UWeeklyQuestsBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHomeBox_C*                                          HomeBox;                                                 // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnQuestPanelAdded(class UOrionQuestProgressBarBase* NewQuestPanel, class UPanelSlot* AddedToSlot);
		void ExecuteUbergraph_WeeklyQuests(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
