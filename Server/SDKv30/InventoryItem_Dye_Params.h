#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InventoryItem_Dye.InventoryItem_Dye_C.Construct
	 */
	struct UInventoryItem_Dye_C_Construct_Params
	{	};

	/**
	 * Function InventoryItem_Dye.InventoryItem_Dye_C.BP_OnItemSet
	 */
	struct UInventoryItem_Dye_C_BP_OnItemSet_Params
	{	};

	/**
	 * Function InventoryItem_Dye.InventoryItem_Dye_C.OnMouseEnter
	 */
	struct UInventoryItem_Dye_C_OnMouseEnter_Params
	{
	public:
		struct FMouseEvent                                         MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Dye.InventoryItem_Dye_C.OnMouseLeave
	 */
	struct UInventoryItem_Dye_C_OnMouseLeave_Params
	{	};

	/**
	 * Function InventoryItem_Dye.InventoryItem_Dye_C.BP_OnSelectionChanged
	 */
	struct UInventoryItem_Dye_C_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Dye.InventoryItem_Dye_C.ExecuteUbergraph_InventoryItem_Dye
	 */
	struct UInventoryItem_Dye_C_ExecuteUbergraph_InventoryItem_Dye_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
