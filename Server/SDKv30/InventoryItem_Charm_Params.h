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
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.Construct
	 */
	struct UInventoryItem_Charm_C_Construct_Params
	{	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnItemSet
	 */
	struct UInventoryItem_Charm_C_BP_OnItemSet_Params
	{	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseEnter
	 */
	struct UInventoryItem_Charm_C_OnMouseEnter_Params
	{
	public:
		struct FMouseEvent                                         MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseLeave
	 */
	struct UInventoryItem_Charm_C_OnMouseLeave_Params
	{	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.ExecuteUbergraph_InventoryItem_Charm
	 */
	struct UInventoryItem_Charm_C_ExecuteUbergraph_InventoryItem_Charm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
