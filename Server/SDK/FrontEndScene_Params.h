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
	 * Function FrontEndScene.FrontEndScene_C.ReceiveBeginPlay
	 */
	struct AFrontEndScene_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrontEndScene.FrontEndScene_C.UpdateSettings
	 */
	struct AFrontEndScene_C_UpdateSettings_Params
	{	};

	/**
	 * Function FrontEndScene.FrontEndScene_C.ExecuteUbergraph_FrontEndScene
	 */
	struct AFrontEndScene_C_ExecuteUbergraph_FrontEndScene_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T5O8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
