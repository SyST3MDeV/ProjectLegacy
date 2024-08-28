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
	 * Function VictoryDefeatScreen.VictoryDefeatScreen_C.ShowVictory
	 */
	struct UVictoryDefeatScreen_C_ShowVictory_Params
	{	};

	/**
	 * Function VictoryDefeatScreen.VictoryDefeatScreen_C.ShowDefeat
	 */
	struct UVictoryDefeatScreen_C_ShowDefeat_Params
	{	};

	/**
	 * Function VictoryDefeatScreen.VictoryDefeatScreen_C.ExecuteUbergraph_VictoryDefeatScreen
	 */
	struct UVictoryDefeatScreen_C_ExecuteUbergraph_VictoryDefeatScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HL4X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function VictoryDefeatScreen.VictoryDefeatScreen_C.NewEventDispatcher_0__DelegateSignature
	 */
	struct UVictoryDefeatScreen_C_NewEventDispatcher_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
