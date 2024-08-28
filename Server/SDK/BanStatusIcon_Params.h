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
	 * Function BanStatusIcon.BanStatusIcon_C.Construct
	 */
	struct UBanStatusIcon_C_Construct_Params
	{	};

	/**
	 * Function BanStatusIcon.BanStatusIcon_C.HandleBanExpired
	 */
	struct UBanStatusIcon_C_HandleBanExpired_Params
	{	};

	/**
	 * Function BanStatusIcon.BanStatusIcon_C.Destruct
	 */
	struct UBanStatusIcon_C_Destruct_Params
	{	};

	/**
	 * Function BanStatusIcon.BanStatusIcon_C.ExecuteUbergraph_BanStatusIcon
	 */
	struct UBanStatusIcon_C_ExecuteUbergraph_BanStatusIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I3W3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
