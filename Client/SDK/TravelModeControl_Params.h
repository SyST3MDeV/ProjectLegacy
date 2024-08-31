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
	 * Function TravelModeControl.TravelModeControl_C.UpdateVisibleBinding
	 */
	struct UTravelModeControl_C_UpdateVisibleBinding_Params
	{
	public:
		bool                                                       IsUsingGamepad;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TravelModeControl.TravelModeControl_C.Construct
	 */
	struct UTravelModeControl_C_Construct_Params
	{	};

	/**
	 * Function TravelModeControl.TravelModeControl_C.PreConstruct
	 */
	struct UTravelModeControl_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TravelModeControl.TravelModeControl_C.ExecuteUbergraph_TravelModeControl
	 */
	struct UTravelModeControl_C_ExecuteUbergraph_TravelModeControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LVMF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
