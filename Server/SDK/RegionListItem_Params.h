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
	 * Function RegionListItem.RegionListItem_C.DoesItemHaveChildren
	 */
	struct URegionListItem_C_DoesItemHaveChildren_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RegionListItem.RegionListItem_C.GetIndentLevel
	 */
	struct URegionListItem_C_GetIndentLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RegionListItem.RegionListItem_C.GetSelectionMode
	 */
	struct URegionListItem_C_GetSelectionMode_Params
	{
	public:
		ESelectionMode                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RegionListItem.RegionListItem_C.IsItemExpanded
	 */
	struct URegionListItem_C_IsItemExpanded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RegionListItem.RegionListItem_C.GetData
	 */
	struct URegionListItem_C_GetData_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RegionListItem.RegionListItem_C.SetData
	 */
	struct URegionListItem_C_SetData_Params
	{
	public:
		class UObject*                                             InData;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RegionListItem.RegionListItem_C.BP_OnSelected
	 */
	struct URegionListItem_C_BP_OnSelected_Params
	{	};

	/**
	 * Function RegionListItem.RegionListItem_C.BP_OnDeselected
	 */
	struct URegionListItem_C_BP_OnDeselected_Params
	{	};

	/**
	 * Function RegionListItem.RegionListItem_C.Reset
	 */
	struct URegionListItem_C_Reset_Params
	{	};

	/**
	 * Function RegionListItem.RegionListItem_C.ExecuteUbergraph_RegionListItem
	 */
	struct URegionListItem_C_ExecuteUbergraph_RegionListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2F8L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
