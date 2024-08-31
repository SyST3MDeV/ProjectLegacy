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
	 * Function Slot_Effect.Slot_Effect_C.BP_OnItemSet
	 */
	struct USlot_Effect_C_BP_OnItemSet_Params
	{
	public:
		struct FOrionSlotDisplayInfo                               ItemInfo;                                                // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Slot_Effect.Slot_Effect_C.BP_OnSelectionChanged
	 */
	struct USlot_Effect_C_BP_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Slot_Effect.Slot_Effect_C.OnMouseEnter
	 */
	struct USlot_Effect_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HW0A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Slot_Effect.Slot_Effect_C.OnMouseLeave
	 */
	struct USlot_Effect_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Slot_Effect.Slot_Effect_C.ExecuteUbergraph_Slot_Effect
	 */
	struct USlot_Effect_C_ExecuteUbergraph_Slot_Effect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
