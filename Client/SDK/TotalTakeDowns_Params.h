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
	 * Function TotalTakeDowns.TotalTakeDowns_C.OnMouseButtonDown
	 */
	struct UTotalTakeDowns_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SRN7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TotalTakeDowns.TotalTakeDowns_C.OnMouseEnter
	 */
	struct UTotalTakeDowns_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MB6U[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TotalTakeDowns.TotalTakeDowns_C.OnMouseLeave
	 */
	struct UTotalTakeDowns_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TotalTakeDowns.TotalTakeDowns_C.ExecuteUbergraph_TotalTakeDowns
	 */
	struct UTotalTakeDowns_C_ExecuteUbergraph_TotalTakeDowns_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
