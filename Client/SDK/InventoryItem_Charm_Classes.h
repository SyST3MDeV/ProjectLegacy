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
	 * WidgetBlueprintGeneratedClass InventoryItem_Charm.InventoryItem_Charm_C
	 * Size -> 0x00C2 (FullSize[0x0602] - InheritedSize[0x0540])
	 */
	class UInventoryItem_Charm_C : public UOrionInventoryItem_Charm
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ItemSet;                                                 // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Selection;                                               // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    DeHover;                                                 // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Hover;                                                   // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_HighlightOutline;                                  // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_Hover;                                             // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_Icon;                                              // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_ImageSet_Fill;                                     // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_InUse_Border;                                      // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_InUse_Darken;                                      // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_ItemSet_Outline;                                   // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_Outline;                                           // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_StckCntBckng;                                      // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageBacking_glow;                                       // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     OrionTextstackcount;                                     // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            Overlay_InUse;                                           // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            OverlayStackCount;                                       // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     Text_InUse;                                              // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     Text_Label;                                              // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                NewVar_1;                                                // 0x05E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       isSelected;                                              // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowStackCount;                                          // 0x0601(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn

	public:
		void UpdateStackCount(int32_t Count);
		void Construct();
		void BP_OnItemSet(const struct FInventoryItemDisplayData& DisplayData);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void BP_OnReset();
		void BP_OnSelectionChanged(bool bIsSelected);
		void BP_OnSetItemInUse(bool bInUse);
		void BP_OnStackCountChanged(int32_t NewCount);
		void BP_OnDyesLoading();
		void BP_OnDyeLoaded(int32_t Dye, class UTexture2D* DyeTexture);
		void ExecuteUbergraph_InventoryItem_Charm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
