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
	 * WidgetBlueprintGeneratedClass InventoryItem_Charm.InventoryItem_Charm_C
	 * Size -> 0x0028 (FullSize[0x0518] - InheritedSize[0x04F0])
	 */
	class UInventoryItem_Charm_C : public UOrionInventoryItem_Charm
	{
	public:
		unsigned char                                              UnknownData_Y6Y2[0x28];                                  // 0x04F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void BP_OnItemSet();
		void OnMouseEnter(const struct FMouseEvent& MyGeometry);
		void OnMouseLeave();
		void ExecuteUbergraph_InventoryItem_Charm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
