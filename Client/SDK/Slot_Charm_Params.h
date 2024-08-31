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
	 * Function Slot_Charm.Slot_Charm_C.Update Dye Visibility
	 */
	struct USlot_Charm_C_UpdateDyeVisibility_Params
	{
	public:
		int32_t                                                    SlotCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.Construct
	 */
	struct USlot_Charm_C_Construct_Params
	{	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.BP_OnItemSet
	 */
	struct USlot_Charm_C_BP_OnItemSet_Params
	{
	public:
		struct FOrionSlotDisplayInfo                               ItemInfo;                                                // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.BP_OnSelectionChanged
	 */
	struct USlot_Charm_C_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.OnMouseEnter
	 */
	struct USlot_Charm_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_888H[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.OnMouseLeave
	 */
	struct USlot_Charm_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.BP_FinishLoadingDye
	 */
	struct USlot_Charm_C_BP_FinishLoadingDye_Params
	{
	public:
		int32_t                                                    DyeSlot;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZUYH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Dye;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.BP_OnReset
	 */
	struct USlot_Charm_C_BP_OnReset_Params
	{	};

	/**
	 * Function Slot_Charm.Slot_Charm_C.ExecuteUbergraph_Slot_Charm
	 */
	struct USlot_Charm_C_ExecuteUbergraph_Slot_Charm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
