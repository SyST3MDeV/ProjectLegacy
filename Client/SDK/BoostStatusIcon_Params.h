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
	 * Function BoostStatusIcon.BoostStatusIcon_C.UpdateIcon
	 */
	struct UBoostStatusIcon_C_UpdateIcon_Params
	{	};

	/**
	 * Function BoostStatusIcon.BoostStatusIcon_C.Construct
	 */
	struct UBoostStatusIcon_C_Construct_Params
	{	};

	/**
	 * Function BoostStatusIcon.BoostStatusIcon_C.ExecuteUbergraph_BoostStatusIcon
	 */
	struct UBoostStatusIcon_C_ExecuteUbergraph_BoostStatusIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MUOA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
