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
	 * Function HoverDotWidgets.HoverDotWidgets_C.SetDotValue
	 */
	struct UHoverDotWidgets_C_SetDotValue_Params
	{
	public:
		float                                                      NewVal;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLTY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HoverDotWidgets.HoverDotWidgets_C.Construct
	 */
	struct UHoverDotWidgets_C_Construct_Params
	{	};

	/**
	 * Function HoverDotWidgets.HoverDotWidgets_C.ExecuteUbergraph_HoverDotWidgets
	 */
	struct UHoverDotWidgets_C_ExecuteUbergraph_HoverDotWidgets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
