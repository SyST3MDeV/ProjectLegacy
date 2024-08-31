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
	 * Function InBaseCombatMessage.InBaseCombatMessage_C.Construct
	 */
	struct UInBaseCombatMessage_C_Construct_Params
	{	};

	/**
	 * Function InBaseCombatMessage.InBaseCombatMessage_C.SetUsingGamepad
	 */
	struct UInBaseCombatMessage_C_SetUsingGamepad_Params
	{
	public:
		bool                                                       bUsingGamepad;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InBaseCombatMessage.InBaseCombatMessage_C.ExecuteUbergraph_InBaseCombatMessage
	 */
	struct UInBaseCombatMessage_C_ExecuteUbergraph_InBaseCombatMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
