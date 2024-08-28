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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.Construct
	 */
	struct UInventoryItem_Effect_C_Construct_Params
	{	};

	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnItemSet
	 */
	struct UInventoryItem_Effect_C_BP_OnItemSet_Params
	{
	public:
		struct FInventoryItemDisplayData                           DisplayData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.OnMouseLeave
	 */
	struct UInventoryItem_Effect_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.OnMouseEnter
	 */
	struct UInventoryItem_Effect_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_64UD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnSetItemInUse
	 */
	struct UInventoryItem_Effect_C_BP_OnSetItemInUse_Params
	{
	public:
		bool                                                       bInUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.BP_OnSelectionChanged
	 */
	struct UInventoryItem_Effect_C_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Effect.InventoryItem_Effect_C.ExecuteUbergraph_InventoryItem_Effect
	 */
	struct UInventoryItem_Effect_C_ExecuteUbergraph_InventoryItem_Effect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
