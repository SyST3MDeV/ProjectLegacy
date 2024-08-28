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
	 * Function TabList.TabList_C.ClearCallToAction
	 */
	struct UTabList_C_ClearCallToAction_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TabList.TabList_C.SetCallToAction
	 */
	struct UTabList_C_SetCallToAction_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                Tooltip;                                                 // 0x0008(0x0018)  (Parm)
	};

	/**
	 * Function TabList.TabList_C.OnCreateNewTab
	 */
	struct UTabList_C_OnCreateNewTab_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UOrionBaseButton*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TabList.TabList_C.PreConstruct
	 */
	struct UTabList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TabList.TabList_C.ExecuteUbergraph_TabList
	 */
	struct UTabList_C_ExecuteUbergraph_TabList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
