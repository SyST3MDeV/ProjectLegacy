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
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.Update Stack Count
	 */
	struct UInventoryItem_Charm_C_UpdateStackCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.Construct
	 */
	struct UInventoryItem_Charm_C_Construct_Params
	{	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnItemSet
	 */
	struct UInventoryItem_Charm_C_BP_OnItemSet_Params
	{
	public:
		struct FInventoryItemDisplayData                           DisplayData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseEnter
	 */
	struct UInventoryItem_Charm_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MADL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.OnMouseLeave
	 */
	struct UInventoryItem_Charm_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnReset
	 */
	struct UInventoryItem_Charm_C_BP_OnReset_Params
	{	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnSelectionChanged
	 */
	struct UInventoryItem_Charm_C_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnSetItemInUse
	 */
	struct UInventoryItem_Charm_C_BP_OnSetItemInUse_Params
	{
	public:
		bool                                                       bInUse;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnStackCountChanged
	 */
	struct UInventoryItem_Charm_C_BP_OnStackCountChanged_Params
	{
	public:
		int32_t                                                    NewCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnDyesLoading
	 */
	struct UInventoryItem_Charm_C_BP_OnDyesLoading_Params
	{	};

	/**
	 * Function InventoryItem_Charm.InventoryItem_Charm_C.BP_OnDyeLoaded
	 */
	struct UInventoryItem_Charm_C_BP_OnDyeLoaded_Params
	{
	public:
		int32_t                                                    Dye;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XCKR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          DyeTexture;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

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
