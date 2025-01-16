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
	 * Function CalloutMenu.CalloutMenu_C.SetPipPosition
	 */
	struct UCalloutMenu_C_SetPipPosition_Params
	{
	public:
		EK2Node_SwitchEnum_CmpSuccess                              Position;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CalloutMenu.CalloutMenu_C.Construct
	 */
	struct UCalloutMenu_C_Construct_Params
	{	};

	/**
	 * Function CalloutMenu.CalloutMenu_C.PreConstruct
	 */
	struct UCalloutMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CalloutMenu.CalloutMenu_C.ExecuteUbergraph_CalloutMenu
	 */
	struct UCalloutMenu_C_ExecuteUbergraph_CalloutMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
