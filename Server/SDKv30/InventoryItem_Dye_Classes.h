#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * WidgetBlueprintGeneratedClass InventoryItem_Dye.InventoryItem_Dye_C
	 * Size -> 0x0061 (FullSize[0x0551] - InheritedSize[0x04F0])
	 */
	class UInventoryItem_Dye_C : public UOrionInventoryItem_Dye
	{
	public:
		unsigned char                                              UnknownData_JPDZ[0x61];                                  // 0x04F0(0x0061) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void BP_OnItemSet();
		void OnMouseEnter(const struct FMouseEvent& MyGeometry);
		void OnMouseLeave();
		void BP_OnSelectionChanged(bool bIsSelected);
		void ExecuteUbergraph_InventoryItem_Dye(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
