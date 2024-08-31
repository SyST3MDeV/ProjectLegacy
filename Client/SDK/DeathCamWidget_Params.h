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
	 * Function DeathCamWidget.DeathCamWidget_C.Construct
	 */
	struct UDeathCamWidget_C_Construct_Params
	{	};

	/**
	 * Function DeathCamWidget.DeathCamWidget_C.HandleInputMethodChanged
	 */
	struct UDeathCamWidget_C_HandleInputMethodChanged_Params
	{
	public:
		bool                                                       UsingAnalog;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DeathCamWidget.DeathCamWidget_C.ExecuteUbergraph_DeathCamWidget
	 */
	struct UDeathCamWidget_C_ExecuteUbergraph_DeathCamWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XSLH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
