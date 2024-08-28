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
	 * Function AnalogCursor.AnalogCursor_C.Hover Happened
	 */
	struct UAnalogCursor_C_HoverHappened_Params
	{
	public:
		bool                                                       IsHovering;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnalogCursor.AnalogCursor_C.Construct
	 */
	struct UAnalogCursor_C_Construct_Params
	{	};

	/**
	 * Function AnalogCursor.AnalogCursor_C.CustomEvent_1
	 */
	struct UAnalogCursor_C_CustomEvent_1_Params
	{	};

	/**
	 * Function AnalogCursor.AnalogCursor_C.OnFaceButtonClick_Event_1
	 */
	struct UAnalogCursor_C_OnFaceButtonClick_Event_1_Params
	{	};

	/**
	 * Function AnalogCursor.AnalogCursor_C.ExecuteUbergraph_AnalogCursor
	 */
	struct UAnalogCursor_C_ExecuteUbergraph_AnalogCursor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
