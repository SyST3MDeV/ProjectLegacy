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
	 * WidgetBlueprintGeneratedClass RegionListItem.RegionListItem_C
	 * Size -> 0x00D0 (FullSize[0x0BA0] - InheritedSize[0x0AD0])
	 */
	class URegionListItem_C : public UOrionRegionListItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AD0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox_C*                                         CheckBox;                                                // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     RegionIdText;                                            // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     RegionNameText;                                          // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     RegionPingText;                                          // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FSlateColor                                         Red;                                                     // 0x0AF8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Green;                                                   // 0x0B20(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Yellow;                                                  // 0x0B48(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Orange;                                                  // 0x0B70(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class UObject*                                             MMRegion;                                                // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		int32_t DoesItemHaveChildren();
		int32_t GetIndentLevel();
		ESelectionMode GetSelectionMode();
		bool IsItemExpanded();
		class UObject* GetData();
		void SetData(class UObject* InData);
		void BP_OnSelected();
		void BP_OnDeselected();
		void Reset();
		void ExecuteUbergraph_RegionListItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
